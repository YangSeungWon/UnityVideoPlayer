#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TensorFlowLite.IGpuDelegate[]
struct IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TensorFlowLite.IGpuDelegate
struct IGpuDelegate_t51708C5B2ECD5EFFEE639A17A4527D3D5B6C1909;
// TensorFlowLite.Interpreter
struct Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9;
// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate
struct ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24EE12FED48DD9020A8243CF10D968E6B9D65BFD;
IL2CPP_EXTERN_C String_t* _stringLiteral90C0C64260A2290CC30E10C37C0E45A183BFBDEE;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6E1EB65E6DF0ABEBDA7EFD4891C6849B7F077C;
IL2CPP_EXTERN_C String_t* _stringLiteralD636EEFC5DCD1E9D43960804AA16B411F9F85D02;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EC059FD2E1492F78DF400D20237FBD64BC2F1B;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC5FD22B469A22302AF08019E16B72E865B9B7BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3018439DBE538807FEC103A39DE6A41CDB5B3E98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m385FB1AB2F4C9EFF2181CB455E6F47B725B2C816_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m92DE0189C14BD8F67401E990B4C88A509DD3AD2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBE92D574387080AEE49C2F0C3E6654EA4C1709BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDED27C85B5D085DCCE8BA05E9CC96B3A522AFE95_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5A6ACE5CA5F58229F9034395B43AD452D9605955 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>
struct List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807, ____items_1)); }
	inline IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* get__items_1() const { return ____items_1; }
	inline IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807_StaticFields, ____emptyArray_5)); }
	inline IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IGpuDelegateU5BU5D_tFE37E6F2AD7414A7B352089B37C74675A7A6F5FE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// TensorFlowLite.InterpreterExtension
struct InterpreterExtension_t24ECB68F50751812C94A70D0CD0191053B0AC642  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>
struct Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27, ___list_0)); }
	inline List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * get_list_0() const { return ___list_0; }
	inline List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TensorFlowLite.Interpreter
struct Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlowLite.Interpreter::model
	intptr_t ___model_0;
	// System.IntPtr TensorFlowLite.Interpreter::interpreter
	intptr_t ___interpreter_1;
	// TensorFlowLite.InterpreterOptions TensorFlowLite.Interpreter::options
	InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * ___options_2;

public:
	inline static int32_t get_offset_of_model_0() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___model_0)); }
	inline intptr_t get_model_0() const { return ___model_0; }
	inline intptr_t* get_address_of_model_0() { return &___model_0; }
	inline void set_model_0(intptr_t value)
	{
		___model_0 = value;
	}

	inline static int32_t get_offset_of_interpreter_1() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___interpreter_1)); }
	inline intptr_t get_interpreter_1() const { return ___interpreter_1; }
	inline intptr_t* get_address_of_interpreter_1() { return &___interpreter_1; }
	inline void set_interpreter_1(intptr_t value)
	{
		___interpreter_1 = value;
	}

	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9, ___options_2)); }
	inline InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * get_options_2() const { return ___options_2; }
	inline InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 ** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_2), (void*)value);
	}
};


// TensorFlowLite.InterpreterOptions
struct InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896  : public RuntimeObject
{
public:
	// System.IntPtr TensorFlowLite.InterpreterOptions::nativePtr
	intptr_t ___nativePtr_0;
	// System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate> TensorFlowLite.InterpreterOptions::delegates
	List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * ___delegates_1;
	// System.Int32 TensorFlowLite.InterpreterOptions::_threads
	int32_t ____threads_2;
	// System.Boolean TensorFlowLite.InterpreterOptions::_useNNAPI
	bool ____useNNAPI_3;

public:
	inline static int32_t get_offset_of_nativePtr_0() { return static_cast<int32_t>(offsetof(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896, ___nativePtr_0)); }
	inline intptr_t get_nativePtr_0() const { return ___nativePtr_0; }
	inline intptr_t* get_address_of_nativePtr_0() { return &___nativePtr_0; }
	inline void set_nativePtr_0(intptr_t value)
	{
		___nativePtr_0 = value;
	}

