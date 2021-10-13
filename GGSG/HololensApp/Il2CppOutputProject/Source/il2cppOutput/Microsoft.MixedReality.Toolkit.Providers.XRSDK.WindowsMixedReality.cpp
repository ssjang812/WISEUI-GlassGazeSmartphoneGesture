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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966;
// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tBE426E004CC508021D01D8F2D24D3DCC500D3470;
// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride
struct ProjectionOverride_t7C6861E3FFD9283F10FCB16C4A903E57D392E2E8;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838;
// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B;
// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[]
struct PointerConfigU5BU5D_tFF5D750ACD5998A5994F9B8EF58BCAA5F563B386;
// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_tA6E280BFC4D9FE24AADF2C8FC2150A7872D3E671;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_tF11B01C18D3E7D9443AFA3B890520D0F196716C5;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tE0E928A8AFA1825E798A69EB5D4BE993B8227ED2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition
struct IMixedRealityInputSourceDefinition_t7A2C6C2A2995A850968B7B0DEB3D269488A0EA91;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer
struct IMixedRealityTeleportPointer_t1B24406B81F2BE0BC30FD7C74450F45927B7DE5E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA;
// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem
struct IMixedRealitySpatialAwarenessSystem_tE4BAFE2B5651E0CF0E856FD73C51FE942284CF4E;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t6129B71DD7BCF107F18D91CFC0991B1845A8A6D4;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t6C6ECD42F875B5C31E73DC54177467F3D3F0F49C;
// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33;
// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tBBE00D8254951A014C772170206A2AEA17A327E6;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_tB9B084E9DA9204848E8A9D4ED352BDC7E34D05FD;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2;
// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32>
struct Dictionary_2_t96750716FF4F33B66CBE19A55C531D33FD8A0EA8;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct Dictionary_2_t22054CDBDE8218AFD21BE0A5B45CC78167956666;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController>
struct Dictionary_2_t9144E7302F607940DE4A38EA77208035192E1013;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t223CDEA89E79F60CB0C83D846FA30D2BD466ADFA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8;
// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics>
struct List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId>
struct Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B;
// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521;
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
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>>
struct EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE;
// Windows.Perception.People.HeadPose
struct HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5;
// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;
// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
// Windows.UI.Input.Spatial.SpatialInteractionManager
struct SpatialInteractionManager_t5887B5CBAB5D33035034BFEC7869313C9A02BD53;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384;
// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VolumeType_t216D85DC8F2789C4360056C5953985C65B834163_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMRExtensions_t54B11667A7ED252DBAF10EBFC1D2BCD93D375F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F;
IL2CPP_EXTERN_C String_t* _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3;
IL2CPP_EXTERN_C String_t* _stringLiteral759A9A22E4500224C38CDCC5202A40E60E018CB5;
IL2CPP_EXTERN_C String_t* _stringLiteral762F1DDFCE2D3B4BAFEBDC0DC14EB2F6DA9FBF78;
IL2CPP_EXTERN_C String_t* _stringLiteral796E977E50AF0B1C5887A614F41528308F325532;
IL2CPP_EXTERN_C String_t* _stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D;
IL2CPP_EXTERN_C String_t* _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39;
IL2CPP_EXTERN_C String_t* _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7;
IL2CPP_EXTERN_C String_t* _stringLiteral9B4FE2D8244D82F2F06CBDC652CCDA46B72AC548;
IL2CPP_EXTERN_C String_t* _stringLiteralABD5F4324F8E290A780012AFF491A3597F139F66;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77;
IL2CPP_EXTERN_C String_t* _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B;
IL2CPP_EXTERN_C const RuntimeMethod* BaseDataProvider_1_get_Service_m7EC337C959E1DC2ED760B4572120C2C82EFC7B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKGGVHand_tB9B084E9DA9204848E8A9D4ED352BDC7E34D05FD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mE3BAAFF9B4D2B310CA5D6503A276558BF98C0DF4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource__cctor_mD1B10980D611E5667B33D5D63A73DF10130FDCC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HPMotionController_UpdateController_m84AF81AF5D2482D6141E70FFCFDED021BB64B7E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HPMotionController__cctor_m641E34B939CA8AD2052B0607CB988881BD493AE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HPMotionController__ctor_m590C502340D85D6699179B6E053EA4FE0A75295A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547ADMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings__ctor_m992951B2D715D4A56481C876879C0A71514EC792_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityCameraSettings_get_IsOpaque_m72EEEF25835B5CB0DA49C32ED1F2F40A4B8FB698_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_CheckCapability_m7BA3B235FF5C867FB92AF4924B585E1653AD9E1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Enable_m5AC70ED00F14AFFEEFBA441236445ED293DBFF9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetControllerType_m9714A93D9F2843D50FD4AC36CB58465CAD46BF45_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m73375D676EFA4ABAFE719B160327D809DDBDE42F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_Update_mAA182B766208006257659A8EA7571734FB2992EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager__ctor_m9E9C20DD08870DB5C9471910BC58F8BC6E97148F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityDeviceManager_get_IsActiveLoader_m83395A8CF489877989A942BE9FBE66AD8BB05E7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m559825DC5CB239C1E7CE14C80475FF30DFD11333_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__cctor_m85955C2D4B36B9A80CE638E7D7080CB9004279F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealitySpatialMeshObserver__ctor_mE681D08E6441E593967E3684C59031FAFA7B4B7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_m2606C2B29B60B98BD3F5A64E7A7A51A5260BB86CMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_m9EF9528DDD86A0AE45C5A80CDEDDCC281ACBC068Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_mDEE6E5717351FF43CFEB2D2E4323EEC6084BC4D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateController_m9AA4EFCD3C832492F0654151346AAE10B6AA4BED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m2F93F620A171C51B210D470001E317E95D7C5349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__cctor_m8234DF60652E4DB83F1149681920906E67512D81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand__ctor_m8E896214B1DA2534728A35BF3543FE7D386FAF5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKGGVHand__ctor_mF8BAE3D1873AC6B7C0528CE65F5BE5CC99716D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m0DF54E9E97DE62CF5D38C685509746689B7331E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m2A8530ECE7F0B9AD5ABAAEEF81271FCCD8B6ADCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController__cctor_m1AC3EB328212877AC44D477B85D06E9631EE1FD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController__ctor_m20EDA63BADDA35E73A4656383904F125AD07B698_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96_MetadataUsageId;
struct IHeadPose_t3831EE6DC460E4FA518F90B81B778DA48188092E;
struct IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E;
struct ISpatialCoordinateSystem_t04CC30DCD4E391F17E2FB548A4B55B9D8BBA5EA3;
struct ISpatialInteractionSourceState_t7819CBCDBD13F7DB715D2EFC13F79467B2D07C99;
struct ISpatialInteractionSource_t6D3E806945AEAFC89DAF792071E009B85AD8DC81;
struct ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245;

struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA;
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1;
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB8F60B7F339A61DBDF45DCE33CA247B4B1607410 
{
public:

public:
};


// System.Object

// Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
struct NOVTABLE ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialPointerPoseStatics_TryGetAtTimestamp_mE239221196DF618AC4DC9B5CCC696B64277E6BEB(ISpatialCoordinateSystem_t04CC30DCD4E391F17E2FB548A4B55B9D8BBA5EA3* ___coordinateSystem0, IPerceptionTimestamp_t5F33F9E30A183CD55EFF379B5377A2861C7FD96E* ___timestamp1, ISpatialPointerPose_t29F1DD390048F10CA0FA7F119B4D9127602A8245** comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider
struct XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___entries_1)); }
	inline EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCE92978401B6E88C4A837958998A6DD61C63CD2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___keys_7)); }
	inline KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9B3F4312810F6E987754407200C69F9F8620465A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ___values_8)); }
	inline ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC935A0CB8F2162DB8392B9187AB1302A3041AC0B * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.Bone>
struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____items_1)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__items_1() const { return ____items_1; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_StaticFields, ____emptyArray_5)); }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.__Il2CppComObject


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
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
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
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


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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


// System.Nullable`1<System.Boolean>
struct Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
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


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// UnityEngine.XR.Bone
struct Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 
{
public:
	// System.UInt64 UnityEngine.XR.Bone::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Bone::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.Hand
struct Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 
{
public:
	// System.UInt64 UnityEngine.XR.Hand::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.UInt32 UnityEngine.XR.Hand::m_FeatureIndex
	uint32_t ___m_FeatureIndex_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_FeatureIndex_1() { return static_cast<int32_t>(offsetof(Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3, ___m_FeatureIndex_1)); }
	inline uint32_t get_m_FeatureIndex_1() const { return ___m_FeatureIndex_1; }
	inline uint32_t* get_address_of_m_FeatureIndex_1() { return &___m_FeatureIndex_1; }
	inline void set_m_FeatureIndex_1(uint32_t value)
	{
		___m_FeatureIndex_1 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_0;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_1;

public:
	inline static int32_t get_offset_of_m_DeviceId_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_0)); }
	inline uint64_t get_m_DeviceId_0() const { return ___m_DeviceId_0; }
	inline uint64_t* get_address_of_m_DeviceId_0() { return &___m_DeviceId_0; }
	inline void set_m_DeviceId_0(uint64_t value)
	{
		___m_DeviceId_0 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_1)); }
	inline bool get_m_Initialized_1() const { return ___m_Initialized_1; }
	inline bool* get_address_of_m_Initialized_1() { return &___m_Initialized_1; }
	inline void set_m_Initialized_1(bool value)
	{
		___m_Initialized_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_0;
	int32_t ___m_Initialized_1;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes>
struct InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>
struct InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Windows.Perception.People.HeadPose
struct HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.PerceptionTimestamp
struct PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialPointerPose
struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8  : public Il2CppComObject
{
public:

public:
};

struct SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialPointerPoseStatics
	ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialPointerPose"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* get_____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810()
	{
		ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810* returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810>((&____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialPointerPoseStatics_t70420F0518CAEACFA6AF9786013EB1C6EE90B810;
			}
		}
		return returnValue;
	}
};


// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isInitialized
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isInitialized_4;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isEnabled
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isEnabled_5;
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.BaseService::isMarkedDestroyed
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isMarkedDestroyed_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_4() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isInitialized_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isInitialized_4() const { return ___isInitialized_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isInitialized_4() { return &___isInitialized_4; }
	inline void set_isInitialized_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isInitialized_4 = value;
	}

	inline static int32_t get_offset_of_isEnabled_5() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isEnabled_5)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isEnabled_5() const { return ___isEnabled_5; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isEnabled_5() { return &___isEnabled_5; }
	inline void set_isEnabled_5(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isMarkedDestroyed_6() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___isMarkedDestroyed_6)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isMarkedDestroyed_6() const { return ___isMarkedDestroyed_6; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isMarkedDestroyed_6() { return &___isMarkedDestroyed_6; }
	inline void set_isMarkedDestroyed_6(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isMarkedDestroyed_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t358986D22B64DCDBE1EC628624BB92B25DED5E31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputSourceType
struct InputSourceType_t7E93B54E969B1ADEFA7692E15D26DD751A47D22A 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputSourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputSourceType_t7E93B54E969B1ADEFA7692E15D26DD751A47D22A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType
struct SupportedControllerType_t5F457C64820CC9C7A23743C07FC033ABE19D72F9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.SupportedControllerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedControllerType_t5F457C64820CC9C7A23743C07FC033ABE19D72F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityCapability
struct MixedRealityCapability_tF03238F01776397C3AAF6C52CD2889416143B722 
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


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions
struct SpatialAwarenessMeshDisplayOptions_t0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshDisplayOptions_t0C105E1030E2BAFC5F09AE2A0C5B9A38CA360C87, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail
struct SpatialAwarenessMeshLevelOfDetail_t2B4E2297D16A89F51FCCC5E93A0784E45A2565FF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialAwarenessMeshLevelOfDetail_t2B4E2297D16A89F51FCCC5E93A0784E45A2565FF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_tA4B3C624DF9D6B518A15D682BA0207573D1611EA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tA4B3C624DF9D6B518A15D682BA0207573D1611EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior
struct AutoStartBehavior_t9BBC9C0AE47250C9034F4B386E2D1C6BA21D5839 
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t45CEF046648179DA1FDF98C495D40AA34823C164, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.VolumeType
struct VolumeType_t216D85DC8F2789C4360056C5953985C65B834163 
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


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// Windows.UI.Input.Spatial.SpatialInteractionManager Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialInteractionManager
	SpatialInteractionManager_t5887B5CBAB5D33035034BFEC7869313C9A02BD53 * ___spatialInteractionManager_1;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_2;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___spatialCoordinateSystem_3;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_spatialInteractionManager_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields, ___spatialInteractionManager_1)); }
	inline SpatialInteractionManager_t5887B5CBAB5D33035034BFEC7869313C9A02BD53 * get_spatialInteractionManager_1() const { return ___spatialInteractionManager_1; }
	inline SpatialInteractionManager_t5887B5CBAB5D33035034BFEC7869313C9A02BD53 ** get_address_of_spatialInteractionManager_1() { return &___spatialInteractionManager_1; }
	inline void set_spatialInteractionManager_1(SpatialInteractionManager_t5887B5CBAB5D33035034BFEC7869313C9A02BD53 * value)
	{
		___spatialInteractionManager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialInteractionManager_1), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields, ___currentSpatialCoordinateSystemPtr_2)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_2() const { return ___currentSpatialCoordinateSystemPtr_2; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_2() { return &___currentSpatialCoordinateSystemPtr_2; }
	inline void set_currentSpatialCoordinateSystemPtr_2(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_2 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields, ___spatialCoordinateSystem_3)); }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * get_spatialCoordinateSystem_3() const { return ___spatialCoordinateSystem_3; }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 ** get_address_of_spatialCoordinateSystem_3() { return &___spatialCoordinateSystem_3; }
	inline void set_spatialCoordinateSystem_3(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * value)
	{
		___spatialCoordinateSystem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages
struct CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18  : public RuntimeObject
{
public:

public:
};

struct CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___PointerPosition_0;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> Microsoft.MixedReality.Toolkit.XRSDK.Input.CustomUsages::PointerRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___PointerRotation_1;

public:
	inline static int32_t get_offset_of_PointerPosition_0() { return static_cast<int32_t>(offsetof(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_StaticFields, ___PointerPosition_0)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_PointerPosition_0() const { return ___PointerPosition_0; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_PointerPosition_0() { return &___PointerPosition_0; }
	inline void set_PointerPosition_0(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___PointerPosition_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerPosition_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_PointerRotation_1() { return static_cast<int32_t>(offsetof(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_StaticFields, ___PointerRotation_1)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_PointerRotation_1() const { return ___PointerRotation_1; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_PointerRotation_1() { return &___PointerRotation_1; }
	inline void set_PointerRotation_1(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___PointerRotation_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___PointerRotation_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_dateTime_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
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


// Unity.Profiling.ProfilerMarker/AutoScope
struct AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker/AutoScope::m_Ptr
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


// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.XR.CommonUsages
struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321  : public RuntimeObject
{
public:

public:
};

struct CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::isTracked
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___isTracked_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryButton_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primaryTouch_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryButton_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondaryTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondaryTouch_4;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::gripButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___gripButton_5;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::triggerButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___triggerButton_6;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::menuButton
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___menuButton_7;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisClick_8;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::primary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___primary2DAxisTouch_9;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisClick
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisClick_10;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::secondary2DAxisTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___secondary2DAxisTouch_11;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::userPresence
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___userPresence_12;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState> UnityEngine.XR.CommonUsages::trackingState
	InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___trackingState_13;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::batteryLevel
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___batteryLevel_14;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::trigger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___trigger_15;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::grip
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___grip_16;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::primary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___primary2DAxis_17;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::secondary2DAxis
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___secondary2DAxis_18;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::devicePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___devicePosition_19;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyePosition_20;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyePosition_21;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyePosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyePosition_22;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraPosition
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraPosition_23;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceVelocity_24;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularVelocity_25;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeVelocity_26;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularVelocity_27;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeVelocity_28;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularVelocity_29;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeVelocity_30;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularVelocity_31;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraVelocity_32;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularVelocity
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularVelocity_33;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAcceleration_34;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::deviceAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___deviceAngularAcceleration_35;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAcceleration_36;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::leftEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___leftEyeAngularAcceleration_37;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAcceleration_38;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::rightEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___rightEyeAngularAcceleration_39;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAcceleration_40;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::centerEyeAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___centerEyeAngularAcceleration_41;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAcceleration_42;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3> UnityEngine.XR.CommonUsages::colorCameraAngularAcceleration
	InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___colorCameraAngularAcceleration_43;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::deviceRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___deviceRotation_44;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::leftEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___leftEyeRotation_45;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::rightEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___rightEyeRotation_46;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::centerEyeRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___centerEyeRotation_47;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion> UnityEngine.XR.CommonUsages::colorCameraRotation
	InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___colorCameraRotation_48;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand> UnityEngine.XR.CommonUsages::handData
	InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___handData_49;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Eyes> UnityEngine.XR.CommonUsages::eyesData
	InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  ___eyesData_50;
	// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2> UnityEngine.XR.CommonUsages::dPad
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___dPad_51;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexFinger_52;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::middleFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___middleFinger_53;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::ringFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___ringFinger_54;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::pinkyFinger
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___pinkyFinger_55;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> UnityEngine.XR.CommonUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_56;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::indexTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___indexTouch_57;
	// UnityEngine.XR.InputFeatureUsage`1<System.Single> UnityEngine.XR.CommonUsages::thumbTouch
	InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___thumbTouch_58;

public:
	inline static int32_t get_offset_of_isTracked_0() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___isTracked_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_isTracked_0() const { return ___isTracked_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_isTracked_0() { return &___isTracked_0; }
	inline void set_isTracked_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___isTracked_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___isTracked_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryButton_1() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryButton_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryButton_1() const { return ___primaryButton_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryButton_1() { return &___primaryButton_1; }
	inline void set_primaryButton_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryButton_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryButton_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primaryTouch_2() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primaryTouch_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primaryTouch_2() const { return ___primaryTouch_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primaryTouch_2() { return &___primaryTouch_2; }
	inline void set_primaryTouch_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primaryTouch_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primaryTouch_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryButton_3() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryButton_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryButton_3() const { return ___secondaryButton_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryButton_3() { return &___secondaryButton_3; }
	inline void set_secondaryButton_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryButton_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryButton_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondaryTouch_4() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondaryTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondaryTouch_4() const { return ___secondaryTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondaryTouch_4() { return &___secondaryTouch_4; }
	inline void set_secondaryTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondaryTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondaryTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_gripButton_5() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___gripButton_5)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_gripButton_5() const { return ___gripButton_5; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_gripButton_5() { return &___gripButton_5; }
	inline void set_gripButton_5(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___gripButton_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___gripButton_5))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_triggerButton_6() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___triggerButton_6)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_triggerButton_6() const { return ___triggerButton_6; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_triggerButton_6() { return &___triggerButton_6; }
	inline void set_triggerButton_6(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___triggerButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___triggerButton_6))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_menuButton_7() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___menuButton_7)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_menuButton_7() const { return ___menuButton_7; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_menuButton_7() { return &___menuButton_7; }
	inline void set_menuButton_7(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___menuButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___menuButton_7))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisClick_8() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisClick_8)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisClick_8() const { return ___primary2DAxisClick_8; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisClick_8() { return &___primary2DAxisClick_8; }
	inline void set_primary2DAxisClick_8(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisClick_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisClick_8))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxisTouch_9() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxisTouch_9)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_primary2DAxisTouch_9() const { return ___primary2DAxisTouch_9; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_primary2DAxisTouch_9() { return &___primary2DAxisTouch_9; }
	inline void set_primary2DAxisTouch_9(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___primary2DAxisTouch_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxisTouch_9))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisClick_10() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisClick_10)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisClick_10() const { return ___secondary2DAxisClick_10; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisClick_10() { return &___secondary2DAxisClick_10; }
	inline void set_secondary2DAxisClick_10(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisClick_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisClick_10))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxisTouch_11() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxisTouch_11)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_secondary2DAxisTouch_11() const { return ___secondary2DAxisTouch_11; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_secondary2DAxisTouch_11() { return &___secondary2DAxisTouch_11; }
	inline void set_secondary2DAxisTouch_11(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___secondary2DAxisTouch_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxisTouch_11))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_userPresence_12() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___userPresence_12)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_userPresence_12() const { return ___userPresence_12; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_userPresence_12() { return &___userPresence_12; }
	inline void set_userPresence_12(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___userPresence_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___userPresence_12))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trackingState_13() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trackingState_13)); }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  get_trackingState_13() const { return ___trackingState_13; }
	inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB * get_address_of_trackingState_13() { return &___trackingState_13; }
	inline void set_trackingState_13(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  value)
	{
		___trackingState_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trackingState_13))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_batteryLevel_14() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___batteryLevel_14)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_batteryLevel_14() const { return ___batteryLevel_14; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_batteryLevel_14() { return &___batteryLevel_14; }
	inline void set_batteryLevel_14(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___batteryLevel_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___batteryLevel_14))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_trigger_15() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___trigger_15)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_trigger_15() const { return ___trigger_15; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_trigger_15() { return &___trigger_15; }
	inline void set_trigger_15(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___trigger_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___trigger_15))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_grip_16() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___grip_16)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_grip_16() const { return ___grip_16; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_grip_16() { return &___grip_16; }
	inline void set_grip_16(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___grip_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grip_16))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_primary2DAxis_17() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___primary2DAxis_17)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_primary2DAxis_17() const { return ___primary2DAxis_17; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_primary2DAxis_17() { return &___primary2DAxis_17; }
	inline void set_primary2DAxis_17(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___primary2DAxis_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___primary2DAxis_17))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_secondary2DAxis_18() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___secondary2DAxis_18)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_secondary2DAxis_18() const { return ___secondary2DAxis_18; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_secondary2DAxis_18() { return &___secondary2DAxis_18; }
	inline void set_secondary2DAxis_18(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___secondary2DAxis_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___secondary2DAxis_18))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_devicePosition_19() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___devicePosition_19)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_devicePosition_19() const { return ___devicePosition_19; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_devicePosition_19() { return &___devicePosition_19; }
	inline void set_devicePosition_19(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___devicePosition_19 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___devicePosition_19))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyePosition_20() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyePosition_20)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyePosition_20() const { return ___leftEyePosition_20; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyePosition_20() { return &___leftEyePosition_20; }
	inline void set_leftEyePosition_20(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyePosition_20 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyePosition_20))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyePosition_21() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyePosition_21)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyePosition_21() const { return ___rightEyePosition_21; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyePosition_21() { return &___rightEyePosition_21; }
	inline void set_rightEyePosition_21(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyePosition_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyePosition_21))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyePosition_22() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyePosition_22)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyePosition_22() const { return ___centerEyePosition_22; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyePosition_22() { return &___centerEyePosition_22; }
	inline void set_centerEyePosition_22(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyePosition_22 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyePosition_22))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraPosition_23() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraPosition_23)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraPosition_23() const { return ___colorCameraPosition_23; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraPosition_23() { return &___colorCameraPosition_23; }
	inline void set_colorCameraPosition_23(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraPosition_23 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraPosition_23))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceVelocity_24() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceVelocity_24)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceVelocity_24() const { return ___deviceVelocity_24; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceVelocity_24() { return &___deviceVelocity_24; }
	inline void set_deviceVelocity_24(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceVelocity_24 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceVelocity_24))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularVelocity_25() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularVelocity_25)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularVelocity_25() const { return ___deviceAngularVelocity_25; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularVelocity_25() { return &___deviceAngularVelocity_25; }
	inline void set_deviceAngularVelocity_25(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularVelocity_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularVelocity_25))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeVelocity_26() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeVelocity_26)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeVelocity_26() const { return ___leftEyeVelocity_26; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeVelocity_26() { return &___leftEyeVelocity_26; }
	inline void set_leftEyeVelocity_26(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeVelocity_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeVelocity_26))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularVelocity_27() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularVelocity_27)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularVelocity_27() const { return ___leftEyeAngularVelocity_27; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularVelocity_27() { return &___leftEyeAngularVelocity_27; }
	inline void set_leftEyeAngularVelocity_27(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularVelocity_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularVelocity_27))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeVelocity_28() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeVelocity_28)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeVelocity_28() const { return ___rightEyeVelocity_28; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeVelocity_28() { return &___rightEyeVelocity_28; }
	inline void set_rightEyeVelocity_28(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeVelocity_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeVelocity_28))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularVelocity_29() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularVelocity_29)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularVelocity_29() const { return ___rightEyeAngularVelocity_29; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularVelocity_29() { return &___rightEyeAngularVelocity_29; }
	inline void set_rightEyeAngularVelocity_29(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularVelocity_29 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularVelocity_29))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeVelocity_30() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeVelocity_30)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeVelocity_30() const { return ___centerEyeVelocity_30; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeVelocity_30() { return &___centerEyeVelocity_30; }
	inline void set_centerEyeVelocity_30(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeVelocity_30 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeVelocity_30))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularVelocity_31() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularVelocity_31)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularVelocity_31() const { return ___centerEyeAngularVelocity_31; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularVelocity_31() { return &___centerEyeAngularVelocity_31; }
	inline void set_centerEyeAngularVelocity_31(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularVelocity_31 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularVelocity_31))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraVelocity_32() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraVelocity_32)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraVelocity_32() const { return ___colorCameraVelocity_32; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraVelocity_32() { return &___colorCameraVelocity_32; }
	inline void set_colorCameraVelocity_32(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraVelocity_32 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraVelocity_32))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularVelocity_33() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularVelocity_33)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularVelocity_33() const { return ___colorCameraAngularVelocity_33; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularVelocity_33() { return &___colorCameraAngularVelocity_33; }
	inline void set_colorCameraAngularVelocity_33(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularVelocity_33 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularVelocity_33))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAcceleration_34() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAcceleration_34)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAcceleration_34() const { return ___deviceAcceleration_34; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAcceleration_34() { return &___deviceAcceleration_34; }
	inline void set_deviceAcceleration_34(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAcceleration_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAcceleration_34))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceAngularAcceleration_35() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceAngularAcceleration_35)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_deviceAngularAcceleration_35() const { return ___deviceAngularAcceleration_35; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_deviceAngularAcceleration_35() { return &___deviceAngularAcceleration_35; }
	inline void set_deviceAngularAcceleration_35(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___deviceAngularAcceleration_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceAngularAcceleration_35))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAcceleration_36() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAcceleration_36)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAcceleration_36() const { return ___leftEyeAcceleration_36; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAcceleration_36() { return &___leftEyeAcceleration_36; }
	inline void set_leftEyeAcceleration_36(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAcceleration_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAcceleration_36))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeAngularAcceleration_37() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeAngularAcceleration_37)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_leftEyeAngularAcceleration_37() const { return ___leftEyeAngularAcceleration_37; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_leftEyeAngularAcceleration_37() { return &___leftEyeAngularAcceleration_37; }
	inline void set_leftEyeAngularAcceleration_37(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___leftEyeAngularAcceleration_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeAngularAcceleration_37))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAcceleration_38() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAcceleration_38)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAcceleration_38() const { return ___rightEyeAcceleration_38; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAcceleration_38() { return &___rightEyeAcceleration_38; }
	inline void set_rightEyeAcceleration_38(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAcceleration_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAcceleration_38))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeAngularAcceleration_39() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeAngularAcceleration_39)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_rightEyeAngularAcceleration_39() const { return ___rightEyeAngularAcceleration_39; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_rightEyeAngularAcceleration_39() { return &___rightEyeAngularAcceleration_39; }
	inline void set_rightEyeAngularAcceleration_39(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___rightEyeAngularAcceleration_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeAngularAcceleration_39))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAcceleration_40() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAcceleration_40)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAcceleration_40() const { return ___centerEyeAcceleration_40; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAcceleration_40() { return &___centerEyeAcceleration_40; }
	inline void set_centerEyeAcceleration_40(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAcceleration_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAcceleration_40))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeAngularAcceleration_41() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeAngularAcceleration_41)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_centerEyeAngularAcceleration_41() const { return ___centerEyeAngularAcceleration_41; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_centerEyeAngularAcceleration_41() { return &___centerEyeAngularAcceleration_41; }
	inline void set_centerEyeAngularAcceleration_41(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___centerEyeAngularAcceleration_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeAngularAcceleration_41))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAcceleration_42() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAcceleration_42)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAcceleration_42() const { return ___colorCameraAcceleration_42; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAcceleration_42() { return &___colorCameraAcceleration_42; }
	inline void set_colorCameraAcceleration_42(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAcceleration_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAcceleration_42))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraAngularAcceleration_43() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraAngularAcceleration_43)); }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  get_colorCameraAngularAcceleration_43() const { return ___colorCameraAngularAcceleration_43; }
	inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 * get_address_of_colorCameraAngularAcceleration_43() { return &___colorCameraAngularAcceleration_43; }
	inline void set_colorCameraAngularAcceleration_43(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  value)
	{
		___colorCameraAngularAcceleration_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraAngularAcceleration_43))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_deviceRotation_44() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___deviceRotation_44)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_deviceRotation_44() const { return ___deviceRotation_44; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_deviceRotation_44() { return &___deviceRotation_44; }
	inline void set_deviceRotation_44(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___deviceRotation_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___deviceRotation_44))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_leftEyeRotation_45() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___leftEyeRotation_45)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_leftEyeRotation_45() const { return ___leftEyeRotation_45; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_leftEyeRotation_45() { return &___leftEyeRotation_45; }
	inline void set_leftEyeRotation_45(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___leftEyeRotation_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___leftEyeRotation_45))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_rightEyeRotation_46() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___rightEyeRotation_46)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_rightEyeRotation_46() const { return ___rightEyeRotation_46; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_rightEyeRotation_46() { return &___rightEyeRotation_46; }
	inline void set_rightEyeRotation_46(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___rightEyeRotation_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___rightEyeRotation_46))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_centerEyeRotation_47() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___centerEyeRotation_47)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_centerEyeRotation_47() const { return ___centerEyeRotation_47; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_centerEyeRotation_47() { return &___centerEyeRotation_47; }
	inline void set_centerEyeRotation_47(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___centerEyeRotation_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___centerEyeRotation_47))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorCameraRotation_48() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___colorCameraRotation_48)); }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  get_colorCameraRotation_48() const { return ___colorCameraRotation_48; }
	inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 * get_address_of_colorCameraRotation_48() { return &___colorCameraRotation_48; }
	inline void set_colorCameraRotation_48(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  value)
	{
		___colorCameraRotation_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorCameraRotation_48))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_handData_49() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___handData_49)); }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  get_handData_49() const { return ___handData_49; }
	inline InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF * get_address_of_handData_49() { return &___handData_49; }
	inline void set_handData_49(InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  value)
	{
		___handData_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___handData_49))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_eyesData_50() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___eyesData_50)); }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  get_eyesData_50() const { return ___eyesData_50; }
	inline InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83 * get_address_of_eyesData_50() { return &___eyesData_50; }
	inline void set_eyesData_50(InputFeatureUsage_1_t636A28A605D8F07DFB9E82AC9EA4E5DAC80E7F83  value)
	{
		___eyesData_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___eyesData_50))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_dPad_51() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___dPad_51)); }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  get_dPad_51() const { return ___dPad_51; }
	inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A * get_address_of_dPad_51() { return &___dPad_51; }
	inline void set_dPad_51(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  value)
	{
		___dPad_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___dPad_51))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexFinger_52() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexFinger_52)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexFinger_52() const { return ___indexFinger_52; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexFinger_52() { return &___indexFinger_52; }
	inline void set_indexFinger_52(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexFinger_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexFinger_52))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_middleFinger_53() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___middleFinger_53)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_middleFinger_53() const { return ___middleFinger_53; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_middleFinger_53() { return &___middleFinger_53; }
	inline void set_middleFinger_53(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___middleFinger_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___middleFinger_53))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_ringFinger_54() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___ringFinger_54)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_ringFinger_54() const { return ___ringFinger_54; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_ringFinger_54() { return &___ringFinger_54; }
	inline void set_ringFinger_54(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___ringFinger_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___ringFinger_54))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_pinkyFinger_55() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___pinkyFinger_55)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_pinkyFinger_55() const { return ___pinkyFinger_55; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_pinkyFinger_55() { return &___pinkyFinger_55; }
	inline void set_pinkyFinger_55(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___pinkyFinger_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pinkyFinger_55))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_56() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbrest_56)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_56() const { return ___thumbrest_56; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_56() { return &___thumbrest_56; }
	inline void set_thumbrest_56(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_56))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_57() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___indexTouch_57)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_indexTouch_57() const { return ___indexTouch_57; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_indexTouch_57() { return &___indexTouch_57; }
	inline void set_indexTouch_57(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___indexTouch_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_57))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_58() { return static_cast<int32_t>(offsetof(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields, ___thumbTouch_58)); }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  get_thumbTouch_58() const { return ___thumbTouch_58; }
	inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 * get_address_of_thumbTouch_58() { return &___thumbTouch_58; }
	inline void set_thumbTouch_58(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  value)
	{
		___thumbTouch_58 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_58))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// UnityEngine.XR.HandFinger
