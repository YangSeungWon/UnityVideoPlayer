using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

public class TouchHandler : MonoBehaviour
{
    public static bool messageReceived = false;

    public static int recivedbutton = -1;

    public class UDPSocket
    {
        private Socket _socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
        private const int bufSize = 8 * 1024;
        private State state = new State();
        private EndPoint epFrom = new IPEndPoint(IPAddress.Any, 0);
        private AsyncCallback recv = null;

        public class State
        {
            public byte[] buffer = new byte[bufSize];
        }

        public void Server(string address, int port)
        {
            _socket.SetSocketOption(SocketOptionLevel.IP, SocketOptionName.ReuseAddress, true);
            _socket.Bind(new IPEndPoint(IPAddress.Parse(address), port));
            Receive();
        }

        public void Client(string address, int port)
        {
            _socket.Connect(IPAddress.Parse(address), port);
            Receive();
        }

        public void Send(string text)
        {
            byte[] data = Encoding.ASCII.GetBytes(text);
            _socket.BeginSend(data, 0, data.Length, SocketFlags.None, (ar) =>
            {
                State so = (State)ar.AsyncState;
                int bytes = _socket.EndSend(ar);
                Console.WriteLine("SEND: {0}, {1}", bytes, text);
            }, state);
        }

        private void Receive()
        {
            _socket.BeginReceiveFrom(state.buffer, 0, bufSize, SocketFlags.None, ref epFrom, recv = (ar) =>
            {
                State so = (State)ar.AsyncState;
                int bytes = _socket.EndReceiveFrom(ar, ref epFrom);
                _socket.BeginReceiveFrom(so.buffer, 0, bufSize, SocketFlags.None, ref epFrom, recv, so);
                Debug.LogWarning(string.Format("RECV: {0}: {1}, {2}", epFrom.ToString(), bytes, Encoding.ASCII.GetString(so.buffer, 0, bytes)));
                try
                {
                    recivedbutton = int.Parse(Encoding.ASCII.GetString(so.buffer, 0, bytes).Trim());
                    messageReceived = true;
                }
                catch
                {

                }
                
            }, state);
        }
    }

    // Start is called before the first frame update
    private static UDPSocket s = new UDPSocket();
    void Start()
    {
        s.Server("0", 27000);/*
        var _s = new UDPSocket();
        _s.Client("127.0.0.1", 27000);
        _s.Send("test");*/
        //messageReceived = true;
        //recivedbutton = 3;
    }

    void pressButton(int index)
    {
        Debug.Log($"index : {index}");
        var buttons = new List<UnityEngine.UI.Button>(Resources.FindObjectsOfTypeAll<UnityEngine.UI.Button>());
        var target = buttons.FirstOrDefault(x => x.name.Contains(index.ToString()));
        if (target == null) target = buttons.FirstOrDefault(x => !x.name.Contains("("));
        if (target == null) return;
        target.onClick.Invoke();
    }

    // Update is called once per frame
    void Update()
    {
        if(messageReceived)
        {
            if(recivedbutton != -1)
                pressButton(recivedbutton);
            recivedbutton = -1;
            messageReceived = false;
            s.Server("0", 27000);
        }

        var t = Input.GetMouseButtonUp(0);
        if(t)
        {
            pressButton(0);
        }

    }
}
