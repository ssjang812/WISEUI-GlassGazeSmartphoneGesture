#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41;
// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A;
// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver
struct IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>
struct MixedRealitySpatialAwarenessEventData_1_t7D87A990C0BC95251E2D2AD4F12051C65A02AFAB;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem/EventHandlerEntry>>
struct Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>
struct IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider>
struct List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA;
// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,UnityEngine.GameObject>>
struct List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076;
// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem/Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>>
struct List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

extern RuntimeClass* BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var;
extern RuntimeClass* EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t867A975FDE62708B894D4C6CA5F1A3FD290703C3_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49;
extern String_t* _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6;
extern String_t* _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70;
extern String_t* _stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3;
extern String_t* _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098;
extern String_t* _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028;
extern String_t* _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF;
extern String_t* _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9;
extern String_t* _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA;
extern String_t* _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62;
extern String_t* _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3;
extern String_t* _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019;
extern String_t* _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664;
extern String_t* _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137;
extern String_t* _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E;
extern String_t* _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m91E384EC0B5A15F7C85F14F84F8FD9B162972983_RuntimeMethod_var;
extern const RuntimeMethod* BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE_RuntimeMethod_var;
extern const RuntimeMethod* MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892_RuntimeMethod_var;
extern const uint32_t MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId;
extern const uint32_t MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_MetadataUsageId;

struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


#ifndef U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#define U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t44B733462DE5B14B2B58B57D985D3CFAFB864580 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T44B733462DE5B14B2B58B57D985D3CFAFB864580_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef BASESERVICE_T4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10_H
#define BASESERVICE_T4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConfigurationProfileU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESERVICE_T4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10_H
#ifndef SYSTEMTYPE_T9696BD865921F75894EBD4D6EF913158A8BF3432_H
#define SYSTEMTYPE_T9696BD865921F75894EBD4D6EF913158A8BF3432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct  SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Utilities.SystemType::reference
	String_t* ___reference_0;
	// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_reference_0() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___reference_0)); }
	inline String_t* get_reference_0() const { return ___reference_0; }
	inline String_t** get_address_of_reference_0() { return &___reference_0; }
	inline void set_reference_0(String_t* value)
	{
		___reference_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_0), value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Utilities.SystemType::ReferenceMappings
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___ReferenceMappings_2;

public:
	inline static int32_t get_offset_of_ReferenceMappings_2() { return static_cast<int32_t>(offsetof(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432_StaticFields, ___ReferenceMappings_2)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_ReferenceMappings_2() const { return ___ReferenceMappings_2; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_ReferenceMappings_2() { return &___ReferenceMappings_2; }
	inline void set_ReferenceMappings_2(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___ReferenceMappings_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferenceMappings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMTYPE_T9696BD865921F75894EBD4D6EF913158A8BF3432_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#define ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T636F385820C291DAE25897BCEB4FBCADDA3B75F6_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#define BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T46C9D2AE3183A742EDE89944AF64A23DBF1B80A5_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef GENERICBASEEVENTDATA_TF7A8347659841F4C7134C28074F9CCC3688BA49D_H
#define GENERICBASEEVENTDATA_TF7A8347659841F4C7134C28074F9CCC3688BA49D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct  GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;
	// System.DateTime Microsoft.MixedReality.Toolkit.GenericBaseEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.GenericBaseEventData::<selectedObject>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CselectedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D, ___U3CEventTimeU3Ek__BackingField_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_3() const { return ___U3CEventTimeU3Ek__BackingField_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_3() { return &___U3CEventTimeU3Ek__BackingField_3; }
	inline void set_U3CEventTimeU3Ek__BackingField_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CselectedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D, ___U3CselectedObjectU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CselectedObjectU3Ek__BackingField_4() const { return ___U3CselectedObjectU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CselectedObjectU3Ek__BackingField_4() { return &___U3CselectedObjectU3Ek__BackingField_4; }
	inline void set_U3CselectedObjectU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CselectedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CselectedObjectU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_TF7A8347659841F4C7134C28074F9CCC3688BA49D_H
#ifndef MIXEDREALITYCAPABILITY_TF03238F01776397C3AAF6C52CD2889416143B722_H
#define MIXEDREALITYCAPABILITY_TF03238F01776397C3AAF6C52CD2889416143B722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct  MixedRealityCapability_tF03238F01776397C3AAF6C52CD2889416143B722 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealityCapability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MixedRealityCapability_tF03238F01776397C3AAF6C52CD2889416143B722, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCAPABILITY_TF03238F01776397C3AAF6C52CD2889416143B722_H
#ifndef AUTOSTARTBEHAVIOR_T9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839_H
#define AUTOSTARTBEHAVIOR_T9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct  AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOSTARTBEHAVIOR_T9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839_H
#ifndef SUPPORTEDPLATFORMS_TC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0_H
#define SUPPORTEDPLATFORMS_TC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms
struct  SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedPlatforms_tC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDPLATFORMS_TC8AF3595AC2CE7A478C6187C0304D1EB71DD52C0_H
#ifndef VOLUMETYPE_T216D85DC8F2789C4360056C5953985C65B834163_H
#define VOLUMETYPE_T216D85DC8F2789C4360056C5953985C65B834163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct  VolumeType_t216D85DC8F2789C4360056C5953985C65B834163 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.VolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VolumeType_t216D85DC8F2789C4360056C5953985C65B834163, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOLUMETYPE_T216D85DC8F2789C4360056C5953985C65B834163_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#define PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILERMARKER_T41096870004E8A2081E31E01BC0552F2F01F2B86_H
#ifndef AUTOSCOPE_TFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F_H
#define AUTOSCOPE_TFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOSCOPE_TFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef BASEEVENTSYSTEM_T0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_H
#define BASEEVENTSYSTEM_T0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseEventSystem
struct  BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.BaseEventSystem::eventExecutionDepth
	int32_t ___eventExecutionDepth_6;
	// System.Type Microsoft.MixedReality.Toolkit.BaseEventSystem::eventSystemHandlerType
	Type_t * ___eventSystemHandlerType_7;
	// System.Collections.Generic.List`1<System.Tuple`3<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,System.Type,UnityEngine.EventSystems.IEventSystemHandler>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedActions
	List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * ___postponedActions_8;
	// System.Collections.Generic.List`1<System.Tuple`2<Microsoft.MixedReality.Toolkit.BaseEventSystem_Action,UnityEngine.GameObject>> Microsoft.MixedReality.Toolkit.BaseEventSystem::postponedObjectActions
	List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * ___postponedObjectActions_9;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.BaseEventSystem_EventHandlerEntry>> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventHandlersByType>k__BackingField
	Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * ___U3CEventHandlersByTypeU3Ek__BackingField_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.BaseEventSystem::<EventListeners>k__BackingField
	List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * ___U3CEventListenersU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_eventExecutionDepth_6() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___eventExecutionDepth_6)); }
	inline int32_t get_eventExecutionDepth_6() const { return ___eventExecutionDepth_6; }
	inline int32_t* get_address_of_eventExecutionDepth_6() { return &___eventExecutionDepth_6; }
	inline void set_eventExecutionDepth_6(int32_t value)
	{
		___eventExecutionDepth_6 = value;
	}

	inline static int32_t get_offset_of_eventSystemHandlerType_7() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___eventSystemHandlerType_7)); }
	inline Type_t * get_eventSystemHandlerType_7() const { return ___eventSystemHandlerType_7; }
	inline Type_t ** get_address_of_eventSystemHandlerType_7() { return &___eventSystemHandlerType_7; }
	inline void set_eventSystemHandlerType_7(Type_t * value)
	{
		___eventSystemHandlerType_7 = value;
		Il2CppCodeGenWriteBarrier((&___eventSystemHandlerType_7), value);
	}

	inline static int32_t get_offset_of_postponedActions_8() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___postponedActions_8)); }
	inline List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * get_postponedActions_8() const { return ___postponedActions_8; }
	inline List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 ** get_address_of_postponedActions_8() { return &___postponedActions_8; }
	inline void set_postponedActions_8(List_1_tA08BD9AF20C1FFEAAC47D3CE3228DBE09C09DEF5 * value)
	{
		___postponedActions_8 = value;
		Il2CppCodeGenWriteBarrier((&___postponedActions_8), value);
	}

	inline static int32_t get_offset_of_postponedObjectActions_9() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___postponedObjectActions_9)); }
	inline List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * get_postponedObjectActions_9() const { return ___postponedObjectActions_9; }
	inline List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 ** get_address_of_postponedObjectActions_9() { return &___postponedObjectActions_9; }
	inline void set_postponedObjectActions_9(List_1_tF09772E43F5004C04E48ED2D8F83300C306AD076 * value)
	{
		___postponedObjectActions_9 = value;
		Il2CppCodeGenWriteBarrier((&___postponedObjectActions_9), value);
	}

	inline static int32_t get_offset_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___U3CEventHandlersByTypeU3Ek__BackingField_10)); }
	inline Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * get_U3CEventHandlersByTypeU3Ek__BackingField_10() const { return ___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 ** get_address_of_U3CEventHandlersByTypeU3Ek__BackingField_10() { return &___U3CEventHandlersByTypeU3Ek__BackingField_10; }
	inline void set_U3CEventHandlersByTypeU3Ek__BackingField_10(Dictionary_2_t99334118C530AD8E37E47B5B0848937F9AB3FE45 * value)
	{
		___U3CEventHandlersByTypeU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventHandlersByTypeU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_U3CEventListenersU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2, ___U3CEventListenersU3Ek__BackingField_11)); }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * get_U3CEventListenersU3Ek__BackingField_11() const { return ___U3CEventListenersU3Ek__BackingField_11; }
	inline List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 ** get_address_of_U3CEventListenersU3Ek__BackingField_11() { return &___U3CEventListenersU3Ek__BackingField_11; }
	inline void set_U3CEventListenersU3Ek__BackingField_11(List_1_t99909CDEDA6D21189884AEA74B1FD99FC9C6A4C0 * value)
	{
		___U3CEventListenersU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventListenersU3Ek__BackingField_11), value);
	}
};

