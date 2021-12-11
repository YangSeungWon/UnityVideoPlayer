#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"


extern const RuntimeMethod* InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09_RuntimeMethod_var;



// 0x00000001 System.Void TensorFlowLite.Interpreter::.ctor(System.Byte[],TensorFlowLite.InterpreterOptions)
extern void Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3 (void);
// 0x00000002 System.Void TensorFlowLite.Interpreter::Dispose()
extern void Interpreter_Dispose_mA3DB3B46FF7C3047FCFC47CC627D71488C8061B5 (void);
// 0x00000003 System.Void TensorFlowLite.Interpreter::Invoke()
extern void Interpreter_Invoke_m228B38FCA1CCEDE758CBA924CC325BC7C8732AA6 (void);
// 0x00000004 System.Void TensorFlowLite.Interpreter::SetInputTensorData(System.Int32,System.Array)
extern void Interpreter_SetInputTensorData_m8E2595ECA226081E831D54C19B3035E86315604A (void);
// 0x00000005 System.Void TensorFlowLite.Interpreter::AllocateTensors()
extern void Interpreter_AllocateTensors_m87C3D29EA509021F9B6E30E3E717548BC0781DB3 (void);
// 0x00000006 System.Void TensorFlowLite.Interpreter::GetOutputTensorData(System.Int32,System.Array)
extern void Interpreter_GetOutputTensorData_mC553A53E5016BA9A81FD061A85C1557714C622E5 (void);
// 0x00000007 System.Void TensorFlowLite.Interpreter::ThrowIfError(TensorFlowLite.Interpreter/Status)
extern void Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298 (void);
// 0x00000008 System.IntPtr TensorFlowLite.Interpreter::TfLiteModelCreate(System.IntPtr,System.Int32)
extern void Interpreter_TfLiteModelCreate_m89DA4A8D9E41006AC6460276528DE61E1CA594C9 (void);
// 0x00000009 System.Void TensorFlowLite.Interpreter::TfLiteModelDelete(System.IntPtr)
extern void Interpreter_TfLiteModelDelete_m600AE3A0AA1FB351BD00F07417086A15815C5A60 (void);
// 0x0000000A System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterCreate(System.IntPtr,System.IntPtr)
extern void Interpreter_TfLiteInterpreterCreate_m59679647837EBEADA0D889BF124811535293D1A5 (void);
// 0x0000000B System.Void TensorFlowLite.Interpreter::TfLiteInterpreterDelete(System.IntPtr)
extern void Interpreter_TfLiteInterpreterDelete_mDBADEA03FF68E11454A0305C9C8F71744A5236F6 (void);
// 0x0000000C System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetInputTensor(System.IntPtr,System.Int32)
extern void Interpreter_TfLiteInterpreterGetInputTensor_mCAADED55C4420901610DD5734D4AD3F5BA83DC0A (void);
// 0x0000000D TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterAllocateTensors(System.IntPtr)
extern void Interpreter_TfLiteInterpreterAllocateTensors_m7BA0CBCECD65A1FC061ABD5B3D3DD1775499404A (void);
// 0x0000000E TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteInterpreterInvoke(System.IntPtr)
extern void Interpreter_TfLiteInterpreterInvoke_mFB177A3C0D7EDF73045D8E952E051435BEF24CBF (void);
// 0x0000000F System.IntPtr TensorFlowLite.Interpreter::TfLiteInterpreterGetOutputTensor(System.IntPtr,System.Int32)
extern void Interpreter_TfLiteInterpreterGetOutputTensor_mF0D6705F26BE2D49C4CDFA59E5038B4C98B0836E (void);
// 0x00000010 TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyFromBuffer(System.IntPtr,System.IntPtr,System.Int32)
extern void Interpreter_TfLiteTensorCopyFromBuffer_m214FACD0A3EA3896904B8B27F5E4B1A8CE13499A (void);
// 0x00000011 TensorFlowLite.Interpreter/Status TensorFlowLite.Interpreter::TfLiteTensorCopyToBuffer(System.IntPtr,System.IntPtr,System.Int32)
extern void Interpreter_TfLiteTensorCopyToBuffer_m05FF7E7947B3D1936634A234254F2CE81F1551BF (void);
// 0x00000012 System.Void TensorFlowLite.InterpreterExtension::TfLiteInterpreterOptionsSetUseNNAPI(System.IntPtr,System.Boolean)
extern void InterpreterExtension_TfLiteInterpreterOptionsSetUseNNAPI_m45390201309096231B2D73D13D87C613086A19D8 (void);
// 0x00000013 System.Void TensorFlowLite.InterpreterOptions::set_threads(System.Int32)
extern void InterpreterOptions_set_threads_m56CE436B165FDDB99C3BB1ED481D51A839A3CE67 (void);
// 0x00000014 System.Void TensorFlowLite.InterpreterOptions::set_useNNAPI(System.Boolean)
extern void InterpreterOptions_set_useNNAPI_mC1E581EF4C8C5E3C11D5765C18801D3E6A0A4EE0 (void);
// 0x00000015 System.Void TensorFlowLite.InterpreterOptions::.ctor()
extern void InterpreterOptions__ctor_mD75762A156970C68CF0CD31C42736CA2CF3B813E (void);
// 0x00000016 System.Void TensorFlowLite.InterpreterOptions::Dispose()
extern void InterpreterOptions_Dispose_m324112C3E24DC6FE78463DFFCEBD5EC38D022236 (void);
// 0x00000017 System.Void TensorFlowLite.InterpreterOptions::OnErrorReporter(System.IntPtr,System.String,System.IntPtr)
extern void InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09 (void);
// 0x00000018 System.IntPtr TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsCreate()
extern void InterpreterOptions_TfLiteInterpreterOptionsCreate_m1502A66E89FFE410ADBB49E103DA3765AC84157A (void);
// 0x00000019 System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsDelete(System.IntPtr)
extern void InterpreterOptions_TfLiteInterpreterOptionsDelete_m1932391AAF4EA1B7F387CF0B61A34D0B860BABAD (void);
// 0x0000001A System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetNumThreads(System.IntPtr,System.Int32)
extern void InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_mAFE3FC8181C0BFF2BED6A9CF06E64B100B3CD1C2 (void);
// 0x0000001B System.Void TensorFlowLite.InterpreterOptions::TfLiteInterpreterOptionsSetErrorReporter(System.IntPtr,TensorFlowLite.InterpreterOptions/ErrorReporterDelegate,System.IntPtr)
extern void InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mBAEFDC811B5245633A6F21ED3718FB6096EE95D3 (void);
// 0x0000001C System.Int32 TensorFlowLite.InterpreterOptions::printf(System.String,System.IntPtr)
extern void InterpreterOptions_printf_m28A31991A595327F909A033585721534614D3F53 (void);
// 0x0000001D System.Int32 TensorFlowLite.InterpreterOptions::sprintf(System.IntPtr,System.String,System.IntPtr)
extern void InterpreterOptions_sprintf_m791BEB96B61DD405D14722165ED76EF45B7FA0F9 (void);
// 0x0000001E System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::.ctor(System.Object,System.IntPtr)
extern void ErrorReporterDelegate__ctor_m5DFB39CE1176AB7274D7B29A6FE62AF492FD22DC (void);
// 0x0000001F System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::Invoke(System.IntPtr,System.String,System.IntPtr)
extern void ErrorReporterDelegate_Invoke_mB0FC37FD67656A4C5FE66F85A36FF60821E89F75 (void);
// 0x00000020 System.IAsyncResult TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::BeginInvoke(System.IntPtr,System.String,System.IntPtr,System.AsyncCallback,System.Object)
extern void ErrorReporterDelegate_BeginInvoke_m5BA14D9D7EF24466B66706500B2FB2F8B7E6480B (void);
// 0x00000021 System.Void TensorFlowLite.InterpreterOptions/ErrorReporterDelegate::EndInvoke(System.IAsyncResult)
extern void ErrorReporterDelegate_EndInvoke_m5094DBB7B3C2B8BC109C653634BF0B6168ADBD34 (void);
static Il2CppMethodPointer s_methodPointers[33] = 
{
	Interpreter__ctor_mF1E8928B8C931C4786E6D5302D200E7616B676D3,
	Interpreter_Dispose_mA3DB3B46FF7C3047FCFC47CC627D71488C8061B5,
	Interpreter_Invoke_m228B38FCA1CCEDE758CBA924CC325BC7C8732AA6,
	Interpreter_SetInputTensorData_m8E2595ECA226081E831D54C19B3035E86315604A,
	Interpreter_AllocateTensors_m87C3D29EA509021F9B6E30E3E717548BC0781DB3,
	Interpreter_GetOutputTensorData_mC553A53E5016BA9A81FD061A85C1557714C622E5,
	Interpreter_ThrowIfError_mD9AC291466EA4FAA42C59F7AA36BAA9286792298,
	Interpreter_TfLiteModelCreate_m89DA4A8D9E41006AC6460276528DE61E1CA594C9,
	Interpreter_TfLiteModelDelete_m600AE3A0AA1FB351BD00F07417086A15815C5A60,
	Interpreter_TfLiteInterpreterCreate_m59679647837EBEADA0D889BF124811535293D1A5,
	Interpreter_TfLiteInterpreterDelete_mDBADEA03FF68E11454A0305C9C8F71744A5236F6,
	Interpreter_TfLiteInterpreterGetInputTensor_mCAADED55C4420901610DD5734D4AD3F5BA83DC0A,
	Interpreter_TfLiteInterpreterAllocateTensors_m7BA0CBCECD65A1FC061ABD5B3D3DD1775499404A,
	Interpreter_TfLiteInterpreterInvoke_mFB177A3C0D7EDF73045D8E952E051435BEF24CBF,
	Interpreter_TfLiteInterpreterGetOutputTensor_mF0D6705F26BE2D49C4CDFA59E5038B4C98B0836E,
	Interpreter_TfLiteTensorCopyFromBuffer_m214FACD0A3EA3896904B8B27F5E4B1A8CE13499A,
	Interpreter_TfLiteTensorCopyToBuffer_m05FF7E7947B3D1936634A234254F2CE81F1551BF,
	InterpreterExtension_TfLiteInterpreterOptionsSetUseNNAPI_m45390201309096231B2D73D13D87C613086A19D8,
	InterpreterOptions_set_threads_m56CE436B165FDDB99C3BB1ED481D51A839A3CE67,
	InterpreterOptions_set_useNNAPI_mC1E581EF4C8C5E3C11D5765C18801D3E6A0A4EE0,
	InterpreterOptions__ctor_mD75762A156970C68CF0CD31C42736CA2CF3B813E,
	InterpreterOptions_Dispose_m324112C3E24DC6FE78463DFFCEBD5EC38D022236,
	InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09,
	InterpreterOptions_TfLiteInterpreterOptionsCreate_m1502A66E89FFE410ADBB49E103DA3765AC84157A,
	InterpreterOptions_TfLiteInterpreterOptionsDelete_m1932391AAF4EA1B7F387CF0B61A34D0B860BABAD,
	InterpreterOptions_TfLiteInterpreterOptionsSetNumThreads_mAFE3FC8181C0BFF2BED6A9CF06E64B100B3CD1C2,
	InterpreterOptions_TfLiteInterpreterOptionsSetErrorReporter_mBAEFDC811B5245633A6F21ED3718FB6096EE95D3,
	InterpreterOptions_printf_m28A31991A595327F909A033585721534614D3F53,
	InterpreterOptions_sprintf_m791BEB96B61DD405D14722165ED76EF45B7FA0F9,
	ErrorReporterDelegate__ctor_m5DFB39CE1176AB7274D7B29A6FE62AF492FD22DC,
	ErrorReporterDelegate_Invoke_mB0FC37FD67656A4C5FE66F85A36FF60821E89F75,
	ErrorReporterDelegate_BeginInvoke_m5BA14D9D7EF24466B66706500B2FB2F8B7E6480B,
	ErrorReporterDelegate_EndInvoke_m5094DBB7B3C2B8BC109C653634BF0B6168ADBD34,
};
static const int32_t s_InvokerIndices[33] = 
{
	674,
	1202,
	1202,
	628,
	1202,
	628,
	2014,
	1727,
	2015,
	1728,
	2015,
	1727,
	1919,
	1919,
	1727,
	1526,
	1526,
	1854,
	1017,
	1044,
	1202,
	1202,
	1650,
	2038,
	2015,
	1852,
	1650,
	1714,
	1528,
	673,
	420,
	114,
	1027,
};
static const Il2CppTokenIndexMethodTuple s_reversePInvokeIndices[1] = 
{
	{ 0x06000017, 0,  (void**)&InterpreterOptions_OnErrorReporter_m44CA88A85C68E4F33D9ECBBB4599A48565C2CC09_RuntimeMethod_var, 0 },
};
extern const CustomAttributesCacheGenerator g_TensorFlowLite_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_TensorFlowLite_CodeGenModule;
const Il2CppCodeGenModule g_TensorFlowLite_CodeGenModule = 
{
	"TensorFlowLite.dll",
	33,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	1,
	s_reversePInvokeIndices,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_TensorFlowLite_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
