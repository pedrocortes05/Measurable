﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, &p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
struct ConstrainedActionInvoker0
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, NULL);
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
struct Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A;
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
struct Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C;
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A;
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227;
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
struct Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4;
struct Func_3_t50E159DCCFD1AFE2F58DC0D7B987B725EBD0F102;
struct Func_3_tF463CA6BD9C149F8A4821A08FAFFA91D270841B9;
struct Func_3_t5612E46BC6D771B144970957779EC8FCEE87C291;
struct Func_3_tDC12B1480F34ED9A70CB26794928E60F60A42300;
struct Func_3_tC497D504155D3D907F9C5EEE487CC4B3B6090631;
struct Func_3_t9474A2AD78068EBD4521A09366434C0A84FFE4AD;
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
struct Func_3_tCD4C784ED366DCCDCB2B09D49D9FADD3135B516A;
struct Func_3_tD09ACEDD8E28B7F3F54CF088B9EFB067BB2EEF7C;
struct Func_3_t367EDE0EF333E613EA44907EF9AD4A1F198D7753;
struct Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7;
struct Func_3_t3C7028C87C5875A6B182C7E6C767178999874342;
struct Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2;
struct Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79;
struct Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9;
struct Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7;
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0;
struct Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B;
struct Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D;
struct Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB;
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5;
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61;
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770;
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A;
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66;
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735;
struct InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B;
struct InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE;
struct InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4;
struct InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2;
struct InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F;
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640;
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777;
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE;
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F;
struct List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF;
struct List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485;
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1;
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
struct ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE;
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
struct Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373;
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
struct InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E;
struct InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140;
struct InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C;
struct InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A;
struct InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF;
struct InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93;
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F;
struct UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct IBaseUxmlObjectFactory_t2FD0978CFC6F068080A1D750BCE69176C764EBA2;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct ISerializableJsonDictionary_tF3ACE88703D5968A97E7CC2CACDB1BBBF394A0A0;
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct String_t;
struct StringBuilder_t;
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A;
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
struct UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8;
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3;
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE;
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA;
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487;
struct YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7;
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
struct Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISerializableJsonDictionary_tF3ACE88703D5968A97E7CC2CACDB1BBBF394A0A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral461F9F39B44884AD0FB62320475F3B244EF6E29B;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C String_t* _stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralEFCBF45CC85E2F7DF0032BCEDAB25874A01CEEC4;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444;
struct ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD;
struct BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys;
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4  : public RuntimeObject
{
	UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F  : public RuntimeObject
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1  : public RuntimeObject
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	String_t* ___U3CidU3Ek__BackingField;
	Type_t* ___U3CproviderTypeU3Ek__BackingField;
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField;
};
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	bool ___m_Running;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};
struct Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9  : public RuntimeObject
{
};
struct UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A  : public RuntimeObject
{
	String_t* ___m_FullTypeName;
	int32_t ___m_Id;
	int32_t ___m_OrderInDocument;
	int32_t ___m_ParentId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Properties;
};
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames;
	String_t* ___U3CtypeU3Ek__BackingField;
	String_t* ___U3CtypeNamespaceU3Ek__BackingField;
	int32_t ___U3CuseU3Ek__BackingField;
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray;
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___rpnTokens;
	bool ___hasVariables;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters;
};
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	uint8_t ___dummy;
	uint8_t ___data;
};
struct AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8 
{
	uint8_t ___dummy;
	uint8_t ___data;
};
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	uint8_t ___dummy;
	int32_t ___data;
};
struct AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A 
{
	uint8_t ___dummy;
	float ___data;
};
struct AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2 
{
	uint8_t ___dummy;
	uint16_t ___data;
};
struct AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019 
{
	uint8_t ___dummy;
	uint32_t ___data;
};
struct AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817 
{
	uint8_t ___dummy;
	uint64_t ___data;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D 
{
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ____list;
	int32_t ____index;
	int32_t ____version;
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F 
{
	int32_t ___length;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstValue;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___additionalValues;
};
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	int32_t ___length;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue;
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues;
};
struct InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 
{
	int32_t ___length;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___firstValue;
	Action_2U5BU5D_tE313524623BEAF7FD2ABCEDAD1C5A2C556630373* ___additionalValues;
};
struct InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 
{
	int32_t ___length;
	InputProcessor_1_t6E31E29C499C6D9610C662BCCAD45B97D442C96B* ___firstValue;
	InputProcessor_1U5BU5D_tB3C64A18219DEBFF75635AE580655A02C187A57E* ___additionalValues;
};
struct InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B 
{
	int32_t ___length;
	InputProcessor_1_t43B1AEC927E378D43D0207A4C031927E872280CE* ___firstValue;
	InputProcessor_1U5BU5D_t8533CEA9A58C5C83EB993039C5E7601637DA4140* ___additionalValues;
};
struct InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 
{
	int32_t ___length;
	InputProcessor_1_tFE49B42CB371A9A2A3F29802695BD251947AD0B4* ___firstValue;
	InputProcessor_1U5BU5D_tFEE411B67EEAA6B997AF875A65D072993C8C809C* ___additionalValues;
};
struct InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB 
{
	int32_t ___length;
	InputProcessor_1_tD1A40E0E5825AAABC3416EC96E087FF6E6351DD2* ___firstValue;
	InputProcessor_1U5BU5D_t5083205703ED9D1A4B8037E3BBE765389957231A* ___additionalValues;
};
struct InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF 
{
	int32_t ___length;
	InputProcessor_1_t10DFF33E2326C9CB9E156D4E45DB2D85EFD54C7F* ___firstValue;
	InputProcessor_1U5BU5D_tBA73A89FF9ECD7F1DA5B139ABBA8609E7047B2FF* ___additionalValues;
};
struct InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986 
{
	int32_t ___length;
	InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* ___firstValue;
	InputProcessor_1U5BU5D_t54A7F487245D9D79D78092F4932E2F137D0F56B9* ___additionalValues;
};
struct InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640  : public InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457
{
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};
struct SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};
struct SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4* ___U3CproviderU3Ek__BackingField;
};
struct Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 
{
	int16_t ___a;
	int16_t ___b;
	int16_t ___c;
};
struct Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 
{
	int32_t ___a;
	int32_t ___b;
	int32_t ___c;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 
{
	int32_t ___firstIndex;
	int32_t ___indexCount;
	int32_t ___minIndexVal;
	int32_t ___vertsReferenced;
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___U3CfocusableU3Ek__BackingField;
	int32_t ___U3CtabIndexU3Ek__BackingField;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	alignas(IL2CPP_SIZEOF_VOID_P) InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
#pragma pack(push, tp, 1)
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding[4];
					uint16_t ___sizeInBytes;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding[6];
					uint16_t ___deviceId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding[8];
					double ___time;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_OffsetPadding_forAlignmentOnly[8];
					double ___time_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding[16];
					int32_t ___eventId;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};
#pragma pack(pop, tp)
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8  : public UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A
{
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	String_t* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	char* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow;
	uint64_t ___m_GuidHigh;
	Il2CppChar* ___m_Name;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries;
};
struct iOSStepCounterState_t083C1D97E6F948B31ADDD38B9DA83E6EA4F39E5B 
{
	int32_t ___stepCounter;
};
struct PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 
{
	float ___distance;
	float ___cosineAngleWithRay;
};
struct U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A__padding[1];
	};
};
struct U3CstateDataU3Ee__FixedBuffer_t2D79C7E59F64E19D0450D36680F1A1B52CD89F84 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CstateDataU3Ee__FixedBuffer_t2D79C7E59F64E19D0450D36680F1A1B52CD89F84__padding[1];
	};
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	int32_t ___m_ActionIndex;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_pinvoke
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317_marshaled_com
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action;
	int32_t ___m_BindingIndexInMap;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	alignas(IL2CPP_SIZEOF_VOID_P) TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	alignas(IL2CPP_SIZEOF_VOID_P) BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	alignas(IL2CPP_SIZEOF_VOID_P) InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	bool ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_pinvoke
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2_marshaled_com
{
	void* ___basePtr;
	int32_t ___mapCount;
	int32_t ___actionCount;
	int32_t ___interactionCount;
	int32_t ___bindingCount;
	int32_t ___controlCount;
	int32_t ___compositeCount;
	TriggerState_t99B6AEA05EECEE1FEE7B60C2ABA73FA03685F38D* ___actionStates;
	BindingState_t69D9579E13933436EAF3A3886EAED220DFD696EA* ___bindingStates;
	InteractionState_t057CEDBCC55120B30A48DAD0A4111EF8FF62D3AE* ___interactionStates;
	float* ___controlMagnitudes;
	float* ___compositeMagnitudes;
	int32_t* ___enabledControls;
	uint16_t* ___actionBindingIndicesAndCounts;
	uint16_t* ___actionBindingIndices;
	int32_t* ___controlIndexToBindingIndex;
	uint16_t* ___controlGroupingAndComplexity;
	int32_t ___controlGroupingInitialized;
	ActionMapIndices_t013BEFD76B7FE52E413C5DBF5C7CDA4194800CBD* ___mapIndices;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74 
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State;
	ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* ___m_Ptr;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_pinvoke
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15_marshaled_com
{
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers;
};
#pragma pack(push, tp, 1)
struct ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0 
{
	uint16_t ___endBitOffset;
	int16_t ___leftChildIndex;
	uint16_t ___controlStartIndex;
	uint8_t ___controlCount;
};
#pragma pack(pop, tp)
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0 
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_pinvoke
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0_marshaled_com
{
	InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct U3CstateDataU3Ee__FixedBuffer_t00ED1E0C66E396C0021CE2F46B671748BC5E5FEC 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CstateDataU3Ee__FixedBuffer_t00ED1E0C66E396C0021CE2F46B671748BC5E5FEC__padding[1];
	};
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_pinvoke
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02_marshaled_com
{
	int32_t ___parentId;
	List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* ___uxmlObjectAssets;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B 
{
	union
	{
		struct
		{
		};
		uint8_t Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B__padding[1];
	};
};
struct U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2__padding[1];
	};
};
struct U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254__padding[1];
	};
};
struct AlignOfHelper_1_tB3C4B47AE4565B7C908F05CF40DA16811BD9BAD5 
{
	uint8_t ___dummy;
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 ___data;
};
struct AlignOfHelper_1_tF4AFC8602367E8FB2E848D1662D13BF87733C452 
{
	uint8_t ___dummy;
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 ___data;
};
struct AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285 
{
	uint8_t ___dummy;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___data;
};
struct AlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485 
{
	uint8_t ___dummy;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___data;
};
struct AlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D 
{
	uint8_t ___dummy;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___data;
};
struct AlignOfHelper_1_tE14AC530DDB720CDBDD8F18F01AF51AA8A72B5D1 
{
	uint8_t ___dummy;
	DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___data;
};
struct AlignOfHelper_1_t34F1F7B1C240980BD9A2FE1C6A698A61423A9012 
{
	uint8_t ___dummy;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___data;
};
struct AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC 
{
	uint8_t ___dummy;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___data;
};
struct AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56 
{
	uint8_t ___dummy;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data;
};
struct AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87 
{
	uint8_t ___dummy;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___data;
};
struct AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227 
{
	uint8_t ___dummy;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___data;
};
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	uint8_t ___dummy;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data;
};
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	uint8_t ___dummy;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data;
};
struct AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E 
{
	uint8_t ___dummy;
	PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___data;
};
struct CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_Callbacks;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToAdd;
	InlinedArray_1_t90D679876AE3A52129F69F403ECC9AD16D60AD9F ___m_CallbacksToRemove;
};
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd;
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove;
};
struct CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_Callbacks;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToAdd;
	InlinedArray_1_tF80F63393E0BF97AFE20E770FC71798135300300 ___m_CallbacksToRemove;
};
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	int32_t ___length;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues;
};
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	bool ___hasValue;
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value;
};
struct TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A  : public SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F
{
};
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC  : public RuntimeObject
{
	int64_t ___m_StartTimeMs;
	int32_t ___m_DurationMs;
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField;
	bool ___U3CisRunningU3Ek__BackingField;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField;
	bool ___U3CautoRecycleU3Ek__BackingField;
	bool ___U3CrecycledU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField;
	Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___U3CvalueUpdatedU3Ek__BackingField;
	Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___U3CinitialValueU3Ek__BackingField;
	Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5* ___U3CinterpolatorU3Ek__BackingField;
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ____from;
	bool ___fromValueSet;
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___U3CtoU3Ek__BackingField;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01 
{
	uint32_t ___m_ParentBoneIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_Rotation;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 
{
	intptr_t ___m_Identifier;
	uint64_t ___m_Capabilities;
	int32_t ___m_Rank;
};
struct ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B 
{
	int32_t ___m_BodyID;
	int32_t ___m_OtherBodyID;
	intptr_t ___m_StartPtr;
	uint32_t ___m_NbPairs;
	uint16_t ___m_Flags;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity;
};
struct ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___transformUVs;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___addFlags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityPage;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___textCoreSettingsPage;
	int32_t ___isText;
	float ___textureId;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
	int32_t ___flipIndices;
};
struct CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 
{
	intptr_t ___vertSrc;
	intptr_t ___vertDst;
	int32_t ___vertCount;
	intptr_t ___indexSrc;
	intptr_t ___indexDst;
	int32_t ___indexCount;
	int32_t ___indexOffset;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LeftEyePosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_LeftEyeRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RightEyePosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_RightEyeRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint;
	float ___m_LeftEyeOpenAmount;
	float ___m_RightEyeOpenAmount;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C 
{
	uint32_t ___offsetFromWriteStart;
	uint32_t ___size;
	uintptr_t ___source;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700  : public RuntimeObject
{
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___maps;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___controls;
	IInputInteractionU5BU5D_t175AB10EB3221C36393F258F530F94D8DD01CB93* ___interactions;
	InputProcessorU5BU5D_t79582BEBC3FAF824D9762566AA6E979F95E6EB64* ___processors;
	InputBindingCompositeU5BU5D_tB9A645573A56F8DC9EC7AD84F1BE24C2B0F4319E* ___composites;
	int32_t ___totalProcessorCount;
	UnmanagedMemory_t862EBE5224929ED0E2F989D790EB6B8633E612A2 ___memory;
	bool ___m_OnBeforeUpdateHooked;
	bool ___m_OnAfterUpdateHooked;
	bool ___m_InProcessControlStateChange;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___m_CurrentlyProcessingThisEvent;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnBeforeUpdateDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
};
#pragma pack(push, tp, 1)
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};
#pragma pack(pop, tp)
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	uint32_t ___m_ByteOffset;
	uint32_t ___U3CbitOffsetU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
};
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls;
	int32_t ___m_ControlCount;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer;
	int32_t ___m_StateSizeInBytes;
	int32_t ___m_RecordCount;
	int32_t ___m_HistoryDepth;
	int32_t ___m_ExtraMemoryPerRecord;
	int32_t ___m_HeadIndex;
	uint32_t ___m_CurrentVersion;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask;
	bool ___m_AddNewControls;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 
{
	Guid_t ___guid;
	Guid_t ___textureGuid;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size;
	intptr_t ___name;
	intptr_t ___texture;
};
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A 
{
	MeshId_t2CF122567F06D0AA4F80DDA5CB51E8CD3B7EA2AC ___U3CMeshIdU3Ek__BackingField;
	uint64_t ___U3CTimestampU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CScaleU3Ek__BackingField;
};
struct ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 
{
	intptr_t ___actor;
	intptr_t ___otherActor;
	intptr_t ___shape;
	intptr_t ___otherShape;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___otherRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___otherPosition;
	int32_t ___numContacts;
	intptr_t ___contacts;
};
#pragma pack(push, tp, 1)
struct MouseState_t0D9AD9D7629CA3F363E7C2AFD710A11D965408E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
				};
				#pragma pack(pop, tp)
				struct
				{
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_OffsetPadding[8];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_OffsetPadding_forAlignmentOnly[8];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___scroll_OffsetPadding[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___scroll_OffsetPadding_forAlignmentOnly[16];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buttons_OffsetPadding[24];
					uint16_t ___buttons;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buttons_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___buttons_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_OffsetPadding[26];
					uint16_t ___displayIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_OffsetPadding_forAlignmentOnly[26];
					uint16_t ___displayIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___clickCount_OffsetPadding[28];
					uint16_t ___clickCount;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___clickCount_OffsetPadding_forAlignmentOnly[28];
					uint16_t ___clickCount_forAlignmentOnly;
				};
			};
		};
		uint8_t MouseState_t0D9AD9D7629CA3F363E7C2AFD710A11D965408E1__padding[30];
	};
};
#pragma pack(pop, tp)
struct NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 
{
	intptr_t ___src;
	intptr_t ___dst;
	int32_t ___count;
	intptr_t ___closingSrc;
	intptr_t ___closingDst;
	int32_t ___closingCount;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform;
	int32_t ___vertsBeforeUVDisplacement;
	int32_t ___vertsAfterUVDisplacement;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
#pragma pack(push, tp, 1)
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					bool ___isTracked;
				};
				#pragma pack(pop, tp)
				struct
				{
					bool ___isTracked_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
#pragma pack(pop, tp)
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___isTracked_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding[4];
					uint32_t ___trackingState;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___trackingState_OffsetPadding_forAlignmentOnly[4];
					uint32_t ___trackingState_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[8];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___rotation_OffsetPadding_forAlignmentOnly[20];
					Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___velocity_OffsetPadding_forAlignmentOnly[36];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___angularVelocity_OffsetPadding_forAlignmentOnly[48];
					Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___angularVelocity_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2__padding[60];
	};
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	bool ___isInChain;
	bool ___isHierarchyHidden;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	bool ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