struct BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseEventSystem::enableDanglingHandlerDiagnostics
	bool ___enableDanglingHandlerDiagnostics_5;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseEventSystem::TraverseEventSystemHandlerHierarchyPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___TraverseEventSystemHandlerHierarchyPerfMarker_12;

public:
	inline static int32_t get_offset_of_enableDanglingHandlerDiagnostics_5() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields, ___enableDanglingHandlerDiagnostics_5)); }
	inline bool get_enableDanglingHandlerDiagnostics_5() const { return ___enableDanglingHandlerDiagnostics_5; }
	inline bool* get_address_of_enableDanglingHandlerDiagnostics_5() { return &___enableDanglingHandlerDiagnostics_5; }
	inline void set_enableDanglingHandlerDiagnostics_5(bool value)
	{
		___enableDanglingHandlerDiagnostics_5 = value;
	}

	inline static int32_t get_offset_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_StaticFields, ___TraverseEventSystemHandlerHierarchyPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_TraverseEventSystemHandlerHierarchyPerfMarker_12() const { return ___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_TraverseEventSystemHandlerHierarchyPerfMarker_12() { return &___TraverseEventSystemHandlerHierarchyPerfMarker_12; }
	inline void set_TraverseEventSystemHandlerHierarchyPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___TraverseEventSystemHandlerHierarchyPerfMarker_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTSYSTEM_T0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_TF1367F728D31D63B36BE4665951DB8837CC3EA98_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_TF1367F728D31D63B36BE4665951DB8837CC3EA98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct  MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98  : public GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98, ___U3CIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CIdU3Ek__BackingField_5() const { return ___U3CIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_5() { return &___U3CIdU3Ek__BackingField_5; }
	inline void set_U3CIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CIdU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_TF1367F728D31D63B36BE4665951DB8837CC3EA98_H
#ifndef MIXEDREALITYSPATIALOBSERVERCONFIGURATION_TB23D0A3BC6604415558EA7F9D1D04C2220B95A90_H
#define MIXEDREALITYSPATIALOBSERVERCONFIGURATION_TB23D0A3BC6604415558EA7F9D1D04C2220B95A90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct  MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::componentName
	String_t* ___componentName_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::priority
	uint32_t ___priority_2;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::runtimePlatform
	int32_t ___runtimePlatform_3;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::observerProfile
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;

public:
	inline static int32_t get_offset_of_componentType_0() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentType_0)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_componentType_0() const { return ___componentType_0; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_componentType_0() { return &___componentType_0; }
	inline void set_componentType_0(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___componentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___componentType_0), value);
	}

	inline static int32_t get_offset_of_componentName_1() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___componentName_1)); }
	inline String_t* get_componentName_1() const { return ___componentName_1; }
	inline String_t** get_address_of_componentName_1() { return &___componentName_1; }
	inline void set_componentName_1(String_t* value)
	{
		___componentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___componentName_1), value);
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___priority_2)); }
	inline uint32_t get_priority_2() const { return ___priority_2; }
	inline uint32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(uint32_t value)
	{
		___priority_2 = value;
	}

	inline static int32_t get_offset_of_runtimePlatform_3() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___runtimePlatform_3)); }
	inline int32_t get_runtimePlatform_3() const { return ___runtimePlatform_3; }
	inline int32_t* get_address_of_runtimePlatform_3() { return &___runtimePlatform_3; }
	inline void set_runtimePlatform_3(int32_t value)
	{
		___runtimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_observerProfile_4() { return static_cast<int32_t>(offsetof(MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90, ___observerProfile_4)); }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * get_observerProfile_4() const { return ___observerProfile_4; }
	inline BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC ** get_address_of_observerProfile_4() { return &___observerProfile_4; }
	inline void set_observerProfile_4(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * value)
	{
		___observerProfile_4 = value;
		Il2CppCodeGenWriteBarrier((&___observerProfile_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_pinvoke
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	char* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration
struct MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90_marshaled_com
{
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___componentType_0;
	Il2CppChar* ___componentName_1;
	uint32_t ___priority_2;
	int32_t ___runtimePlatform_3;
	BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * ___observerProfile_4;
};
#endif // MIXEDREALITYSPATIALOBSERVERCONFIGURATION_TB23D0A3BC6604415558EA7F9D1D04C2220B95A90_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef BASECORESYSTEM_T86E92055CF287B1D86F50C81455BDFA894B12E41_H
#define BASECORESYSTEM_T86E92055CF287B1D86F50C81455BDFA894B12E41_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseCoreSystem
struct  BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41  : public BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseCoreSystem::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41, ___U3CRegistrarU3Ek__BackingField_13)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_13() const { return ___U3CRegistrarU3Ek__BackingField_13; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_13() { return &___U3CRegistrarU3Ek__BackingField_13; }
	inline void set_U3CRegistrarU3Ek__BackingField_13(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRegistrarU3Ek__BackingField_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECORESYSTEM_T86E92055CF287B1D86F50C81455BDFA894B12E41_H
#ifndef BASEMIXEDREALITYPROFILE_TB4DC16619B37D298D22571CE017070A78EF826E8_H
#define BASEMIXEDREALITYPROFILE_TB4DC16619B37D298D22571CE017070A78EF826E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_TB4DC16619B37D298D22571CE017070A78EF826E8_H
#ifndef MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TBEE29FC913C599C0EDA702339F32E271DA24D9C3_H
#define MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TBEE29FC913C599C0EDA702339F32E271DA24D9C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct  MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3  : public MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98
{
public:
	// T Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1::<SpatialObject>k__BackingField
	SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___U3CSpatialObjectU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CSpatialObjectU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3, ___U3CSpatialObjectU3Ek__BackingField_6)); }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * get_U3CSpatialObjectU3Ek__BackingField_6() const { return ___U3CSpatialObjectU3Ek__BackingField_6; }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E ** get_address_of_U3CSpatialObjectU3Ek__BackingField_6() { return &___U3CSpatialObjectU3Ek__BackingField_6; }
	inline void set_U3CSpatialObjectU3Ek__BackingField_6(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * value)
	{
		___U3CSpatialObjectU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSpatialObjectU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSEVENTDATA_1_TBEE29FC913C599C0EDA702339F32E271DA24D9C3_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef BASEDATAPROVIDERACCESSCORESYSTEM_T8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_H
#define BASEDATAPROVIDERACCESSCORESYSTEM_T8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem
struct  BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A  : public BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41
{
public:
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::dataProviders
	List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * ___dataProviders_14;

public:
	inline static int32_t get_offset_of_dataProviders_14() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A, ___dataProviders_14)); }
	inline List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * get_dataProviders_14() const { return ___dataProviders_14; }
	inline List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA ** get_address_of_dataProviders_14() { return &___dataProviders_14; }
	inline void set_dataProviders_14(List_1_tEDC19DF4801FA3B5EFF5E739F8D4D94E1F36C2AA * value)
	{
		___dataProviders_14 = value;
		Il2CppCodeGenWriteBarrier((&___dataProviders_14), value);
	}
};

struct BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::LateUpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_15() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields, ___UpdatePerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_15() const { return ___UpdatePerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_15() { return &___UpdatePerfMarker_15; }
	inline void set_UpdatePerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_LateUpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_StaticFields, ___LateUpdatePerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdatePerfMarker_16() const { return ___LateUpdatePerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdatePerfMarker_16() { return &___LateUpdatePerfMarker_16; }
	inline void set_LateUpdatePerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdatePerfMarker_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDATAPROVIDERACCESSCORESYSTEM_T8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_H
#ifndef BASESPATIALAWARENESSOBSERVERPROFILE_TEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC_H
#define BASESPATIALAWARENESSOBSERVERPROFILE_TEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile
struct  BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::startupBehavior
	int32_t ___startupBehavior_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::isStationaryObserver
	bool ___isStationaryObserver_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observationExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___observationExtents_7;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::observerVolumeType
	int32_t ___observerVolumeType_8;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile::updateInterval
	float ___updateInterval_9;

public:
	inline static int32_t get_offset_of_startupBehavior_5() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___startupBehavior_5)); }
	inline int32_t get_startupBehavior_5() const { return ___startupBehavior_5; }
	inline int32_t* get_address_of_startupBehavior_5() { return &___startupBehavior_5; }
	inline void set_startupBehavior_5(int32_t value)
	{
		___startupBehavior_5 = value;
	}

	inline static int32_t get_offset_of_isStationaryObserver_6() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___isStationaryObserver_6)); }
	inline bool get_isStationaryObserver_6() const { return ___isStationaryObserver_6; }
	inline bool* get_address_of_isStationaryObserver_6() { return &___isStationaryObserver_6; }
	inline void set_isStationaryObserver_6(bool value)
	{
		___isStationaryObserver_6 = value;
	}

	inline static int32_t get_offset_of_observationExtents_7() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observationExtents_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_observationExtents_7() const { return ___observationExtents_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_observationExtents_7() { return &___observationExtents_7; }
	inline void set_observationExtents_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___observationExtents_7 = value;
	}

	inline static int32_t get_offset_of_observerVolumeType_8() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___observerVolumeType_8)); }
	inline int32_t get_observerVolumeType_8() const { return ___observerVolumeType_8; }
	inline int32_t* get_address_of_observerVolumeType_8() { return &___observerVolumeType_8; }
	inline void set_observerVolumeType_8(int32_t value)
	{
		___observerVolumeType_8 = value;
	}

	inline static int32_t get_offset_of_updateInterval_9() { return static_cast<int32_t>(offsetof(BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC, ___updateInterval_9)); }
	inline float get_updateInterval_9() const { return ___updateInterval_9; }
	inline float* get_address_of_updateInterval_9() { return &___updateInterval_9; }
	inline void set_updateInterval_9(float value)
	{
		___updateInterval_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASESPATIALAWARENESSOBSERVERPROFILE_TEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC_H
#ifndef MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_T3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_H
#define MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_T3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct  MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::observerConfigurations
	MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* ___observerConfigurations_5;

public:
	inline static int32_t get_offset_of_observerConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7, ___observerConfigurations_5)); }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* get_observerConfigurations_5() const { return ___observerConfigurations_5; }
	inline MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90** get_address_of_observerConfigurations_5() { return &___observerConfigurations_5; }
	inline void set_observerConfigurations_5(MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* value)
	{
		___observerConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((&___observerConfigurations_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSSYSTEMPROFILE_T3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef MIXEDREALITYSPATIALAWARENESSSYSTEM_T13EE13EDC677C67D3309E5D15282D50F568571B4_H
#define MIXEDREALITYSPATIALAWARENESSSYSTEM_T13EE13EDC677C67D3309E5D15282D50F568571B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem
struct  MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4  : public BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___meshEventData_18;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___spatialAwarenessObjectParent_19;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::nextSourceId
	uint32_t ___nextSourceId_20;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___spatialAwarenessSystemProfile_21;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___U3CNameU3Ek__BackingField_17)); }
	inline String_t* get_U3CNameU3Ek__BackingField_17() const { return ___U3CNameU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_17() { return &___U3CNameU3Ek__BackingField_17; }
	inline void set_U3CNameU3Ek__BackingField_17(String_t* value)
	{
		___U3CNameU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_17), value);
	}

	inline static int32_t get_offset_of_meshEventData_18() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___meshEventData_18)); }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * get_meshEventData_18() const { return ___meshEventData_18; }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 ** get_address_of_meshEventData_18() { return &___meshEventData_18; }
	inline void set_meshEventData_18(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * value)
	{
		___meshEventData_18 = value;
		Il2CppCodeGenWriteBarrier((&___meshEventData_18), value);
	}

	inline static int32_t get_offset_of_spatialAwarenessObjectParent_19() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___spatialAwarenessObjectParent_19)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_spatialAwarenessObjectParent_19() const { return ___spatialAwarenessObjectParent_19; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_spatialAwarenessObjectParent_19() { return &___spatialAwarenessObjectParent_19; }
	inline void set_spatialAwarenessObjectParent_19(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___spatialAwarenessObjectParent_19 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessObjectParent_19), value);
	}

	inline static int32_t get_offset_of_nextSourceId_20() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___nextSourceId_20)); }
	inline uint32_t get_nextSourceId_20() const { return ___nextSourceId_20; }
	inline uint32_t* get_address_of_nextSourceId_20() { return &___nextSourceId_20; }
	inline void set_nextSourceId_20(uint32_t value)
	{
		___nextSourceId_20 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_21() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4, ___spatialAwarenessSystemProfile_21)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * get_spatialAwarenessSystemProfile_21() const { return ___spatialAwarenessSystemProfile_21; }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 ** get_address_of_spatialAwarenessSystemProfile_21() { return &___spatialAwarenessSystemProfile_21; }
	inline void set_spatialAwarenessSystemProfile_21(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * value)
	{
		___spatialAwarenessSystemProfile_21 = value;
		Il2CppCodeGenWriteBarrier((&___spatialAwarenessSystemProfile_21), value);
	}
};