struct HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA 
{
public:
	// System.Int32 UnityEngine.XR.HandFinger::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct SpatialInteractionSourceHandedness_tCE9745DD164F8D38487ABC6A6CD6BC9CAD0B5079 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_tCE9745DD164F8D38487ABC6A6CD6BC9CAD0B5079, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_tD4B307AD5130D2B3658A0A6A8FA2DAA7051F9222 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_tD4B307AD5130D2B3658A0A6A8FA2DAA7051F9222, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct BaseDataProvider_1_t4F79F2E0F3418202BC5829F534DD0452F91825D2  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t4F79F2E0F3418202BC5829F534DD0452F91825D2, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t4F79F2E0F3418202BC5829F534DD0452F91825D2, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>
struct BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem>
struct BaseDataProvider_1_tCAE35A255209643B9851EA8BB0631A0A1FA36400  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tCAE35A255209643B9851EA8BB0631A0A1FA36400, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_tCAE35A255209643B9851EA8BB0631A0A1FA36400, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>
struct BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_8;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject * ___U3CServiceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278, ___U3CRegistrarU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_8() const { return ___U3CRegistrarU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_8() { return &___U3CRegistrarU3Ek__BackingField_8; }
	inline void set_U3CRegistrarU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278, ___U3CServiceU3Ek__BackingField_9)); }
	inline RuntimeObject * get_U3CServiceU3Ek__BackingField_9() const { return ___U3CServiceU3Ek__BackingField_9; }
	inline RuntimeObject ** get_address_of_U3CServiceU3Ek__BackingField_9() { return &___U3CServiceU3Ek__BackingField_9; }
	inline void set_U3CServiceU3Ek__BackingField_9(RuntimeObject * value)
	{
		___U3CServiceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseController
struct BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::<Definition>k__BackingField
	RuntimeObject* ___U3CDefinitionU3Ek__BackingField_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Input.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___U3CInteractionsU3Ek__BackingField_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<AngularVelocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CAngularVelocityU3Ek__BackingField_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.BaseController::<Velocity>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CVelocityU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CDefinitionU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CDefinitionU3Ek__BackingField_0() const { return ___U3CDefinitionU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CDefinitionU3Ek__BackingField_0() { return &___U3CDefinitionU3Ek__BackingField_0; }
	inline void set_U3CDefinitionU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CDefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDefinitionU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CTrackingStateU3Ek__BackingField_2)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_2() const { return ___U3CTrackingStateU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_2() { return &___U3CTrackingStateU3Ek__BackingField_2; }
	inline void set_U3CTrackingStateU3Ek__BackingField_2(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CControllerHandednessU3Ek__BackingField_3)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_3() const { return ___U3CControllerHandednessU3Ek__BackingField_3; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_3() { return &___U3CControllerHandednessU3Ek__BackingField_3; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_3(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CInputSourceU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_4() const { return ___U3CInputSourceU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_4() { return &___U3CInputSourceU3Ek__BackingField_4; }
	inline void set_U3CInputSourceU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CVisualizerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_5() const { return ___U3CVisualizerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_5() { return &___U3CVisualizerU3Ek__BackingField_5; }
	inline void set_U3CVisualizerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CVisualizerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsPositionAvailableU3Ek__BackingField_6)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_6() const { return ___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_6() { return &___U3CIsPositionAvailableU3Ek__BackingField_6; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_6(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsPositionApproximateU3Ek__BackingField_7)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_7() const { return ___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_7() { return &___U3CIsPositionApproximateU3Ek__BackingField_7; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_7(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CIsRotationAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_8() const { return ___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_8() { return &___U3CIsRotationAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CInteractionsU3Ek__BackingField_9)); }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* get_U3CInteractionsU3Ek__BackingField_9() const { return ___U3CInteractionsU3Ek__BackingField_9; }
	inline MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA** get_address_of_U3CInteractionsU3Ek__BackingField_9() { return &___U3CInteractionsU3Ek__BackingField_9; }
	inline void set_U3CInteractionsU3Ek__BackingField_9(MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* value)
	{
		___U3CInteractionsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInteractionsU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAngularVelocityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CAngularVelocityU3Ek__BackingField_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CAngularVelocityU3Ek__BackingField_10() const { return ___U3CAngularVelocityU3Ek__BackingField_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CAngularVelocityU3Ek__BackingField_10() { return &___U3CAngularVelocityU3Ek__BackingField_10; }
	inline void set_U3CAngularVelocityU3Ek__BackingField_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CAngularVelocityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CVelocityU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B, ___U3CVelocityU3Ek__BackingField_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CVelocityU3Ek__BackingField_11() const { return ___U3CVelocityU3Ek__BackingField_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CVelocityU3Ek__BackingField_11() { return &___U3CVelocityU3Ek__BackingField_11; }
	inline void set_U3CVelocityU3Ek__BackingField_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CVelocityU3Ek__BackingField_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition
struct BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseInputSourceDefinition::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6, ___U3CHandednessU3Ek__BackingField_0)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_0() const { return ___U3CHandednessU3Ek__BackingField_0; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_0() { return &___U3CHandednessU3Ek__BackingField_0; }
	inline void set_U3CHandednessU3Ek__BackingField_0(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider
struct WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::controller
	RuntimeObject* ___controller_0;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshObserver
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * ___handMeshObserver_1;
	// System.UInt16[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndices
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___handMeshTriangleIndices_2;
	// Windows.Perception.People.HandMeshVertex[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::vertexAndNormals
	HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* ___vertexAndNormals_3;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshVerticesUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshVerticesUnity_4;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshNormalsUnity
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___handMeshNormalsUnity_5;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshTriangleIndicesUnity
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___handMeshTriangleIndicesUnity_6;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::handMeshUVsUnity
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___handMeshUVsUnity_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_8;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___controller_0)); }
	inline RuntimeObject* get_controller_0() const { return ___controller_0; }
	inline RuntimeObject** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(RuntimeObject* value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshObserver_1)); }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * get_handMeshObserver_1() const { return ___handMeshObserver_1; }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 ** get_address_of_handMeshObserver_1() { return &___handMeshObserver_1; }
	inline void set_handMeshObserver_1(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * value)
	{
		___handMeshObserver_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_1), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshTriangleIndices_2)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_handMeshTriangleIndices_2() const { return ___handMeshTriangleIndices_2; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_handMeshTriangleIndices_2() { return &___handMeshTriangleIndices_2; }
	inline void set_handMeshTriangleIndices_2(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___handMeshTriangleIndices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertexAndNormals_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___vertexAndNormals_3)); }
	inline HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* get_vertexAndNormals_3() const { return ___vertexAndNormals_3; }
	inline HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE** get_address_of_vertexAndNormals_3() { return &___vertexAndNormals_3; }
	inline void set_vertexAndNormals_3(HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* value)
	{
		___vertexAndNormals_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertexAndNormals_3), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVerticesUnity_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshVerticesUnity_4)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshVerticesUnity_4() const { return ___handMeshVerticesUnity_4; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshVerticesUnity_4() { return &___handMeshVerticesUnity_4; }
	inline void set_handMeshVerticesUnity_4(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshVerticesUnity_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshVerticesUnity_4), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshNormalsUnity_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshNormalsUnity_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_handMeshNormalsUnity_5() const { return ___handMeshNormalsUnity_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_handMeshNormalsUnity_5() { return &___handMeshNormalsUnity_5; }
	inline void set_handMeshNormalsUnity_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___handMeshNormalsUnity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshNormalsUnity_5), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndicesUnity_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshTriangleIndicesUnity_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_handMeshTriangleIndicesUnity_6() const { return ___handMeshTriangleIndicesUnity_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_handMeshTriangleIndicesUnity_6() { return &___handMeshTriangleIndicesUnity_6; }
	inline void set_handMeshTriangleIndicesUnity_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___handMeshTriangleIndicesUnity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndicesUnity_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshUVsUnity_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___handMeshUVsUnity_7)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_handMeshUVsUnity_7() const { return ___handMeshUVsUnity_7; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_handMeshUVsUnity_7() { return &___handMeshUVsUnity_7; }
	inline void set_handMeshUVsUnity_7(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___handMeshUVsUnity_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVsUnity_7), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6, ___hasRequestedHandMeshObserver_8)); }
	inline bool get_hasRequestedHandMeshObserver_8() const { return ___hasRequestedHandMeshObserver_8; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_8() { return &___hasRequestedHandMeshObserver_8; }
	inline void set_hasRequestedHandMeshObserver_8(bool value)
	{
		___hasRequestedHandMeshObserver_8 = value;
	}
};

struct WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandMeshPerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateHandMeshPerfMarker_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6_StaticFields, ___UpdateHandMeshPerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandMeshPerfMarker_9() const { return ___UpdateHandMeshPerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandMeshPerfMarker_9() { return &___UpdateHandMeshPerfMarker_9; }
	inline void set_UpdateHandMeshPerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandMeshPerfMarker_9 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
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
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
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


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_tC816D0C379DD15E72079C2A86BA85BA57F9D07CA  : public BaseDataProvider_1_t4F79F2E0F3418202BC5829F534DD0452F91825D2
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_tC816D0C379DD15E72079C2A86BA85BA57F9D07CA, ___U3CIsOpaqueU3Ek__BackingField_10)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_10() const { return ___U3CIsOpaqueU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_10() { return &___U3CIsOpaqueU3Ek__BackingField_10; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_10(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition
struct ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838  : public BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::unityJointPoses
	Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentIndexPose_5;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::minimumPinchDistance
	float ___minimumPinchDistance_6;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::maximumPinchDistance
	float ___maximumPinchDistance_7;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::enterPinchDistance
	float ___enterPinchDistance_8;
	// System.Single Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::exitPinchDistance
	float ___exitPinchDistance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isPinching
	bool ___isPinching_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isIndexGrabbing
	bool ___isIndexGrabbing_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isMiddleGrabbing
	bool ___isMiddleGrabbing_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::isThumbGrabbing
	bool ___isThumbGrabbing_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::previousReadyToTeleport
	bool ___previousReadyToTeleport_16;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityTeleportPointer Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::teleportPointer
	RuntimeObject* ___teleportPointer_17;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___U3CInputSourceU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_1() const { return ___U3CInputSourceU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_1() { return &___U3CInputSourceU3Ek__BackingField_1; }
	inline void set_U3CInputSourceU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___unityJointPoses_4)); }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___currentIndexPose_5)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_minimumPinchDistance_6() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___minimumPinchDistance_6)); }
	inline float get_minimumPinchDistance_6() const { return ___minimumPinchDistance_6; }
	inline float* get_address_of_minimumPinchDistance_6() { return &___minimumPinchDistance_6; }
	inline void set_minimumPinchDistance_6(float value)
	{
		___minimumPinchDistance_6 = value;
	}

	inline static int32_t get_offset_of_maximumPinchDistance_7() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___maximumPinchDistance_7)); }
	inline float get_maximumPinchDistance_7() const { return ___maximumPinchDistance_7; }
	inline float* get_address_of_maximumPinchDistance_7() { return &___maximumPinchDistance_7; }
	inline void set_maximumPinchDistance_7(float value)
	{
		___maximumPinchDistance_7 = value;
	}

	inline static int32_t get_offset_of_enterPinchDistance_8() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___enterPinchDistance_8)); }
	inline float get_enterPinchDistance_8() const { return ___enterPinchDistance_8; }
	inline float* get_address_of_enterPinchDistance_8() { return &___enterPinchDistance_8; }
	inline void set_enterPinchDistance_8(float value)
	{
		___enterPinchDistance_8 = value;
	}

	inline static int32_t get_offset_of_exitPinchDistance_9() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___exitPinchDistance_9)); }
	inline float get_exitPinchDistance_9() const { return ___exitPinchDistance_9; }
	inline float* get_address_of_exitPinchDistance_9() { return &___exitPinchDistance_9; }
	inline void set_exitPinchDistance_9(float value)
	{
		___exitPinchDistance_9 = value;
	}

	inline static int32_t get_offset_of_isPinching_10() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___isPinching_10)); }
	inline bool get_isPinching_10() const { return ___isPinching_10; }
	inline bool* get_address_of_isPinching_10() { return &___isPinching_10; }
	inline void set_isPinching_10(bool value)
	{
		___isPinching_10 = value;
	}

	inline static int32_t get_offset_of_isIndexGrabbing_11() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___isIndexGrabbing_11)); }
	inline bool get_isIndexGrabbing_11() const { return ___isIndexGrabbing_11; }
	inline bool* get_address_of_isIndexGrabbing_11() { return &___isIndexGrabbing_11; }
	inline void set_isIndexGrabbing_11(bool value)
	{
		___isIndexGrabbing_11 = value;
	}

	inline static int32_t get_offset_of_isMiddleGrabbing_12() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___isMiddleGrabbing_12)); }
	inline bool get_isMiddleGrabbing_12() const { return ___isMiddleGrabbing_12; }
	inline bool* get_address_of_isMiddleGrabbing_12() { return &___isMiddleGrabbing_12; }
	inline void set_isMiddleGrabbing_12(bool value)
	{
		___isMiddleGrabbing_12 = value;
	}

	inline static int32_t get_offset_of_isThumbGrabbing_13() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___isThumbGrabbing_13)); }
	inline bool get_isThumbGrabbing_13() const { return ___isThumbGrabbing_13; }
	inline bool* get_address_of_isThumbGrabbing_13() { return &___isThumbGrabbing_13; }
	inline void set_isThumbGrabbing_13(bool value)
	{
		___isThumbGrabbing_13 = value;
	}

	inline static int32_t get_offset_of_previousReadyToTeleport_16() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___previousReadyToTeleport_16)); }
	inline bool get_previousReadyToTeleport_16() const { return ___previousReadyToTeleport_16; }
	inline bool* get_address_of_previousReadyToTeleport_16() { return &___previousReadyToTeleport_16; }
	inline void set_previousReadyToTeleport_16(bool value)
	{
		___previousReadyToTeleport_16 = value;
	}

	inline static int32_t get_offset_of_teleportPointer_17() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838, ___teleportPointer_17)); }
	inline RuntimeObject* get_teleportPointer_17() const { return ___teleportPointer_17; }
	inline RuntimeObject** get_address_of_teleportPointer_17() { return &___teleportPointer_17; }
	inline void set_teleportPointer_17(RuntimeObject* value)
	{
		___teleportPointer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportPointer_17), (void*)value);
	}
};

