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

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938;
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB;
// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17;
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81;
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725;
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342;
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC;
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters
struct _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89;
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c
struct U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF;
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c
struct U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_t841CF95C9BC7FBFEA75E3283BBBBDDD48B3C5480;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t4D7865452513555B48D7E1A9F4C5F30436985278;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_t74AD56B7752EC173B8AB1E91371C3E88259325B4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct IReadOnlyList_1_t568109B886B83217E642DD9E05CD068A9D5461F9;
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct IReadOnlyList_1_t78C2A06094D918F17540628B926350CDEF4EF6CD;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Func_1_t232058B9320628F4E438C234B8E996107E09C632;
// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Func_1_t68680E827064572D98F178893AF8009AE9DD28C3;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE;
// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_t4EB50B39BAD32AB6DABCD5343882A7E235C98E6A;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953;
// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918;
// System.Lazy`1<System.Object>
struct Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7;
// WinRT.DllModule
struct DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70;
// WinRT.IObjectReference
struct IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823;
// WinRT.Interop.IIteratorOfEnum/_GetMany
struct _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE;
// WinRT.Interop.IIteratorOfEnum/_MoveNext
struct _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2;
// WinRT.Interop.IIteratorOfObject/_GetMany
struct _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A;
// WinRT.Interop.IIteratorOfObject/_MoveNext
struct _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2;
// WinRT.Interop.IVectorViewOfEnum/_GetAt
struct _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C;
// WinRT.Interop.IVectorViewOfEnum/_GetMany
struct _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696;
// WinRT.Interop.IVectorViewOfEnum/_IndexOf
struct _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A;
// WinRT.Interop.IVectorViewOfObject/_GetAt
struct _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B;
// WinRT.Interop.IVectorViewOfObject/_GetMany
struct _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC;
// WinRT.Interop.IVectorViewOfObject/_IndexOf
struct _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D;
// WinRT.Interop._get_PropertyAsBool
struct _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00;
// WinRT.Interop._get_PropertyAsDouble
struct _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5;
// WinRT.Interop._get_PropertyAsUInt
struct _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB;
// WinRT.Interop._put_PropertyAsBool
struct _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85;
// WinRT.Interop._put_PropertyAsEnum
struct _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>
struct ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>
struct ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>
struct ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>
struct ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>
struct ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>
struct ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>
struct ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>
struct ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062;
// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>
struct ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF;
// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D;
// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA;
// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814;
// WinRT.VectorViewOfEnum`1<System.Int32Enum>
struct VectorViewOfEnum_1_t82E75510BBA0CF43971341BB2E7928719C14420C;
// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6;
// WinRT.VectorViewOfObject`1<System.Object>
struct VectorViewOfObject_1_t546EFC1D30D5A0982A9F0B92CCC4513054E286B4;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_t4AA9EE7CC9852F19E3BCEDBC23CC837BF094E3BB;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153;
// WinRT.WinrtModule
struct WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C;
// WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B;
// WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>
struct CreateT_t5C60B0BD64B56AF6D335989F084A1D8617600AA1;

extern RuntimeClass* CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31_il2cpp_TypeInfo_var;
extern RuntimeClass* DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var;
extern RuntimeClass* DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var;
extern RuntimeClass* DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t232058B9320628F4E438C234B8E996107E09C632_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t68680E827064572D98F178893AF8009AE9DD28C3_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17_il2cpp_TypeInfo_var;
extern RuntimeClass* HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF_il2cpp_TypeInfo_var;
extern RuntimeClass* IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD_il2cpp_TypeInfo_var;
extern RuntimeClass* IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var;
extern RuntimeClass* IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_il2cpp_TypeInfo_var;
extern RuntimeClass* IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953_il2cpp_TypeInfo_var;
extern RuntimeClass* Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_il2cpp_TypeInfo_var;
extern RuntimeClass* Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
extern RuntimeClass* Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814_il2cpp_TypeInfo_var;
extern RuntimeClass* VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6_il2cpp_TypeInfo_var;
extern RuntimeClass* WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153_il2cpp_TypeInfo_var;
extern RuntimeClass* WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var;
extern RuntimeClass* _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var;
extern RuntimeClass* _Bool_t446C4743E0A0343811825CB403046A0FCA457818_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var;
extern RuntimeClass* _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var;
extern RuntimeClass* _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_il2cpp_TypeInfo_var;
extern RuntimeClass* _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_il2cpp_TypeInfo_var;
extern RuntimeClass* _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30_il2cpp_TypeInfo_var;
extern RuntimeClass* _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_il2cpp_TypeInfo_var;
extern RuntimeClass* _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var;
extern RuntimeClass* _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var;
extern RuntimeClass* _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var;
extern RuntimeClass* _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_il2cpp_TypeInfo_var;
extern RuntimeClass* _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var;
extern RuntimeClass* _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var;
extern RuntimeClass* _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var;
extern RuntimeClass* _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_il2cpp_TypeInfo_var;
extern RuntimeClass* _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C;
extern String_t* _stringLiteral4EE120AD5BD56E86FD781FB9DED8E10CDE37A816;
extern String_t* _stringLiteral74D559369E1958056E4727338451177BE8962EE3;
extern String_t* _stringLiteral852BBDF8814A1B075A5FA09D1AA1880F171791DD;
extern String_t* _stringLiteral926C699B76FD37CAEDEDABF4276A7BE84516E4DF;
extern const RuntimeMethod* CreateT__ctor_m5AB13B74224619315231CD72AA858CA2D80F89A6_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mF04FD7B1011BFD0419BEA2D3C77BDD51CAB0725D_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m1B102E7BECE834D438AA91B86245EF5D14E57536_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m61243B6239827A0C19B1635F0431C483010569B8_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m95D0768BE508AF36FED6C0C17EE0A5B96B446529_RuntimeMethod_var;
extern const RuntimeMethod* Func_2__ctor_mEF6510D5F8C783303D85F1E63D3AC247EC0C508F_RuntimeMethod_var;
extern const RuntimeMethod* HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m087519626FC6220D04E634CD1F5854595B26ADEC_RuntimeMethod_var;
extern const RuntimeMethod* HolographicCamera_U3C_ctorU3Eb__2_0_mD6C2683E57D12259DE8FB8B08C71E6720FBE7DDD_RuntimeMethod_var;
extern const RuntimeMethod* HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC65711980C62B1D972054A8A717354B19F31EA72_RuntimeMethod_var;
extern const RuntimeMethod* IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3_RuntimeMethod_var;
extern const RuntimeMethod* IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053_RuntimeMethod_var;
extern const RuntimeMethod* IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55_RuntimeMethod_var;
extern const RuntimeMethod* IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12_RuntimeMethod_var;
extern const RuntimeMethod* IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1__ctor_m309A61D92923E96BA5FF85A680CF31BF07BEC32A_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1__ctor_mAFB7A1180032167FB345FFB53C7B106888E9D056_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1__ctor_mE9287D418946E7CBFF21171FB6172BB854B1D6D9_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1_get_Value_m76C2F3ADF62299F04400D4D7F69670890ABC263F_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1_get_Value_mB8CD4F2934A56C01DA46835F042AE84F9763ECF2_RuntimeMethod_var;
extern const RuntimeMethod* Lazy_1_get_Value_mC5457483F16721D84567FD0BA28A8B6756DC3B0E_RuntimeMethod_var;
extern const RuntimeMethod* ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1_RuntimeMethod_var;
extern const RuntimeMethod* ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m270B0A147670E34C78F9079E34BAFC7412316675_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m4BA72147EAD46753897B5A4BE89E771EAC58C526_RuntimeMethod_var;
extern const RuntimeMethod* VectorViewOfEnum_1__ctor_mF7DDC009945773B2B1BC7DF2C59E8481FF7D4C40_RuntimeMethod_var;
extern const RuntimeMethod* VectorViewOfObject_1__ctor_mC21F7521ECEC40EE7832F550377D01CABCFE00A8_RuntimeMethod_var;
extern const RuntimeMethod* WeakLazy_1__ctor_m5E8127CACEE574E7A8BD1141C5F7BE7E5D4DACCF_RuntimeMethod_var;
extern const RuntimeMethod* WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098_RuntimeMethod_var;
extern const uint32_t DllModule__cctor_m4A4EB28991A49EC0ADEB52C9038827DF810A94B3_MetadataUsageId;
extern const uint32_t DotNETLinkage__GetHRForLastWin32Error_mA95253F9CB7B46EA7B34F30A7666202AACEEFAD8_MetadataUsageId;
extern const uint32_t HolographicCameraPose_get_HolographicCamera_m8E744C5D426841DAF09C4B8086DD80AC0E5CB07C_MetadataUsageId;
extern const uint32_t HolographicCameraRenderingParameters__ctor_m3CFB6494AB26EC20309091AABD6F7EDF98A34464_MetadataUsageId;
extern const uint32_t HolographicCameraRenderingParameters_set_DepthReprojectionMethod_mC4945ECBD1882EE2EBE8220E5C9DB46D539070A7_MetadataUsageId;
extern const uint32_t HolographicCamera__ctor_m83D12D1ED9217F2C727EEA157A7D39CBDFB3BB59_MetadataUsageId;
extern const uint32_t HolographicCamera_get_ViewConfiguration_mF8B3E1AE75AE8DB716DDE3BEA3399D0E295F37CD_MetadataUsageId;
extern const uint32_t HolographicFrame_FromNativePtr_mB63E93A6519945DFF65FBD0FEDDF9A018DD468D5_MetadataUsageId;
extern const uint32_t HolographicFrame_GetRenderingParameters_mD559704CBCC03AE33B946B7CC2F21BA3B84AA36B_MetadataUsageId;
extern const uint32_t HolographicFrame_get_CurrentPrediction_m619909CE24E3F619BDF65D4957269524520BCDB6_MetadataUsageId;
extern const uint32_t HolographicViewConfiguration__ctor_mC192CD7502D806E77789E5BAD5D41E3AA3089DD3_MetadataUsageId;
extern const uint32_t HolographicViewConfiguration_get_SupportedDepthReprojectionMethods_mD33BD7BE21EC496335DC1BCD75E3EF0441DE7071_MetadataUsageId;
extern const uint32_t IHolographicCamera6_get_ViewConfiguration_mB28F3B0EB068E8A3146030DC0DBEA6EEEB68C167_MetadataUsageId;
extern const uint32_t IHolographicCamera6_op_Implicit_m2887AA5D8A95FDC25CED8551EC394B800F1886A3_MetadataUsageId;
extern const uint32_t IHolographicCamera6_op_Implicit_m4874D82752E00463B7DFC26589D354F38251FDB1_MetadataUsageId;
extern const uint32_t IHolographicCameraPose_get_HolographicCamera_m847D18B7AC1FCC0E983B400F5F8C0C0346BF9283_MetadataUsageId;
extern const uint32_t IHolographicCameraPose_op_Implicit_m248660B6A4B88590702CF4399DD394DB8145EF04_MetadataUsageId;
extern const uint32_t IHolographicCameraPose_op_Implicit_mF02F441C3D728FD28A2F632A4C90F61F81D1DA19_MetadataUsageId;
extern const uint32_t IHolographicCameraRenderingParameters4_op_Implicit_m50391341CE1C7B14FE32D557E627D6B87ADD7F90_MetadataUsageId;
extern const uint32_t IHolographicCameraRenderingParameters4_op_Implicit_m8BD336CFDA11D4F5641418583490685E02AF7C91_MetadataUsageId;
extern const uint32_t IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF20670A4DE848D2FB8C03FC84FB967F2489DF9DB_MetadataUsageId;
extern const uint32_t IHolographicCameraRenderingParameters_op_Implicit_m6A1FB333291FCE59BDE0BC0E52BE7E9A657B2057_MetadataUsageId;
extern const uint32_t IHolographicCamera_get_Id_mC40456499C282C02D6955A52F2FBEB68B71D1EFD_MetadataUsageId;
extern const uint32_t IHolographicCamera_op_Implicit_mF55053566407A76D2DC6007508F45CBCF880E702_MetadataUsageId;
extern const uint32_t IHolographicFramePrediction_get_CameraPoses_m2D8DC8EAEB3C09086A088162966899EE2B26F493_MetadataUsageId;
extern const uint32_t IHolographicFramePrediction_op_Implicit_m1ECB52BBCF259B07F6E1F657F7059698F450B07D_MetadataUsageId;
extern const uint32_t IHolographicFrame_GetRenderingParameters_m5CC1901DA30B5C11726F3416D225689B6CD52987_MetadataUsageId;
extern const uint32_t IHolographicFrame_get_CurrentPrediction_mE5EC257ACD86F2A1D63A322AEC02DC69B94E4E61_MetadataUsageId;
extern const uint32_t IHolographicFrame_op_Implicit_m18AB423F59D7A0306663471FF5496C04112AF181_MetadataUsageId;
extern const uint32_t IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_mA4F6C1E813CEF6CFE0F42E5D2FF44D60BEE0FA90_MetadataUsageId;
extern const uint32_t IHolographicViewConfiguration2_op_Implicit_m9CA25F4ABA83C5755F350B819DFB30D84144961F_MetadataUsageId;
extern const uint32_t IHolographicViewConfiguration2_op_Implicit_mCCB82F40EA0CE40B6B040C7E889D069FF8128A0F_MetadataUsageId;
extern const uint32_t IHolographicViewConfiguration_op_Implicit_m96163B222E23B2D408AFF2A3602587EABCA6743A_MetadataUsageId;
extern const uint32_t IID__cctor_m38DF2A55F0025D37847C65610CCAD1C27DF0677E_MetadataUsageId;
extern const uint32_t IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ModuleReference_AllocateRefCount_m5A26B972DADB09E3147902042B7E991EFF62D6BE_MetadataUsageId;
extern const uint32_t ModuleReference_Allocate_m6926B6152F1E838691DD663F2779139912A9A308_MetadataUsageId;
extern const uint32_t ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_MetadataUsageId;
extern const uint32_t ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Platform_CoDecrementMTAUsage_mE730477D4A87C0E788A075D80907200EDA3CC8B4_MetadataUsageId;
extern const uint32_t Platform_CoIncrementMTAUsage_m82A00ADB1DCDC541C32020FA5B4EDCB0A1879165_MetadataUsageId;
extern const uint32_t Platform_FreeLibrary_m9B336A9ADBAFD3080FF9071B69D49ACB8A9BB03F_MetadataUsageId;
extern const uint32_t Platform_GetHRForLastWin32Error_m0CE9CAB6A80B7AB9BEB814CAC0A1B0C8C5B7C4F8_MetadataUsageId;
extern const uint32_t Platform__cctor_m069EEE8147C74080719D5B202C02012E181CCF98_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m270B0A147670E34C78F9079E34BAFC7412316675_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mDD33CD656A605EF57A0C6106FA5911EC68A8B669_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_mF88FD882E77B8EFFA5AC54D904A51308BE3417C8_MetadataUsageId;
extern const uint32_t Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_com_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
extern const uint32_t WinrtModule__cctor_m3210BEB9124DE612BE5424430A9B28F18011D814_MetadataUsageId;
extern const uint32_t WinrtModule__ctor_m02B2EF0CD9C7FD0734DDEC8071429B28A292A01D_MetadataUsageId;
extern const uint32_t WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774_MetadataUsageId;
extern const uint32_t _AddRef_BeginInvoke_m3D00CAFED0437B50286AB41EF4C36FF254F1AE4B_MetadataUsageId;
extern const uint32_t _GetAt_BeginInvoke_m1141C8910117612866D130461547D81AF55E0FA0_MetadataUsageId;
extern const uint32_t _GetAt_BeginInvoke_m620BABD3B69206ABCB4C08F56F83A0ED6C1349BF_MetadataUsageId;
extern const uint32_t _GetIids_BeginInvoke_mEC2A36304C09E1871E09ECAD622CF77EF774B616_MetadataUsageId;
extern const uint32_t _GetMany_BeginInvoke_m05FA7A9CAFA1F600A4150220BE98E845121E11DB_MetadataUsageId;
extern const uint32_t _GetMany_BeginInvoke_mB31E1B216896916E568B6E41C646CBBDC5722FE4_MetadataUsageId;
extern const uint32_t _GetMany_BeginInvoke_mB9E5087F8AAA492DE264B1D692D65B6CC3C0B9BB_MetadataUsageId;
extern const uint32_t _GetMany_BeginInvoke_mEBFD55934CE625852BB2FCDFF29595BC68A543E4_MetadataUsageId;
extern const uint32_t _GetRenderingParameters_BeginInvoke_mF697D01C392870ADAD103B9EDC1C5C31215AC6AA_MetadataUsageId;
extern const uint32_t _GetRuntimeClassName_BeginInvoke_mE25F4AE07E7D27199A46EFE1D24129173665F93B_MetadataUsageId;
extern const uint32_t _GetTrustLevel_BeginInvoke_m07CBEB4DE525D4B5875BE045F0674C72F7BCC6DE_MetadataUsageId;
extern const uint32_t _IndexOf_BeginInvoke_m3A4EC81BEACC0E00AFFDE9B0A7CA5DE98004BB8F_MetadataUsageId;
extern const uint32_t _IndexOf_BeginInvoke_m923D0EA4B6A9ECAC577F687C6CDF4E3AD2E26A06_MetadataUsageId;
extern const uint32_t _MoveNext_BeginInvoke_m66A032FE0E9C7D4178EA241246D99C9B40FAC997_MetadataUsageId;
extern const uint32_t _MoveNext_BeginInvoke_m7F8164427B2D5379F1FA959A76F19EEFE09C7221_MetadataUsageId;
extern const uint32_t _QueryInterface_BeginInvoke_mB40D1B3991B547323BECBAB66C3E715F66F586C1_MetadataUsageId;
extern const uint32_t _Release_BeginInvoke_m1E699C023A00D0AFC9ABB83B20E940B9CA384C89_MetadataUsageId;
extern const uint32_t _get_PropertyAsBool_BeginInvoke_mAFB79DADFD84B4E1BADC2625E373CB741C4622C7_MetadataUsageId;
extern const uint32_t _get_PropertyAsDouble_BeginInvoke_m6B2CFC258BAE3002D7D3908740A003A3C29B2619_MetadataUsageId;
extern const uint32_t _get_PropertyAsEnum_BeginInvoke_m0E90527490C6825A21D3BCE6F48995BCD4D585E7_MetadataUsageId;
extern const uint32_t _get_PropertyAsObject_BeginInvoke_m339DAA89A5FDE8A70659B40DAEE5C648C6C149E7_MetadataUsageId;
extern const uint32_t _get_PropertyAsUInt_BeginInvoke_m15B226071A7E3B1021205264EF2472699D6E49D9_MetadataUsageId;
extern const uint32_t _put_PropertyAsBool_BeginInvoke_m05328144301F7469C0705D60221E313F59A3B8AC_MetadataUsageId;
extern const uint32_t _put_PropertyAsEnum_BeginInvoke_mCC6A183FB61E155CBA0F399055174DEF43B9E775_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32;;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com;;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;


#ifndef U3CMODULEU3E_T12DFAB3F809506E289FC8D72565A29870E8F99E3_H
#define U3CMODULEU3E_T12DFAB3F809506E289FC8D72565A29870E8F99E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t12DFAB3F809506E289FC8D72565A29870E8F99E3 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T12DFAB3F809506E289FC8D72565A29870E8F99E3_H
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
#ifndef HOLOGRAPHICCAMERA_TA958E13A2E6A57C23314959C51AF781B838A0D74_H
#define HOLOGRAPHICCAMERA_TA958E13A2E6A57C23314959C51AF781B838A0D74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicCamera
struct  HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface
	IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6> Microsoft.Windows.Graphics.Holographic.HolographicCamera::_interface6
	Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * ____interface6_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74, ____interface_0)); }
	inline IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * get__interface_0() const { return ____interface_0; }
	inline IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}

	inline static int32_t get_offset_of__interface6_1() { return static_cast<int32_t>(offsetof(HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74, ____interface6_1)); }
	inline Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * get__interface6_1() const { return ____interface6_1; }
	inline Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 ** get_address_of__interface6_1() { return &____interface6_1; }
	inline void set__interface6_1(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * value)
	{
		____interface6_1 = value;
		Il2CppCodeGenWriteBarrier((&____interface6_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICCAMERA_TA958E13A2E6A57C23314959C51AF781B838A0D74_H
#ifndef HOLOGRAPHICCAMERAPOSE_T8F9BEC2B5D85DCB935796F4192C908DBB05B8938_H
#define HOLOGRAPHICCAMERAPOSE_T8F9BEC2B5D85DCB935796F4192C908DBB05B8938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose
struct  HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::_interface
	IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938, ____interface_0)); }
	inline IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * get__interface_0() const { return ____interface_0; }
	inline IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICCAMERAPOSE_T8F9BEC2B5D85DCB935796F4192C908DBB05B8938_H
#ifndef HOLOGRAPHICCAMERARENDERINGPARAMETERS_T379705AF2EBB949BA5CE7837BC13627218E940DB_H
#define HOLOGRAPHICCAMERARENDERINGPARAMETERS_T379705AF2EBB949BA5CE7837BC13627218E940DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters
struct  HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface
	IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4> Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::_interface4
	Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * ____interface4_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB, ____interface_0)); }
	inline IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * get__interface_0() const { return ____interface_0; }
	inline IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}

	inline static int32_t get_offset_of__interface4_1() { return static_cast<int32_t>(offsetof(HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB, ____interface4_1)); }
	inline Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * get__interface4_1() const { return ____interface4_1; }
	inline Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 ** get_address_of__interface4_1() { return &____interface4_1; }
	inline void set__interface4_1(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * value)
	{
		____interface4_1 = value;
		Il2CppCodeGenWriteBarrier((&____interface4_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICCAMERARENDERINGPARAMETERS_T379705AF2EBB949BA5CE7837BC13627218E940DB_H
#ifndef HOLOGRAPHICFRAME_TF25757D2371405FC61221E3F1FD5073430822F17_H
#define HOLOGRAPHICFRAME_TF25757D2371405FC61221E3F1FD5073430822F17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicFrame
struct  HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::_interface
	IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17, ____interface_0)); }
	inline IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * get__interface_0() const { return ____interface_0; }
	inline IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICFRAME_TF25757D2371405FC61221E3F1FD5073430822F17_H
#ifndef HOLOGRAPHICFRAMEPREDICTION_T7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81_H
#define HOLOGRAPHICFRAMEPREDICTION_T7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction
struct  HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::_interface
	IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81, ____interface_0)); }
	inline IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * get__interface_0() const { return ____interface_0; }
	inline IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICFRAMEPREDICTION_T7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81_H
#ifndef HOLOGRAPHICVIEWCONFIGURATION_TD96CE00020067B073EB1E053C3D1706F4B15D1B6_H
#define HOLOGRAPHICVIEWCONFIGURATION_TD96CE00020067B073EB1E053C3D1706F4B15D1B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration
struct  HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6  : public RuntimeObject
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface
	IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * ____interface_0;
	// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::_interface2
	Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * ____interface2_1;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6, ____interface_0)); }
	inline IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * get__interface_0() const { return ____interface_0; }
	inline IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((&____interface_0), value);
	}

	inline static int32_t get_offset_of__interface2_1() { return static_cast<int32_t>(offsetof(HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6, ____interface2_1)); }
	inline Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * get__interface2_1() const { return ____interface2_1; }
	inline Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 ** get_address_of__interface2_1() { return &____interface2_1; }
	inline void set__interface2_1(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * value)
	{
		____interface2_1 = value;
		Il2CppCodeGenWriteBarrier((&____interface2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOLOGRAPHICVIEWCONFIGURATION_TD96CE00020067B073EB1E053C3D1706F4B15D1B6_H
#ifndef IHOLOGRAPHICCAMERA_T0283235A83FA610352F0FA2EC7939AD2B1E13725_H
#define IHOLOGRAPHICCAMERA_T0283235A83FA610352F0FA2EC7939AD2B1E13725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera
struct  IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera::_obj
	ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725, ____obj_0)); }
	inline ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICCAMERA_T0283235A83FA610352F0FA2EC7939AD2B1E13725_H
#ifndef IHOLOGRAPHICCAMERA6_TCC308BF91467AB926F20E84A2902239FD3B7162F_H
#define IHOLOGRAPHICCAMERA6_TCC308BF91467AB926F20E84A2902239FD3B7162F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6
struct  IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::_obj
	ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F, ____obj_0)); }
	inline ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICCAMERA6_TCC308BF91467AB926F20E84A2902239FD3B7162F_H
#ifndef IHOLOGRAPHICCAMERAPOSE_TC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7_H
#define IHOLOGRAPHICCAMERAPOSE_TC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose
struct  IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::_obj
	ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7, ____obj_0)); }
	inline ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICCAMERAPOSE_TC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7_H
#ifndef IHOLOGRAPHICCAMERARENDERINGPARAMETERS_T37A538447F308B1BA06FC7F88A3E71D841552342_H
#define IHOLOGRAPHICCAMERARENDERINGPARAMETERS_T37A538447F308B1BA06FC7F88A3E71D841552342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters
struct  IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::_obj
	ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342, ____obj_0)); }
	inline ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICCAMERARENDERINGPARAMETERS_T37A538447F308B1BA06FC7F88A3E71D841552342_H