struct MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversPerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserversTPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverPerfMarker_24;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserverTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetObserverTPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProvidersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProvidersPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetDataProviderPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetDataProviderPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversPerfMarker_28;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserversTPerfMarker_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumeObserverPerfMarker_30;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversPerfMarker_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserversTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserversTPerfMarker_32;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendObserverPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_34;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservationsTPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsTPerfMarker_35;

public:
	inline static int32_t get_offset_of_GetObserversPerfMarker_22() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserversPerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversPerfMarker_22() const { return ___GetObserversPerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversPerfMarker_22() { return &___GetObserversPerfMarker_22; }
	inline void set_GetObserversPerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversPerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_GetObserversTPerfMarker_23() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserversTPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserversTPerfMarker_23() const { return ___GetObserversTPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserversTPerfMarker_23() { return &___GetObserversTPerfMarker_23; }
	inline void set_GetObserversTPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserversTPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_GetObserverPerfMarker_24() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserverPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverPerfMarker_24() const { return ___GetObserverPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverPerfMarker_24() { return &___GetObserverPerfMarker_24; }
	inline void set_GetObserverPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverPerfMarker_24 = value;
	}

	inline static int32_t get_offset_of_GetObserverTPerfMarker_25() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetObserverTPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetObserverTPerfMarker_25() const { return ___GetObserverTPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetObserverTPerfMarker_25() { return &___GetObserverTPerfMarker_25; }
	inline void set_GetObserverTPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetObserverTPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_GetDataProvidersPerfMarker_26() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetDataProvidersPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProvidersPerfMarker_26() const { return ___GetDataProvidersPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProvidersPerfMarker_26() { return &___GetDataProvidersPerfMarker_26; }
	inline void set_GetDataProvidersPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProvidersPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_GetDataProviderPerfMarker_27() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___GetDataProviderPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetDataProviderPerfMarker_27() const { return ___GetDataProviderPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetDataProviderPerfMarker_27() { return &___GetDataProviderPerfMarker_27; }
	inline void set_GetDataProviderPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetDataProviderPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversPerfMarker_28() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserversPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversPerfMarker_28() const { return ___ResumeObserversPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversPerfMarker_28() { return &___ResumeObserversPerfMarker_28; }
	inline void set_ResumeObserversPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_ResumeObserversTPerfMarker_29() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserversTPerfMarker_29)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserversTPerfMarker_29() const { return ___ResumeObserversTPerfMarker_29; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserversTPerfMarker_29() { return &___ResumeObserversTPerfMarker_29; }
	inline void set_ResumeObserversTPerfMarker_29(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserversTPerfMarker_29 = value;
	}

	inline static int32_t get_offset_of_ResumeObserverPerfMarker_30() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ResumeObserverPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumeObserverPerfMarker_30() const { return ___ResumeObserverPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumeObserverPerfMarker_30() { return &___ResumeObserverPerfMarker_30; }
	inline void set_ResumeObserverPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumeObserverPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversPerfMarker_31() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserversPerfMarker_31)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversPerfMarker_31() const { return ___SuspendObserversPerfMarker_31; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversPerfMarker_31() { return &___SuspendObserversPerfMarker_31; }
	inline void set_SuspendObserversPerfMarker_31(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversPerfMarker_31 = value;
	}

	inline static int32_t get_offset_of_SuspendObserversTPerfMarker_32() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserversTPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserversTPerfMarker_32() const { return ___SuspendObserversTPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserversTPerfMarker_32() { return &___SuspendObserversTPerfMarker_32; }
	inline void set_SuspendObserversTPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserversTPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_SuspendObserverPerfMarker_33() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___SuspendObserverPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendObserverPerfMarker_33() const { return ___SuspendObserverPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendObserverPerfMarker_33() { return &___SuspendObserverPerfMarker_33; }
	inline void set_SuspendObserverPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendObserverPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_34() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ClearObservationsPerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_34() const { return ___ClearObservationsPerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_34() { return &___ClearObservationsPerfMarker_34; }
	inline void set_ClearObservationsPerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_34 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsTPerfMarker_35() { return static_cast<int32_t>(offsetof(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields, ___ClearObservationsTPerfMarker_35)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsTPerfMarker_35() const { return ___ClearObservationsTPerfMarker_35; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsTPerfMarker_35() { return &___ClearObservationsTPerfMarker_35; }
	inline void set_ClearObservationsTPerfMarker_35(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsTPerfMarker_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYSPATIALAWARENESSSYSTEM_T13EE13EDC677C67D3309E5D15282D50F568571B4_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#define EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SystemInputModules_4)); }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t1B3F60982C3189AF70B204EF3F19940A645EA02E * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t904837FCFA79B6C3CED862FF85C9C5F8D6F32939 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_FirstSelected_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_CurrentSelected_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77, ___m_DummyData_13)); }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mgU24cache0
	Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tE4E9EE9F348ABAD1007C663DD77A14907CCD9A79 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t4D475DF6B74D5F54D62457E778F621F81C595133 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[]
struct MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  m_Items[1];

public:
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  value)
	{
		m_Items[index] = value;
	}
};


// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<System.Object>::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessEventData_1__ctor_mA6E32075050BF2950CF1FC5B4108785746EC423C_gshared (MixedRealitySpatialAwarenessEventData_1_t7D87A990C0BC95251E2D2AD4F12051C65A02AFAB * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<System.Object>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_mF98AEAEA51BAFEA0135293622EB91645754AA889_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * p0, int32_t p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseCoreSystem::set_Registrar(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar)
extern "C" IL2CPP_METHOD_ATTR void BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4 (BaseCoreSystem_t86E92055CF287B1D86F50C81455BDFA894B12E41 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::.ctor(Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
extern "C" IL2CPP_METHOD_ATTR EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>::.ctor(UnityEngine.EventSystems.EventSystem)
inline void MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892 (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * __this, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * p0, const RuntimeMethod* method)
{
	((  void (*) (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *, EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 *, const RuntimeMethod*))MixedRealitySpatialAwarenessEventData_1__ctor_mA6E32075050BF2950CF1FC5B4108785746EC423C_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration[] Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile::get_ObserverConfigurations()
extern "C" IL2CPP_METHOD_ATTR MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE (MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentName()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_Priority()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07 (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialAwarenessObserverProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ObserverProfile()
extern "C" IL2CPP_METHOD_ATTR BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4 (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_ComponentType()
extern "C" IL2CPP_METHOD_ATTR SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01 (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.Utilities.SystemType::get_Type()
extern "C" IL2CPP_METHOD_ATTR Type_t * SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD (SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialObserverConfiguration::get_RuntimePlatform()
extern "C" IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B (MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::RegisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(System.Type,Microsoft.MixedReality.Toolkit.Utilities.SupportedPlatforms,System.Object[])
inline bool BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m91E384EC0B5A15F7C85F14F84F8FD9B162972983 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, Type_t * p0, int32_t p1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p2, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, Type_t *, int32_t, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisRuntimeObject_mF98AEAEA51BAFEA0135293622EB91645754AA889_gshared)(__this, p0, p1, p2, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
extern "C" IL2CPP_METHOD_ATTR void BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::UnregisterDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>(!!0)
inline bool BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A *, RuntimeObject*, const RuntimeMethod*))BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisRuntimeObject_m4721B53B78BC0D175BC1534EFEBC6FD2578D79CA_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Enable()
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5 (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void BaseDataProviderAccessCoreSystem_Reset_m5925B54F714A4B147B1E40AC8AB7D5DD6FEE2D7F (BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
extern "C" IL2CPP_METHOD_ATTR void Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseEventSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E (BaseEventSystem_t0D724E08B21A1E822BE73F1F7F29CA92B10AF9D2 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::AddChild(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void MixedRealityPlayspace_AddChild_mA137BA9496C5D73FC8DB4F4C2F3E7BD09BAAEBC4 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
extern "C" IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02 (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
extern "C" IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2 (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* p0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar,Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_m7943C1E0F5777D79C3A4C702152C13B9C5A287A8 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, RuntimeObject* ___registrar0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile1, const RuntimeMethod* method)
{
	{
		// MixedRealitySpatialAwarenessSystemProfile profile) : this(profile)
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = ___profile1;
		MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3(__this, L_0, /*hidden argument*/NULL);
		// Registrar = registrar;
		RuntimeObject* L_1 = ___registrar0;
		BaseCoreSystem_set_Registrar_mB5EC17AD1FB7037C6E7963FACFD9FC7D3AE2E3F4(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___profile0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__ctor_mBDF79D6178FA39FFC98EE080515A43402C3F67B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		__this->set_U3CNameU3Ek__BackingField_17(_stringLiteral306293B4D4A8E6238C3F25BB12EF44DF6E94C8B3);
		// private MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject> meshEventData = null;
		__this->set_meshEventData_18((MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *)NULL);
		// private GameObject spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_19((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		// private uint nextSourceId = 0;
		__this->set_nextSourceId_20(0);
		// private MixedRealitySpatialAwarenessSystemProfile spatialAwarenessSystemProfile = null;
		__this->set_spatialAwarenessSystemProfile_21((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)NULL);
		// MixedRealitySpatialAwarenessSystemProfile profile) : base(profile)
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = ___profile0;
		IL2CPP_RUNTIME_CLASS_INIT(BaseDataProviderAccessCoreSystem_t8C4C42F058DFD6188A5D363BE3864EFB84BE9F9A_il2cpp_TypeInfo_var);
		BaseDataProviderAccessCoreSystem__ctor_m450143A7902F5C96C5415831149A1F7E9F29A046(__this, L_0, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* MixedRealitySpatialAwarenessSystem_get_Name_m43DB04E8790FE310BC55187C0B3664F067883ECA (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::set_Name(System.String)
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_set_Name_m2611DD07E9DF233948B4CE9169BA010323C5BC33 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public override string Name { get; protected set; } = "Mixed Reality Spatial Awareness System";
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
extern "C" IL2CPP_METHOD_ATTR bool MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CheckCapability_mD7BC2CEEAEBDF6F661AEB4EE5EED0260DE9130F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	{
		// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0010:
		{
			// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// IMixedRealityCapabilityCheck capabilityChecker = observer as IMixedRealityCapabilityCheck;
			RuntimeObject* L_4 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var));
			// if ((capabilityChecker != null) &&
			//     capabilityChecker.CheckCapability(capability))
			RuntimeObject* L_5 = V_2;
			if (!L_5)
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			RuntimeObject* L_6 = V_2;
			int32_t L_7 = ___capability0;
			NullCheck(L_6);
			bool L_8 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.IMixedRealityCapabilityCheck::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability) */, IMixedRealityCapabilityCheck_t98FB379C0B498E07667EBA7D2E2343B39230EA42_il2cpp_TypeInfo_var, L_6, L_7);
			G_B5_0 = ((int32_t)(L_8));
			goto IL_002c;
		}

IL_002b:
		{
			G_B5_0 = 0;
		}

IL_002c:
		{
			V_3 = (bool)G_B5_0;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			// return true;
			V_4 = (bool)1;
			IL2CPP_LEAVE(0x51, FINALLY_0041);
		}

IL_0036:
		{
		}

IL_0037:
		{
			// foreach(var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0010;
			}
		}

IL_003f:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_004b;
			}
		}

IL_0044:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_004b:
		{
			IL2CPP_END_FINALLY(65)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		// return false;
		V_4 = (bool)0;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		bool L_14 = V_4;
		return L_14;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Initialize()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Initialize_m9EC3F671E93211C2505D78A30C677FD0DD29D18C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Initialize();
		BaseService_Initialize_mB5ABF716215A9D4E5204D4E3B9EDB034A2A6E618(__this, /*hidden argument*/NULL);
		// meshEventData = new MixedRealitySpatialAwarenessEventData<SpatialAwarenessMeshObject>(EventSystem.current);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77_il2cpp_TypeInfo_var);
		EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * L_0 = EventSystem_get_current_m3151477735829089F66A3E46AD6DAB14CFDDE7BD(/*hidden argument*/NULL);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_1 = (MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 *)il2cpp_codegen_object_new(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3_il2cpp_TypeInfo_var);
		MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892(L_1, L_0, /*hidden argument*/MixedRealitySpatialAwarenessEventData_1__ctor_mFEA2865CBB27D940AFE024F5B274E8D9CF86F892_RuntimeMethod_var);
		__this->set_meshEventData_18(L_1);
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::InitializeInternal()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  V_3;
	memset(&V_3, 0, sizeof(V_3));
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// MixedRealitySpatialAwarenessSystemProfile profile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		V_0 = ((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)IsInstClass((RuntimeObject*)L_0, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var));
		// if (profile != null && GetDataProviders<IMixedRealitySpatialAwarenessObserver>().Count == 0)
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_3 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Count() */, IReadOnlyCollection_1_t867A975FDE62708B894D4C6CA5F1A3FD290703C3_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 0;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		V_2 = 0;
		goto IL_008e;
	}

IL_0030:
	{
		// MixedRealitySpatialObserverConfiguration configuration = profile.ObserverConfigurations[i];
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_6 = V_0;
		NullCheck(L_6);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_7 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90  L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		// object[] args = { this, configuration.ComponentName, configuration.Priority, configuration.ObserverProfile };
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, __this);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = MixedRealitySpatialObserverConfiguration_get_ComponentName_mF03FC23EE9C9C8C071621929D5B20000855988EC((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_13;
		uint32_t L_16 = MixedRealitySpatialObserverConfiguration_get_Priority_m1A0393FCB51FF7241AA0FD293B1873554994AC07((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		uint32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		BaseSpatialAwarenessObserverProfile_tEE30EA47A4C33A81B773F9E53EA3306BBB7FDADC * L_20 = MixedRealitySpatialObserverConfiguration_get_ObserverProfile_m7D3036686651D44965AA54A3721A5E204FBD15E4((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		V_4 = L_19;
		// RegisterDataProvider<IMixedRealitySpatialAwarenessObserver>(
		//     configuration.ComponentType.Type,
		//     configuration.RuntimePlatform,
		//     args);
		SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * L_21 = MixedRealitySpatialObserverConfiguration_get_ComponentType_m500A536AB1E8CBD9C098557C089945F15DFABE01((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_21);
		Type_t * L_22 = SystemType_get_Type_m70CD613DEBD1A8545E792EF73F88358CC375A1CD(L_21, /*hidden argument*/NULL);
		int32_t L_23 = MixedRealitySpatialObserverConfiguration_get_RuntimePlatform_m8638143C2B8F8AF732377D374B3D6A0F4898AC1B((MixedRealitySpatialObserverConfiguration_tB23D0A3BC6604415558EA7F9D1D04C2220B95A90 *)(&V_3), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = V_4;
		BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m91E384EC0B5A15F7C85F14F84F8FD9B162972983(__this, L_22, L_23, L_24, /*hidden argument*/BaseDataProviderAccessCoreSystem_RegisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_m91E384EC0B5A15F7C85F14F84F8FD9B162972983_RuntimeMethod_var);
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < profile.ObserverConfigurations.Length; i++)
		int32_t L_26 = V_2;
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_27 = V_0;
		NullCheck(L_27);
		MixedRealitySpatialObserverConfigurationU5BU5D_t978B5D883EE40458BBF6B3A702E16CB36865EF90* L_28 = MixedRealitySpatialAwarenessSystemProfile_get_ObserverConfigurations_m0AF7A14431DDE492EE8B07BAB2AE86C4877476CE(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		V_5 = (bool)((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length))))))? 1 : 0);
		bool L_29 = V_5;
		if (L_29)
		{
			goto IL_0030;
		}
	}
	{
	}

IL_00a0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Disable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Disable_m949E2CB3D7BFF87361222CFEAD98A5844A5076AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// base.Disable();
		BaseService_Disable_m349524E2ECE37A703BC12D77419612C9162EC92A(__this, /*hidden argument*/NULL);
		// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
		RuntimeObject* L_0 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0017:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = V_0;
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			// UnregisterDataProvider(provider);
			RuntimeObject* L_4 = V_1;
			BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE(__this, L_4, /*hidden argument*/BaseDataProviderAccessCoreSystem_UnregisterDataProvider_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mF041E720A27B388AE25792199976E16D933215AE_RuntimeMethod_var);
		}

IL_0028:
		{
			// foreach (var provider in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0017;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x3D, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_003c;
			}
		}

IL_0035:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_8);
		}

IL_003c:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Enable()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Enable_mC6C1AF370F4830A280E09BC23F008AA81A3FDD3B (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	{
		// InitializeInternal();
		MixedRealitySpatialAwarenessSystem_InitializeInternal_m821F0931EDDD3947A506299968C2679C7F8EDE96(__this, /*hidden argument*/NULL);
		// base.Enable();
		BaseDataProviderAccessCoreSystem_Enable_mDA3A3C27AFF2AB5D9C0CC47869E35C91F2D044B5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Reset()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Reset_m758DD90C8ACAF570E299978A0DC2BBCDAFBEC6FF (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	{
		// base.Reset();
		BaseDataProviderAccessCoreSystem_Reset_m5925B54F714A4B147B1E40AC8AB7D5DD6FEE2D7F(__this, /*hidden argument*/NULL);
		// Disable();
		VirtActionInvoker0::Invoke(26 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable() */, __this);
		// Initialize();
		VirtActionInvoker0::Invoke(21 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Initialize() */, __this);
		// Enable();
		VirtActionInvoker0::Invoke(23 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::Destroy()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_Destroy_mD9BAB95563CBD780310E1AB212A72DAC0446D5B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Application.isPlaying)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		// if (spatialAwarenessObjectParent != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (Application.isEditor)
		bool L_5 = Application_get_isEditor_m347E6EE16E5109EF613C83ED98DB1EC6E3EF5E26(/*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Object.DestroyImmediate(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_7, /*hidden argument*/NULL);
		goto IL_0054;
	}

IL_0035:
	{
		// spatialAwarenessObjectParent.transform.DetachChildren();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_spatialAwarenessObjectParent_19();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_DetachChildren_m33C6052FA253DC8781DAD266726587B8DCB61A23(L_9, /*hidden argument*/NULL);
		// Object.Destroy(spatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// spatialAwarenessObjectParent = null;
		__this->set_spatialAwarenessObjectParent_19((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_005c:
	{
	}

IL_005d:
	{
		// base.Destroy();
		BaseEventSystem_Destroy_m7B3C5682C43FE55F078723094DB38FCEBF56674E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * G_B3_0 = NULL;
	{
		// public GameObject SpatialAwarenessObjectParent => spatialAwarenessObjectParent != null ? spatialAwarenessObjectParent : (spatialAwarenessObjectParent = CreateSpatialAwarenessObjectParent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_spatialAwarenessObjectParent_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = L_2;
		V_0 = L_3;
		__this->set_spatialAwarenessObjectParent_19(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		G_B3_0 = L_4;
		goto IL_0025;
	}

IL_001f:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_spatialAwarenessObjectParent_19();
		G_B3_0 = L_5;
	}

IL_0025:
	{
		return G_B3_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_CreateSpatialAwarenessObjectParent()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_CreateSpatialAwarenessObjectParent_m079E024BCFD7CD360485BE5B6AE1E5258C06527C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		// GameObject newParent = new GameObject("Spatial Awareness System");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral3466954DD3E2B08B6AB8DA213A8E68936D6BE028, /*hidden argument*/NULL);
		V_0 = L_0;
		// MixedRealityPlayspace.AddChild(newParent.transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
		MixedRealityPlayspace_AddChild_mA137BA9496C5D73FC8DB4F4C2F3E7BD09BAAEBC4(L_2, /*hidden argument*/NULL);
		// return newParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::CreateSpatialAwarenessObservationParent(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_CreateSpatialAwarenessObservationParent_mCB70EEBF15514FBA4574363DC85119B42A1869A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	{
		// GameObject objectParent = new GameObject(name);
		String_t* L_0 = ___name0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// objectParent.transform.parent = SpatialAwarenessObjectParent.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessObjectParent_m9845795ADDF285FB5EA4E20B01B8305A9AE03ABD(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_3, L_5, /*hidden argument*/NULL);
		// return objectParent;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		V_1 = L_6;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_1;
		return L_7;
	}
}
// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GenerateNewSourceId()
extern "C" IL2CPP_METHOD_ATTR uint32_t MixedRealitySpatialAwarenessSystem_GenerateNewSourceId_m8E66D13774253169DFE8A865411D2408896A6288 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		// return nextSourceId++;
		uint32_t L_0 = __this->get_nextSourceId_20();
		V_0 = L_0;
		uint32_t L_1 = V_0;
		__this->set_nextSourceId_20(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		uint32_t L_2 = V_0;
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		uint32_t L_3 = V_1;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::get_SpatialAwarenessSystemProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_get_SpatialAwarenessSystemProfile_m7C972D4042A372D7BFD53E35F0D7626CF3F4F9BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * V_1 = NULL;
	{
		// if (spatialAwarenessSystemProfile == null)
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_0 = __this->get_spatialAwarenessSystemProfile_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// spatialAwarenessSystemProfile = ConfigurationProfile as MixedRealitySpatialAwarenessSystemProfile;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_3 = VirtFuncInvoker0< BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		__this->set_spatialAwarenessSystemProfile_21(((MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 *)IsInstClass((RuntimeObject*)L_3, MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7_il2cpp_TypeInfo_var)));
	}

IL_0024:
	{
		// return spatialAwarenessSystemProfile;
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_4 = __this->get_spatialAwarenessSystemProfile_21();
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * L_5 = V_1;
		return L_5;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver> Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObservers()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObservers_m7B5BD47FBD4F11978E28323328F59435E87FE562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_GetObserversPerfMarker_22();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// return GetDataProviders() as IReadOnlyList<IMixedRealitySpatialAwarenessObserver>;
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(44 /* System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider> Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProviders() */, __this);
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IReadOnlyList_1_t15E8098D3D51BAD90CDA62E1ED51E8C12C78BDFF_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2D, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		// }
		RuntimeObject* L_3 = V_2;
		return L_3;
	}
}
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::GetObserver(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_GetObserver_m9ED5D5EB1AC4D4A251AA4CD828DEAF4253F07844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (GetObserverPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_GetObserverPerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		// return GetDataProvider(name) as IMixedRealitySpatialAwarenessObserver;
		String_t* L_2 = ___name0;
		RuntimeObject* L_3 = VirtFuncInvoker1< RuntimeObject*, String_t* >::Invoke(46 /* Microsoft.MixedReality.Toolkit.IMixedRealityDataProvider Microsoft.MixedReality.Toolkit.BaseDataProviderAccessCoreSystem::GetDataProvider(System.String) */, __this, L_2);
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var));
		IL2CPP_LEAVE(0x2E, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(31)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		// }
		RuntimeObject* L_4 = V_2;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ResumeObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140 (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ResumeObservers_m8BC2C268B4B76372A496EDAB1E413D359D374140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ResumeObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_ResumeObserversPerfMarker_28();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				V_3 = L_5;
				// observer.Resume();
				RuntimeObject* L_6 = V_3;
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(16 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Resume() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
			}

IL_0043:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_JUMP_TBL(0x44, IL_0044)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::SuspendObservers()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_SuspendObservers_m988B39BDA7C50636888BD02AB6D6334B42D2465C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (SuspendObserversPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_SuspendObserversPerfMarker_31();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				V_3 = L_5;
				// observer.Suspend();
				RuntimeObject* L_6 = V_3;
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(17 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::Suspend() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
			}

IL_0043:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_JUMP_TBL(0x44, IL_0044)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::ClearObservations()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F (MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem_ClearObservations_m833E1C3E7CFC1B43E6F2F5697DC25BF43EF89F6F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (ClearObservationsPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->get_ClearObservationsPerfMarker_34();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
			RuntimeObject* L_2 = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(BaseDataProviderAccessCoreSystem_GetDataProviders_TisIMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_mA7DEE8A56910ED6101DE69DD921A00CB149FD1D2_RuntimeMethod_var, __this);
			NullCheck(L_2);
			RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::GetEnumerator() */, IEnumerable_1_t9E770DBD4EAF7977A1360841F65FD0A62BF4FF36_il2cpp_TypeInfo_var, L_2);
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_002f;
			}

IL_001f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver>::get_Current() */, IEnumerator_1_tD92EF4EFA4599B8B89B3545BA3E512989DEB265F_il2cpp_TypeInfo_var, L_4);
				V_3 = L_5;
				// observer.ClearObservations();
				RuntimeObject* L_6 = V_3;
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObserver::ClearObservations() */, IMixedRealitySpatialAwarenessObserver_tCB76329493A19ED9653B62207AD8DCE1ED1AF3D6_il2cpp_TypeInfo_var, L_6);
			}

IL_002f:
			{
				// foreach (var observer in GetDataProviders<IMixedRealitySpatialAwarenessObserver>())
				RuntimeObject* L_7 = V_2;
				NullCheck(L_7);
				bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
				if (L_8)
				{
					goto IL_001f;
				}
			}

IL_0037:
			{
				IL2CPP_LEAVE(0x44, FINALLY_0039);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0039;
		}

FINALLY_0039:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_9 = V_2;
				if (!L_9)
				{
					goto IL_0043;
				}
			}

IL_003c:
			{
				RuntimeObject* L_10 = V_2;
				NullCheck(L_10);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
			}

IL_0043:
			{
				IL2CPP_END_FINALLY(57)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(57)
		{
			IL2CPP_JUMP_TBL(0x44, IL_0044)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x56, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystem::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealitySpatialAwarenessSystem__cctor_m1DD53DF52E6E8B72264D7F823D5DC39F3D00C5DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker GetObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset(&L_0, 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_0), _stringLiteral262040181ABD91FE03796DEF54989E3E24A98E70, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserversPerfMarker_22(L_0);
		// private static readonly ProfilerMarker GetObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset(&L_1, 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_1), _stringLiteral1D9E7A7A88DEB164AF3999961CA7F9DA9FDE8AE6, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserversTPerfMarker_23(L_1);
		// private static readonly ProfilerMarker GetObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2;
		memset(&L_2, 0, sizeof(L_2));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_2), _stringLiteral782F128CA5187A629E3BC9BCF873AA572EBA7DAA, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserverPerfMarker_24(L_2);
		// private static readonly ProfilerMarker GetObserverTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetObserver<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_3), _stringLiteral7FDA44A1A535E187E191EC2EDAFCB4B3B7603C62, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetObserverTPerfMarker_25(L_3);
		// private static readonly ProfilerMarker GetDataProvidersPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProviders");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_4;
		memset(&L_4, 0, sizeof(L_4));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_4), _stringLiteral4130D5FB70DC9C7103D422C7D5B450B1C9322DCF, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetDataProvidersPerfMarker_26(L_4);
		// private static readonly ProfilerMarker GetDataProviderPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.GetDataProvider");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_5;
		memset(&L_5, 0, sizeof(L_5));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_5), _stringLiteralE7552690592AE63B15254C80AE47DE45D34A901E, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_GetDataProviderPerfMarker_27(L_5);
		// private static readonly ProfilerMarker ResumeObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset(&L_6, 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_6), _stringLiteral31E9B874576F2D0D87942763454F70A86D4D5098, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserversPerfMarker_28(L_6);
		// private static readonly ProfilerMarker ResumeObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_7;
		memset(&L_7, 0, sizeof(L_7));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_7), _stringLiteralBC40740BCD5A527584785BD239968C34A8FE3664, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserversTPerfMarker_29(L_7);
		// private static readonly ProfilerMarker ResumeObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ResumeObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_8;
		memset(&L_8, 0, sizeof(L_8));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_8), _stringLiteralCD09D3B8B6A3AA26878C801FBFCA450E2A2A1137, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ResumeObserverPerfMarker_30(L_8);
		// private static readonly ProfilerMarker SuspendObserversPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_9;
		memset(&L_9, 0, sizeof(L_9));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_9), _stringLiteral5AC673ED184754377C8E5F5B23E3207647473CC9, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserversPerfMarker_31(L_9);
		// private static readonly ProfilerMarker SuspendObserversTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObservers<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_10;
		memset(&L_10, 0, sizeof(L_10));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_10), _stringLiteral15A40372C3DEF5881D57E3678DCB191E7EFD4D49, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserversTPerfMarker_32(L_10);
		// private static readonly ProfilerMarker SuspendObserverPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.SuspendObserver");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_11;
		memset(&L_11, 0, sizeof(L_11));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_11), _stringLiteral8EBE04F16378C2EE1BE24877D3AE4AC0F16390E3, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_SuspendObserverPerfMarker_33(L_11);
		// private static readonly ProfilerMarker ClearObservationsPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_12;
		memset(&L_12, 0, sizeof(L_12));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_12), _stringLiteralAEAE7344A900D2304BE25E69430532975B6E7019, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ClearObservationsPerfMarker_34(L_12);
		// private static readonly ProfilerMarker ClearObservationsTPerfMarker = new ProfilerMarker("[MRTK] MixedRealitySpatialAwarenessSystem.ClearObservations<T>");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset(&L_13, 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A((&L_13), _stringLiteralFDF0328BCA79CF06B6D55C555B676E8A0DA0B0D1, /*hidden argument*/NULL);
		((MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealitySpatialAwarenessSystem_t13EE13EDC677C67D3309E5D15282D50F568571B4_il2cpp_TypeInfo_var))->set_ClearObservationsTPerfMarker_35(L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