struct ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJointsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandJointsPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPosePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateCurrentIndexPosePerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPosePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateCurrentTeleportPosePerfMarker_18;

public:
	inline static int32_t get_offset_of_UpdateHandJointsPerfMarker_14() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_StaticFields, ___UpdateHandJointsPerfMarker_14)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandJointsPerfMarker_14() const { return ___UpdateHandJointsPerfMarker_14; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandJointsPerfMarker_14() { return &___UpdateHandJointsPerfMarker_14; }
	inline void set_UpdateHandJointsPerfMarker_14(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandJointsPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentIndexPosePerfMarker_15() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_StaticFields, ___UpdateCurrentIndexPosePerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateCurrentIndexPosePerfMarker_15() const { return ___UpdateCurrentIndexPosePerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateCurrentIndexPosePerfMarker_15() { return &___UpdateCurrentIndexPosePerfMarker_15; }
	inline void set_UpdateCurrentIndexPosePerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateCurrentIndexPosePerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_UpdateCurrentTeleportPosePerfMarker_18() { return static_cast<int32_t>(offsetof(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_StaticFields, ___UpdateCurrentTeleportPosePerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateCurrentTeleportPosePerfMarker_18() const { return ___UpdateCurrentTeleportPosePerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateCurrentTeleportPosePerfMarker_18() { return &___UpdateCurrentTeleportPosePerfMarker_18; }
	inline void set_UpdateCurrentTeleportPosePerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateCurrentTeleportPosePerfMarker_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager
struct BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC  : public BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::enablePointerCache
	bool ___enablePointerCache_10;
	// Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager/PointerConfig[] Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::pointerConfigurations
	PointerConfigU5BU5D_tFF5D750ACD5998A5994F9B8EF58BCAA5F563B386* ___pointerConfigurations_11;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer,System.UInt32> Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::activePointersToConfig
	Dictionary_2_t96750716FF4F33B66CBE19A55C531D33FD8A0EA8 * ___activePointersToConfig_13;

public:
	inline static int32_t get_offset_of_enablePointerCache_10() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC, ___enablePointerCache_10)); }
	inline bool get_enablePointerCache_10() const { return ___enablePointerCache_10; }
	inline bool* get_address_of_enablePointerCache_10() { return &___enablePointerCache_10; }
	inline void set_enablePointerCache_10(bool value)
	{
		___enablePointerCache_10 = value;
	}

	inline static int32_t get_offset_of_pointerConfigurations_11() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC, ___pointerConfigurations_11)); }
	inline PointerConfigU5BU5D_tFF5D750ACD5998A5994F9B8EF58BCAA5F563B386* get_pointerConfigurations_11() const { return ___pointerConfigurations_11; }
	inline PointerConfigU5BU5D_tFF5D750ACD5998A5994F9B8EF58BCAA5F563B386** get_address_of_pointerConfigurations_11() { return &___pointerConfigurations_11; }
	inline void set_pointerConfigurations_11(PointerConfigU5BU5D_tFF5D750ACD5998A5994F9B8EF58BCAA5F563B386* value)
	{
		___pointerConfigurations_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerConfigurations_11), (void*)value);
	}

	inline static int32_t get_offset_of_activePointersToConfig_13() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC, ___activePointersToConfig_13)); }
	inline Dictionary_2_t96750716FF4F33B66CBE19A55C531D33FD8A0EA8 * get_activePointersToConfig_13() const { return ___activePointersToConfig_13; }
	inline Dictionary_2_t96750716FF4F33B66CBE19A55C531D33FD8A0EA8 ** get_address_of_activePointersToConfig_13() { return &___activePointersToConfig_13; }
	inline void set_activePointersToConfig_13(Dictionary_2_t96750716FF4F33B66CBE19A55C531D33FD8A0EA8 * value)
	{
		___activePointersToConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activePointersToConfig_13), (void*)value);
	}
};

struct BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RequestPointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestPointersPerfMarker_12;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::RecyclePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RecyclePointersPerfMarker_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CreatePointerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CreatePointerPerfMarker_15;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseInputDeviceManager::CleanActivePointersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___CleanActivePointersPerfMarker_16;

public:
	inline static int32_t get_offset_of_RequestPointersPerfMarker_12() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC_StaticFields, ___RequestPointersPerfMarker_12)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestPointersPerfMarker_12() const { return ___RequestPointersPerfMarker_12; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestPointersPerfMarker_12() { return &___RequestPointersPerfMarker_12; }
	inline void set_RequestPointersPerfMarker_12(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestPointersPerfMarker_12 = value;
	}

	inline static int32_t get_offset_of_RecyclePointersPerfMarker_14() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC_StaticFields, ___RecyclePointersPerfMarker_14)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RecyclePointersPerfMarker_14() const { return ___RecyclePointersPerfMarker_14; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RecyclePointersPerfMarker_14() { return &___RecyclePointersPerfMarker_14; }
	inline void set_RecyclePointersPerfMarker_14(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RecyclePointersPerfMarker_14 = value;
	}

	inline static int32_t get_offset_of_CreatePointerPerfMarker_15() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC_StaticFields, ___CreatePointerPerfMarker_15)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CreatePointerPerfMarker_15() const { return ___CreatePointerPerfMarker_15; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CreatePointerPerfMarker_15() { return &___CreatePointerPerfMarker_15; }
	inline void set_CreatePointerPerfMarker_15(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CreatePointerPerfMarker_15 = value;
	}

	inline static int32_t get_offset_of_CleanActivePointersPerfMarker_16() { return static_cast<int32_t>(offsetof(BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC_StaticFields, ___CleanActivePointersPerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_CleanActivePointersPerfMarker_16() const { return ___CleanActivePointersPerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_CleanActivePointersPerfMarker_16() { return &___CleanActivePointersPerfMarker_16; }
	inline void set_CleanActivePointersPerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___CleanActivePointersPerfMarker_16 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition
struct HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD  : public BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___inputAction_4)); }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2, ___poseData_17)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___poseData_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition
struct SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F  : public BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition
struct WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D  : public BaseInputSourceDefinition_tA2BBB75A8694422903AED62375B93459286620B6
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver
struct BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608  : public BaseDataProvider_1_tCAE35A255209643B9851EA8BB0631A0A1FA36400
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SpatialAwarenessSystem>k__BackingField
	RuntimeObject* ___U3CSpatialAwarenessSystemU3Ek__BackingField_11;
	// System.UInt32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_12;
	// System.String Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<SourceName>k__BackingField
	String_t* ___U3CSourceNameU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Utilities.AutoStartBehavior Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<StartupBehavior>k__BackingField
	int32_t ___U3CStartupBehaviorU3Ek__BackingField_14;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<DefaultPhysicsLayer>k__BackingField
	int32_t ___U3CDefaultPhysicsLayerU3Ek__BackingField_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsRunning>k__BackingField
	bool ___U3CIsRunningU3Ek__BackingField_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<IsStationaryObserver>k__BackingField
	bool ___U3CIsStationaryObserverU3Ek__BackingField_17;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CObserverRotationU3Ek__BackingField_18;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverOrigin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObserverOriginU3Ek__BackingField_19;
	// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObserverVolumeType>k__BackingField
	int32_t ___U3CObserverVolumeTypeU3Ek__BackingField_20;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<ObservationExtents>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CObservationExtentsU3Ek__BackingField_21;
	// System.Single Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::<UpdateInterval>k__BackingField
	float ___U3CUpdateIntervalU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CSpatialAwarenessSystemU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CSpatialAwarenessSystemU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CSpatialAwarenessSystemU3Ek__BackingField_11() const { return ___U3CSpatialAwarenessSystemU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CSpatialAwarenessSystemU3Ek__BackingField_11() { return &___U3CSpatialAwarenessSystemU3Ek__BackingField_11; }
	inline void set_U3CSpatialAwarenessSystemU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CSpatialAwarenessSystemU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialAwarenessSystemU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CSourceIdU3Ek__BackingField_12)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_12() const { return ___U3CSourceIdU3Ek__BackingField_12; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_12() { return &___U3CSourceIdU3Ek__BackingField_12; }
	inline void set_U3CSourceIdU3Ek__BackingField_12(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CSourceNameU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CSourceNameU3Ek__BackingField_13)); }
	inline String_t* get_U3CSourceNameU3Ek__BackingField_13() const { return ___U3CSourceNameU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CSourceNameU3Ek__BackingField_13() { return &___U3CSourceNameU3Ek__BackingField_13; }
	inline void set_U3CSourceNameU3Ek__BackingField_13(String_t* value)
	{
		___U3CSourceNameU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSourceNameU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStartupBehaviorU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CStartupBehaviorU3Ek__BackingField_14)); }
	inline int32_t get_U3CStartupBehaviorU3Ek__BackingField_14() const { return ___U3CStartupBehaviorU3Ek__BackingField_14; }
	inline int32_t* get_address_of_U3CStartupBehaviorU3Ek__BackingField_14() { return &___U3CStartupBehaviorU3Ek__BackingField_14; }
	inline void set_U3CStartupBehaviorU3Ek__BackingField_14(int32_t value)
	{
		___U3CStartupBehaviorU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultPhysicsLayerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CDefaultPhysicsLayerU3Ek__BackingField_15)); }
	inline int32_t get_U3CDefaultPhysicsLayerU3Ek__BackingField_15() const { return ___U3CDefaultPhysicsLayerU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CDefaultPhysicsLayerU3Ek__BackingField_15() { return &___U3CDefaultPhysicsLayerU3Ek__BackingField_15; }
	inline void set_U3CDefaultPhysicsLayerU3Ek__BackingField_15(int32_t value)
	{
		___U3CDefaultPhysicsLayerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsRunningU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CIsRunningU3Ek__BackingField_16)); }
	inline bool get_U3CIsRunningU3Ek__BackingField_16() const { return ___U3CIsRunningU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsRunningU3Ek__BackingField_16() { return &___U3CIsRunningU3Ek__BackingField_16; }
	inline void set_U3CIsRunningU3Ek__BackingField_16(bool value)
	{
		___U3CIsRunningU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CIsStationaryObserverU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CIsStationaryObserverU3Ek__BackingField_17)); }
	inline bool get_U3CIsStationaryObserverU3Ek__BackingField_17() const { return ___U3CIsStationaryObserverU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CIsStationaryObserverU3Ek__BackingField_17() { return &___U3CIsStationaryObserverU3Ek__BackingField_17; }
	inline void set_U3CIsStationaryObserverU3Ek__BackingField_17(bool value)
	{
		___U3CIsStationaryObserverU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CObserverRotationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CObserverRotationU3Ek__BackingField_18)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CObserverRotationU3Ek__BackingField_18() const { return ___U3CObserverRotationU3Ek__BackingField_18; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CObserverRotationU3Ek__BackingField_18() { return &___U3CObserverRotationU3Ek__BackingField_18; }
	inline void set_U3CObserverRotationU3Ek__BackingField_18(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CObserverRotationU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CObserverOriginU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CObserverOriginU3Ek__BackingField_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObserverOriginU3Ek__BackingField_19() const { return ___U3CObserverOriginU3Ek__BackingField_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObserverOriginU3Ek__BackingField_19() { return &___U3CObserverOriginU3Ek__BackingField_19; }
	inline void set_U3CObserverOriginU3Ek__BackingField_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObserverOriginU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CObserverVolumeTypeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CObserverVolumeTypeU3Ek__BackingField_20)); }
	inline int32_t get_U3CObserverVolumeTypeU3Ek__BackingField_20() const { return ___U3CObserverVolumeTypeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CObserverVolumeTypeU3Ek__BackingField_20() { return &___U3CObserverVolumeTypeU3Ek__BackingField_20; }
	inline void set_U3CObserverVolumeTypeU3Ek__BackingField_20(int32_t value)
	{
		___U3CObserverVolumeTypeU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CObservationExtentsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CObservationExtentsU3Ek__BackingField_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CObservationExtentsU3Ek__BackingField_21() const { return ___U3CObservationExtentsU3Ek__BackingField_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CObservationExtentsU3Ek__BackingField_21() { return &___U3CObservationExtentsU3Ek__BackingField_21; }
	inline void set_U3CObservationExtentsU3Ek__BackingField_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CObservationExtentsU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CUpdateIntervalU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608, ___U3CUpdateIntervalU3Ek__BackingField_22)); }
	inline float get_U3CUpdateIntervalU3Ek__BackingField_22() const { return ___U3CUpdateIntervalU3Ek__BackingField_22; }
	inline float* get_address_of_U3CUpdateIntervalU3Ek__BackingField_22() { return &___U3CUpdateIntervalU3Ek__BackingField_22; }
	inline void set_U3CUpdateIntervalU3Ek__BackingField_22(float value)
	{
		___U3CUpdateIntervalU3Ek__BackingField_22 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController
struct GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33  : public BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___CurrentControllerPose_12;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::LastControllerPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___LastControllerPose_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CurrentControllerPosition_14;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::CurrentControllerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___CurrentControllerRotation_15;

public:
	inline static int32_t get_offset_of_CurrentControllerPose_12() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33, ___CurrentControllerPose_12)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_CurrentControllerPose_12() const { return ___CurrentControllerPose_12; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_CurrentControllerPose_12() { return &___CurrentControllerPose_12; }
	inline void set_CurrentControllerPose_12(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___CurrentControllerPose_12 = value;
	}

	inline static int32_t get_offset_of_LastControllerPose_13() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33, ___LastControllerPose_13)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_LastControllerPose_13() const { return ___LastControllerPose_13; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_LastControllerPose_13() { return &___LastControllerPose_13; }
	inline void set_LastControllerPose_13(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___LastControllerPose_13 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerPosition_14() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33, ___CurrentControllerPosition_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CurrentControllerPosition_14() const { return ___CurrentControllerPosition_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CurrentControllerPosition_14() { return &___CurrentControllerPosition_14; }
	inline void set_CurrentControllerPosition_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CurrentControllerPosition_14 = value;
	}

	inline static int32_t get_offset_of_CurrentControllerRotation_15() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33, ___CurrentControllerRotation_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_CurrentControllerRotation_15() const { return ___CurrentControllerRotation_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_CurrentControllerRotation_15() { return &___CurrentControllerRotation_15; }
	inline void set_CurrentControllerRotation_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___CurrentControllerRotation_15 = value;
	}
};

struct GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_16;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateSingleAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateSingleAxisDataPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_20;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_16() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields, ___UpdateControllerPerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_16() const { return ___UpdateControllerPerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_16() { return &___UpdateControllerPerfMarker_16; }
	inline void set_UpdateControllerPerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_16 = value;
	}

	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_17() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields, ___UpdateButtonDataPerfMarker_17)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_17() const { return ___UpdateButtonDataPerfMarker_17; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_17() { return &___UpdateButtonDataPerfMarker_17; }
	inline void set_UpdateButtonDataPerfMarker_17(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_17 = value;
	}

	inline static int32_t get_offset_of_UpdateSingleAxisDataPerfMarker_18() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields, ___UpdateSingleAxisDataPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateSingleAxisDataPerfMarker_18() const { return ___UpdateSingleAxisDataPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateSingleAxisDataPerfMarker_18() { return &___UpdateSingleAxisDataPerfMarker_18; }
	inline void set_UpdateSingleAxisDataPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateSingleAxisDataPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_19() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields, ___UpdateDualAxisDataPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_19() const { return ___UpdateDualAxisDataPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_19() { return &___UpdateDualAxisDataPerfMarker_19; }
	inline void set_UpdateDualAxisDataPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_20() { return static_cast<int32_t>(offsetof(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_StaticFields, ___UpdatePoseDataPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_20() const { return ___UpdatePoseDataPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_20() { return &___UpdatePoseDataPerfMarker_20; }
	inline void set_UpdatePoseDataPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_20 = value;
	}
};


// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7  : public IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___boundaryChanged_3;
	// System.Collections.Generic.List`1<System.UInt64> UnityEngine.XR.XRInputSubsystem::m_DeviceIdsCache
	List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * ___m_DeviceIdsCache_4;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___trackingOriginUpdated_2)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___boundaryChanged_3)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIdsCache_4() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___m_DeviceIdsCache_4)); }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * get_m_DeviceIdsCache_4() const { return ___m_DeviceIdsCache_4; }
	inline List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 ** get_address_of_m_DeviceIdsCache_4() { return &___m_DeviceIdsCache_4; }
	inline void set_m_DeviceIdsCache_4(List_1_t48CD17D5BA5410E17340B1CF898DAF8467E082E8 * value)
	{
		___m_DeviceIdsCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceIdsCache_4), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver
struct BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8  : public BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608
{
public:
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshEventData
	MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___meshEventData_23;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::observedObjectParent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___observedObjectParent_24;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::displayOption
	int32_t ___displayOption_34;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshLevelOfDetail Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::levelOfDetail
	int32_t ___levelOfDetail_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshes
	Dictionary_2_t22054CDBDE8218AFD21BE0A5B45CC78167956666 * ___meshes_36;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::meshPhysicsLayer
	int32_t ___meshPhysicsLayer_37;
	// System.Boolean Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<RecalculateNormals>k__BackingField
	bool ___U3CRecalculateNormalsU3Ek__BackingField_38;
	// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::<TrianglesPerCubicMeter>k__BackingField
	int32_t ___U3CTrianglesPerCubicMeterU3Ek__BackingField_39;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::occlusionMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___occlusionMaterial_40;
	// UnityEngine.PhysicMaterial Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::physicsMaterial
	PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * ___physicsMaterial_41;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::visibleMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___visibleMaterial_42;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::runtimeSpatialMeshPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___runtimeSpatialMeshPrefab_43;

public:
	inline static int32_t get_offset_of_meshEventData_23() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___meshEventData_23)); }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * get_meshEventData_23() const { return ___meshEventData_23; }
	inline MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 ** get_address_of_meshEventData_23() { return &___meshEventData_23; }
	inline void set_meshEventData_23(MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * value)
	{
		___meshEventData_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshEventData_23), (void*)value);
	}

	inline static int32_t get_offset_of_observedObjectParent_24() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___observedObjectParent_24)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_observedObjectParent_24() const { return ___observedObjectParent_24; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_observedObjectParent_24() { return &___observedObjectParent_24; }
	inline void set_observedObjectParent_24(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___observedObjectParent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observedObjectParent_24), (void*)value);
	}

	inline static int32_t get_offset_of_displayOption_34() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___displayOption_34)); }
	inline int32_t get_displayOption_34() const { return ___displayOption_34; }
	inline int32_t* get_address_of_displayOption_34() { return &___displayOption_34; }
	inline void set_displayOption_34(int32_t value)
	{
		___displayOption_34 = value;
	}

	inline static int32_t get_offset_of_levelOfDetail_35() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___levelOfDetail_35)); }
	inline int32_t get_levelOfDetail_35() const { return ___levelOfDetail_35; }
	inline int32_t* get_address_of_levelOfDetail_35() { return &___levelOfDetail_35; }
	inline void set_levelOfDetail_35(int32_t value)
	{
		___levelOfDetail_35 = value;
	}

	inline static int32_t get_offset_of_meshes_36() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___meshes_36)); }
	inline Dictionary_2_t22054CDBDE8218AFD21BE0A5B45CC78167956666 * get_meshes_36() const { return ___meshes_36; }
	inline Dictionary_2_t22054CDBDE8218AFD21BE0A5B45CC78167956666 ** get_address_of_meshes_36() { return &___meshes_36; }
	inline void set_meshes_36(Dictionary_2_t22054CDBDE8218AFD21BE0A5B45CC78167956666 * value)
	{
		___meshes_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshes_36), (void*)value);
	}

	inline static int32_t get_offset_of_meshPhysicsLayer_37() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___meshPhysicsLayer_37)); }
	inline int32_t get_meshPhysicsLayer_37() const { return ___meshPhysicsLayer_37; }
	inline int32_t* get_address_of_meshPhysicsLayer_37() { return &___meshPhysicsLayer_37; }
	inline void set_meshPhysicsLayer_37(int32_t value)
	{
		___meshPhysicsLayer_37 = value;
	}

	inline static int32_t get_offset_of_U3CRecalculateNormalsU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___U3CRecalculateNormalsU3Ek__BackingField_38)); }
	inline bool get_U3CRecalculateNormalsU3Ek__BackingField_38() const { return ___U3CRecalculateNormalsU3Ek__BackingField_38; }
	inline bool* get_address_of_U3CRecalculateNormalsU3Ek__BackingField_38() { return &___U3CRecalculateNormalsU3Ek__BackingField_38; }
	inline void set_U3CRecalculateNormalsU3Ek__BackingField_38(bool value)
	{
		___U3CRecalculateNormalsU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___U3CTrianglesPerCubicMeterU3Ek__BackingField_39)); }
	inline int32_t get_U3CTrianglesPerCubicMeterU3Ek__BackingField_39() const { return ___U3CTrianglesPerCubicMeterU3Ek__BackingField_39; }
	inline int32_t* get_address_of_U3CTrianglesPerCubicMeterU3Ek__BackingField_39() { return &___U3CTrianglesPerCubicMeterU3Ek__BackingField_39; }
	inline void set_U3CTrianglesPerCubicMeterU3Ek__BackingField_39(int32_t value)
	{
		___U3CTrianglesPerCubicMeterU3Ek__BackingField_39 = value;
	}

	inline static int32_t get_offset_of_occlusionMaterial_40() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___occlusionMaterial_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_occlusionMaterial_40() const { return ___occlusionMaterial_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_occlusionMaterial_40() { return &___occlusionMaterial_40; }
	inline void set_occlusionMaterial_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___occlusionMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_physicsMaterial_41() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___physicsMaterial_41)); }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * get_physicsMaterial_41() const { return ___physicsMaterial_41; }
	inline PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 ** get_address_of_physicsMaterial_41() { return &___physicsMaterial_41; }
	inline void set_physicsMaterial_41(PhysicMaterial_tBEBB6F4620A5221A4CBAEDB2E5984CCA70AA07F8 * value)
	{
		___physicsMaterial_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsMaterial_41), (void*)value);
	}

	inline static int32_t get_offset_of_visibleMaterial_42() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___visibleMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_visibleMaterial_42() const { return ___visibleMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_visibleMaterial_42() { return &___visibleMaterial_42; }
	inline void set_visibleMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___visibleMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_runtimeSpatialMeshPrefab_43() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8, ___runtimeSpatialMeshPrefab_43)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_runtimeSpatialMeshPrefab_43() const { return ___runtimeSpatialMeshPrefab_43; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_runtimeSpatialMeshPrefab_43() { return &___runtimeSpatialMeshPrefab_43; }
	inline void set_runtimeSpatialMeshPrefab_43(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___runtimeSpatialMeshPrefab_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runtimeSpatialMeshPrefab_43), (void*)value);
	}
};

struct BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshDisplayOptionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshDisplayOptionPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedMeshPhysicsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedMeshPhysicsPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::ApplyUpdatedPhysicsLayerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ApplyUpdatedPhysicsLayerPerfMarker_27;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAddedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshAddedPerfMarker_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshAdded
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshAdded_29;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdatedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshUpdatedPerfMarker_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshUpdated
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshUpdated_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemovedPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnMeshRemovedPerfMarker_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>> Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialMeshObserver::OnMeshRemoved
	EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * ___OnMeshRemoved_33;