#ifndef IHOLOGRAPHICCAMERARENDERINGPARAMETERS4_TB30F6244843992B0AA3363822BDD4674C87B4CBC_H
#define IHOLOGRAPHICCAMERARENDERINGPARAMETERS4_TB30F6244843992B0AA3363822BDD4674C87B4CBC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4
struct  IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::_obj
	ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC, ____obj_0)); }
	inline ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICCAMERARENDERINGPARAMETERS4_TB30F6244843992B0AA3363822BDD4674C87B4CBC_H
#ifndef IHOLOGRAPHICFRAME_T126906FBFFEA1F58297A01439B7D39B150D47DFC_H
#define IHOLOGRAPHICFRAME_T126906FBFFEA1F58297A01439B7D39B150D47DFC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame
struct  IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFrame::_obj
	ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC, ____obj_0)); }
	inline ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICFRAME_T126906FBFFEA1F58297A01439B7D39B150D47DFC_H
#ifndef IHOLOGRAPHICFRAMEPREDICTION_T57B5FC08DB56F0C00332AD811D968F64DAAE2A89_H
#define IHOLOGRAPHICFRAMEPREDICTION_T57B5FC08DB56F0C00332AD811D968F64DAAE2A89_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction
struct  IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::_obj
	ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89, ____obj_0)); }
	inline ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICFRAMEPREDICTION_T57B5FC08DB56F0C00332AD811D968F64DAAE2A89_H
#ifndef U3CU3EC_TC4F63BBCBE13E3BE20E425D334B3615983A7BE15_H
#define U3CU3EC_TC4F63BBCBE13E3BE20E425D334B3615983A7BE15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c
struct  U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c::<>9
	U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * ___U3CU3E9_0;
	// WinRT._VectorOfObjectBase`2_CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c::<>9__6_0
	CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields, ___U3CU3E9__6_0_1)); }
	inline CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TC4F63BBCBE13E3BE20E425D334B3615983A7BE15_H
#ifndef IHOLOGRAPHICVIEWCONFIGURATION_TFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD_H
#define IHOLOGRAPHICVIEWCONFIGURATION_TFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration
struct  IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::_obj
	ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD, ____obj_0)); }
	inline ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICVIEWCONFIGURATION_TFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD_H
#ifndef IHOLOGRAPHICVIEWCONFIGURATION2_TBB41C07867F243BD34665E969CA0DF25656009BF_H
#define IHOLOGRAPHICVIEWCONFIGURATION2_TBB41C07867F243BD34665E969CA0DF25656009BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2
struct  IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::_obj
	ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF, ____obj_0)); }
	inline ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IHOLOGRAPHICVIEWCONFIGURATION2_TBB41C07867F243BD34665E969CA0DF25656009BF_H
#ifndef U3CU3EC_T8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_H
#define U3CU3EC_T8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c
struct  U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields
{
public:
	// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c::<>9
	U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * ___U3CU3E9_0;
	// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c::<>9__6_0
	Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_H
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
#ifndef DICTIONARY_2_TDE165DF0D22EE8F4437A82E88E29E3114C20AD31_H
#define DICTIONARY_2_TDE165DF0D22EE8F4437A82E88E29E3114C20AD31_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct  Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t841CF95C9BC7FBFEA75E3283BBBBDDD48B3C5480* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t4D7865452513555B48D7E1A9F4C5F30436985278 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t74AD56B7752EC173B8AB1E91371C3E88259325B4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___entries_1)); }
	inline EntryU5BU5D_t841CF95C9BC7FBFEA75E3283BBBBDDD48B3C5480* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t841CF95C9BC7FBFEA75E3283BBBBDDD48B3C5480** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t841CF95C9BC7FBFEA75E3283BBBBDDD48B3C5480* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___keys_7)); }
	inline KeyCollection_t4D7865452513555B48D7E1A9F4C5F30436985278 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t4D7865452513555B48D7E1A9F4C5F30436985278 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t4D7865452513555B48D7E1A9F4C5F30436985278 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ___values_8)); }
	inline ValueCollection_t74AD56B7752EC173B8AB1E91371C3E88259325B4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t74AD56B7752EC173B8AB1E91371C3E88259325B4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t74AD56B7752EC173B8AB1E91371C3E88259325B4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TDE165DF0D22EE8F4437A82E88E29E3114C20AD31_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
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
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
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
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
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
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef LAZY_1_TFDEF0C2B78203E5067F4716737F16B9118FB0956_H
#define LAZY_1_TFDEF0C2B78203E5067F4716737F16B9118FB0956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct  Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_boxed_1), value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956, ___m_valueFactory_2)); }
	inline Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_valueFactory_2), value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_threadSafeObj_3), value);
	}
};

struct Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((&___ALREADY_INVOKED_SENTINEL_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZY_1_TFDEF0C2B78203E5067F4716737F16B9118FB0956_H
#ifndef LAZY_1_T0C9B4A0E460B824A303CCD3ABD886A05A24B0953_H
#define LAZY_1_T0C9B4A0E460B824A303CCD3ABD886A05A24B0953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct  Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t232058B9320628F4E438C234B8E996107E09C632 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_boxed_1), value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953, ___m_valueFactory_2)); }
	inline Func_1_t232058B9320628F4E438C234B8E996107E09C632 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t232058B9320628F4E438C234B8E996107E09C632 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t232058B9320628F4E438C234B8E996107E09C632 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_valueFactory_2), value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_threadSafeObj_3), value);
	}
};

struct Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t232058B9320628F4E438C234B8E996107E09C632 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t232058B9320628F4E438C234B8E996107E09C632 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t232058B9320628F4E438C234B8E996107E09C632 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t232058B9320628F4E438C234B8E996107E09C632 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((&___ALREADY_INVOKED_SENTINEL_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZY_1_T0C9B4A0E460B824A303CCD3ABD886A05A24B0953_H
#ifndef LAZY_1_T8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_H
#define LAZY_1_T8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct  Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_boxed_1), value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918, ___m_valueFactory_2)); }
	inline Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_valueFactory_2), value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_threadSafeObj_3), value);
	}
};