#pragma pack(push, tp, 1)
struct TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___touchId;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___touchId_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___position_OffsetPadding[4];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___position_OffsetPadding_forAlignmentOnly[4];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___delta_OffsetPadding[12];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___delta_OffsetPadding_forAlignmentOnly[12];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___pressure_OffsetPadding[20];
					float ___pressure;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___pressure_OffsetPadding_forAlignmentOnly[20];
					float ___pressure_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___radius_OffsetPadding[24];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___radius_OffsetPadding_forAlignmentOnly[24];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___phaseId_OffsetPadding[32];
					uint8_t ___phaseId;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___phaseId_OffsetPadding_forAlignmentOnly[32];
					uint8_t ___phaseId_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___tapCount_OffsetPadding[33];
					uint8_t ___tapCount;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___tapCount_OffsetPadding_forAlignmentOnly[33];
					uint8_t ___tapCount_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___displayIndex_OffsetPadding[34];
					uint8_t ___displayIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___displayIndex_OffsetPadding_forAlignmentOnly[34];
					uint8_t ___displayIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___flags_OffsetPadding[35];
					uint8_t ___flags;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___flags_OffsetPadding_forAlignmentOnly[35];
					uint8_t ___flags_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___updateStepCount_OffsetPadding[36];
					uint32_t ___updateStepCount;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___updateStepCount_OffsetPadding_forAlignmentOnly[36];
					uint32_t ___updateStepCount_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startTime_OffsetPadding[40];
					double ___startTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startTime_OffsetPadding_forAlignmentOnly[40];
					double ___startTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___startPosition_OffsetPadding[48];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___startPosition_OffsetPadding_forAlignmentOnly[48];
					Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_forAlignmentOnly;
				};
			};
		};
		uint8_t TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97__padding[56];
	};
};
#pragma pack(pop, tp)
struct Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v2;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___xformClipPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___ids;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___flags;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___opacityColorPages;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___settingIndex;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
	float ___textureId;
};
struct XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Resolution;
	int32_t ___m_Framerate;
	intptr_t ___m_NativeConfigurationHandle;
	int32_t ___m_DepthSensorSupported;
};
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices;
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs;
};
struct XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 
{
	int32_t ___m_Index;
	int32_t ___m_ParentIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position;
	int32_t ___m_Tracked;
};
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3  : public SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87
{
	Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___U3CcapabilitiesU3Ek__BackingField;
};
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE  : public SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02
{
	int32_t ___U3CcapabilitiesU3Ek__BackingField;
};
struct XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 
{
	intptr_t ___m_NativeTexture;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_MipmapCount;
	int32_t ___m_Format;
	int32_t ___m_PropertyNameId;
	int32_t ___m_Depth;
	int32_t ___m_Dimension;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme;
};
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset;
	int32_t ___m_ControlSchemeIndex;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme;
};
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	String_t* ___U3CnameU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	Type_t* ___U3CtypeU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField;
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField;
	String_t* ___m_ExtendsLayout;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField;
	int32_t ___m_ControlCount;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
};
struct RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			double ___time;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___time_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___version_OffsetPadding[8];
			uint32_t ___version;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___version_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___version_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___controlIndex_OffsetPadding[12];
			int32_t ___controlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___controlIndex_OffsetPadding_forAlignmentOnly[12];
			int32_t ___controlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithoutControlIndex_OffsetPadding_forAlignmentOnly[12];
			U3Cm_StateWithoutControlIndexU3Ee__FixedBuffer_tBC837D25D8887B1E4BCBE9B19FEB8EBD20FEF254 ___m_StateWithoutControlIndex_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_StateWithControlIndex_OffsetPadding_forAlignmentOnly[16];
			U3Cm_StateWithControlIndexU3Ee__FixedBuffer_t77EBD407B7C7A5338334A356AE94C7F24C77CDA2 ___m_StateWithControlIndex_forAlignmentOnly;
		};
	};
};
struct ExtraDataPerTouchState_tD418875A1F4A8898F6FA62CE313BEB447D687CB4 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___accumulatedDelta;
	uint32_t ___uniqueId;
};
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};
struct AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7 
{
	uint8_t ___dummy;
	ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___data;
};
struct AlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818 
{
	uint8_t ___dummy;
	ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___data;
};
struct AlignOfHelper_1_t9E775D0901DF048B6B27C4E248580CD2A6CD6612 
{
	uint8_t ___dummy;
	ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___data;
};
struct AlignOfHelper_1_t75B056471994A6AE06DA3A1CED613D4CD5BF1F0D 
{
	uint8_t ___dummy;
	CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___data;
};
struct AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A 
{
	uint8_t ___dummy;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___data;
};
struct AlignOfHelper_1_t1BD00FAB7B20A0EB7E12BA2D3D76853E3F5247EB 
{
	uint8_t ___dummy;
	GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___data;
};
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	uint8_t ___dummy;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data;
};
struct AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD 
{
	uint8_t ___dummy;
	ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___data;
};
struct AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F 
{
	uint8_t ___dummy;
	MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___data;
};
struct AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB 
{
	uint8_t ___dummy;
	ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___data;
};
struct AlignOfHelper_1_tF67FC13C3920FA9DD0EB7F9052E7FEDBFED6B20F 
{
	uint8_t ___dummy;
	NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___data;
};
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	uint8_t ___dummy;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data;
};
struct AlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2 
{
	uint8_t ___dummy;
	Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___data;
};
struct AlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF 
{
	uint8_t ___dummy;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___data;
};
struct AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1 
{
	uint8_t ___dummy;
	XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___data;
};
struct AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D 
{
	uint8_t ___dummy;
	XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___data;
};
struct AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439 
{
	uint8_t ___dummy;
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___data;
};
struct InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 
{
	int32_t ___length;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___firstValue;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___additionalValues;
};
#pragma pack(push, tp, 1)
struct ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlIndex_OffsetPadding[20];
					uint16_t ___m_ControlIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlIndex_OffsetPadding_forAlignmentOnly[20];
					uint16_t ___m_ControlIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_BindingIndex_OffsetPadding[22];
					uint16_t ___m_BindingIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_BindingIndex_OffsetPadding_forAlignmentOnly[22];
					uint16_t ___m_BindingIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding[24];
					uint16_t ___m_InteractionIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionIndex_OffsetPadding_forAlignmentOnly[24];
					uint16_t ___m_InteractionIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StateIndex_OffsetPadding[26];
					uint8_t ___m_StateIndex;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StateIndex_OffsetPadding_forAlignmentOnly[26];
					uint8_t ___m_StateIndex_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Phase_OffsetPadding[27];
					uint8_t ___m_Phase;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Phase_OffsetPadding_forAlignmentOnly[27];
					uint8_t ___m_Phase_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_StartTime_OffsetPadding[28];
					double ___m_StartTime;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_StartTime_OffsetPadding_forAlignmentOnly[28];
					double ___m_StartTime_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ValueData_OffsetPadding[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ValueData_OffsetPadding_forAlignmentOnly[36];
					U3Cm_ValueDataU3Ee__FixedBuffer_t94746BF84FF1BD9ACDDDA17AE7155A9AA40DB97A ___m_ValueData_forAlignmentOnly;
				};
			};
		};
		uint8_t ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444__padding[37];
	};
};
#pragma pack(pop, tp)
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	YogaConfig_tA7EBAFAD020EA5AB3104A2C25AB95CC7CE6FB3E2* ___yogaConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	bool ___U3CduringLayoutPhaseU3Ek__BackingField;
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_Alignment;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	int32_t ___m_Classification;
};
#pragma pack(push, tp, 1)
struct DeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateFormat_OffsetPadding[20];
					FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___stateFormat;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateFormat_OffsetPadding_forAlignmentOnly[20];
					FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___stateFormat_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateOffset_OffsetPadding[24];
					uint32_t ___stateOffset;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateOffset_OffsetPadding_forAlignmentOnly[24];
					uint32_t ___stateOffset_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateData_OffsetPadding[28];
					U3CstateDataU3Ee__FixedBuffer_t2D79C7E59F64E19D0450D36680F1A1B52CD89F84 ___stateData;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateData_OffsetPadding_forAlignmentOnly[28];
					U3CstateDataU3Ee__FixedBuffer_t2D79C7E59F64E19D0450D36680F1A1B52CD89F84 ___stateData_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t DeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859__padding[29];
	};
};
#pragma pack(pop, tp)
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	String_t* ___m_Name;
	int32_t ___m_Type;
	String_t* ___m_ExpectedControlType;
	String_t* ___m_Id;
	String_t* ___m_Processors;
	String_t* ___m_Interactions;
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings;
	int32_t ___m_Flags;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	int32_t ___m_BindingsStartIndex;
	int32_t ___m_BindingsCount;
	int32_t ___m_ControlStartIndex;
	int32_t ___m_ControlCount;
	int32_t ___m_ActionIndexInState;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled;
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed;
};
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	String_t* ___m_Path;
	String_t* ___m_DisplayName;
	String_t* ___m_DisplayNameFromLayout;
	String_t* ___m_ShortDisplayName;
	String_t* ___m_ShortDisplayNameFromLayout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent;
	int32_t ___m_UsageCount;
	int32_t ___m_UsageStartIndex;
	int32_t ___m_AliasCount;
	int32_t ___m_AliasStartIndex;
	int32_t ___m_ChildCount;
	int32_t ___m_ChildStartIndex;
	int32_t ___m_ControlFlags;
	bool ___m_CachedValueIsStale;
	bool ___m_UnprocessedCachedValueIsStale;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name;
	Type_t* ___m_Type;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts;
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides;
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages;
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls;
	String_t* ___m_DisplayName;
	String_t* ___m_Description;
	int32_t ___m_Flags;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