	inline static int32_t get_offset_of_delegates_1() { return static_cast<int32_t>(offsetof(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896, ___delegates_1)); }
	inline List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * get_delegates_1() const { return ___delegates_1; }
	inline List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 ** get_address_of_delegates_1() { return &___delegates_1; }
	inline void set_delegates_1(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * value)
	{
		___delegates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_1), (void*)value);
	}

	inline static int32_t get_offset_of__threads_2() { return static_cast<int32_t>(offsetof(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896, ____threads_2)); }
	inline int32_t get__threads_2() const { return ____threads_2; }
	inline int32_t* get_address_of__threads_2() { return &____threads_2; }
	inline void set__threads_2(int32_t value)
	{
		____threads_2 = value;
	}

	inline static int32_t get_offset_of__useNNAPI_3() { return static_cast<int32_t>(offsetof(InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896, ____useNNAPI_3)); }
	inline bool get__useNNAPI_3() const { return ____useNNAPI_3; }
	inline bool* get_address_of__useNNAPI_3() { return &____useNNAPI_3; }
	inline void set__useNNAPI_3(bool value)
	{
		____useNNAPI_3 = value;
	}
};


// TensorFlowLite.Interpreter/Status
struct Status_t6B08CC975421D29EF90486503EC09AD475002DDC 
{
public:
	// System.Int32 TensorFlowLite.Interpreter/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t6B08CC975421D29EF90486503EC09AD475002DDC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// TensorFlowLite.InterpreterOptions/ErrorReporterDelegate
struct ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_m89DA4A8D9E41006AC6460276528DE61E1CA594C9 (intptr_t ___model_data0, int32_t ___model_size1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_m59679647837EBEADA0D889BF124811535293D1A5 (intptr_t ___model0, intptr_t ___optional_options1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_mDBADEA03FF68E11454A0305C9C8F71744A5236F6 (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m600AE3A0AA1FB351BD00F07417086A15815C5A60 (intptr_t ___model0, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_m324112C3E24DC6FE78463DFFCEBD5EC38D022236 (InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * __this, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_mFB177A3C0D7EDF73045D8E952E051435BEF24CBF (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298 (int32_t ___status0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_mCAADED55C4420901610DD5734D4AD3F5BA83DC0A (intptr_t ___interpreter0, int32_t ___input_index1, const RuntimeMethod* method);
// System.Int32 System.Buffer::ByteLength(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_ByteLength_m3E1127D2C9E1B9CD61A1A6109CC2A9B934595145 (RuntimeArray * ___array0, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_m214FACD0A3EA3896904B8B27F5E4B1A8CE13499A (intptr_t ___tensor0, intptr_t ___input_data1, int32_t ___input_data_size2, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_m7BA0CBCECD65A1FC061ABD5B3D3DD1775499404A (intptr_t ___interpreter0, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_mF0D6705F26BE2D49C4CDFA59E5038B4C98B0836E (intptr_t ___interpreter0, int32_t ___output_index1, const RuntimeMethod* method);
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_m05FF7E7947B3D1936634A234254F2CE81F1551BF (intptr_t ___tensor0, intptr_t ___output_data1, int32_t ___output_data_size2, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09 (intptr_t ___userData0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_mAFE3FC8181C0BFF2BED6A9CF06E64B100B3CD1C2 (intptr_t ___options0, int32_t ___num_threads1, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterExtension::TfLiteInterpreterOptionsSetUseNNAPI(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExtension_TfLiteInterpreterOptionsSetUseNNAPI_m45390201309096231B2D73D13D87C613086A19D8 (intptr_t ___options0, bool ___enable1, const RuntimeMethod* method);
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_m1502A66E89FFE410ADBB49E103DA3765AC84157A (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::.ctor()
inline void List_1__ctor_mDED27C85B5D085DCCE8BA05E9CC96B3A522AFE95 (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m5DFB39CE1176AB7274D7B29A6FE62AF492FD22DC (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.InterpreterOptions/ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mBAEFDC811B5245633A6F21ED3718FB6096EE95D3 (intptr_t ___options0, ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * ___errorReporter1, intptr_t ___user_data2, const RuntimeMethod* method);
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_m1932391AAF4EA1B7F387CF0B61A34D0B860BABAD (intptr_t ___options0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::GetEnumerator()
inline Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27  List_1_GetEnumerator_mBE92D574387080AEE49C2F0C3E6654EA4C1709BE (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27  (*) (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m385FB1AB2F4C9EFF2181CB455E6F47B725B2C816_inline (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::MoveNext()
inline bool Enumerator_MoveNext_m3018439DBE538807FEC103A39DE6A41CDB5B3E98 (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TensorFlowLite.IGpuDelegate>::Dispose()
inline void Enumerator_Dispose_mC5FD22B469A22302AF08019E16B72E865B9B7BAF (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TensorFlowLite.IGpuDelegate>::Clear()
inline void List_1_Clear_m92DE0189C14BD8F67401E990B4C88A509DD3AD2B (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Int32 TensorFlowLite.InterpreterOptions::printf(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterOptions_printf_m28A31991A595327F909A033585721534614D3F53 (String_t* ___format0, intptr_t ___args1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC (int32_t ___cb0, const RuntimeMethod* method);
// System.Int32 TensorFlowLite.InterpreterOptions::sprintf(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterOptions_sprintf_m791BEB96B61DD405D14722165ED76EF45B7FA0F9 (intptr_t ___buffer0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteModelCreate(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteModelDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterCreate(intptr_t, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetInputTensor(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterAllocateTensors(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteInterpreterInvoke(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterGetOutputTensor(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyFromBuffer(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL TfLiteTensorCopyToBuffer(intptr_t, intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsSetUseNNAPI(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL TfLiteInterpreterOptionsCreate();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsDelete(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL TfLiteInterpreterOptionsSetNumThreads(intptr_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
IL2CPP_EXTERN_C void CDECL TfLiteInterpreterOptionsSetErrorReporter(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL printf(char*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL sprintf(intptr_t, char*, intptr_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[],TensorFlowLite.InterpreterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___modelData0, InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private TfLiteModel model = IntPtr.Zero;
		__this->set_model_0((intptr_t)(0));
		// private TfLiteInterpreter interpreter = IntPtr.Zero;
		__this->set_interpreter_1((intptr_t)(0));
		// public Interpreter(byte[] modelData, InterpreterOptions options)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// GCHandle modelDataHandle = GCHandle.Alloc(modelData, GCHandleType.Pinned);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___modelData0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr modelDataPtr = modelDataHandle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// model = TfLiteModelCreate(modelDataPtr, modelData.Length);
		intptr_t L_3 = V_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___modelData0;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = Interpreter_TfLiteModelCreate_m89DA4A8D9E41006AC6460276528DE61E1CA594C9((intptr_t)L_3, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		__this->set_model_0((intptr_t)L_5);
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		intptr_t L_6 = __this->get_model_0();
		bool L_7;
		L_7 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// if (model == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Model");
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB6E1EB65E6DF0ABEBDA7EFD4891C6849B7F077C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3_RuntimeMethod_var)));
	}

IL_0058:
	{
		// this.options = options;
		InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * L_9 = ___options1;
		__this->set_options_2(L_9);
		// interpreter = TfLiteInterpreterCreate(model, options.nativePtr);
		intptr_t L_10 = __this->get_model_0();
		InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * L_11 = ___options1;
		NullCheck(L_11);
		intptr_t L_12 = L_11->get_nativePtr_0();
		intptr_t L_13;
		L_13 = Interpreter_TfLiteInterpreterCreate_m59679647837EBEADA0D889BF124811535293D1A5((intptr_t)L_10, (intptr_t)L_12, /*hidden argument*/NULL);
		__this->set_interpreter_1((intptr_t)L_13);
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		intptr_t L_14 = __this->get_interpreter_1();
		bool L_15;
		L_15 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_14, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0093;
		}
	}
	{
		// if (interpreter == IntPtr.Zero) throw new Exception("Failed to create TensorFlowLite Interpreter");
		Exception_t * L_16 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24EE12FED48DD9020A8243CF10D968E6B9D65BFD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3_RuntimeMethod_var)));
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Dispose_mA3DB3B46FF7C3047FCFC47CC627D71488C8061B5 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_0 = __this->get_interpreter_1();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (interpreter != IntPtr.Zero) TfLiteInterpreterDelete(interpreter);
		intptr_t L_2 = __this->get_interpreter_1();
		Interpreter_TfLiteInterpreterDelete_mDBADEA03FF68E11454A0305C9C8F71744A5236F6((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// interpreter = IntPtr.Zero;
		__this->set_interpreter_1((intptr_t)(0));
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_3 = __this->get_model_0();
		bool L_4;
		L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// if (model != IntPtr.Zero) TfLiteModelDelete(model);
		intptr_t L_5 = __this->get_model_0();
		Interpreter_TfLiteModelDelete_m600AE3A0AA1FB351BD00F07417086A15815C5A60((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// model = IntPtr.Zero;
		__this->set_model_0((intptr_t)(0));
		// if (options != null) options.Dispose();
		InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * L_6 = __this->get_options_2();
		if (!L_6)
		{
			goto IL_0063;
		}
	}
	{
		// if (options != null) options.Dispose();
		InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * L_7 = __this->get_options_2();
		NullCheck(L_7);
		InterpreterOptions_Dispose_m324112C3E24DC6FE78463DFFCEBD5EC38D022236(L_7, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_Invoke_m228B38FCA1CCEDE758CBA924CC325BC7C8732AA6 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, const RuntimeMethod* method)
{
	{
		// ThrowIfError(TfLiteInterpreterInvoke(interpreter));
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterInvoke_mFB177A3C0D7EDF73045D8E952E051435BEF24CBF((intptr_t)L_0, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::SetInputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_SetInputTensorData_m8E2595ECA226081E831D54C19B3035E86315604A (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, int32_t ___inputTensorIndex0, RuntimeArray * ___inputTensorData1, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(inputTensorData, GCHandleType.Pinned);
		RuntimeArray * L_0 = ___inputTensorData1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetInputTensor(interpreter, inputTensorIndex);
		intptr_t L_3 = __this->get_interpreter_1();
		int32_t L_4 = ___inputTensorIndex0;
		intptr_t L_5;
		L_5 = Interpreter_TfLiteInterpreterGetInputTensor_mCAADED55C4420901610DD5734D4AD3F5BA83DC0A((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// ThrowIfError(TfLiteTensorCopyFromBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(inputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray * L_7 = ___inputTensorData1;
		int32_t L_8;
		L_8 = Buffer_ByteLength_m3E1127D2C9E1B9CD61A1A6109CC2A9B934595145(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Interpreter_TfLiteTensorCopyFromBuffer_m214FACD0A3EA3896904B8B27F5E4B1A8CE13499A((intptr_t)L_5, (intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::AllocateTensors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_AllocateTensors_m87C3D29EA509021F9B6E30E3E717548BC0781DB3 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, const RuntimeMethod* method)
{
	{
		// ThrowIfError(TfLiteInterpreterAllocateTensors(interpreter));
		intptr_t L_0 = __this->get_interpreter_1();
		int32_t L_1;
		L_1 = Interpreter_TfLiteInterpreterAllocateTensors_m7BA0CBCECD65A1FC061ABD5B3D3DD1775499404A((intptr_t)L_0, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::GetOutputTensorData(System.Int32,System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_GetOutputTensorData_mC553A53E5016BA9A81FD061A85C1557714C622E5 (Interpreter_t7D8ADD0A46A2B0D7A15525CFABE4B896960ECAD9 * __this, int32_t ___outputTensorIndex0, RuntimeArray * ___outputTensorData1, const RuntimeMethod* method)
{
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GCHandle tensorDataHandle = GCHandle.Alloc(outputTensorData, GCHandleType.Pinned);
		RuntimeArray * L_0 = ___outputTensorData1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_1;
		L_1 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC(L_0, 3, /*hidden argument*/NULL);
		V_0 = L_1;
		// IntPtr tensorDataPtr = tensorDataHandle.AddrOfPinnedObject();
		intptr_t L_2;
		L_2 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		// TfLiteTensor tensor = TfLiteInterpreterGetOutputTensor(interpreter, outputTensorIndex);
		intptr_t L_3 = __this->get_interpreter_1();
		int32_t L_4 = ___outputTensorIndex0;
		intptr_t L_5;
		L_5 = Interpreter_TfLiteInterpreterGetOutputTensor_mF0D6705F26BE2D49C4CDFA59E5038B4C98B0836E((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// ThrowIfError(TfLiteTensorCopyToBuffer(
		//     tensor, tensorDataPtr, Buffer.ByteLength(outputTensorData)));
		intptr_t L_6 = V_1;
		RuntimeArray * L_7 = ___outputTensorData1;
		int32_t L_8;
		L_8 = Buffer_ByteLength_m3E1127D2C9E1B9CD61A1A6109CC2A9B934595145(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = Interpreter_TfLiteTensorCopyToBuffer_m05FF7E7947B3D1936634A234254F2CE81F1551BF((intptr_t)L_5, (intptr_t)L_6, L_8, /*hidden argument*/NULL);
		Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298(L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298 (int32_t ___status0, const RuntimeMethod* method)
{
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		int32_t L_0 = ___status0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		// if (status == Status.Error) throw new Exception("TensorFlowLite operation failed.");
		Exception_t * L_1 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90C0C64260A2290CC30E10C37C0E45A183BFBDEE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298_RuntimeMethod_var)));
	}

IL_000f:
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		int32_t L_2 = ___status0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001e;
		}
	}
	{
		// if (status == Status.DelegateError) throw new Exception("TensorFlowLite delegage operation failed.");
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD636EEFC5DCD1E9D43960804AA16B411F9F85D02)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298_RuntimeMethod_var)));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteModelCreate_m89DA4A8D9E41006AC6460276528DE61E1CA594C9 (intptr_t ___model_data0, int32_t ___model_size1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteModelCreate)(___model_data0, ___model_size1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___model_data0, ___model_size1);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteModelDelete_m600AE3A0AA1FB351BD00F07417086A15815C5A60 (intptr_t ___model0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteModelDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteModelDelete)(___model0);
	#else
	il2cppPInvokeFunc(___model0);
	#endif

}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterCreate_m59679647837EBEADA0D889BF124811535293D1A5 (intptr_t ___model0, intptr_t ___optional_options1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterCreate)(___model0, ___optional_options1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___model0, ___optional_options1);
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interpreter_TfLiteInterpreterDelete_mDBADEA03FF68E11454A0305C9C8F71744A5236F6 (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterDelete)(___interpreter0);
	#else
	il2cppPInvokeFunc(___interpreter0);
	#endif

}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetInputTensor_mCAADED55C4420901610DD5734D4AD3F5BA83DC0A (intptr_t ___interpreter0, int32_t ___input_index1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetInputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetInputTensor)(___interpreter0, ___input_index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___interpreter0, ___input_index1);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterAllocateTensors_m7BA0CBCECD65A1FC061ABD5B3D3DD1775499404A (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterAllocateTensors", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterAllocateTensors)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteInterpreterInvoke_mFB177A3C0D7EDF73045D8E952E051435BEF24CBF (intptr_t ___interpreter0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterInvoke", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterInvoke)(___interpreter0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___interpreter0);
	#endif

	return returnValue;
}
// System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Interpreter_TfLiteInterpreterGetOutputTensor_mF0D6705F26BE2D49C4CDFA59E5038B4C98B0836E (intptr_t ___interpreter0, int32_t ___output_index1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterGetOutputTensor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterGetOutputTensor)(___interpreter0, ___output_index1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___interpreter0, ___output_index1);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyFromBuffer_m214FACD0A3EA3896904B8B27F5E4B1A8CE13499A (intptr_t ___tensor0, intptr_t ___input_data1, int32_t ___input_data_size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyFromBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyFromBuffer)(___tensor0, ___input_data1, ___input_data_size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0, ___input_data1, ___input_data_size2);
	#endif

	return returnValue;
}
// TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interpreter_TfLiteTensorCopyToBuffer_m05FF7E7947B3D1936634A234254F2CE81F1551BF (intptr_t ___tensor0, intptr_t ___output_data1, int32_t ___output_data_size2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteTensorCopyToBuffer", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteTensorCopyToBuffer)(___tensor0, ___output_data1, ___output_data_size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___tensor0, ___output_data1, ___output_data_size2);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TensorFlowLite.InterpreterExtension::TfLiteInterpreterOptionsSetUseNNAPI(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterExtension_TfLiteInterpreterOptionsSetUseNNAPI_m45390201309096231B2D73D13D87C613086A19D8 (intptr_t ___options0, bool ___enable1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetUseNNAPI", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetUseNNAPI)(___options0, static_cast<int32_t>(___enable1));
	#else
	il2cppPInvokeFunc(___options0, static_cast<int32_t>(___enable1));
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void CDECL ReversePInvokeWrapper_InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09(intptr_t ___userData0, char* ___format1, intptr_t ___args2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___format1' to managed representation
	String_t* ____format1_unmarshaled = NULL;
	____format1_unmarshaled = il2cpp_codegen_marshal_string_result(___format1);

	// Managed method invocation
	InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09(___userData0, ____format1_unmarshaled, ___args2, NULL);

}
// System.Void TensorFlowLite.InterpreterOptions::set_threads(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_threads_m56CE436B165FDDB99C3BB1ED481D51A839A3CE67 (InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _threads = value;
		int32_t L_0 = ___value0;
		__this->set__threads_2(L_0);
		// TfLiteInterpreterOptionsSetNumThreads(nativePtr, value);
		intptr_t L_1 = __this->get_nativePtr_0();
		int32_t L_2 = ___value0;
		InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_mAFE3FC8181C0BFF2BED6A9CF06E64B100B3CD1C2((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::set_useNNAPI(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_set_useNNAPI_mC1E581EF4C8C5E3C11D5765C18801D3E6A0A4EE0 (InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// _useNNAPI = value;
		bool L_0 = ___value0;
		__this->set__useNNAPI_3(L_0);
		// InterpreterExtension.TfLiteInterpreterOptionsSetUseNNAPI(nativePtr, value);
		intptr_t L_1 = __this->get_nativePtr_0();
		bool L_2 = ___value0;
		InterpreterExtension_TfLiteInterpreterOptionsSetUseNNAPI_m45390201309096231B2D73D13D87C613086A19D8((intptr_t)L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions__ctor_mD75762A156970C68CF0CD31C42736CA2CF3B813E (InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDED27C85B5D085DCCE8BA05E9CC96B3A522AFE95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InterpreterOptions()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// nativePtr = TfLiteInterpreterOptionsCreate();
		intptr_t L_0;
		L_0 = InterpreterOptions_TfLiteInterpreterOptionsCreate_m1502A66E89FFE410ADBB49E103DA3765AC84157A(/*hidden argument*/NULL);
		__this->set_nativePtr_0((intptr_t)L_0);
		// delegates = new List<IGpuDelegate>();
		List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * L_1 = (List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 *)il2cpp_codegen_object_new(List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807_il2cpp_TypeInfo_var);
		List_1__ctor_mDED27C85B5D085DCCE8BA05E9CC96B3A522AFE95(L_1, /*hidden argument*/List_1__ctor_mDED27C85B5D085DCCE8BA05E9CC96B3A522AFE95_RuntimeMethod_var);
		__this->set_delegates_1(L_1);
		// TfLiteInterpreterOptionsSetErrorReporter(nativePtr, OnErrorReporter, IntPtr.Zero);
		intptr_t L_2 = __this->get_nativePtr_0();
		ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * L_3 = (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 *)il2cpp_codegen_object_new(ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514_il2cpp_TypeInfo_var);
		ErrorReporterDelegate__ctor_m5DFB39CE1176AB7274D7B29A6FE62AF492FD22DC(L_3, NULL, (intptr_t)((intptr_t)InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09_RuntimeMethod_var), /*hidden argument*/NULL);
		InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mBAEFDC811B5245633A6F21ED3718FB6096EE95D3((intptr_t)L_2, L_3, (intptr_t)(0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_Dispose_m324112C3E24DC6FE78463DFFCEBD5EC38D022236 (InterpreterOptions_tFA77B4582B37AD1405244BDC3605E80D4BC1C896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC5FD22B469A22302AF08019E16B72E865B9B7BAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3018439DBE538807FEC103A39DE6A41CDB5B3E98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m385FB1AB2F4C9EFF2181CB455E6F47B725B2C816_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m92DE0189C14BD8F67401E990B4C88A509DD3AD2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBE92D574387080AEE49C2F0C3E6654EA4C1709BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (nativePtr != IntPtr.Zero)
		intptr_t L_0 = __this->get_nativePtr_0();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// TfLiteInterpreterOptionsDelete(nativePtr);
		intptr_t L_2 = __this->get_nativePtr_0();
		InterpreterOptions_TfLiteInterpreterOptionsDelete_m1932391AAF4EA1B7F387CF0B61A34D0B860BABAD((intptr_t)L_2, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// foreach (var gpuDelegate in delegates)
		List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * L_3 = __this->get_delegates_1();
		NullCheck(L_3);
		Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27  L_4;
		L_4 = List_1_GetEnumerator_mBE92D574387080AEE49C2F0C3E6654EA4C1709BE(L_3, /*hidden argument*/List_1_GetEnumerator_mBE92D574387080AEE49C2F0C3E6654EA4C1709BE_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_002b:
		{
			// foreach (var gpuDelegate in delegates)
			RuntimeObject* L_5;
			L_5 = Enumerator_get_Current_m385FB1AB2F4C9EFF2181CB455E6F47B725B2C816_inline((Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m385FB1AB2F4C9EFF2181CB455E6F47B725B2C816_RuntimeMethod_var);
			// gpuDelegate.Dispose();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0037:
		{
			// foreach (var gpuDelegate in delegates)
			bool L_6;
			L_6 = Enumerator_MoveNext_m3018439DBE538807FEC103A39DE6A41CDB5B3E98((Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m3018439DBE538807FEC103A39DE6A41CDB5B3E98_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_002b;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC5FD22B469A22302AF08019E16B72E865B9B7BAF((Enumerator_t31D112F7CADE3470976FB8D976E49CA3775F9D27 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC5FD22B469A22302AF08019E16B72E865B9B7BAF_RuntimeMethod_var);
		IL2CPP_END_FINALLY(66)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// delegates.Clear();
		List_1_t8F005655DF142FEA1160DB8C700C79A459F2C807 * L_7 = __this->get_delegates_1();
		NullCheck(L_7);
		List_1_Clear_m92DE0189C14BD8F67401E990B4C88A509DD3AD2B(L_7, /*hidden argument*/List_1_Clear_m92DE0189C14BD8F67401E990B4C88A509DD3AD2B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TensorFlowLite.InterpreterOptions::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09 (intptr_t ___userData0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EC059FD2E1492F78DF400D20237FBD64BC2F1B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// int formatLength = printf(format, args);
		String_t* L_0 = ___format1;
		intptr_t L_1 = ___args2;
		int32_t L_2;
		L_2 = InterpreterOptions_printf_m28A31991A595327F909A033585721534614D3F53(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		// IntPtr buffer = Marshal.AllocHGlobal(formatLength);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_AllocHGlobal_mED1B623D229DB8FAB58D187E4E73D3DA2E8AE6EC(L_2, /*hidden argument*/NULL);
		// sprintf(buffer, format, args);
		intptr_t L_4 = (intptr_t)L_3;
		String_t* L_5 = ___format1;
		intptr_t L_6 = ___args2;
		int32_t L_7;
		L_7 = InterpreterOptions_sprintf_m791BEB96B61DD405D14722165ED76EF45B7FA0F9((intptr_t)L_4, L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		// report = Marshal.PtrToStringAnsi(buffer);
		intptr_t L_8 = (intptr_t)L_4;
		String_t* L_9;
		L_9 = Marshal_PtrToStringAnsi_m75BAFD813E1B985A654946F05159CFA46E34F5AA((intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// Marshal.FreeHGlobal(buffer);
		Marshal_FreeHGlobal_m53FC4846F5D3106BA25B52C321005C227E424F72((intptr_t)L_8, /*hidden argument*/NULL);
		// UnityEngine.Debug.LogWarning($"Interperter Warning: {report}");
		String_t* L_10 = V_0;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralE4EC059FD2E1492F78DF400D20237FBD64BC2F1B, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InterpreterOptions_TfLiteInterpreterOptionsCreate_m1502A66E89FFE410ADBB49E103DA3765AC84157A (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsCreate", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsCreate)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsDelete_m1932391AAF4EA1B7F387CF0B61A34D0B860BABAD (intptr_t ___options0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsDelete", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsDelete)(___options0);
	#else
	il2cppPInvokeFunc(___options0);
	#endif

}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_mAFE3FC8181C0BFF2BED6A9CF06E64B100B3CD1C2 (intptr_t ___options0, int32_t ___num_threads1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetNumThreads", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetNumThreads)(___options0, ___num_threads1);
	#else
	il2cppPInvokeFunc(___options0, ___num_threads1);
	#endif

}
// System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.InterpreterOptions/ErrorReporterDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mBAEFDC811B5245633A6F21ED3718FB6096EE95D3 (intptr_t ___options0, ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * ___errorReporter1, intptr_t ___user_data2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libtensorflowlite_c"), "TfLiteInterpreterOptionsSetErrorReporter", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___errorReporter1' to native representation
	Il2CppMethodPointer ____errorReporter1_marshaled = NULL;
	____errorReporter1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___errorReporter1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libtensorflowlite_c_INTERNAL
	reinterpret_cast<PInvokeFunc>(TfLiteInterpreterOptionsSetErrorReporter)(___options0, ____errorReporter1_marshaled, ___user_data2);
	#else
	il2cppPInvokeFunc(___options0, ____errorReporter1_marshaled, ___user_data2);
	#endif

}
// System.Int32 TensorFlowLite.InterpreterOptions::printf(System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterOptions_printf_m28A31991A595327F909A033585721534614D3F53 (String_t* ___format0, intptr_t ___args1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "printf", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___format0' to native representation
	char* ____format0_marshaled = NULL;
	____format0_marshaled = il2cpp_codegen_marshal_string(___format0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(printf)(____format0_marshaled, ___args1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____format0_marshaled, ___args1);
	#endif

	// Marshaling cleanup of parameter '___format0' native representation
	il2cpp_codegen_marshal_free(____format0_marshaled);
	____format0_marshaled = NULL;

	return returnValue;
}
// System.Int32 TensorFlowLite.InterpreterOptions::sprintf(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterpreterOptions_sprintf_m791BEB96B61DD405D14722165ED76EF45B7FA0F9 (intptr_t ___buffer0, String_t* ___format1, intptr_t ___args2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t, char*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_libc_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libc"), "sprintf", IL2CPP_CALL_C, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___format1' to native representation
	char* ____format1_marshaled = NULL;
	____format1_marshaled = il2cpp_codegen_marshal_string(___format1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_libc_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(sprintf)(___buffer0, ____format1_marshaled, ___args2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___buffer0, ____format1_marshaled, ___args2);
	#endif

	// Marshaling cleanup of parameter '___format1' native representation
	il2cpp_codegen_marshal_free(____format1_marshaled);
	____format1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, char*, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___format1' to native representation
	char* ____format1_marshaled = NULL;
	____format1_marshaled = il2cpp_codegen_marshal_string(___format1);

	// Native function invocation
	il2cppPInvokeFunc(___userData0, ____format1_marshaled, ___argsPtrs2);

	// Marshaling cleanup of parameter '___format1' native representation
	il2cpp_codegen_marshal_free(____format1_marshaled);
	____format1_marshaled = NULL;

}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate__ctor_m5DFB39CE1176AB7274D7B29A6FE62AF492FD22DC (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::Invoke(System.IntPtr,System.String,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_Invoke_mB0FC37FD67656A4C5FE66F85A36FF60821E89F75 (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___format1, ___argsPtrs2);
					else
						GenericVirtActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(targetMethod, targetThis, ___userData0, ___format1, ___argsPtrs2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___userData0, ___format1, ___argsPtrs2);
					else
						VirtActionInvoker3< intptr_t, String_t*, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___userData0, ___format1, ___argsPtrs2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, String_t*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___userData0, ___format1, ___argsPtrs2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::BeginInvoke(System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorReporterDelegate_BeginInvoke_m5BA14D9D7EF24466B66706500B2FB2F8B7E6480B (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, intptr_t ___userData0, String_t* ___format1, intptr_t ___argsPtrs2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___userData0);
	__d_args[1] = ___format1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___argsPtrs2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorReporterDelegate_EndInvoke_m5094DBB7B3C2B8BC109C653634BF0B6168ADBD34 (ErrorReporterDelegate_t9165D4E69ABFAB0FBFCBBC9BCCF81160B1924514 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