struct Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((&___ALREADY_INVOKED_SENTINEL_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZY_1_T8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_H
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
#ifndef PLATFORM_T6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_H
#define PLATFORM_T6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Platform
struct  Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A  : public RuntimeObject
{
public:

public:
};

struct Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields
{
public:
	// WinRT.Platform_IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;

public:
	inline static int32_t get_offset_of__platformLinkage_0() { return static_cast<int32_t>(offsetof(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields, ____platformLinkage_0)); }
	inline RuntimeObject* get__platformLinkage_0() const { return ____platformLinkage_0; }
	inline RuntimeObject** get_address_of__platformLinkage_0() { return &____platformLinkage_0; }
	inline void set__platformLinkage_0(RuntimeObject* value)
	{
		____platformLinkage_0 = value;
		Il2CppCodeGenWriteBarrier((&____platformLinkage_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORM_T6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_H
#ifndef DOTNETLINKAGE_TE1B2C8004128D6A0F88DD176BFBE75C61676B293_H
#define DOTNETLINKAGE_TE1B2C8004128D6A0F88DD176BFBE75C61676B293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Platform_DotNETLinkage
struct  DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOTNETLINKAGE_TE1B2C8004128D6A0F88DD176BFBE75C61676B293_H
#ifndef IL2CPPLINKAGE_TF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_H
#define IL2CPPLINKAGE_TF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Platform_IL2CPPLinkage
struct  IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPLINKAGE_TF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_H
#ifndef WEAKLAZY_1_TD66E13503775ED5595B5B0DFF01F01C17AFAB153_H
#define WEAKLAZY_1_TD66E13503775ED5595B5B0DFF01F01C17AFAB153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct  WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153, ____constructor_0)); }
	inline Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructor_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153, ____instance_1)); }
	inline WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKLAZY_1_TD66E13503775ED5595B5B0DFF01F01C17AFAB153_H
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
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
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
#ifndef IUNKNOWNVFTBL_T80A531FA633D70D0F13B752299780DA0B2C41E62_H
#define IUNKNOWNVFTBL_T80A531FA633D70D0F13B752299780DA0B2C41E62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IUnknownVftbl
struct  IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl__QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl__AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl__Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * ___Release_2;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___QueryInterface_0)); }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 ** get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * value)
	{
		___QueryInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___QueryInterface_0), value);
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___AddRef_1)); }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * get_AddRef_1() const { return ___AddRef_1; }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA ** get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * value)
	{
		___AddRef_1 = value;
		Il2CppCodeGenWriteBarrier((&___AddRef_1), value);
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___Release_2)); }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * get_Release_2() const { return ___Release_2; }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 ** get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * value)
	{
		___Release_2 = value;
		Il2CppCodeGenWriteBarrier((&___Release_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
#endif // IUNKNOWNVFTBL_T80A531FA633D70D0F13B752299780DA0B2C41E62_H
#ifndef _BOOL_T446C4743E0A0343811825CB403046A0FCA457818_H
#define _BOOL_T446C4743E0A0343811825CB403046A0FCA457818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._Bool
struct  _Bool_t446C4743E0A0343811825CB403046A0FCA457818 
{
public:
	// System.Int32 WinRT.Interop._Bool::RawValue
	int32_t ___RawValue_0;

public:
	inline static int32_t get_offset_of_RawValue_0() { return static_cast<int32_t>(offsetof(_Bool_t446C4743E0A0343811825CB403046A0FCA457818, ___RawValue_0)); }
	inline int32_t get_RawValue_0() const { return ___RawValue_0; }
	inline int32_t* get_address_of_RawValue_0() { return &___RawValue_0; }
	inline void set_RawValue_0(int32_t value)
	{
		___RawValue_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _BOOL_T446C4743E0A0343811825CB403046A0FCA457818_H
#ifndef HOLOGRAPHICDEPTHREPROJECTIONMETHOD_T1ECB394E594E8B7E8904FCC945D6919B095E55F2_H
#define HOLOGRAPHICDEPTHREPROJECTIONMETHOD_T1ECB394E594E8B7E8904FCC945D6919B095E55F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod
struct  HolographicDepthReprojectionMethod_t1ECB394E594E8B7E8904FCC945D6919B095E55F2 
{
public:
	// System.Int32 Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_t1ECB394E594E8B7E8904FCC945D6919B095E55F2, ___value___2)); }
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
#endif // HOLOGRAPHICDEPTHREPROJECTIONMETHOD_T1ECB394E594E8B7E8904FCC945D6919B095E55F2_H
#ifndef IID_T23599878E762E98777A6AC8DC3FF7E6F3AC4F857_H
#define IID_T23599878E762E98777A6AC8DC3FF7E6F3AC4F857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IID
struct  IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857  : public RuntimeObject
{
public:

public:
};

struct IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields
{
public:
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicCameraPose
	Guid_t  ___IIterableOfHolographicCameraPose_0;
	// System.Guid Microsoft.Windows.Graphics.Holographic.IID::IIterableOfHolographicDepthReprojectionMethod
	Guid_t  ___IIterableOfHolographicDepthReprojectionMethod_1;

public:
	inline static int32_t get_offset_of_IIterableOfHolographicCameraPose_0() { return static_cast<int32_t>(offsetof(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields, ___IIterableOfHolographicCameraPose_0)); }
	inline Guid_t  get_IIterableOfHolographicCameraPose_0() const { return ___IIterableOfHolographicCameraPose_0; }
	inline Guid_t * get_address_of_IIterableOfHolographicCameraPose_0() { return &___IIterableOfHolographicCameraPose_0; }
	inline void set_IIterableOfHolographicCameraPose_0(Guid_t  value)
	{
		___IIterableOfHolographicCameraPose_0 = value;
	}

	inline static int32_t get_offset_of_IIterableOfHolographicDepthReprojectionMethod_1() { return static_cast<int32_t>(offsetof(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields, ___IIterableOfHolographicDepthReprojectionMethod_1)); }
	inline Guid_t  get_IIterableOfHolographicDepthReprojectionMethod_1() const { return ___IIterableOfHolographicDepthReprojectionMethod_1; }
	inline Guid_t * get_address_of_IIterableOfHolographicDepthReprojectionMethod_1() { return &___IIterableOfHolographicDepthReprojectionMethod_1; }
	inline void set_IIterableOfHolographicDepthReprojectionMethod_1(Guid_t  value)
	{
		___IIterableOfHolographicDepthReprojectionMethod_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IID_T23599878E762E98777A6AC8DC3FF7E6F3AC4F857_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#define NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_H
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
#ifndef TYPELOADEXCEPTION_T510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_H
#define TYPELOADEXCEPTION_T510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_17), value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_18), value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_19), value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1_H
#ifndef IINSPECTABLEVFTBL_TC802663F935125C7F12A6FAAFD35CB9CC0A70E32_H
#define IINSPECTABLEVFTBL_TC802663F935125C7F12A6FAAFD35CB9CC0A70E32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IInspectableVftbl
struct  IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl__GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl__GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl__GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * ___GetTrustLevel_3;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		___IUnknownVftbl_0 = value;
	}

	inline static int32_t get_offset_of_GetIids_1() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetIids_1)); }
	inline _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * get_GetIids_1() const { return ___GetIids_1; }
	inline _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 ** get_address_of_GetIids_1() { return &___GetIids_1; }
	inline void set_GetIids_1(_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * value)
	{
		___GetIids_1 = value;
		Il2CppCodeGenWriteBarrier((&___GetIids_1), value);
	}

	inline static int32_t get_offset_of_GetRuntimeClassName_2() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetRuntimeClassName_2)); }
	inline _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * get_GetRuntimeClassName_2() const { return ___GetRuntimeClassName_2; }
	inline _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 ** get_address_of_GetRuntimeClassName_2() { return &___GetRuntimeClassName_2; }
	inline void set_GetRuntimeClassName_2(_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * value)
	{
		___GetRuntimeClassName_2 = value;
		Il2CppCodeGenWriteBarrier((&___GetRuntimeClassName_2), value);
	}

	inline static int32_t get_offset_of_GetTrustLevel_3() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetTrustLevel_3)); }
	inline _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * get_GetTrustLevel_3() const { return ___GetTrustLevel_3; }
	inline _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 ** get_address_of_GetTrustLevel_3() { return &___GetTrustLevel_3; }
	inline void set_GetTrustLevel_3(_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * value)
	{
		___GetTrustLevel_3 = value;
		Il2CppCodeGenWriteBarrier((&___GetTrustLevel_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
#endif // IINSPECTABLEVFTBL_TC802663F935125C7F12A6FAAFD35CB9CC0A70E32_H
#ifndef MODULEREFERENCE_T8E5DF951623D4CDC451E0674355AD058498F0C23_H
#define MODULEREFERENCE_T8E5DF951623D4CDC451E0674355AD058498F0C23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ModuleReference
struct  ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 
{
public:
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject * ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____module_0)); }
	inline RuntimeObject * get__module_0() const { return ____module_0; }
	inline RuntimeObject ** get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(RuntimeObject * value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((&____module_0), value);
	}

	inline static int32_t get_offset_of__refCountPtr_1() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____refCountPtr_1)); }
	inline int32_t* get__refCountPtr_1() const { return ____refCountPtr_1; }
	inline int32_t** get_address_of__refCountPtr_1() { return &____refCountPtr_1; }
	inline void set__refCountPtr_1(int32_t* value)
	{
		____refCountPtr_1 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_2() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____nativeHandle_2)); }
	inline intptr_t get__nativeHandle_2() const { return ____nativeHandle_2; }
	inline intptr_t* get_address_of__nativeHandle_2() { return &____nativeHandle_2; }
	inline void set__nativeHandle_2(intptr_t value)
	{
		____nativeHandle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
#endif // MODULEREFERENCE_T8E5DF951623D4CDC451E0674355AD058498F0C23_H
#ifndef TRUSTLEVEL_T7143BBD94B790F512DCFD4DF09F3B6551D148542_H
#define TRUSTLEVEL_T7143BBD94B790F512DCFD4DF09F3B6551D148542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.TrustLevel
struct  TrustLevel_t7143BBD94B790F512DCFD4DF09F3B6551D148542 
{
public:
	// System.Int32 WinRT.TrustLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrustLevel_t7143BBD94B790F512DCFD4DF09F3B6551D148542, ___value___2)); }
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
#endif // TRUSTLEVEL_T7143BBD94B790F512DCFD4DF09F3B6551D148542_H
#ifndef VECTORVIEWOFENUM_1_TF2E674B52F2D018B173C955F5B97479EFAE55814_H
#define VECTORVIEWOFENUM_1_TF2E674B52F2D018B173C955F5B97479EFAE55814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct  VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum> WinRT.VectorViewOfEnum`1::_obj
	ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * ____obj_0;
	// System.Guid WinRT.VectorViewOfEnum`1::_iidIterable
	Guid_t  ____iidIterable_1;
	// System.Func`2<System.Int32,T> WinRT.VectorViewOfEnum`1::_castToEnum
	Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * ____castToEnum_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814, ____obj_0)); }
	inline ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}

	inline static int32_t get_offset_of__iidIterable_1() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814, ____iidIterable_1)); }
	inline Guid_t  get__iidIterable_1() const { return ____iidIterable_1; }
	inline Guid_t * get_address_of__iidIterable_1() { return &____iidIterable_1; }
	inline void set__iidIterable_1(Guid_t  value)
	{
		____iidIterable_1 = value;
	}

	inline static int32_t get_offset_of__castToEnum_2() { return static_cast<int32_t>(offsetof(VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814, ____castToEnum_2)); }
	inline Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * get__castToEnum_2() const { return ____castToEnum_2; }
	inline Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D ** get_address_of__castToEnum_2() { return &____castToEnum_2; }
	inline void set__castToEnum_2(Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * value)
	{
		____castToEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&____castToEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORVIEWOFENUM_1_TF2E674B52F2D018B173C955F5B97479EFAE55814_H
#ifndef VFTBLPTR_TA9116818B912436626617A27A4C6EE304FEB0DB9_H
#define VFTBLPTR_TA9116818B912436626617A27A4C6EE304FEB0DB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.VftblPtr
struct  VftblPtr_tA9116818B912436626617A27A4C6EE304FEB0DB9 
{
public:
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;

public:
	inline static int32_t get_offset_of_Vftbl_0() { return static_cast<int32_t>(offsetof(VftblPtr_tA9116818B912436626617A27A4C6EE304FEB0DB9, ___Vftbl_0)); }
	inline intptr_t get_Vftbl_0() const { return ___Vftbl_0; }
	inline intptr_t* get_address_of_Vftbl_0() { return &___Vftbl_0; }
	inline void set_Vftbl_0(intptr_t value)
	{
		___Vftbl_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VFTBLPTR_TA9116818B912436626617A27A4C6EE304FEB0DB9_H
#ifndef _VECTOROFOBJECTBASE_2_TB5E4422563A28F029F5ECC040010928A1F61FA8B_H
#define _VECTOROFOBJECTBASE_2_TB5E4422563A28F029F5ECC040010928A1F61FA8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT._VectorOfObjectBase`2<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct  _VectorOfObjectBase_2_tB5E4422563A28F029F5ECC040010928A1F61FA8B  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<I> WinRT._VectorOfObjectBase`2::_obj
	ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * ____obj_0;
	// System.Guid WinRT._VectorOfObjectBase`2::_iidIterable
	Guid_t  ____iidIterable_1;
	// WinRT._VectorOfObjectBase`2_CreateT<T,I> WinRT._VectorOfObjectBase`2::_createT
	CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * ____createT_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_tB5E4422563A28F029F5ECC040010928A1F61FA8B, ____obj_0)); }
	inline ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((&____obj_0), value);
	}

	inline static int32_t get_offset_of__iidIterable_1() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_tB5E4422563A28F029F5ECC040010928A1F61FA8B, ____iidIterable_1)); }
	inline Guid_t  get__iidIterable_1() const { return ____iidIterable_1; }
	inline Guid_t * get_address_of__iidIterable_1() { return &____iidIterable_1; }
	inline void set__iidIterable_1(Guid_t  value)
	{
		____iidIterable_1 = value;
	}

	inline static int32_t get_offset_of__createT_2() { return static_cast<int32_t>(offsetof(_VectorOfObjectBase_2_tB5E4422563A28F029F5ECC040010928A1F61FA8B, ____createT_2)); }
	inline CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * get__createT_2() const { return ____createT_2; }
	inline CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B ** get_address_of__createT_2() { return &____createT_2; }
	inline void set__createT_2(CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * value)
	{
		____createT_2 = value;
		Il2CppCodeGenWriteBarrier((&____createT_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _VECTOROFOBJECTBASE_2_TB5E4422563A28F029F5ECC040010928A1F61FA8B_H
#ifndef VFTBL_T6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_H
#define VFTBL_T6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl
struct  Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::get_ViewportScaleFactor
	intptr_t ___get_ViewportScaleFactor_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::put_ViewportScaleFactor
	intptr_t ___put_ViewportScaleFactor_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::get_IsStereo
	intptr_t ___get_IsStereo_4;
	// WinRT.Interop._get_PropertyAsUInt Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::get_Id
	_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * ___get_Id_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::SetNearPlaneDistance
	intptr_t ___SetNearPlaneDistance_6;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl::SetFarPlaneDistance
	intptr_t ___SetFarPlaneDistance_7;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_RenderTargetSize_1() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___get_RenderTargetSize_1)); }
	inline intptr_t get_get_RenderTargetSize_1() const { return ___get_RenderTargetSize_1; }
	inline intptr_t* get_address_of_get_RenderTargetSize_1() { return &___get_RenderTargetSize_1; }
	inline void set_get_RenderTargetSize_1(intptr_t value)
	{
		___get_RenderTargetSize_1 = value;
	}

	inline static int32_t get_offset_of_get_ViewportScaleFactor_2() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___get_ViewportScaleFactor_2)); }
	inline intptr_t get_get_ViewportScaleFactor_2() const { return ___get_ViewportScaleFactor_2; }
	inline intptr_t* get_address_of_get_ViewportScaleFactor_2() { return &___get_ViewportScaleFactor_2; }
	inline void set_get_ViewportScaleFactor_2(intptr_t value)
	{
		___get_ViewportScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_put_ViewportScaleFactor_3() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___put_ViewportScaleFactor_3)); }
	inline intptr_t get_put_ViewportScaleFactor_3() const { return ___put_ViewportScaleFactor_3; }
	inline intptr_t* get_address_of_put_ViewportScaleFactor_3() { return &___put_ViewportScaleFactor_3; }
	inline void set_put_ViewportScaleFactor_3(intptr_t value)
	{
		___put_ViewportScaleFactor_3 = value;
	}

	inline static int32_t get_offset_of_get_IsStereo_4() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___get_IsStereo_4)); }
	inline intptr_t get_get_IsStereo_4() const { return ___get_IsStereo_4; }
	inline intptr_t* get_address_of_get_IsStereo_4() { return &___get_IsStereo_4; }
	inline void set_get_IsStereo_4(intptr_t value)
	{
		___get_IsStereo_4 = value;
	}

	inline static int32_t get_offset_of_get_Id_5() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___get_Id_5)); }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * get_get_Id_5() const { return ___get_Id_5; }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB ** get_address_of_get_Id_5() { return &___get_Id_5; }
	inline void set_get_Id_5(_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * value)
	{
		___get_Id_5 = value;
		Il2CppCodeGenWriteBarrier((&___get_Id_5), value);
	}

	inline static int32_t get_offset_of_SetNearPlaneDistance_6() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___SetNearPlaneDistance_6)); }
	inline intptr_t get_SetNearPlaneDistance_6() const { return ___SetNearPlaneDistance_6; }
	inline intptr_t* get_address_of_SetNearPlaneDistance_6() { return &___SetNearPlaneDistance_6; }
	inline void set_SetNearPlaneDistance_6(intptr_t value)
	{
		___SetNearPlaneDistance_6 = value;
	}

	inline static int32_t get_offset_of_SetFarPlaneDistance_7() { return static_cast<int32_t>(offsetof(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342, ___SetFarPlaneDistance_7)); }
	inline intptr_t get_SetFarPlaneDistance_7() const { return ___SetFarPlaneDistance_7; }
	inline intptr_t* get_address_of_SetFarPlaneDistance_7() { return &___SetFarPlaneDistance_7; }
	inline void set_SetFarPlaneDistance_7(intptr_t value)
	{
		___SetFarPlaneDistance_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
struct Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_RenderTargetSize_1;
	intptr_t ___get_ViewportScaleFactor_2;
	intptr_t ___put_ViewportScaleFactor_3;
	intptr_t ___get_IsStereo_4;
	Il2CppMethodPointer ___get_Id_5;
	intptr_t ___SetNearPlaneDistance_6;
	intptr_t ___SetFarPlaneDistance_7;
};
#endif // VFTBL_T6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_H
#ifndef VFTBL_T6B50AB4A58A848DDDF4EB44421F7E61490823FAB_H
#define VFTBL_T6B50AB4A58A848DDDF4EB44421F7E61490823FAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl
struct  Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl::get_ViewConfiguration
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_ViewConfiguration_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_ViewConfiguration_1() { return static_cast<int32_t>(offsetof(Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB, ___get_ViewConfiguration_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_ViewConfiguration_1() const { return ___get_ViewConfiguration_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_ViewConfiguration_1() { return &___get_ViewConfiguration_1; }
	inline void set_get_ViewConfiguration_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_ViewConfiguration_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_ViewConfiguration_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
struct Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_ViewConfiguration_1;
};
#endif // VFTBL_T6B50AB4A58A848DDDF4EB44421F7E61490823FAB_H
#ifndef VFTBL_T49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_H
#define VFTBL_T49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl
struct  Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl::get_HolographicCamera
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_HolographicCamera_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_HolographicCamera_1() { return static_cast<int32_t>(offsetof(Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F, ___get_HolographicCamera_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_HolographicCamera_1() const { return ___get_HolographicCamera_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_HolographicCamera_1() { return &___get_HolographicCamera_1; }
	inline void set_get_HolographicCamera_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_HolographicCamera_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_HolographicCamera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
struct Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_HolographicCamera_1;
};
#endif // VFTBL_T49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_H
#ifndef VFTBL_T2940E0A0567D72E72279AEFC518C78BE9F439002_H
#define VFTBL_T2940E0A0567D72E72279AEFC518C78BE9F439002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl
struct  Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002 
{
public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
struct Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
};
#endif // VFTBL_T2940E0A0567D72E72279AEFC518C78BE9F439002_H
#ifndef VFTBL_TFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_H
#define VFTBL_TFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl
struct  Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl::get_DepthReprojectionMethod
	_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * ___get_DepthReprojectionMethod_1;
	// WinRT.Interop._put_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl::put_DepthReprojectionMethod
	_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * ___put_DepthReprojectionMethod_2;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_DepthReprojectionMethod_1() { return static_cast<int32_t>(offsetof(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15, ___get_DepthReprojectionMethod_1)); }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * get_get_DepthReprojectionMethod_1() const { return ___get_DepthReprojectionMethod_1; }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E ** get_address_of_get_DepthReprojectionMethod_1() { return &___get_DepthReprojectionMethod_1; }
	inline void set_get_DepthReprojectionMethod_1(_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * value)
	{
		___get_DepthReprojectionMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_DepthReprojectionMethod_1), value);
	}

	inline static int32_t get_offset_of_put_DepthReprojectionMethod_2() { return static_cast<int32_t>(offsetof(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15, ___put_DepthReprojectionMethod_2)); }
	inline _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * get_put_DepthReprojectionMethod_2() const { return ___put_DepthReprojectionMethod_2; }
	inline _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 ** get_address_of_put_DepthReprojectionMethod_2() { return &___put_DepthReprojectionMethod_2; }
	inline void set_put_DepthReprojectionMethod_2(_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * value)
	{
		___put_DepthReprojectionMethod_2 = value;
		Il2CppCodeGenWriteBarrier((&___put_DepthReprojectionMethod_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
struct Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_DepthReprojectionMethod_1;
	Il2CppMethodPointer ___put_DepthReprojectionMethod_2;
};
#endif // VFTBL_TFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_H
#ifndef VFTBL_T7824FECB5F872D75737A9414D8E5E2B3419CDAF6_H
#define VFTBL_T7824FECB5F872D75737A9414D8E5E2B3419CDAF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl
struct  Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::get_AddedCameras
	intptr_t ___get_AddedCameras_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::get_RemovedCameras
	intptr_t ___get_RemovedCameras_2;
	// Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::GetRenderingParameters
	_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * ___GetRenderingParameters_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::get_Duration
	intptr_t ___get_Duration_4;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl::get_CurrentPrediction
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_CurrentPrediction_5;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_AddedCameras_1() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___get_AddedCameras_1)); }
	inline intptr_t get_get_AddedCameras_1() const { return ___get_AddedCameras_1; }
	inline intptr_t* get_address_of_get_AddedCameras_1() { return &___get_AddedCameras_1; }
	inline void set_get_AddedCameras_1(intptr_t value)
	{
		___get_AddedCameras_1 = value;
	}

	inline static int32_t get_offset_of_get_RemovedCameras_2() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___get_RemovedCameras_2)); }
	inline intptr_t get_get_RemovedCameras_2() const { return ___get_RemovedCameras_2; }
	inline intptr_t* get_address_of_get_RemovedCameras_2() { return &___get_RemovedCameras_2; }
	inline void set_get_RemovedCameras_2(intptr_t value)
	{
		___get_RemovedCameras_2 = value;
	}

	inline static int32_t get_offset_of_GetRenderingParameters_3() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___GetRenderingParameters_3)); }
	inline _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * get_GetRenderingParameters_3() const { return ___GetRenderingParameters_3; }
	inline _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 ** get_address_of_GetRenderingParameters_3() { return &___GetRenderingParameters_3; }
	inline void set_GetRenderingParameters_3(_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * value)
	{
		___GetRenderingParameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___GetRenderingParameters_3), value);
	}

	inline static int32_t get_offset_of_get_Duration_4() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___get_Duration_4)); }
	inline intptr_t get_get_Duration_4() const { return ___get_Duration_4; }
	inline intptr_t* get_address_of_get_Duration_4() { return &___get_Duration_4; }
	inline void set_get_Duration_4(intptr_t value)
	{
		___get_Duration_4 = value;
	}

	inline static int32_t get_offset_of_get_CurrentPrediction_5() { return static_cast<int32_t>(offsetof(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6, ___get_CurrentPrediction_5)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_CurrentPrediction_5() const { return ___get_CurrentPrediction_5; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_CurrentPrediction_5() { return &___get_CurrentPrediction_5; }
	inline void set_get_CurrentPrediction_5(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_CurrentPrediction_5 = value;
		Il2CppCodeGenWriteBarrier((&___get_CurrentPrediction_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
struct Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_AddedCameras_1;
	intptr_t ___get_RemovedCameras_2;
	Il2CppMethodPointer ___GetRenderingParameters_3;
	intptr_t ___get_Duration_4;
	Il2CppMethodPointer ___get_CurrentPrediction_5;
};
#endif // VFTBL_T7824FECB5F872D75737A9414D8E5E2B3419CDAF6_H
#ifndef VFTBL_TB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_H
#define VFTBL_TB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl
struct  Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl::get_CameraPoses
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_CameraPoses_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_CameraPoses_1() { return static_cast<int32_t>(offsetof(Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA, ___get_CameraPoses_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_CameraPoses_1() const { return ___get_CameraPoses_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_CameraPoses_1() { return &___get_CameraPoses_1; }
	inline void set_get_CameraPoses_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_CameraPoses_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_CameraPoses_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
struct Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_CameraPoses_1;
};
#endif // VFTBL_TB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_H
#ifndef VFTBL_T6FA8CFF602EF76724357CF7F7106DA70DC03E70E_H
#define VFTBL_T6FA8CFF602EF76724357CF7F7106DA70DC03E70E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl
struct  Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_NativeRenderTargetSize
	intptr_t ___get_NativeRenderTargetSize_1;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_RenderTargetSize
	intptr_t ___get_RenderTargetSize_2;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::RequestRenderTargetSize
	intptr_t ___RequestRenderTargetSize_3;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_SupportedPixelFormats
	intptr_t ___get_SupportedPixelFormats_4;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_PixelFormat
	intptr_t ___get_PixelFormat_5;
	// System.IntPtr Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::put_PixelFormat
	intptr_t ___put_PixelFormat_6;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_IsStereo
	_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * ___get_IsStereo_7;
	// WinRT.Interop._get_PropertyAsDouble Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_RefreshRate
	_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * ___get_RefreshRate_8;
	// WinRT.Interop._get_PropertyAsEnum Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_Kind
	_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * ___get_Kind_9;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_Display
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_Display_10;
	// WinRT.Interop._get_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::get_IsEnabled
	_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * ___get_IsEnabled_11;
	// WinRT.Interop._put_PropertyAsBool Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl::put_IsEnabled
	_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * ___put_IsEnabled_12;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_NativeRenderTargetSize_1() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_NativeRenderTargetSize_1)); }
	inline intptr_t get_get_NativeRenderTargetSize_1() const { return ___get_NativeRenderTargetSize_1; }
	inline intptr_t* get_address_of_get_NativeRenderTargetSize_1() { return &___get_NativeRenderTargetSize_1; }
	inline void set_get_NativeRenderTargetSize_1(intptr_t value)
	{
		___get_NativeRenderTargetSize_1 = value;
	}

	inline static int32_t get_offset_of_get_RenderTargetSize_2() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_RenderTargetSize_2)); }
	inline intptr_t get_get_RenderTargetSize_2() const { return ___get_RenderTargetSize_2; }
	inline intptr_t* get_address_of_get_RenderTargetSize_2() { return &___get_RenderTargetSize_2; }
	inline void set_get_RenderTargetSize_2(intptr_t value)
	{
		___get_RenderTargetSize_2 = value;
	}

	inline static int32_t get_offset_of_RequestRenderTargetSize_3() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___RequestRenderTargetSize_3)); }
	inline intptr_t get_RequestRenderTargetSize_3() const { return ___RequestRenderTargetSize_3; }
	inline intptr_t* get_address_of_RequestRenderTargetSize_3() { return &___RequestRenderTargetSize_3; }
	inline void set_RequestRenderTargetSize_3(intptr_t value)
	{
		___RequestRenderTargetSize_3 = value;
	}

	inline static int32_t get_offset_of_get_SupportedPixelFormats_4() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_SupportedPixelFormats_4)); }
	inline intptr_t get_get_SupportedPixelFormats_4() const { return ___get_SupportedPixelFormats_4; }
	inline intptr_t* get_address_of_get_SupportedPixelFormats_4() { return &___get_SupportedPixelFormats_4; }
	inline void set_get_SupportedPixelFormats_4(intptr_t value)
	{
		___get_SupportedPixelFormats_4 = value;
	}

	inline static int32_t get_offset_of_get_PixelFormat_5() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_PixelFormat_5)); }
	inline intptr_t get_get_PixelFormat_5() const { return ___get_PixelFormat_5; }
	inline intptr_t* get_address_of_get_PixelFormat_5() { return &___get_PixelFormat_5; }
	inline void set_get_PixelFormat_5(intptr_t value)
	{
		___get_PixelFormat_5 = value;
	}

	inline static int32_t get_offset_of_put_PixelFormat_6() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___put_PixelFormat_6)); }
	inline intptr_t get_put_PixelFormat_6() const { return ___put_PixelFormat_6; }
	inline intptr_t* get_address_of_put_PixelFormat_6() { return &___put_PixelFormat_6; }
	inline void set_put_PixelFormat_6(intptr_t value)
	{
		___put_PixelFormat_6 = value;
	}

	inline static int32_t get_offset_of_get_IsStereo_7() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_IsStereo_7)); }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * get_get_IsStereo_7() const { return ___get_IsStereo_7; }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 ** get_address_of_get_IsStereo_7() { return &___get_IsStereo_7; }
	inline void set_get_IsStereo_7(_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * value)
	{
		___get_IsStereo_7 = value;
		Il2CppCodeGenWriteBarrier((&___get_IsStereo_7), value);
	}

	inline static int32_t get_offset_of_get_RefreshRate_8() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_RefreshRate_8)); }
	inline _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * get_get_RefreshRate_8() const { return ___get_RefreshRate_8; }
	inline _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 ** get_address_of_get_RefreshRate_8() { return &___get_RefreshRate_8; }
	inline void set_get_RefreshRate_8(_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * value)
	{
		___get_RefreshRate_8 = value;
		Il2CppCodeGenWriteBarrier((&___get_RefreshRate_8), value);
	}

	inline static int32_t get_offset_of_get_Kind_9() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_Kind_9)); }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * get_get_Kind_9() const { return ___get_Kind_9; }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E ** get_address_of_get_Kind_9() { return &___get_Kind_9; }
	inline void set_get_Kind_9(_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * value)
	{
		___get_Kind_9 = value;
		Il2CppCodeGenWriteBarrier((&___get_Kind_9), value);
	}

	inline static int32_t get_offset_of_get_Display_10() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_Display_10)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_Display_10() const { return ___get_Display_10; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_Display_10() { return &___get_Display_10; }
	inline void set_get_Display_10(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_Display_10 = value;
		Il2CppCodeGenWriteBarrier((&___get_Display_10), value);
	}

	inline static int32_t get_offset_of_get_IsEnabled_11() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___get_IsEnabled_11)); }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * get_get_IsEnabled_11() const { return ___get_IsEnabled_11; }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 ** get_address_of_get_IsEnabled_11() { return &___get_IsEnabled_11; }
	inline void set_get_IsEnabled_11(_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * value)
	{
		___get_IsEnabled_11 = value;
		Il2CppCodeGenWriteBarrier((&___get_IsEnabled_11), value);
	}

	inline static int32_t get_offset_of_put_IsEnabled_12() { return static_cast<int32_t>(offsetof(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E, ___put_IsEnabled_12)); }
	inline _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * get_put_IsEnabled_12() const { return ___put_IsEnabled_12; }
	inline _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 ** get_address_of_put_IsEnabled_12() { return &___put_IsEnabled_12; }
	inline void set_put_IsEnabled_12(_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * value)
	{
		___put_IsEnabled_12 = value;
		Il2CppCodeGenWriteBarrier((&___put_IsEnabled_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
struct Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	intptr_t ___get_NativeRenderTargetSize_1;
	intptr_t ___get_RenderTargetSize_2;
	intptr_t ___RequestRenderTargetSize_3;
	intptr_t ___get_SupportedPixelFormats_4;
	intptr_t ___get_PixelFormat_5;
	intptr_t ___put_PixelFormat_6;
	Il2CppMethodPointer ___get_IsStereo_7;
	Il2CppMethodPointer ___get_RefreshRate_8;
	Il2CppMethodPointer ___get_Kind_9;
	Il2CppMethodPointer ___get_Display_10;
	Il2CppMethodPointer ___get_IsEnabled_11;
	Il2CppMethodPointer ___put_IsEnabled_12;
};
#endif // VFTBL_T6FA8CFF602EF76724357CF7F7106DA70DC03E70E_H
#ifndef VFTBL_T811D6AA746EC03050B1F51FD9F52140AA2741E47_H
#define VFTBL_T811D6AA746EC03050B1F51FD9F52140AA2741E47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl
struct  Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl::get_SupportedDepthReprojectionMethods
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_SupportedDepthReprojectionMethods_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_SupportedDepthReprojectionMethods_1() { return static_cast<int32_t>(offsetof(Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47, ___get_SupportedDepthReprojectionMethods_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_SupportedDepthReprojectionMethods_1() const { return ___get_SupportedDepthReprojectionMethods_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_SupportedDepthReprojectionMethods_1() { return &___get_SupportedDepthReprojectionMethods_1; }
	inline void set_get_SupportedDepthReprojectionMethods_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_SupportedDepthReprojectionMethods_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_SupportedDepthReprojectionMethods_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
struct Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_SupportedDepthReprojectionMethods_1;
};
#endif // VFTBL_T811D6AA746EC03050B1F51FD9F52140AA2741E47_H
#ifndef DLLNOTFOUNDEXCEPTION_TED90B6A78D4CF5AA565288E0BA88A990062A7F76_H
#define DLLNOTFOUNDEXCEPTION_TED90B6A78D4CF5AA565288E0BA88A990062A7F76_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76  : public TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_TED90B6A78D4CF5AA565288E0BA88A990062A7F76_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
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
#ifndef DLLMODULE_T4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_H
#define DLLMODULE_T4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.DllModule
struct  DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70  : public RuntimeObject
{
public:
	// WinRT.ModuleReference WinRT.DllModule::_moduleHandle
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ____moduleHandle_0;

public:
	inline static int32_t get_offset_of__moduleHandle_0() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70, ____moduleHandle_0)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get__moduleHandle_0() const { return ____moduleHandle_0; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of__moduleHandle_0() { return &____moduleHandle_0; }
	inline void set__moduleHandle_0(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		____moduleHandle_0 = value;
	}
};

struct DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 * ____cache_1;

public:
	inline static int32_t get_offset_of__cache_1() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields, ____cache_1)); }
	inline Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 * get__cache_1() const { return ____cache_1; }
	inline Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 ** get_address_of__cache_1() { return &____cache_1; }
	inline void set__cache_1(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 * value)
	{
		____cache_1 = value;
		Il2CppCodeGenWriteBarrier((&____cache_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLMODULE_T4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_H
#ifndef IOBJECTREFERENCE_T9479EB1164210609F882D77E3E75FBEA676B0EE8_H
#define IOBJECTREFERENCE_T9479EB1164210609F882D77E3E75FBEA676B0EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.IObjectReference
struct  IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ___U3CVftblIUnknownU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_ThisPtr_0() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___ThisPtr_0)); }
	inline intptr_t get_ThisPtr_0() const { return ___ThisPtr_0; }
	inline intptr_t* get_address_of_ThisPtr_0() { return &___ThisPtr_0; }
	inline void set_ThisPtr_0(intptr_t value)
	{
		___ThisPtr_0 = value;
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___Module_1)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get_Module_1() const { return ___Module_1; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		___Module_1 = value;
	}

	inline static int32_t get_offset_of_U3CVftblIUnknownU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___U3CVftblIUnknownU3Ek__BackingField_2)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get_U3CVftblIUnknownU3Ek__BackingField_2() const { return ___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of_U3CVftblIUnknownU3Ek__BackingField_2() { return &___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline void set_U3CVftblIUnknownU3Ek__BackingField_2(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		___U3CVftblIUnknownU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOBJECTREFERENCE_T9479EB1164210609F882D77E3E75FBEA676B0EE8_H
#ifndef IITERABLEOFENUM_T57BCAE46FF9710BF914370BDC922C6E3549A1B9E_H
#define IITERABLEOFENUM_T57BCAE46FF9710BF914370BDC922C6E3549A1B9E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIterableOfEnum
struct  IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfEnum::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfEnum::get_First
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_First_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_First_1() { return static_cast<int32_t>(offsetof(IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E, ___get_First_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_First_1() const { return ___get_First_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_First_1() { return &___get_First_1; }
	inline void set_get_First_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_First_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_First_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfEnum
struct IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
#endif // IITERABLEOFENUM_T57BCAE46FF9710BF914370BDC922C6E3549A1B9E_H
#ifndef IITERABLEOFOBJECT_TFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_H
#define IITERABLEOFOBJECT_TFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIterableOfObject
struct  IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIterableOfObject::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIterableOfObject::get_First
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_First_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_First_1() { return static_cast<int32_t>(offsetof(IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE, ___get_First_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_First_1() const { return ___get_First_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_First_1() { return &___get_First_1; }
	inline void set_get_First_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_First_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_First_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
// Native definition for COM marshalling of WinRT.Interop.IIterableOfObject
struct IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_First_1;
};
#endif // IITERABLEOFOBJECT_TFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_H
#ifndef IITERATOROFENUM_T840C0CB8C26EC375A76219322D3A642A5CAA2660_H
#define IITERATOROFENUM_T840C0CB8C26EC375A76219322D3A642A5CAA2660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfEnum
struct  IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfEnum::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IIteratorOfEnum::get_Current
	_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfEnum::get_HasCurrent
	_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfEnum__MoveNext WinRT.Interop.IIteratorOfEnum::MoveNext
	_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * ___MoveNext_3;
	// WinRT.Interop.IIteratorOfEnum__GetMany WinRT.Interop.IIteratorOfEnum::GetMany
	_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_Current_1() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660, ___get_Current_1)); }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * get_get_Current_1() const { return ___get_Current_1; }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E ** get_address_of_get_Current_1() { return &___get_Current_1; }
	inline void set_get_Current_1(_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * value)
	{
		___get_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_Current_1), value);
	}

	inline static int32_t get_offset_of_get_HasCurrent_2() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660, ___get_HasCurrent_2)); }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * get_get_HasCurrent_2() const { return ___get_HasCurrent_2; }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 ** get_address_of_get_HasCurrent_2() { return &___get_HasCurrent_2; }
	inline void set_get_HasCurrent_2(_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * value)
	{
		___get_HasCurrent_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_HasCurrent_2), value);
	}

	inline static int32_t get_offset_of_MoveNext_3() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660, ___MoveNext_3)); }
	inline _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * get_MoveNext_3() const { return ___MoveNext_3; }
	inline _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 ** get_address_of_MoveNext_3() { return &___MoveNext_3; }
	inline void set_MoveNext_3(_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * value)
	{
		___MoveNext_3 = value;
		Il2CppCodeGenWriteBarrier((&___MoveNext_3), value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660, ___GetMany_4)); }
	inline _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((&___GetMany_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfEnum
struct IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
#endif // IITERATOROFENUM_T840C0CB8C26EC375A76219322D3A642A5CAA2660_H
#ifndef IITERATOROFOBJECT_TDF48A36D6B2713A1DD6275A16A7FFD870B960259_H
#define IITERATOROFOBJECT_TDF48A36D6B2713A1DD6275A16A7FFD870B960259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfObject
struct  IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IIteratorOfObject::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IIteratorOfObject::get_Current
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_Current_1;
	// WinRT.Interop._get_PropertyAsBool WinRT.Interop.IIteratorOfObject::get_HasCurrent
	_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * ___get_HasCurrent_2;
	// WinRT.Interop.IIteratorOfObject__MoveNext WinRT.Interop.IIteratorOfObject::MoveNext
	_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * ___MoveNext_3;
	// WinRT.Interop.IIteratorOfObject__GetMany WinRT.Interop.IIteratorOfObject::GetMany
	_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_get_Current_1() { return static_cast<int32_t>(offsetof(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259, ___get_Current_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_Current_1() const { return ___get_Current_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_Current_1() { return &___get_Current_1; }
	inline void set_get_Current_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___get_Current_1), value);
	}

	inline static int32_t get_offset_of_get_HasCurrent_2() { return static_cast<int32_t>(offsetof(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259, ___get_HasCurrent_2)); }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * get_get_HasCurrent_2() const { return ___get_HasCurrent_2; }
	inline _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 ** get_address_of_get_HasCurrent_2() { return &___get_HasCurrent_2; }
	inline void set_get_HasCurrent_2(_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * value)
	{
		___get_HasCurrent_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_HasCurrent_2), value);
	}

	inline static int32_t get_offset_of_MoveNext_3() { return static_cast<int32_t>(offsetof(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259, ___MoveNext_3)); }
	inline _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * get_MoveNext_3() const { return ___MoveNext_3; }
	inline _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 ** get_address_of_MoveNext_3() { return &___MoveNext_3; }
	inline void set_MoveNext_3(_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * value)
	{
		___MoveNext_3 = value;
		Il2CppCodeGenWriteBarrier((&___MoveNext_3), value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259, ___GetMany_4)); }
	inline _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((&___GetMany_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IIteratorOfObject
struct IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Current_1;
	Il2CppMethodPointer ___get_HasCurrent_2;
	Il2CppMethodPointer ___MoveNext_3;
	Il2CppMethodPointer ___GetMany_4;
};
#endif // IITERATOROFOBJECT_TDF48A36D6B2713A1DD6275A16A7FFD870B960259_H
#ifndef IVECTORVIEWOFENUM_TE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_H
#define IVECTORVIEWOFENUM_TE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfEnum
struct  IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfEnum::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfEnum__GetAt WinRT.Interop.IVectorViewOfEnum::GetAt
	_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfEnum::get_Size
	_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * ___get_Size_2;
	// WinRT.Interop.IVectorViewOfEnum__IndexOf WinRT.Interop.IVectorViewOfEnum::IndexOf
	_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfEnum__GetMany WinRT.Interop.IVectorViewOfEnum::GetMany
	_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_GetAt_1() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2, ___GetAt_1)); }
	inline _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * get_GetAt_1() const { return ___GetAt_1; }
	inline _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C ** get_address_of_GetAt_1() { return &___GetAt_1; }
	inline void set_GetAt_1(_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * value)
	{
		___GetAt_1 = value;
		Il2CppCodeGenWriteBarrier((&___GetAt_1), value);
	}

	inline static int32_t get_offset_of_get_Size_2() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2, ___get_Size_2)); }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * get_get_Size_2() const { return ___get_Size_2; }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB ** get_address_of_get_Size_2() { return &___get_Size_2; }
	inline void set_get_Size_2(_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * value)
	{
		___get_Size_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_Size_2), value);
	}

	inline static int32_t get_offset_of_IndexOf_3() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2, ___IndexOf_3)); }
	inline _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * get_IndexOf_3() const { return ___IndexOf_3; }
	inline _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A ** get_address_of_IndexOf_3() { return &___IndexOf_3; }
	inline void set_IndexOf_3(_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * value)
	{
		___IndexOf_3 = value;
		Il2CppCodeGenWriteBarrier((&___IndexOf_3), value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2, ___GetMany_4)); }
	inline _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((&___GetMany_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfEnum
struct IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
#endif // IVECTORVIEWOFENUM_TE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_H
#ifndef IVECTORVIEWOFOBJECT_TECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_H
#define IVECTORVIEWOFOBJECT_TECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfObject
struct  IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IVectorViewOfObject::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop.IVectorViewOfObject__GetAt WinRT.Interop.IVectorViewOfObject::GetAt
	_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * ___GetAt_1;
	// WinRT.Interop._get_PropertyAsUInt WinRT.Interop.IVectorViewOfObject::get_Size
	_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * ___get_Size_2;
	// WinRT.Interop.IVectorViewOfObject__IndexOf WinRT.Interop.IVectorViewOfObject::IndexOf
	_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * ___IndexOf_3;
	// WinRT.Interop.IVectorViewOfObject__GetMany WinRT.Interop.IVectorViewOfObject::GetMany
	_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * ___GetMany_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
	}

	inline static int32_t get_offset_of_GetAt_1() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8, ___GetAt_1)); }
	inline _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * get_GetAt_1() const { return ___GetAt_1; }
	inline _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B ** get_address_of_GetAt_1() { return &___GetAt_1; }
	inline void set_GetAt_1(_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * value)
	{
		___GetAt_1 = value;
		Il2CppCodeGenWriteBarrier((&___GetAt_1), value);
	}

	inline static int32_t get_offset_of_get_Size_2() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8, ___get_Size_2)); }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * get_get_Size_2() const { return ___get_Size_2; }
	inline _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB ** get_address_of_get_Size_2() { return &___get_Size_2; }
	inline void set_get_Size_2(_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * value)
	{
		___get_Size_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_Size_2), value);
	}

	inline static int32_t get_offset_of_IndexOf_3() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8, ___IndexOf_3)); }
	inline _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * get_IndexOf_3() const { return ___IndexOf_3; }
	inline _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D ** get_address_of_IndexOf_3() { return &___IndexOf_3; }
	inline void set_IndexOf_3(_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * value)
	{
		___IndexOf_3 = value;
		Il2CppCodeGenWriteBarrier((&___IndexOf_3), value);
	}

	inline static int32_t get_offset_of_GetMany_4() { return static_cast<int32_t>(offsetof(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8, ___GetMany_4)); }
	inline _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * get_GetMany_4() const { return ___GetMany_4; }
	inline _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC ** get_address_of_GetMany_4() { return &___GetMany_4; }
	inline void set_GetMany_4(_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * value)
	{
		___GetMany_4 = value;
		Il2CppCodeGenWriteBarrier((&___GetMany_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
// Native definition for COM marshalling of WinRT.Interop.IVectorViewOfObject
struct IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetAt_1;
	Il2CppMethodPointer ___get_Size_2;
	Il2CppMethodPointer ___IndexOf_3;
	Il2CppMethodPointer ___GetMany_4;
};
#endif // IVECTORVIEWOFOBJECT_TECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_H
#ifndef VECTORVIEWOFOBJECT_1_T601729F768E3C85241062CB1B25202150A7E9FF6_H
#define VECTORVIEWOFOBJECT_1_T601729F768E3C85241062CB1B25202150A7E9FF6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>
struct  VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6  : public _VectorOfObjectBase_2_tB5E4422563A28F029F5ECC040010928A1F61FA8B
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTORVIEWOFOBJECT_1_T601729F768E3C85241062CB1B25202150A7E9FF6_H
#ifndef WINRTMODULE_T353DBD117932B51DCCF11E156A09340746F4D09C_H
#define WINRTMODULE_T353DBD117932B51DCCF11E156A09340746F4D09C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.WinrtModule
struct  WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C  : public RuntimeObject
{
public:
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ____module_0;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C, ____module_0)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get__module_0() const { return ____module_0; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		____module_0 = value;
	}
};

struct WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields
{
public:
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields, ____instance_1)); }
	inline WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * get__instance_1() const { return ____instance_1; }
	inline WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINRTMODULE_T353DBD117932B51DCCF11E156A09340746F4D09C_H