public:
	inline static int32_t get_offset_of_ApplyUpdatedMeshDisplayOptionPerfMarker_25() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___ApplyUpdatedMeshDisplayOptionPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshDisplayOptionPerfMarker_25() const { return ___ApplyUpdatedMeshDisplayOptionPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshDisplayOptionPerfMarker_25() { return &___ApplyUpdatedMeshDisplayOptionPerfMarker_25; }
	inline void set_ApplyUpdatedMeshDisplayOptionPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshDisplayOptionPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedMeshPhysicsPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___ApplyUpdatedMeshPhysicsPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedMeshPhysicsPerfMarker_26() const { return ___ApplyUpdatedMeshPhysicsPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedMeshPhysicsPerfMarker_26() { return &___ApplyUpdatedMeshPhysicsPerfMarker_26; }
	inline void set_ApplyUpdatedMeshPhysicsPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedMeshPhysicsPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_ApplyUpdatedPhysicsLayerPerfMarker_27() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___ApplyUpdatedPhysicsLayerPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ApplyUpdatedPhysicsLayerPerfMarker_27() const { return ___ApplyUpdatedPhysicsLayerPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ApplyUpdatedPhysicsLayerPerfMarker_27() { return &___ApplyUpdatedPhysicsLayerPerfMarker_27; }
	inline void set_ApplyUpdatedPhysicsLayerPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ApplyUpdatedPhysicsLayerPerfMarker_27 = value;
	}

	inline static int32_t get_offset_of_OnMeshAddedPerfMarker_28() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshAddedPerfMarker_28)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshAddedPerfMarker_28() const { return ___OnMeshAddedPerfMarker_28; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshAddedPerfMarker_28() { return &___OnMeshAddedPerfMarker_28; }
	inline void set_OnMeshAddedPerfMarker_28(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshAddedPerfMarker_28 = value;
	}

	inline static int32_t get_offset_of_OnMeshAdded_29() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshAdded_29)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshAdded_29() const { return ___OnMeshAdded_29; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshAdded_29() { return &___OnMeshAdded_29; }
	inline void set_OnMeshAdded_29(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshAdded_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshAdded_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshUpdatedPerfMarker_30() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshUpdatedPerfMarker_30)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshUpdatedPerfMarker_30() const { return ___OnMeshUpdatedPerfMarker_30; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshUpdatedPerfMarker_30() { return &___OnMeshUpdatedPerfMarker_30; }
	inline void set_OnMeshUpdatedPerfMarker_30(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshUpdatedPerfMarker_30 = value;
	}

	inline static int32_t get_offset_of_OnMeshUpdated_31() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshUpdated_31)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshUpdated_31() const { return ___OnMeshUpdated_31; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshUpdated_31() { return &___OnMeshUpdated_31; }
	inline void set_OnMeshUpdated_31(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshUpdated_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshUpdated_31), (void*)value);
	}

	inline static int32_t get_offset_of_OnMeshRemovedPerfMarker_32() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshRemovedPerfMarker_32)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnMeshRemovedPerfMarker_32() const { return ___OnMeshRemovedPerfMarker_32; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnMeshRemovedPerfMarker_32() { return &___OnMeshRemovedPerfMarker_32; }
	inline void set_OnMeshRemovedPerfMarker_32(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnMeshRemovedPerfMarker_32 = value;
	}

	inline static int32_t get_offset_of_OnMeshRemoved_33() { return static_cast<int32_t>(offsetof(BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8_StaticFields, ___OnMeshRemoved_33)); }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * get_OnMeshRemoved_33() const { return ___OnMeshRemoved_33; }
	inline EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA ** get_address_of_OnMeshRemoved_33() { return &___OnMeshRemoved_33; }
	inline void set_OnMeshRemoved_33(EventFunction_1_t6CB69E879C13C93BE12EF9BE4CD14E6AA48696EA * value)
	{
		___OnMeshRemoved_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMeshRemoved_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1  : public BaseCameraSettingsProvider_tC816D0C379DD15E72079C2A86BA85BA57F9D07CA
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t6C6ECD42F875B5C31E73DC54177467F3D3F0F49C * ___reprojectionUpdater_12;
	// Microsoft.MixedReality.Toolkit.CameraSystem.ProjectionOverride Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::projectionOverride
	ProjectionOverride_t7C6861E3FFD9283F10FCB16C4A903E57D392E2E8 * ___projectionOverride_13;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_12() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1, ___reprojectionUpdater_12)); }
	inline WindowsMixedRealityReprojectionUpdater_t6C6ECD42F875B5C31E73DC54177467F3D3F0F49C * get_reprojectionUpdater_12() const { return ___reprojectionUpdater_12; }
	inline WindowsMixedRealityReprojectionUpdater_t6C6ECD42F875B5C31E73DC54177467F3D3F0F49C ** get_address_of_reprojectionUpdater_12() { return &___reprojectionUpdater_12; }
	inline void set_reprojectionUpdater_12(WindowsMixedRealityReprojectionUpdater_t6C6ECD42F875B5C31E73DC54177467F3D3F0F49C * value)
	{
		___reprojectionUpdater_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_12), (void*)value);
	}

	inline static int32_t get_offset_of_projectionOverride_13() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1, ___projectionOverride_13)); }
	inline ProjectionOverride_t7C6861E3FFD9283F10FCB16C4A903E57D392E2E8 * get_projectionOverride_13() const { return ___projectionOverride_13; }
	inline ProjectionOverride_t7C6861E3FFD9283F10FCB16C4A903E57D392E2E8 ** get_address_of_projectionOverride_13() { return &___projectionOverride_13; }
	inline void set_projectionOverride_13(ProjectionOverride_t7C6861E3FFD9283F10FCB16C4A903E57D392E2E8 * value)
	{
		___projectionOverride_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectionOverride_13), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_11;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_11() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1_StaticFields, ___isTryGetViewConfigurationSupported_11)); }
	inline bool get_isTryGetViewConfigurationSupported_11() const { return ___isTryGetViewConfigurationSupported_11; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_11() { return &___isTryGetViewConfigurationSupported_11; }
	inline void set_isTryGetViewConfigurationSupported_11(bool value)
	{
		___isTryGetViewConfigurationSupported_11 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager
struct XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188  : public BaseInputDeviceManager_tCD5F43919EB70924527B13AD5992798946BF83AC
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::inputDevicesSubset
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevicesSubset_19;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::lastInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___lastInputDevices_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDeviceCharacteristics> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::<DesiredInputCharacteristics>k__BackingField
	List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_inputDevices_18() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188, ___inputDevices_18)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevices_18() const { return ___inputDevices_18; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevices_18() { return &___inputDevices_18; }
	inline void set_inputDevices_18(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevices_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevices_18), (void*)value);
	}

	inline static int32_t get_offset_of_inputDevicesSubset_19() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188, ___inputDevicesSubset_19)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_inputDevicesSubset_19() const { return ___inputDevicesSubset_19; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_inputDevicesSubset_19() { return &___inputDevicesSubset_19; }
	inline void set_inputDevicesSubset_19(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___inputDevicesSubset_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputDevicesSubset_19), (void*)value);
	}

	inline static int32_t get_offset_of_lastInputDevices_20() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188, ___lastInputDevices_20)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_lastInputDevices_20() const { return ___lastInputDevices_20; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_lastInputDevices_20() { return &___lastInputDevices_20; }
	inline void set_lastInputDevices_20(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___lastInputDevices_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastInputDevices_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188, ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21)); }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * get_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() const { return ___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 ** get_address_of_U3CDesiredInputCharacteristicsU3Ek__BackingField_21() { return &___U3CDesiredInputCharacteristicsU3Ek__BackingField_21; }
	inline void set_U3CDesiredInputCharacteristicsU3Ek__BackingField_21(List_1_tD4F7A2B3C8B10ED956EB5BABDBC4AAA435141637 * value)
	{
		___U3CDesiredInputCharacteristicsU3Ek__BackingField_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDesiredInputCharacteristicsU3Ek__BackingField_21), (void*)value);
	}
};

struct XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.InputDevice,Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController> Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::ActiveControllers
	Dictionary_2_t9144E7302F607940DE4A38EA77208035192E1013 * ___ActiveControllers_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_22;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetOrAddControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___GetOrAddControllerPerfMarker_23;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::RemoveControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveControllerPerfMarker_24;

public:
	inline static int32_t get_offset_of_ActiveControllers_17() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_StaticFields, ___ActiveControllers_17)); }
	inline Dictionary_2_t9144E7302F607940DE4A38EA77208035192E1013 * get_ActiveControllers_17() const { return ___ActiveControllers_17; }
	inline Dictionary_2_t9144E7302F607940DE4A38EA77208035192E1013 ** get_address_of_ActiveControllers_17() { return &___ActiveControllers_17; }
	inline void set_ActiveControllers_17(Dictionary_2_t9144E7302F607940DE4A38EA77208035192E1013 * value)
	{
		___ActiveControllers_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveControllers_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_22() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_StaticFields, ___UpdatePerfMarker_22)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_22() const { return ___UpdatePerfMarker_22; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_22() { return &___UpdatePerfMarker_22; }
	inline void set_UpdatePerfMarker_22(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_22 = value;
	}

	inline static int32_t get_offset_of_GetOrAddControllerPerfMarker_23() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_StaticFields, ___GetOrAddControllerPerfMarker_23)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_GetOrAddControllerPerfMarker_23() const { return ___GetOrAddControllerPerfMarker_23; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_GetOrAddControllerPerfMarker_23() { return &___GetOrAddControllerPerfMarker_23; }
	inline void set_GetOrAddControllerPerfMarker_23(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___GetOrAddControllerPerfMarker_23 = value;
	}

	inline static int32_t get_offset_of_RemoveControllerPerfMarker_24() { return static_cast<int32_t>(offsetof(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_StaticFields, ___RemoveControllerPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveControllerPerfMarker_24() const { return ___RemoveControllerPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveControllerPerfMarker_24() { return &___RemoveControllerPerfMarker_24; }
	inline void set_RemoveControllerPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveControllerPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource
struct BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335  : public GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___currentPointerPosition_21;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___currentPointerRotation_22;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::currentPointerPose
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___currentPointerPose_23;

public:
	inline static int32_t get_offset_of_currentPointerPosition_21() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335, ___currentPointerPosition_21)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_currentPointerPosition_21() const { return ___currentPointerPosition_21; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_currentPointerPosition_21() { return &___currentPointerPosition_21; }
	inline void set_currentPointerPosition_21(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___currentPointerPosition_21 = value;
	}

	inline static int32_t get_offset_of_currentPointerRotation_22() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335, ___currentPointerRotation_22)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_currentPointerRotation_22() const { return ___currentPointerRotation_22; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_currentPointerRotation_22() { return &___currentPointerRotation_22; }
	inline void set_currentPointerRotation_22(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___currentPointerRotation_22 = value;
	}

	inline static int32_t get_offset_of_currentPointerPose_23() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335, ___currentPointerPose_23)); }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  get_currentPointerPose_23() const { return ___currentPointerPose_23; }
	inline MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * get_address_of_currentPointerPose_23() { return &___currentPointerPose_23; }
	inline void set_currentPointerPose_23(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  value)
	{
		___currentPointerPose_23 = value;
	}
};

struct BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePoseDataPerfMarker_24;

public:
	inline static int32_t get_offset_of_UpdatePoseDataPerfMarker_24() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_StaticFields, ___UpdatePoseDataPerfMarker_24)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePoseDataPerfMarker_24() const { return ___UpdatePoseDataPerfMarker_24; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePoseDataPerfMarker_24() { return &___UpdatePoseDataPerfMarker_24; }
	inline void set_UpdatePoseDataPerfMarker_24(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePoseDataPerfMarker_24 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver
struct GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE  : public BaseSpatialMeshObserver_t84C635A318012D5E25D4F51FE0DD62D99A6C7FA8
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.XR.MeshId> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshWorkQueue
	Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * ___meshWorkQueue_45;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::meshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfos_46;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::outstandingMeshObject
	SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___outstandingMeshObject_47;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::spareMeshObject
	SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * ___spareMeshObject_48;
	// System.Single Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::lastUpdated
	float ___lastUpdated_49;

public:
	inline static int32_t get_offset_of_meshWorkQueue_45() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE, ___meshWorkQueue_45)); }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * get_meshWorkQueue_45() const { return ___meshWorkQueue_45; }
	inline Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B ** get_address_of_meshWorkQueue_45() { return &___meshWorkQueue_45; }
	inline void set_meshWorkQueue_45(Queue_1_t198A9BBBC8F6AD3A149ECF82EF813026837A9F1B * value)
	{
		___meshWorkQueue_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshWorkQueue_45), (void*)value);
	}

	inline static int32_t get_offset_of_meshInfos_46() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE, ___meshInfos_46)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_meshInfos_46() const { return ___meshInfos_46; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_meshInfos_46() { return &___meshInfos_46; }
	inline void set_meshInfos_46(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___meshInfos_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshInfos_46), (void*)value);
	}

	inline static int32_t get_offset_of_outstandingMeshObject_47() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE, ___outstandingMeshObject_47)); }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * get_outstandingMeshObject_47() const { return ___outstandingMeshObject_47; }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E ** get_address_of_outstandingMeshObject_47() { return &___outstandingMeshObject_47; }
	inline void set_outstandingMeshObject_47(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * value)
	{
		___outstandingMeshObject_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outstandingMeshObject_47), (void*)value);
	}

	inline static int32_t get_offset_of_spareMeshObject_48() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE, ___spareMeshObject_48)); }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * get_spareMeshObject_48() const { return ___spareMeshObject_48; }
	inline SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E ** get_address_of_spareMeshObject_48() { return &___spareMeshObject_48; }
	inline void set_spareMeshObject_48(SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E * value)
	{
		___spareMeshObject_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spareMeshObject_48), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdated_49() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE, ___lastUpdated_49)); }
	inline float get_lastUpdated_49() const { return ___lastUpdated_49; }
	inline float* get_address_of_lastUpdated_49() { return &___lastUpdated_49; }
	inline void set_lastUpdated_49(float value)
	{
		___lastUpdated_49 = value;
	}
};

struct GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_44;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ResumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ResumePerfMarker_50;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::SuspendPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SuspendPerfMarker_51;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ClearObservationsPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ClearObservationsPerfMarker_52;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateObserverPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateObserverPerfMarker_53;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RequestMeshPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RequestMeshPerfMarker_54;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::RemoveMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___RemoveMeshObjectPerfMarker_55;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ReclaimMeshObjectPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ReclaimMeshObjectPerfMarker_56;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_57;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::UpdateMeshesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateMeshesPerfMarker_58;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::MeshGenerationActionPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___MeshGenerationActionPerfMarker_59;

public:
	inline static int32_t get_offset_of_UpdatePerfMarker_44() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___UpdatePerfMarker_44)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_44() const { return ___UpdatePerfMarker_44; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_44() { return &___UpdatePerfMarker_44; }
	inline void set_UpdatePerfMarker_44(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_44 = value;
	}

	inline static int32_t get_offset_of_ResumePerfMarker_50() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___ResumePerfMarker_50)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ResumePerfMarker_50() const { return ___ResumePerfMarker_50; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ResumePerfMarker_50() { return &___ResumePerfMarker_50; }
	inline void set_ResumePerfMarker_50(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ResumePerfMarker_50 = value;
	}

	inline static int32_t get_offset_of_SuspendPerfMarker_51() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___SuspendPerfMarker_51)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SuspendPerfMarker_51() const { return ___SuspendPerfMarker_51; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SuspendPerfMarker_51() { return &___SuspendPerfMarker_51; }
	inline void set_SuspendPerfMarker_51(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SuspendPerfMarker_51 = value;
	}

	inline static int32_t get_offset_of_ClearObservationsPerfMarker_52() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___ClearObservationsPerfMarker_52)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ClearObservationsPerfMarker_52() const { return ___ClearObservationsPerfMarker_52; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ClearObservationsPerfMarker_52() { return &___ClearObservationsPerfMarker_52; }
	inline void set_ClearObservationsPerfMarker_52(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ClearObservationsPerfMarker_52 = value;
	}

	inline static int32_t get_offset_of_UpdateObserverPerfMarker_53() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___UpdateObserverPerfMarker_53)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateObserverPerfMarker_53() const { return ___UpdateObserverPerfMarker_53; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateObserverPerfMarker_53() { return &___UpdateObserverPerfMarker_53; }
	inline void set_UpdateObserverPerfMarker_53(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateObserverPerfMarker_53 = value;
	}

	inline static int32_t get_offset_of_RequestMeshPerfMarker_54() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___RequestMeshPerfMarker_54)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RequestMeshPerfMarker_54() const { return ___RequestMeshPerfMarker_54; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RequestMeshPerfMarker_54() { return &___RequestMeshPerfMarker_54; }
	inline void set_RequestMeshPerfMarker_54(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RequestMeshPerfMarker_54 = value;
	}

	inline static int32_t get_offset_of_RemoveMeshObjectPerfMarker_55() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___RemoveMeshObjectPerfMarker_55)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_RemoveMeshObjectPerfMarker_55() const { return ___RemoveMeshObjectPerfMarker_55; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_RemoveMeshObjectPerfMarker_55() { return &___RemoveMeshObjectPerfMarker_55; }
	inline void set_RemoveMeshObjectPerfMarker_55(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___RemoveMeshObjectPerfMarker_55 = value;
	}

	inline static int32_t get_offset_of_ReclaimMeshObjectPerfMarker_56() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___ReclaimMeshObjectPerfMarker_56)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ReclaimMeshObjectPerfMarker_56() const { return ___ReclaimMeshObjectPerfMarker_56; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ReclaimMeshObjectPerfMarker_56() { return &___ReclaimMeshObjectPerfMarker_56; }
	inline void set_ReclaimMeshObjectPerfMarker_56(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ReclaimMeshObjectPerfMarker_56 = value;
	}

	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_57() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___ConfigureObserverVolumePerfMarker_57)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_57() const { return ___ConfigureObserverVolumePerfMarker_57; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_57() { return &___ConfigureObserverVolumePerfMarker_57; }
	inline void set_ConfigureObserverVolumePerfMarker_57(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_57 = value;
	}

	inline static int32_t get_offset_of_UpdateMeshesPerfMarker_58() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___UpdateMeshesPerfMarker_58)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateMeshesPerfMarker_58() const { return ___UpdateMeshesPerfMarker_58; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateMeshesPerfMarker_58() { return &___UpdateMeshesPerfMarker_58; }
	inline void set_UpdateMeshesPerfMarker_58(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateMeshesPerfMarker_58 = value;
	}

	inline static int32_t get_offset_of_MeshGenerationActionPerfMarker_59() { return static_cast<int32_t>(offsetof(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_StaticFields, ___MeshGenerationActionPerfMarker_59)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_MeshGenerationActionPerfMarker_59() const { return ___MeshGenerationActionPerfMarker_59; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_MeshGenerationActionPerfMarker_59() { return &___MeshGenerationActionPerfMarker_59; }
	inline void set_MeshGenerationActionPerfMarker_59(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___MeshGenerationActionPerfMarker_59 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings
struct WindowsMixedRealityCameraSettings_tBBE00D8254951A014C772170206A2AEA17A327E6  : public BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager
struct WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128  : public XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188
{
public:
	// System.Nullable`1<System.Boolean> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::isActiveLoader
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___isActiveLoader_25;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::mixedRealityGazeProviderHeadOverride
	RuntimeObject* ___mixedRealityGazeProviderHeadOverride_26;

public:
	inline static int32_t get_offset_of_isActiveLoader_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128, ___isActiveLoader_25)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_isActiveLoader_25() const { return ___isActiveLoader_25; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_isActiveLoader_25() { return &___isActiveLoader_25; }
	inline void set_isActiveLoader_25(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___isActiveLoader_25 = value;
	}

	inline static int32_t get_offset_of_mixedRealityGazeProviderHeadOverride_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128, ___mixedRealityGazeProviderHeadOverride_26)); }
	inline RuntimeObject* get_mixedRealityGazeProviderHeadOverride_26() const { return ___mixedRealityGazeProviderHeadOverride_26; }
	inline RuntimeObject** get_address_of_mixedRealityGazeProviderHeadOverride_26() { return &___mixedRealityGazeProviderHeadOverride_26; }
	inline void set_mixedRealityGazeProviderHeadOverride_26(RuntimeObject* value)
	{
		___mixedRealityGazeProviderHeadOverride_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixedRealityGazeProviderHeadOverride_26), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand
struct WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F  : public BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335
{
public:
	// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handDefinition
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * ___handDefinition_25;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::unityJointPoses
	Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * ___unityJointPoses_26;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handMeshProvider
	WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * ___handMeshProvider_27;
	// System.Collections.Generic.List`1<UnityEngine.XR.Bone> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::fingerBones
	List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___fingerBones_29;
	// System.Collections.Generic.List`1<System.Object> Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::states
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___states_32;

public:
	inline static int32_t get_offset_of_handDefinition_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F, ___handDefinition_25)); }
	inline ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * get_handDefinition_25() const { return ___handDefinition_25; }
	inline ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 ** get_address_of_handDefinition_25() { return &___handDefinition_25; }
	inline void set_handDefinition_25(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * value)
	{
		___handDefinition_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handDefinition_25), (void*)value);
	}

	inline static int32_t get_offset_of_unityJointPoses_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F, ___unityJointPoses_26)); }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * get_unityJointPoses_26() const { return ___unityJointPoses_26; }
	inline Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 ** get_address_of_unityJointPoses_26() { return &___unityJointPoses_26; }
	inline void set_unityJointPoses_26(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * value)
	{
		___unityJointPoses_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_26), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshProvider_27() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F, ___handMeshProvider_27)); }
	inline WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * get_handMeshProvider_27() const { return ___handMeshProvider_27; }
	inline WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 ** get_address_of_handMeshProvider_27() { return &___handMeshProvider_27; }
	inline void set_handMeshProvider_27(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * value)
	{
		___handMeshProvider_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshProvider_27), (void*)value);
	}

	inline static int32_t get_offset_of_fingerBones_29() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F, ___fingerBones_29)); }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * get_fingerBones_29() const { return ___fingerBones_29; }
	inline List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A ** get_address_of_fingerBones_29() { return &___fingerBones_29; }
	inline void set_fingerBones_29(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * value)
	{
		___fingerBones_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerBones_29), (void*)value);
	}

	inline static int32_t get_offset_of_states_32() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F, ___states_32)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_states_32() const { return ___states_32; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_states_32() { return &___states_32; }
	inline void set_states_32(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___states_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_32), (void*)value);
	}
};