#pragma pack(push, tp, 1)
struct StateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 ___baseEvent_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateFormat_OffsetPadding[20];
					FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___stateFormat;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateFormat_OffsetPadding_forAlignmentOnly[20];
					FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___stateFormat_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateData_OffsetPadding[24];
					U3CstateDataU3Ee__FixedBuffer_t00ED1E0C66E396C0021CE2F46B671748BC5E5FEC ___stateData;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___stateData_OffsetPadding_forAlignmentOnly[24];
					U3CstateDataU3Ee__FixedBuffer_t00ED1E0C66E396C0021CE2F46B671748BC5E5FEC ___stateData_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t StateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F__padding[25];
	};
};
#pragma pack(pop, tp)
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___U3CpickingModeU3Ek__BackingField;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___U3CyogaNodeU3Ek__BackingField;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___U3CenabledSelfU3Ek__BackingField;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventCallback;
	int32_t ___m_EventCallbackCategories;
	int32_t ___m_CachedEventCallbackParentCategories;
	int32_t ___m_DefaultActionEventCategories;
	int32_t ___m_DefaultActionAtTargetEventCategories;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Scale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Size;
	XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___m_TextureDescriptor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LeftEyePose;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_RightEyePose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FixationPoint;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_EstimatedHeightScaleFactor;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
};
struct XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 
{
	int32_t ___m_Index;
	int32_t ___m_ParentIndex;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_LocalScale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LocalPose;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_AnchorScale;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_AnchorPose;
	int32_t ___m_Tracked;
};
struct XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5  : public TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A
{
	XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487* ___m_Library;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_SessionId;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	float ___m_Distance;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_HitTrackableId;
};
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	float ___m_Distance;
	int32_t ___m_HitType;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_Id;
	Guid_t ___m_SourceImageId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose;
	int32_t ___m_TrackingState;
	intptr_t ___m_NativePtr;
	Guid_t ___m_ReferenceObjectGuid;
};
struct RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470  : public RuntimeObject
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_ActionToRebind;
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask;
	Type_t* ___m_ControlType;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_ExpectedLayout;
	int32_t ___m_IncludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_IncludePaths;
	int32_t ___m_ExcludePathCount;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludePaths;
	int32_t ___m_TargetBindingIndex;
	String_t* ___m_BindingGroupForNewBinding;
	String_t* ___m_CancelBinding;
	float ___m_MagnitudeThreshold;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Scores;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Magnitudes;
	double ___m_LastMatchTime;
	double ___m_StartTime;
	float ___m_Timeout;
	float ___m_WaitSecondsAfterMatch;
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA ___m_Candidates;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnComplete;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnCancel;
	Action_1_tF6BB59F9C8D153E48DFC364061E5356934611FDD* ___m_OnPotentialMatch;
	Func_2_t6880601B06FFA50F13EB20F6845F85618318BA8A* ___m_OnGeneratePath;
	Func_3_tD434E786A74561C49424384EF1C6D03B9B0498F4* ___m_OnComputeScore;
	Action_2_t464826F5F8CD9F38C1A734DDCFBF2AE3CC4DBF79* ___m_OnApplyBinding;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___m_OnEventDelegate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_OnAfterUpdateDelegate;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___m_LayoutCache;
	StringBuilder_t* ___m_PathBuilder;
	int32_t ___m_Flags;
	Dictionary_2_t955741F14981C0BAF47FDE7823F2703758A8723C* ___m_StartingActuations;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D 
{
	String_t* ___path;
	String_t* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___asset;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_pinvoke
{
	char* ___path;
	char* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___asset;
	Type_t* ___m_CachedType;
};
struct AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D_marshaled_com
{
	Il2CppChar* ___path;
	Il2CppChar* ___typeFullName;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___asset;
	Type_t* ___m_CachedType;
};
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A  : public MulticastDelegate_t
{
};
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};
struct AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8 
{
	uint8_t ___dummy;
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___data;
};
struct AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51 
{
	uint8_t ___dummy;
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___data;
};
struct AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B 
{
	uint8_t ___dummy;
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___data;
};
struct AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383 
{
	uint8_t ___dummy;
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___data;
};
struct AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0 
{
	uint8_t ___dummy;
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___data;
};
struct AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67 
{
	uint8_t ___dummy;
	XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___data;
};
struct AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA 
{
	uint8_t ___dummy;
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___data;
};
struct AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1 
{
	uint8_t ___dummy;
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___data;
};
struct AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B 
{
	uint8_t ___dummy;
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___data;
};
struct AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B 
{
	uint8_t ___dummy;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___data;
};
struct AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5 
{
	uint8_t ___dummy;
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___data;
};
struct AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819 
{
	uint8_t ___dummy;
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___data;
};
struct Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD 
{
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ____list;
	int32_t ____index;
	int32_t ____version;
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D ____current;
};
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227  : public MulticastDelegate_t
{
};
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};
struct Func_3_t50E159DCCFD1AFE2F58DC0D7B987B725EBD0F102  : public MulticastDelegate_t
{
};
struct Func_3_tF463CA6BD9C149F8A4821A08FAFFA91D270841B9  : public MulticastDelegate_t
{
};
struct Func_3_t5612E46BC6D771B144970957779EC8FCEE87C291  : public MulticastDelegate_t
{
};
struct Func_3_tDC12B1480F34ED9A70CB26794928E60F60A42300  : public MulticastDelegate_t
{
};
struct Func_3_tC497D504155D3D907F9C5EEE487CC4B3B6090631  : public MulticastDelegate_t
{
};
struct Func_3_t9474A2AD78068EBD4521A09366434C0A84FFE4AD  : public MulticastDelegate_t
{
};
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};
struct Func_3_tCD4C784ED366DCCDCB2B09D49D9FADD3135B516A  : public MulticastDelegate_t
{
};
struct Func_3_tD09ACEDD8E28B7F3F54CF088B9EFB067BB2EEF7C  : public MulticastDelegate_t
{
};
struct Func_3_t367EDE0EF333E613EA44907EF9AD4A1F198D7753  : public MulticastDelegate_t
{
};
struct Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7  : public MulticastDelegate_t
{
};
struct Func_3_t3C7028C87C5875A6B182C7E6C767178999874342  : public MulticastDelegate_t
{
};
struct Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2  : public MulticastDelegate_t
{
};
struct Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79  : public MulticastDelegate_t
{
};
struct Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9  : public MulticastDelegate_t
{
};
struct Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7  : public MulticastDelegate_t
{
};
struct Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0  : public MulticastDelegate_t
{
};
struct Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B  : public MulticastDelegate_t
{
};
struct Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D  : public MulticastDelegate_t
{
};
struct Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB  : public MulticastDelegate_t
{
};
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};
struct InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tCBE1C2CE719FCFE71270323E0AEFF8C6536B0493 ___m_ProcessorStack;
	int32_t ___m_CachedValue;
	int32_t ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t209C5F9C876036B8C081C3E70D85ADAA2018197B ___m_ProcessorStack;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_CachedValue;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t2A86A6C75E0160EE14310E053C5249518871D847 ___m_ProcessorStack;
	float ___m_CachedValue;
	float ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_tE5F1062E65707D24360CEAC52E03D32C6E5BA8BB ___m_ProcessorStack;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CachedValue;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	InlinedArray_1_t3C9FDC2B575450733517AE6D9168B8B7CDA52FBF ___m_ProcessorStack;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CachedValue;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_UnprocessedCachedValue;
	bool ___evaluateProcessorsEveryRead;
};
struct InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E {};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638  : public MulticastDelegate_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_ImportedWithErrors;
	bool ___m_ImportedWithWarnings;
	List_1_t3A511618E31C01BE3D1EA788ABB9AD6F354E8485* ___m_Usings;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___inlineSheet;
	List_1_tA2DA9358299C5C3E2E66D546D9B0E9089C3D7DBE* ___m_VisualElementAssets;
	List_1_t63B31A07921C5E19BCA9E85447E2260F37E3E777* ___m_TemplateAssets;
	List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* ___m_UxmlObjectEntries;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_UxmlObjectIds;
	List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* ___m_AssetEntries;
	List_1_t70BBA01AC05569034FEB9847D92E5F046528FBAF* ___m_Slots;
	int32_t ___m_ContentContainerId;
	int32_t ___m_ContentHash;
};
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	bool ___m_InitializationComplete;
	bool ___m_RequiresSettingsUpdate;
	bool ___m_AutomaticLoading;
	bool ___m_AutomaticRunning;
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders;
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField;
};
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A 
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_pinvoke
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A_marshaled_com
{
	InlinedArray_1_tD165225A32CD54B946FB419909F21C082C70A5B2 ___globalList;
	CallbackArray_1_tC72D651E25D95D1B5D837A010859EDE49AD131FA ___onActionChange;
	CallbackArray_1_tB6F9AD05405749A2888C89224C8F5ECF4E1C0411 ___onActionControlsChanged;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4_StaticFields
{
	UxmlObjectAssetU5BU5D_t7A5AF0503A4E3EF68BE1AF4596149861B5791413* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F_StaticFields
{
	AssetEntryU5BU5D_t83ECF66F13D78425A1AF86967D10F3FA0A0C123F* ___s_emptyArray;
};
struct List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1_StaticFields
{
	UxmlObjectEntryU5BU5D_tF3F29A7BDD62E8BD2563FDD77C6C304E2A566235* ___s_emptyArray;
};
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool;
};
struct InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Processors;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_StaticFields
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources;
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute;
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex;
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct iOSStepCounterState_t083C1D97E6F948B31ADDD38B9DA83E6EA4F39E5B_StaticFields
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___kFormat;
};
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC_StaticFields
{
	ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE* ___sObjectPool;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700_StaticFields
{
	GlobalState_tC6D38701EF2670B99D214B9A482C428DFEA8408A ___s_GlobalState;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_StaticFields
{
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___s_Format;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_StaticFields
{
	float ___nearZ;
};
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default;
};
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant;
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts;
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance;
	int32_t ___s_CacheInstanceRef;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
struct XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_StaticFields
{
	XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___s_Default;
};
struct XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_StaticFields
{
	XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___s_Default;
};
struct XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_StaticFields
{
	XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___s_Default;
};
struct XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_StaticFields
{
	XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___s_Default;
};
struct XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_StaticFields
{
	XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___k_Default;
};
struct XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_StaticFields
{
	XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___s_Default;
};
struct XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_StaticFields
{
	XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___s_Default;
};
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default;
};
struct XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_StaticFields
{
	XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___s_Default;
};
struct XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_StaticFields
{
	XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___s_Default;
};
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB_StaticFields
{
	String_t* ___LinkedVEAInTemplatePropertyName;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___s_TemporarySlotInsertionPoints;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_gshared_inline (int32_t* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9_gshared (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m176564DBFB175DD3F13763D4A3DB8EF851208928_gshared (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB_gshared (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mB7B84565E5E531257DCAD69B65B9FB43D5D8B097_gshared_inline (Func_3_t50E159DCCFD1AFE2F58DC0D7B987B725EBD0F102* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mB7BD4CBA56A08D48CEE95E75892C5E0F2CB4F742_gshared_inline (Func_3_tF463CA6BD9C149F8A4821A08FAFFA91D270841B9* __this, RuntimeObject* ___0_arg1, double ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Func_3_Invoke_mDFA304C6A1A1C4E9465F2945F3231F3BA8D8784C_gshared_inline (Func_3_t5612E46BC6D771B144970957779EC8FCEE87C291* __this, RuntimeObject* ___0_arg1, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m4F087BEE910F0239D9F2CB90E1D826DD29AE9DD6_gshared_inline (Func_3_tDC12B1480F34ED9A70CB26794928E60F60A42300* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mD93F3FD9673D81CC66DFAC6109CFF2B8318C05CE_gshared_inline (Func_3_tC497D504155D3D907F9C5EEE487CC4B3B6090631* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Func_3_Invoke_mF6AD5A14ED370217A7AA39CC1DE2A52E4DAE8A93_gshared_inline (Func_3_t9474A2AD78068EBD4521A09366434C0A84FFE4AD* __this, RuntimeObject* ___0_arg1, int64_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mA9D55957B8D50CDEBB079892411987CC0547C781_gshared_inline (Func_3_tCD4C784ED366DCCDCB2B09D49D9FADD3135B516A* __this, RuntimeObject* ___0_arg1, float ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Func_3_Invoke_m998909392E28C38A6B2CBC5342EDD0F95DD10A01_gshared_inline (Func_3_tD09ACEDD8E28B7F3F54CF088B9EFB067BB2EEF7C* __this, RuntimeObject* ___0_arg1, uint32_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Func_3_Invoke_mABE1AD65A3E442E9D1CE275F8372A12E87FADBB2_gshared_inline (Func_3_t367EDE0EF333E613EA44907EF9AD4A1F198D7753* __this, RuntimeObject* ___0_arg1, uint64_t ___1_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_GetFirstAncestorOfType_TisRuntimeObject_mA69843C890BBC9038A3EE81FE85F2370ABEEAE71_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_initialValue_mDDA7B98AA3DC500773507763E8B819894B21B1F9_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_to_mE6C7F2F1A8EBA522962E6C31020A772B3D5FA889_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimation_1_set_durationMs_mEFFE4F0AEA419E53E0AF16A0FF5D8CF49DD1B41B_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_valueUpdated_m19FC5ACC701068E85ACF0A774A688E728AB483E1_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueAnimation_1_Start_m00681341434935AB99F3E2370AA52E014E6BE8C2_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_gshared (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808_gshared (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_gshared_inline (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD_gshared (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared_inline (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared_inline)(method);
}
inline void UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_inline (int32_t* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method)
{
	((  void (*) (int32_t*, int32_t*, const RuntimeMethod*))UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_gshared_inline)(___0_enumValue, ___1_intValue, method);
}
inline int32_t NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9 (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370*, const RuntimeMethod*))NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9_gshared)(__this, method);
}
inline int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370*, const RuntimeMethod*))NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline)(__this, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m176564DBFB175DD3F13763D4A3DB8EF851208928 (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m176564DBFB175DD3F13763D4A3DB8EF851208928_gshared)(___0_nativeSlice, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_mE4189C54289C04748495BE21A081AC7B4C56FA97 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, intptr_t ___2_vector4s, int32_t ___3_count, const RuntimeMethod* method) ;
inline int32_t NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50 (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50_gshared)(__this, method);
}
inline int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F*, const RuntimeMethod*))NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline)(__this, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB_gshared)(___0_nativeSlice, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, String_t** ___2_value, const RuntimeMethod* method) ;
inline bool Func_3_Invoke_m1353421606247AAE336DDB090796D014F32E32FE_inline (Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* __this, String_t* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*, String_t*, bool, const RuntimeMethod*))Func_3_Invoke_mB7B84565E5E531257DCAD69B65B9FB43D5D8B097_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline double Func_3_Invoke_m37CCA677D2CB84D7A028DDDE3B8341F026103DA6_inline (Func_3_t3C7028C87C5875A6B182C7E6C767178999874342* __this, String_t* ___0_arg1, double ___1_arg2, const RuntimeMethod* method)
{
	return ((  double (*) (Func_3_t3C7028C87C5875A6B182C7E6C767178999874342*, String_t*, double, const RuntimeMethod*))Func_3_Invoke_mB7BD4CBA56A08D48CEE95E75892C5E0F2CB4F742_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Func_3_Invoke_m41BBC5518B9FAD0C0098A033E623B9D834DA3672_inline (Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2* __this, String_t* ___0_arg1, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_arg2, const RuntimeMethod* method)
{
	return ((  Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 (*) (Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2*, String_t*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*))Func_3_Invoke_mDFA304C6A1A1C4E9465F2945F3231F3BA8D8784C_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_m6281D643708D077D1F7C658B73DC5106B2786077_inline (Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* __this, String_t* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*, String_t*, int32_t, const RuntimeMethod*))Func_3_Invoke_m4F087BEE910F0239D9F2CB90E1D826DD29AE9DD6_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int32_t Func_3_Invoke_m61F3C4246246581253A86939DC2DC0DB538397BA_inline (Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* __this, String_t* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*, String_t*, int32_t, const RuntimeMethod*))Func_3_Invoke_mD93F3FD9673D81CC66DFAC6109CFF2B8318C05CE_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline int64_t Func_3_Invoke_m354B9E76BAF82C1A56562ABC878AC671DAED4786_inline (Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* __this, String_t* ___0_arg1, int64_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7*, String_t*, int64_t, const RuntimeMethod*))Func_3_Invoke_mF6AD5A14ED370217A7AA39CC1DE2A52E4DAE8A93_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline RuntimeObject* Func_3_Invoke_m9737B4B980F5220E7D35A75E924653076546B8B8_inline (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* __this, String_t* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*, String_t*, RuntimeObject*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline float Func_3_Invoke_m230B6097A638DB728D894607E214DD2EDAC8C539_inline (Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* __this, String_t* ___0_arg1, float ___1_arg2, const RuntimeMethod* method)
{
	return ((  float (*) (Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B*, String_t*, float, const RuntimeMethod*))Func_3_Invoke_mA9D55957B8D50CDEBB079892411987CC0547C781_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline uint32_t Func_3_Invoke_m578E1BB0330220B0C83ECF1515A4CE38DB5E52B6_inline (Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D* __this, String_t* ___0_arg1, uint32_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D*, String_t*, uint32_t, const RuntimeMethod*))Func_3_Invoke_m998909392E28C38A6B2CBC5342EDD0F95DD10A01_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline uint64_t Func_3_Invoke_mE9DCA6556239268BD45E8E91848FDBE8A76C61C9_inline (Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB* __this, String_t* ___0_arg1, uint64_t ___1_arg2, const RuntimeMethod* method)
{
	return ((  uint64_t (*) (Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB*, String_t*, uint64_t, const RuntimeMethod*))Func_3_Invoke_mABE1AD65A3E442E9D1CE275F8372A12E87FADBB2_gshared_inline)(__this, ___0_arg1, ___1_arg2, method);
}
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared)(___0_value, method);
}
inline Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
inline RuntimeObject* VisualElement_GetFirstAncestorOfType_TisRuntimeObject_mA69843C890BBC9038A3EE81FE85F2370ABEEAE71 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))VisualElement_GetFirstAncestorOfType_TisRuntimeObject_mA69843C890BBC9038A3EE81FE85F2370ABEEAE71_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GetViewDataDictionary_Invoke_m79246E9355BA964ADA34F339F6D2FC30C6031D39_inline (GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VisualElement_get_viewDataKey_m1F990A70B7861D0071A4462C62477363C69223F5_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_get_enableViewDataPersistence_m7C418BC7A1E1882E68D70EC9CC026ADB8FF64A6B (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline void ValueAnimation_1_set_initialValue_mDDA7B98AA3DC500773507763E8B819894B21B1F9_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227*, const RuntimeMethod*))ValueAnimation_1_set_initialValue_mDDA7B98AA3DC500773507763E8B819894B21B1F9_gshared_inline)(__this, ___0_value, method);
}
inline void ValueAnimation_1_set_to_mE6C7F2F1A8EBA522962E6C31020A772B3D5FA889_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A, const RuntimeMethod*))ValueAnimation_1_set_to_mE6C7F2F1A8EBA522962E6C31020A772B3D5FA889_gshared_inline)(__this, ___0_value, method);
}
inline void ValueAnimation_1_set_durationMs_mEFFE4F0AEA419E53E0AF16A0FF5D8CF49DD1B41B (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, int32_t, const RuntimeMethod*))ValueAnimation_1_set_durationMs_mEFFE4F0AEA419E53E0AF16A0FF5D8CF49DD1B41B_gshared)(__this, ___0_value, method);
}
inline void ValueAnimation_1_set_valueUpdated_m19FC5ACC701068E85ACF0A774A688E728AB483E1_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A*, const RuntimeMethod*))ValueAnimation_1_set_valueUpdated_m19FC5ACC701068E85ACF0A774A688E728AB483E1_gshared_inline)(__this, ___0_value, method);
}
inline void ValueAnimation_1_Start_m00681341434935AB99F3E2370AA52E014E6BE8C2 (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, const RuntimeMethod*))ValueAnimation_1_Start_m00681341434935AB99F3E2370AA52E014E6BE8C2_gshared)(__this, method);
}
inline Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253 (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD (*) (List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F*, const RuntimeMethod*))List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_gshared)(__this, method);
}
inline void Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808 (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD*, const RuntimeMethod*))Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808_gshared)(__this, method);
}
inline AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_inline (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method)
{
	return ((  AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D (*) (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD*, const RuntimeMethod*))Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* AssetEntry_get_type_mF58DB144BB0A3D53633E8A2EA2EB4C692CDDC23D (AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD*, const RuntimeMethod*))Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline (UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, int32_t ___0_id, const RuntimeMethod* method) ;
inline Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC (List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D (*) (List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	return ((  UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461 (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* ___0_uxmlObjectAsset, const RuntimeMethod* method) ;
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_inline (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared)(__this, method);
}
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768 (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared)(__this, ___0_descriptors, ___1_id, method);
}
inline void SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F_gshared)(___0_descriptors, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___0_strA, String_t* ___1_strB, bool ___2_ignoreCase, const RuntimeMethod* method) ;
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* __this, String_t* ___0_id, Type_t* ___1_providerType, Type_t* ___2_subsystemTypeOverride, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___3_capabilities, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12 (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___0_descriptor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3 (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* __this, String_t* ___0_subsystemId, Type_t* ___1_providerType, Type_t* ___2_subsystemTypeOverride, int32_t ___3_capabilities, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31 (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*, const RuntimeMethod*))XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared)(__this, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, double* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, double*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, int64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
inline bool ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_tokens, uint64_t* ___1_value, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, uint64_t*, int32_t, int32_t, const RuntimeMethod*))ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780_gshared)(___0_tokens, ___1_value, ___2_index, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA (int32_t ___0_phase, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_value, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
inline int32_t InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared)(__this, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_value, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
inline float InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, float ___1_value, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, float, InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline float InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  float (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  float (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28 (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735* ___2_controlOfType, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*, const RuntimeMethod*))InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28_gshared)(__this, ___0_bindingIndex, ___1_value, ___2_controlOfType, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* __this, int32_t ___0_bindingIndex, int32_t ___1_controlIndex, bool ___2_ignoreComposites, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700*, int32_t, int32_t, bool, const RuntimeMethod*))InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE_gshared)(__this, ___0_bindingIndex, ___1_controlIndex, ___2_ignoreComposites, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared)(__this, method);
}
inline void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared)((CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_str, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_interaction, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, String_t* ___0_processor, const RuntimeMethod* method) ;
inline BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8 (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method)
{
	return ((  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 (*) (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*, const RuntimeMethod*))BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868 (Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5* __this, Type_t* ___0_layoutType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___0_controlPath, const RuntimeMethod* method) ;
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C (ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391 (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared)((ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*)__this, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) ;
inline ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	return ((  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 (*) (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*, RuntimeObject*, const RuntimeMethod*))ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline)(__this, ___0_processor, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35 (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, const RuntimeMethod* method) ;
inline void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared)((Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*)__this, il2cppRetVal, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m76F1F1F64972CF9FA310F620BE919FC60D60DCD9_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m14399447B4211FF746324EB1A6AA485F0FE476C8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_mF02E7B0C57B07175D0EFFD7C79CBBBD42A12D4C1_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mB999A43ABDF55477B9D46323BFCF4E4C3A8EB698_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m37F2A5C7F981C266D5946F69A952BCD9E88EC89A_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB2DBC5188784BEE969B5C72B7A393E5BE1353F64_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mD55F2D0FB75D026DE3F5E3599A004BA1EA101277_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mE16A858B759383B08BF2F5810A961BFD329FA785_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m28ECD372F36C5859D7EFE4EE1D8C3830DAA3DC80_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m6165434CE570A7159BF25900E2EC721F232907AA_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m431438B023F476D706C1F3A3655A402568572E87_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m226D8C2ACA421227FC92F28BE52E74DBBCDE2ECB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m9895A124B48ADEF05A7586C14A970851843BE3D7_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEBCBF8DD8278878F926E5EAEF958E36BE4CDDC81_gshared (double* ___0_from, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_from;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE44C4CE3BD2184A9F2A28E6A9FA6FA4E397AAD8_gshared (double* ___0_from, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_from;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mC66C49340031BBA3BC7F42AD8814F0270C803B1C_gshared (double* ___0_from, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m78C79739929AAB266580F0DD602A59D776CE3467_gshared (double* ___0_from, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_from;
		return (float*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF1C1F5513615654E580D9CAE0338257FD7BC609F_gshared (double* ___0_from, const RuntimeMethod* method) 
{
	{
		double* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEDEC5582F1C54C86F15FD7DE18365BA91C815B19_gshared (int32_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_from;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m1E51489BBC1A229E1E5D6926C8495B6C06EAB411_gshared (int32_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6918BBAD016AA9B9C35B7FB6A03FD2FB70376A4C_gshared (int32_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m278A077D4DEEA08B9FEB6C02E48772F7113BD297_gshared (int64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_from;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m44BEAE68DFD07ACEB072584C42158C909E6728EF_gshared (int64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_from;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF07903F5A6A3374E9178699AE4D414931863B517_gshared (int64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m1F5BB8511DD9359FD5841B980D3B70C3BA7C7328_gshared (int64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_from;
		return (float*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA6365277AE0F7B4DD91A1AC63AD67C58AECEE09E_gshared (int64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mEA3000F05255E344B85D582A39B9C2849C7398D0_gshared (float* ___0_from, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_from;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A6B34263AEF0B0CC44A46FC859D9E6D13A73B39_gshared (float* ___0_from, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBE06F5B048502F16C063C0EBC5F098865F641161_gshared (float* ___0_from, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m31A57C244B22E76C0010F688CA6CAC635E18001F_gshared (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (double*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA6595D2362B3738531F84289D8BFF48D45F1710_gshared (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5EAC315B1415AC293714C8202AAF1DF6C3F1BE1D_gshared (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC97932FAD49A0841251FC60EF3F1FCBA1CC3D91C_gshared (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (float*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* UnsafeUtility_As_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m81A97F5C1EA36015C038DCBAB01FC014CD86BF6A_gshared (uint64_t* ___0_from, const RuntimeMethod* method) 
{
	{
		uint64_t* L_0 = ___0_from;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_gshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m9668962BCDAE5E794B91763106C693FA5B11590A_gshared (int32_t ___0_lhs, int32_t ___1_rhs, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_lhs;
		int32_t L_1 = ___1_rhs;
		return (bool)((((int64_t)((int64_t)L_0)) == ((int64_t)((int64_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m5C481F0B602D350AD1D467266B1FC020AD37D39F_gshared (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		il2cpp_codegen_memcpy(L_1, ___1_rhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		return (bool)((((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0, NULL)) == ((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_1, NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC90816E6D58853C585D61A83E0383B5FE2E98304_gshared (int32_t ___0_enumValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_inline((&___0_enumValue), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_m3B39C49C6E55DD41CE78BCEBD6E575D640D38B3D_gshared (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		((  void (*) (Il2CppFullySharedGenericStruct*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_gshared (int32_t* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_intValue;
		int32_t* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mBDCF185E254B9BD3742E154D436B362227EB8F18_gshared (Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_intValue;
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 UnsafeUtility_ReadArrayElement_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m83E23AD838C4B6DE552BE12E096213728C05ECDE_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_3 = (*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 UnsafeUtility_ReadArrayElement_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m9C5B7366B34B49F10E40590C4ED43D2AD964936E_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_3 = (*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE UnsafeUtility_ReadArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m64D39B918CCC1D470660E87643D692C282A7030D_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = (*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m58B7F3FFCC913656C5C33DB7D5098860234C41D6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F UnsafeUtility_ReadArrayElement_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mF03C5E6CEC77D384B99E6E4AF33222599B779BC9_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B UnsafeUtility_ReadArrayElement_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_mF09E4416CBFF2A21FA705A9755ACACFD5DF6B1B5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = (*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m5CCC97E45C09B950207E8B842F24F0C5613C1B69_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B UnsafeUtility_ReadArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m27C9AC27DE15EAB418444BE62AD9C2CE19317991_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = (*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 UnsafeUtility_ReadArrayElement_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m783D5801F5DCAF05C17C712561D033E1608F95C3_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_3 = (*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 UnsafeUtility_ReadArrayElement_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_m80D8FB5FF2AC43167B2771AF76C08CCD3EBF8B31_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044);
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_3 = (*(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 UnsafeUtility_ReadArrayElement_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m241C71727E7C3AD0214FD60D3603EDF9F983A1A2_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_3 = (*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C UnsafeUtility_ReadArrayElement_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m48BA3DDF9CD5817DB946BC9A71A0C0F7B312216A_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C);
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_3 = (*(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeUtility_ReadArrayElement_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m6DE19D703DF7588CAF504545E67A81C5D00151DE_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = (*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_mFD2A6880C19A97DE564A6325DB89546C01675558_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = (*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A UnsafeUtility_ReadArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mC3D404320A523D49ACADB2D6894AEC3D3100776C_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = (*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 UnsafeUtility_ReadArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mEA45FBD76E48DCE01C215C48D8C647B488C60516_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = (*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 UnsafeUtility_ReadArrayElement_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_mD13EDE5498CA2DF037DD6CD6169742D2F7454532_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022);
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_3 = (*(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE8E8016F9D75B5FE0F784B0B6EBEF71D6B31D134_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 UnsafeUtility_ReadArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5CDC3521CA6DE2575CF3AAF8BC8EA755E78DDA72_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = (*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F UnsafeUtility_ReadArrayElement_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m37C0FE3BD2C12D86B544FBC51EAB336AE003CF12_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = (*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDA4F2F1FC33E2F2F8CC3E761D626E638762C61E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mDA80BAFF55EA77496672B3B5B3804B55274B7E95_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m8F5B829A65BCE22A8B2364D1C303A1E2876A3898_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 UnsafeUtility_ReadArrayElement_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_mE84C279B005DBD168A847BC8DA18235FF1E180C3_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 UnsafeUtility_ReadArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_m8B479CF0156609AC4212B51A3CEF4353DF66AC1C_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = (*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_mAD6141A2DC41E0A91675D1C71DF42CFE7A5905D1_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = (*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_m334BA46344536DF40FDC0283782B330329B1246C_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = (*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB UnsafeUtility_ReadArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m78D9105DC491BDE33AADD0C1631D665DC927AE09_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = (*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 UnsafeUtility_ReadArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m9F94E0956FEC8A77B1682ACC48C29DE8EEB22A1A_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = (*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_mC325332E85954CD6672524A8ACE44488D75BCB07_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = (*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_mE4C282AC0BDD9DE93C46CBCD06FAE533481BEED8_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = (*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 UnsafeUtility_ReadArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m0ED8A24079DA4334FC97B3B7AB491CD8B4A3CE14_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = (*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C UnsafeUtility_ReadArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mA046EEE9ADB51DA97D3C2CD510F42C31277BCAE8_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = (*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 UnsafeUtility_ReadArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m128B8510DF576F5EAB70B4F3EEF4E0A2088147D2_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = (*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m5633F49C81AF7833534B2CDF3B101D0F9ED0D576_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = (*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m759627B8B75445595F45B357AB52E34F586FCDF7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = (*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_mD8285100AE1DD306B65D6EF5899AB69D642E382A_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = (*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m5153D26AEC8C7DF5D3E18414E86ED0692E45F1B1_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = (*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mC65FF44680E234FEA194E009CF85F12C7F28228B_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = (*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC24C19ACD67D7D24118C4917A58301288B0FD2C7_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m25BE281C621C2A184586C80C28A0B1D0CDA9E780_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = (*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 UnsafeUtility_ReadArrayElementWithStride_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m053E6316FBB6487120F18825487CA27A97826E49_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_3 = (*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 UnsafeUtility_ReadArrayElementWithStride_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_m131B1373151224AF0299EE1ED18F354D93811E4B_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_3 = (*(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 UnsafeUtility_ReadArrayElementWithStride_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m778B853D35F8F9F743F067DBAB4A37629A04EDCF_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_3 = (*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C UnsafeUtility_ReadArrayElementWithStride_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m0B370C4BC7DA06371D87AF1A2AAE9F561B476F7F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_3 = (*(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeUtility_ReadArrayElementWithStride_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mE8A25B8812D21D59755CE0607D5056F04FE94899_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = (*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 UnsafeUtility_ReadArrayElementWithStride_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_mDDAA5F81BE37C4A28ED66DE1CC862BCB41D2DA9B_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_3 = (*(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F UnsafeUtility_ReadArrayElementWithStride_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_mFFC4141997C5CD7BBB9D91D0C5B55319C6264AF1_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = (*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElementWithStride_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mBAF21BAC96097C2594766CB82B39126E6E2009A1_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m8223ECA21FA21F004C4E5006FB23FE47893C7ADF_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m2CBB76CFBC7238E49441D57F868E26FD959DD911_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0823BA8B97766FCB2A9F676A2CA04C9E5E4EDE8_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD4431DDC736E0AF53C4D7C0310CABAE1D6D7C15D_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 UnsafeUtility_ReadArrayElementWithStride_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m2EB35EC2833EC488179F3931A7E0013184E27E88_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = (*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB3C4B47AE4565B7C908F05CF40DA16811BD9BAD5_mC966B4568F4AF3F69252F626884B7F212CB76055_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB3C4B47AE4565B7C908F05CF40DA16811BD9BAD5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF4AFC8602367E8FB2E848D1662D13BF87733C452_m0E58DD7EF44CA4A2C574506EE97702C927F11C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF4AFC8602367E8FB2E848D1662D13BF87733C452);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8_m986EA5EAAE6A1C6C1086FE889811F32536101A99_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB06A689E75BED03FFD7EF2F67DB0A0BF55FD26E8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8_m05019A56443F82E4A4413D78D9639F11B7DE1FED_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4B14D6C50C2E309FAFD8A3F22F5A06A357B833F8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485_mA5DABD4D8E0BBD86BA83B0F678379E8545AC346A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDD05A3FC824A309846DFDD7539C19F11BB681485);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D_m224A97D0A7A55C2774168AD6A2D2EB319F65C31D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t26A3226821AB86486949E2EEA83A5BE120465E3D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7_m45843A24D6A6B1CC02726C2617738C4A3B3B639B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEC193CCC2AC6E38B0E639D12C62A3A14B63D72E7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818_mB94030527368B8CB6C6A4E9C84DAED859A8663F5_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4105A0AF8BF82D1D9B959E54E06A9D99545BF818);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9E775D0901DF048B6B27C4E248580CD2A6CD6612_mB3474CDA3677438AA2FD2D6F311E8EB329F27D29_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9E775D0901DF048B6B27C4E248580CD2A6CD6612);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t75B056471994A6AE06DA3A1CED613D4CD5BF1F0D_m6AEB693C64A8A416B639B37A3F9E212814FBB6EF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t75B056471994A6AE06DA3A1CED613D4CD5BF1F0D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE14AC530DDB720CDBDD8F18F01AF51AA8A72B5D1_m9970FA4416A79BB15684915FD98D00894550298F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE14AC530DDB720CDBDD8F18F01AF51AA8A72B5D1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1BD00FAB7B20A0EB7E12BA2D3D76853E3F5247EB_mFC5522223DB45C6A705827F68E94F78DE53A4E9E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1BD00FAB7B20A0EB7E12BA2D3D76853E3F5247EB);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t34F1F7B1C240980BD9A2FE1C6A698A61423A9012_m173BB325D19F75E2E5B290162F9E30C54D915349_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t34F1F7B1C240980BD9A2FE1C6A698A61423A9012);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD_mE5A521CBA8FB58A7C9C7DCCB8E69EC7FBC3DEA52_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB64EA1C3849C395B01026BB700A9C2A0ECB160FD);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F_mE9A4DCD522EE069CE6033D3FAC45C2247DA10361_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9F543929F600FA93DA40FC6F5A5E5C0DCB61F42F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB_mBAC80201764318E3EA5F8128D39E09641398AE17_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD67A48EC63F59A3B0822645B10F6057BB0B1A6FB);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF67FC13C3920FA9DD0EB7F9052E7FEDBFED6B20F_m8B9FF241F6AE518B0B6FD5C4751150118A896E57_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF67FC13C3920FA9DD0EB7F9052E7FEDBFED6B20F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A_mA7E20A1B9EBF3F0C025AEB17B4218DED4B1FEC3F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B2704248131E32283F29FE1808F75EF8FB18A4A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87_m64BF1DF1CDD0867AB39FCF8756B18431276CA8E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1B0EA5A1E7D9C74577BD9F7B65768A70AB421E87);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2_m05C5346D9EA91529816357891C7EC7B2B4283021_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6867F50FD3853DD4CA4DD96AD88FE1A614E678D2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2_m339635A9CD7DE84F0026C1D0AD4ACFEB0FDC7DF0_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t82117C0F9F1FB124A9CEB4215A5BB62387D6E5D2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019_m92D326AE7D9C6FC84D0197EAA7F59131FCACEC19_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1D98A9CFF0C9114AE482F0AA11708126EC3AB019);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817_m481B6255CC2EBB63A42623A3A80AD906330E6F8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84005CDD923F2FAA0990DF7256AB404C250EB817);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF_m4AE5F714DC0F7B5A09B2F94B03A5AE907BB658CD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7A2C4AA30B2C9EC8415A83A5A9B280DBF11AB9AF);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51_mB26F10D1EEE97DF65908C2D07D713028FB218082_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0F0471D2FE3757817D5616407CF8C963E068D51);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1_m08A3DB952CA15C85512FB3E294EC2A508DEA5D2B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0469BA4E514B73A985C93ED290FF5F66607A4EE1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m04B1465BE8E55325E74E29CDBC71AC5D3FA32EEF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_mF820514842935031BFBF213AB9E8628107B37F25_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01_m067C68F70B0A0D0F0EAAE530B279352D21CB5409_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bone_t85144A44EB1A1A887FF94DA59A79BD7065BE9B01);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m7A86C643E2B3050004055E36F8081C9BC174DF43_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_mEEA5AE2DA999749F3556BBFF1964B302E90A0D64_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m080979B9E5C222F12B1B8702C3CD22FA74D1E79E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m506739DDFD44F4F6CE36D20C36BFA90D7F56E4AE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mEAF8889D8E67EB11CD5FFD32B4D13466BD28C2E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_m390771D188BFC7495FCB3A56351B5E401291B516_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m82710E16270356F3AEDF29FF0F80FF4DB380D176_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_mDEF9371E9D44D430D08AF358A54E90F9E60FC063_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_m7D949175ACA5B6AFDCC74A6E345FEE142BF9CFB9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mE4A49234E23602F164AFD4455C15DB62D199B934_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(double);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mCACBEBA408621EAA0B912D8387D4E285ABD691A7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisEyes_t239151DFDE1BB47589CEBD22261A793F142B211D_mDA2B3B5A3F3E12B153DDBDBDF84F0927D320F0F9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Eyes_t239151DFDE1BB47589CEBD22261A793F142B211D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m5869B2CC0B178CF931039F03DD40C1167D68F6C5_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5_m0A49629FF4362F75BF20F043E1BA1E7D050C76F9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA4AB8080EA0E08D36EDABF8B0AEFBA312EF6DE36_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m9648A6CA697B17B009BBEDCE817AF98293EA07A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m440CD9AAB4CAA84797259A2203D8F885CE2BC55B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_mCCE360F24E552B1FB2E2380D875629DC410F55B4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_mC54F55F9EC7B43A45570471F1D8CFA82F37AFE1D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMouseState_t0D9AD9D7629CA3F363E7C2AFD710A11D965408E1_m60C031CACB70E4594F830EF07B6BCF5FEB43538D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MouseState_t0D9AD9D7629CA3F363E7C2AFD710A11D965408E1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m36A8F361C24BE1FFA4CF98E4C7043B1A11DD7E68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2_m5602DE4A526FB8228B28470E4E32C719A0955D68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PoseState_t1455185C7AA7AC8BCD6767AABF0AC47367FB99D2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3E4AF62978F92E52CE242CAC83115C8EA6C850A3_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_m289B16D0BFA3ABA0890B092845BDA91342A2B09E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(StateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97_mFE961AB914D8126DC425FAFC788195746A8CBA59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TouchState_tB05024FB4BCE85BAB82D2224AD4BF1E8B4589A97);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_m5B458D1A2793D9AB0C9502D58DB4EC4325248A8A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_mC5ED7BD549FB6EF864DC9B1E069B4A897B29B996_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mEC9469DBD91362D6135B8F5A81E90486BF328075_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD5B3C428BB4E25A820C242BF663DC5471EFFA654_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m6C198B51ACD7B8EC62D5E0E75433C12BE9D65A58_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m9B300E87B5D26CCDE3FBB8E6CBF94E4C0B9FB5C5_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mEBD4E94BA49FB53B4CE7CD701343C838A7189795_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m50CF1E6561AA517A00231C0C0BEB236149858ABD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisiOSStepCounterState_t083C1D97E6F948B31ADDD38B9DA83E6EA4F39E5B_m195DD9BCF77853817011B950BEDA69329EEF7A18_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(iOSStepCounterState_t083C1D97E6F948B31ADDD38B9DA83E6EA4F39E5B);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0_mFF2E3D043C8370BCBB8CDB8DFA1A5A9C59C15571_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ControlBitRangeNode_t21274A438B0E0877F1495EC579EB1DAF81B1A6B0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisExtraDataPerTouchState_tD418875A1F4A8898F6FA62CE313BEB447D687CB4_m17292481A0F243A8264A1F8A070E7B6246BD1B57_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(ExtraDataPerTouchState_tD418875A1F4A8898F6FA62CE313BEB447D687CB4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m753A09241552C98D1E7197D257604FC6BFE93D64_gshared (void* ___0_destination, int32_t ___1_index, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_3 = ___2_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m7F6249697FFF8C10349020B5CAC6BAEB2BF83B4F_gshared (void* ___0_destination, int32_t ___1_index, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_3 = ___2_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA_gshared (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_m2360E5D9B2E04892C65A6D52F6A3245DFF21519C_gshared (void* ___0_destination, int32_t ___1_index, BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE);
		BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE L_3 = ___2_value;
		*(BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t2A464EF5EC59CBA8ED5E194537D5832168B1A692_m48F359DF2B61DA25581FD16E4041AA076040B7AF_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m0577F43873220F23D776BD83C05EF9AF264E912E_gshared (void* ___0_destination, int32_t ___1_index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___2_value;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisColor32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_m8311A23278F21998AE82F784CDD4A9E6CB674522_gshared (void* ___0_destination, int32_t ___1_index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___2_value;
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_mF07AD6F58F9B07AD795297483E0B615E5A8703CE_gshared (void* ___0_destination, int32_t ___1_index, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1);
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___2_value;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B_mF19D462EAE007A50E5E2D633559CE72611626837_gshared (void* ___0_destination, int32_t ___1_index, ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B);
		ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B L_3 = ___2_value;
		*(ContactPairHeader_tA8C64AAEEF017149E77A6600B10A10F1A1C5648B*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m21D14CCEAA11CF98B8EEEE6325634CD158ECF273_gshared (void* ___0_destination, int32_t ___1_index, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1);
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_3 = ___2_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_m2BF640CDF9F67BAF74961872BD5358D348BD3D32_gshared (void* ___0_destination, int32_t ___1_index, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044);
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_3 = ___2_value;
		*(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19_gshared (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_m6AA221F82D693FBA39918D5EB8E9AD2AEF60FAF3_gshared (void* ___0_destination, int32_t ___1_index, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5);
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_3 = ___2_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_mD190D5191F07106FC0F2257CF083618339FB8075_gshared (void* ___0_destination, int32_t ___1_index, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C);
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_3 = ___2_value;
		*(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m3BAB2E9CED92D7994BB6EC17FA117572B57DBD89_gshared (void* ___0_destination, int32_t ___1_index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08);
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = ___2_value;
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337_m301E7B7954538ED3C9720AEDB18D0F340F9AB162_gshared (void* ___0_destination, int32_t ___1_index, ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337);
		ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337 L_3 = ___2_value;
		*(ManagedReferenceImage_t0A3DD612124CB7A073A99C12E370F58A25D93337*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717_gshared (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A_m015EF4BBAEA47E6D55749BDC284E51B64E3B03C9_gshared (void* ___0_destination, int32_t ___1_index, MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A);
		MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A L_3 = ___2_value;
		*(MeshTransform_t669BDD0278EB7AC2976F16FD341CC1C4747FAA6A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960_m984D59C779E69C17ED01C8FAB083CE6F114D6E44_gshared (void* ___0_destination, int32_t ___1_index, ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960);
		ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960 L_3 = ___2_value;
		*(ModifiableContactPair_t8D3CA3E20AF1718A5421A6098D633DDA67399960*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m349BD87592D1AD0DA6CE6D6704238DD1B90E65BA_gshared (void* ___0_destination, int32_t ___1_index, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022);
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_3 = ___2_value;
		*(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mC03212F05038DAAA1F180317241B89AB90500BF8_gshared (void* ___0_destination, int32_t ___1_index, float ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___2_value;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_mDEB6CF7BF3830D14F454D3A5D998164ABAC3945A_gshared (void* ___0_destination, int32_t ___1_index, TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_3 = ___2_value;
		*(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m8476BF93B4D4160B5E8028F29FEE7471C2877E3F_gshared (void* ___0_destination, int32_t ___1_index, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F);
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = ___2_value;
		*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mAAF2E6888B17B2E7C3606BE66298D92F589F68C8_gshared (void* ___0_destination, int32_t ___1_index, uint16_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___2_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m839FEB3192BEC0090FBA73A11E371E1A01C13ADF_gshared (void* ___0_destination, int32_t ___1_index, uint32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___2_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mC1C144C4AC4D9B3B2C30F06F88CB6E6AB475125E_gshared (void* ___0_destination, int32_t ___1_index, uint64_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___2_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_gshared (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_gshared (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m74BA686E64A8284271801983A4C168AB702166E3_gshared (void* ___0_destination, int32_t ___1_index, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7);
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = ___2_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82_mD744F37E373E4AD5F998FBC74781B2EF7A71811D_gshared (void* ___0_destination, int32_t ___1_index, XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82);
		XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82 L_3 = ___2_value;
		*(XRAnchor_tDD427E66CAA09DE7B058EA76223EF7DC3880FE82*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63_m5ECFCA927E9BDCC532BA0C00CC2D9747C590C433_gshared (void* ___0_destination, int32_t ___1_index, XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63);
		XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63 L_3 = ___2_value;
		*(XRCameraConfiguration_t36D3B10519762ADD407F4A4F171D120CE2B3BD63*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mCD9E63CF57DDC956BE86226E15925C2A9A95953E_gshared (void* ___0_destination, int32_t ___1_index, XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9 L_3 = ___2_value;
		*(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_m0B14FE4D6FCCE877540A8BCE92F4AE9757E666DA_gshared (void* ___0_destination, int32_t ___1_index, XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB L_3 = ___2_value;
		*(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m52FA22C93EA645BDFED07963298261127FE177CE_gshared (void* ___0_destination, int32_t ___1_index, XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692 L_3 = ___2_value;
		*(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m96732A115E78436C592C1E1929495A259055A302_gshared (void* ___0_destination, int32_t ___1_index, XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826 L_3 = ___2_value;
		*(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m17B3A2A0921F059F1787C08B8EBA55E5F26DFC5A_gshared (void* ___0_destination, int32_t ___1_index, XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26 L_3 = ___2_value;
		*(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_m941D84335134B71A0C9EDB558A25030D97DBC6BF_gshared (void* ___0_destination, int32_t ___1_index, XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1 L_3 = ___2_value;
		*(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_m504FF71C447AA8018D6602FCC91E7572D0E86398_gshared (void* ___0_destination, int32_t ___1_index, XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C L_3 = ___2_value;
		*(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_m2E577897EBCFBB18999882BA3449FC8028878610_gshared (void* ___0_destination, int32_t ___1_index, XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103 L_3 = ___2_value;
		*(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_mBEFBCFA821EEDF30C0D16137C9FC60B23BB147E2_gshared (void* ___0_destination, int32_t ___1_index, XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 L_3 = ___2_value;
		*(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_mB49B471F2F38243DC440C5250573C0C164FC505F_gshared (void* ___0_destination, int32_t ___1_index, XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19 L_3 = ___2_value;
		*(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m8AFC7D305EC8D6F79E7BFB2BFBFAEDD675FE9549_gshared (void* ___0_destination, int32_t ___1_index, XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD L_3 = ___2_value;
		*(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_mC9A38A2CC0EB3400F0C7A14C15D402E267648EB7_gshared (void* ___0_destination, int32_t ___1_index, XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75 L_3 = ___2_value;
		*(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_m795BDEB9E8AC3854C96D4BF644DCA25000EEAACA_gshared (void* ___0_destination, int32_t ___1_index, PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4 L_3 = ___2_value;
		*(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD64B816BD360CF926B77516A2707ED5608023EB3_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint8_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint8_t L_3 = ___3_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1_m56B80803D0C1ED8ABB5D4FEE52F3317449F1465B_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1 L_3 = ___3_value;
		*(ConfigurationDescriptor_tD16AA30B812AA662D234FBFE6575AF8A328CA3A1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1_m90920B9048428A1F39F7242E0E6709620B1CD820_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1 L_3 = ___3_value;
		*(ConvertMeshJobData_t35F3B601671C4880929BC30A858410B14459E3B1*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisCopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044_m636D532EA8EFE1BAC0689904891F18EBC78FD4F2_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044 L_3 = ___3_value;
		*(CopyClosingMeshJobData_t92845C1341A518A8D05CD9DCE53496BD70CF2044*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisDrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5_mCD2F56C29AE47C412D2E7E0F41ACA6AD62B6BA8F_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5 L_3 = ___3_value;
		*(DrawBufferRange_t289089F19A7539FDA77D3E63416BAFBA0955E2D5*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisGfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C_m9446B1793A81313EE89095294C7AE5257309C72B_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C L_3 = ___3_value;
		*(GfxUpdateBufferRange_t2991435FD0E056C19D7E3D4E524C13493F244B4C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m4DC048CE5BD795B898A5801D879E9063C87033C6_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_3 = ___3_value;
		*(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisNudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022_m49032824A4E2E576E24BE3FE8A9B5B0A2C86A00D_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022 L_3 = ___3_value;
		*(NudgeJobData_tC303DCF7D6A8683AA414D05AA13CB6FAD4BB4022*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_mB22FB776563DA9DF96C0320AAEF9C6C4267CCE3C_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F L_3 = ___3_value;
		*(Transform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDACE4556117FF0C08BA8B3D30086D7295146E713_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint16_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint16_t L_3 = ___3_value;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE82071A53D46C2CD689A54289FDDD5A435C6D75D_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint32_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint32_t L_3 = ___3_value;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mBED13A80D4ED2F48D804A3344B867F98E127DC36_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint64_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint64_t L_3 = ___3_value;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC6522E62D62D0F3B595EB475556A84D8FD0F88CE_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m242A5C6256A4A5B4D7B078023F71622A7F5F1812_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___3_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7_m47E4F6A6C43E6AB32050D4D1767B45D91F9D7AE2_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 L_3 = ___3_value;
		*(Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_mCB4C8061796DADD3C4676C6ED06925E7A6F5FB82_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = NativeSlice_1_get_Length_mC069C9254C3F61C678293E03E3E7C51F245F52E9((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_1;
		L_1 = NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_inline((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370 L_4 = ___2_vector4s;
		void* L_5;
		L_5 = NativeSliceUnsafeUtility_GetUnsafePtr_TisTransform3x4_t9F79FC0112A00D3FFD7AFAD2D10AD22DF929052F_m176564DBFB175DD3F13763D4A3DB8EF851208928(L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_mE4189C54289C04748495BE21A081AC7B4C56FA97(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m7AC46344B0FC8C20691F32EFD115C6E90D0B9F61_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = NativeSlice_1_get_Length_mED822A5A5476BEBA72E429C395644A7B41F78F50((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_1;
		L_1 = NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_inline((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_4 = ___2_vector4s;
		void* L_5;
		L_5 = NativeSliceUnsafeUtility_GetUnsafePtr_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m56EEC99856FD511773B66A80826B633FD8BF9FEB(L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_mE4189C54289C04748495BE21A081AC7B4C56FA97(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m8A190EA572DA6376BE105CFB0E252175299ABD7C_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_1;
		L_1 = ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))((&___2_vector4s), il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___2_vector4s;
		void* L_5;
		L_5 = ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8CE21DCF1C28EAB31D71109C60BE5319271612D9_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_mE4189C54289C04748495BE21A081AC7B4C56FA97(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_GetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m22751CE4DF8B8DDEFEBE8E79FDBB271B3B7AF62D_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* ___2_converterFunc, bool ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		bool L_9 = ___3_defaultValue;
		NullCheck(L_7);
		bool L_10;
		L_10 = Func_3_Invoke_m1353421606247AAE336DDB090796D014F32E32FE_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		bool L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UxmlAttributeDescription_GetValueFromBag_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mAB2DFD48B6FF1B839264FEDA13BAF18001421B2B_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t3C7028C87C5875A6B182C7E6C767178999874342* ___2_converterFunc, double ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	{
		Func_3_t3C7028C87C5875A6B182C7E6C767178999874342* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t3C7028C87C5875A6B182C7E6C767178999874342*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t3C7028C87C5875A6B182C7E6C767178999874342* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		double L_9 = ___3_defaultValue;
		NullCheck(L_7);
		double L_10;
		L_10 = Func_3_Invoke_m37CCA677D2CB84D7A028DDDE3B8341F026103DA6_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		double L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		double L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 UxmlAttributeDescription_GetValueFromBag_TisHash128_t93367F504B687578F893CDBCD13FB95AC8A87A40_m5FE16508C4412AA4492C8BC690555CD2B9341764_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2* ___2_converterFunc, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tEC120C89F410DCEE00F1F4541C7F79A416973FE2* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_9 = ___3_defaultValue;
		NullCheck(L_7);
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_10;
		L_10 = Func_3_Invoke_m41BBC5518B9FAD0C0098A033E623B9D834DA3672_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxmlAttributeDescription_GetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE6407D384CA016BA1904AE558D480299827A91F0_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* ___2_converterFunc, int32_t ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		int32_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Func_3_Invoke_m6281D643708D077D1F7C658B73DC5106B2786077_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int32_t L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UxmlAttributeDescription_GetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB8752E3FCFBE10C58F06DF6F6275C822C4850645_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* ___2_converterFunc, int32_t ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		int32_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Func_3_Invoke_m61F3C4246246581253A86939DC2DC0DB538397BA_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int32_t L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UxmlAttributeDescription_GetValueFromBag_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mD5D06E5828505FB5AC84B2EF9D0FDD2494C4ABA4_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* ___2_converterFunc, int64_t ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	{
		Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tD3C5141B184A528ABF7649D429906DA08C68E4A7* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		int64_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		int64_t L_10;
		L_10 = Func_3_Invoke_m354B9E76BAF82C1A56562ABC878AC671DAED4786_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		int64_t L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		int64_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UxmlAttributeDescription_GetValueFromBag_TisRuntimeObject_m068CFD3292450E7E40FB2498A6ABDD4A0B7F9FDC_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___2_converterFunc, RuntimeObject* ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		RuntimeObject* L_9 = ___3_defaultValue;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = Func_3_Invoke_m9737B4B980F5220E7D35A75E924653076546B8B8_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		RuntimeObject* L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		RuntimeObject* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UxmlAttributeDescription_GetValueFromBag_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3B483191ED592442A1ACF14EC0700E03ECDB4F8D_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* ___2_converterFunc, float ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t5328A430FC4208B44C52E4E89DC5F686DE6A6A1B* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		float L_9 = ___3_defaultValue;
		NullCheck(L_7);
		float L_10;
		L_10 = Func_3_Invoke_m230B6097A638DB728D894607E214DD2EDAC8C539_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		float L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UxmlAttributeDescription_GetValueFromBag_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m18C52289EC7089E8377ADBCD88D2CE07BC257C77_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D* ___2_converterFunc, uint32_t ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	uint32_t V_3 = 0;
	{
		Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t51D4E44E2C15496C570D8BC1066507A5F2A1980D* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		uint32_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		uint32_t L_10;
		L_10 = Func_3_Invoke_m578E1BB0330220B0C83ECF1515A4CE38DB5E52B6_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		uint32_t L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		uint32_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UxmlAttributeDescription_GetValueFromBag_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF1B8FEE68430E68A75CB234C82A56C28F3BF061A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB* ___2_converterFunc, uint64_t ___3_defaultValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	uint64_t V_3 = 0;
	{
		Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_t93382A3D4686D41CF1A0FC43A708F7BFA5C5CDBB* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		uint64_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		uint64_t L_10;
		L_10 = Func_3_Invoke_mE9DCA6556239268BD45E8E91848FDBE8A76C61C9_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_3 = L_10;
		goto IL_0035;
	}

IL_0030:
	{
		uint64_t L_11 = ___3_defaultValue;
		V_3 = L_11;
		goto IL_0035;
	}

IL_0035:
	{
		uint64_t L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, Il2CppFullySharedGenericAny ___3_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8D501F46447CC1568AA5403F1AC2691D744A0E17_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* ___2_converterFunc, bool ___3_defaultValue, bool* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		bool* L_6 = ___4_value;
		Func_3_t62BC9D925DCAC8F5784BA97C793F4E593496CDA7* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		bool L_9 = ___3_defaultValue;
		NullCheck(L_7);
		bool L_10;
		L_10 = Func_3_Invoke_m1353421606247AAE336DDB090796D014F32E32FE_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(bool*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		bool* L_11 = ___4_value;
		bool L_12 = ___3_defaultValue;
		*(bool*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2A29552F5ABFE82902CCE5FB193BAF71C65C8AD5_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* ___2_converterFunc, int32_t ___3_defaultValue, int32_t* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_6 = ___4_value;
		Func_3_t0620ECF6AB73866242850ABCE518B069D201DA79* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		int32_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Func_3_Invoke_m6281D643708D077D1F7C658B73DC5106B2786077_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		int32_t* L_11 = ___4_value;
		int32_t L_12 = ___3_defaultValue;
		*(int32_t*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mBF6B69FD22082486E0E8C3E72FF29FAE946751E8_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* ___2_converterFunc, int32_t ___3_defaultValue, int32_t* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		int32_t* L_6 = ___4_value;
		Func_3_t538A8E697534A282316BC2DF71DE83E68360C8B9* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		int32_t L_9 = ___3_defaultValue;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = Func_3_Invoke_m61F3C4246246581253A86939DC2DC0DB538397BA_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_6 = L_10;
		goto IL_0037;
	}

IL_002c:
	{
		int32_t* L_11 = ___4_value;
		int32_t L_12 = ___3_defaultValue;
		*(int32_t*)L_11 = L_12;
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisRuntimeObject_mBD67FCD642F352CE1837AA2BEB414BA72028C743_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* ___2_converterFunc, RuntimeObject* ___3_defaultValue, RuntimeObject** ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject** L_6 = ___4_value;
		Func_3_tBFBF2C1D5A7EE5485A61C55BA580F7AF50AABBF0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		RuntimeObject* L_9 = ___3_defaultValue;
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = Func_3_Invoke_m9737B4B980F5220E7D35A75E924653076546B8B8_inline(L_7, L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		RuntimeObject** L_11 = ___4_value;
		RuntimeObject* L_12 = ___3_defaultValue;
		*(RuntimeObject**)L_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, Il2CppFullySharedGenericAny ___3_defaultValue, Il2CppFullySharedGenericAny* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___4_value;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		Il2CppFullySharedGenericAny* L_11 = ___4_value;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_GetFirstAncestorOfType_TisRuntimeObject_mA69843C890BBC9038A3EE81FE85F2370ABEEAE71_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0;
		L_0 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(__this, NULL);
		V_1 = L_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_1), NULL);
		V_0 = L_1;
		goto IL_0042;
	}

IL_0012:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_5 = V_2;
		V_4 = L_5;
		goto IL_005a;
	}

IL_0032:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_0;
		NullCheck(L_6);
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_7;
		L_7 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_6, NULL);
		V_1 = L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_1), NULL);
		V_0 = L_8;
	}

IL_0042:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_0;
		V_5 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(RuntimeObject*));
		RuntimeObject* L_11 = V_6;
		V_4 = L_11;
		goto IL_005a;
	}

IL_005a:
	{
		RuntimeObject* L_12 = V_4;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_GetFirstOfType_TisRuntimeObject_mCA77177395ABE785DBFE7E90C8D14274F6B2FD40_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)__this, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_0 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		V_2 = L_2;
		goto IL_0027;
	}

IL_001e:
	{
		RuntimeObject* L_3;
		L_3 = VisualElement_GetFirstAncestorOfType_TisRuntimeObject_mA69843C890BBC9038A3EE81FE85F2370ABEEAE71(__this, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_3;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_GetOrCreateViewData_TisRuntimeObject_m4EB2F8E4D37337F4A1E5922EFB543B719A2798D5_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, RuntimeObject* ___0_existing, String_t* ___1_key, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISerializableJsonDictionary_tF3ACE88703D5968A97E7CC2CACDB1BBBF394A0A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461F9F39B44884AD0FB62320475F3B244EF6E29B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFCBF45CC85E2F7DF0032BCEDAB25874A01CEEC4);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B8_0 = 0;
	Type_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	Type_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	{
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0;
		L_0 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((!(((RuntimeObject*)(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0), _stringLiteralEFCBF45CC85E2F7DF0032BCEDAB25874A01CEEC4, NULL);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_1;
		L_1 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_2;
		L_2 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline(__this, NULL);
		NullCheck(L_2);
		GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* L_3;
		L_3 = VirtualFuncInvoker0< GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* >::Invoke(17, L_2);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_4;
		L_4 = VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline(__this, NULL);
		NullCheck(L_4);
		GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* L_5;
		L_5 = VirtualFuncInvoker0< GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* >::Invoke(17, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = GetViewDataDictionary_Invoke_m79246E9355BA964ADA34F339F6D2FC30C6031D39_inline(L_5, NULL);
		G_B4_0 = L_6;
		goto IL_003d;
	}

IL_003c:
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
	}

IL_003d:
	{
		V_0 = G_B4_0;
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_8;
		L_8 = VisualElement_get_viewDataKey_m1F990A70B7861D0071A4462C62477363C69223F5_inline(__this, NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (L_9)
		{
			goto IL_0059;
		}
	}
	{
		bool L_10;
		L_10 = VisualElement_get_enableViewDataPersistence_m7C418BC7A1E1882E68D70EC9CC026ADB8FF64A6B(__this, NULL);
		G_B8_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B8_0 = 1;
	}

IL_005a:
	{
		V_2 = (bool)G_B8_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_12 = ___0_existing;
		V_3 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_14 = ___0_existing;
		V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_00c9;
	}

IL_0076:
	{
		RuntimeObject* L_15;
		L_15 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_4 = L_15;
		goto IL_00c9;
	}

IL_007f:
	{
		String_t* L_16 = ___1_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19 = L_18;
		if (L_19)
		{
			G_B14_0 = L_19;
			G_B14_1 = _stringLiteral461F9F39B44884AD0FB62320475F3B244EF6E29B;
			G_B14_2 = L_16;
			goto IL_0096;
		}
		G_B13_0 = L_19;
		G_B13_1 = _stringLiteral461F9F39B44884AD0FB62320475F3B244EF6E29B;
		G_B13_2 = L_16;
	}
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B13_1;
		G_B15_2 = G_B13_2;
		goto IL_009b;
	}

IL_0096:
	{
		NullCheck((RuntimeObject*)G_B14_0);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B14_0);
		G_B15_0 = L_20;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
	}

IL_009b:
	{
		String_t* L_21;
		L_21 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B15_2, G_B15_1, G_B15_0, NULL);
		V_1 = L_21;
		RuntimeObject* L_22 = V_0;
		String_t* L_23 = V_1;
		NullCheck(L_22);
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3, ISerializableJsonDictionary_tF3ACE88703D5968A97E7CC2CACDB1BBBF394A0A0_il2cpp_TypeInfo_var, L_22, L_23);
		V_5 = (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_26 = V_0;
		String_t* L_27 = V_1;
		RuntimeObject* L_28;
		L_28 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 1));
		NullCheck(L_26);
		GenericInterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 3), L_26, L_27, L_28);
	}

IL_00be:
	{
		RuntimeObject* L_29 = V_0;
		String_t* L_30 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = GenericInterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 4), L_29, L_30);
		V_4 = L_31;
		goto IL_00c9;
	}

IL_00c9:
	{
		RuntimeObject* L_32 = V_4;
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* VisualElement_StartAnimation_TisStyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_m85813DA3F6490D0F12C2CB27905500928CAF79EB_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___0_anim, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___1_fromValueGetter, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___2_to, int32_t ___3_durationMs, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___4_onValueChanged, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* V_0 = NULL;
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_0 = ___0_anim;
		Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* L_1 = ___1_fromValueGetter;
		NullCheck(L_0);
		ValueAnimation_1_set_initialValue_mDDA7B98AA3DC500773507763E8B819894B21B1F9_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_2 = ___0_anim;
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_3 = ___2_to;
		NullCheck(L_2);
		ValueAnimation_1_set_to_mE6C7F2F1A8EBA522962E6C31020A772B3D5FA889_inline(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_4 = ___0_anim;
		int32_t L_5 = ___3_durationMs;
		NullCheck(L_4);
		ValueAnimation_1_set_durationMs_mEFFE4F0AEA419E53E0AF16A0FF5D8CF49DD1B41B(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_6 = ___0_anim;
		Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* L_7 = ___4_onValueChanged;
		NullCheck(L_6);
		ValueAnimation_1_set_valueUpdated_m19FC5ACC701068E85ACF0A774A688E728AB483E1_inline(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 7));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_8 = ___0_anim;
		NullCheck(L_8);
		ValueAnimation_1_Start_m00681341434935AB99F3E2370AA52E014E6BE8C2(L_8, il2cpp_rgctx_method(method->rgctx_data, 8));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_9 = ___0_anim;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m300B910AACD4424D5526A2A5802A0B43DCDDC3A9_gshared (ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___0_anim, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___1_fromValueGetter, Il2CppFullySharedGenericAny ___2_to, int32_t ___3_durationMs, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___4_onValueChanged, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___0_anim;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___1_fromValueGetter;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482*, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___0_anim;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___2_to : &___2_to), SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___0_anim;
		int32_t L_5 = ___3_durationMs;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___0_anim;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___4_onValueChanged;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482*, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 7));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___0_anim;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 8));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___0_anim;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualTreeAsset_GetAsset_TisRuntimeObject_mDC939E06763A4A2A6C58B65E4AEA65F198ACD12C_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t G_B5_0 = 0;
	{
		List_1_t82C928BB4A4FE60D606FEBAFB9949F993554C39F* L_0 = __this->___m_AssetEntries;
		NullCheck(L_0);
		Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD L_1;
		L_1 = List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253(L_0, List_1_GetEnumerator_m351D0BECB6C7C55F3E445904DC6F6F366EE6B253_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0063:
			{
				Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808((&V_0), Enumerator_Dispose_m940C55458343A911D15E2EDAA77ED045CCCE2808_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_0058_1;
			}

IL_0010_1:
			{
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_2;
				L_2 = Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_inline((&V_0), Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_RuntimeMethod_var);
				V_1 = L_2;
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_3 = V_1;
				String_t* L_4 = L_3.___path;
				String_t* L_5 = ___0_path;
				NullCheck(L_4);
				bool L_6;
				L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
				if (!L_6)
				{
					goto IL_003f_1;
				}
			}
			{
				Type_t* L_7;
				L_7 = AssetEntry_get_type_mF58DB144BB0A3D53633E8A2EA2EB4C692CDDC23D((&V_1), NULL);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_9;
				L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
				bool L_10;
				L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
				G_B5_0 = ((int32_t)(L_10));
				goto IL_0040_1;
			}

IL_003f_1:
			{
				G_B5_0 = 0;
			}

IL_0040_1:
			{
				V_2 = (bool)G_B5_0;
				bool L_11 = V_2;
				if (!L_11)
				{
					goto IL_0057_1;
				}
			}
			{
				AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_12 = V_1;
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13 = L_12.___asset;
				V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
				goto IL_007f;
			}

IL_0057_1:
			{
			}

IL_0058_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD((&V_0), Enumerator_MoveNext_mD763754153D8A8F9D20D3968F015F19EFBA5D1BD_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0072;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		V_3 = L_15;
		goto IL_007f;
	}

IL_007f:
	{
		RuntimeObject* L_16 = V_3;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* VisualTreeAsset_GetUxmlObjects_TisRuntimeObject_mFEB9E86AA00E04E9876FE4F06B6BB485B539CF92_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, RuntimeObject* ___0_asset, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_0 = NULL;
	bool V_1 = false;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_2 = NULL;
	bool V_3 = false;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_6 = NULL;
	Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D V_7;
	memset((&V_7), 0, sizeof(V_7));
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_0 = __this->___m_UxmlObjectEntries;
		V_1 = (bool)((((RuntimeObject*)(List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_00e3;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_asset;
		V_0 = ((UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)IsInstClass((RuntimeObject*)L_2, UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var));
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_3 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline(L_5, NULL);
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_7;
		L_7 = VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F(__this, L_6, NULL);
		V_4 = L_7;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_9 = L_8.___uxmlObjectAssets;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00de;
		}
	}
	{
		V_6 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_11 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_12 = L_11.___uxmlObjectAssets;
		NullCheck(L_12);
		Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D L_13;
		L_13 = List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC(L_12, List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		V_7 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE((&V_7), Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bf_1;
			}

IL_005e_1:
			{
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_14;
				L_14 = Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline((&V_7), Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
				V_8 = L_14;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_15 = V_8;
				RuntimeObject* L_16;
				L_16 = VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461(__this, L_15, NULL);
				V_9 = L_16;
				RuntimeObject* L_17 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_18 = V_10;
				V_12 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_19 = V_12;
				if (!L_19)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00bf_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_20 = V_10;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_21 = V_8;
				CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_22 = ___1_cc;
				NullCheck(L_20);
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_20, (RuntimeObject*)L_21, L_22);
				V_11 = L_23;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_24 = V_6;
				V_13 = (bool)((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_25 = V_13;
				if (!L_25)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_26 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
				List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_27 = L_26;
				RuntimeObject* L_28 = V_11;
				NullCheck(L_27);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_27, L_28, il2cpp_rgctx_method(method->rgctx_data, 5));
				V_6 = L_27;
				goto IL_00be_1;
			}

IL_00b4_1:
			{
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_29 = V_6;
				RuntimeObject* L_30 = V_11;
				NullCheck(L_29);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_29, L_30, il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_00be_1:
			{
			}

IL_00bf_1:
			{
				bool L_31;
				L_31 = Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E((&V_7), Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_00d9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_32 = V_6;
		V_2 = L_32;
		goto IL_00e3;
	}

IL_00de:
	{
	}

IL_00df:
	{
		V_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)NULL;
		goto IL_00e3;
	}

IL_00e3:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* VisualTreeAsset_GetUxmlObjects_TisIl2CppFullySharedGenericAny_m9C730BDD6D80B98E4BDA494C66E2CDB0DB9E1210_gshared (VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* __this, RuntimeObject* ___0_asset, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	const Il2CppFullySharedGenericAny L_28 = L_23;
	const Il2CppFullySharedGenericAny L_30 = L_23;
	UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* V_0 = NULL;
	bool V_1 = false;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_2 = NULL;
	bool V_3 = false;
	UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_6 = NULL;
	Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D V_7;
	memset((&V_7), 0, sizeof(V_7));
	UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	Il2CppFullySharedGenericAny V_11 = alloca(SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	memset(V_11, 0, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
	bool V_12 = false;
	bool V_13 = false;
	{
		List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1* L_0 = __this->___m_UxmlObjectEntries;
		V_1 = (bool)((((RuntimeObject*)(List_1_t63DCD4AC5D286527CD19DD2D0023AF7C03AAB2D1*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		goto IL_00e3;
	}

IL_0015:
	{
		RuntimeObject* L_2 = ___0_asset;
		V_0 = ((UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)IsInstClass((RuntimeObject*)L_2, UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A_il2cpp_TypeInfo_var));
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_3 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_00df;
		}
	}
	{
		UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline(L_5, NULL);
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_7;
		L_7 = VisualTreeAsset_GetUxmlObjectEntry_mDDAA64C28BCED936019BB51CBC32AE038EC29D1F(__this, L_6, NULL);
		V_4 = L_7;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_8 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_9 = L_8.___uxmlObjectAssets;
		V_5 = (bool)((!(((RuntimeObject*)(List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_00de;
		}
	}
	{
		V_6 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		UxmlObjectEntry_t1E72E4EBFDF4A1D3B8017BC882A5BAC71BE19E02 L_11 = V_4;
		List_1_t66ECB78C59D17DA730CE87022DD41F5781CAB6D4* L_12 = L_11.___uxmlObjectAssets;
		NullCheck(L_12);
		Enumerator_t053CCDA3CA9796408752589B0250DBD2E9A7EA3D L_13;
		L_13 = List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC(L_12, List_1_GetEnumerator_mFBE07E24F0C0A5A84ABF31BB319C8FD868DF77DC_RuntimeMethod_var);
		V_7 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ca:
			{
				Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE((&V_7), Enumerator_Dispose_m44493BA53744BE67B2093AC27A558B51CDD70CCE_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				goto IL_00bf_1;
			}

IL_005e_1:
			{
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_14;
				L_14 = Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_inline((&V_7), Enumerator_get_Current_m9AF56B1480533ABE6FE3921680B31143579FD245_RuntimeMethod_var);
				V_8 = L_14;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_15 = V_8;
				RuntimeObject* L_16;
				L_16 = VisualTreeAsset_GetUxmlObjectFactory_m5E630E3421141777AE53E93EFC74E877227D1461(__this, L_15, NULL);
				V_9 = L_16;
				RuntimeObject* L_17 = V_9;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 0)));
				RuntimeObject* L_18 = V_10;
				V_12 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_19 = V_12;
				if (!L_19)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00bf_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_20 = V_10;
				UxmlObjectAsset_tC01ADA4F547B35AFDFED4AF9106CA475214ECFD8* L_21 = V_8;
				CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_22 = ___1_cc;
				NullCheck(L_20);
				InterfaceActionInvoker3Invoker< RuntimeObject*, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_20, (RuntimeObject*)L_21, L_22, (Il2CppFullySharedGenericAny*)L_23);
				il2cpp_codegen_memcpy(V_11, L_23, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_24 = V_6;
				V_13 = (bool)((((RuntimeObject*)(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)L_24) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_25 = V_13;
				if (!L_25)
				{
					goto IL_00b4_1;
				}
			}
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_26 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
				((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_26, il2cpp_rgctx_method(method->rgctx_data, 4));
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_27 = L_26;
				il2cpp_codegen_memcpy(L_28, V_11, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				NullCheck(L_27);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_28: *(void**)L_28));
				V_6 = L_27;
				goto IL_00be_1;
			}

IL_00b4_1:
			{
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_29 = V_6;
				il2cpp_codegen_memcpy(L_30, V_11, SizeOf_T_tBD0AEB8FF947B950B27948271A4F1EC196CDA067);
				NullCheck(L_29);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_30: *(void**)L_30));
			}

IL_00be_1:
			{
			}

IL_00bf_1:
			{
				bool L_31;
				L_31 = Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E((&V_7), Enumerator_MoveNext_m7D2843E190E2E102A9F21E94554F3376F095049E_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_00d9;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d9:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_32 = V_6;
		V_2 = L_32;
		goto IL_00e3;
	}

IL_00de:
	{
	}

IL_00df:
	{
		V_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)NULL;
		goto IL_00e3;
	}

IL_00e3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_33 = V_2;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisRuntimeObject_m8476DF92DC347257A6AFCA48272BE51985407784_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		NullCheck((RuntimeObject*)(V_1));
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(0, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		RuntimeObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = __this->___m_UpdaterArray;
		int32_t L_8 = ___0_phase;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_7);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
		G_B1_0 = L_3;
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = __this->___m_UpdaterArray;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 1), L_10);
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF0514BD1867C1350767759258A8399078406FE00_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___2_array, bool ___3_shouldExist, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0 = ___3_shouldExist;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = ___2_array;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___2_array;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___0_length;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = ___2_array;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_7 = ___2_array;
		int32_t L_8 = ___0_length;
		int32_t L_9 = ___1_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_10), L_8, L_9, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = ___2_array;
		int32_t L_12 = ___0_length;
		int32_t L_13 = ___1_allocator;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_14), L_12, L_13, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = ___2_array;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_17 = ___2_array;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2BF71EECDB2B045457C18AC0E3B18C9248D46C45_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_array, bool ___3_shouldExist, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0 = ___3_shouldExist;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_1 = ___2_array;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___2_array;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___0_length;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___2_array;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___2_array;
		int32_t L_8 = ___0_length;
		int32_t L_9 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_10), L_8, L_9, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_11 = ___2_array;
		int32_t L_12 = ___0_length;
		int32_t L_13 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_14), L_12, L_13, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_15 = ___2_array;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_17 = ___2_array;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF86541C1C09AE66E862FA1049F14C8CB0C2B9DC1_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___2_array, bool ___3_shouldExist, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0 = ___3_shouldExist;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_1 = ___2_array;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___2_array;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length);
		int32_t L_5 = ___0_length;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___2_array;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_7 = ___2_array;
		int32_t L_8 = ___0_length;
		int32_t L_9 = ___1_allocator;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_10), L_8, L_9, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_11 = ___2_array;
		int32_t L_12 = ___0_length;
		int32_t L_13 = ___1_allocator;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_14), L_12, L_13, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_15 = ___2_array;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_inline(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_17 = ___2_array;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisIl2CppFullySharedGenericStruct_m26BF97C1694238E235BCDAF52C54FB6EE638ACFD_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___2_array, bool ___3_shouldExist, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0 = ___3_shouldExist;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___2_array;
		bool L_2;
		L_2 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___2_array;
		int32_t L_4;
		L_4 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_5 = ___0_length;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___2_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___2_array;
		int32_t L_8 = ___0_length;
		int32_t L_9 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_10), L_8, L_9, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___2_array;
		int32_t L_12 = ___0_length;
		int32_t L_13 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_14), L_12, L_13, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_15 = ___2_array;
		bool L_16;
		L_16 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_15, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_17 = ___2_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0046:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_mBAF3746971CDCF6B58182FF66E5A2B681461DFC7_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_descriptors;
		String_t* L_1 = ___1_id;
		XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m4A018972895E62D6EF6C8AED44E9F620D5A14199_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_descriptors;
		String_t* L_1 = ___1_id;
		XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_descriptors;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___0_descriptors;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		SubsystemManager_GetSubsystemDescriptors_TisRuntimeObject_mE17654C43AF736B8A23F50FEBBD6657CB983907F(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___0_descriptors;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = ___0_descriptors;
		NullCheck(L_5);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_6;
		L_6 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 12));
				return;
			}
		});
		try
		{
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 5));
				V_1 = L_7;
				V_2 = (RuntimeObject*)NULL;
				NullCheck((RuntimeObject*)(V_1));
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				String_t* L_9 = ___1_id;
				int32_t L_10;
				L_10 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_8, L_9, (bool)1, NULL);
				if (L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				NullCheck((RuntimeObject*)(V_1));
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				V_2 = L_11;
			}

IL_0054_1:
			{
				RuntimeObject* L_12 = V_2;
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}
			{
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_13 = __this->___m_SubsystemInstanceMap;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 10)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
				RuntimeObject* L_16 = V_2;
				NullCheck(L_13);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_13, L_15, L_16, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				goto IL_0088;
			}

IL_006f_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 11));
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m59B7D4D241C4A6E51188583FAEEFC7D1B6D512D0_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_descriptors, String_t* ___1_id, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_t1346215E738D72F515555CF84BCEBC664757A9A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const uint32_t SizeOf_TDescriptor_t2B74798ADF57AC69447766D064ECD0EFD59B49C3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 7));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 7)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 7)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TDescriptor_t2B74798ADF57AC69447766D064ECD0EFD59B49C3);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_6 = alloca(SizeOf_Enumerator_t1346215E738D72F515555CF84BCEBC664757A9A9);
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_0 = alloca(SizeOf_Enumerator_t1346215E738D72F515555CF84BCEBC664757A9A9);
	memset(V_0, 0, SizeOf_Enumerator_t1346215E738D72F515555CF84BCEBC664757A9A9);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDescriptor_t2B74798ADF57AC69447766D064ECD0EFD59B49C3);
	memset(V_1, 0, SizeOf_TDescriptor_t2B74798ADF57AC69447766D064ECD0EFD59B49C3);
	RuntimeObject* V_2 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_descriptors;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_descriptors;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___0_descriptors;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_descriptors;
		NullCheck(L_5);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_6);
		il2cpp_codegen_memcpy(V_0, L_6, SizeOf_Enumerator_t1346215E738D72F515555CF84BCEBC664757A9A9);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{
				ConstrainedActionInvoker0::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 12), L_7, (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0);
				return;
			}
		});
		try
		{
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0, (Il2CppFullySharedGenericAny*)L_8);
				il2cpp_codegen_memcpy(V_1, L_8, SizeOf_TDescriptor_t2B74798ADF57AC69447766D064ECD0EFD59B49C3);
				V_2 = (RuntimeObject*)NULL;
				String_t* L_10;
				L_10 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 7), il2cpp_rgctx_method(method->rgctx_data, 8), L_9, (void*)(Il2CppFullySharedGenericAny*)V_1);
				String_t* L_11 = ___1_id;
				int32_t L_12;
				L_12 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_10, L_11, (bool)1, NULL);
				if (L_12)
				{
					goto IL_0054_1;
				}
			}
			{
				RuntimeObject* L_14;
				L_14 = ConstrainedFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 7), il2cpp_rgctx_method(method->rgctx_data, 9), L_13, (void*)(Il2CppFullySharedGenericAny*)V_1);
				V_2 = L_14;
			}

IL_0054_1:
			{
				RuntimeObject* L_15 = V_2;
				if (!L_15)
				{
					goto IL_006f_1;
				}
			}
			{
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_16 = __this->___m_SubsystemInstanceMap;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 10)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				RuntimeObject* L_19 = V_2;
				NullCheck(L_16);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_16, L_18, L_19, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				goto IL_0088;
			}

IL_006f_1:
			{
				bool L_20;
				L_20 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_0, il2cpp_rgctx_method(method->rgctx_data, 11));
				if (L_20)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		V_1 = L_3;
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_4 = __this->___m_SubsystemInstanceMap;
		Type_t* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_4, L_5, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_7 = __this->___m_SubsystemInstanceMap;
		Type_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_7, L_8, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_0035:
	{
		RuntimeObject* L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mA4965EC76CEF5709AA6B2611C065E12BD5CA8ACB_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = __this->___m_SubsystemInstanceMap;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		RuntimeObject* L_5 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m9672E32C32CA1F82DB7CE86C58E9B91C5A8983CD_gshared (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_m380FFC26C59476ECFD500C2DFED12B6CF4870537_gshared (String_t* ___0_id, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___1_capabilities, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_id;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		String_t* L_2 = ___0_id;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_7 = ___1_capabilities;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_8 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_8, L_2, L_4, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m6CFA245081F9F2ADD548CE3948A18F59DDC3790C_gshared (String_t* ___0_subsystemId, int32_t ___1_capabilities, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		String_t* L_0 = ___0_subsystemId;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		int32_t L_5 = ___1_capabilities;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_6 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_6, L_0, L_2, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m6DEC96199F95ACCD68822060CEB79CA77AF44F12((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* L_2;
		L_2 = XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C(__this, L_1, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C  RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m078E1EC84AFDC45614AC23E12723A0B785941D40_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, double* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		double* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m791767867653D0CCE2BEFF83F336A41B5B3A718E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m838397FA34A03D1C68D150CC95FD210252FEC377_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, int64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		int64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m7418F7A8835B2770EF83F1D52F2723897CD76DEB(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m58D75192AF2281079E2FDE4034707E9883147B2C_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, uint64_t* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		uint64_t* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ExpressionEvaluator_EvaluateTokens_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mCFCF758DECB276DBCB0A8B83BAE195EF3B974780(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Expression_Evaluate_TisIl2CppFullySharedGenericAny_mC962ADA59143EB4298C3AE46F923C4552B01A4CC_gshared (Expression_t24E9476A15D0D7F6495CF8292DA48C63C871E4B7* __this, Il2CppFullySharedGenericAny* ___0_value, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___rpnTokens;
		Il2CppFullySharedGenericAny* L_1 = ___0_value;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(ExpressionEvaluator_tF912A1FA6CB7EA697DFA7926E78D808A446B48F0_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = ((  bool (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, Il2CppFullySharedGenericAny*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InputActionState_ApplyProcessors_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m26509093870260DD270C6885990FB8C74F027113(L_3, L_4, L_5, (InputControl_1_t6610D981ECAED7950370CC37B55465BBFDDD6A61*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = InputActionState_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D05A776D7807179D3C2DE9996AD39B9975C631D(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = CallbackContext_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE0C3127498BA0448959CFEC4333B5ABC0A9AC300(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = InputActionState_ApplyProcessors_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m1DEA601F2AFDAB40CC11AFEB856DB6FA9DCB3DF5(L_3, L_4, L_5, (InputControl_1_t9C13D8BC7805C38134C3ED7262E9ECF28CC59770*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = InputActionState_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m3F6D349505A90FA91D6E45F735D613165979C733(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	float V_0 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		float L_5 = V_0;
		NullCheck(L_3);
		float L_6;
		L_6 = InputActionState_ApplyProcessors_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m2893E01FE86412625A27B490FDAA0BCA6D348EF0(L_3, L_4, L_5, (InputControl_1_t7A35A4AF63A7AA94678E000D4F3265A1FD84288A*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		float L_10;
		L_10 = InputActionState_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mFBC09D8966BA50744DD4A7F7327A9E9920AB778E(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  float CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	float _returnValue;
	_returnValue = CallbackContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m7EBC8C123F0601CE5B340BA966923AEC449A8ACF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputActionState_ApplyProcessors_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8598EBBB1AC7AEF1EE484EA0FEF54CCF8BAA85E5(L_3, L_4, L_5, (InputControl_1_tC164085710F2FAA9161295C9B7FE273AF893CF66*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = InputActionState_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8FEEADFC7C2EC59E91B2FD1353009BE74DA8CA6B(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = InputActionState_ApplyProcessors_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m58567A8885AA21536AB630F6923D66C0ECA43B28(L_3, L_4, L_5, (InputControl_1_tFF1806D355F3775B3CC4F50471CB900517A8F735*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B4_0 = L_6;
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = InputActionState_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m70B517E8C40BA74B99699116CD41D18716A501CE(L_7, L_8, L_9, (bool)0, il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B4_0 = L_10;
	}

IL_004a:
	{
		V_0 = G_B4_0;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = CallbackContext_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC5704121342A8A761FA496E4922FDA7B37C20EDD(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_11 = L_5;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(V_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	memset(G_B4_0, 0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_0 = __this->___m_State;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1;
		L_1 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702(__this, NULL);
		bool L_2;
		L_2 = InputExtensions_IsInProgress_m25007106321076468BF7FE0FA4B3685FC6A6B7BA(L_1, NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_3 = __this->___m_State;
		int32_t L_4;
		L_4 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		NullCheck(L_3);
		InvokerActionInvoker4< int32_t, Il2CppFullySharedGenericStruct, InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_3, L_4, L_5, (InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)NULL, (Il2CppFullySharedGenericStruct*)L_6);
		il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		goto IL_004a;
	}

IL_0032:
	{
		InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* L_7 = __this->___m_State;
		int32_t L_8;
		L_8 = CallbackContext_get_bindingIndex_mBC8952C9915010C5D8DB5FD69D089FFC49542FB1(__this, NULL);
		int32_t L_9;
		L_9 = CallbackContext_get_controlIndex_m25E107BD1CD3C1CBAA7FAA2ED2D11EA88491A04B(__this, NULL);
		NullCheck(L_7);
		InvokerActionInvoker4< int32_t, int32_t, bool, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, L_9, (bool)0, (Il2CppFullySharedGenericStruct*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, L_10, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_004a:
	{
		il2cpp_codegen_memcpy(V_0, G_B4_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
	}

IL_004b:
	{
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TValue_t8A66E87D5B32096CF575422F7AA34E573A7371F2);
		return;
	}
}
IL2CPP_EXTERN_C  void CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*>(__this + _offset);
	CallbackContext_ReadValue_TisIl2CppFullySharedGenericStruct_m23C4764FBA56EA57A7DFA263964F971D564C2043(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* RebindingOperation_WithExpectedControlType_TisRuntimeObject_mD0F2FB39194CC7EAC8E22DFFCD9C9116BAFC7B5E_gshared (RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RebindingOperation_ThrowIfRebindInProgress_m02318B6E459C495517FF62AEAD4603BF683EED9C(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RebindingOperation_tF7D9BCBB6E69668FA3A5C211104FF8637F9F3470* L_2;
		L_2 = RebindingOperation_WithExpectedControlType_m7C6765DE8A1B747F1E83EB324CCED84F509622AB(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_3, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_004b:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithInteraction_mCE7E9DC5A2927956F4A89F55FE5D0A083936042B(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithInteraction_TisIl2CppFullySharedGenericAny_m95C788FA71E460A63445B91E144EF3F613E82EB3(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_gshared (BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0;
		L_0 = BindingSyntax_get_valid_m233A0DBDBE0B5AAB4B078F8FD39B1C60EFB6040C(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A38F099E8455AB689BE3047D74FAFF31510DF90)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_4;
		L_4 = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00((&((InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_StaticFields*)il2cpp_codegen_static_fields_for(InputProcessor_t71DA6677A0295DC87736E1D8D208FEA75D860457_il2cpp_TypeInfo_var))->___s_Processors), L_3, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = InternedString_IsEmpty_mA88FAF2562BF41C57C00E68F5A4111B22CFF173B((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAFCE96C2E9CB5FEF65576BADEA096873577F2BF6)), (RuntimeObject*)L_7, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_9 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_004b:
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		String_t* L_11;
		L_11 = InternedString_op_Implicit_m99D80AAE853F54FA2EF2603D020C7454B608D2F6(L_10, NULL);
		BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 L_12;
		L_12 = BindingSyntax_WithProcessor_m2FD9C1A3B16647C578EF8723249ABF6B45E7F9AC(__this, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317*>(__this + _offset);
	BindingSyntax_t5FB93D8F3518B4640E42E067ECB15541CD123317 _returnValue;
	_returnValue = BindingSyntax_WithProcessor_TisIl2CppFullySharedGenericAny_m2A51ACF43E8E05F55FC2A878703B27BA52D4A2B8(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_runtime_class_init_inline(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_2;
		L_2 = Collection_TryFindLayoutForType_m63B3C00D6ED29C6DD98A6B735E5C4C84A3B20868((&((InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields*)il2cpp_codegen_static_fields_for(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_il2cpp_TypeInfo_var))->___s_Layouts), L_1, NULL);
		V_1 = L_2;
		String_t* L_3;
		L_3 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&V_1), NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_7);
		V_0 = L_8;
	}

IL_003b:
	{
		String_t* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_9, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C  String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithOptionalDevice_m4FAD0C920C5F78242F300DAA320C32196FCA4CC5(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_OrWithRequiredDevice_m43958B0E5766DDEB56087E4271512A5A97B30AA6(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_gshared (ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_21 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	const Il2CppFullySharedGenericStruct L_26 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	memset(V_1, 0, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
	{
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_0 = __this->___m_Ptr;
		int32_t L_1;
		L_1 = ActionEvent_get_valueSizeInBytes_m76C6A128C9C3E3747FE7917EA1760B74647FD19C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck((MemberInfo_t*)L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		int32_t L_10;
		L_10 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = ActionEventPtr_get_action_m23A3313B38BDC794FDA707D321E173923358609F(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70A4C12A21B869FF7E372DF1484F7149BFD382D)), L_15, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_20 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_005b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericStruct*)L_21);
		il2cpp_codegen_memcpy(V_1, L_21, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		void* L_22;
		L_22 = ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((Il2CppFullySharedGenericStruct*)V_1, il2cpp_rgctx_method(method->rgctx_data, 4));
		ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444* L_23 = __this->___m_Ptr;
		uint8_t* L_24;
		L_24 = ActionEvent_get_valueData_m90D8EEC0EBFC775772BCF3FCB60FCBFA282D3E4C((ActionEvent_tFC934B0EAC602EBEF4E6F4A34EC21B329DE11444*)L_23, NULL);
		int32_t L_25 = V_0;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_22, (void*)L_24, ((int64_t)L_25), NULL);
		il2cpp_codegen_memcpy(L_26, V_1, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_26, SizeOf_TValue_tE9F57F991E7B66FFE1429999B28682CA09A19E6B);
		return;
	}
}
IL2CPP_EXTERN_C  void ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ActionEventPtr_t73A827F31E342D0649AFFDD93F489AC4F88DFB74*>(__this + _offset);
	ActionEventPtr_ReadValue_TisIl2CppFullySharedGenericStruct_mB93944AC39407FF5380EDD0FF71EA4E81FD0C391(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0;
		L_0 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_processor;
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_1);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_3 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method)
{
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*>(__this + _offset);
	ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 _returnValue;
	_returnValue = ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_inline(_thisAdjusted, ___0_processor, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		return __this;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_gshared (Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
	{
		Record_CheckValid_m67D55C30E83E6D73790913DA2E1574429B339E83(__this, NULL);
		InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* L_0 = __this->___m_Owner;
		RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0* L_1;
		L_1 = Record_get_header_m5ED6371C87B6F577C1AE75364D0C9AB5E1C3FC35(__this, NULL);
		NullCheck(L_0);
		InvokerActionInvoker2< RecordHeader_t6523EF3FFB7B66D4FC75A9C96AE57A0EC6D209F0*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tA5991C5C10DC3D84F327B266D02894A18AD4C00D);
		return;
	}
}
IL2CPP_EXTERN_C  void Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Record_tF7FF07DC502355356B48CE78337FB16B196E2EE0*>(__this + _offset);
	Record_ReadValue_TisIl2CppFullySharedGenericStruct_mE3547EC2445C456821BBAE97E1F707B940F8180A(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___2_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___2_array;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___2_array;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length);
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___2_array;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___2_array;
		int32_t L_7 = ___0_length;
		int32_t L_8 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___2_array;
		int32_t L_11 = ___0_length;
		int32_t L_12 = ___1_allocator;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___0_length, int32_t ___1_allocator, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___2_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___2_array;
		bool L_1;
		L_1 = ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___2_array;
		int32_t L_3;
		L_3 = ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_4 = ___0_length;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___2_array;
		((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___2_array;
		int32_t L_7 = ___0_length;
		int32_t L_8 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_7, L_8, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___2_array;
		int32_t L_11 = ___0_length;
		int32_t L_12 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_13), L_11, L_12, (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_13;
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* VisualElement_get_elementPanel_m4B4A37001D55527E4D015E6C6132607071F32B01_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0 = __this->___U3CelementPanelU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GetViewDataDictionary_Invoke_m79246E9355BA964ADA34F339F6D2FC30C6031D39_inline (GetViewDataDictionary_tF745E6CC7E18A67630A2B294F0BBFB27C6E57638* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VisualElement_get_viewDataKey_m1F990A70B7861D0071A4462C62477363C69223F5_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ViewDataKey;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UxmlAsset_get_id_mE5E706A24A79DA4C60DD23B39CFE269FE15C7F08_inline (UxmlAsset_t3390B2BDC40F2F8C1E82D9E0E724998D51BA109A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Id;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, const RuntimeMethod* method) 
{
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CtypeU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B_m08D8B339DBE4FBB68FFAEF400B4B9E99CA97ED11_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tBAAB7558864D4285C472508C958522FA64FB731B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9_mEA8E3E8B8BFAD90BE489F5BB5FFA40AB0FE42C8F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_tAA657FAB648E2599B519F9FD66A1CEED65034DD9);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383_m970540311AD5C5CD9F554AD955B9194E5E7ECB0A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t24826AD37278BC1E86F910E290E68226B9122383);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB_mAF3536DC8A45B64F341A3FF9A3EB56C0C3CF9229_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRFace_t235F951F4AC7CC6A0CA6829CECA05210D64982FB);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0_m2B48F097FC4B6DF0A744D5A89A8086B47A8CECF7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9AFAC91089D1432C365AB5A058F06990654A1BD0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692_m3F41B3C6E1850E30DF57CCB21C990C84A1BB0E9A_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t88EF91F599A4F22EABB233F85DE7782EE8B86692);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67_mF34681E33B267EB78BBA8FDD8F20F38E6277C571_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB70BA26303B9312FC09EC453E336D6D2B8F0AE67);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826_m6BA1DFBBBD198CB58426D9132F57396D65752548_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t8361238E6BD7781D28F7611D412FC31338849826);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D_m5A19F1C81860E5C63DA00D295F357B2C33131AD9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6EDE7192D0703353CB2B5EB5FBDFD32D1620150D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26_m06463E88B7D4B016F271C4CC2A134A4440E7E3BF_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t9674B917C7629002A302E572CABC8ACED71EFF26);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA_mC21D07B76A2752FD352A68A50DF1A46D160B4A06_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC8E96215054E004D5A52F7949B8EF9E06D20A6AA);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1_mB697C868BD5A34C03C1EA74873A2799A05ED5A72_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t3885B841862D28B0509433D566F00FA3C3CD79E1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1_mFA450837C75D91F2F8E11DA98A32482AABC20463_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC0079CB9FD6830B7BA6B13BC15F7481D3214E9E1);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C_mCA38CDBE9F042A16A1C0E2CB2162D93972CC2CFC_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t99DB921A9C92F53CEA3EB29A64E2DECDA6EA7D8C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B_mAB372851CE2EF12FA64C03A2331547CBA8BBA21C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0BA2CE7DBCB5EF19C8F4E445870D42C50A659F4B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103_mDE47ECB8AF94BBBEA38D5817983D851D4385B11B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycast_t100015712885CDF4EF42820EB36277DC6DDC8103);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B_mF086DC821933BBF610EDE49500340862C6828904_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7EB1D0C149E50AFE0A5EAAA422CDCA41DB89674B);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_m6224D105C87791322658D55A5F017D3D83D72699_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439_mE76BA61D3DBBE9D550AFE410A39CB7BF35B0C719_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t928BEA3B7E6A62AA292EAEA0DCD626F172713439);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19_m8885F6C3EB1F9956EEAC511EAED915FB63E36777_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t699023EDE6E2593F61CE969A68B5E56CD04CFA19);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5_mDA9678A4BDA010791A0BB8A2B6D025EA338BBDE7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA9C0C2FB04A7B63F7F1AE6A37420A2EC780ADCC5);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD_m6DCD64C34470921DC5ED8E8C5A215E259A7DE914_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t0F99DAB96B2D6422D0F8DA720F9BEFD3655DDFDD);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819_m40949B433544E1E3F6001F64F66515F52B9F4716_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t87562DA6772FA1850C6B8145647788CF6D37B819);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75_m7CA699973CAB664C38EACC8EDC294DF364004117_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t56B5A101A8698B5C95F2CBE93FCF0F8911B67E75);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E_m417BB15EFDE654CB9F5084AE2C6BE82D39EF993D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5FEEAD9C9850E7A660BC2F62274814436098DC4E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4_mB59551264BB73A3ECDAC262FA997B9EBEAFD3C5C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t21F2232DA9CE91BB281F37151F58B97AE92436A4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2DE327573510598889BAAF82C367CD246855CDA4_gshared_inline (int32_t* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_intValue;
		int32_t* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_mE29B800705645CDD49B576BB3B9B328811F27C90_gshared_inline (NativeSlice_1_t8229A12E65C90A3900340F6E126089DB5696D370* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m2BC6AD2264EE2D02A38D29E30D382DEA9B5A9E29_gshared_inline (NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_3_Invoke_mB7B84565E5E531257DCAD69B65B9FB43D5D8B097_gshared_inline (Func_3_t50E159DCCFD1AFE2F58DC0D7B987B725EBD0F102* __this, RuntimeObject* ___0_arg1, bool ___1_arg2, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, bool, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Func_3_Invoke_mB7BD4CBA56A08D48CEE95E75892C5E0F2CB4F742_gshared_inline (Func_3_tF463CA6BD9C149F8A4821A08FAFFA91D270841B9* __this, RuntimeObject* ___0_arg1, double ___1_arg2, const RuntimeMethod* method) 
{
	typedef double (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, double, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 Func_3_Invoke_mDFA304C6A1A1C4E9465F2945F3231F3BA8D8784C_gshared_inline (Func_3_t5612E46BC6D771B144970957779EC8FCEE87C291* __this, RuntimeObject* ___0_arg1, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_arg2, const RuntimeMethod* method) 
{
	typedef Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_m4F087BEE910F0239D9F2CB90E1D826DD29AE9DD6_gshared_inline (Func_3_tDC12B1480F34ED9A70CB26794928E60F60A42300* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_3_Invoke_mD93F3FD9673D81CC66DFAC6109CFF2B8318C05CE_gshared_inline (Func_3_tC497D504155D3D907F9C5EEE487CC4B3B6090631* __this, RuntimeObject* ___0_arg1, int32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Func_3_Invoke_mF6AD5A14ED370217A7AA39CC1DE2A52E4DAE8A93_gshared_inline (Func_3_t9474A2AD78068EBD4521A09366434C0A84FFE4AD* __this, RuntimeObject* ___0_arg1, int64_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef int64_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___0_arg1, RuntimeObject* ___1_arg2, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_3_Invoke_mA9D55957B8D50CDEBB079892411987CC0547C781_gshared_inline (Func_3_tCD4C784ED366DCCDCB2B09D49D9FADD3135B516A* __this, RuntimeObject* ___0_arg1, float ___1_arg2, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Func_3_Invoke_m998909392E28C38A6B2CBC5342EDD0F95DD10A01_gshared_inline (Func_3_tD09ACEDD8E28B7F3F54CF088B9EFB067BB2EEF7C* __this, RuntimeObject* ___0_arg1, uint32_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef uint32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Func_3_Invoke_mABE1AD65A3E442E9D1CE275F8372A12E87FADBB2_gshared_inline (Func_3_t367EDE0EF333E613EA44907EF9AD4A1F198D7753* __this, RuntimeObject* ___0_arg1, uint64_t ___1_arg2, const RuntimeMethod* method) 
{
	typedef uint64_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_12;
		L_12 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_13 = V_1;
		uint16_t L_14;
		L_14 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_15;
		L_15 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_33;
		L_33 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_34 = V_3;
		uint16_t L_35;
		L_35 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_36;
		L_36 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_54;
		L_54 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_55 = V_5;
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_57;
		L_57 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_75;
		L_75 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_76 = V_7;
		uint16_t L_77;
		L_77 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_78;
		L_78 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_96;
		L_96 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_97 = V_9;
		uint16_t L_98;
		L_98 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_99;
		L_99 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_117;
		L_117 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_118 = V_11;
		uint16_t L_119;
		L_119 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_120;
		L_120 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_138;
		L_138 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_139 = V_13;
		uint16_t L_140;
		L_140 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_141;
		L_141 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_159;
		L_159 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_160 = V_15;
		uint16_t L_161;
		L_161 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_162;
		L_162 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_180;
		L_180 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_181 = V_17;
		uint16_t L_182;
		L_182 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_183;
		L_183 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_201;
		L_201 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_202 = V_19;
		uint16_t L_203;
		L_203 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_204;
		L_204 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_initialValue_mDDA7B98AA3DC500773507763E8B819894B21B1F9_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* L_0 = ___0_value;
		__this->___U3CinitialValueU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitialValueU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_to_mE6C7F2F1A8EBA522962E6C31020A772B3D5FA889_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___0_value, const RuntimeMethod* method) 
{
	{
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_0 = ___0_value;
		__this->___U3CtoU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CtoU3Ek__BackingField))->___m_StyleValues), (void*)NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueAnimation_1_set_valueUpdated_m19FC5ACC701068E85ACF0A774A688E728AB483E1_gshared_inline (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* __this, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___0_value, const RuntimeMethod* method) 
{
	{
		Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* L_0 = ___0_value;
		__this->___U3CvalueUpdatedU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvalueUpdatedU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D Enumerator_get_Current_m740485622BA633D9D563CA1A1DEDD5518BE4D70F_gshared_inline (Enumerator_t67733E7D003F6D68C34D51D553319BD83643A4FD* __this, const RuntimeMethod* method) 
{
	{
		AssetEntry_tEB6FC90E5BB63DCA4FF932F2D64595339A28806D L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared_inline (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared_inline (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared_inline (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 ControlBuilder_WithProcessor_TisRuntimeObject_TisIl2CppFullySharedGenericStruct_m2EA32926BD2DB803F8808FD26E28D8EEF7FFA14B_gshared_inline (ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15* __this, RuntimeObject* ___0_processor, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0;
		L_0 = ControlBuilder_get_control_m988C5EFC6631CDE6987FCC3C314FBDA9C37E0E30_inline(__this, NULL);
		RuntimeObject* L_1 = ___0_processor;
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((InlinedArray_1_t2DAC0FAFC907D275EA716C952CB50090C2CFD986*)il2cpp_codegen_get_instance_field_data_pointer(((InputControl_1_t57E8840251DD1157AC34D2F2AE76CD3CCD1F797B*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->rgctx_data, 0),0)))), (InputProcessor_1_t2F5FCEBF1398876246D32DC01D63F8D2E0CF5640*)L_1);
		ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15 L_3 = (*(ControlBuilder_t9531519F44B76B04B9128FFF514E806FCCA1BB15*)__this);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_18, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_21, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_29, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_32, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_43, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_51, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_54, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_73, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_76, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_95, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_98, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_109, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