#ifndef _GETRENDERINGPARAMETERS_TBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_H
#define _GETRENDERINGPARAMETERS_TBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters
struct  _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETRENDERINGPARAMETERS_TBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef FUNC_1_T83285DFEB0C073A1FC3865203DFFB7D47246C613_H
#define FUNC_1_T83285DFEB0C073A1FC3865203DFFB7D47246C613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>
struct  Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T83285DFEB0C073A1FC3865203DFFB7D47246C613_H
#ifndef FUNC_1_T232058B9320628F4E438C234B8E996107E09C632_H
#define FUNC_1_T232058B9320628F4E438C234B8E996107E09C632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>
struct  Func_1_t232058B9320628F4E438C234B8E996107E09C632  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T232058B9320628F4E438C234B8E996107E09C632_H
#ifndef FUNC_1_T68680E827064572D98F178893AF8009AE9DD28C3_H
#define FUNC_1_T68680E827064572D98F178893AF8009AE9DD28C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>
struct  Func_1_t68680E827064572D98F178893AF8009AE9DD28C3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T68680E827064572D98F178893AF8009AE9DD28C3_H
#ifndef FUNC_2_T20060910AB1AA529DD909B02DFCE3DD030A90B8D_H
#define FUNC_2_T20060910AB1AA529DD909B02DFCE3DD030A90B8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>
struct  Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_2_T20060910AB1AA529DD909B02DFCE3DD030A90B8D_H
#ifndef _GETIIDS_TC74FAB569F2A25A3D6320814BD57E8F68D180125_H
#define _GETIIDS_TC74FAB569F2A25A3D6320814BD57E8F68D180125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IInspectableVftbl__GetIids
struct  _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETIIDS_TC74FAB569F2A25A3D6320814BD57E8F68D180125_H
#ifndef _GETRUNTIMECLASSNAME_TD19064E37C971137DCC14E0E5CDBA18AB824EC65_H
#define _GETRUNTIMECLASSNAME_TD19064E37C971137DCC14E0E5CDBA18AB824EC65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IInspectableVftbl__GetRuntimeClassName
struct  _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETRUNTIMECLASSNAME_TD19064E37C971137DCC14E0E5CDBA18AB824EC65_H
#ifndef _GETTRUSTLEVEL_T16CD18172442138064EEB9DDD0BBCFCCB9774823_H
#define _GETTRUSTLEVEL_T16CD18172442138064EEB9DDD0BBCFCCB9774823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IInspectableVftbl__GetTrustLevel
struct  _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETTRUSTLEVEL_T16CD18172442138064EEB9DDD0BBCFCCB9774823_H
#ifndef _GETMANY_TA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_H
#define _GETMANY_TA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfEnum__GetMany
struct  _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETMANY_TA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_H
#ifndef _MOVENEXT_TAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_H
#define _MOVENEXT_TAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfEnum__MoveNext
struct  _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _MOVENEXT_TAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_H
#ifndef _GETMANY_TB17FF9B56B9CF856B96B95C40761CB1D943C644A_H
#define _GETMANY_TB17FF9B56B9CF856B96B95C40761CB1D943C644A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfObject__GetMany
struct  _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETMANY_TB17FF9B56B9CF856B96B95C40761CB1D943C644A_H
#ifndef _MOVENEXT_T3F83F4F7199CBD8766B68D96116403C576E8CB30_H
#define _MOVENEXT_T3F83F4F7199CBD8766B68D96116403C576E8CB30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IIteratorOfObject__MoveNext
struct  _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _MOVENEXT_T3F83F4F7199CBD8766B68D96116403C576E8CB30_H
#ifndef _ADDREF_T12F6E1B130DAB27D2A7D832242C834B8D186BCFA_H
#define _ADDREF_T12F6E1B130DAB27D2A7D832242C834B8D186BCFA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IUnknownVftbl__AddRef
struct  _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ADDREF_T12F6E1B130DAB27D2A7D832242C834B8D186BCFA_H
#ifndef _QUERYINTERFACE_TED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_H
#define _QUERYINTERFACE_TED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IUnknownVftbl__QueryInterface
struct  _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _QUERYINTERFACE_TED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_H
#ifndef _RELEASE_T354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_H
#define _RELEASE_T354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IUnknownVftbl__Release
struct  _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _RELEASE_T354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_H
#ifndef _GETAT_T07668D4ACBFAB02451A51C07C804DB91B77BD44C_H
#define _GETAT_T07668D4ACBFAB02451A51C07C804DB91B77BD44C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfEnum__GetAt
struct  _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETAT_T07668D4ACBFAB02451A51C07C804DB91B77BD44C_H
#ifndef _GETMANY_T8A2FFDB523D170BA667C5C684AD9D5854BF29696_H
#define _GETMANY_T8A2FFDB523D170BA667C5C684AD9D5854BF29696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfEnum__GetMany
struct  _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETMANY_T8A2FFDB523D170BA667C5C684AD9D5854BF29696_H
#ifndef _INDEXOF_T1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_H
#define _INDEXOF_T1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfEnum__IndexOf
struct  _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _INDEXOF_T1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_H
#ifndef _GETAT_T663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_H
#define _GETAT_T663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfObject__GetAt
struct  _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETAT_T663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_H
#ifndef _GETMANY_TEAB740BE5A2905849D9AD41532824523A283E3BC_H
#define _GETMANY_TEAB740BE5A2905849D9AD41532824523A283E3BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfObject__GetMany
struct  _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GETMANY_TEAB740BE5A2905849D9AD41532824523A283E3BC_H
#ifndef _INDEXOF_T7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_H
#define _INDEXOF_T7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop.IVectorViewOfObject__IndexOf
struct  _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _INDEXOF_T7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_H
#ifndef _GET_PROPERTYASBOOL_T88143D7CF39AE3D75F67EABA072B7D0E8167BF00_H
#define _GET_PROPERTYASBOOL_T88143D7CF39AE3D75F67EABA072B7D0E8167BF00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._get_PropertyAsBool
struct  _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GET_PROPERTYASBOOL_T88143D7CF39AE3D75F67EABA072B7D0E8167BF00_H
#ifndef _GET_PROPERTYASDOUBLE_T4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_H
#define _GET_PROPERTYASDOUBLE_T4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._get_PropertyAsDouble
struct  _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GET_PROPERTYASDOUBLE_T4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_H
#ifndef _GET_PROPERTYASENUM_T0257BEDDE1C77D21D218D061D82E17FD70AC297E_H
#define _GET_PROPERTYASENUM_T0257BEDDE1C77D21D218D061D82E17FD70AC297E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._get_PropertyAsEnum
struct  _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GET_PROPERTYASENUM_T0257BEDDE1C77D21D218D061D82E17FD70AC297E_H
#ifndef _GET_PROPERTYASOBJECT_T9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_H
#define _GET_PROPERTYASOBJECT_T9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._get_PropertyAsObject
struct  _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GET_PROPERTYASOBJECT_T9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_H
#ifndef _GET_PROPERTYASUINT_TCFA62F9320D71C6B553719CDC0739A4CE48952CB_H
#define _GET_PROPERTYASUINT_TCFA62F9320D71C6B553719CDC0739A4CE48952CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._get_PropertyAsUInt
struct  _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _GET_PROPERTYASUINT_TCFA62F9320D71C6B553719CDC0739A4CE48952CB_H
#ifndef _PUT_PROPERTYASBOOL_T94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_H
#define _PUT_PROPERTYASBOOL_T94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._put_PropertyAsBool
struct  _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _PUT_PROPERTYASBOOL_T94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_H
#ifndef _PUT_PROPERTYASENUM_T3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_H
#define _PUT_PROPERTYASENUM_T3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.Interop._put_PropertyAsEnum
struct  _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _PUT_PROPERTYASENUM_T3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_H
#ifndef OBJECTREFERENCE_1_T2B8210F0D5846420094AC594DEF46E689B2097CD_H
#define OBJECTREFERENCE_1_T2B8210F0D5846420094AC594DEF46E689B2097CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl>
struct  ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD, ___Vftbl_4)); }
	inline Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_T2B8210F0D5846420094AC594DEF46E689B2097CD_H
#ifndef OBJECTREFERENCE_1_T897903BED7B994E39B08B1B9B248EA821287B901_H
#define OBJECTREFERENCE_1_T897903BED7B994E39B08B1B9B248EA821287B901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl>
struct  ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901, ___Vftbl_4)); }
	inline Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_T897903BED7B994E39B08B1B9B248EA821287B901_H
#ifndef OBJECTREFERENCE_1_TBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62_H
#define OBJECTREFERENCE_1_TBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl>
struct  ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62, ___Vftbl_4)); }
	inline Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62_H
#ifndef OBJECTREFERENCE_1_TA33DC8CB415CD15BAD5E43BA138A64B960686683_H
#define OBJECTREFERENCE_1_TA33DC8CB415CD15BAD5E43BA138A64B960686683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl>
struct  ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683, ___Vftbl_4)); }
	inline Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TA33DC8CB415CD15BAD5E43BA138A64B960686683_H
#ifndef OBJECTREFERENCE_1_TEA17460F4313A7E477FDD7301EF533F27F102528_H
#define OBJECTREFERENCE_1_TEA17460F4313A7E477FDD7301EF533F27F102528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl>
struct  ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528, ___Vftbl_4)); }
	inline Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TEA17460F4313A7E477FDD7301EF533F27F102528_H
#ifndef OBJECTREFERENCE_1_TF057F2E615F963666DA1BECC306E2E34B5BB0102_H
#define OBJECTREFERENCE_1_TF057F2E615F963666DA1BECC306E2E34B5BB0102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl>
struct  ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102, ___Vftbl_4)); }
	inline Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TF057F2E615F963666DA1BECC306E2E34B5BB0102_H
#ifndef OBJECTREFERENCE_1_T489BE98192E7CA6DE39E4C1671535174A0D2B5F9_H
#define OBJECTREFERENCE_1_T489BE98192E7CA6DE39E4C1671535174A0D2B5F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl>
struct  ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9, ___Vftbl_4)); }
	inline Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_T489BE98192E7CA6DE39E4C1671535174A0D2B5F9_H
#ifndef OBJECTREFERENCE_1_T96EAD201E4763D8A19320F0F558BD9B4967D0062_H
#define OBJECTREFERENCE_1_T96EAD201E4763D8A19320F0F558BD9B4967D0062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl>
struct  ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062, ___Vftbl_4)); }
	inline Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_T96EAD201E4763D8A19320F0F558BD9B4967D0062_H
#ifndef OBJECTREFERENCE_1_TC32EE314501F532289770E1B3CEFEF1AD0733ABF_H
#define OBJECTREFERENCE_1_TC32EE314501F532289770E1B3CEFEF1AD0733ABF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl>
struct  ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF, ___Vftbl_4)); }
	inline Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TC32EE314501F532289770E1B3CEFEF1AD0733ABF_H
#ifndef OBJECTREFERENCE_1_T28DA373EE505C8F3F300D370F9766734030471DA_H
#define OBJECTREFERENCE_1_T28DA373EE505C8F3F300D370F9766734030471DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct  ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ___Vftbl_4)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_T28DA373EE505C8F3F300D370F9766734030471DA_H
#ifndef OBJECTREFERENCE_1_TC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D_H
#define OBJECTREFERENCE_1_TC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>
struct  ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D, ___Vftbl_4)); }
	inline IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D_H
#ifndef OBJECTREFERENCE_1_TB6CBD6616B6B9E003821025120F69188584ABFBA_H
#define OBJECTREFERENCE_1_TB6CBD6616B6B9E003821025120F69188584ABFBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>
struct  ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA, ___Vftbl_4)); }
	inline IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8  value)
	{
		___Vftbl_4 = value;
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREFERENCE_1_TB6CBD6616B6B9E003821025120F69188584ABFBA_H
#ifndef CREATET_T3250600714636DA2BB6B9D4AE4B44DC803D4D44B_H
#define CREATET_T3250600714636DA2BB6B9D4AE4B44DC803D4D44B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WinRT._VectorOfObjectBase`2_CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>
struct  CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATET_T3250600714636DA2BB6B9D4AE4B44DC803D4D44B_H
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled);
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled);
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled);
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled);
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled);
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled);
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled);

// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * p0, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t p1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// System.Void WinRT._VectorOfObjectBase`2/CreateT<System.Object,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void CreateT__ctor_mAAD9F48B0AEE5480568468352193CC7C319F6FBF_gshared (CreateT_t5C60B0BD64B56AF6D335989F084A1D8617600AA1 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void WinRT.VectorViewOfObject`1<System.Object>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
extern "C" IL2CPP_METHOD_ATTR void VectorViewOfObject_1__ctor_mDCCBE881B0C60FEF13D81803AA79D97D0755E0BE_gshared (VectorViewOfObject_1_t546EFC1D30D5A0982A9F0B92CCC4513054E286B4 * __this, ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * p0, Guid_t  p1, CreateT_t5C60B0BD64B56AF6D335989F084A1D8617600AA1 * p2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_2__ctor_m000DFD3F52C37F11E8AA5CF90B81B17F266B6067_gshared (Func_2_t4EB50B39BAD32AB6DABCD5343882A7E235C98E6A * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void WinRT.VectorViewOfEnum`1<System.Int32Enum>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
extern "C" IL2CPP_METHOD_ATTR void VectorViewOfEnum_1__ctor_m22450DB540CA4EF59676D123226F562E7C67D271_gshared (VectorViewOfEnum_1_t82E75510BBA0CF43971341BB2E7928719C14420C * __this, ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * p0, Guid_t  p1, Func_2_t4EB50B39BAD32AB6DABCD5343882A7E235C98E6A * p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * WeakLazy_1_get_Value_m9C734020C8CF6427E030BA433248C0A56A483C8C_gshared (WeakLazy_1_t4AA9EE7CC9852F19E3BCEDBC23CC837BF094E3BB * __this, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_m765BF27F43BF1B6DFCFF4E2524C1D190B6C8C027_gshared (WeakLazy_1_t4AA9EE7CC9852F19E3BCEDBC23CC837BF094E3BB * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m61243B6239827A0C19B1635F0431C483010569B8 (Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, p0, p1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mAFB7A1180032167FB345FFB53C7B106888E9D056 (Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * __this, Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * p0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 *, Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 *, const RuntimeMethod*))Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared)(__this, p0, method);
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_mC40456499C282C02D6955A52F2FBEB68B71D1EFD (IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6>::get_Value()
inline IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * Lazy_1_get_Value_mB8CD4F2934A56C01DA46835F042AE84F9763ECF2 (Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * (*) (Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 *, const RuntimeMethod*))Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * IHolographicCamera6_get_ViewConfiguration_mB28F3B0EB068E8A3146030DC0DBEA6EEEB68C167 (IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
extern "C" IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_mC192CD7502D806E77789E5BAD5D41E3AA3089DD3 (HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * __this, IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * IHolographicCamera6_op_Implicit_m4874D82752E00463B7DFC26589D354F38251FDB1 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * IHolographicCameraPose_get_HolographicCamera_m847D18B7AC1FCC0E983B400F5F8C0C0346BF9283 (IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
extern "C" IL2CPP_METHOD_ATTR void HolographicCamera__ctor_m83D12D1ED9217F2C727EEA157A7D39CBDFB3BB59 (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * __this, IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * ___interface0, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m95D0768BE508AF36FED6C0C17EE0A5B96B446529 (Func_1_t232058B9320628F4E438C234B8E996107E09C632 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t232058B9320628F4E438C234B8E996107E09C632 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, p0, p1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mE9287D418946E7CBFF21171FB6172BB854B1D6D9 (Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * __this, Func_1_t232058B9320628F4E438C234B8E996107E09C632 * p0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 *, Func_1_t232058B9320628F4E438C234B8E996107E09C632 *, const RuntimeMethod*))Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared)(__this, p0, method);
}
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4>::get_Value()
inline IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * Lazy_1_get_Value_m76C2F3ADF62299F04400D4D7F69670890ABC263F (Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * (*) (Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 *, const RuntimeMethod*))Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared)(__this, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF20670A4DE848D2FB8C03FC84FB967F2489DF9DB (IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * __this, int32_t ___value0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * IHolographicCameraRenderingParameters4_op_Implicit_m50391341CE1C7B14FE32D557E627D6B87ADD7F90 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774 (const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
inline ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F_gshared)(p0, p1, method);
}
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>()
inline ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * IHolographicFrame_op_Implicit_m18AB423F59D7A0306663471FF5496C04112AF181 (ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
extern "C" IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m2C31CA8C42B36B4828007163A5B843AF08753136 (HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * __this, IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * IHolographicFrame_GetRenderingParameters_m5CC1901DA30B5C11726F3416D225689B6CD52987 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * ___cameraPose0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
extern "C" IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m3CFB6494AB26EC20309091AABD6F7EDF98A34464 (HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * __this, IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * ___interface0, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
extern "C" IL2CPP_METHOD_ATTR IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * IHolographicFrame_get_CurrentPrediction_mE5EC257ACD86F2A1D63A322AEC02DC69B94E4E61 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
extern "C" IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m7819DF4049279C01220E94572E7FC92744DDD25D (HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 * __this, IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * ___interface0, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_m2D8DC8EAEB3C09086A088162966899EE2B26F493 (IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m1B102E7BECE834D438AA91B86245EF5D14E57536 (Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, p0, p1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_m309A61D92923E96BA5FF85A680CF31BF07BEC32A (Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * __this, Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * p0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 *, Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 *, const RuntimeMethod*))Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared)(__this, p0, method);
}
// !0 System.Lazy`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2>::get_Value()
inline IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * Lazy_1_get_Value_mC5457483F16721D84567FD0BA28A8B6756DC3B0E (Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * __this, const RuntimeMethod* method)
{
	return ((  IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * (*) (Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 *, const RuntimeMethod*))Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared)(__this, method);
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_mA4F6C1E813CEF6CFE0F42E5D2FF44D60BEE0FA90 (IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * __this, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * IHolographicViewConfiguration2_op_Implicit_mCCB82F40EA0CE40B6B040C7E889D069FF8128A0F (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_mBD28234EDD6CFA88D1EE30D097B7B7DCCE1AC59F (IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * __this, ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m6FF10897765BC41D255487DA50F93A92F89ABB39 (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102 (int32_t p0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>()
inline ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * IHolographicCamera6_op_Implicit_m2887AA5D8A95FDC25CED8551EC394B800F1886A3 (ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_m4523E2392A204554697B4BB51118113CC3AAAB9F (IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * __this, ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B_gshared)(p0, p1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * IHolographicViewConfiguration_op_Implicit_m96163B222E23B2D408AFF2A3602587EABCA6743A (ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>()
inline ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * IHolographicCameraPose_op_Implicit_m248660B6A4B88590702CF4399DD394DB8145EF04 (ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mDFD9D4E6FF55D8D564E879A9A6357AFE3D1B4D47 (IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * __this, ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B_gshared)(p0, p1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * IHolographicCamera_op_Implicit_mF55053566407A76D2DC6007508F45CBCF880E702 (ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_mAA3A15587043C562B198442D5A1B1CA4D0BA0104 (IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * __this, ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>()
inline ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * IHolographicCameraRenderingParameters4_op_Implicit_m8BD336CFDA11D4F5641418583490685E02AF7C91 (ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_m4DBB3E29A513FBB44070248D9518F4F2AC8E5175 (IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * __this, ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_m5142CF89DEDADF3CE0F571F78AA7A4FFF40A4813 (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_mFA4B55ACCB4A107A13053B8E4B16E3EA5E6224D9 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * ___obj0, const RuntimeMethod* method);
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl/_GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_mF23180CA588E56E560AF03421E07C8AEF77EDDD0 (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1_gshared)(p0, p1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * IHolographicCameraRenderingParameters_op_Implicit_m6A1FB333291FCE59BDE0BC0E52BE7E9A657B2057 (ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC_gshared)(p0, p1, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * IHolographicFramePrediction_op_Implicit_m1ECB52BBCF259B07F6E1F657F7059698F450B07D (ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_m5354E184F9E56BE4656990E58DBAACDF585A86AD (IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * __this, ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F_gshared)(p0, p1, method);
}
// System.Void WinRT._VectorOfObjectBase`2/CreateT<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose,WinRT.Interop.IVectorViewOfObject>::.ctor(System.Object,System.IntPtr)
inline void CreateT__ctor_m5AB13B74224619315231CD72AA858CA2D80F89A6 (CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B *, RuntimeObject *, intptr_t, const RuntimeMethod*))CreateT__ctor_mAAD9F48B0AEE5480568468352193CC7C319F6FBF_gshared)(__this, p0, p1, method);
}
// System.Void WinRT.VectorViewOfObject`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfObject>,System.Guid,WinRT._VectorOfObjectBase`2/CreateT<T,WinRT.Interop.IVectorViewOfObject>)
inline void VectorViewOfObject_1__ctor_mC21F7521ECEC40EE7832F550377D01CABCFE00A8 (VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6 * __this, ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * p0, Guid_t  p1, CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * p2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6 *, ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA *, Guid_t , CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B *, const RuntimeMethod*))VectorViewOfObject_1__ctor_mDCCBE881B0C60FEF13D81803AA79D97D0755E0BE_gshared)(__this, p0, p1, p2, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16CEB7535DC10318A148EB711DBD6897B7136E9E (U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * __this, const RuntimeMethod* method);
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * IHolographicCameraPose_op_Implicit_mF02F441C3D728FD28A2F632A4C90F61F81D1DA19 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
extern "C" IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_mDE2AC3E08CFFBA2D8AFE41D15A380003F646CA4A (HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * __this, IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * ___interface0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_mD9A968B2DE052A23AFB5358F3CFD4665EA420B61 (IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * __this, ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>()
inline ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12_gshared)(__this, method);
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * IHolographicViewConfiguration2_op_Implicit_m9CA25F4ABA83C5755F350B819DFB30D84144961F (ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_mB5FC1CC55EF1795C32635D6FD7CA51E7300476B4 (IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * __this, ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * ___obj0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  p0, intptr_t* p1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB_gshared)(p0, p1, method);
}
// System.Void System.Func`2<System.Int32,Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEF6510D5F8C783303D85F1E63D3AC247EC0C508F (Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m000DFD3F52C37F11E8AA5CF90B81B17F266B6067_gshared)(__this, p0, p1, method);
}
// System.Void WinRT.VectorViewOfEnum`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IVectorViewOfEnum>,System.Guid,System.Func`2<System.Int32,T>)
inline void VectorViewOfEnum_1__ctor_mF7DDC009945773B2B1BC7DF2C59E8481FF7D4C40 (VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814 * __this, ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * p0, Guid_t  p1, Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * p2, const RuntimeMethod* method)
{
	((  void (*) (VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814 *, ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D *, Guid_t , Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D *, const RuntimeMethod*))VectorViewOfEnum_1__ctor_m22450DB540CA4EF59676D123226F562E7C67D271_gshared)(__this, p0, p1, p2, method);
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD3BACBCE1D18070438C3EA58A6E9D09DFEB88E9 (U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * __this, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079 (Guid_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_mF04FD7B1011BFD0419BEA2D3C77BDD51CAB0725D (Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void WinRT.ModuleReference::Release()
extern "C" IL2CPP_METHOD_ATTR void ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1 (int32_t p0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t p0, const RuntimeMethod* method);
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
extern "C" IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m5A26B972DADB09E3147902042B7E991EFF62D6BE (const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F (int32_t* p0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE (int32_t* p0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Platform_FreeLibrary_m9B336A9ADBAFD3080FF9071B69D49ACB8A9BB03F (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_mE730477D4A87C0E788A075D80907200EDA3CC8B4 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
extern "C" IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* p0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_m7C88C0999A166E61A38FF25527CD5E339F6AC590 (intptr_t p0, const RuntimeMethod* method);
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m031858436E51E64EB0604B3F779E052480537F7A (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method);
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mCDDC6E927CC012D0FC65E2830ECA9C137224530C (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_m0CE9CAB6A80B7AB9BEB814CAC0A1B0C8C5B7C4F8 (const RuntimeMethod* method);
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_mA58C53A983D9AE8C8C71EC6A0F62774A978A5F0C (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m422005853FD3067CD5D39BC9A224E0A2D7D28A84 (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_m5975664B0AB03A19BDA9FB121C8BBE7D8E1C5ED8 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_m1FACFD96C3D5B6FB88831D23547FF567817EDABC (intptr_t ___hstring0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_mF4E03B3508326CCA86A4C10957D80F9CC677660E (const RuntimeMethod* method);
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m96159702EB7BD2A449001DC4F1C6BD4FA20B29FA (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m99D69CCEA95B56C739344F948F68888E39BA705E (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_mB2A2CBFBA80DA97D79E4E2D0F22EB165541B2C71 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mDBFD40AB93B3A03BCEB09FF470E9D0CDD481FB4A (intptr_t ___hstring0, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098 (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * (*) (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *, const RuntimeMethod*))WeakLazy_1_get_Value_m9C734020C8CF6427E030BA433248C0A56A483C8C_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
extern "C" IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m82A00ADB1DCDC541C32020FA5B4EDCB0A1879165 (const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_Allocate_m6926B6152F1E838691DD663F2779139912A9A308 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_m5E8127CACEE574E7A8BD1141C5F7BE7E5D4DACCF (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *, const RuntimeMethod*))WeakLazy_1__ctor_m765BF27F43BF1B6DFCFF4E2524C1D190B6C8C027_gshared)(__this, method);
}
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCamera::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCamera)
extern "C" IL2CPP_METHOD_ATTR void HolographicCamera__ctor_m83D12D1ED9217F2C727EEA157A7D39CBDFB3BB59 (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * __this, IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicCamera__ctor_m83D12D1ED9217F2C727EEA157A7D39CBDFB3BB59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 * L_1 = (Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613 *)il2cpp_codegen_object_new(Func_1_t83285DFEB0C073A1FC3865203DFFB7D47246C613_il2cpp_TypeInfo_var);
		Func_1__ctor_m61243B6239827A0C19B1635F0431C483010569B8(L_1, __this, (intptr_t)((intptr_t)HolographicCamera_U3C_ctorU3Eb__2_0_mD6C2683E57D12259DE8FB8B08C71E6720FBE7DDD_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m61243B6239827A0C19B1635F0431C483010569B8_RuntimeMethod_var);
		Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * L_2 = (Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 *)il2cpp_codegen_object_new(Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mAFB7A1180032167FB345FFB53C7B106888E9D056(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mAFB7A1180032167FB345FFB53C7B106888E9D056_RuntimeMethod_var);
		__this->set__interface6_1(L_2);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t HolographicCamera_get_Id_m9B17E95314C9334FFE64A356CAEF0BE5981895A2 (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * __this, const RuntimeMethod* method)
{
	{
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		uint32_t L_1 = IHolographicCamera_get_Id_mC40456499C282C02D6955A52F2FBEB68B71D1EFD(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.HolographicCamera::get_ViewConfiguration()
extern "C" IL2CPP_METHOD_ATTR HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * HolographicCamera_get_ViewConfiguration_mF8B3E1AE75AE8DB716DDE3BEA3399D0E295F37CD (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicCamera_get_ViewConfiguration_mF8B3E1AE75AE8DB716DDE3BEA3399D0E295F37CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_tFDEF0C2B78203E5067F4716737F16B9118FB0956 * L_0 = __this->get__interface6_1();
		NullCheck(L_0);
		IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * L_1 = Lazy_1_get_Value_mB8CD4F2934A56C01DA46835F042AE84F9763ECF2(L_0, /*hidden argument*/Lazy_1_get_Value_mB8CD4F2934A56C01DA46835F042AE84F9763ECF2_RuntimeMethod_var);
		NullCheck(L_1);
		IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * L_2 = IHolographicCamera6_get_ViewConfiguration_mB28F3B0EB068E8A3146030DC0DBEA6EEEB68C167(L_1, /*hidden argument*/NULL);
		HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * L_3 = (HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 *)il2cpp_codegen_object_new(HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6_il2cpp_TypeInfo_var);
		HolographicViewConfiguration__ctor_mC192CD7502D806E77789E5BAD5D41E3AA3089DD3(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.HolographicCamera::<.ctor>b__2_0()
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * HolographicCamera_U3C_ctorU3Eb__2_0_mD6C2683E57D12259DE8FB8B08C71E6720FBE7DDD (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * __this, const RuntimeMethod* method)
{
	{
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_1 = L_0->get__obj_0();
		IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * L_2 = IHolographicCamera6_op_Implicit_m4874D82752E00463B7DFC26589D354F38251FDB1(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
extern "C" IL2CPP_METHOD_ATTR void HolographicCameraPose__ctor_mDE2AC3E08CFFBA2D8AFE41D15A380003F646CA4A (HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * __this, IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCamera Microsoft.Windows.Graphics.Holographic.HolographicCameraPose::get_HolographicCamera()
extern "C" IL2CPP_METHOD_ATTR HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * HolographicCameraPose_get_HolographicCamera_m8E744C5D426841DAF09C4B8086DD80AC0E5CB07C (HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicCameraPose_get_HolographicCamera_m8E744C5D426841DAF09C4B8086DD80AC0E5CB07C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_1 = IHolographicCameraPose_get_HolographicCamera_m847D18B7AC1FCC0E983B400F5F8C0C0346BF9283(L_0, /*hidden argument*/NULL);
		HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 * L_2 = (HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74 *)il2cpp_codegen_object_new(HolographicCamera_tA958E13A2E6A57C23314959C51AF781B838A0D74_il2cpp_TypeInfo_var);
		HolographicCamera__ctor_m83D12D1ED9217F2C727EEA157A7D39CBDFB3BB59(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters)
extern "C" IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters__ctor_m3CFB6494AB26EC20309091AABD6F7EDF98A34464 (HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * __this, IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicCameraRenderingParameters__ctor_m3CFB6494AB26EC20309091AABD6F7EDF98A34464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_t232058B9320628F4E438C234B8E996107E09C632 * L_1 = (Func_1_t232058B9320628F4E438C234B8E996107E09C632 *)il2cpp_codegen_object_new(Func_1_t232058B9320628F4E438C234B8E996107E09C632_il2cpp_TypeInfo_var);
		Func_1__ctor_m95D0768BE508AF36FED6C0C17EE0A5B96B446529(L_1, __this, (intptr_t)((intptr_t)HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m087519626FC6220D04E634CD1F5854595B26ADEC_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m95D0768BE508AF36FED6C0C17EE0A5B96B446529_RuntimeMethod_var);
		Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * L_2 = (Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 *)il2cpp_codegen_object_new(Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mE9287D418946E7CBFF21171FB6172BB854B1D6D9(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mE9287D418946E7CBFF21171FB6172BB854B1D6D9_RuntimeMethod_var);
		__this->set__interface4_1(L_2);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
extern "C" IL2CPP_METHOD_ATTR void HolographicCameraRenderingParameters_set_DepthReprojectionMethod_mC4945ECBD1882EE2EBE8220E5C9DB46D539070A7 (HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicCameraRenderingParameters_set_DepthReprojectionMethod_mC4945ECBD1882EE2EBE8220E5C9DB46D539070A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_t0C9B4A0E460B824A303CCD3ABD886A05A24B0953 * L_0 = __this->get__interface4_1();
		NullCheck(L_0);
		IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * L_1 = Lazy_1_get_Value_m76C2F3ADF62299F04400D4D7F69670890ABC263F(L_0, /*hidden argument*/Lazy_1_get_Value_m76C2F3ADF62299F04400D4D7F69670890ABC263F_RuntimeMethod_var);
		int32_t L_2 = ___value0;
		NullCheck(L_1);
		IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF20670A4DE848D2FB8C03FC84FB967F2489DF9DB(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters::<.ctor>b__2_0()
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * HolographicCameraRenderingParameters_U3C_ctorU3Eb__2_0_m087519626FC6220D04E634CD1F5854595B26ADEC (HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * __this, const RuntimeMethod* method)
{
	{
		IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * L_1 = L_0->get__obj_0();
		IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * L_2 = IHolographicCameraRenderingParameters4_op_Implicit_m50391341CE1C7B14FE32D557E627D6B87ADD7F90(L_1, /*hidden argument*/NULL);
		return L_2;
	}
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
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFrame::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFrame)
extern "C" IL2CPP_METHOD_ATTR void HolographicFrame__ctor_m2C31CA8C42B36B4828007163A5B843AF08753136 (HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * __this, IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFrame Microsoft.Windows.Graphics.Holographic.HolographicFrame::FromNativePtr(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * HolographicFrame_FromNativePtr_mB63E93A6519945DFF65FBD0FEDDF9A018DD468D5 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicFrame_FromNativePtr_mB63E93A6519945DFF65FBD0FEDDF9A018DD468D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774(/*hidden argument*/NULL);
		intptr_t L_1 = ___thisPtr0;
		ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * L_2 = ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F(L_0, (intptr_t)L_1, /*hidden argument*/ObjectReference_1_FromNativePtr_mBB2F3D4F40BEB00012D3C585F769F9A5502A8E4F_RuntimeMethod_var);
		NullCheck(L_2);
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_3 = IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55(L_2, /*hidden argument*/IObjectReference_As_TisVftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_mA8588C6E751A2A62D2BC2777A9542E5886E7CD55_RuntimeMethod_var);
		IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * L_4 = IHolographicFrame_op_Implicit_m18AB423F59D7A0306663471FF5496C04112AF181(L_3, /*hidden argument*/NULL);
		HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * L_5 = (HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 *)il2cpp_codegen_object_new(HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17_il2cpp_TypeInfo_var);
		HolographicFrame__ctor_m2C31CA8C42B36B4828007163A5B843AF08753136(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.HolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.HolographicCameraPose)
extern "C" IL2CPP_METHOD_ATTR HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * HolographicFrame_GetRenderingParameters_mD559704CBCC03AE33B946B7CC2F21BA3B84AA36B (HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * __this, HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * ___cameraPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicFrame_GetRenderingParameters_mD559704CBCC03AE33B946B7CC2F21BA3B84AA36B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * L_0 = __this->get__interface_0();
		HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * L_1 = ___cameraPose0;
		NullCheck(L_1);
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_2 = L_1->get__interface_0();
		NullCheck(L_0);
		IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * L_3 = IHolographicFrame_GetRenderingParameters_m5CC1901DA30B5C11726F3416D225689B6CD52987(L_0, L_2, /*hidden argument*/NULL);
		HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB * L_4 = (HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB *)il2cpp_codegen_object_new(HolographicCameraRenderingParameters_t379705AF2EBB949BA5CE7837BC13627218E940DB_il2cpp_TypeInfo_var);
		HolographicCameraRenderingParameters__ctor_m3CFB6494AB26EC20309091AABD6F7EDF98A34464(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction Microsoft.Windows.Graphics.Holographic.HolographicFrame::get_CurrentPrediction()
extern "C" IL2CPP_METHOD_ATTR HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 * HolographicFrame_get_CurrentPrediction_m619909CE24E3F619BDF65D4957269524520BCDB6 (HolographicFrame_tF25757D2371405FC61221E3F1FD5073430822F17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicFrame_get_CurrentPrediction_m619909CE24E3F619BDF65D4957269524520BCDB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * L_1 = IHolographicFrame_get_CurrentPrediction_mE5EC257ACD86F2A1D63A322AEC02DC69B94E4E61(L_0, /*hidden argument*/NULL);
		HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 * L_2 = (HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 *)il2cpp_codegen_object_new(HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81_il2cpp_TypeInfo_var);
		HolographicFramePrediction__ctor_m7819DF4049279C01220E94572E7FC92744DDD25D(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction)
extern "C" IL2CPP_METHOD_ATTR void HolographicFramePrediction__ctor_m7819DF4049279C01220E94572E7FC92744DDD25D (HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 * __this, IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.HolographicFramePrediction::get_CameraPoses()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HolographicFramePrediction_get_CameraPoses_m04AADF0ECAA32CA5703C03E6E3DEFB6429CD51F6 (HolographicFramePrediction_t7038F2EF46EE71DFC80019DD7BD9C262C1E2FE81 * __this, const RuntimeMethod* method)
{
	{
		IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = IHolographicFramePrediction_get_CameraPoses_m2D8DC8EAEB3C09086A088162966899EE2B26F493(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::.ctor(Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration)
extern "C" IL2CPP_METHOD_ATTR void HolographicViewConfiguration__ctor_mC192CD7502D806E77789E5BAD5D41E3AA3089DD3 (HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * __this, IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * ___interface0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicViewConfiguration__ctor_mC192CD7502D806E77789E5BAD5D41E3AA3089DD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 * L_1 = (Func_1_t68680E827064572D98F178893AF8009AE9DD28C3 *)il2cpp_codegen_object_new(Func_1_t68680E827064572D98F178893AF8009AE9DD28C3_il2cpp_TypeInfo_var);
		Func_1__ctor_m1B102E7BECE834D438AA91B86245EF5D14E57536(L_1, __this, (intptr_t)((intptr_t)HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC65711980C62B1D972054A8A717354B19F31EA72_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m1B102E7BECE834D438AA91B86245EF5D14E57536_RuntimeMethod_var);
		Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * L_2 = (Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 *)il2cpp_codegen_object_new(Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918_il2cpp_TypeInfo_var);
		Lazy_1__ctor_m309A61D92923E96BA5FF85A680CF31BF07BEC32A(L_2, L_1, /*hidden argument*/Lazy_1__ctor_m309A61D92923E96BA5FF85A680CF31BF07BEC32A_RuntimeMethod_var);
		__this->set__interface2_1(L_2);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::get_SupportedDepthReprojectionMethods()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* HolographicViewConfiguration_get_SupportedDepthReprojectionMethods_mD33BD7BE21EC496335DC1BCD75E3EF0441DE7071 (HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HolographicViewConfiguration_get_SupportedDepthReprojectionMethods_mD33BD7BE21EC496335DC1BCD75E3EF0441DE7071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lazy_1_t8CE5D7FA7E3ED30A9A6543B9FBE08B1DD9D28918 * L_0 = __this->get__interface2_1();
		NullCheck(L_0);
		IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * L_1 = Lazy_1_get_Value_mC5457483F16721D84567FD0BA28A8B6756DC3B0E(L_0, /*hidden argument*/Lazy_1_get_Value_mC5457483F16721D84567FD0BA28A8B6756DC3B0E_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_2 = IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_mA4F6C1E813CEF6CFE0F42E5D2FF44D60BEE0FA90(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.HolographicViewConfiguration::<.ctor>b__2_0()
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * HolographicViewConfiguration_U3C_ctorU3Eb__2_0_mC65711980C62B1D972054A8A717354B19F31EA72 (HolographicViewConfiguration_tD96CE00020067B073EB1E053C3D1706F4B15D1B6 * __this, const RuntimeMethod* method)
{
	{
		IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * L_0 = __this->get__interface_0();
		NullCheck(L_0);
		ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * L_1 = L_0->get__obj_0();
		IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * L_2 = IHolographicViewConfiguration2_op_Implicit_mCCB82F40EA0CE40B6B040C7E889D069FF8128A0F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCamera::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * IHolographicCamera_op_Implicit_mF55053566407A76D2DC6007508F45CBCF880E702 (ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCamera_op_Implicit_mF55053566407A76D2DC6007508F45CBCF880E702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_0 = ___obj0;
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_1 = (IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 *)il2cpp_codegen_object_new(IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725_il2cpp_TypeInfo_var);
		IHolographicCamera__ctor_mBD28234EDD6CFA88D1EE30D097B7B7DCCE1AC59F(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCamera__ctor_mBD28234EDD6CFA88D1EE30D097B7B7DCCE1AC59F (IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * __this, ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.UInt32 Microsoft.Windows.Graphics.Holographic.IHolographicCamera::get_Id()
extern "C" IL2CPP_METHOD_ATTR uint32_t IHolographicCamera_get_Id_mC40456499C282C02D6955A52F2FBEB68B71D1EFD (IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCamera_get_Id_mC40456499C282C02D6955A52F2FBEB68B71D1EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * L_2 = L_1->get_get_Id_5();
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsUInt_Invoke_m6FF10897765BC41D255487DA50F93A92F89ABB39(L_2, (intptr_t)L_4, (uint32_t*)(uint32_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		uint32_t L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera_Vftbl
const Il2CppGuid Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342::CLSID = { 0xe4e98445, 0x9bed, 0x4980, 0x9b, 0xa0, 0xe8, 0x76, 0x80, 0xd1, 0xcb, 0x74 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_pinvoke(const Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342& unmarshaled, Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.get_get_RenderTargetSize_1();
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.get_get_ViewportScaleFactor_2();
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.get_put_ViewportScaleFactor_3();
	marshaled.___get_IsStereo_4 = unmarshaled.get_get_IsStereo_4();
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_5()));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.get_SetNearPlaneDistance_6();
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.get_SetFarPlaneDistance_7();
}
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_pinvoke_back(const Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_pinvoke& marshaled, Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_RenderTargetSize_temp_1;
	memset(&unmarshaled_get_RenderTargetSize_temp_1, 0, sizeof(unmarshaled_get_RenderTargetSize_temp_1));
	unmarshaled_get_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.set_get_RenderTargetSize_1(unmarshaled_get_RenderTargetSize_temp_1);
	intptr_t unmarshaled_get_ViewportScaleFactor_temp_2;
	memset(&unmarshaled_get_ViewportScaleFactor_temp_2, 0, sizeof(unmarshaled_get_ViewportScaleFactor_temp_2));
	unmarshaled_get_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.set_get_ViewportScaleFactor_2(unmarshaled_get_ViewportScaleFactor_temp_2);
	intptr_t unmarshaled_put_ViewportScaleFactor_temp_3;
	memset(&unmarshaled_put_ViewportScaleFactor_temp_3, 0, sizeof(unmarshaled_put_ViewportScaleFactor_temp_3));
	unmarshaled_put_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.set_put_ViewportScaleFactor_3(unmarshaled_put_ViewportScaleFactor_temp_3);
	intptr_t unmarshaled_get_IsStereo_temp_4;
	memset(&unmarshaled_get_IsStereo_temp_4, 0, sizeof(unmarshaled_get_IsStereo_temp_4));
	unmarshaled_get_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.set_get_IsStereo_4(unmarshaled_get_IsStereo_temp_4);
	unmarshaled.set_get_Id_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Id_5, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_SetNearPlaneDistance_temp_6;
	memset(&unmarshaled_SetNearPlaneDistance_temp_6, 0, sizeof(unmarshaled_SetNearPlaneDistance_temp_6));
	unmarshaled_SetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.set_SetNearPlaneDistance_6(unmarshaled_SetNearPlaneDistance_temp_6);
	intptr_t unmarshaled_SetFarPlaneDistance_temp_7;
	memset(&unmarshaled_SetFarPlaneDistance_temp_7, 0, sizeof(unmarshaled_SetFarPlaneDistance_temp_7));
	unmarshaled_SetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.set_SetFarPlaneDistance_7(unmarshaled_SetFarPlaneDistance_temp_7);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_pinvoke_cleanup(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_com(const Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342& unmarshaled, Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_RenderTargetSize_1 = unmarshaled.get_get_RenderTargetSize_1();
	marshaled.___get_ViewportScaleFactor_2 = unmarshaled.get_get_ViewportScaleFactor_2();
	marshaled.___put_ViewportScaleFactor_3 = unmarshaled.get_put_ViewportScaleFactor_3();
	marshaled.___get_IsStereo_4 = unmarshaled.get_get_IsStereo_4();
	marshaled.___get_Id_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_5()));
	marshaled.___SetNearPlaneDistance_6 = unmarshaled.get_SetNearPlaneDistance_6();
	marshaled.___SetFarPlaneDistance_7 = unmarshaled.get_SetFarPlaneDistance_7();
}
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_com_back(const Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_com& marshaled, Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_RenderTargetSize_temp_1;
	memset(&unmarshaled_get_RenderTargetSize_temp_1, 0, sizeof(unmarshaled_get_RenderTargetSize_temp_1));
	unmarshaled_get_RenderTargetSize_temp_1 = marshaled.___get_RenderTargetSize_1;
	unmarshaled.set_get_RenderTargetSize_1(unmarshaled_get_RenderTargetSize_temp_1);
	intptr_t unmarshaled_get_ViewportScaleFactor_temp_2;
	memset(&unmarshaled_get_ViewportScaleFactor_temp_2, 0, sizeof(unmarshaled_get_ViewportScaleFactor_temp_2));
	unmarshaled_get_ViewportScaleFactor_temp_2 = marshaled.___get_ViewportScaleFactor_2;
	unmarshaled.set_get_ViewportScaleFactor_2(unmarshaled_get_ViewportScaleFactor_temp_2);
	intptr_t unmarshaled_put_ViewportScaleFactor_temp_3;
	memset(&unmarshaled_put_ViewportScaleFactor_temp_3, 0, sizeof(unmarshaled_put_ViewportScaleFactor_temp_3));
	unmarshaled_put_ViewportScaleFactor_temp_3 = marshaled.___put_ViewportScaleFactor_3;
	unmarshaled.set_put_ViewportScaleFactor_3(unmarshaled_put_ViewportScaleFactor_temp_3);
	intptr_t unmarshaled_get_IsStereo_temp_4;
	memset(&unmarshaled_get_IsStereo_temp_4, 0, sizeof(unmarshaled_get_IsStereo_temp_4));
	unmarshaled_get_IsStereo_temp_4 = marshaled.___get_IsStereo_4;
	unmarshaled.set_get_IsStereo_4(unmarshaled_get_IsStereo_temp_4);
	unmarshaled.set_get_Id_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Id_5, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_SetNearPlaneDistance_temp_6;
	memset(&unmarshaled_SetNearPlaneDistance_temp_6, 0, sizeof(unmarshaled_SetNearPlaneDistance_temp_6));
	unmarshaled_SetNearPlaneDistance_temp_6 = marshaled.___SetNearPlaneDistance_6;
	unmarshaled.set_SetNearPlaneDistance_6(unmarshaled_SetNearPlaneDistance_temp_6);
	intptr_t unmarshaled_SetFarPlaneDistance_temp_7;
	memset(&unmarshaled_SetFarPlaneDistance_temp_7, 0, sizeof(unmarshaled_SetFarPlaneDistance_temp_7));
	unmarshaled_SetFarPlaneDistance_temp_7 = marshaled.___SetFarPlaneDistance_7;
	unmarshaled.set_SetFarPlaneDistance_7(unmarshaled_SetFarPlaneDistance_temp_7);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera/Vftbl
extern "C" void Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshal_com_cleanup(Vftbl_t6598CEAF8E5889D185CD0B3A5DBDC41BF071E342_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * IHolographicCamera6_op_Implicit_m4874D82752E00463B7DFC26589D354F38251FDB1 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCamera6_op_Implicit_m4874D82752E00463B7DFC26589D354F38251FDB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_1 = IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_m323AEEA167EA2BE31EF9FA6A646DD5D1ADA39053_RuntimeMethod_var);
		IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * L_2 = IHolographicCamera6_op_Implicit_m2887AA5D8A95FDC25CED8551EC394B800F1886A3(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6 Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * IHolographicCamera6_op_Implicit_m2887AA5D8A95FDC25CED8551EC394B800F1886A3 (ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCamera6_op_Implicit_m2887AA5D8A95FDC25CED8551EC394B800F1886A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_0 = ___obj0;
		IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * L_1 = (IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F *)il2cpp_codegen_object_new(IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F_il2cpp_TypeInfo_var);
		IHolographicCamera6__ctor_m4523E2392A204554697B4BB51118113CC3AAAB9F(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCamera6__ctor_m4523E2392A204554697B4BB51118113CC3AAAB9F (IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * __this, ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicCamera6::get_ViewConfiguration()
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * IHolographicCamera6_get_ViewConfiguration_mB28F3B0EB068E8A3146030DC0DBEA6EEEB68C167 (IHolographicCamera6_tCC308BF91467AB926F20E84A2902239FD3B7162F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCamera6_get_ViewConfiguration_mB28F3B0EB068E8A3146030DC0DBEA6EEEB68C167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_2 = L_1->get_get_ViewConfiguration_1();
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t897903BED7B994E39B08B1B9B248EA821287B901 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * L_8 = ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m066E4791F71EC2698DABF23A2E10668F9FE9347B_RuntimeMethod_var);
		IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * L_9 = IHolographicViewConfiguration_op_Implicit_m96163B222E23B2D408AFF2A3602587EABCA6743A(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera6_Vftbl
const Il2CppGuid Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB::CLSID = { 0x209194f, 0x632d, 0x5154, 0xab, 0x52, 0xb, 0x5d, 0x15, 0xb1, 0x25, 0x5 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_pinvoke(const Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB& unmarshaled, Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ViewConfiguration_1()));
}
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_pinvoke_back(const Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_pinvoke& marshaled, Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_ViewConfiguration_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_pinvoke_cleanup(Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_com(const Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB& unmarshaled, Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_ViewConfiguration_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ViewConfiguration_1()));
}
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_com_back(const Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_com& marshaled, Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_ViewConfiguration_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_ViewConfiguration_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCamera6/Vftbl
extern "C" void Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshal_com_cleanup(Vftbl_t6B50AB4A58A848DDDF4EB44421F7E61490823FAB_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * IHolographicCameraPose_op_Implicit_mF02F441C3D728FD28A2F632A4C90F61F81D1DA19 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraPose_op_Implicit_mF02F441C3D728FD28A2F632A4C90F61F81D1DA19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_1 = IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_m2969C752A53CD878D1FEB08007B0E41093EE3CA3_RuntimeMethod_var);
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_2 = IHolographicCameraPose_op_Implicit_m248660B6A4B88590702CF4399DD394DB8145EF04(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * IHolographicCameraPose_op_Implicit_m248660B6A4B88590702CF4399DD394DB8145EF04 (ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraPose_op_Implicit_m248660B6A4B88590702CF4399DD394DB8145EF04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_0 = ___obj0;
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_1 = (IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 *)il2cpp_codegen_object_new(IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7_il2cpp_TypeInfo_var);
		IHolographicCameraPose__ctor_mDFD9D4E6FF55D8D564E879A9A6357AFE3D1B4D47(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraPose__ctor_mDFD9D4E6FF55D8D564E879A9A6357AFE3D1B4D47 (IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * __this, ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCamera Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose::get_HolographicCamera()
extern "C" IL2CPP_METHOD_ATTR IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * IHolographicCameraPose_get_HolographicCamera_m847D18B7AC1FCC0E983B400F5F8C0C0346BF9283 (IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraPose_get_HolographicCamera_m847D18B7AC1FCC0E983B400F5F8C0C0346BF9283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_2 = L_1->get_get_HolographicCamera_1();
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_t2B8210F0D5846420094AC594DEF46E689B2097CD * L_8 = ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m3AA8BD926DA9FC769190F3705DF90FA2B6EE941B_RuntimeMethod_var);
		IHolographicCamera_t0283235A83FA610352F0FA2EC7939AD2B1E13725 * L_9 = IHolographicCamera_op_Implicit_mF55053566407A76D2DC6007508F45CBCF880E702(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose_Vftbl
const Il2CppGuid Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F::CLSID = { 0xd7d7e30, 0x12de, 0x45bd, 0x91, 0x2b, 0xc7, 0xf6, 0x56, 0x15, 0x99, 0xd1 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_pinvoke(const Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F& unmarshaled, Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HolographicCamera_1()));
}
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_pinvoke_back(const Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_pinvoke& marshaled, Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_HolographicCamera_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_pinvoke_cleanup(Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_com(const Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F& unmarshaled, Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_HolographicCamera_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HolographicCamera_1()));
}
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_com_back(const Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_com& marshaled, Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_HolographicCamera_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_HolographicCamera_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose/Vftbl
extern "C" void Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshal_com_cleanup(Vftbl_t49B9E46EF8D00551D2BBBBF3C0F2698400A3ED0F_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * IHolographicCameraRenderingParameters_op_Implicit_m6A1FB333291FCE59BDE0BC0E52BE7E9A657B2057 (ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraRenderingParameters_op_Implicit_m6A1FB333291FCE59BDE0BC0E52BE7E9A657B2057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * L_0 = ___obj0;
		IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * L_1 = (IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 *)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342_il2cpp_TypeInfo_var);
		IHolographicCameraRenderingParameters__ctor_mAA3A15587043C562B198442D5A1B1CA4D0BA0104(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters__ctor_mAA3A15587043C562B198442D5A1B1CA4D0BA0104 (IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * __this, ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_pinvoke(const Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002& unmarshaled, Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
}
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_pinvoke_back(const Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_pinvoke& marshaled, Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002& unmarshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_pinvoke_cleanup(Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_com(const Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002& unmarshaled, Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
}
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_com_back(const Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_com& marshaled, Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002& unmarshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters/Vftbl
extern "C" void Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshal_com_cleanup(Vftbl_t2940E0A0567D72E72279AEFC518C78BE9F439002_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * IHolographicCameraRenderingParameters4_op_Implicit_m50391341CE1C7B14FE32D557E627D6B87ADD7F90 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraRenderingParameters4_op_Implicit_m50391341CE1C7B14FE32D557E627D6B87ADD7F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * L_1 = IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_mC3F01618C157A87B0E90DABA6904914EA48ADD98_RuntimeMethod_var);
		IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * L_2 = IHolographicCameraRenderingParameters4_op_Implicit_m8BD336CFDA11D4F5641418583490685E02AF7C91(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4 Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * IHolographicCameraRenderingParameters4_op_Implicit_m8BD336CFDA11D4F5641418583490685E02AF7C91 (ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraRenderingParameters4_op_Implicit_m8BD336CFDA11D4F5641418583490685E02AF7C91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * L_0 = ___obj0;
		IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * L_1 = (IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC *)il2cpp_codegen_object_new(IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC_il2cpp_TypeInfo_var);
		IHolographicCameraRenderingParameters4__ctor_m4DBB3E29A513FBB44070248D9518F4F2AC8E5175(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4__ctor_m4DBB3E29A513FBB44070248D9518F4F2AC8E5175 (IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * __this, ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4::set_DepthReprojectionMethod(Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod)
extern "C" IL2CPP_METHOD_ATTR void IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF20670A4DE848D2FB8C03FC84FB967F2489DF9DB (IHolographicCameraRenderingParameters4_tB30F6244843992B0AA3363822BDD4674C87B4CBC * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicCameraRenderingParameters4_set_DepthReprojectionMethod_mF20670A4DE848D2FB8C03FC84FB967F2489DF9DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15 * L_1 = L_0->get_address_of_Vftbl_4();
		_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * L_2 = L_1->get_put_DepthReprojectionMethod_2();
		ObjectReference_1_tEA17460F4313A7E477FDD7301EF533F27F102528 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		int32_t L_5 = ___value0;
		NullCheck(L_2);
		int32_t L_6 = _put_PropertyAsEnum_Invoke_m5142CF89DEDADF3CE0F571F78AA7A4FFF40A4813(L_2, (intptr_t)L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_6, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4_Vftbl
const Il2CppGuid Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15::CLSID = { 0x878fa4c, 0xe163, 0x57dc, 0x82, 0xb7, 0xc4, 0x6, 0xab, 0x3e, 0x5, 0x37 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_pinvoke(const Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15& unmarshaled, Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_DepthReprojectionMethod_1()));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_DepthReprojectionMethod_2()));
}
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_pinvoke_back(const Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_pinvoke& marshaled, Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_DepthReprojectionMethod_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_put_DepthReprojectionMethod_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_pinvoke_cleanup(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_com(const Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15& unmarshaled, Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_DepthReprojectionMethod_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_DepthReprojectionMethod_1()));
	marshaled.___put_DepthReprojectionMethod_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_DepthReprojectionMethod_2()));
}
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_com_back(const Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_com& marshaled, Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_DepthReprojectionMethod_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_DepthReprojectionMethod_1, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_put_DepthReprojectionMethod_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6>(marshaled.___put_DepthReprojectionMethod_2, _put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters4/Vftbl
extern "C" void Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshal_com_cleanup(Vftbl_tFDDB1B4FA204D2E1C7A25DBA5ACE7F4C728AAE15_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame Microsoft.Windows.Graphics.Holographic.IHolographicFrame::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * IHolographicFrame_op_Implicit_m18AB423F59D7A0306663471FF5496C04112AF181 (ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicFrame_op_Implicit_m18AB423F59D7A0306663471FF5496C04112AF181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_0 = ___obj0;
		IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * L_1 = (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC *)il2cpp_codegen_object_new(IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC_il2cpp_TypeInfo_var);
		IHolographicFrame__ctor_mFA4B55ACCB4A107A13053B8E4B16E3EA5E6224D9(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicFrame__ctor_mFA4B55ACCB4A107A13053B8E4B16E3EA5E6224D9 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicCameraRenderingParameters Microsoft.Windows.Graphics.Holographic.IHolographicFrame::GetRenderingParameters(Microsoft.Windows.Graphics.Holographic.IHolographicCameraPose)
extern "C" IL2CPP_METHOD_ATTR IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * IHolographicFrame_GetRenderingParameters_m5CC1901DA30B5C11726F3416D225689B6CD52987 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * ___cameraPose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicFrame_GetRenderingParameters_m5CC1901DA30B5C11726F3416D225689B6CD52987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6 * L_1 = L_0->get_address_of_Vftbl_4();
		_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * L_2 = L_1->get_GetRenderingParameters_3();
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_5 = ___cameraPose0;
		NullCheck(L_5);
		ObjectReference_1_tBE7DA555BBE124310ECD6B4FA7B2D87AF83AFA62 * L_6 = L_5->get__obj_0();
		NullCheck(L_6);
		intptr_t L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_8 = _GetRenderingParameters_Invoke_mF23180CA588E56E560AF03421E07C8AEF77EDDD0(L_2, (intptr_t)L_4, (intptr_t)L_7, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_8, /*hidden argument*/NULL);
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_9 = __this->get__obj_0();
		NullCheck(L_9);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_10 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_9)->get_Module_1();
		ObjectReference_1_tA33DC8CB415CD15BAD5E43BA138A64B960686683 * L_11 = ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1(L_10, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m98E84F93EC529FFBDFB0AC5C5AA93231C037AAB1_RuntimeMethod_var);
		IHolographicCameraRenderingParameters_t37A538447F308B1BA06FC7F88A3E71D841552342 * L_12 = IHolographicCameraRenderingParameters_op_Implicit_m6A1FB333291FCE59BDE0BC0E52BE7E9A657B2057(L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFrame::get_CurrentPrediction()
extern "C" IL2CPP_METHOD_ATTR IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * IHolographicFrame_get_CurrentPrediction_mE5EC257ACD86F2A1D63A322AEC02DC69B94E4E61 (IHolographicFrame_t126906FBFFEA1F58297A01439B7D39B150D47DFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicFrame_get_CurrentPrediction_mE5EC257ACD86F2A1D63A322AEC02DC69B94E4E61_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_2 = L_1->get_get_CurrentPrediction_5();
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_tF057F2E615F963666DA1BECC306E2E34B5BB0102 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_8 = ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m734AC7055D9554197FE3382C69F9E7BAA8DB0EDC_RuntimeMethod_var);
		IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * L_9 = IHolographicFramePrediction_op_Implicit_m1ECB52BBCF259B07F6E1F657F7059698F450B07D(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl
const Il2CppGuid Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6::CLSID = { 0xc6988eb6, 0xa8b9, 0x3054, 0xa6, 0xeb, 0xd6, 0x24, 0xb6, 0x53, 0x63, 0x75 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_pinvoke(const Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6& unmarshaled, Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.get_get_AddedCameras_1();
	marshaled.___get_RemovedCameras_2 = unmarshaled.get_get_RemovedCameras_2();
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRenderingParameters_3()));
	marshaled.___get_Duration_4 = unmarshaled.get_get_Duration_4();
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CurrentPrediction_5()));
}
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_pinvoke_back(const Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_pinvoke& marshaled, Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_AddedCameras_temp_1;
	memset(&unmarshaled_get_AddedCameras_temp_1, 0, sizeof(unmarshaled_get_AddedCameras_temp_1));
	unmarshaled_get_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.set_get_AddedCameras_1(unmarshaled_get_AddedCameras_temp_1);
	intptr_t unmarshaled_get_RemovedCameras_temp_2;
	memset(&unmarshaled_get_RemovedCameras_temp_2, 0, sizeof(unmarshaled_get_RemovedCameras_temp_2));
	unmarshaled_get_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.set_get_RemovedCameras_2(unmarshaled_get_RemovedCameras_temp_2);
	unmarshaled.set_GetRenderingParameters_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_get_Duration_temp_4;
	memset(&unmarshaled_get_Duration_temp_4, 0, sizeof(unmarshaled_get_Duration_temp_4));
	unmarshaled_get_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.set_get_Duration_4(unmarshaled_get_Duration_temp_4);
	unmarshaled.set_get_CurrentPrediction_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_pinvoke_cleanup(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_com(const Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6& unmarshaled, Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_AddedCameras_1 = unmarshaled.get_get_AddedCameras_1();
	marshaled.___get_RemovedCameras_2 = unmarshaled.get_get_RemovedCameras_2();
	marshaled.___GetRenderingParameters_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRenderingParameters_3()));
	marshaled.___get_Duration_4 = unmarshaled.get_get_Duration_4();
	marshaled.___get_CurrentPrediction_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CurrentPrediction_5()));
}
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_com_back(const Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_com& marshaled, Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_AddedCameras_temp_1;
	memset(&unmarshaled_get_AddedCameras_temp_1, 0, sizeof(unmarshaled_get_AddedCameras_temp_1));
	unmarshaled_get_AddedCameras_temp_1 = marshaled.___get_AddedCameras_1;
	unmarshaled.set_get_AddedCameras_1(unmarshaled_get_AddedCameras_temp_1);
	intptr_t unmarshaled_get_RemovedCameras_temp_2;
	memset(&unmarshaled_get_RemovedCameras_temp_2, 0, sizeof(unmarshaled_get_RemovedCameras_temp_2));
	unmarshaled_get_RemovedCameras_temp_2 = marshaled.___get_RemovedCameras_2;
	unmarshaled.set_get_RemovedCameras_2(unmarshaled_get_RemovedCameras_temp_2);
	unmarshaled.set_GetRenderingParameters_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331>(marshaled.___GetRenderingParameters_3, _GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_get_Duration_temp_4;
	memset(&unmarshaled_get_Duration_temp_4, 0, sizeof(unmarshaled_get_Duration_temp_4));
	unmarshaled_get_Duration_temp_4 = marshaled.___get_Duration_4;
	unmarshaled.set_get_Duration_4(unmarshaled_get_Duration_temp_4);
	unmarshaled.set_get_CurrentPrediction_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_CurrentPrediction_5, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFrame/Vftbl
extern "C" void Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshal_com_cleanup(Vftbl_t7824FECB5F872D75737A9414D8E5E2B3419CDAF6_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___cameraPosePtr1, ___resultPtr2);

	return returnValue;
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetRenderingParameters__ctor_m5D5A97B386F1AABF42B51B54E72A07EC86671225 (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_Invoke_mF23180CA588E56E560AF03421E07C8AEF77EDDD0 (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___cameraPosePtr1, ___resultPtr2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetRenderingParameters_BeginInvoke_mF697D01C392870ADAD103B9EDC1C5C31215AC6AA (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, intptr_t ___thisPtr0, intptr_t ___cameraPosePtr1, intptr_t* ___resultPtr2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetRenderingParameters_BeginInvoke_mF697D01C392870ADAD103B9EDC1C5C31215AC6AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___cameraPosePtr1);
	__d_args[2] = ___resultPtr2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.Windows.Graphics.Holographic.IHolographicFrame_Vftbl__GetRenderingParameters::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetRenderingParameters_EndInvoke_m1D806C7EA47255C843AC138DBCBC441DE72CFC47 (_GetRenderingParameters_tBE37184A3C1E4BEE3A4C2A4922DF2429AD552331 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * IHolographicFramePrediction_op_Implicit_m1ECB52BBCF259B07F6E1F657F7059698F450B07D (ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicFramePrediction_op_Implicit_m1ECB52BBCF259B07F6E1F657F7059698F450B07D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_0 = ___obj0;
		IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * L_1 = (IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 *)il2cpp_codegen_object_new(IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89_il2cpp_TypeInfo_var);
		IHolographicFramePrediction__ctor_m5354E184F9E56BE4656990E58DBAACDF585A86AD(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicFramePrediction__ctor_m5354E184F9E56BE4656990E58DBAACDF585A86AD (IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * __this, ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicCameraPose> Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction::get_CameraPoses()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IHolographicFramePrediction_get_CameraPoses_m2D8DC8EAEB3C09086A088162966899EE2B26F493 (IHolographicFramePrediction_t57B5FC08DB56F0C00332AD811D968F64DAAE2A89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicFramePrediction_get_CameraPoses_m2D8DC8EAEB3C09086A088162966899EE2B26F493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * G_B2_0 = NULL;
	Guid_t  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * G_B2_2 = NULL;
	CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * G_B1_0 = NULL;
	Guid_t  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * G_B1_2 = NULL;
	{
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_2 = L_1->get_get_CameraPoses_1();
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t489BE98192E7CA6DE39E4C1671535174A0D2B5F9 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_tB6CBD6616B6B9E003821025120F69188584ABFBA * L_8 = ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m7E37E1411CC027BDD032D5E28050D962461A138F_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var);
		Guid_t  L_9 = ((IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields*)il2cpp_codegen_static_fields_for(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var))->get_IIterableOfHolographicCameraPose_0();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var);
		CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * L_10 = ((U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var);
		U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * L_12 = ((U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * L_13 = (CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B *)il2cpp_codegen_object_new(CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B_il2cpp_TypeInfo_var);
		CreateT__ctor_m5AB13B74224619315231CD72AA858CA2D80F89A6(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m270B0A147670E34C78F9079E34BAFC7412316675_RuntimeMethod_var), /*hidden argument*/CreateT__ctor_m5AB13B74224619315231CD72AA858CA2D80F89A6_RuntimeMethod_var);
		CreateT_t3250600714636DA2BB6B9D4AE4B44DC803D4D44B * L_14 = L_13;
		((U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6 * L_15 = (VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6 *)il2cpp_codegen_object_new(VectorViewOfObject_1_t601729F768E3C85241062CB1B25202150A7E9FF6_il2cpp_TypeInfo_var);
		VectorViewOfObject_1__ctor_mC21F7521ECEC40EE7832F550377D01CABCFE00A8(L_15, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/VectorViewOfObject_1__ctor_mC21F7521ECEC40EE7832F550377D01CABCFE00A8_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF88FD882E77B8EFFA5AC54D904A51308BE3417C8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mF88FD882E77B8EFFA5AC54D904A51308BE3417C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * L_0 = (U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 *)il2cpp_codegen_object_new(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m16CEB7535DC10318A148EB711DBD6897B7136E9E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m16CEB7535DC10318A148EB711DBD6897B7136E9E (U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicCameraPose Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_<>c::<get_CameraPoses>b__6_0(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m270B0A147670E34C78F9079E34BAFC7412316675 (U3CU3Ec_tC4F63BBCBE13E3BE20E425D334B3615983A7BE15 * __this, IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3Cget_CameraPosesU3Eb__6_0_m270B0A147670E34C78F9079E34BAFC7412316675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		IHolographicCameraPose_tC5CC2CA0E22B4DD7D61CD2556E0BCAC0E5975BF7 * L_1 = IHolographicCameraPose_op_Implicit_mF02F441C3D728FD28A2F632A4C90F61F81D1DA19(L_0, /*hidden argument*/NULL);
		HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 * L_2 = (HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938 *)il2cpp_codegen_object_new(HolographicCameraPose_t8F9BEC2B5D85DCB935796F4192C908DBB05B8938_il2cpp_TypeInfo_var);
		HolographicCameraPose__ctor_mDE2AC3E08CFFBA2D8AFE41D15A380003F646CA4A(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction_Vftbl
const Il2CppGuid Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA::CLSID = { 0x520f4de1, 0x5c0a, 0x4e79, 0xa8, 0x1e, 0x6a, 0xbe, 0x2, 0xbb, 0x27, 0x39 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_pinvoke(const Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA& unmarshaled, Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CameraPoses_1()));
}
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_pinvoke_back(const Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_pinvoke& marshaled, Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_CameraPoses_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_pinvoke_cleanup(Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_com(const Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA& unmarshaled, Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_CameraPoses_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_CameraPoses_1()));
}
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_com_back(const Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_com& marshaled, Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_CameraPoses_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_CameraPoses_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicFramePrediction/Vftbl
extern "C" void Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshal_com_cleanup(Vftbl_tB4F3D1FB227AF402988D61A7D8F3CF04D6BCE1CA_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * IHolographicViewConfiguration_op_Implicit_m96163B222E23B2D408AFF2A3602587EABCA6743A (ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicViewConfiguration_op_Implicit_m96163B222E23B2D408AFF2A3602587EABCA6743A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * L_0 = ___obj0;
		IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * L_1 = (IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD *)il2cpp_codegen_object_new(IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD_il2cpp_TypeInfo_var);
		IHolographicViewConfiguration__ctor_mD9A968B2DE052A23AFB5358F3CFD4665EA420B61(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicViewConfiguration__ctor_mD9A968B2DE052A23AFB5358F3CFD4665EA420B61 (IHolographicViewConfiguration_tFF0F76A437AF06BBC01BA66E163AFD26A70FE5DD * __this, ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t96EAD201E4763D8A19320F0F558BD9B4967D0062 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration_Vftbl
const Il2CppGuid Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E::CLSID = { 0x5c1de6e6, 0x67e9, 0x5004, 0xb0, 0x2c, 0x67, 0xa3, 0xa1, 0x22, 0xb5, 0x76 };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_pinvoke(const Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E& unmarshaled, Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.get_get_NativeRenderTargetSize_1();
	marshaled.___get_RenderTargetSize_2 = unmarshaled.get_get_RenderTargetSize_2();
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.get_RequestRenderTargetSize_3();
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.get_get_SupportedPixelFormats_4();
	marshaled.___get_PixelFormat_5 = unmarshaled.get_get_PixelFormat_5();
	marshaled.___put_PixelFormat_6 = unmarshaled.get_put_PixelFormat_6();
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsStereo_7()));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_RefreshRate_8()));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Kind_9()));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Display_10()));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsEnabled_11()));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_IsEnabled_12()));
}
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_pinvoke_back(const Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_pinvoke& marshaled, Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_NativeRenderTargetSize_temp_1;
	memset(&unmarshaled_get_NativeRenderTargetSize_temp_1, 0, sizeof(unmarshaled_get_NativeRenderTargetSize_temp_1));
	unmarshaled_get_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.set_get_NativeRenderTargetSize_1(unmarshaled_get_NativeRenderTargetSize_temp_1);
	intptr_t unmarshaled_get_RenderTargetSize_temp_2;
	memset(&unmarshaled_get_RenderTargetSize_temp_2, 0, sizeof(unmarshaled_get_RenderTargetSize_temp_2));
	unmarshaled_get_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.set_get_RenderTargetSize_2(unmarshaled_get_RenderTargetSize_temp_2);
	intptr_t unmarshaled_RequestRenderTargetSize_temp_3;
	memset(&unmarshaled_RequestRenderTargetSize_temp_3, 0, sizeof(unmarshaled_RequestRenderTargetSize_temp_3));
	unmarshaled_RequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.set_RequestRenderTargetSize_3(unmarshaled_RequestRenderTargetSize_temp_3);
	intptr_t unmarshaled_get_SupportedPixelFormats_temp_4;
	memset(&unmarshaled_get_SupportedPixelFormats_temp_4, 0, sizeof(unmarshaled_get_SupportedPixelFormats_temp_4));
	unmarshaled_get_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.set_get_SupportedPixelFormats_4(unmarshaled_get_SupportedPixelFormats_temp_4);
	intptr_t unmarshaled_get_PixelFormat_temp_5;
	memset(&unmarshaled_get_PixelFormat_temp_5, 0, sizeof(unmarshaled_get_PixelFormat_temp_5));
	unmarshaled_get_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.set_get_PixelFormat_5(unmarshaled_get_PixelFormat_temp_5);
	intptr_t unmarshaled_put_PixelFormat_temp_6;
	memset(&unmarshaled_put_PixelFormat_temp_6, 0, sizeof(unmarshaled_put_PixelFormat_temp_6));
	unmarshaled_put_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.set_put_PixelFormat_6(unmarshaled_put_PixelFormat_temp_6);
	unmarshaled.set_get_IsStereo_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_get_RefreshRate_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Kind_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Display_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Display_10, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_get_IsEnabled_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_put_IsEnabled_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_pinvoke_cleanup(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_com(const Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E& unmarshaled, Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_NativeRenderTargetSize_1 = unmarshaled.get_get_NativeRenderTargetSize_1();
	marshaled.___get_RenderTargetSize_2 = unmarshaled.get_get_RenderTargetSize_2();
	marshaled.___RequestRenderTargetSize_3 = unmarshaled.get_RequestRenderTargetSize_3();
	marshaled.___get_SupportedPixelFormats_4 = unmarshaled.get_get_SupportedPixelFormats_4();
	marshaled.___get_PixelFormat_5 = unmarshaled.get_get_PixelFormat_5();
	marshaled.___put_PixelFormat_6 = unmarshaled.get_put_PixelFormat_6();
	marshaled.___get_IsStereo_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsStereo_7()));
	marshaled.___get_RefreshRate_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_RefreshRate_8()));
	marshaled.___get_Kind_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Kind_9()));
	marshaled.___get_Display_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Display_10()));
	marshaled.___get_IsEnabled_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_IsEnabled_11()));
	marshaled.___put_IsEnabled_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_IsEnabled_12()));
}
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_com_back(const Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_com& marshaled, Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	intptr_t unmarshaled_get_NativeRenderTargetSize_temp_1;
	memset(&unmarshaled_get_NativeRenderTargetSize_temp_1, 0, sizeof(unmarshaled_get_NativeRenderTargetSize_temp_1));
	unmarshaled_get_NativeRenderTargetSize_temp_1 = marshaled.___get_NativeRenderTargetSize_1;
	unmarshaled.set_get_NativeRenderTargetSize_1(unmarshaled_get_NativeRenderTargetSize_temp_1);
	intptr_t unmarshaled_get_RenderTargetSize_temp_2;
	memset(&unmarshaled_get_RenderTargetSize_temp_2, 0, sizeof(unmarshaled_get_RenderTargetSize_temp_2));
	unmarshaled_get_RenderTargetSize_temp_2 = marshaled.___get_RenderTargetSize_2;
	unmarshaled.set_get_RenderTargetSize_2(unmarshaled_get_RenderTargetSize_temp_2);
	intptr_t unmarshaled_RequestRenderTargetSize_temp_3;
	memset(&unmarshaled_RequestRenderTargetSize_temp_3, 0, sizeof(unmarshaled_RequestRenderTargetSize_temp_3));
	unmarshaled_RequestRenderTargetSize_temp_3 = marshaled.___RequestRenderTargetSize_3;
	unmarshaled.set_RequestRenderTargetSize_3(unmarshaled_RequestRenderTargetSize_temp_3);
	intptr_t unmarshaled_get_SupportedPixelFormats_temp_4;
	memset(&unmarshaled_get_SupportedPixelFormats_temp_4, 0, sizeof(unmarshaled_get_SupportedPixelFormats_temp_4));
	unmarshaled_get_SupportedPixelFormats_temp_4 = marshaled.___get_SupportedPixelFormats_4;
	unmarshaled.set_get_SupportedPixelFormats_4(unmarshaled_get_SupportedPixelFormats_temp_4);
	intptr_t unmarshaled_get_PixelFormat_temp_5;
	memset(&unmarshaled_get_PixelFormat_temp_5, 0, sizeof(unmarshaled_get_PixelFormat_temp_5));
	unmarshaled_get_PixelFormat_temp_5 = marshaled.___get_PixelFormat_5;
	unmarshaled.set_get_PixelFormat_5(unmarshaled_get_PixelFormat_temp_5);
	intptr_t unmarshaled_put_PixelFormat_temp_6;
	memset(&unmarshaled_put_PixelFormat_temp_6, 0, sizeof(unmarshaled_put_PixelFormat_temp_6));
	unmarshaled_put_PixelFormat_temp_6 = marshaled.___put_PixelFormat_6;
	unmarshaled.set_put_PixelFormat_6(unmarshaled_put_PixelFormat_temp_6);
	unmarshaled.set_get_IsStereo_7(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_IsStereo_7, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_get_RefreshRate_8(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1>(marshaled.___get_RefreshRate_8, _get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Kind_9(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Kind_9, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Display_10(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Display_10, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_get_IsEnabled_11(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_IsEnabled_11, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_put_IsEnabled_12(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85>(marshaled.___put_IsEnabled_12, _put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration/Vftbl
extern "C" void Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshal_com_cleanup(Vftbl_t6FA8CFF602EF76724357CF7F7106DA70DC03E70E_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.IObjectReference)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * IHolographicViewConfiguration2_op_Implicit_mCCB82F40EA0CE40B6B040C7E889D069FF8128A0F (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicViewConfiguration2_op_Implicit_mCCB82F40EA0CE40B6B040C7E889D069FF8128A0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_1 = IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_mB64D59E329A31DD381160F6A7210F2B27AA30D12_RuntimeMethod_var);
		IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * L_2 = IHolographicViewConfiguration2_op_Implicit_m9CA25F4ABA83C5755F350B819DFB30D84144961F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2 Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * IHolographicViewConfiguration2_op_Implicit_m9CA25F4ABA83C5755F350B819DFB30D84144961F (ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicViewConfiguration2_op_Implicit_m9CA25F4ABA83C5755F350B819DFB30D84144961F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_0 = ___obj0;
		IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * L_1 = (IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF *)il2cpp_codegen_object_new(IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF_il2cpp_TypeInfo_var);
		IHolographicViewConfiguration2__ctor_mB5FC1CC55EF1795C32635D6FD7CA51E7300476B4(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl>)
extern "C" IL2CPP_METHOD_ATTR void IHolographicViewConfiguration2__ctor_mB5FC1CC55EF1795C32635D6FD7CA51E7300476B4 (IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * __this, ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyList`1<Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod> Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2::get_SupportedDepthReprojectionMethods()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_mA4F6C1E813CEF6CFE0F42E5D2FF44D60BEE0FA90 (IHolographicViewConfiguration2_tBB41C07867F243BD34665E969CA0DF25656009BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IHolographicViewConfiguration2_get_SupportedDepthReprojectionMethods_mA4F6C1E813CEF6CFE0F42E5D2FF44D60BEE0FA90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * G_B2_0 = NULL;
	Guid_t  G_B2_1;
	memset(&G_B2_1, 0, sizeof(G_B2_1));
	ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * G_B2_2 = NULL;
	Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * G_B1_0 = NULL;
	Guid_t  G_B1_1;
	memset(&G_B1_1, 0, sizeof(G_B1_1));
	ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * G_B1_2 = NULL;
	{
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_2 = L_1->get_get_SupportedDepthReprojectionMethods_1();
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_tC32EE314501F532289770E1B3CEFEF1AD0733ABF * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_tC6DDC55E3E1162D1240ACF0CD3B14258BA0C682D * L_8 = ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m71D239E309F3E5FE1C571D6194D656DF956C8ECB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var);
		Guid_t  L_9 = ((IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields*)il2cpp_codegen_static_fields_for(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var))->get_IIterableOfHolographicDepthReprojectionMethod_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var);
		Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * L_10 = ((U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var);
		U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * L_12 = ((U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * L_13 = (Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D *)il2cpp_codegen_object_new(Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D_il2cpp_TypeInfo_var);
		Func_2__ctor_mEF6510D5F8C783303D85F1E63D3AC247EC0C508F(L_13, L_12, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m4BA72147EAD46753897B5A4BE89E771EAC58C526_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mEF6510D5F8C783303D85F1E63D3AC247EC0C508F_RuntimeMethod_var);
		Func_2_t20060910AB1AA529DD909B02DFCE3DD030A90B8D * L_14 = L_13;
		((U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_005e:
	{
		VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814 * L_15 = (VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814 *)il2cpp_codegen_object_new(VectorViewOfEnum_1_tF2E674B52F2D018B173C955F5B97479EFAE55814_il2cpp_TypeInfo_var);
		VectorViewOfEnum_1__ctor_mF7DDC009945773B2B1BC7DF2C59E8481FF7D4C40(L_15, G_B2_2, G_B2_1, G_B2_0, /*hidden argument*/VectorViewOfEnum_1__ctor_mF7DDC009945773B2B1BC7DF2C59E8481FF7D4C40_RuntimeMethod_var);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDD33CD656A605EF57A0C6106FA5911EC68A8B669 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mDD33CD656A605EF57A0C6106FA5911EC68A8B669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * L_0 = (U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 *)il2cpp_codegen_object_new(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mCD3BACBCE1D18070438C3EA58A6E9D09DFEB88E9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mCD3BACBCE1D18070438C3EA58A6E9D09DFEB88E9 (U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Graphics.Holographic.HolographicDepthReprojectionMethod Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_<>c::<get_SupportedDepthReprojectionMethods>b__6_0(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3Cget_SupportedDepthReprojectionMethodsU3Eb__6_0_m4BA72147EAD46753897B5A4BE89E771EAC58C526 (U3CU3Ec_t8815FAAE5D0C4ABE5ADA52DB48A58C12259D0541 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return (int32_t)(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2_Vftbl
const Il2CppGuid Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47::CLSID = { 0xe241756e, 0xe0d0, 0x5019, 0x9a, 0xf5, 0x1b, 0x16, 0x5b, 0xc2, 0xf5, 0x4e };


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_pinvoke(const Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47& unmarshaled, Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SupportedDepthReprojectionMethods_1()));
}
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_pinvoke_back(const Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_pinvoke& marshaled, Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_SupportedDepthReprojectionMethods_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_pinvoke_cleanup(Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_com(const Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47& unmarshaled, Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_SupportedDepthReprojectionMethods_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_SupportedDepthReprojectionMethods_1()));
}
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_com_back(const Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_com& marshaled, Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_SupportedDepthReprojectionMethods_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_SupportedDepthReprojectionMethods_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Graphics.Holographic.IHolographicViewConfiguration2/Vftbl
extern "C" void Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshal_com_cleanup(Vftbl_t811D6AA746EC03050B1F51FD9F52140AA2741E47_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Graphics.Holographic.IID::.cctor()
extern "C" IL2CPP_METHOD_ATTR void IID__cctor_m38DF2A55F0025D37847C65610CCAD1C27DF0677E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IID__cctor_m38DF2A55F0025D37847C65610CCAD1C27DF0677E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079((&L_0), _stringLiteral4EE120AD5BD56E86FD781FB9DED8E10CDE37A816, /*hidden argument*/NULL);
		((IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields*)il2cpp_codegen_static_fields_for(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var))->set_IIterableOfHolographicCameraPose_0(L_0);
		Guid_t  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Guid__ctor_mC668142577A40A77D13B78AADDEFFFC2E2705079((&L_1), _stringLiteral852BBDF8814A1B075A5FA09D1AA1880F171791DD, /*hidden argument*/NULL);
		((IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_StaticFields*)il2cpp_codegen_static_fields_for(IID_t23599878E762E98777A6AC8DC3FF7E6F3AC4F857_il2cpp_TypeInfo_var))->set_IIterableOfHolographicDepthReprojectionMethod_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.DllModule::.cctor()
extern "C" IL2CPP_METHOD_ATTR void DllModule__cctor_m4A4EB28991A49EC0ADEB52C9038827DF810A94B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DllModule__cctor_m4A4EB28991A49EC0ADEB52C9038827DF810A94B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 * L_0 = (Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31 *)il2cpp_codegen_object_new(Dictionary_2_tDE165DF0D22EE8F4437A82E88E29E3114C20AD31_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF04FD7B1011BFD0419BEA2D3C77BDD51CAB0725D(L_0, /*hidden argument*/Dictionary_2__ctor_mF04FD7B1011BFD0419BEA2D3C77BDD51CAB0725D_RuntimeMethod_var);
		((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var))->set__cache_1(L_0);
		return;
	}
}
// System.Void WinRT.DllModule::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DllModule_Finalize_mB6E2AEE7AE228D6510E99A045D60F31B93F96AEC (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get__moduleHandle_0();
		V_0 = L_0;
		ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
extern "C" IL2CPP_METHOD_ATTR IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  IObjectReference_get_VftblIUnknown_m14ADB939086C467C52181067FB6BBB59ACC03A79 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	{
		IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  L_0 = __this->get_U3CVftblIUnknownU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void IObjectReference__ctor_mEA5B72F8DC10183BD7483FD4A8C9248161879A4C (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&___module0), /*hidden argument*/NULL);
		__this->set_Module_1(L_0);
		intptr_t L_1 = ___thisPtr1;
		__this->set_ThisPtr_0((intptr_t)L_1);
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
extern "C" IL2CPP_METHOD_ATTR void IObjectReference_Finalize_m6A29E9CF244C3CEC39BE20B780337F8348C83BFA (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get_Module_1();
		V_0 = L_0;
		ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IInspectableVftbl
const Il2CppGuid IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32::CLSID = { 0xaf86e2e0, 0xb12d, 0x4c6a, 0x9c, 0x5a, 0xd7, 0xaa, 0x65, 0x10, 0x1e, 0x90 };


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset(&unmarshaled_IUnknownVftbl_temp_0, 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125>(marshaled.___GetIids_1, _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset(&unmarshaled_IUnknownVftbl_temp_0, 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125>(marshaled.___GetIids_1, _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
extern "C" void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iidCount1, ___iids2);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetIids::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetIids__ctor_m6E62D18FCF9CC1BF403C46326E8F22C65D21EBF3 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_m08ACCF070FB6956ADB083BD20E52E908D2E18596 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetIids::BeginInvoke(System.IntPtr,System.UInt32*,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetIids_BeginInvoke_mEC2A36304C09E1871E09ECAD622CF77EF774B616 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetIids_BeginInvoke_mEC2A36304C09E1871E09ECAD622CF77EF774B616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iidCount1;
	__d_args[2] = ___iids2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetIids::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetIids_EndInvoke_mF110B52EBA084491D7CEDD3FB8337D6E94DC7D8D (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___className1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_mC4F690EC476A317A3CD9882DDA3C339BD2ABD1F7 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_mF06CB0985EB144EE593AAC3A4D85CAA7017B5A20 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___className1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___className1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___className1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___className1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetRuntimeClassName_BeginInvoke_mE25F4AE07E7D27199A46EFE1D24129173665F93B (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetRuntimeClassName_BeginInvoke_mE25F4AE07E7D27199A46EFE1D24129173665F93B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___className1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_EndInvoke_mC54A6EE3585F6AA734F2E21FC95A558D12973C83 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___trustLevel1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetTrustLevel::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_m60E4CA5D21F5D6E9BFDBC4C614A783595D58A663 (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m51A24DB763B2462BF97F861EDA37EF53DEB89C5F (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___trustLevel1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___trustLevel1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___trustLevel1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___trustLevel1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetTrustLevel::BeginInvoke(System.IntPtr,WinRT.TrustLevel*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetTrustLevel_BeginInvoke_m07CBEB4DE525D4B5875BE045F0674C72F7BCC6DE (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetTrustLevel_BeginInvoke_m07CBEB4DE525D4B5875BE045F0674C72F7BCC6DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___trustLevel1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetTrustLevel::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_EndInvoke_m221500FF5BDDAAD4A199465CEC07885583A6F87B (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_pinvoke(const IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E& unmarshaled, IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_pinvoke_back(const IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_pinvoke& marshaled, IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_First_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_pinvoke_cleanup(IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfEnum
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_com(const IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E& unmarshaled, IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_com_back(const IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_com& marshaled, IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_First_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfEnum
extern "C" void IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshal_com_cleanup(IIterableOfEnum_t57BCAE46FF9710BF914370BDC922C6E3549A1B9E_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_pinvoke(const IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE& unmarshaled, IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_pinvoke_back(const IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_pinvoke& marshaled, IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_First_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_pinvoke_cleanup(IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIterableOfObject
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_com(const IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE& unmarshaled, IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_First_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_First_1()));
}
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_com_back(const IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_com& marshaled, IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_First_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_First_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIterableOfObject
extern "C" void IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshal_com_cleanup(IIterableOfObject_tFD5A47CBEA04EFEAA62BCAA4ED53FB7E7DE65EEE_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_pinvoke(const IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660& unmarshaled, IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_pinvoke_back(const IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_pinvoke& marshaled, IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Current_1, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2>(marshaled.___MoveNext_3, _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE>(marshaled.___GetMany_4, _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_pinvoke_cleanup(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfEnum
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_com(const IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660& unmarshaled, IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_com_back(const IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_com& marshaled, IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Current_1, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2>(marshaled.___MoveNext_3, _MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE>(marshaled.___GetMany_4, _GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfEnum
extern "C" void IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshal_com_cleanup(IIteratorOfEnum_t840C0CB8C26EC375A76219322D3A642A5CAA2660_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE (_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum__GetMany::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetMany__ctor_m8AABC9120DE0135B720FEECD15F12555FC39655D (_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum__GetMany::Invoke(System.IntPtr,System.UInt32,System.Int32*,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m3842AF766EF514E4105BA8529C1DA33EA2FC5365 (_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
							else
								result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
							else
								result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						else
							result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						else
							result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfEnum__GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.Int32*,System.UInt32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_m05FA7A9CAFA1F600A4150220BE98E845121E11DB (_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, int32_t* ___values2, uint32_t* ___actual3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetMany_BeginInvoke_m05FA7A9CAFA1F600A4150220BE98E845121E11DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___capacity1);
	__d_args[2] = ___values2;
	__d_args[3] = ___actual3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum__GetMany::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mCE9B22898DB98D2613C2FF9C001FB6342CDD9D87 (_GetMany_tA1D5D1AD0737C3A2FB66C44A326CBD8A64E59DAE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 (_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfEnum__MoveNext::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _MoveNext__ctor_mD416CCE2B654B27EE8EE7AF34B074C8B46C5A990 (_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum__MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
extern "C" IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_m77E6A6503885F76BEC2DFBB109E46EF4F5916FC7 (_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfEnum__MoveNext::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _MoveNext_BeginInvoke_m7F8164427B2D5379F1FA959A76F19EEFE09C7221 (_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_MoveNext_BeginInvoke_m7F8164427B2D5379F1FA959A76F19EEFE09C7221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___hasCurrent1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IIteratorOfEnum__MoveNext::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _MoveNext_EndInvoke_m4F3C4B30262008D859236D41E5E898F86750E722 (_MoveNext_tAB4A411F4910A1C4A831823C5A1454E2FCBF40F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_pinvoke(const IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259& unmarshaled, IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_pinvoke_back(const IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_pinvoke& marshaled, IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Current_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30>(marshaled.___MoveNext_3, _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A>(marshaled.___GetMany_4, _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_pinvoke_cleanup(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IIteratorOfObject
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_com(const IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259& unmarshaled, IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Current_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Current_1()));
	marshaled.___get_HasCurrent_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_HasCurrent_2()));
	marshaled.___MoveNext_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_MoveNext_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_com_back(const IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_com& marshaled, IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Current_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Current_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_get_HasCurrent_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00>(marshaled.___get_HasCurrent_2, _get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00_il2cpp_TypeInfo_var));
	unmarshaled.set_MoveNext_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30>(marshaled.___MoveNext_3, _MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A>(marshaled.___GetMany_4, _GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IIteratorOfObject
extern "C" void IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshal_com_cleanup(IIteratorOfObject_tDF48A36D6B2713A1DD6275A16A7FFD870B960259_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A (_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___capacity1, ___values2, ___actual3);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject__GetMany::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetMany__ctor_mFF9682EF1752CF7954B2274D745E25625A27D66E (_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfObject__GetMany::Invoke(System.IntPtr,System.UInt32,System.IntPtr*,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m27802D1E838B85B773ADABB2BF8EA16271C609B3 (_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
							else
								result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
							else
								result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						else
							result = GenericVirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
						else
							result = VirtFuncInvoker4< int32_t, intptr_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___capacity1, ___values2, ___actual3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfObject__GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.IntPtr*,System.UInt32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_mEBFD55934CE625852BB2FCDFF29595BC68A543E4 (_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * __this, intptr_t ___thisPtr0, uint32_t ___capacity1, intptr_t* ___values2, uint32_t* ___actual3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetMany_BeginInvoke_mEBFD55934CE625852BB2FCDFF29595BC68A543E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___capacity1);
	__d_args[2] = ___values2;
	__d_args[3] = ___actual3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 WinRT.Interop.IIteratorOfObject__GetMany::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mBB71C66A0ACC179FDB1806DF2E50053AB5B73C76 (_GetMany_tB17FF9B56B9CF856B96B95C40761CB1D943C644A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 (_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___hasCurrent1);

	return returnValue;
}
// System.Void WinRT.Interop.IIteratorOfObject__MoveNext::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _MoveNext__ctor_m2682054DBAA80B08651A31E1AC677ED73E7E3C06 (_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IIteratorOfObject__MoveNext::Invoke(System.IntPtr,WinRT.Interop._Bool*)
extern "C" IL2CPP_METHOD_ATTR int32_t _MoveNext_Invoke_m76FCBD950F4C071E8EC7702ED89280BE01CE5976 (_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___hasCurrent1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___hasCurrent1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___hasCurrent1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___hasCurrent1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IIteratorOfObject__MoveNext::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _MoveNext_BeginInvoke_m66A032FE0E9C7D4178EA241246D99C9B40FAC997 (_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___hasCurrent1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_MoveNext_BeginInvoke_m66A032FE0E9C7D4178EA241246D99C9B40FAC997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___hasCurrent1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IIteratorOfObject__MoveNext::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _MoveNext_EndInvoke_m5507B22B3B7E84E331B90CA9F5B1E969029FB4F2 (_MoveNext_t3F83F4F7199CBD8766B68D96116403C576E8CB30 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl
const Il2CppGuid IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62::CLSID = { 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12>(marshaled.___QueryInterface_0, _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA>(marshaled.___AddRef_1, _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2>(marshaled.___Release_2, _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12>(marshaled.___QueryInterface_0, _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA>(marshaled.___AddRef_1, _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2>(marshaled.___Release_2, _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
extern "C" void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  uint32_t DelegatePInvokeWrapper__AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__AddRef::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _AddRef__ctor_m0CD1937583E4616F7B2EB22BF21E2E8A4F7CE040 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__AddRef::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_m6EE6DF765BC210FF2B5471936722813BCDBC1A1A (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
				}
				else
				{
					// closed
					typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
							else
								result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
							else
								result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
						}
					}
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
						else
							result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
						else
							result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
					}
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__AddRef::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _AddRef_BeginInvoke_m3D00CAFED0437B50286AB41EF4C36FF254F1AE4B (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AddRef_BeginInvoke_m3D00CAFED0437B50286AB41EF4C36FF254F1AE4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__AddRef::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR uint32_t _AddRef_EndInvoke_mF8960C49BF1A36F38E125080D37FE826AAA755E4 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t *, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iid1, ___vftbl2);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__QueryInterface::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m0C151CDFAF605791DCEE825178CFD86534DDEE85 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IUnknownVftbl__QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_m85F463D405BFBEFBD617E4BEA34C1002F99E980C (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__QueryInterface::BeginInvoke(System.IntPtr,System.Guid*,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _QueryInterface_BeginInvoke_mB40D1B3991B547323BECBAB66C3E715F66F586C1 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_QueryInterface_BeginInvoke_mB40D1B3991B547323BECBAB66C3E715F66F586C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iid1;
	__d_args[2] = ___vftbl2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IUnknownVftbl__QueryInterface::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _QueryInterface_EndInvoke_m064FF6B941AB5D13AF1E614B2E6DE3E86C85DD95 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  uint32_t DelegatePInvokeWrapper__Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__Release::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _Release__ctor_m20451AC2ADC12B8C89648A819B53EFB7C8BBDFC9 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__Release::Invoke(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_m60741E5ED3C52E12301F0419839A292A8552C3AC (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
				}
				else
				{
					// closed
					typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
							else
								result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
							else
								result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
						}
					}
				}
				else
				{
					typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
						else
							result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
						else
							result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
					}
				}
			}
			else
			{
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__Release::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _Release_BeginInvoke_m1E699C023A00D0AFC9ABB83B20E940B9CA384C89 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Release_BeginInvoke_m1E699C023A00D0AFC9ABB83B20E940B9CA384C89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__Release::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR uint32_t _Release_EndInvoke_mFE0A8BFDBDA42124B4067FEA8A358816493B7AF7 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_pinvoke(const IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2& unmarshaled, IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_pinvoke_back(const IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_pinvoke& marshaled, IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C>(marshaled.___GetAt_1, _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Size_2, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A>(marshaled.___IndexOf_3, _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696>(marshaled.___GetMany_4, _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_pinvoke_cleanup(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfEnum
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_com(const IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2& unmarshaled, IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_com_back(const IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_com& marshaled, IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C>(marshaled.___GetAt_1, _GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Size_2, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A>(marshaled.___IndexOf_3, _IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696>(marshaled.___GetMany_4, _GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfEnum
extern "C" void IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshal_com_cleanup(IVectorViewOfEnum_tE5F13FCA7F2F7CD655BEAC9CE2806E37601D86D2_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C (_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum__GetAt::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetAt__ctor_m24580DA821857190A72601922C222755AAD0D2C2 (_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__GetAt::Invoke(System.IntPtr,System.UInt32,System.Int32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_m94E257227AEA7D76B9A0BF55AA548942A4DB793A (_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum__GetAt::BeginInvoke(System.IntPtr,System.UInt32,System.Int32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetAt_BeginInvoke_m620BABD3B69206ABCB4C08F56F83A0ED6C1349BF (_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * __this, intptr_t ___thisPtr0, uint32_t ___index1, int32_t* ___result2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetAt_BeginInvoke_m620BABD3B69206ABCB4C08F56F83A0ED6C1349BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__GetAt::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetAt_EndInvoke_m2D9BE6C889C0338CEDD43052C36D0ACBF815CCB8 (_GetAt_t07668D4ACBFAB02451A51C07C804DB91B77BD44C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 (_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum__GetMany::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetMany__ctor_mA41E82D44E7CA3DA55C8A54C91A98DCC83634F7B (_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.Int32*,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m20A0166840CDE5FECC25C9A338D0432BE3145B29 (_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 5)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
							else
								result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
							else
								result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						else
							result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						else
							result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, int32_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum__GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.Int32*,System.UInt32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_mB9E5087F8AAA492DE264B1D692D65B6CC3C0B9BB (_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, int32_t* ___values3, uint32_t* ___actual4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetMany_BeginInvoke_mB9E5087F8AAA492DE264B1D692D65B6CC3C0B9BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___startingIndex1);
	__d_args[2] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___capacity2);
	__d_args[3] = ___values3;
	__d_args[4] = ___actual4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__GetMany::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mE2469ACC2E00D7D435213FB1CBBABF3976DE4DC5 (_GetMany_t8A2FFDB523D170BA667C5C684AD9D5854BF29696 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A (_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfEnum__IndexOf::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _IndexOf__ctor_m47DD4DA571B14A89315E727E29C6F2B624819F08 (_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__IndexOf::Invoke(System.IntPtr,System.Int32,System.UInt32*,WinRT.Interop._Bool*)
extern "C" IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_m0D293202880A91C66454437669813754D4222DD1 (_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
							else
								result = GenericVirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
							else
								result = VirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						else
							result = GenericVirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						else
							result = VirtFuncInvoker4< int32_t, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfEnum__IndexOf::BeginInvoke(System.IntPtr,System.Int32,System.UInt32*,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _IndexOf_BeginInvoke_m923D0EA4B6A9ECAC577F687C6CDF4E3AD2E26A06 (_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * __this, intptr_t ___thisPtr0, int32_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_IndexOf_BeginInvoke_m923D0EA4B6A9ECAC577F687C6CDF4E3AD2E26A06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___value1);
	__d_args[2] = ___index2;
	__d_args[3] = ___found3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 WinRT.Interop.IVectorViewOfEnum__IndexOf::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _IndexOf_EndInvoke_mE5A19A1E016253C90E9A972A91AE31E35A731119 (_IndexOf_t1B46DE4B8A1D69DEDE6DADDDF1D16AD5799CF88A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_pinvoke(const IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8& unmarshaled, IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_pinvoke_back(const IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_pinvoke& marshaled, IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B>(marshaled.___GetAt_1, _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Size_2, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D>(marshaled.___IndexOf_3, _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC>(marshaled.___GetMany_4, _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_pinvoke_cleanup(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IVectorViewOfObject
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_com(const IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8& unmarshaled, IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetAt_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetAt_1()));
	marshaled.___get_Size_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Size_2()));
	marshaled.___IndexOf_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_IndexOf_3()));
	marshaled.___GetMany_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetMany_4()));
}
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_com_back(const IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_com& marshaled, IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset(&unmarshaled_IInspectableVftbl_temp_0, 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetAt_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B>(marshaled.___GetAt_1, _GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Size_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB>(marshaled.___get_Size_2, _get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB_il2cpp_TypeInfo_var));
	unmarshaled.set_IndexOf_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D>(marshaled.___IndexOf_3, _IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D_il2cpp_TypeInfo_var));
	unmarshaled.set_GetMany_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC>(marshaled.___GetMany_4, _GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IVectorViewOfObject
extern "C" void IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshal_com_cleanup(IVectorViewOfObject_tECA5F231CF2FABCF6305D6B99BE5FE6B4A2CE5B8_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B (_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___index1, ___result2);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject__GetAt::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetAt__ctor_mC35FF624CD8CF2A4EF08314005F84664D0A1746A (_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__GetAt::Invoke(System.IntPtr,System.UInt32,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetAt_Invoke_mA8857CDA51D66CD64575DC5F44F54A32EF78DD23 (_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
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
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
							else
								result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
							else
								result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___index1, ___result2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
						else
							result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___index1, ___result2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
						else
							result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___index1, ___result2);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___index1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject__GetAt::BeginInvoke(System.IntPtr,System.UInt32,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetAt_BeginInvoke_m1141C8910117612866D130461547D81AF55E0FA0 (_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * __this, intptr_t ___thisPtr0, uint32_t ___index1, intptr_t* ___result2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetAt_BeginInvoke_m1141C8910117612866D130461547D81AF55E0FA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___index1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__GetAt::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetAt_EndInvoke_m287FCC6E26482A2AA23F57AEFCA0E5CE468F6408 (_GetAt_t663EEAE0E81BF2A0F70CC07352418BDB3CFBCC9B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC (_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject__GetMany::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _GetMany__ctor_m7F1AE691D18125B1D702BD3A4C076219A643F2DC (_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__GetMany::Invoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr*,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_Invoke_m3D5B5A10AD1BA88F6C95242A983E11070CED5D11 (_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 5)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
							else
								result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
							else
								result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						else
							result = GenericVirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
						else
							result = VirtFuncInvoker5< int32_t, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, intptr_t*, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___startingIndex1, ___capacity2, ___values3, ___actual4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject__GetMany::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.IntPtr*,System.UInt32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _GetMany_BeginInvoke_mB31E1B216896916E568B6E41C646CBBDC5722FE4 (_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * __this, intptr_t ___thisPtr0, uint32_t ___startingIndex1, uint32_t ___capacity2, intptr_t* ___values3, uint32_t* ___actual4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetMany_BeginInvoke_mB31E1B216896916E568B6E41C646CBBDC5722FE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___startingIndex1);
	__d_args[2] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___capacity2);
	__d_args[3] = ___values3;
	__d_args[4] = ___actual4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__GetMany::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _GetMany_EndInvoke_mFD3A3C89BEF8976303DE40439D9388FA8D7D5E5A (_GetMany_tEAB740BE5A2905849D9AD41532824523A283E3BC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D (_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1, ___index2, ___found3);

	return returnValue;
}
// System.Void WinRT.Interop.IVectorViewOfObject__IndexOf::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _IndexOf__ctor_mEE7E60CDF2340326A5392D01938059B19DB9A950 (_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__IndexOf::Invoke(System.IntPtr,System.IntPtr,System.UInt32*,WinRT.Interop._Bool*)
extern "C" IL2CPP_METHOD_ATTR int32_t _IndexOf_Invoke_mC5747568083F9E57D1939379D6DDDC4CC1F9D3E9 (_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 4)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
							else
								result = GenericVirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
							else
								result = VirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						else
							result = GenericVirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
						else
							result = VirtFuncInvoker4< int32_t, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1, ___index2, ___found3);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, uint32_t*, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, ___index2, ___found3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IVectorViewOfObject__IndexOf::BeginInvoke(System.IntPtr,System.IntPtr,System.UInt32*,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _IndexOf_BeginInvoke_m3A4EC81BEACC0E00AFFDE9B0A7CA5DE98004BB8F (_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * __this, intptr_t ___thisPtr0, intptr_t ___value1, uint32_t* ___index2, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___found3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_IndexOf_BeginInvoke_m3A4EC81BEACC0E00AFFDE9B0A7CA5DE98004BB8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___value1);
	__d_args[2] = ___index2;
	__d_args[3] = ___found3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 WinRT.Interop.IVectorViewOfObject__IndexOf::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _IndexOf_EndInvoke_m6400AFE711BC521F6E521992177F8E5A7B92A128 (_IndexOf_t7D9B6E236EBFA297485954AC3A121DFDCA3C4F1D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean WinRT.Interop._Bool::op_Implicit(WinRT.Interop._Bool)
extern "C" IL2CPP_METHOD_ATTR bool _Bool_op_Implicit_m52AC90D5BFC470BBF52EE20887E40D8CC46A02DC (_Bool_t446C4743E0A0343811825CB403046A0FCA457818  ___value0, const RuntimeMethod* method)
{
	{
		_Bool_t446C4743E0A0343811825CB403046A0FCA457818  L_0 = ___value0;
		int32_t L_1 = L_0.get_RawValue_0();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 (_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsBool::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _get_PropertyAsBool__ctor_mCC464416147D79E5002FCE5F527C8A0E4CF891E4 (_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_Invoke_m32C1E4999EE473163EB0D28C1C37BEB87A8310FF (_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsBool::BeginInvoke(System.IntPtr,WinRT.Interop._Bool*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsBool_BeginInvoke_mAFB79DADFD84B4E1BADC2625E373CB741C4622C7 (_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 * ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsBool_BeginInvoke_mAFB79DADFD84B4E1BADC2625E373CB741C4622C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsBool::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsBool_EndInvoke_m1595998B1D0F9AD927B541532A286866227BC7DF (_get_PropertyAsBool_t88143D7CF39AE3D75F67EABA072B7D0E8167BF00 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 (_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, double*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsDouble::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _get_PropertyAsDouble__ctor_m6A870BA28B226865623980A2BC3BBBA1F76E63A1 (_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsDouble::Invoke(System.IntPtr,System.Double*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDouble_Invoke_m68AF44D3D4DA8B9084F53CCF4D30F29088399269 (_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * __this, intptr_t ___thisPtr0, double* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, double*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, double* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, double*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsDouble::BeginInvoke(System.IntPtr,System.Double*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsDouble_BeginInvoke_m6B2CFC258BAE3002D7D3908740A003A3C29B2619 (_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * __this, intptr_t ___thisPtr0, double* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsDouble_BeginInvoke_m6B2CFC258BAE3002D7D3908740A003A3C29B2619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsDouble::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsDouble_EndInvoke_m978CFE71935183A0C94A291D6D3D510E6700BC0B (_get_PropertyAsDouble_t4D0422F0D2BA8F26645F0E3E969BDD6B0035B4A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m2C3147EBE40BA26207EB57334C9BB048FC755A6F (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_m29D310CF2B3224350B72295B8883E4B40F78E54F (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsEnum_BeginInvoke_m0E90527490C6825A21D3BCE6F48995BCD4D585E7 (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsEnum_BeginInvoke_m0E90527490C6825A21D3BCE6F48995BCD4D585E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_EndInvoke_m4271BDFF61741342E2D53272AFC2C2F878855F74 (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_mFD9A67555AE0DF66A0DFE98F2C3FFA0B5F428EF2 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m92EC4348D5FCF9A57D7E68603E1547F420D04550 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsObject_BeginInvoke_m339DAA89A5FDE8A70659B40DAEE5C648C6C149E7 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsObject_BeginInvoke_m339DAA89A5FDE8A70659B40DAEE5C648C6C149E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_EndInvoke_m46300E0BE70992497DB8F52E8905CDC8F9DA0B11 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsUInt::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _get_PropertyAsUInt__ctor_m34B66566A24B10EB625443AF6DE3D9226C830DF6 (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::Invoke(System.IntPtr,System.UInt32*)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_Invoke_m6FF10897765BC41D255487DA50F93A92F89ABB39 (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, intptr_t ___thisPtr0, uint32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, uint32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsUInt::BeginInvoke(System.IntPtr,System.UInt32*,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsUInt_BeginInvoke_m15B226071A7E3B1021205264EF2472699D6E49D9 (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, intptr_t ___thisPtr0, uint32_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsUInt_BeginInvoke_m15B226071A7E3B1021205264EF2472699D6E49D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsUInt::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _get_PropertyAsUInt_EndInvoke_mF2E027D8FD83606F6316CA01BEE6000019EDB163 (_get_PropertyAsUInt_tCFA62F9320D71C6B553719CDC0739A4CE48952CB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 (_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsBool::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _put_PropertyAsBool__ctor_m6247939CBFCFCB57A26762B07434B6C38390BA36 (_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsBool::Invoke(System.IntPtr,WinRT.Interop._Bool)
extern "C" IL2CPP_METHOD_ATTR int32_t _put_PropertyAsBool_Invoke_mF91DC6A3A4FDE2F256CF5EB7B2192D72D998EF34 (_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, _Bool_t446C4743E0A0343811825CB403046A0FCA457818 , const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsBool::BeginInvoke(System.IntPtr,WinRT.Interop._Bool,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsBool_BeginInvoke_m05328144301F7469C0705D60221E313F59A3B8AC (_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * __this, intptr_t ___thisPtr0, _Bool_t446C4743E0A0343811825CB403046A0FCA457818  ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_put_PropertyAsBool_BeginInvoke_m05328144301F7469C0705D60221E313F59A3B8AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(_Bool_t446C4743E0A0343811825CB403046A0FCA457818_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._put_PropertyAsBool::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _put_PropertyAsBool_EndInvoke_m9078DF215C77122644D744396A110F136FE04D0B (_put_PropertyAsBool_t94FF4C003B788F9F24DED1B86B8C8AFCF2BDDA85 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  int32_t DelegatePInvokeWrapper__put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void _put_PropertyAsEnum__ctor_m6D3CA5FC06B028895B949477C47CF4A77334922F (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsEnum::Invoke(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_Invoke_m5142CF89DEDADF3CE0F571F78AA7A4FFF40A4813 (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, intptr_t ___thisPtr0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
				}
				else
				{
					// closed
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
							else
								result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
							else
								result = VirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
						}
					}
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
						else
							result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
						else
							result = VirtFuncInvoker2< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
					}
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsEnum_BeginInvoke_mCC6A183FB61E155CBA0F399055174DEF43B9E775 (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, intptr_t ___thisPtr0, int32_t ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_put_PropertyAsEnum_BeginInvoke_mCC6A183FB61E155CBA0F399055174DEF43B9E775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._put_PropertyAsEnum::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR int32_t _put_PropertyAsEnum_EndInvoke_m65F2EE5503F3DA3519142F95C63DA61E73AA0EB6 (_put_PropertyAsEnum_t3747ECFF3C1C212EB95AE3A0B75CBC81E65441A6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: WinRT.ModuleReference
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke_back(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset(&unmarshaled__nativeHandle_temp_2, 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke_cleanup(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com_back(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset(&unmarshaled__nativeHandle_temp_2, 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
extern "C" void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com_cleanup(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
extern "C" IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_m5A26B972DADB09E3147902042B7E991EFF62D6BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_AllocateRefCount_m5A26B972DADB09E3147902042B7E991EFF62D6BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_0 = Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1(4, /*hidden argument*/NULL);
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return (int32_t*)(L_3);
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtrU26)
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_Allocate_m6926B6152F1E838691DD663F2779139912A9A308 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_Allocate_m6926B6152F1E838691DD663F2779139912A9A308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___module0;
		int32_t* L_1 = ModuleReference_AllocateRefCount_m5A26B972DADB09E3147902042B7E991EFF62D6BE(/*hidden argument*/NULL);
		intptr_t* L_2 = ___nativeHandle1;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___nativeHandle1;
		*((intptr_t*)L_4) = (intptr_t)(0);
		return L_3;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___module0;
		__this->set__module_0(L_0);
		int32_t* L_1 = ___refCountPtr1;
		__this->set__refCountPtr_1((int32_t*)L_1);
		int32_t* L_2 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_2) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->get__refCountPtr_1();
		Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F((int32_t*)(int32_t*)L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		intptr_t L_4 = ___nativeHandle2;
		__this->set__nativeHandle_2((intptr_t)L_4);
		return;
	}
}
extern "C"  void ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + 1);
	ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8(_thisAdjusted, ___module0, ___refCountPtr1, ___nativeHandle2, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__module_0();
		int32_t* L_1 = __this->get__refCountPtr_1();
		intptr_t L_2 = __this->get__nativeHandle_2();
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_3;
		memset(&L_3, 0, sizeof(L_3));
		ModuleReference__ctor_m500E5485D62D1489E23B71557862C2F5727A45D8((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C"  ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + 1);
	return ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531(_thisAdjusted, method);
}
// System.Void WinRT.ModuleReference::Release()
extern "C" IL2CPP_METHOD_ATTR void ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_0) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->get__refCountPtr_1();
		int32_t L_2 = Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE((int32_t*)(int32_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__module_0();
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->get__nativeHandle_2();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_6 = __this->get__module_0();
		if (!((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *)IsInstClass((RuntimeObject*)L_6, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_7 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_m9B336A9ADBAFD3080FF9071B69D49ACB8A9BB03F((intptr_t)L_7, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject * L_8 = __this->get__module_0();
		if (!((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C *)IsInstClass((RuntimeObject*)L_8, WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_9 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_mE730477D4A87C0E788A075D80907200EDA3CC8B4((intptr_t)L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject * L_10 = __this->get__module_0();
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Type::get_Name() */, L_11);
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral74D559369E1958056E4727338451177BE8962EE3, L_12, _stringLiteral926C699B76FD37CAEDEDABF4276A7BE84516E4DF, /*hidden argument*/NULL);
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_14 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_RuntimeMethod_var);
	}

IL_0093:
	{
		__this->set__nativeHandle_2((intptr_t)(0));
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_15 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_15, _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_RuntimeMethod_var);
	}

IL_00ab:
	{
		__this->set__module_0(NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_16 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_16, _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_RuntimeMethod_var);
	}

IL_00bf:
	{
		int32_t* L_17 = __this->get__refCountPtr_1();
		intptr_t L_18 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_m7C88C0999A166E61A38FF25527CD5E339F6AC590((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set__refCountPtr_1((int32_t*)(((uintptr_t)0)));
	}

IL_00d7:
	{
		return;
	}
}
extern "C"  void ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + 1);
	ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Platform::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Platform__cctor_m069EEE8147C74080719D5B202C02012E181CCF98 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_m069EEE8147C74080719D5B202C02012E181CCF98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * L_0 = (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 *)il2cpp_codegen_object_new(DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293_il2cpp_TypeInfo_var);
		DotNETLinkage__ctor_m031858436E51E64EB0604B3F779E052480537F7A(L_0, /*hidden argument*/NULL);
		((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(3 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_1, (intptr_t)(0));
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001c;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.DllNotFoundException)
		IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * L_2 = (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB *)il2cpp_codegen_object_new(IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_il2cpp_TypeInfo_var);
		IL2CPPLinkage__ctor_mCDDC6E927CC012D0FC65E2830ECA9C137224530C(L_2, /*hidden argument*/NULL);
		((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_2);
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Platform_FreeLibrary_m9B336A9ADBAFD3080FF9071B69D49ACB8A9BB03F (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_FreeLibrary_m9B336A9ADBAFD3080FF9071B69D49ACB8A9BB03F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___moduleHandle0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(0 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		int32_t L_3 = Platform_GetHRForLastWin32Error_m0CE9CAB6A80B7AB9BEB814CAC0A1B0C8C5B7C4F8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
extern "C" IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m82A00ADB1DCDC541C32020FA5B4EDCB0A1879165 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_CoIncrementMTAUsage_m82A00ADB1DCDC541C32020FA5B4EDCB0A1879165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(1 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_1, /*hidden argument*/NULL);
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_mE730477D4A87C0E788A075D80907200EDA3CC8B4 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_CoDecrementMTAUsage_mE730477D4A87C0E788A075D80907200EDA3CC8B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___cookie0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(2 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_m0CE9CAB6A80B7AB9BEB814CAC0A1B0C8C5B7C4F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetHRForLastWin32Error_m0CE9CAB6A80B7AB9BEB814CAC0A1B0C8C5B7C4F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean WinRT.Platform_DotNETLinkage::_FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_mE073F3BF5A4BC7787690B5A72D8A2F210B5A80D8 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1 = DotNETLinkage_FreeLibrary_mA58C53A983D9AE8C8C71EC6A0F62774A978A5F0C((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_m6637A60F904979DF9D63C6646B9013F622560587 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1 = DotNETLinkage_CoIncrementMTAUsage_m422005853FD3067CD5D39BC9A224E0A2D7D28A84((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_m0AD3F23AB9C28CB8D7D0627A415E049833463256 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1 = DotNETLinkage_CoDecrementMTAUsage_m5975664B0AB03A19BDA9FB121C8BBE7D8E1C5ED8((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_m371E01500F43F98CB4A3E95A2AE3389C89CC004F (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1 = DotNETLinkage_WindowsDeleteString_m1FACFD96C3D5B6FB88831D23547FF567817EDABC((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_GetHRForLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_mA95253F9CB7B46EA7B34F30A7666202AACEEFAD8 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNETLinkage__GetHRForLastWin32Error_mA95253F9CB7B46EA7B34F30A7666202AACEEFAD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_0 = Marshal_GetHRForLastWin32Error_mF4E03B3508326CCA86A4C10957D80F9CC677660E(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean WinRT.Platform_DotNETLinkage::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_mA58C53A983D9AE8C8C71EC6A0F62774A978A5F0C (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FreeLibrary'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
// System.Int32 WinRT.Platform_DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_m422005853FD3067CD5D39BC9A224E0A2D7D28A84 (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CoIncrementMTAUsage'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform_DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_m5975664B0AB03A19BDA9FB121C8BBE7D8E1C5ED8 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CoDecrementMTAUsage'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);

	return returnValue;
}
// System.Int32 WinRT.Platform_DotNETLinkage::WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_m1FACFD96C3D5B6FB88831D23547FF567817EDABC (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'WindowsDeleteString'"), NULL, NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform_DotNETLinkage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_m031858436E51E64EB0604B3F779E052480537F7A (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean WinRT.Platform_IL2CPPLinkage::_FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_m15971A1BAE23F5D444A350116008AB43DE2E4A38 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1 = IL2CPPLinkage_FreeLibrary_m96159702EB7BD2A449001DC4F1C6BD4FA20B29FA((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_m39535F17DCC83B9A7023511022A2887DA7215272 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1 = IL2CPPLinkage_CoIncrementMTAUsage_m99D69CCEA95B56C739344F948F68888E39BA705E((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_m046860C410C6E38C114B12D64ABDBB96F632F5F5 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1 = IL2CPPLinkage_CoDecrementMTAUsage_mB2A2CBFBA80DA97D79E4E2D0F22EB165541B2C71((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_mC4E54C3E2D30D7845893A50CB3E7565B29F93109 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1 = IL2CPPLinkage_WindowsDeleteString_mDBFD40AB93B3A03BCEB09FF470E9D0CDD481FB4A((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_GetHRForLastWin32Error()
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_m5481B5EACB0492FFD774AAC39EEC1468969A09EC (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)-2147467259);
	}
}
extern "C" int32_t DEFAULT_CALL FreeLibrary(intptr_t);
// System.Boolean WinRT.Platform_IL2CPPLinkage::FreeLibrary(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m96159702EB7BD2A449001DC4F1C6BD4FA20B29FA (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
// System.Int32 WinRT.Platform_IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m99D69CCEA95B56C739344F948F68888E39BA705E (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
// System.Int32 WinRT.Platform_IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_mB2A2CBFBA80DA97D79E4E2D0F22EB165541B2C71 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);

	return returnValue;
}
extern "C" int32_t STDCALL WindowsDeleteString(intptr_t);
// System.Int32 WinRT.Platform_IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_mDBFD40AB93B3A03BCEB09FF470E9D0CDD481FB4A (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform_IL2CPPLinkage::.ctor()
extern "C" IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mCDDC6E927CC012D0FC65E2830ECA9C137224530C (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
extern "C" IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * L_0 = ((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var))->get__instance_1();
		NullCheck(L_0);
		WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * L_1 = WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098(L_0, /*hidden argument*/WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_2 = L_1->get__module_0();
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WinrtModule__ctor_m02B2EF0CD9C7FD0734DDEC8071429B28A292A01D (WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule__ctor_m02B2EF0CD9C7FD0734DDEC8071429B28A292A01D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_0 = Platform_CoIncrementMTAUsage_m82A00ADB1DCDC541C32020FA5B4EDCB0A1879165(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_1 = ModuleReference_Allocate_m6926B6152F1E838691DD663F2779139912A9A308(__this, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		__this->set__module_0(L_1);
		return;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
extern "C" IL2CPP_METHOD_ATTR void WinrtModule_Finalize_m8B3446C6F27E1C5A607BB75DDCDABA27055C88A9 (WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get__module_0();
		V_0 = L_0;
		ModuleReference_Release_m8D91585B84FDDFCB040A331C3B83F68F72C4FDDA((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WinrtModule__cctor_m3210BEB9124DE612BE5424430A9B28F18011D814 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule__cctor_m3210BEB9124DE612BE5424430A9B28F18011D814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * L_0 = (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *)il2cpp_codegen_object_new(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_m5E8127CACEE574E7A8BD1141C5F7BE7E5D4DACCF(L_0, /*hidden argument*/WeakLazy_1__ctor_m5E8127CACEE574E7A8BD1141C5F7BE7E5D4DACCF_RuntimeMethod_var);
		((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var))->set__instance_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