struct WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields
{
public:
	// UnityEngine.XR.HandFinger[] Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::handFingers
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* ___handFingers_28;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::rightPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rightPalmOffset_30;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::leftPalmOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___leftPalmOffset_31;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_33;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateHandDataPerfMarker_34;

public:
	inline static int32_t get_offset_of_handFingers_28() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields, ___handFingers_28)); }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* get_handFingers_28() const { return ___handFingers_28; }
	inline HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8** get_address_of_handFingers_28() { return &___handFingers_28; }
	inline void set_handFingers_28(HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* value)
	{
		___handFingers_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handFingers_28), (void*)value);
	}

	inline static int32_t get_offset_of_rightPalmOffset_30() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields, ___rightPalmOffset_30)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rightPalmOffset_30() const { return ___rightPalmOffset_30; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rightPalmOffset_30() { return &___rightPalmOffset_30; }
	inline void set_rightPalmOffset_30(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rightPalmOffset_30 = value;
	}

	inline static int32_t get_offset_of_leftPalmOffset_31() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields, ___leftPalmOffset_31)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_leftPalmOffset_31() const { return ___leftPalmOffset_31; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_leftPalmOffset_31() { return &___leftPalmOffset_31; }
	inline void set_leftPalmOffset_31(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___leftPalmOffset_31 = value;
	}

	inline static int32_t get_offset_of_UpdateControllerPerfMarker_33() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields, ___UpdateControllerPerfMarker_33)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_33() const { return ___UpdateControllerPerfMarker_33; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_33() { return &___UpdateControllerPerfMarker_33; }
	inline void set_UpdateControllerPerfMarker_33(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_33 = value;
	}

	inline static int32_t get_offset_of_UpdateHandDataPerfMarker_34() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields, ___UpdateHandDataPerfMarker_34)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateHandDataPerfMarker_34() const { return ___UpdateHandDataPerfMarker_34; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateHandDataPerfMarker_34() { return &___UpdateHandDataPerfMarker_34; }
	inline void set_UpdateHandDataPerfMarker_34(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateHandDataPerfMarker_34 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand
struct WindowsMixedRealityXRSDKGGVHand_tB9B084E9DA9204848E8A9D4ED352BDC7E34D05FD  : public BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController
struct WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2  : public BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335
{
public:

public:
};

struct WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateButtonDataPerfMarker_25;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisDataPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateDualAxisDataPerfMarker_26;

public:
	inline static int32_t get_offset_of_UpdateButtonDataPerfMarker_25() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields, ___UpdateButtonDataPerfMarker_25)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateButtonDataPerfMarker_25() const { return ___UpdateButtonDataPerfMarker_25; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateButtonDataPerfMarker_25() { return &___UpdateButtonDataPerfMarker_25; }
	inline void set_UpdateButtonDataPerfMarker_25(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateButtonDataPerfMarker_25 = value;
	}

	inline static int32_t get_offset_of_UpdateDualAxisDataPerfMarker_26() { return static_cast<int32_t>(offsetof(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields, ___UpdateDualAxisDataPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateDualAxisDataPerfMarker_26() const { return ___UpdateDualAxisDataPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateDualAxisDataPerfMarker_26() { return &___UpdateDualAxisDataPerfMarker_26; }
	inline void set_UpdateDualAxisDataPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateDualAxisDataPerfMarker_26 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController
struct HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199  : public WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2
{
public:

public:
};

struct HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateControllerPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateControllerPerfMarker_27;

public:
	inline static int32_t get_offset_of_UpdateControllerPerfMarker_27() { return static_cast<int32_t>(offsetof(HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_StaticFields, ___UpdateControllerPerfMarker_27)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateControllerPerfMarker_27() const { return ___UpdateControllerPerfMarker_27; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateControllerPerfMarker_27() { return &___UpdateControllerPerfMarker_27; }
	inline void set_UpdateControllerPerfMarker_27(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateControllerPerfMarker_27 = value;
	}
};


// Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver
struct WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642  : public GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE
{
public:

public:
};

struct WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolumePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ConfigureObserverVolumePerfMarker_60;

public:
	inline static int32_t get_offset_of_ConfigureObserverVolumePerfMarker_60() { return static_cast<int32_t>(offsetof(WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_StaticFields, ___ConfigureObserverVolumePerfMarker_60)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ConfigureObserverVolumePerfMarker_60() const { return ___ConfigureObserverVolumePerfMarker_60; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ConfigureObserverVolumePerfMarker_60() { return &___ConfigureObserverVolumePerfMarker_60; }
	inline void set_ConfigureObserverVolumePerfMarker_60(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ConfigureObserverVolumePerfMarker_60 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.HandFinger[]
struct HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.XR.Bone[]
struct BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  m_Items[1];

public:
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_gshared (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<System.Object>::get_Service()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m6FE3FC2A780FCF338E18510675CC1282F7907D2C_gshared_inline (BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6F2ED586C8EC85B459FFCA36D05ABF98C1AA33B3_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3816E3065E00AF57E62424BB45AEA6000BD27F49_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72BAB8E16164B0649C7EFF83BD5C1904748DC7F0_gshared (Dictionary_2_t4594E9EA67CB7172740DF4116774A3B1432A9E97 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method);

// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController__ctor_m87239DEF2EFA949A4AD0393F7C0FDC3AC3009FA2 (GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_AxisType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mABE186767788C369755C45C43795CB9F51E5052D_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E (bool ___condition0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPlayspace_TransformPoint_m0DB731A4C7C7B1B716BACC877D80EEC8BE5CD493 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localPosition0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759 (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.MixedRealityPlayspace::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPlayspace_get_Rotation_mE7F4E52F714FBBD1083AF93C8EEA0B111B76A05A (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::set_Rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseController::get_InputSource()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.BaseController::get_ControllerHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityInteractionMapping_get_PoseData_mFA28DE0DB1CB2EE393BFA1BDD8EC48411C143F7F (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdatePoseData_m5AF56853E18F289F067272BF05ECFAE266F39F08 (GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HPMotionControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionControllerDefinition__ctor_mD29BEC0924E6B628D8ECD1C90D8511C6A130AB36 (HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96 (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions4, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseController::get_Enabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m27A5493C062C23CE0DBE56575232986FAEB9AD78_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateController_m135600A82845E808339DA61980CFB07D5F59AA30 (GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m1BC8792B38E5163C31353BDDC6CA37C8FD99E534 (BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * ___profile3, const RuntimeMethod* method);
// UnityEngine.XR.XRDisplaySubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_DisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * XRSubsystemHelpers_get_DisplaySubsystem_m479073A35F7B5FDFF17882A294CB4CE53816F163 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::get_displayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager__ctor_mB1DAE72EC8D14ECE9390AF3D53D4744D2712C0FF (XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile3, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Boolean>::.ctor(!0)
inline void Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996 (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, bool, const RuntimeMethod*))Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_get_IsActiveLoader_m83395A8CF489877989A942BE9FBE66AD8BB05E7E (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m04CE0EA9BE41F36575F1B7FBDAE7CB7514EFEB49 (BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m2606C2B29B60B98BD3F5A64E7A7A51A5260BB86C_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0A58B28EA8BE8FCB644D6146EAFF8DB86ED2FE7F (XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m9EF9528DDD86A0AE45C5A80CDEDDCC281ACBC068_inline (RuntimeObject* ___value0, const RuntimeMethod* method);
// !0 Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem>::get_Service()
inline RuntimeObject* BaseDataProvider_1_get_Service_m7EC337C959E1DC2ED760B4572120C2C82EFC7B17_inline (BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (BaseDataProvider_1_t3C6A855F93E52373AFB4857AC6D668A38D58B966 *, const RuntimeMethod*))BaseDataProvider_1_get_Service_m6FE3FC2A780FCF338E18510675CC1282F7907D2C_gshared_inline)(__this, method);
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m3B887965513880F08C270920B3BD854E7ACEFD95 (const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D (const RuntimeMethod* method);
// Windows.Perception.PerceptionTimestamp Windows.Perception.PerceptionTimestampHelper::FromHistoricalTargetTime(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * PerceptionTimestampHelper_FromHistoricalTargetTime_m3887862422EFE0EB81A026771F85278980FB2943 (DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  ___targetTime0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialPointerPose Windows.UI.Input.Spatial.SpatialPointerPose::TryGetAtTimestamp(Windows.Perception.Spatial.SpatialCoordinateSystem,Windows.Perception.PerceptionTimestamp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * SpatialPointerPose_TryGetAtTimestamp_m86E035A372E4724987F5D572081513327F3435D8 (SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___coordinateSystem0, PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * ___timestamp1, const RuntimeMethod* method);
// Windows.Perception.People.HeadPose Windows.UI.Input.Spatial.SpatialPointerPose::get_Head()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * SpatialPointerPose_get_Head_m5B4D49A633973E41CC36CB43AA5B8C19887B088C (SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * __this, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SystemNumericsExtensions_ToUnityVector3_mDE7ED1BBB72555F8824B4AE6B122AD00BCEEF383 (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method);
// System.Numerics.Vector3 Windows.Perception.People.HeadPose::get_ForwardDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9 (HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKDeviceManager_Update_m5B93839415EE272753654F350B454CF484C4E16E (XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Windows.Utilities.WindowsApiChecker::IsMethodAvailable(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsApiChecker_IsMethodAvailable_m7B0CB8AFC515FE45DC0A31962CE1BE02A26D61D3 (String_t* ___namespaceName0, String_t* ___className1, String_t* ___methodName2, const RuntimeMethod* method);
// System.Boolean Windows.UI.Input.Spatial.SpatialInteractionManager::IsSourceKindSupported(Windows.UI.Input.Spatial.SpatialInteractionSourceKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpatialInteractionManager_IsSourceKindSupported_mD85293F528AAC9D7B3976A5742E4F8BE9D951873 (int32_t ___kind0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * XRSDKDeviceManager_GetControllerType_mCDE08ADCCA7B34DDEF7EE87E56D945EDD164ED41 (XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetInputSourceType_mEB59547B4D9E7C3F9F02DF66B49F32FD8910034B (XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method);
// UnityEngine.XR.InputDeviceCharacteristics UnityEngine.XR.InputDevice::get_characteristics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.Enum::HasFlag(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173 (RuntimeObject * __this, Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 * ___flag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSDKDeviceManager_GetCurrentControllerType_mC37544AC2292D86F7D36790867F5819660064995 (XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.GenericXRSDKSpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKSpatialMeshObserver__ctor_m0CB7701723970D047A8134EF7E2C7A880297B632 (GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile3, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_SpatialAwarenessSystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m6ABDB30CC80260B324F7B65C921F100943FB580A_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRMeshSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_MeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRSubsystemHelpers_get_MeshSubsystem_m586D6228BE8CCD03F6F978982A0519C424F4AA48 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.VolumeType Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverVolumeType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mAD2E43D4A2B426CE7C504B1585292FB96389F24A_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverOrigin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m9945130BBB3B049178E4D78A11A7C3A6673B19D4_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObservationExtents()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_mD115C2B6EFFF56171C6882DAC9895763D84C6F36_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions::SetBoundingVolumeSphere(UnityEngine.XR.XRMeshSubsystem,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRExtensions_SetBoundingVolumeSphere_mEC2339778F5509E0500325C0A51A49EA499E9E56 (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___meshing0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center1, float ___radius2, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SpatialAwareness.BaseSpatialObserver::get_ObserverRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  BaseSpatialObserver_get_ObserverRotation_mCB22B3CEFD91FBB8FDD86504BD29E5AC7CA4FFA3_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRExtensions::SetBoundingVolumeOrientedBox(UnityEngine.XR.XRMeshSubsystem,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRExtensions_SetBoundingVolumeOrientedBox_m369720F1A959706D9644188F154556AD6170FAFF (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___meshing0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, const RuntimeMethod*))Dictionary_2__ctor_m6F2ED586C8EC85B459FFCA36D05ABF98C1AA33B3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.Bone>::.ctor()
inline void List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition__ctor_m3A87B19BBACBC85BA7F020C377C81D36D371D508 (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1 (BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider__ctor_m4AFAD631F83C3EA818EBFA2C8557619099EE1D72 (WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * __this, RuntimeObject* ___controller0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *, const RuntimeMethod*))Dictionary_2_TryGetValue_m3816E3065E00AF57E62424BB45AEA6000BD27F49_gshared)(__this, ___key0, ___value1, method);
}
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_HandDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8 (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArticulatedHandDefinition_get_IsInPointingPose_m7AFE5654EA7580C6C3E20560484D1471BFF4B1AB (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m2F93F620A171C51B210D470001E317E95D7C5349 (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.BaseController::get_Interactions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentIndexPose_m372AF242BF50085BA7B7CB512E874B66039F3332 (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateCurrentTeleportPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateCurrentTeleportPose_mB955997BE207256E867E9D9F92CD75631D421169 (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, const RuntimeMethod*))Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRInputSubsystem Microsoft.MixedReality.Toolkit.Utilities.XRSubsystemHelpers::get_InputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * XRSubsystemHelpers_get_InputSubsystem_mECB1B86562F56C0A71BDAD45E8556FEEA377B546 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WindowsMR.WindowsMRInput::GetCurrentSourceStates(UnityEngine.XR.XRInputSubsystem,System.Collections.Generic.List`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMRInput_GetCurrentSourceStates_m2824CA4B1C0F4122483598A427459B5B2AF88E22 (XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * ___input0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___states1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
inline Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * SpatialInteractionSourceState_get_Source_m4869A5CAE87869961CC4C7322D71008B42C3E779 (SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * __this, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness Windows.UI.Input.Spatial.SpatialInteractionSource::get_Handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpatialInteractionSource_get_Handedness_m5443B0EAEA4835053F44F0C6E279D84268347818 (SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions::ToMRTKHandedness(Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsExtensions_ToMRTKHandedness_m9BC6D96D36A5BEFE5689629B3845CF8DBACD803B (int32_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityHandMeshProvider::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandMeshProvider_UpdateHandMesh_m4EDAA1AE6673F9D2882090604AB0DBC835CEDE06 (WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472 (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.Hand>,UnityEngine.XR.Hand&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  ___usage0, Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Hand::TryGetFingerBones(UnityEngine.XR.HandFinger,System.Collections.Generic.List`1<UnityEngine.XR.Bone>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20 (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 * __this, int32_t ___finger0, List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * ___bonesOut1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mEDBCDA7DD18BC6A496362CC9F9ED058C1E16A98A (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Item(System.Int32)
inline Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, int32_t, const RuntimeMethod*))List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.XR.Bone::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Bone::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706 (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityPose__ctor_m139F7F8104CAB889E5AE6A14090A9764E39DFCAC (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * __this, int32_t ___key0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *, int32_t, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 , const RuntimeMethod*))Dictionary_2_set_Item_m72BAB8E16164B0649C7EFF83BD5C1904748DC7F0_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.Bone>::get_Count()
inline int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *, const RuntimeMethod*))List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_m6A888CC2D81BE74348C5C556880E83DA4418C846 (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandDefinition_UpdateHandJoints_m368B8B5A06B60BFD590B1F18D55AF4E6514681A6 (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * __this, Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * ___jointPoses0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.SimpleHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleHandDefinition__ctor_m8984BA6EC4E5AFADB184C7DE96DD0B40D18E2486 (SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityControllerDefinition::.ctor(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityControllerDefinition__ctor_m848379010D6BB4FF9CBC6D4078DA0E0D2ADC5367 (WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateButtonData_m855A7E35A78FA27948E65CD709931355841B5A5D (GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_BoolData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.Input.GenericXRSDKController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericXRSDKController_UpdateDualAxisData_m22BB246AE053D1BBE673B2EE2E15B27B3615755D (GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_Vector2Data(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_Vector2Data_m87BCF9A7E5ADDB105D5CBBD4930ABF8BA3C9ABBB (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_m5C4FDA726DEC05433E3A243AFF5DFD5422FAA650 (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WindowsMR.WindowsMREnvironment::get_OriginSpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsMREnvironment_get_OriginSpatialCoordinateSystem_m4E86724C165648A3AD2FF2322D2C1ED54B823F04 (const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WindowsMR.WindowsMREnvironment::get_CurrentHolographicRenderFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WindowsMREnvironment_get_CurrentHolographicRenderFrame_m690BDEEDD465FCD3570139B6B26DBE73AA0F36AD (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[],Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1 (BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335 * __this, int32_t ___trackingState0, uint8_t ___sourceHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, RuntimeObject* ___definition4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Vector3 currentPointerPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_currentPointerPosition_21(L_0);
		// private Quaternion currentPointerRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_currentPointerRotation_22(L_1);
		// private MixedRealityPose currentPointerPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_2 = MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline(/*hidden argument*/NULL);
		__this->set_currentPointerPose_23(L_2);
		// : base(trackingState, sourceHandedness, inputSource, interactions, definition)
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___sourceHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_6 = ___interactions3;
		RuntimeObject* L_7 = ___definition4;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33_il2cpp_TypeInfo_var);
		GenericXRSDKController__ctor_m87239DEF2EFA949A4AD0393F7C0FDC3AC3009FA2(__this, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::UpdatePoseData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mE3BAAFF9B4D2B310CA5D6503A276558BF98C0DF4 (BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource_UpdatePoseData_mE3BAAFF9B4D2B310CA5D6503A276558BF98C0DF4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	{
		// using (UpdatePoseDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var))->get_UpdatePoseDataPerfMarker_24();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// Debug.Assert(interactionMapping.AxisType == AxisType.SixDof);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_AxisType_mABE186767788C369755C45C43795CB9F51E5052D_inline(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_3) == ((int32_t)7))? 1 : 0), /*hidden argument*/NULL);
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_4 = ___interactionMapping0;
			NullCheck(L_4);
			int32_t L_5 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			int32_t L_6 = V_2;
			if ((((int32_t)L_6) == ((int32_t)3)))
			{
				goto IL_002f;
			}
		}

IL_002a:
		{
			goto IL_00da;
		}

IL_002f:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerPosition, out currentPointerPosition))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_7 = ((CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_il2cpp_TypeInfo_var))->get_PointerPosition_0();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_8 = __this->get_address_of_currentPointerPosition_21();
			bool L_9 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_7, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_8, /*hidden argument*/NULL);
			V_3 = L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_005e;
			}
		}

IL_0045:
		{
			// currentPointerPose.Position = MixedRealityPlayspace.TransformPoint(currentPointerPosition);
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_11 = __this->get_address_of_currentPointerPose_23();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = __this->get_currentPointerPosition_21();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = MixedRealityPlayspace_TransformPoint_m0DB731A4C7C7B1B716BACC877D80EEC8BE5CD493(L_12, /*hidden argument*/NULL);
			MixedRealityPose_set_Position_m28EBD523337BC95684EFC016980F3862DE763759((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_11, L_13, /*hidden argument*/NULL);
		}

IL_005e:
		{
			// if (inputDevice.TryGetFeatureValue(CustomUsages.PointerRotation, out currentPointerRotation))
			IL2CPP_RUNTIME_CLASS_INIT(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_14 = ((CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_StaticFields*)il2cpp_codegen_static_fields_for(CustomUsages_tBA8F5E7E6142C41A5C7B9E0AA79FEC3C2AF25E18_il2cpp_TypeInfo_var))->get_PointerRotation_1();
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_15 = __this->get_address_of_currentPointerRotation_22();
			bool L_16 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_14, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_15, /*hidden argument*/NULL);
			V_4 = L_16;
			bool L_17 = V_4;
			if (!L_17)
			{
				goto IL_0094;
			}
		}

IL_0076:
		{
			// currentPointerPose.Rotation = MixedRealityPlayspace.Rotation * currentPointerRotation;
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_18 = __this->get_address_of_currentPointerPose_23();
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = MixedRealityPlayspace_get_Rotation_mE7F4E52F714FBBD1083AF93C8EEA0B111B76A05A(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = __this->get_currentPointerRotation_22();
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_19, L_20, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_18, L_21, /*hidden argument*/NULL);
		}

IL_0094:
		{
			// interactionMapping.PoseData = currentPointerPose;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_22 = ___interactionMapping0;
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_23 = __this->get_currentPointerPose_23();
			NullCheck(L_22);
			MixedRealityInteractionMapping_set_PoseData_mED53A7137722CE84DD3F8144D83C6E2F6B844287(L_22, L_23, /*hidden argument*/NULL);
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			bool L_25 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_24, /*hidden argument*/NULL);
			V_5 = L_25;
			bool L_26 = V_5;
			if (!L_26)
			{
				goto IL_00d8;
			}
		}

IL_00ad:
		{
			// CoreServices.InputSystem?.RaisePoseInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.PoseData);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
			RuntimeObject* L_27 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
			RuntimeObject* L_28 = L_27;
			G_B9_0 = L_28;
			if (L_28)
			{
				G_B10_0 = L_28;
				goto IL_00b9;
			}
		}

IL_00b6:
		{
			goto IL_00d7;
		}

IL_00b9:
		{
			RuntimeObject* L_29 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_30 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_31 = ___interactionMapping0;
			NullCheck(L_31);
			MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_32 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E(L_31, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_33 = ___interactionMapping0;
			NullCheck(L_33);
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_34 = MixedRealityInteractionMapping_get_PoseData_mFA28DE0DB1CB2EE393BFA1BDD8EC48411C143F7F(L_33, /*hidden argument*/NULL);
			NullCheck(G_B10_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B10_0, L_29, L_30, L_32, L_34);
		}

IL_00d7:
		{
		}

IL_00d8:
		{
			// break;
			goto IL_00e5;
		}

IL_00da:
		{
			// base.UpdatePoseData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_35 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_36 = ___inputDevice1;
			GenericXRSDKController_UpdatePoseData_m5AF56853E18F289F067272BF05ECFAE266F39F08(__this, L_35, L_36, /*hidden argument*/NULL);
			// break;
			goto IL_00e5;
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.BaseWindowsMixedRealityXRSDKSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityXRSDKSource__cctor_mD1B10980D611E5667B33D5D63A73DF10130FDCC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityXRSDKSource__cctor_mD1B10980D611E5667B33D5D63A73DF10130FDCC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdatePoseDataPerfMarker = new ProfilerMarker("[MRTK] BaseWindowsMixedRealityXRSDKSource.UpdatePoseData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral9B4FE2D8244D82F2F06CBDC652CCDA46B72AC548, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var))->set_UpdatePoseDataPerfMarker_24(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__ctor_m590C502340D85D6699179B6E053EA4FE0A75295A (HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HPMotionController__ctor_m590C502340D85D6699179B6E053EA4FE0A75295A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, new HPMotionControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD * L_3 = (HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD *)il2cpp_codegen_object_new(HPMotionControllerDefinition_t893F12BDCDD73C4562E78E46308948AA9B183ADD_il2cpp_TypeInfo_var);
		HPMotionControllerDefinition__ctor_mD29BEC0924E6B628D8ECD1C90D8511C6A130AB36(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_5 = ___interactions3;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var);
		WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController_UpdateController_m84AF81AF5D2482D6141E70FFCFDED021BB64B7E9 (HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HPMotionController_UpdateController_m84AF81AF5D2482D6141E70FFCFDED021BB64B7E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_27();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// if (!Enabled) { return; }
			bool L_2 = BaseController_get_Enabled_m27A5493C062C23CE0DBE56575232986FAEB9AD78_inline(__this, /*hidden argument*/NULL);
			V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
			bool L_3 = V_2;
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001d:
		{
			// if (!Enabled) { return; }
			IL2CPP_LEAVE(0x3A, FINALLY_002b);
		}

IL_0020:
		{
			// base.UpdateController(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m135600A82845E808339DA61980CFB07D5F59AA30(__this, L_4, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x3A, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.HPMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPMotionController__cctor_m641E34B939CA8AD2052B0607CB988881BD493AE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HPMotionController__cctor_m641E34B939CA8AD2052B0607CB988881BD493AE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] HPController.UpdateController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral796E977E50AF0B1C5887A614F41528308F325532, /*hidden argument*/NULL);
		((HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_StaticFields*)il2cpp_codegen_static_fields_for(HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_27(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettings__ctor_m992951B2D715D4A56481C876879C0A71514EC792 (WindowsMixedRealityCameraSettings_tBBE00D8254951A014C772170206A2AEA17A327E6 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings__ctor_m992951B2D715D4A56481C876879C0A71514EC792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t1538BA05292FBF710A2FD224DF908FF28D0CD70F * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_tC1759AF985F5214473B939ED06A44591BA3BA3F1_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityCameraSettings__ctor_m1BC8792B38E5163C31353BDDC6CA37C8FD99E534(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityCameraSettings::get_IsOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettings_get_IsOpaque_m72EEEF25835B5CB0DA49C32ED1F2F40A4B8FB698 (WindowsMixedRealityCameraSettings_tBBE00D8254951A014C772170206A2AEA17A327E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityCameraSettings_get_IsOpaque_m72EEEF25835B5CB0DA49C32ED1F2F40A4B8FB698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B2_0 = NULL;
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		// public override bool IsOpaque => XRSubsystemHelpers.DisplaySubsystem?.displayOpaque ?? true;
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = XRSubsystemHelpers_get_DisplaySubsystem_m479073A35F7B5FDFF17882A294CB4CE53816F163(/*hidden argument*/NULL);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(G_B2_0, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
	}

IL_0011:
	{
		return (bool)G_B3_0;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager__ctor_m9E9C20DD08870DB5C9471910BC58F8BC6E97148F (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, RuntimeObject* ___inputSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager__ctor_m9E9C20DD08870DB5C9471910BC58F8BC6E97148F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool? isActiveLoader = null;
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * L_0 = __this->get_address_of_isActiveLoader_25();
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 ));
		// private IMixedRealityGazeProviderHeadOverride mixedRealityGazeProviderHeadOverride = null;
		__this->set_mixedRealityGazeProviderHeadOverride_26((RuntimeObject*)NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		RuntimeObject* L_1 = ___inputSystem0;
		String_t* L_2 = ___name1;
		uint32_t L_3 = ___priority2;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_4 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(XRSDKDeviceManager_tAC48D423BBF36BD3E3781DD139D38BCA87313188_il2cpp_TypeInfo_var);
		XRSDKDeviceManager__ctor_mB1DAE72EC8D14ECE9390AF3D53D4744D2712C0FF(__this, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// BaseMixedRealityProfile profile = null) : base(inputSystem, name, priority, profile) { }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::get_IsActiveLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_get_IsActiveLoader_m83395A8CF489877989A942BE9FBE66AD8BB05E7E (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_get_IsActiveLoader_m83395A8CF489877989A942BE9FBE66AD8BB05E7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!isActiveLoader.HasValue)
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * L_0 = __this->get_address_of_isActiveLoader_25();
		bool L_1 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// isActiveLoader = IsLoaderActive("Windows MR Loader");
		bool L_3 = VirtFuncInvoker1< bool, String_t* >::Invoke(46 /* System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.Input.XRSDKDeviceManager::IsLoaderActive(System.String) */, __this, _stringLiteral759A9A22E4500224C38CDCC5202A40E60E018CB5);
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_mD3154885E88D449C69AD9DEA6F9A3EF66A3FE996_RuntimeMethod_var);
		__this->set_isActiveLoader_25(L_4);
	}

IL_002b:
	{
		// return isActiveLoader ?? false;
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_5 = __this->get_isActiveLoader_25();
		V_1 = L_5;
		bool L_6 = Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0045;
	}

IL_003e:
	{
		bool L_7 = Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_inline((Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_7));
	}

IL_0045:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Enable_m5AC70ED00F14AFFEEFBA441236445ED293DBFF9B (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Enable_m5AC70ED00F14AFFEEFBA441236445ED293DBFF9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* G_B6_0 = NULL;
	WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * G_B6_1 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * G_B5_1 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * G_B7_1 = NULL;
	{
		// if (!IsActiveLoader)
		bool L_0 = WindowsMixedRealityDeviceManager_get_IsActiveLoader_m83395A8CF489877989A942BE9FBE66AD8BB05E7E(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// IsEnabled = false;
		VirtActionInvoker1< bool >::Invoke(34 /* System.Void Microsoft.MixedReality.Toolkit.BaseService::set_IsEnabled(System.Boolean) */, __this, (bool)0);
		// return;
		goto IL_0056;
	}

IL_0019:
	{
		// base.Enable();
		BaseService_Enable_m04CE0EA9BE41F36575F1B7FBDAE7CB7514EFEB49(__this, /*hidden argument*/NULL);
		// if (WindowsMixedRealityUtilities.UtilitiesProvider == null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = WindowsMixedRealityUtilities_get_UtilitiesProvider_m2606C2B29B60B98BD3F5A64E7A7A51A5260BB86C_inline(/*hidden argument*/NULL);
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// WindowsMixedRealityUtilities.UtilitiesProvider = new XRSDKWindowsMixedRealityUtilitiesProvider();
		XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 * L_4 = (XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 *)il2cpp_codegen_object_new(XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74_il2cpp_TypeInfo_var);
		XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0A58B28EA8BE8FCB644D6146EAFF8DB86ED2FE7F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		WindowsMixedRealityUtilities_set_UtilitiesProvider_m9EF9528DDD86A0AE45C5A80CDEDDCC281ACBC068_inline(L_4, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// mixedRealityGazeProviderHeadOverride = Service?.GazeProvider as IMixedRealityGazeProviderHeadOverride;
		RuntimeObject* L_5 = BaseDataProvider_1_get_Service_m7EC337C959E1DC2ED760B4572120C2C82EFC7B17_inline(__this, /*hidden argument*/BaseDataProvider_1_get_Service_m7EC337C959E1DC2ED760B4572120C2C82EFC7B17_RuntimeMethod_var);
		RuntimeObject* L_6 = L_5;
		G_B5_0 = L_6;
		G_B5_1 = __this;
		if (L_6)
		{
			G_B6_0 = L_6;
			G_B6_1 = __this;
			goto IL_0047;
		}
	}
	{
		G_B7_0 = ((RuntimeObject*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_004c;
	}

IL_0047:
	{
		NullCheck(G_B6_0);
		RuntimeObject* L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_7;
		G_B7_1 = G_B6_1;
	}

IL_004c:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_mixedRealityGazeProviderHeadOverride_26(((RuntimeObject*)IsInst((RuntimeObject*)G_B7_0, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityDeviceManager_Update_mAA182B766208006257659A8EA7571734FB2992EC (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_Update_mAA182B766208006257659A8EA7571734FB2992EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * V_2 = NULL;
	bool V_3 = false;
	HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * V_4 = NULL;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		// if (!IsEnabled)
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(33 /* System.Boolean Microsoft.MixedReality.Toolkit.BaseService::get_IsEnabled() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		goto IL_0099;
	}

IL_0014:
	{
		// if (mixedRealityGazeProviderHeadOverride != null && mixedRealityGazeProviderHeadOverride.UseHeadGazeOverride && WindowsMixedRealityUtilities.SpatialCoordinateSystem != null)
		RuntimeObject* L_2 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_5 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m3B887965513880F08C270920B3BD854E7ACEFD95(/*hidden argument*/NULL);
		G_B6_0 = ((!(((RuntimeObject*)(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 0;
	}

IL_0034:
	{
		V_1 = (bool)G_B6_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0092;
		}
	}
	{
		// SpatialPointerPose pointerPose = SpatialPointerPose.TryGetAtTimestamp(WindowsMixedRealityUtilities.SpatialCoordinateSystem, PerceptionTimestampHelper.FromHistoricalTargetTime(DateTimeOffset.Now));
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_7 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m3B887965513880F08C270920B3BD854E7ACEFD95(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85_il2cpp_TypeInfo_var);
		DateTimeOffset_t6C333873402CAD576160B4F8E159EB6834F06B85  L_8 = DateTimeOffset_get_Now_mB50A645DA5F2A946FB7CF6BC49C37C8965E4626D(/*hidden argument*/NULL);
		PerceptionTimestamp_t75E8C20771DDC64BC2F99644A8252C4DED8F7C01 * L_9 = PerceptionTimestampHelper_FromHistoricalTargetTime_m3887862422EFE0EB81A026771F85278980FB2943(L_8, /*hidden argument*/NULL);
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_10 = SpatialPointerPose_TryGetAtTimestamp_m86E035A372E4724987F5D572081513327F3435D8(L_7, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (pointerPose != null)
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_11 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0091;
		}
	}
	{
		// HeadPose head = pointerPose.Head;
		SpatialPointerPose_t32084147D4268FF207EE19886B74E5E847F8C0B8 * L_13 = V_2;
		NullCheck(L_13);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_14 = SpatialPointerPose_get_Head_m5B4D49A633973E41CC36CB43AA5B8C19887B088C(L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		// if (head != null)
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_15 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0090;
		}
	}
	{
		// mixedRealityGazeProviderHeadOverride.OverrideHeadGaze(head.Position.ToUnityVector3(), head.ForwardDirection.ToUnityVector3());
		RuntimeObject* L_17 = __this->get_mixedRealityGazeProviderHeadOverride_26();
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_18 = V_4;
		NullCheck(L_18);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_19 = HeadPose_get_Position_m7B7C069DBF000DCD402ABB410BD0411A9B2AFB66(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SystemNumericsExtensions_ToUnityVector3_mDE7ED1BBB72555F8824B4AE6B122AD00BCEEF383(L_19, /*hidden argument*/NULL);
		HeadPose_t4120F90F7D9775587E6525B4FEFB179B0BBC1BA5 * L_21 = V_4;
		NullCheck(L_21);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_22 = HeadPose_get_ForwardDirection_m9C840786BCCDD116297B691831699089B97329A9(L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = SystemNumericsExtensions_ToUnityVector3_mDE7ED1BBB72555F8824B4AE6B122AD00BCEEF383(L_22, /*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::OverrideHeadGaze(UnityEngine.Vector3,UnityEngine.Vector3) */, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var, L_17, L_20, L_23);
	}

IL_0090:
	{
	}

IL_0091:
	{
	}

IL_0092:
	{
		// base.Update();
		XRSDKDeviceManager_Update_m5B93839415EE272753654F350B454CF484C4E16E(__this, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::CheckCapability(Microsoft.MixedReality.Toolkit.MixedRealityCapability)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityDeviceManager_CheckCapability_m7BA3B235FF5C867FB92AF4924B585E1653AD9E1A (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, int32_t ___capability0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_CheckCapability_m7BA3B235FF5C867FB92AF4924B585E1653AD9E1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B11_0 = 0;
	{
		// if (WindowsApiChecker.IsMethodAvailable(
		//     "Windows.UI.Input.Spatial",
		//     "SpatialInteractionManager",
		//     "IsSourceKindSupported"))
		bool L_0 = WindowsApiChecker_IsMethodAvailable_m7B0CB8AFC515FE45DC0A31962CE1BE02A26D61D3(_stringLiteral7FE3A92731FBA31209B4C4A6F05732A8E2ED711D, _stringLiteral686423B8FBA01A9E35C1D722A6F8C5ED88EF00C3, _stringLiteral8E717DCC1AF93B61B01DA6841C6EC3799325E5E7, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// switch (capability)
		int32_t L_2 = ___capability0;
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) > ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0031;
		}
	}
	{
		goto IL_003a;
	}

IL_0028:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Hand);
		bool L_5 = SpatialInteractionManager_IsSourceKindSupported_mD85293F528AAC9D7B3976A5742E4F8BE9D951873(1, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_006d;
	}

IL_0031:
	{
		// return SpatialInteractionManager.IsSourceKindSupported(SpatialInteractionSourceKind.Controller);
		bool L_6 = SpatialInteractionManager_IsSourceKindSupported_mD85293F528AAC9D7B3976A5742E4F8BE9D951873(3, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_006d;
	}

IL_003a:
	{
		goto IL_0069;
	}

IL_003d:
	{
		// if (XRSubsystemHelpers.DisplaySubsystem != null && !XRSubsystemHelpers.DisplaySubsystem.displayOpaque)
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_7 = XRSubsystemHelpers_get_DisplaySubsystem_m479073A35F7B5FDFF17882A294CB4CE53816F163(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_8 = XRSubsystemHelpers_get_DisplaySubsystem_m479073A35F7B5FDFF17882A294CB4CE53816F163(/*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_9 = XRDisplaySubsystem_get_displayOpaque_m7CB94EF916C74E29A2C544E9BDA2B8DD32758442(L_8, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_0055;
	}

IL_0054:
	{
		G_B11_0 = 0;
	}

IL_0055:
	{
		V_3 = (bool)G_B11_0;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		// return capability == MixedRealityCapability.GGVHand;
		int32_t L_11 = ___capability0;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		goto IL_006d;
	}

IL_0061:
	{
		// return capability == MixedRealityCapability.MotionController;
		int32_t L_12 = ___capability0;
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		goto IL_006d;
	}

IL_0069:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Type Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetControllerType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * WindowsMixedRealityDeviceManager_GetControllerType_m9714A93D9F2843D50FD4AC36CB58465CAD46BF45 (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetControllerType_m9714A93D9F2843D50FD4AC36CB58465CAD46BF45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1024))))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_0064;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0057;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)4096))))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0064;
	}

IL_0030:
	{
		// return typeof(WindowsMixedRealityXRSDKMotionController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_006e;
	}

IL_003d:
	{
		// return typeof(HPMotionController);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (HPMotionController_t990DF5B0B3AAF06B4F86377DC49EA13CCE53C199_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_006e;
	}

IL_004a:
	{
		// return typeof(WindowsMixedRealityXRSDKArticulatedHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_006e;
	}

IL_0057:
	{
		// return typeof(WindowsMixedRealityXRSDKGGVHand);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (WindowsMixedRealityXRSDKGGVHand_tB9B084E9DA9204848E8A9D4ED352BDC7E34D05FD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		goto IL_006e;
	}

IL_0064:
	{
		// return base.GetControllerType(supportedControllerType);
		int32_t L_14 = ___supportedControllerType0;
		Type_t * L_15 = XRSDKDeviceManager_GetControllerType_mCDE08ADCCA7B34DDEF7EE87E56D945EDD164ED41(__this, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Type_t * L_16 = V_1;
		return L_16;
	}
}
// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetInputSourceType(Microsoft.MixedReality.Toolkit.Input.SupportedControllerType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetInputSourceType_mD5D3FBAD856326F087B85138988E194C555F3DB0 (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, int32_t ___supportedControllerType0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (supportedControllerType)
		int32_t L_0 = ___supportedControllerType0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0038;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0034;
		}
	}
	{
		goto IL_0026;
	}

IL_0026:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0030;
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		// return InputSourceType.Controller;
		V_1 = 2;
		goto IL_0042;
	}

IL_0034:
	{
		// return InputSourceType.Hand;
		V_1 = 1;
		goto IL_0042;
	}

IL_0038:
	{
		// return base.GetInputSourceType(supportedControllerType);
		int32_t L_6 = ___supportedControllerType0;
		int32_t L_7 = XRSDKDeviceManager_GetInputSourceType_mEB59547B4D9E7C3F9F02DF66B49F32FD8910034B(__this, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// Microsoft.MixedReality.Toolkit.Input.SupportedControllerType Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityDeviceManager::GetCurrentControllerType(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityDeviceManager_GetCurrentControllerType_m73375D676EFA4ABAFE719B160327D809DDBDE42F (WindowsMixedRealityDeviceManager_t7513461A591C2FC56D01B611914C8B3B405CF128 * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityDeviceManager_GetCurrentControllerType_m73375D676EFA4ABAFE719B160327D809DDBDE42F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	int32_t G_B4_0 = 0;
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.HandTracking))
		uint32_t L_0 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_1);
		uint32_t L_3 = ((uint32_t)8);
		RuntimeObject * L_4 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_3);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2);
		bool L_5 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_2, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Left) ||
		//     inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Right))
		uint32_t L_7 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_8);
		uint32_t L_10 = ((uint32_t)((int32_t)256));
		RuntimeObject * L_11 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_10);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_9);
		bool L_12 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_9, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0057;
		}
	}
	{
		uint32_t L_13 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_14);
		uint32_t L_16 = ((uint32_t)((int32_t)512));
		RuntimeObject * L_17 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_16);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_15);
		bool L_18 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_15, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_17, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_18));
		goto IL_0058;
	}

IL_0057:
	{
		G_B4_0 = 1;
	}

IL_0058:
	{
		V_1 = (bool)G_B4_0;
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0065;
		}
	}
	{
		// return SupportedControllerType.ArticulatedHand;
		V_2 = ((int32_t)1024);
		goto IL_00c3;
	}

IL_0065:
	{
		// return SupportedControllerType.GGVHand;
		V_2 = ((int32_t)2048);
		goto IL_00c3;
	}

IL_006e:
	{
		// if (inputDevice.characteristics.HasFlag(InputDeviceCharacteristics.Controller))
		uint32_t L_20 = InputDevice_get_characteristics_mD1EED7998ECBEBED7F42C790971B24BB9D2AE3E4((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), /*hidden argument*/NULL);
		uint32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_21);
		uint32_t L_23 = ((uint32_t)((int32_t)64));
		RuntimeObject * L_24 = Box(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B_il2cpp_TypeInfo_var, &L_23);
		NullCheck((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_22);
		bool L_25 = Enum_HasFlag_m5D934A541DEEF44DBF3415EE47F8CCED9370C173((Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_22, (Enum_t2AF27C02B8653AE29442467390005ABC74D8F521 *)L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		bool L_26 = V_3;
		if (!L_26)
		{
			goto IL_00b9;
		}
	}
	{
		// bool hasTouchpad = inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out _);
		IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
		InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_27 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
		bool L_28 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_27, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_6), /*hidden argument*/NULL);
		V_4 = L_28;
		// bool isHPController = !hasTouchpad;
		bool L_29 = V_4;
		V_5 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		// if (isHPController)
		bool L_30 = V_5;
		V_7 = L_30;
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00b3;
		}
	}
	{
		// return SupportedControllerType.HPMotionController;
		V_2 = ((int32_t)4096);
		goto IL_00c3;
	}

IL_00b3:
	{
		// return SupportedControllerType.WindowsMixedReality;
		V_2 = ((int32_t)32);
		goto IL_00c3;
	}

IL_00b9:
	{
		// return base.GetCurrentControllerType(inputDevice);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_32 = ___inputDevice0;
		int32_t L_33 = XRSDKDeviceManager_GetCurrentControllerType_mC37544AC2292D86F7D36790867F5819660064995(__this, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		goto IL_00c3;
	}

IL_00c3:
	{
		// }
		int32_t L_34 = V_2;
		return L_34;
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.ctor(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__ctor_mE681D08E6441E593967E3684C59031FAFA7B4B7B (WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642 * __this, RuntimeObject* ___spatialAwarenessSystem0, String_t* ___name1, uint32_t ___priority2, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__ctor_mE681D08E6441E593967E3684C59031FAFA7B4B7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BaseMixedRealityProfile profile = null) : base(spatialAwarenessSystem, name, priority, profile)
		RuntimeObject* L_0 = ___spatialAwarenessSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_3 = ___profile3;
		IL2CPP_RUNTIME_CLASS_INIT(GenericXRSDKSpatialMeshObserver_tFC753531C55EF38671566A8A3AE8B6FF55A060EE_il2cpp_TypeInfo_var);
		GenericXRSDKSpatialMeshObserver__ctor_m0CB7701723970D047A8134EF7E2C7A880297B632(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::ConfigureObserverVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m559825DC5CB239C1E7CE14C80475FF30DFD11333 (WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver_ConfigureObserverVolume_m559825DC5CB239C1E7CE14C80475FF30DFD11333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B3_0 = 0;
	{
		// if (SpatialAwarenessSystem == null || XRSubsystemHelpers.MeshSubsystem == null)
		RuntimeObject* L_0 = BaseSpatialObserver_get_SpatialAwarenessSystem_m6ABDB30CC80260B324F7B65C921F100943FB580A_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_1 = XRSubsystemHelpers_get_MeshSubsystem_m586D6228BE8CCD03F6F978982A0519C424F4AA48(/*hidden argument*/NULL);
		G_B3_0 = ((((RuntimeObject*)(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		goto IL_00cf;
	}

IL_001e:
	{
		// using (ConfigureObserverVolumePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_3 = ((WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_il2cpp_TypeInfo_var))->get_ConfigureObserverVolumePerfMarker_60();
		V_2 = L_3;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_4 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			// switch (ObserverVolumeType)
			int32_t L_5 = BaseSpatialObserver_get_ObserverVolumeType_mAD2E43D4A2B426CE7C504B1585292FB96389F24A_inline(__this, /*hidden argument*/NULL);
			V_3 = L_5;
			int32_t L_6 = V_3;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
			{
				case 0:
				{
					goto IL_004a;
				}
				case 1:
				{
					goto IL_0081;
				}
				case 2:
				{
					goto IL_0063;
				}
			}
		}

IL_0048:
		{
			goto IL_00a0;
		}

IL_004a:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolume(ObserverOrigin, ObservationExtents);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_7 = XRSubsystemHelpers_get_MeshSubsystem_m586D6228BE8CCD03F6F978982A0519C424F4AA48(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = BaseSpatialObserver_get_ObserverOrigin_m9945130BBB3B049178E4D78A11A7C3A6673B19D4_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = BaseSpatialObserver_get_ObservationExtents_mD115C2B6EFFF56171C6882DAC9895763D84C6F36_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_7);
			XRMeshSubsystem_SetBoundingVolume_mAB381633D4CFB71D47BD5FB736BE6236C8A608BA(L_7, L_8, L_9, /*hidden argument*/NULL);
			// break;
			goto IL_00bd;
		}

IL_0063:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolumeSphere(ObserverOrigin, ObservationExtents.x);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_10 = XRSubsystemHelpers_get_MeshSubsystem_m586D6228BE8CCD03F6F978982A0519C424F4AA48(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = BaseSpatialObserver_get_ObserverOrigin_m9945130BBB3B049178E4D78A11A7C3A6673B19D4_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = BaseSpatialObserver_get_ObservationExtents_mD115C2B6EFFF56171C6882DAC9895763D84C6F36_inline(__this, /*hidden argument*/NULL);
			float L_13 = L_12.get_x_2();
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMRExtensions_t54B11667A7ED252DBAF10EBFC1D2BCD93D375F3F_il2cpp_TypeInfo_var);
			WindowsMRExtensions_SetBoundingVolumeSphere_mEC2339778F5509E0500325C0A51A49EA499E9E56(L_10, L_11, L_13, /*hidden argument*/NULL);
			// break;
			goto IL_00bd;
		}

IL_0081:
		{
			// XRSubsystemHelpers.MeshSubsystem.SetBoundingVolumeOrientedBox(ObserverOrigin, ObservationExtents, ObserverRotation);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
			XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_14 = XRSubsystemHelpers_get_MeshSubsystem_m586D6228BE8CCD03F6F978982A0519C424F4AA48(/*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = BaseSpatialObserver_get_ObserverOrigin_m9945130BBB3B049178E4D78A11A7C3A6673B19D4_inline(__this, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = BaseSpatialObserver_get_ObservationExtents_mD115C2B6EFFF56171C6882DAC9895763D84C6F36_inline(__this, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = BaseSpatialObserver_get_ObserverRotation_mCB22B3CEFD91FBB8FDD86504BD29E5AC7CA4FFA3_inline(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMRExtensions_t54B11667A7ED252DBAF10EBFC1D2BCD93D375F3F_il2cpp_TypeInfo_var);
			WindowsMRExtensions_SetBoundingVolumeOrientedBox_m369720F1A959706D9644188F154556AD6170FAFF(L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
			// break;
			goto IL_00bd;
		}

IL_00a0:
		{
			// Debug.LogError($"Unsupported ObserverVolumeType value {ObserverVolumeType}");
			int32_t L_18 = BaseSpatialObserver_get_ObserverVolumeType_mAD2E43D4A2B426CE7C504B1585292FB96389F24A_inline(__this, /*hidden argument*/NULL);
			int32_t L_19 = L_18;
			RuntimeObject * L_20 = Box(VolumeType_t216D85DC8F2789C4360056C5953985C65B834163_il2cpp_TypeInfo_var, &L_19);
			String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralBC8426A4293446361C981DD604CEC6FF0F25CF77, L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_21, /*hidden argument*/NULL);
			// break;
			goto IL_00bd;
		}

IL_00bd:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c0;
	}

FINALLY_00c0:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(192)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(192)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealitySpatialMeshObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealitySpatialMeshObserver__cctor_m85955C2D4B36B9A80CE638E7D7080CB9004279F9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealitySpatialMeshObserver__cctor_m85955C2D4B36B9A80CE638E7D7080CB9004279F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker ConfigureObserverVolumePerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealitySpatialMeshObserver.ConfigureObserverVolume");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteral8ACB17E5AA08C73478162C386BBEB2C64F3D6D39, /*hidden argument*/NULL);
		((WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealitySpatialMeshObserver_tAFD5058D7CCF7D56BE85B41B68ADE09159B3F642_il2cpp_TypeInfo_var))->set_ConfigureObserverVolumePerfMarker_60(L_0);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__ctor_m8E896214B1DA2534728A35BF3543FE7D386FAF5F (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__ctor_m8E896214B1DA2534728A35BF3543FE7D386FAF5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_0 = (Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 *)il2cpp_codegen_object_new(Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E(L_0, /*hidden argument*/Dictionary_2__ctor_mD52EC03DD022577E1A73259E748910906383DA4E_RuntimeMethod_var);
		__this->set_unityJointPoses_26(L_0);
		// private readonly List<Bone> fingerBones = new List<Bone>();
		List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_1 = (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A *)il2cpp_codegen_object_new(List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A_il2cpp_TypeInfo_var);
		List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C(L_1, /*hidden argument*/List_1__ctor_m0D1D9E3EEB81A7A93C746BC835E3E94BE12D6C6C_RuntimeMethod_var);
		__this->set_fingerBones_29(L_1);
		// private readonly List<object> states = new List<object>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_2, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		__this->set_states_32(L_2);
		// : base(trackingState, controllerHandedness, inputSource, interactions, new ArticulatedHandDefinition(inputSource, controllerHandedness))
		int32_t L_3 = ___trackingState0;
		uint8_t L_4 = ___controllerHandedness1;
		RuntimeObject* L_5 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_6 = ___interactions3;
		RuntimeObject* L_7 = ___inputSource2;
		uint8_t L_8 = ___controllerHandedness1;
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_9 = (ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 *)il2cpp_codegen_object_new(ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_il2cpp_TypeInfo_var);
		ArticulatedHandDefinition__ctor_m3A87B19BBACBC85BA7F020C377C81D36D371D508(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1(__this, L_3, L_4, L_5, L_6, L_9, /*hidden argument*/NULL);
		// handMeshProvider = new WindowsMixedRealityHandMeshProvider(this);
		WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * L_10 = (WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 *)il2cpp_codegen_object_new(WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandMeshProvider__ctor_m4AFAD631F83C3EA818EBFA2C8557619099EE1D72(L_10, __this, /*hidden argument*/NULL);
		__this->set_handMeshProvider_27(L_10);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.ArticulatedHandDefinition Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_HandDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8 (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * V_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B2_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B1_0 = NULL;
	{
		// private ArticulatedHandDefinition HandDefinition => handDefinition ?? (handDefinition = Definition as ArticulatedHandDefinition);
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_0 = __this->get_handDefinition_25();
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = VirtFuncInvoker0< RuntimeObject* >::Invoke(20 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition Microsoft.MixedReality.Toolkit.Input.BaseController::get_Definition() */, __this);
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_3 = ((ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 *)IsInstClass((RuntimeObject*)L_2, ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838_il2cpp_TypeInfo_var));
		V_0 = L_3;
		__this->set_handDefinition_25(L_3);
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::TryGetJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_mDEE6E5717351FF43CFEB2D2E4323EEC6084BC4D2 (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, int32_t ___joint0, MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_TryGetJoint_mDEE6E5717351FF43CFEB2D2E4323EEC6084BC4D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool TryGetJoint(TrackedHandJoint joint, out MixedRealityPose pose) => unityJointPoses.TryGetValue(joint, out pose);
		Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_0 = __this->get_unityJointPoses_26();
		int32_t L_1 = ___joint0;
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_2 = ___pose1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D(L_0, L_1, (MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_2, /*hidden argument*/Dictionary_2_TryGetValue_mEB4E22F5D5C93FBC06285B7EA9EDC0B6B73CF31D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityXRSDKArticulatedHand_get_IsInPointingPose_mF9F9B6ACE3E4D8F0586979BC4D0485B0F5DA149F (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsInPointingPose => HandDefinition.IsInPointingPose;
		ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_0 = WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = ArticulatedHandDefinition_get_IsInPointingPose_m7AFE5654EA7580C6C3E20560484D1471BFF4B1AB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateController(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateController_m9AA4EFCD3C832492F0654151346AAE10B6AA4BED (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateController_m9AA4EFCD3C832492F0654151346AAE10B6AA4BED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B10_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B9_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B14_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B13_0 = NULL;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	int32_t G_B20_1 = 0;
	{
		// if (!Enabled) { return; }
		bool L_0 = BaseController_get_Enabled_m27A5493C062C23CE0DBE56575232986FAEB9AD78_inline(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (!Enabled) { return; }
		goto IL_00e0;
	}

IL_0014:
	{
		// using (UpdateControllerPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_2 = ((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->get_UpdateControllerPerfMarker_33();
		V_2 = L_2;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_3 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			// base.UpdateController(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = ___inputDevice0;
			GenericXRSDKController_UpdateController_m135600A82845E808339DA61980CFB07D5F59AA30(__this, L_4, /*hidden argument*/NULL);
			// UpdateHandData(inputDevice);
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_5 = ___inputDevice0;
			WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m2F93F620A171C51B210D470001E317E95D7C5349(__this, L_5, /*hidden argument*/NULL);
			// for (int i = 0; i < Interactions?.Length; i++)
			V_3 = 0;
			goto IL_0094;
		}

IL_0037:
		{
			// switch (Interactions[i].InputType)
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_6 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
			int32_t L_7 = V_3;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			NullCheck(L_9);
			int32_t L_10 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			int32_t L_11 = V_4;
			if ((((int32_t)L_11) == ((int32_t)((int32_t)17))))
			{
				goto IL_0073;
			}
		}

IL_004d:
		{
			goto IL_004f;
		}

IL_004f:
		{
			int32_t L_12 = V_4;
			if ((((int32_t)L_12) == ((int32_t)((int32_t)33))))
			{
				goto IL_0057;
			}
		}

IL_0055:
		{
			goto IL_008f;
		}

IL_0057:
		{
			// HandDefinition?.UpdateCurrentIndexPose(Interactions[i]);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_13 = WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8(__this, /*hidden argument*/NULL);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_14 = L_13;
			G_B9_0 = L_14;
			if (L_14)
			{
				G_B10_0 = L_14;
				goto IL_0063;
			}
		}

IL_0060:
		{
			goto IL_0071;
		}

IL_0063:
		{
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_15 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
			int32_t L_16 = V_3;
			NullCheck(L_15);
			int32_t L_17 = L_16;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
			NullCheck(G_B10_0);
			ArticulatedHandDefinition_UpdateCurrentIndexPose_m372AF242BF50085BA7B7CB512E874B66039F3332(G_B10_0, L_18, /*hidden argument*/NULL);
		}

IL_0071:
		{
			// break;
			goto IL_008f;
		}

IL_0073:
		{
			// HandDefinition?.UpdateCurrentTeleportPose(Interactions[i]);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_19 = WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8(__this, /*hidden argument*/NULL);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_20 = L_19;
			G_B13_0 = L_20;
			if (L_20)
			{
				G_B14_0 = L_20;
				goto IL_007f;
			}
		}

IL_007c:
		{
			goto IL_008d;
		}

IL_007f:
		{
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_21 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
			int32_t L_22 = V_3;
			NullCheck(L_21);
			int32_t L_23 = L_22;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
			NullCheck(G_B14_0);
			ArticulatedHandDefinition_UpdateCurrentTeleportPose_mB955997BE207256E867E9D9F92CD75631D421169(G_B14_0, L_24, /*hidden argument*/NULL);
		}

IL_008d:
		{
			// break;
			goto IL_008f;
		}

IL_008f:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_25 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		}

IL_0094:
		{
			// for (int i = 0; i < Interactions?.Length; i++)
			int32_t L_26 = V_3;
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_27 = BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_28 = L_27;
			G_B18_0 = L_28;
			G_B18_1 = L_26;
			if (L_28)
			{
				G_B19_0 = L_28;
				G_B19_1 = L_26;
				goto IL_00ab;
			}
		}

IL_009e:
		{
			il2cpp_codegen_initobj((&V_7), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_29 = V_7;
			G_B20_0 = L_29;
			G_B20_1 = G_B18_1;
			goto IL_00b2;
		}

IL_00ab:
		{
			NullCheck(G_B19_0);
			Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_30;
			memset((&L_30), 0, sizeof(L_30));
			Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_30), (((int32_t)((int32_t)(((RuntimeArray*)G_B19_0)->max_length)))), /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
			G_B20_0 = L_30;
			G_B20_1 = G_B19_1;
		}

IL_00b2:
		{
			V_6 = G_B20_0;
			int32_t L_31 = Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_RuntimeMethod_var);
			bool L_32 = Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_inline((Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *)(&V_6), /*hidden argument*/Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_RuntimeMethod_var);
			V_5 = (bool)((int32_t)((int32_t)((((int32_t)G_B20_1) < ((int32_t)L_31))? 1 : 0)&(int32_t)L_32));
			bool L_33 = V_5;
			if (L_33)
			{
				goto IL_0037;
			}
		}

IL_00ce:
		{
			IL2CPP_LEAVE(0xE0, FINALLY_00d1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d1;
	}

FINALLY_00d1:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(209)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(209)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xE0, IL_00e0)
	}

IL_00e0:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::UpdateHandData(UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m2F93F620A171C51B210D470001E317E95D7C5349 (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand_UpdateHandData_m2F93F620A171C51B210D470001E317E95D7C5349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  V_3;
	memset((&V_3), 0, sizeof(V_3));
	SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * G_B3_0 = NULL;
	XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * G_B2_0 = NULL;
	WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * G_B9_0 = NULL;
	WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * G_B8_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B25_0;
	memset((&G_B25_0), 0, sizeof(G_B25_0));
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * G_B25_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B24_0;
	memset((&G_B24_0), 0, sizeof(G_B24_0));
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * G_B24_1 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B26_0;
	memset((&G_B26_0), 0, sizeof(G_B26_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B26_1;
	memset((&G_B26_1), 0, sizeof(G_B26_1));
	MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * G_B26_2 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B31_0 = NULL;
	ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * G_B30_0 = NULL;
	{
		// using (UpdateHandDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->get_UpdateHandDataPerfMarker_34();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// XRSubsystemHelpers.InputSubsystem?.GetCurrentSourceStates(states);
			IL2CPP_RUNTIME_CLASS_INIT(XRSubsystemHelpers_tB3AF8679FECCD3DF12CE58B1FA7A2010A67BE43C_il2cpp_TypeInfo_var);
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_2 = XRSubsystemHelpers_get_InputSubsystem_mECB1B86562F56C0A71BDAD45E8556FEEA377B546(/*hidden argument*/NULL);
			XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_3 = L_2;
			G_B2_0 = L_3;
			if (L_3)
			{
				G_B3_0 = L_3;
				goto IL_001b;
			}
		}

IL_0018:
		{
			goto IL_0027;
		}

IL_001b:
		{
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = __this->get_states_32();
			WindowsMRInput_GetCurrentSourceStates_m2824CA4B1C0F4122483598A427459B5B2AF88E22(G_B3_0, L_4, /*hidden argument*/NULL);
		}

IL_0027:
		{
			// foreach (SpatialInteractionSourceState sourceState in states)
			List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_5 = __this->get_states_32();
			NullCheck(L_5);
			Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_6 = List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D(L_5, /*hidden argument*/List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_RuntimeMethod_var);
			V_3 = L_6;
		}

IL_0034:
		try
		{ // begin try (depth: 2)
			{
				goto IL_007c;
			}

IL_0036:
			{
				// foreach (SpatialInteractionSourceState sourceState in states)
				RuntimeObject * L_7 = Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_inline((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_RuntimeMethod_var);
				V_4 = ((SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 *)CastclassSealed((RuntimeObject*)L_7, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384_il2cpp_TypeInfo_var));
				// if (sourceState.Source.Handedness.ToMRTKHandedness() == ControllerHandedness)
				SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_8 = V_4;
				NullCheck(L_8);
				SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * L_9 = SpatialInteractionSourceState_get_Source_m4869A5CAE87869961CC4C7322D71008B42C3E779(L_8, /*hidden argument*/NULL);
				NullCheck(L_9);
				int32_t L_10 = SpatialInteractionSource_get_Handedness_m5443B0EAEA4835053F44F0C6E279D84268347818(L_9, /*hidden argument*/NULL);
				uint8_t L_11 = WindowsExtensions_ToMRTKHandedness_m9BC6D96D36A5BEFE5689629B3845CF8DBACD803B(L_10, /*hidden argument*/NULL);
				uint8_t L_12 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
				V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
				bool L_13 = V_5;
				if (!L_13)
				{
					goto IL_007b;
				}
			}

IL_0064:
			{
				// handMeshProvider?.UpdateHandMesh(sourceState);
				WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * L_14 = __this->get_handMeshProvider_27();
				WindowsMixedRealityHandMeshProvider_t4F2F715EE0F84DF068C0E0AE9037022D834B7BC6 * L_15 = L_14;
				G_B8_0 = L_15;
				if (L_15)
				{
					G_B9_0 = L_15;
					goto IL_0071;
				}
			}

IL_006e:
			{
				goto IL_0079;
			}

IL_0071:
			{
				SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_16 = V_4;
				NullCheck(G_B9_0);
				WindowsMixedRealityHandMeshProvider_UpdateHandMesh_m4EDAA1AE6673F9D2882090604AB0DBC835CEDE06(G_B9_0, L_16, /*hidden argument*/NULL);
			}

IL_0079:
			{
				// break;
				goto IL_0085;
			}

IL_007b:
			{
			}

IL_007c:
			{
				// foreach (SpatialInteractionSourceState sourceState in states)
				bool L_17 = Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0036;
				}
			}

IL_0085:
			{
				IL2CPP_LEAVE(0x96, FINALLY_0087);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0087;
		}

FINALLY_0087:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472((Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD *)(&V_3), /*hidden argument*/Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_RuntimeMethod_var);
			IL2CPP_END_FINALLY(135)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(135)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x96, IL_0096)
		}

IL_0096:
		{
			// if (inputDevice.TryGetFeatureValue(CommonUsages.handData, out hand))
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t930EF941C7B2ED3810E135FDBD2947DE584038BF  L_18 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_handData_49();
			bool L_19 = InputDevice_TryGetFeatureValue_m2ECF80EF5C1E30B944C67541093A1DC0ACB7148A((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice0), L_18, (Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), /*hidden argument*/NULL);
			V_6 = L_19;
			bool L_20 = V_6;
			if (!L_20)
			{
				goto IL_01ec;
			}
		}

IL_00ad:
		{
			// foreach (HandFinger finger in handFingers)
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var);
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_21 = ((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->get_handFingers_28();
			V_7 = L_21;
			V_8 = 0;
			goto IL_01c8;
		}

IL_00be:
		{
			// foreach (HandFinger finger in handFingers)
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_22 = V_7;
			int32_t L_23 = V_8;
			NullCheck(L_22);
			int32_t L_24 = L_23;
			int32_t L_25 = (int32_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
			V_9 = L_25;
			// if (hand.TryGetFingerBones(finger, fingerBones))
			int32_t L_26 = V_9;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_27 = __this->get_fingerBones_29();
			bool L_28 = Hand_TryGetFingerBones_m509562BCD2E863AC3FFF2A20FC318527F61BED20((Hand_t46350F32E9C5CF7BCA7DCBEE0811731F26C20DA3 *)(&V_2), L_26, L_27, /*hidden argument*/NULL);
			V_10 = L_28;
			bool L_29 = V_10;
			if (!L_29)
			{
				goto IL_01c1;
			}
		}

IL_00de:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			V_12 = 0;
			goto IL_0169;
		}

IL_00e7:
		{
			// TrackedHandJoint trackedHandJoint = ConvertToTrackedHandJoint(finger, i);
			int32_t L_30 = V_9;
			int32_t L_31 = V_12;
			int32_t L_32 = WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mEDBCDA7DD18BC6A496362CC9F9ED058C1E16A98A(__this, L_30, L_31, /*hidden argument*/NULL);
			V_13 = L_32;
			// Bone bone = fingerBones[i];
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_33 = __this->get_fingerBones_29();
			int32_t L_34 = V_12;
			NullCheck(L_33);
			Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_35 = List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_inline(L_33, L_34, /*hidden argument*/List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_RuntimeMethod_var);
			V_14 = L_35;
			// Vector3 position = Vector3.zero;
			IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
			V_15 = L_36;
			// Quaternion rotation = Quaternion.identity;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_37 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
			V_16 = L_37;
			// bool positionAvailable = bone.TryGetPosition(out position);
			bool L_38 = Bone_TryGetPosition_mA41AEF3DA60BEBBFE4989026E342D444A3AD5B6F((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_14), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_15), /*hidden argument*/NULL);
			V_17 = L_38;
			// bool rotationAvailable = bone.TryGetRotation(out rotation);
			bool L_39 = Bone_TryGetRotation_m1E9ECBF4D06A964F4AA735F9D9201DD73E430706((Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 *)(&V_14), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_16), /*hidden argument*/NULL);
			V_18 = L_39;
			// if (positionAvailable || rotationAvailable)
			bool L_40 = V_17;
			bool L_41 = V_18;
			V_19 = (bool)((int32_t)((int32_t)L_40|(int32_t)L_41));
			bool L_42 = V_19;
			if (!L_42)
			{
				goto IL_0162;
			}
		}

IL_0132:
		{
			// position = MixedRealityPlayspace.TransformPoint(position);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_15;
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPlayspace_t26F34BB4D1D53C64B140AF101E96EB151A9770A4_il2cpp_TypeInfo_var);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = MixedRealityPlayspace_TransformPoint_m0DB731A4C7C7B1B716BACC877D80EEC8BE5CD493(L_43, /*hidden argument*/NULL);
			V_15 = L_44;
			// rotation = MixedRealityPlayspace.Rotation * rotation;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = MixedRealityPlayspace_get_Rotation_mE7F4E52F714FBBD1083AF93C8EEA0B111B76A05A(/*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_46 = V_16;
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_47 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_45, L_46, /*hidden argument*/NULL);
			V_16 = L_47;
			// unityJointPoses[trackedHandJoint] = new MixedRealityPose(position, rotation);
			Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_48 = __this->get_unityJointPoses_26();
			int32_t L_49 = V_13;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_15;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_16;
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_52;
			memset((&L_52), 0, sizeof(L_52));
			MixedRealityPose__ctor_m139F7F8104CAB889E5AE6A14090A9764E39DFCAC((&L_52), L_50, L_51, /*hidden argument*/NULL);
			NullCheck(L_48);
			Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B(L_48, L_49, L_52, /*hidden argument*/Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B_RuntimeMethod_var);
		}

IL_0162:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_53 = V_12;
			V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		}

IL_0169:
		{
			// for (int i = 0; i < fingerBones.Count; i++)
			int32_t L_54 = V_12;
			List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * L_55 = __this->get_fingerBones_29();
			NullCheck(L_55);
			int32_t L_56 = List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_inline(L_55, /*hidden argument*/List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_RuntimeMethod_var);
			V_20 = (bool)((((int32_t)L_54) < ((int32_t)L_56))? 1 : 0);
			bool L_57 = V_20;
			if (L_57)
			{
				goto IL_00e7;
			}
		}

IL_0181:
		{
			// MixedRealityPose palmPose = CurrentControllerPose;
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_58 = ((GenericXRSDKController_tC76F99048EBA42BF5B5B729B630D8DAA828E1F33 *)__this)->get_CurrentControllerPose_12();
			V_11 = L_58;
			// palmPose.Rotation *= (ControllerHandedness == Handedness.Left ? leftPalmOffset : rightPalmOffset);
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 * L_59 = (&V_11);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_60 = MixedRealityPose_get_Rotation_m6A888CC2D81BE74348C5C556880E83DA4418C846((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)L_59, /*hidden argument*/NULL);
			uint8_t L_61 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
			G_B24_0 = L_60;
			G_B24_1 = L_59;
			if ((((int32_t)L_61) == ((int32_t)1)))
			{
				G_B25_0 = L_60;
				G_B25_1 = L_59;
				goto IL_01a1;
			}
		}

IL_019a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_62 = ((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->get_rightPalmOffset_30();
			G_B26_0 = L_62;
			G_B26_1 = G_B24_0;
			G_B26_2 = G_B24_1;
			goto IL_01a6;
		}

IL_01a1:
		{
			IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_63 = ((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->get_leftPalmOffset_31();
			G_B26_0 = L_63;
			G_B26_1 = G_B25_0;
			G_B26_2 = G_B25_1;
		}

IL_01a6:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_64 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(G_B26_1, G_B26_0, /*hidden argument*/NULL);
			MixedRealityPose_set_Rotation_m1AC620BE37B8F415170D725902EE1C3A92ECC19B((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45 *)G_B26_2, L_64, /*hidden argument*/NULL);
			// unityJointPoses[TrackedHandJoint.Palm] = palmPose;
			Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_65 = __this->get_unityJointPoses_26();
			MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_66 = V_11;
			NullCheck(L_65);
			Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B(L_65, 2, L_66, /*hidden argument*/Dictionary_2_set_Item_mA73F452CC26A09DD780D50EAE46E8684633BA15B_RuntimeMethod_var);
		}

IL_01c1:
		{
			int32_t L_67 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		}

IL_01c8:
		{
			// foreach (HandFinger finger in handFingers)
			int32_t L_68 = V_8;
			HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8* L_69 = V_7;
			NullCheck(L_69);
			if ((((int32_t)L_68) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))))
			{
				goto IL_00be;
			}
		}

IL_01d3:
		{
			// HandDefinition?.UpdateHandJoints(unityJointPoses);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_70 = WindowsMixedRealityXRSDKArticulatedHand_get_HandDefinition_m64B8AD9590BFDAA6E4D7275018A94E386B1B67C8(__this, /*hidden argument*/NULL);
			ArticulatedHandDefinition_t81093AFC9BABE163B0DBFC016363D5D7AA54F838 * L_71 = L_70;
			G_B30_0 = L_71;
			if (L_71)
			{
				G_B31_0 = L_71;
				goto IL_01df;
			}
		}

IL_01dc:
		{
			goto IL_01eb;
		}

IL_01df:
		{
			Dictionary_2_tC314057363AB78F99AD807B804C5676B14530F86 * L_72 = __this->get_unityJointPoses_26();
			NullCheck(G_B31_0);
			ArticulatedHandDefinition_UpdateHandJoints_m368B8B5A06B60BFD590B1F18D55AF4E6514681A6(G_B31_0, L_72, /*hidden argument*/NULL);
		}

IL_01eb:
		{
		}

IL_01ec:
		{
			IL2CPP_LEAVE(0x1FE, FINALLY_01ef);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ef;
	}

FINALLY_01ef:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(495)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(495)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1FE, IL_01fe)
	}

IL_01fe:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::ConvertToTrackedHandJoint(UnityEngine.XR.HandFinger,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityXRSDKArticulatedHand_ConvertToTrackedHandJoint_mEDBCDA7DD18BC6A496362CC9F9ED058C1E16A98A (WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F * __this, int32_t ___finger0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		// switch (finger)
		int32_t L_0 = ___finger0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_003a;
			}
			case 4:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0048;
	}

IL_001f:
	{
		// case HandFinger.Thumb: return (index == 0) ? TrackedHandJoint.Wrist : TrackedHandJoint.ThumbMetacarpalJoint + index - 1;
		int32_t L_2 = ___index1;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = ___index1;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)3, (int32_t)L_3)), (int32_t)1));
		goto IL_002a;
	}

IL_0029:
	{
		G_B5_0 = 1;
	}

IL_002a:
	{
		V_1 = G_B5_0;
		goto IL_004c;
	}

IL_002d:
	{
		// case HandFinger.Index: return TrackedHandJoint.IndexMetacarpal + index;
		int32_t L_4 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)7, (int32_t)L_4));
		goto IL_004c;
	}

IL_0033:
	{
		// case HandFinger.Middle: return TrackedHandJoint.MiddleMetacarpal + index;
		int32_t L_5 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)12), (int32_t)L_5));
		goto IL_004c;
	}

IL_003a:
	{
		// case HandFinger.Ring: return TrackedHandJoint.RingMetacarpal + index;
		int32_t L_6 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)17), (int32_t)L_6));
		goto IL_004c;
	}

IL_0041:
	{
		// case HandFinger.Pinky: return TrackedHandJoint.PinkyMetacarpal + index;
		int32_t L_7 = ___index1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)22), (int32_t)L_7));
		goto IL_004c;
	}

IL_0048:
	{
		// default: return TrackedHandJoint.None;
		V_1 = 0;
		goto IL_004c;
	}

IL_004c:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKArticulatedHand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKArticulatedHand__cctor_m8234DF60652E4DB83F1149681920906E67512D81 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKArticulatedHand__cctor_m8234DF60652E4DB83F1149681920906E67512D81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly HandFinger[] handFingers = Enum.GetValues(typeof(HandFinger)) as HandFinger[];
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (HandFinger_t099140D2136D51E30312813408A481C3B98D5FDA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		RuntimeArray * L_2 = Enum_GetValues_m20F5C0B826344A499B1C23BB7A3B532017F0F30C(L_1, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->set_handFingers_28(((HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8*)IsInst((RuntimeObject*)L_2, HandFingerU5BU5D_t5ECB52CC929C3DC74380D54F1E526F2AAA7EF6F8_il2cpp_TypeInfo_var)));
		// private static readonly Quaternion rightPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), Mathf.Sqrt(0.125f), -Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_3 = sqrtf((0.125f));
		float L_4 = sqrtf((0.125f));
		float L_5 = sqrtf((1.5f));
		float L_6 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_7), L_3, L_4, ((float)((float)((-L_5))/(float)(2.0f))), ((float)((float)L_6/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->set_rightPalmOffset_30(L_7);
		// private static readonly Quaternion leftPalmOffset = new Quaternion(Mathf.Sqrt(0.125f), -Mathf.Sqrt(0.125f), Mathf.Sqrt(1.5f) / 2.0f, Mathf.Sqrt(1.5f) / 2.0f);
		float L_8 = sqrtf((0.125f));
		float L_9 = sqrtf((0.125f));
		float L_10 = sqrtf((1.5f));
		float L_11 = sqrtf((1.5f));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Quaternion__ctor_m7502F0C38E04C6DE24C965D1CAF278DDD02B9D61((&L_12), L_8, ((-L_9)), ((float)((float)L_10/(float)(2.0f))), ((float)((float)L_11/(float)(2.0f))), /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->set_leftPalmOffset_31(L_12);
		// private static readonly ProfilerMarker UpdateControllerPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateController");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_13;
		memset((&L_13), 0, sizeof(L_13));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_13), _stringLiteral4C96EF72CFC6FFCB2605DE8EBE352F959840953F, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->set_UpdateControllerPerfMarker_33(L_13);
		// private static readonly ProfilerMarker UpdateHandDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKArticulatedHand.UpdateHandData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_14;
		memset((&L_14), 0, sizeof(L_14));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_14), _stringLiteralDBA71657348713194DE0F06FA1DD2F8B7C08303B, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKArticulatedHand_t33E37E5C17FCF5EFF3B12654A6A7CEC4AAB7E35F_il2cpp_TypeInfo_var))->set_UpdateHandDataPerfMarker_34(L_14);
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKGGVHand::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKGGVHand__ctor_mF8BAE3D1873AC6B7C0528CE65F5BE5CC99716D74 (WindowsMixedRealityXRSDKGGVHand_tB9B084E9DA9204848E8A9D4ED352BDC7E34D05FD * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKGGVHand__ctor_mF8BAE3D1873AC6B7C0528CE65F5BE5CC99716D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, new SimpleHandDefinition(controllerHandedness))
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_3 = ___interactions3;
		uint8_t L_4 = ___controllerHandedness1;
		SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F * L_5 = (SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F *)il2cpp_codegen_object_new(SimpleHandDefinition_tC8A544B464CC1A0739A8204DFEEE2A957E88428F_il2cpp_TypeInfo_var);
		SimpleHandDefinition__ctor_m8984BA6EC4E5AFADB184C7DE96DD0B40D18E2486(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		// { }
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
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m20EDA63BADDA35E73A4656383904F125AD07B698 (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___inputSource2, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController__ctor_m20EDA63BADDA35E73A4656383904F125AD07B698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(trackingState, controllerHandedness, new WindowsMixedRealityControllerDefinition(controllerHandedness), inputSource, interactions)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		uint8_t L_2 = ___controllerHandedness1;
		WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D * L_3 = (WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D *)il2cpp_codegen_object_new(WindowsMixedRealityControllerDefinition_tE4B1E571DF880E868424EE9B242D0DAF55B5750D_il2cpp_TypeInfo_var);
		WindowsMixedRealityControllerDefinition__ctor_m848379010D6BB4FF9CBC6D4078DA0E0D2ADC5367(L_3, L_2, /*hidden argument*/NULL);
		RuntimeObject* L_4 = ___inputSource2;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_5 = ___interactions3;
		WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96(__this, L_0, L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.ctor(Microsoft.MixedReality.Toolkit.TrackingState,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSourceDefinition,Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96 (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2 * __this, int32_t ___trackingState0, uint8_t ___controllerHandedness1, RuntimeObject* ___definition2, RuntimeObject* ___inputSource3, MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* ___interactions4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController__ctor_m5696D5C12811374940C2F3AAAD95827051C7DB96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(trackingState, controllerHandedness, inputSource, interactions, definition)
		int32_t L_0 = ___trackingState0;
		uint8_t L_1 = ___controllerHandedness1;
		RuntimeObject* L_2 = ___inputSource3;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_3 = ___interactions4;
		RuntimeObject* L_4 = ___definition2;
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityXRSDKSource_t7FB75C12D1FCC8C49A833945749ACC774CBAC335_il2cpp_TypeInfo_var);
		BaseWindowsMixedRealityXRSDKSource__ctor_mFB0BC59BACB764E94E2076AEC276DE2F49132EE1(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateButtonData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m0DF54E9E97DE62CF5D38C685509746689B7331E9 (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_UpdateButtonData_m0DF54E9E97DE62CF5D38C685509746689B7331E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B17_0 = NULL;
	RuntimeObject* G_B16_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	{
		// using (UpdateButtonDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var))->get_UpdateButtonDataPerfMarker_25();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// Debug.Assert(interactionMapping.AxisType == AxisType.Digital);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_AxisType_mABE186767788C369755C45C43795CB9F51E5052D_inline(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0), /*hidden argument*/NULL);
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_4 = ___interactionMapping0;
			NullCheck(L_4);
			int32_t L_5 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_4, /*hidden argument*/NULL);
			V_4 = L_5;
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)18))))
			{
				goto IL_004f;
			}
		}

IL_002d:
		{
			goto IL_002f;
		}

IL_002f:
		{
			int32_t L_7 = V_4;
			if ((((int32_t)L_7) == ((int32_t)((int32_t)22))))
			{
				goto IL_003f;
			}
		}

IL_0035:
		{
			goto IL_0037;
		}

IL_0037:
		{
			int32_t L_8 = V_4;
			if ((((int32_t)L_8) == ((int32_t)((int32_t)24))))
			{
				goto IL_0047;
			}
		}

IL_003d:
		{
			goto IL_0057;
		}

IL_003f:
		{
			// buttonUsage = CommonUsages.primary2DAxisTouch;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_9 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisTouch_9();
			V_2 = L_9;
			// break;
			goto IL_0065;
		}

IL_0047:
		{
			// buttonUsage = CommonUsages.primary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_10 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxisClick_8();
			V_2 = L_10;
			// break;
			goto IL_0065;
		}

IL_004f:
		{
			// buttonUsage = CommonUsages.secondary2DAxisClick;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_11 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxisClick_10();
			V_2 = L_11;
			// break;
			goto IL_0065;
		}

IL_0057:
		{
			// base.UpdateButtonData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_12 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_13 = ___inputDevice1;
			GenericXRSDKController_UpdateButtonData_m855A7E35A78FA27948E65CD709931355841B5A5D(__this, L_12, L_13, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xF7, FINALLY_00e8);
		}

IL_0065:
		{
			// if (inputDevice.TryGetFeatureValue(buttonUsage, out bool buttonPressed))
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_14 = V_2;
			bool L_15 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_14, (bool*)(&V_3), /*hidden argument*/NULL);
			V_5 = L_15;
			bool L_16 = V_5;
			if (!L_16)
			{
				goto IL_007f;
			}
		}

IL_0075:
		{
			// interactionMapping.BoolData = buttonPressed;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_17 = ___interactionMapping0;
			bool L_18 = V_3;
			NullCheck(L_17);
			MixedRealityInteractionMapping_set_BoolData_mE86E7E665BCA02A2E69651A333993A51703F7D64(L_17, L_18, /*hidden argument*/NULL);
		}

IL_007f:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_19 = ___interactionMapping0;
			NullCheck(L_19);
			bool L_20 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_19, /*hidden argument*/NULL);
			V_6 = L_20;
			bool L_21 = V_6;
			if (!L_21)
			{
				goto IL_00e5;
			}
		}

IL_008b:
		{
			// if (interactionMapping.BoolData)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_22 = ___interactionMapping0;
			NullCheck(L_22);
			bool L_23 = MixedRealityInteractionMapping_get_BoolData_mB42A4C428B73C25DC7FE9CAC463325E19255F71B(L_22, /*hidden argument*/NULL);
			V_7 = L_23;
			bool L_24 = V_7;
			if (!L_24)
			{
				goto IL_00bf;
			}
		}

IL_0098:
		{
			// CoreServices.InputSystem?.RaiseOnInputDown(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
			RuntimeObject* L_25 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
			RuntimeObject* L_26 = L_25;
			G_B16_0 = L_26;
			if (L_26)
			{
				G_B17_0 = L_26;
				goto IL_00a4;
			}
		}

IL_00a1:
		{
			goto IL_00bc;
		}

IL_00a4:
		{
			RuntimeObject* L_27 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_28 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_29 = ___interactionMapping0;
			NullCheck(L_29);
			MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_30 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E(L_29, /*hidden argument*/NULL);
			NullCheck(G_B17_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(38 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputDown(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B17_0, L_27, L_28, L_30);
		}

IL_00bc:
		{
			goto IL_00e4;
		}

IL_00bf:
		{
			// CoreServices.InputSystem?.RaiseOnInputUp(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
			RuntimeObject* L_31 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
			RuntimeObject* L_32 = L_31;
			G_B20_0 = L_32;
			if (L_32)
			{
				G_B21_0 = L_32;
				goto IL_00cb;
			}
		}

IL_00c8:
		{
			goto IL_00e3;
		}

IL_00cb:
		{
			RuntimeObject* L_33 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_34 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_35 = ___interactionMapping0;
			NullCheck(L_35);
			MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_36 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E(L_35, /*hidden argument*/NULL);
			NullCheck(G_B21_0);
			InterfaceActionInvoker3< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  >::Invoke(39 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseOnInputUp(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B21_0, L_33, L_34, L_36);
		}

IL_00e3:
		{
		}

IL_00e4:
		{
		}

IL_00e5:
		{
			IL2CPP_LEAVE(0xF7, FINALLY_00e8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e8;
	}

FINALLY_00e8:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(232)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(232)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF7, IL_00f7)
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::UpdateDualAxisData(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping,UnityEngine.XR.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m2A8530ECE7F0B9AD5ABAAEEF81271FCCD8B6ADCB (WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2 * __this, MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * ___interactionMapping0, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  ___inputDevice1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController_UpdateDualAxisData_m2A8530ECE7F0B9AD5ABAAEEF81271FCCD8B6ADCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B13_0 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	{
		// using (UpdateDualAxisDataPerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var))->get_UpdateDualAxisDataPerfMarker_26();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		{
			// Debug.Assert(interactionMapping.AxisType == AxisType.DualAxis);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_2 = ___interactionMapping0;
			NullCheck(L_2);
			int32_t L_3 = MixedRealityInteractionMapping_get_AxisType_mABE186767788C369755C45C43795CB9F51E5052D_inline(L_2, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Assert_m0283DD85C5E5F5029793C17A335DB16BC307E62E((bool)((((int32_t)L_3) == ((int32_t)4))? 1 : 0), /*hidden argument*/NULL);
			// switch (interactionMapping.InputType)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_4 = ___interactionMapping0;
			NullCheck(L_4);
			int32_t L_5 = MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline(L_4, /*hidden argument*/NULL);
			V_4 = L_5;
			int32_t L_6 = V_4;
			if ((((int32_t)L_6) == ((int32_t)((int32_t)17))))
			{
				goto IL_0037;
			}
		}

IL_002d:
		{
			goto IL_002f;
		}

IL_002f:
		{
			int32_t L_7 = V_4;
			if ((((int32_t)L_7) == ((int32_t)((int32_t)21))))
			{
				goto IL_003f;
			}
		}

IL_0035:
		{
			goto IL_0047;
		}

IL_0037:
		{
			// axisUsage = CommonUsages.secondary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_8 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_secondary2DAxis_18();
			V_2 = L_8;
			// break;
			goto IL_0052;
		}

IL_003f:
		{
			// axisUsage = CommonUsages.primary2DAxis;
			IL2CPP_RUNTIME_CLASS_INIT(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var);
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_9 = ((CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_StaticFields*)il2cpp_codegen_static_fields_for(CommonUsages_t2011A2315CAEDDFC1D5FBA04ED5024172F903321_il2cpp_TypeInfo_var))->get_primary2DAxis_17();
			V_2 = L_9;
			// break;
			goto IL_0052;
		}

IL_0047:
		{
			// base.UpdateDualAxisData(interactionMapping, inputDevice);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_10 = ___interactionMapping0;
			InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_11 = ___inputDevice1;
			GenericXRSDKController_UpdateDualAxisData_m22BB246AE053D1BBE673B2EE2E15B27B3615755D(__this, L_10, L_11, /*hidden argument*/NULL);
			// return;
			IL2CPP_LEAVE(0xB5, FINALLY_00a6);
		}

IL_0052:
		{
			// if (inputDevice.TryGetFeatureValue(axisUsage, out Vector2 axisData))
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_12 = V_2;
			bool L_13 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&___inputDevice1), L_12, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), /*hidden argument*/NULL);
			V_5 = L_13;
			bool L_14 = V_5;
			if (!L_14)
			{
				goto IL_006c;
			}
		}

IL_0062:
		{
			// interactionMapping.Vector2Data = axisData;
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_15 = ___interactionMapping0;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_3;
			NullCheck(L_15);
			MixedRealityInteractionMapping_set_Vector2Data_m87BCF9A7E5ADDB105D5CBBD4930ABF8BA3C9ABBB(L_15, L_16, /*hidden argument*/NULL);
		}

IL_006c:
		{
			// if (interactionMapping.Changed)
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_17 = ___interactionMapping0;
			NullCheck(L_17);
			bool L_18 = MixedRealityInteractionMapping_get_Changed_m70D15D24BDB909A6AA0E9C4DB393DAA25F84983F(L_17, /*hidden argument*/NULL);
			V_6 = L_18;
			bool L_19 = V_6;
			if (!L_19)
			{
				goto IL_00a3;
			}
		}

IL_0078:
		{
			// CoreServices.InputSystem?.RaisePositionInputChanged(InputSource, ControllerHandedness, interactionMapping.MixedRealityInputAction, interactionMapping.Vector2Data);
			IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
			RuntimeObject* L_20 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
			RuntimeObject* L_21 = L_20;
			G_B12_0 = L_21;
			if (L_21)
			{
				G_B13_0 = L_21;
				goto IL_0084;
			}
		}

IL_0081:
		{
			goto IL_00a2;
		}

IL_0084:
		{
			RuntimeObject* L_22 = BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline(__this, /*hidden argument*/NULL);
			uint8_t L_23 = BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline(__this, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_24 = ___interactionMapping0;
			NullCheck(L_24);
			MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073  L_25 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mA22FF2AC6237AEF7B9EADF4461EB3B484CCB995E(L_24, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * L_26 = ___interactionMapping0;
			NullCheck(L_26);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_27 = MixedRealityInteractionMapping_get_Vector2Data_m5C4FDA726DEC05433E3A243AFF5DFD5422FAA650(L_26, /*hidden argument*/NULL);
			NullCheck(G_B13_0);
			InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_tF3298AB582C6E52C2107F4AC4E6E4381EA0A5073 , Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(41 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePositionInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,UnityEngine.Vector2) */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B13_0, L_22, L_23, L_25, L_27);
		}

IL_00a2:
		{
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xB5, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(166)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB5, IL_00b5)
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.WindowsMixedRealityXRSDKMotionController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityXRSDKMotionController__cctor_m1AC3EB328212877AC44D477B85D06E9631EE1FD9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityXRSDKMotionController__cctor_m1AC3EB328212877AC44D477B85D06E9631EE1FD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateButtonDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateButtonData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteralABD5F4324F8E290A780012AFF491A3597F139F66, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var))->set_UpdateButtonDataPerfMarker_25(L_0);
		// private static readonly ProfilerMarker UpdateDualAxisDataPerfMarker = new ProfilerMarker("[MRTK] WindowsMixedRealityXRSDKMotionController.UpdateDualAxisData");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_1), _stringLiteral762F1DDFCE2D3B4BAFEBDC0DC14EB2F6DA9FBF78, /*hidden argument*/NULL);
		((WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityXRSDKMotionController_t1BAAABB047092B16EB00808ED2693A0B17C634F2_il2cpp_TypeInfo_var))->set_UpdateDualAxisDataPerfMarker_26(L_1);
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
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_ISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_ISpatialCoordinateSystemPtr_m79E400A30A63762CBC2D56280D81189A513A0253 (XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 * __this, const RuntimeMethod* method)
{
	{
		// WindowsMREnvironment.OriginSpatialCoordinateSystem;
		intptr_t L_0 = WindowsMREnvironment_get_OriginSpatialCoordinateSystem_m4E86724C165648A3AD2FF2322D2C1ED54B823F04(/*hidden argument*/NULL);
		return (intptr_t)L_0;
	}
}
// System.IntPtr Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider.get_IHolographicFramePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t XRSDKWindowsMixedRealityUtilitiesProvider_Microsoft_MixedReality_Toolkit_WindowsMixedReality_IWindowsMixedRealityUtilitiesProvider_get_IHolographicFramePtr_m9355B340B8B5B121E20A5521F8849C33F22D309F (XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 * __this, const RuntimeMethod* method)
{
	{
		// WindowsMREnvironment.CurrentHolographicRenderFrame;
		intptr_t L_0 = WindowsMREnvironment_get_CurrentHolographicRenderFrame_m690BDEEDD465FCD3570139B6B26DBE73AA0F36AD(/*hidden argument*/NULL);
		return (intptr_t)L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.XRSDK.WindowsMixedReality.XRSDKWindowsMixedRealityUtilitiesProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSDKWindowsMixedRealityUtilitiesProvider__ctor_m0A58B28EA8BE8FCB644D6146EAFF8DB86ED2FE7F (XRSDKWindowsMixedRealityUtilitiesProvider_tB93165EF1DCFB21A90D3A399168DD21015B18C74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547AD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m80C016329EAADDC4EB8DFD80ED0CF614A5E547ADMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var);
		MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45  L_0 = ((MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_tB91C13927D4C609825580E7DACDB4A550F3F0F45_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_AxisType_mABE186767788C369755C45C43795CB9F51E5052D_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	{
		// public AxisType AxisType => axisType;
		int32_t L_0 = __this->get_axisType_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_mA8C027545479C380F87D72BDED734A9BDBFA40CD_inline (MixedRealityInteractionMapping_tF40535F5D25A7AEA688519D1A5674324B999CAE2 * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseController_get_InputSource_m9F9D70F24AC4D5605665D31F6D8A6083A3CA1CFD_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public IMixedRealityInputSource InputSource { get; }
		RuntimeObject* L_0 = __this->get_U3CInputSourceU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t BaseController_get_ControllerHandedness_mA18814111E1328E1C7C04C383CC44E8A2F8A995A_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public Handedness ControllerHandedness { get; }
		uint8_t L_0 = __this->get_U3CControllerHandednessU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool BaseController_get_Enabled_m27A5493C062C23CE0DBE56575232986FAEB9AD78_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public bool Enabled { get; set; }
		bool L_0 = __this->get_U3CEnabledU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_m2606C2B29B60B98BD3F5A64E7A7A51A5260BB86C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_m2606C2B29B60B98BD3F5A64E7A7A51A5260BB86CMicrosoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m9EF9528DDD86A0AE45C5A80CDEDDCC281ACBC068_inline (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_m9EF9528DDD86A0AE45C5A80CDEDDCC281ACBC068Microsoft_MixedReality_Toolkit_Providers_XRSDK_WindowsMixedReality_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_tFF328AA3ADB6B81F0FC788A963C3E4B5B80DF34F_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* BaseSpatialObserver_get_SpatialAwarenessSystem_m6ABDB30CC80260B324F7B65C921F100943FB580A_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method)
{
	{
		// protected IMixedRealitySpatialAwarenessSystem SpatialAwarenessSystem { get; private set; }
		RuntimeObject* L_0 = __this->get_U3CSpatialAwarenessSystemU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t BaseSpatialObserver_get_ObserverVolumeType_mAD2E43D4A2B426CE7C504B1585292FB96389F24A_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method)
{
	{
		// public VolumeType ObserverVolumeType { get; set; } = VolumeType.AxisAlignedCube;
		int32_t L_0 = __this->get_U3CObserverVolumeTypeU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObserverOrigin_m9945130BBB3B049178E4D78A11A7C3A6673B19D4_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObserverOrigin { get; set; } = Vector3.zero;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObserverOriginU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BaseSpatialObserver_get_ObservationExtents_mD115C2B6EFFF56171C6882DAC9895763D84C6F36_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 ObservationExtents { get; set; } = Vector3.one * 3f; // 3 meter sides / radius
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CObservationExtentsU3Ek__BackingField_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  BaseSpatialObserver_get_ObserverRotation_mCB22B3CEFD91FBB8FDD86504BD29E5AC7CA4FFA3_inline (BaseSpatialObserver_t1A201A98BAAFD1CEFE04B6781674F6E97D98B608 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion ObserverRotation { get; set; } = Quaternion.identity;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CObserverRotationU3Ek__BackingField_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* BaseController_get_Interactions_mC6BB2DCE6BB5806FB3AEA325A55FB53BD7D3C561_inline (BaseController_t3529EF2CB2E73206F555D8AF9468309DFF9B1E9B * __this, const RuntimeMethod* method)
{
	{
		// public MixedRealityInteractionMapping[] Interactions { get; private set; } = null;
		MixedRealityInteractionMappingU5BU5D_tA9021B8F5A4C53A970615CF32CF4B0992DEFB4FA* L_0 = __this->get_U3CInteractionsU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m275A31438FCDAEEE039E95D887684E04FD6ECE2B_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_mEB3794454EFFF1F9B06CE0537D9971D6B4112E08_gshared_inline (Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_0();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * BaseDataProvider_1_get_Service_m6FE3FC2A780FCF338E18510675CC1282F7907D2C_gshared_inline (BaseDataProvider_1_t50F72FDA386766E084CAF43074D4580D23686278 * __this, const RuntimeMethod* method)
{
	{
		// protected T Service { get; set; } = default(T);
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CServiceU3Ek__BackingField_9();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mE89BB8F302DF31EE202251F4746859285860B6B6_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB664E2C41CADA8413EF8842E6601B8C696A7CE15_gshared_inline (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  List_1_get_Item_mED3BF69F1CED180D5426A7FE3C08CBC007B62EED_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1* L_2 = (BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BoneU5BU5D_tFD16BEECB467FB159674125DB906EA4433F75CF1*)L_2, (int32_t)L_3);
		return (Bone_tFCB543F0BF6DF30B7C4E29B6430D44860846BFB0 )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m31B9B4CE36D7DBB349B2DD85A7F40D912DBC4960_gshared_inline (List_1_tDF749D17F3D8E510BF13C4E3EA3D0728FDCC9B4A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
