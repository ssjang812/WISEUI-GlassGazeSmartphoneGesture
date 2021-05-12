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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092;
// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger
struct ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215;
// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup
struct LoadProfilesOnStartup_tA4FE3F468CC4C90D85AC61FD76B98EF3DDF2243D;
// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup
struct TriggerOnStartup_tC5DCCB4FCDC44ACFADF653770ABCB83D03B7C360;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue
struct ShowSliderValue_t8DE53FD8BCD0C6A5479B27F9295BB603647C5917;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor
struct SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1;
// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource
struct ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B;
// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization
struct ToggleSpatialMeshVisualization_tB5AB5500F0EB137C5217B4B91C455AF56CA98F5E;
// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine
struct UpdateSliderTrackLine_t0575CBF1BC9DF5B58B2F5B8C15D9C4DEE9E91AF2;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile
struct DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373;
// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay
struct DwellProfileWithDecay_t803A60F2FC775432403C7223695C713BD685A674;
// Microsoft.MixedReality.Toolkit.IMixedRealityEventSource
struct IMixedRealityEventSource_tCDAABC4976E965E99580F716B1B2CDD9CDBE1865;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride
struct IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tD7C4CF8940EB016597EF8CED76503F0D39A61C53;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2;
// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258;
// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47;
// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_t16091CADDB18614156CAACBF38D376B870983FE5;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver
struct IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile
struct MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7;
// Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject
struct SpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E;
// Microsoft.MixedReality.Toolkit.UI.PinchSlider
struct PinchSlider_tD2B9E7AF6DE1A31D8BA2F9627BF9650F1948B04C;
// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.UInt32>[]
struct EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.UInt32>
struct KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.UInt32>
struct ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>
struct Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t42472AE9C2FE699C57A3900EDE1B2D22194D9D0D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit>
struct List_1_t6C7AD014C867B7DDEC0F7E0E6E34237704C29074;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>>
struct List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.IEnumerable
struct IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C;
// System.Decimal[]
struct DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t974D5AB2327337E73FB2126366C9513F1C075512;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tABE518DC1E2361D29583B0048AF69206C12C9E1C;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_Style
struct TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29;
// TMPro.TextMeshPro
struct TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.SphereCollider
struct SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral198BCEC94D4602889E6BE9EA255235FE63E9232E;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE99FF15508213F90D44FF39B8CF2A8B31F204B;
IL2CPP_EXTERN_C String_t* _stringLiteral49FA9FD831096C82AB950BC7AA0A0A7EF8A10998;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC3E1B51328AE0888C2F032A7A812DCD6E5932;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF6EE07DC9D5690EBF69A0BDA7FD2041B5B51D2;
IL2CPP_EXTERN_C String_t* _stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral950AF6817FC43E2E7F84DF55C56271A185CC0031;
IL2CPP_EXTERN_C String_t* _stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A;
IL2CPP_EXTERN_C String_t* _stringLiteralFC40C9CAE7B04221D7A101B1BBB0F684365D30A9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_m7A50B7E4B260EC155104E89F194B9EDE52870F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mBD13C4FF4389459D49919659ED8EB67BE4DD99A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m906D7A765D3E3316449845935BC8A713D2D21BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m8051F577DF6619B3C626448376B57BDBCF908FA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ColorChanger_Decrement_m54C0400E0ED1B2F8661321989FE1F77120DE64FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColorChanger_Increment_m9783FF292243CC1B1D1891EDBFCD0326A3320C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColorChanger_Start_m9BAB1630692327036EDE3D0DAE8E56D81D488640_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_AddToData_m9363F77468532EF1EAD1B07AE8D510B3F0F405E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_OnDestroy_m4E38931D86C694FDE78C3865C4F800D65FD7ED31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_RemoveFromData_m78663708BC93CD2F13C94282531BB35FB4062E5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_Start_m89E6DF0320E966AD102BC4D56DD00BE04F9C83D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler_UpdateData_mFF2AA7926C06241EBC277BA4E9C777742F722ED1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LoadProfilesOnStartup_Update_mD9AF3C7AAFDF3BFC8C680EEE88545A4F7DB12B0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBADMicrosoft_MixedReality_Toolkit_Examples_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowSliderValue_OnSliderUpdated_m52D8FCDFE6CCCAE44217B67CD0D9844DB3860BDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderChangeColor_OnSliderUpdateBlue_m5E16DAD469064548E2BC4199BEF212F3B2F5210E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderChangeColor_OnSliderUpdatedGreen_m61BA23C495309ED30FA374134558AEEF75962045_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderChangeColor_OnSliderUpdatedRed_m51ADB7B04C953DD23B34C6D86B6021A9C06FB47C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleGazeSource_ToggleGazeOverride_mF048956F9FC25AF7B7322CE701A57E716D1F485D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleSpatialMeshVisualization_ToggleSpatialMeshVisual_mE41AB894B9F607B8E81704850BA818F6B24E7D63_MetadataUsageId;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4585E70202B48634B3000975BF4807556F40405B 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.UI.SliderEventData
struct SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<OldValue>k__BackingField
	float ___U3COldValueU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::<NewValue>k__BackingField
	float ___U3CNewValueU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.UI.PinchSlider Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Slider>k__BackingField
	PinchSlider_tD2B9E7AF6DE1A31D8BA2F9627BF9650F1948B04C * ___U3CSliderU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.UI.SliderEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3COldValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C, ___U3COldValueU3Ek__BackingField_0)); }
	inline float get_U3COldValueU3Ek__BackingField_0() const { return ___U3COldValueU3Ek__BackingField_0; }
	inline float* get_address_of_U3COldValueU3Ek__BackingField_0() { return &___U3COldValueU3Ek__BackingField_0; }
	inline void set_U3COldValueU3Ek__BackingField_0(float value)
	{
		___U3COldValueU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CNewValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C, ___U3CNewValueU3Ek__BackingField_1)); }
	inline float get_U3CNewValueU3Ek__BackingField_1() const { return ___U3CNewValueU3Ek__BackingField_1; }
	inline float* get_address_of_U3CNewValueU3Ek__BackingField_1() { return &___U3CNewValueU3Ek__BackingField_1; }
	inline void set_U3CNewValueU3Ek__BackingField_1(float value)
	{
		___U3CNewValueU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C, ___U3CSliderU3Ek__BackingField_2)); }
	inline PinchSlider_tD2B9E7AF6DE1A31D8BA2F9627BF9650F1948B04C * get_U3CSliderU3Ek__BackingField_2() const { return ___U3CSliderU3Ek__BackingField_2; }
	inline PinchSlider_tD2B9E7AF6DE1A31D8BA2F9627BF9650F1948B04C ** get_address_of_U3CSliderU3Ek__BackingField_2() { return &___U3CSliderU3Ek__BackingField_2; }
	inline void set_U3CSliderU3Ek__BackingField_2(PinchSlider_tD2B9E7AF6DE1A31D8BA2F9627BF9650F1948B04C * value)
	{
		___U3CSliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C, ___U3CPointerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_3() const { return ___U3CPointerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_3() { return &___U3CPointerU3Ek__BackingField_3; }
	inline void set_U3CPointerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>
struct Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* ___entries_1;
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
	KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___entries_1)); }
	inline EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD5D5ECBBDF5A5D4DDCE8F7D2A600EB6B780A4989* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___keys_7)); }
	inline KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t037CA861FA8D3174C29ABC4BB8B3149D1BFA1487 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ___values_8)); }
	inline ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE0BB880795681A7DAE27ED8A82793892AF5D2920 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B, ____syncRoot_9)); }
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


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


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


// TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___character_0)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_character_0() const { return ___character_0; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___material_2)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_2() const { return ___material_2; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_pinvoke
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF_marshaled_com
{
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___character_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA 
{
public:
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA, ___m_Array_0)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_m_Array_0() const { return ___m_Array_0; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Count_1() { return static_cast<int32_t>(offsetof(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA, ___m_Count_1)); }
	inline int32_t get_m_Count_1() const { return ___m_Count_1; }
	inline int32_t* get_address_of_m_Count_1() { return &___m_Count_1; }
	inline void set_m_Count_1(int32_t value)
	{
		___m_Count_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___itemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___itemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
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


// UnityEngine.Vector4
struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.GenericBaseEventData
struct GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
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
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEventSourceU3Ek__BackingField_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___U3CselectedObjectU3Ek__BackingField_4), (void*)value);
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


// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale
struct ExperienceScale_t6AFC12BC01EAB027DDEEBF3A7F384D81BCE03CF0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t6AFC12BC01EAB027DDEEBF3A7F384D81BCE03CF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.ColorMode
struct ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_2() const { return ___min_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_3() const { return ___max_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_3 = value;
	}
};

struct Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___zero_0)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_zero_0() const { return ___zero_0; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3_StaticFields, ___uninitialized_1)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___color_0)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_0() const { return ___color_0; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601, ___padding_1)); }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_t2EB90B666FB95C6A5F572B707004D707E45476CA  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tC75AF4FA369C73A4CDEF3AA5C313BA8576DB516F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.MaskingTypes
struct MaskingTypes_t37B6F292739A890CF34EA024D24A5BFA88579086 
{
public:
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskingTypes_t37B6F292739A890CF34EA024D24A5BFA88579086, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_DefaultItem_2)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___itemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_DefaultItem_2)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t52EA4E859AFA2147B9B1433C87D5CE5FE568FFB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t37F0056BA9C61594039522E27426D4D52D0943DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData
struct MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98  : public GenericBaseEventData_tF7A8347659841F4C7134C28074F9CCC3688BA49D
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


// TMPro.TMP_LineInfo
struct TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___itemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t3D406BC30294F6C79CA548107716A642055062CE* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_DefaultItem_2)); }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t65D348DDC3395C23E09141E5067AEAC1CBAE9601  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t9FFF9E8A3B0E6A173F18EF9C847BCF27D1BF4ACB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile
struct DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Microsoft.MixedReality.Toolkit.Input.InputSourceType Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellTriggerPointerType
	int32_t ___dwellTriggerPointerType_4;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellIntentDelay
	float ___dwellIntentDelay_5;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::dwellStartDelay
	float ___dwellStartDelay_6;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::timeToCompleteDwell
	float ___timeToCompleteDwell_7;
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::timeToAllowDwellResume
	float ___timeToAllowDwellResume_8;

public:
	inline static int32_t get_offset_of_dwellTriggerPointerType_4() { return static_cast<int32_t>(offsetof(DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373, ___dwellTriggerPointerType_4)); }
	inline int32_t get_dwellTriggerPointerType_4() const { return ___dwellTriggerPointerType_4; }
	inline int32_t* get_address_of_dwellTriggerPointerType_4() { return &___dwellTriggerPointerType_4; }
	inline void set_dwellTriggerPointerType_4(int32_t value)
	{
		___dwellTriggerPointerType_4 = value;
	}

	inline static int32_t get_offset_of_dwellIntentDelay_5() { return static_cast<int32_t>(offsetof(DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373, ___dwellIntentDelay_5)); }
	inline float get_dwellIntentDelay_5() const { return ___dwellIntentDelay_5; }
	inline float* get_address_of_dwellIntentDelay_5() { return &___dwellIntentDelay_5; }
	inline void set_dwellIntentDelay_5(float value)
	{
		___dwellIntentDelay_5 = value;
	}

	inline static int32_t get_offset_of_dwellStartDelay_6() { return static_cast<int32_t>(offsetof(DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373, ___dwellStartDelay_6)); }
	inline float get_dwellStartDelay_6() const { return ___dwellStartDelay_6; }
	inline float* get_address_of_dwellStartDelay_6() { return &___dwellStartDelay_6; }
	inline void set_dwellStartDelay_6(float value)
	{
		___dwellStartDelay_6 = value;
	}

	inline static int32_t get_offset_of_timeToCompleteDwell_7() { return static_cast<int32_t>(offsetof(DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373, ___timeToCompleteDwell_7)); }
	inline float get_timeToCompleteDwell_7() const { return ___timeToCompleteDwell_7; }
	inline float* get_address_of_timeToCompleteDwell_7() { return &___timeToCompleteDwell_7; }
	inline void set_timeToCompleteDwell_7(float value)
	{
		___timeToCompleteDwell_7 = value;
	}

	inline static int32_t get_offset_of_timeToAllowDwellResume_8() { return static_cast<int32_t>(offsetof(DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373, ___timeToAllowDwellResume_8)); }
	inline float get_timeToAllowDwellResume_8() const { return ___timeToAllowDwellResume_8; }
	inline float* get_address_of_timeToAllowDwellResume_8() { return &___timeToAllowDwellResume_8; }
	inline void set_timeToAllowDwellResume_8(float value)
	{
		___timeToAllowDwellResume_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>
struct MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3  : public MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98
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
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSpatialObjectU3Ek__BackingField_6), (void*)value);
	}
};


// TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_27)); }
	inline float get_fontScaleMultiplier_27() const { return ___fontScaleMultiplier_27; }
	inline float* get_address_of_fontScaleMultiplier_27() { return &___fontScaleMultiplier_27; }
	inline void set_fontScaleMultiplier_27(float value)
	{
		___fontScaleMultiplier_27 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_28)); }
	inline float get_currentFontSize_28() const { return ___currentFontSize_28; }
	inline float* get_address_of_currentFontSize_28() { return &___currentFontSize_28; }
	inline void set_currentFontSize_28(float value)
	{
		___currentFontSize_28 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_29)); }
	inline float get_baselineOffset_29() const { return ___baselineOffset_29; }
	inline float* get_address_of_baselineOffset_29() { return &___baselineOffset_29; }
	inline void set_baselineOffset_29(float value)
	{
		___baselineOffset_29 = value;
	}

	inline static int32_t get_offset_of_lineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_30)); }
	inline float get_lineOffset_30() const { return ___lineOffset_30; }
	inline float* get_address_of_lineOffset_30() { return &___lineOffset_30; }
	inline void set_lineOffset_30(float value)
	{
		___lineOffset_30 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isDrivenLineSpacing_31)); }
	inline bool get_isDrivenLineSpacing_31() const { return ___isDrivenLineSpacing_31; }
	inline bool* get_address_of_isDrivenLineSpacing_31() { return &___isDrivenLineSpacing_31; }
	inline void set_isDrivenLineSpacing_31(bool value)
	{
		___isDrivenLineSpacing_31 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___glyphHorizontalAdvanceAdjustment_32)); }
	inline float get_glyphHorizontalAdvanceAdjustment_32() const { return ___glyphHorizontalAdvanceAdjustment_32; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_32() { return &___glyphHorizontalAdvanceAdjustment_32; }
	inline void set_glyphHorizontalAdvanceAdjustment_32(float value)
	{
		___glyphHorizontalAdvanceAdjustment_32 = value;
	}

	inline static int32_t get_offset_of_cSpace_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___cSpace_33)); }
	inline float get_cSpace_33() const { return ___cSpace_33; }
	inline float* get_address_of_cSpace_33() { return &___cSpace_33; }
	inline void set_cSpace_33(float value)
	{
		___cSpace_33 = value;
	}

	inline static int32_t get_offset_of_mSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___mSpace_34)); }
	inline float get_mSpace_34() const { return ___mSpace_34; }
	inline float* get_address_of_mSpace_34() { return &___mSpace_34; }
	inline void set_mSpace_34(float value)
	{
		___mSpace_34 = value;
	}

	inline static int32_t get_offset_of_textInfo_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_35)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_35() const { return ___textInfo_35; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_35() { return &___textInfo_35; }
	inline void set_textInfo_35(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_35), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_36)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_36() const { return ___lineInfo_36; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_36() { return &___lineInfo_36; }
	inline void set_lineInfo_36(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_36 = value;
	}

	inline static int32_t get_offset_of_vertexColor_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_37)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_37() const { return ___vertexColor_37; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_37() { return &___vertexColor_37; }
	inline void set_vertexColor_37(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_37 = value;
	}

	inline static int32_t get_offset_of_underlineColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_38)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_38() const { return ___underlineColor_38; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_38() { return &___underlineColor_38; }
	inline void set_underlineColor_38(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_38 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_39)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_39() const { return ___strikethroughColor_39; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_39() { return &___strikethroughColor_39; }
	inline void set_strikethroughColor_39(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_39 = value;
	}

	inline static int32_t get_offset_of_highlightColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_40)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_40() const { return ___highlightColor_40; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_40() { return &___highlightColor_40; }
	inline void set_highlightColor_40(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_40 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_41)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_41() const { return ___basicStyleStack_41; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_41() { return &___basicStyleStack_41; }
	inline void set_basicStyleStack_41(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_41 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___italicAngleStack_42)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_italicAngleStack_42() const { return ___italicAngleStack_42; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_italicAngleStack_42() { return &___italicAngleStack_42; }
	inline void set_italicAngleStack_42(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___italicAngleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_42))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_43)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_colorStack_43() const { return ___colorStack_43; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_colorStack_43() { return &___colorStack_43; }
	inline void set_colorStack_43(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___colorStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_44)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_underlineColorStack_44() const { return ___underlineColorStack_44; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_underlineColorStack_44() { return &___underlineColorStack_44; }
	inline void set_underlineColorStack_44(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___underlineColorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_45)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_strikethroughColorStack_45() const { return ___strikethroughColorStack_45; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_strikethroughColorStack_45() { return &___strikethroughColorStack_45; }
	inline void set_strikethroughColorStack_45(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___strikethroughColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_46)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_highlightColorStack_46() const { return ___highlightColorStack_46; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_highlightColorStack_46() { return &___highlightColorStack_46; }
	inline void set_highlightColorStack_46(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___highlightColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightStateStack_47)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_highlightStateStack_47() const { return ___highlightStateStack_47; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_highlightStateStack_47() { return &___highlightStateStack_47; }
	inline void set_highlightStateStack_47(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___highlightStateStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_48)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_colorGradientStack_48() const { return ___colorGradientStack_48; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_colorGradientStack_48() { return &___colorGradientStack_48; }
	inline void set_colorGradientStack_48(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___colorGradientStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_49)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_sizeStack_49() const { return ___sizeStack_49; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_sizeStack_49() { return &___sizeStack_49; }
	inline void set_sizeStack_49(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___sizeStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_49))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_50)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_indentStack_50() const { return ___indentStack_50; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_indentStack_50() { return &___indentStack_50; }
	inline void set_indentStack_50(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___indentStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_51)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_fontWeightStack_51() const { return ___fontWeightStack_51; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_fontWeightStack_51() { return &___fontWeightStack_51; }
	inline void set_fontWeightStack_51(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___fontWeightStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_52)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_styleStack_52() const { return ___styleStack_52; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_styleStack_52() { return &___styleStack_52; }
	inline void set_styleStack_52(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___styleStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_53)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_baselineStack_53() const { return ___baselineStack_53; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_baselineStack_53() { return &___baselineStack_53; }
	inline void set_baselineStack_53(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___baselineStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_54)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_actionStack_54() const { return ___actionStack_54; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_actionStack_54() { return &___actionStack_54; }
	inline void set_actionStack_54(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___actionStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_55)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_materialReferenceStack_55() const { return ___materialReferenceStack_55; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_materialReferenceStack_55() { return &___materialReferenceStack_55; }
	inline void set_materialReferenceStack_55(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___materialReferenceStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_56)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_lineJustificationStack_56() const { return ___lineJustificationStack_56; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_lineJustificationStack_56() { return &___lineJustificationStack_56; }
	inline void set_lineJustificationStack_56(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___lineJustificationStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_57() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_57)); }
	inline int32_t get_spriteAnimationID_57() const { return ___spriteAnimationID_57; }
	inline int32_t* get_address_of_spriteAnimationID_57() { return &___spriteAnimationID_57; }
	inline void set_spriteAnimationID_57(int32_t value)
	{
		___spriteAnimationID_57 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_58() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_58)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_58() const { return ___currentFontAsset_58; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_58() { return &___currentFontAsset_58; }
	inline void set_currentFontAsset_58(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_58), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_59)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_59() const { return ___currentSpriteAsset_59; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_59() { return &___currentSpriteAsset_59; }
	inline void set_currentSpriteAsset_59(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_60() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_60)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_60() const { return ___currentMaterial_60; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_60() { return &___currentMaterial_60; }
	inline void set_currentMaterial_60(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_61() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_61)); }
	inline int32_t get_currentMaterialIndex_61() const { return ___currentMaterialIndex_61; }
	inline int32_t* get_address_of_currentMaterialIndex_61() { return &___currentMaterialIndex_61; }
	inline void set_currentMaterialIndex_61(int32_t value)
	{
		___currentMaterialIndex_61 = value;
	}

	inline static int32_t get_offset_of_meshExtents_62() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_62)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_62() const { return ___meshExtents_62; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_62() { return &___meshExtents_62; }
	inline void set_meshExtents_62(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_62 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_63() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_63)); }
	inline bool get_tagNoParsing_63() const { return ___tagNoParsing_63; }
	inline bool* get_address_of_tagNoParsing_63() { return &___tagNoParsing_63; }
	inline void set_tagNoParsing_63(bool value)
	{
		___tagNoParsing_63 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_64() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_64)); }
	inline bool get_isNonBreakingSpace_64() const { return ___isNonBreakingSpace_64; }
	inline bool* get_address_of_isNonBreakingSpace_64() { return &___isNonBreakingSpace_64; }
	inline void set_isNonBreakingSpace_64(bool value)
	{
		___isNonBreakingSpace_64 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_50;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_52;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_53;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_54;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_35;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_36;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_37;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_38;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_39;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_40;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_41;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___italicAngleStack_42;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___colorStack_43;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___underlineColorStack_44;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___highlightStateStack_47;
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___sizeStack_49;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___indentStack_50;
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___fontWeightStack_51;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___styleStack_52;
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___baselineStack_53;
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___actionStack_54;
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_58;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_59;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay
struct DwellProfileWithDecay_t803A60F2FC775432403C7223695C713BD685A674  : public DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::timeToAllowDwellDecay
	float ___timeToAllowDwellDecay_9;

public:
	inline static int32_t get_offset_of_timeToAllowDwellDecay_9() { return static_cast<int32_t>(offsetof(DwellProfileWithDecay_t803A60F2FC775432403C7223695C713BD685A674, ___timeToAllowDwellDecay_9)); }
	inline float get_timeToAllowDwellDecay_9() const { return ___timeToAllowDwellDecay_9; }
	inline float* get_address_of_timeToAllowDwellDecay_9() { return &___timeToAllowDwellDecay_9; }
	inline void set_timeToAllowDwellDecay_9(float value)
	{
		___timeToAllowDwellDecay_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile
struct MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableCameraSystem
	bool ___enableCameraSystem_6;
	// Microsoft.MixedReality.Toolkit.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * ___cameraProfile_7;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::cameraSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___cameraSystemType_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * ___inputSystemProfile_10;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::inputSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___inputSystemType_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_12;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundarySystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___boundarySystemType_13;
	// Microsoft.MixedReality.Toolkit.Boundary.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * ___boundaryVisualizationProfile_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_15;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::teleportSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___teleportSystemType_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableSpatialAwarenessSystem
	bool ___enableSpatialAwarenessSystem_17;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___spatialAwarenessSystemType_18;
	// Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::spatialAwarenessSystemProfile
	MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * ___spatialAwarenessSystemProfile_19;
	// Microsoft.MixedReality.Toolkit.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * ___diagnosticsSystemProfile_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_21;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::diagnosticsSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___diagnosticsSystemType_22;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::sceneSystemProfile
	MixedRealitySceneSystemProfile_t16091CADDB18614156CAACBF38D376B870983FE5 * ___sceneSystemProfile_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableSceneSystem
	bool ___enableSceneSystem_24;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::sceneSystemType
	SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * ___sceneSystemType_25;
	// Microsoft.MixedReality.Toolkit.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * ___registeredServiceProvidersProfile_26;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::useServiceInspectors
	bool ___useServiceInspectors_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::renderDepthBuffer
	bool ___renderDepthBuffer_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile::enableVerboseLogging
	bool ___enableVerboseLogging_29;

public:
	inline static int32_t get_offset_of_targetExperienceScale_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___targetExperienceScale_5)); }
	inline int32_t get_targetExperienceScale_5() const { return ___targetExperienceScale_5; }
	inline int32_t* get_address_of_targetExperienceScale_5() { return &___targetExperienceScale_5; }
	inline void set_targetExperienceScale_5(int32_t value)
	{
		___targetExperienceScale_5 = value;
	}

	inline static int32_t get_offset_of_enableCameraSystem_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableCameraSystem_6)); }
	inline bool get_enableCameraSystem_6() const { return ___enableCameraSystem_6; }
	inline bool* get_address_of_enableCameraSystem_6() { return &___enableCameraSystem_6; }
	inline void set_enableCameraSystem_6(bool value)
	{
		___enableCameraSystem_6 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___cameraProfile_7)); }
	inline MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * get_cameraProfile_7() const { return ___cameraProfile_7; }
	inline MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 ** get_address_of_cameraProfile_7() { return &___cameraProfile_7; }
	inline void set_cameraProfile_7(MixedRealityCameraProfile_t8D764AB8B73D6B7B38310A8EB0CCAD2A1176E258 * value)
	{
		___cameraProfile_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraProfile_7), (void*)value);
	}

	inline static int32_t get_offset_of_cameraSystemType_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___cameraSystemType_8)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_cameraSystemType_8() const { return ___cameraSystemType_8; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_cameraSystemType_8() { return &___cameraSystemType_8; }
	inline void set_cameraSystemType_8(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___cameraSystemType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraSystemType_8), (void*)value);
	}

	inline static int32_t get_offset_of_enableInputSystem_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableInputSystem_9)); }
	inline bool get_enableInputSystem_9() const { return ___enableInputSystem_9; }
	inline bool* get_address_of_enableInputSystem_9() { return &___enableInputSystem_9; }
	inline void set_enableInputSystem_9(bool value)
	{
		___enableInputSystem_9 = value;
	}

	inline static int32_t get_offset_of_inputSystemProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___inputSystemProfile_10)); }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * get_inputSystemProfile_10() const { return ___inputSystemProfile_10; }
	inline MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 ** get_address_of_inputSystemProfile_10() { return &___inputSystemProfile_10; }
	inline void set_inputSystemProfile_10(MixedRealityInputSystemProfile_tE6382BBDB73ACDFF6F3D0C3B4AD9B1B7F2D5BAC2 * value)
	{
		___inputSystemProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputSystemType_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___inputSystemType_11)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_inputSystemType_11() const { return ___inputSystemType_11; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_inputSystemType_11() { return &___inputSystemType_11; }
	inline void set_inputSystemType_11(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___inputSystemType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSystemType_11), (void*)value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableBoundarySystem_12)); }
	inline bool get_enableBoundarySystem_12() const { return ___enableBoundarySystem_12; }
	inline bool* get_address_of_enableBoundarySystem_12() { return &___enableBoundarySystem_12; }
	inline void set_enableBoundarySystem_12(bool value)
	{
		___enableBoundarySystem_12 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___boundarySystemType_13)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_boundarySystemType_13() const { return ___boundarySystemType_13; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_boundarySystemType_13() { return &___boundarySystemType_13; }
	inline void set_boundarySystemType_13(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___boundarySystemType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundarySystemType_13), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___boundaryVisualizationProfile_14)); }
	inline MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * get_boundaryVisualizationProfile_14() const { return ___boundaryVisualizationProfile_14; }
	inline MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 ** get_address_of_boundaryVisualizationProfile_14() { return &___boundaryVisualizationProfile_14; }
	inline void set_boundaryVisualizationProfile_14(MixedRealityBoundaryVisualizationProfile_t730676E2834214BB1B8A69370446D87E52FF9092 * value)
	{
		___boundaryVisualizationProfile_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryVisualizationProfile_14), (void*)value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableTeleportSystem_15)); }
	inline bool get_enableTeleportSystem_15() const { return ___enableTeleportSystem_15; }
	inline bool* get_address_of_enableTeleportSystem_15() { return &___enableTeleportSystem_15; }
	inline void set_enableTeleportSystem_15(bool value)
	{
		___enableTeleportSystem_15 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___teleportSystemType_16)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_teleportSystemType_16() const { return ___teleportSystemType_16; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_teleportSystemType_16() { return &___teleportSystemType_16; }
	inline void set_teleportSystemType_16(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___teleportSystemType_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___teleportSystemType_16), (void*)value);
	}

	inline static int32_t get_offset_of_enableSpatialAwarenessSystem_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableSpatialAwarenessSystem_17)); }
	inline bool get_enableSpatialAwarenessSystem_17() const { return ___enableSpatialAwarenessSystem_17; }
	inline bool* get_address_of_enableSpatialAwarenessSystem_17() { return &___enableSpatialAwarenessSystem_17; }
	inline void set_enableSpatialAwarenessSystem_17(bool value)
	{
		___enableSpatialAwarenessSystem_17 = value;
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemType_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___spatialAwarenessSystemType_18)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_spatialAwarenessSystemType_18() const { return ___spatialAwarenessSystemType_18; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_spatialAwarenessSystemType_18() { return &___spatialAwarenessSystemType_18; }
	inline void set_spatialAwarenessSystemType_18(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___spatialAwarenessSystemType_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemType_18), (void*)value);
	}

	inline static int32_t get_offset_of_spatialAwarenessSystemProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___spatialAwarenessSystemProfile_19)); }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * get_spatialAwarenessSystemProfile_19() const { return ___spatialAwarenessSystemProfile_19; }
	inline MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 ** get_address_of_spatialAwarenessSystemProfile_19() { return &___spatialAwarenessSystemProfile_19; }
	inline void set_spatialAwarenessSystemProfile_19(MixedRealitySpatialAwarenessSystemProfile_t3B2F1DD1352DB8A6A7892D9F3A2401333846D4A7 * value)
	{
		___spatialAwarenessSystemProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialAwarenessSystemProfile_19), (void*)value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___diagnosticsSystemProfile_20)); }
	inline MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * get_diagnosticsSystemProfile_20() const { return ___diagnosticsSystemProfile_20; }
	inline MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 ** get_address_of_diagnosticsSystemProfile_20() { return &___diagnosticsSystemProfile_20; }
	inline void set_diagnosticsSystemProfile_20(MixedRealityDiagnosticsProfile_t8B770DBF73BD4BD141F53C07563C6B3BCD9D9467 * value)
	{
		___diagnosticsSystemProfile_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemProfile_20), (void*)value);
	}

	inline static int32_t get_offset_of_enableDiagnosticsSystem_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableDiagnosticsSystem_21)); }
	inline bool get_enableDiagnosticsSystem_21() const { return ___enableDiagnosticsSystem_21; }
	inline bool* get_address_of_enableDiagnosticsSystem_21() { return &___enableDiagnosticsSystem_21; }
	inline void set_enableDiagnosticsSystem_21(bool value)
	{
		___enableDiagnosticsSystem_21 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystemType_22() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___diagnosticsSystemType_22)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_diagnosticsSystemType_22() const { return ___diagnosticsSystemType_22; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_diagnosticsSystemType_22() { return &___diagnosticsSystemType_22; }
	inline void set_diagnosticsSystemType_22(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___diagnosticsSystemType_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___diagnosticsSystemType_22), (void*)value);
	}

	inline static int32_t get_offset_of_sceneSystemProfile_23() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___sceneSystemProfile_23)); }
	inline MixedRealitySceneSystemProfile_t16091CADDB18614156CAACBF38D376B870983FE5 * get_sceneSystemProfile_23() const { return ___sceneSystemProfile_23; }
	inline MixedRealitySceneSystemProfile_t16091CADDB18614156CAACBF38D376B870983FE5 ** get_address_of_sceneSystemProfile_23() { return &___sceneSystemProfile_23; }
	inline void set_sceneSystemProfile_23(MixedRealitySceneSystemProfile_t16091CADDB18614156CAACBF38D376B870983FE5 * value)
	{
		___sceneSystemProfile_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneSystemProfile_23), (void*)value);
	}

	inline static int32_t get_offset_of_enableSceneSystem_24() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableSceneSystem_24)); }
	inline bool get_enableSceneSystem_24() const { return ___enableSceneSystem_24; }
	inline bool* get_address_of_enableSceneSystem_24() { return &___enableSceneSystem_24; }
	inline void set_enableSceneSystem_24(bool value)
	{
		___enableSceneSystem_24 = value;
	}

	inline static int32_t get_offset_of_sceneSystemType_25() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___sceneSystemType_25)); }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * get_sceneSystemType_25() const { return ___sceneSystemType_25; }
	inline SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 ** get_address_of_sceneSystemType_25() { return &___sceneSystemType_25; }
	inline void set_sceneSystemType_25(SystemType_t9696BD865921F75894EBD4D6EF913158A8BF3432 * value)
	{
		___sceneSystemType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneSystemType_25), (void*)value);
	}

	inline static int32_t get_offset_of_registeredServiceProvidersProfile_26() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___registeredServiceProvidersProfile_26)); }
	inline MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * get_registeredServiceProvidersProfile_26() const { return ___registeredServiceProvidersProfile_26; }
	inline MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 ** get_address_of_registeredServiceProvidersProfile_26() { return &___registeredServiceProvidersProfile_26; }
	inline void set_registeredServiceProvidersProfile_26(MixedRealityRegisteredServiceProvidersProfile_tDB4B24605DAF2F884E7BB57E2A9E24AD8082B586 * value)
	{
		___registeredServiceProvidersProfile_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredServiceProvidersProfile_26), (void*)value);
	}

	inline static int32_t get_offset_of_useServiceInspectors_27() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___useServiceInspectors_27)); }
	inline bool get_useServiceInspectors_27() const { return ___useServiceInspectors_27; }
	inline bool* get_address_of_useServiceInspectors_27() { return &___useServiceInspectors_27; }
	inline void set_useServiceInspectors_27(bool value)
	{
		___useServiceInspectors_27 = value;
	}

	inline static int32_t get_offset_of_renderDepthBuffer_28() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___renderDepthBuffer_28)); }
	inline bool get_renderDepthBuffer_28() const { return ___renderDepthBuffer_28; }
	inline bool* get_address_of_renderDepthBuffer_28() { return &___renderDepthBuffer_28; }
	inline void set_renderDepthBuffer_28(bool value)
	{
		___renderDepthBuffer_28 = value;
	}

	inline static int32_t get_offset_of_enableVerboseLogging_29() { return static_cast<int32_t>(offsetof(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9, ___enableVerboseLogging_29)); }
	inline bool get_enableVerboseLogging_29() const { return ___enableVerboseLogging_29; }
	inline bool* get_address_of_enableVerboseLogging_29() { return &___enableVerboseLogging_29; }
	inline void set_enableVerboseLogging_29(bool value)
	{
		___enableVerboseLogging_29 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t799E5463E49BC0C14AE127D8821E83BA61F3A000* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_DefaultItem_2)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SphereCollider
struct SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger
struct ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.MeshRenderer Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::rend
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___rend_4;
	// UnityEngine.Material[] Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::mats
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___mats_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::cur
	int32_t ___cur_6;

public:
	inline static int32_t get_offset_of_rend_4() { return static_cast<int32_t>(offsetof(ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215, ___rend_4)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_rend_4() const { return ___rend_4; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_rend_4() { return &___rend_4; }
	inline void set_rend_4(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___rend_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_4), (void*)value);
	}

	inline static int32_t get_offset_of_mats_5() { return static_cast<int32_t>(offsetof(ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215, ___mats_5)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_mats_5() const { return ___mats_5; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_mats_5() { return &___mats_5; }
	inline void set_mats_5(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___mats_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mats_5), (void*)value);
	}

	inline static int32_t get_offset_of_cur_6() { return static_cast<int32_t>(offsetof(ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215, ___cur_6)); }
	inline int32_t get_cur_6() const { return ___cur_6; }
	inline int32_t* get_address_of_cur_6() { return &___cur_6; }
	inline void set_cur_6(int32_t value)
	{
		___cur_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler
struct DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32> Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::meshUpdateData
	Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * ___meshUpdateData_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::isRegistered
	bool ___isRegistered_5;

public:
	inline static int32_t get_offset_of_meshUpdateData_4() { return static_cast<int32_t>(offsetof(DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D, ___meshUpdateData_4)); }
	inline Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * get_meshUpdateData_4() const { return ___meshUpdateData_4; }
	inline Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B ** get_address_of_meshUpdateData_4() { return &___meshUpdateData_4; }
	inline void set_meshUpdateData_4(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * value)
	{
		___meshUpdateData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshUpdateData_4), (void*)value);
	}

	inline static int32_t get_offset_of_isRegistered_5() { return static_cast<int32_t>(offsetof(DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D, ___isRegistered_5)); }
	inline bool get_isRegistered_5() const { return ___isRegistered_5; }
	inline bool* get_address_of_isRegistered_5() { return &___isRegistered_5; }
	inline void set_isRegistered_5(bool value)
	{
		___isRegistered_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup
struct LoadProfilesOnStartup_tA4FE3F468CC4C90D85AC61FD76B98EF3DDF2243D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::configProfile
	MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___configProfile_4;

public:
	inline static int32_t get_offset_of_configProfile_4() { return static_cast<int32_t>(offsetof(LoadProfilesOnStartup_tA4FE3F468CC4C90D85AC61FD76B98EF3DDF2243D, ___configProfile_4)); }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * get_configProfile_4() const { return ___configProfile_4; }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 ** get_address_of_configProfile_4() { return &___configProfile_4; }
	inline void set_configProfile_4(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * value)
	{
		___configProfile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configProfile_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup
struct TriggerOnStartup_tC5DCCB4FCDC44ACFADF653770ABCB83D03B7C360  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::OnSceneStart
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___OnSceneStart_4;

public:
	inline static int32_t get_offset_of_OnSceneStart_4() { return static_cast<int32_t>(offsetof(TriggerOnStartup_tC5DCCB4FCDC44ACFADF653770ABCB83D03B7C360, ___OnSceneStart_4)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_OnSceneStart_4() const { return ___OnSceneStart_4; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_OnSceneStart_4() { return &___OnSceneStart_4; }
	inline void set_OnSceneStart_4(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___OnSceneStart_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSceneStart_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue
struct ShowSliderValue_t8DE53FD8BCD0C6A5479B27F9295BB603647C5917  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TMPro.TextMeshPro Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::textMesh
	TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * ___textMesh_4;

public:
	inline static int32_t get_offset_of_textMesh_4() { return static_cast<int32_t>(offsetof(ShowSliderValue_t8DE53FD8BCD0C6A5479B27F9295BB603647C5917, ___textMesh_4)); }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * get_textMesh_4() const { return ___textMesh_4; }
	inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 ** get_address_of_textMesh_4() { return &___textMesh_4; }
	inline void set_textMesh_4(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * value)
	{
		___textMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textMesh_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor
struct SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::TargetRenderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___TargetRenderer_4;

public:
	inline static int32_t get_offset_of_TargetRenderer_4() { return static_cast<int32_t>(offsetof(SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1, ___TargetRenderer_4)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_TargetRenderer_4() const { return ___TargetRenderer_4; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_TargetRenderer_4() { return &___TargetRenderer_4; }
	inline void set_TargetRenderer_4(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___TargetRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetRenderer_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_4;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::dimension
	int32_t ___dimension_6;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::positionOffset
	float ___positionOffset_7;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::firstPropertyName
	String_t* ___firstPropertyName_8;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::secondPropertyName
	String_t* ___secondPropertyName_9;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::localRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localRotation_10;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___material_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_4() const { return ___material_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_4), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_5() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___mesh_5)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mesh_5() const { return ___mesh_5; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mesh_5() { return &___mesh_5; }
	inline void set_mesh_5(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_dimension_6() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___dimension_6)); }
	inline int32_t get_dimension_6() const { return ___dimension_6; }
	inline int32_t* get_address_of_dimension_6() { return &___dimension_6; }
	inline void set_dimension_6(int32_t value)
	{
		___dimension_6 = value;
	}

	inline static int32_t get_offset_of_positionOffset_7() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___positionOffset_7)); }
	inline float get_positionOffset_7() const { return ___positionOffset_7; }
	inline float* get_address_of_positionOffset_7() { return &___positionOffset_7; }
	inline void set_positionOffset_7(float value)
	{
		___positionOffset_7 = value;
	}

	inline static int32_t get_offset_of_firstPropertyName_8() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___firstPropertyName_8)); }
	inline String_t* get_firstPropertyName_8() const { return ___firstPropertyName_8; }
	inline String_t** get_address_of_firstPropertyName_8() { return &___firstPropertyName_8; }
	inline void set_firstPropertyName_8(String_t* value)
	{
		___firstPropertyName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstPropertyName_8), (void*)value);
	}

	inline static int32_t get_offset_of_secondPropertyName_9() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___secondPropertyName_9)); }
	inline String_t* get_secondPropertyName_9() const { return ___secondPropertyName_9; }
	inline String_t** get_address_of_secondPropertyName_9() { return &___secondPropertyName_9; }
	inline void set_secondPropertyName_9(String_t* value)
	{
		___secondPropertyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondPropertyName_9), (void*)value);
	}

	inline static int32_t get_offset_of_localRotation_10() { return static_cast<int32_t>(offsetof(MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1, ___localRotation_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localRotation_10() const { return ___localRotation_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localRotation_10() { return &___localRotation_10; }
	inline void set_localRotation_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localRotation_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource
struct ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::gazeProvider
	RuntimeObject* ___gazeProvider_4;

public:
	inline static int32_t get_offset_of_gazeProvider_4() { return static_cast<int32_t>(offsetof(ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B, ___gazeProvider_4)); }
	inline RuntimeObject* get_gazeProvider_4() const { return ___gazeProvider_4; }
	inline RuntimeObject** get_address_of_gazeProvider_4() { return &___gazeProvider_4; }
	inline void set_gazeProvider_4(RuntimeObject* value)
	{
		___gazeProvider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gazeProvider_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization
struct ToggleSpatialMeshVisualization_tB5AB5500F0EB137C5217B4B91C455AF56CA98F5E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine
struct UpdateSliderTrackLine_t0575CBF1BC9DF5B58B2F5B8C15D9C4DEE9E91AF2  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::activeLine
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___activeLine_4;

public:
	inline static int32_t get_offset_of_activeLine_4() { return static_cast<int32_t>(offsetof(UpdateSliderTrackLine_t0575CBF1BC9DF5B58B2F5B8C15D9C4DEE9E91AF2, ___activeLine_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_activeLine_4() const { return ___activeLine_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_activeLine_4() { return &___activeLine_4; }
	inline void set_activeLine_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___activeLine_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeLine_4), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealityToolkit
struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::<IsProfileSwitching>k__BackingField
	bool ___U3CIsProfileSwitchingU3Ek__BackingField_8;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeProfile
	MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___activeProfile_9;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newProfile
	MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___newProfile_10;

public:
	inline static int32_t get_offset_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___U3CIsProfileSwitchingU3Ek__BackingField_8)); }
	inline bool get_U3CIsProfileSwitchingU3Ek__BackingField_8() const { return ___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsProfileSwitchingU3Ek__BackingField_8() { return &___U3CIsProfileSwitchingU3Ek__BackingField_8; }
	inline void set_U3CIsProfileSwitchingU3Ek__BackingField_8(bool value)
	{
		___U3CIsProfileSwitchingU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_activeProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___activeProfile_9)); }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * get_activeProfile_9() const { return ___activeProfile_9; }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 ** get_address_of_activeProfile_9() { return &___activeProfile_9; }
	inline void set_activeProfile_9(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * value)
	{
		___activeProfile_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeProfile_9), (void*)value);
	}

	inline static int32_t get_offset_of_newProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47, ___newProfile_10)); }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * get_newProfile_10() const { return ___newProfile_10; }
	inline MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 ** get_address_of_newProfile_10() { return &___newProfile_10; }
	inline void set_newProfile_10(MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * value)
	{
		___newProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newProfile_10), (void*)value);
	}
};

struct MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isInitializing
	bool ___isInitializing_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::isApplicationQuitting
	bool ___isApplicationQuitting_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::internalShutdown
	bool ___internalShutdown_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeSystems
	Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * ___activeSystems_11;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.IMixedRealityService>> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::registeredMixedRealityServices
	List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * ___registeredMixedRealityServices_12;
	// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::activeInstance
	MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * ___activeInstance_13;
	// System.Boolean Microsoft.MixedReality.Toolkit.MixedRealityToolkit::newInstanceBeingInitialized
	bool ___newInstanceBeingInitialized_14;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.MixedRealityToolkit> Microsoft.MixedReality.Toolkit.MixedRealityToolkit::toolkitInstances
	List_1_t6C7AD014C867B7DDEC0F7E0E6E34237704C29074 * ___toolkitInstances_17;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::UpdateAllServicesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateAllServicesPerfMarker_18;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::LateUpdateAllServicesPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___LateUpdateAllServicesPerfMarker_19;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesInOrderPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ExecuteOnAllServicesInOrderPerfMarker_20;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.MixedRealityToolkit::ExecuteOnAllServicesReverseOrderPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___ExecuteOnAllServicesReverseOrderPerfMarker_21;

public:
	inline static int32_t get_offset_of_isInitializing_4() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isInitializing_4)); }
	inline bool get_isInitializing_4() const { return ___isInitializing_4; }
	inline bool* get_address_of_isInitializing_4() { return &___isInitializing_4; }
	inline void set_isInitializing_4(bool value)
	{
		___isInitializing_4 = value;
	}

	inline static int32_t get_offset_of_isApplicationQuitting_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___isApplicationQuitting_5)); }
	inline bool get_isApplicationQuitting_5() const { return ___isApplicationQuitting_5; }
	inline bool* get_address_of_isApplicationQuitting_5() { return &___isApplicationQuitting_5; }
	inline void set_isApplicationQuitting_5(bool value)
	{
		___isApplicationQuitting_5 = value;
	}

	inline static int32_t get_offset_of_internalShutdown_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___internalShutdown_6)); }
	inline bool get_internalShutdown_6() const { return ___internalShutdown_6; }
	inline bool* get_address_of_internalShutdown_6() { return &___internalShutdown_6; }
	inline void set_internalShutdown_6(bool value)
	{
		___internalShutdown_6 = value;
	}

	inline static int32_t get_offset_of_activeSystems_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___activeSystems_11)); }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * get_activeSystems_11() const { return ___activeSystems_11; }
	inline Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 ** get_address_of_activeSystems_11() { return &___activeSystems_11; }
	inline void set_activeSystems_11(Dictionary_2_t800AAE737FB312BBA9170905905D74ED86BF5F59 * value)
	{
		___activeSystems_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeSystems_11), (void*)value);
	}

	inline static int32_t get_offset_of_registeredMixedRealityServices_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___registeredMixedRealityServices_12)); }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * get_registeredMixedRealityServices_12() const { return ___registeredMixedRealityServices_12; }
	inline List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC ** get_address_of_registeredMixedRealityServices_12() { return &___registeredMixedRealityServices_12; }
	inline void set_registeredMixedRealityServices_12(List_1_t8665C2870C9F0DA5B6D62AF0F0323E984195D9CC * value)
	{
		___registeredMixedRealityServices_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredMixedRealityServices_12), (void*)value);
	}

	inline static int32_t get_offset_of_activeInstance_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___activeInstance_13)); }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * get_activeInstance_13() const { return ___activeInstance_13; }
	inline MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 ** get_address_of_activeInstance_13() { return &___activeInstance_13; }
	inline void set_activeInstance_13(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * value)
	{
		___activeInstance_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeInstance_13), (void*)value);
	}

	inline static int32_t get_offset_of_newInstanceBeingInitialized_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___newInstanceBeingInitialized_14)); }
	inline bool get_newInstanceBeingInitialized_14() const { return ___newInstanceBeingInitialized_14; }
	inline bool* get_address_of_newInstanceBeingInitialized_14() { return &___newInstanceBeingInitialized_14; }
	inline void set_newInstanceBeingInitialized_14(bool value)
	{
		___newInstanceBeingInitialized_14 = value;
	}

	inline static int32_t get_offset_of_toolkitInstances_17() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___toolkitInstances_17)); }
	inline List_1_t6C7AD014C867B7DDEC0F7E0E6E34237704C29074 * get_toolkitInstances_17() const { return ___toolkitInstances_17; }
	inline List_1_t6C7AD014C867B7DDEC0F7E0E6E34237704C29074 ** get_address_of_toolkitInstances_17() { return &___toolkitInstances_17; }
	inline void set_toolkitInstances_17(List_1_t6C7AD014C867B7DDEC0F7E0E6E34237704C29074 * value)
	{
		___toolkitInstances_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___toolkitInstances_17), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateAllServicesPerfMarker_18() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___UpdateAllServicesPerfMarker_18)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateAllServicesPerfMarker_18() const { return ___UpdateAllServicesPerfMarker_18; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateAllServicesPerfMarker_18() { return &___UpdateAllServicesPerfMarker_18; }
	inline void set_UpdateAllServicesPerfMarker_18(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateAllServicesPerfMarker_18 = value;
	}

	inline static int32_t get_offset_of_LateUpdateAllServicesPerfMarker_19() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___LateUpdateAllServicesPerfMarker_19)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_LateUpdateAllServicesPerfMarker_19() const { return ___LateUpdateAllServicesPerfMarker_19; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_LateUpdateAllServicesPerfMarker_19() { return &___LateUpdateAllServicesPerfMarker_19; }
	inline void set_LateUpdateAllServicesPerfMarker_19(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___LateUpdateAllServicesPerfMarker_19 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___ExecuteOnAllServicesInOrderPerfMarker_20)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ExecuteOnAllServicesInOrderPerfMarker_20() const { return ___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ExecuteOnAllServicesInOrderPerfMarker_20() { return &___ExecuteOnAllServicesInOrderPerfMarker_20; }
	inline void set_ExecuteOnAllServicesInOrderPerfMarker_20(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ExecuteOnAllServicesInOrderPerfMarker_20 = value;
	}

	inline static int32_t get_offset_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields, ___ExecuteOnAllServicesReverseOrderPerfMarker_21)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_ExecuteOnAllServicesReverseOrderPerfMarker_21() const { return ___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_ExecuteOnAllServicesReverseOrderPerfMarker_21() { return &___ExecuteOnAllServicesReverseOrderPerfMarker_21; }
	inline void set_ExecuteOnAllServicesReverseOrderPerfMarker_21(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___ExecuteOnAllServicesReverseOrderPerfMarker_21 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_35;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_184;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_185;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_189;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_190;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_indentStack_191;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_192;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_193;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_194;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_195;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextProcessingArray_196;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_197;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_198;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_199;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_206;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_207;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_211;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_212;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_213;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_214;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_215;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_216;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_217;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_218;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_219;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_220;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_222;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_223;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_224;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_225;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_colorStack_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_underlineColorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  ___m_strikethroughColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  ___m_HighlightStateStack_229;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  ___m_colorGradientStack_231;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_232;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_233;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_234;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* ___m_TextStyleStacks_235;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_ItalicAngleStack_237;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  ___m_actionStack_239;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_240;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_241;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  ___m_baselineOffsetStack_242;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_243;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_244;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_245;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Ellipsis_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  ___m_Underline_247;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_249;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_250;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_251;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_252;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_255;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  ___m_TextBackingArray_256;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* ___k_Power_257;

public:
	inline static int32_t get_offset_of_m_text_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_35)); }
	inline String_t* get_m_text_35() const { return ___m_text_35; }
	inline String_t** get_address_of_m_text_35() { return &___m_text_35; }
	inline void set_m_text_35(String_t* value)
	{
		___m_text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsTextBackingStringDirty_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextBackingStringDirty_36)); }
	inline bool get_m_IsTextBackingStringDirty_36() const { return ___m_IsTextBackingStringDirty_36; }
	inline bool* get_address_of_m_IsTextBackingStringDirty_36() { return &___m_IsTextBackingStringDirty_36; }
	inline void set_m_IsTextBackingStringDirty_36(bool value)
	{
		___m_IsTextBackingStringDirty_36 = value;
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_39)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_42)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_43)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_49)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_53)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_55)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_56)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_59)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_64)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_tC6C45E5B0EC8EF4BA7BB147712516656B0D26C04 * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyle_66)); }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t9FD01084B9E3F1D4B92E87114C454C98BA20FBAD * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_69)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_70)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_t9B88CE01A1519B853E184D1F9694499E6EBCF285  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7 * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t81C8D34078017147C6B9FCC634392941F5D6F8D7  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___parentLinkedComponent_117)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_145)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_151)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_154)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_155)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_160)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___OnPreRenderText_164)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_172)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_184)); }
	inline int32_t get_m_inputSource_184() const { return ___m_inputSource_184; }
	inline int32_t* get_address_of_m_inputSource_184() { return &___m_inputSource_184; }
	inline void set_m_inputSource_184(int32_t value)
	{
		___m_inputSource_184 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_185)); }
	inline float get_m_fontScaleMultiplier_185() const { return ___m_fontScaleMultiplier_185; }
	inline float* get_address_of_m_fontScaleMultiplier_185() { return &___m_fontScaleMultiplier_185; }
	inline void set_m_fontScaleMultiplier_185(float value)
	{
		___m_fontScaleMultiplier_185 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_189)); }
	inline float get_tag_LineIndent_189() const { return ___tag_LineIndent_189; }
	inline float* get_address_of_tag_LineIndent_189() { return &___tag_LineIndent_189; }
	inline void set_tag_LineIndent_189(float value)
	{
		___tag_LineIndent_189 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_190)); }
	inline float get_tag_Indent_190() const { return ___tag_Indent_190; }
	inline float* get_address_of_tag_Indent_190() { return &___tag_Indent_190; }
	inline void set_tag_Indent_190(float value)
	{
		___tag_Indent_190 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_191)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_indentStack_191() const { return ___m_indentStack_191; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_indentStack_191() { return &___m_indentStack_191; }
	inline void set_m_indentStack_191(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_indentStack_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_191))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_192)); }
	inline bool get_tag_NoParsing_192() const { return ___tag_NoParsing_192; }
	inline bool* get_address_of_tag_NoParsing_192() { return &___tag_NoParsing_192; }
	inline void set_tag_NoParsing_192(bool value)
	{
		___tag_NoParsing_192 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_193)); }
	inline bool get_m_isParsingText_193() const { return ___m_isParsingText_193; }
	inline bool* get_address_of_m_isParsingText_193() { return &___m_isParsingText_193; }
	inline void set_m_isParsingText_193(bool value)
	{
		___m_isParsingText_193 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_194)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_194() const { return ___m_FXMatrix_194; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_194() { return &___m_FXMatrix_194; }
	inline void set_m_FXMatrix_194(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_194 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_195)); }
	inline bool get_m_isFXMatrixSet_195() const { return ___m_isFXMatrixSet_195; }
	inline bool* get_address_of_m_isFXMatrixSet_195() { return &___m_isFXMatrixSet_195; }
	inline void set_m_isFXMatrixSet_195(bool value)
	{
		___m_isFXMatrixSet_195 = value;
	}

	inline static int32_t get_offset_of_m_TextProcessingArray_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextProcessingArray_196)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextProcessingArray_196() const { return ___m_TextProcessingArray_196; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextProcessingArray_196() { return &___m_TextProcessingArray_196; }
	inline void set_m_TextProcessingArray_196(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextProcessingArray_196 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextProcessingArray_196), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalTextProcessingArraySize_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_InternalTextProcessingArraySize_197)); }
	inline int32_t get_m_InternalTextProcessingArraySize_197() const { return ___m_InternalTextProcessingArraySize_197; }
	inline int32_t* get_address_of_m_InternalTextProcessingArraySize_197() { return &___m_InternalTextProcessingArraySize_197; }
	inline void set_m_InternalTextProcessingArraySize_197(int32_t value)
	{
		___m_InternalTextProcessingArraySize_197 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_198)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_198() const { return ___m_internalCharacterInfo_198; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_198() { return &___m_internalCharacterInfo_198; }
	inline void set_m_internalCharacterInfo_198(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_199)); }
	inline int32_t get_m_totalCharacterCount_199() const { return ___m_totalCharacterCount_199; }
	inline int32_t* get_address_of_m_totalCharacterCount_199() { return &___m_totalCharacterCount_199; }
	inline void set_m_totalCharacterCount_199(int32_t value)
	{
		___m_totalCharacterCount_199 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_206)); }
	inline int32_t get_m_characterCount_206() const { return ___m_characterCount_206; }
	inline int32_t* get_address_of_m_characterCount_206() { return &___m_characterCount_206; }
	inline void set_m_characterCount_206(int32_t value)
	{
		___m_characterCount_206 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_207)); }
	inline int32_t get_m_firstCharacterOfLine_207() const { return ___m_firstCharacterOfLine_207; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_207() { return &___m_firstCharacterOfLine_207; }
	inline void set_m_firstCharacterOfLine_207(int32_t value)
	{
		___m_firstCharacterOfLine_207 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_208)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_208() const { return ___m_firstVisibleCharacterOfLine_208; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_208() { return &___m_firstVisibleCharacterOfLine_208; }
	inline void set_m_firstVisibleCharacterOfLine_208(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_208 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_209)); }
	inline int32_t get_m_lastCharacterOfLine_209() const { return ___m_lastCharacterOfLine_209; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_209() { return &___m_lastCharacterOfLine_209; }
	inline void set_m_lastCharacterOfLine_209(int32_t value)
	{
		___m_lastCharacterOfLine_209 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_210)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_210() const { return ___m_lastVisibleCharacterOfLine_210; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_210() { return &___m_lastVisibleCharacterOfLine_210; }
	inline void set_m_lastVisibleCharacterOfLine_210(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_210 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_211)); }
	inline int32_t get_m_lineNumber_211() const { return ___m_lineNumber_211; }
	inline int32_t* get_address_of_m_lineNumber_211() { return &___m_lineNumber_211; }
	inline void set_m_lineNumber_211(int32_t value)
	{
		___m_lineNumber_211 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_212)); }
	inline int32_t get_m_lineVisibleCharacterCount_212() const { return ___m_lineVisibleCharacterCount_212; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_212() { return &___m_lineVisibleCharacterCount_212; }
	inline void set_m_lineVisibleCharacterCount_212(int32_t value)
	{
		___m_lineVisibleCharacterCount_212 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_213)); }
	inline int32_t get_m_pageNumber_213() const { return ___m_pageNumber_213; }
	inline int32_t* get_address_of_m_pageNumber_213() { return &___m_pageNumber_213; }
	inline void set_m_pageNumber_213(int32_t value)
	{
		___m_pageNumber_213 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_PageAscender_214)); }
	inline float get_m_PageAscender_214() const { return ___m_PageAscender_214; }
	inline float* get_address_of_m_PageAscender_214() { return &___m_PageAscender_214; }
	inline void set_m_PageAscender_214(float value)
	{
		___m_PageAscender_214 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxTextAscender_215)); }
	inline float get_m_maxTextAscender_215() const { return ___m_maxTextAscender_215; }
	inline float* get_address_of_m_maxTextAscender_215() { return &___m_maxTextAscender_215; }
	inline void set_m_maxTextAscender_215(float value)
	{
		___m_maxTextAscender_215 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_216)); }
	inline float get_m_maxCapHeight_216() const { return ___m_maxCapHeight_216; }
	inline float* get_address_of_m_maxCapHeight_216() { return &___m_maxCapHeight_216; }
	inline void set_m_maxCapHeight_216(float value)
	{
		___m_maxCapHeight_216 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementAscender_217)); }
	inline float get_m_ElementAscender_217() const { return ___m_ElementAscender_217; }
	inline float* get_address_of_m_ElementAscender_217() { return &___m_ElementAscender_217; }
	inline void set_m_ElementAscender_217(float value)
	{
		___m_ElementAscender_217 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ElementDescender_218)); }
	inline float get_m_ElementDescender_218() const { return ___m_ElementDescender_218; }
	inline float* get_address_of_m_ElementDescender_218() { return &___m_ElementDescender_218; }
	inline void set_m_ElementDescender_218(float value)
	{
		___m_ElementDescender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_219)); }
	inline float get_m_maxLineAscender_219() const { return ___m_maxLineAscender_219; }
	inline float* get_address_of_m_maxLineAscender_219() { return &___m_maxLineAscender_219; }
	inline void set_m_maxLineAscender_219(float value)
	{
		___m_maxLineAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_220)); }
	inline float get_m_maxLineDescender_220() const { return ___m_maxLineDescender_220; }
	inline float* get_address_of_m_maxLineDescender_220() { return &___m_maxLineDescender_220; }
	inline void set_m_maxLineDescender_220(float value)
	{
		___m_maxLineDescender_220 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_221)); }
	inline float get_m_startOfLineAscender_221() const { return ___m_startOfLineAscender_221; }
	inline float* get_address_of_m_startOfLineAscender_221() { return &___m_startOfLineAscender_221; }
	inline void set_m_startOfLineAscender_221(float value)
	{
		___m_startOfLineAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineDescender_222)); }
	inline float get_m_startOfLineDescender_222() const { return ___m_startOfLineDescender_222; }
	inline float* get_address_of_m_startOfLineDescender_222() { return &___m_startOfLineDescender_222; }
	inline void set_m_startOfLineDescender_222(float value)
	{
		___m_startOfLineDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_223)); }
	inline float get_m_lineOffset_223() const { return ___m_lineOffset_223; }
	inline float* get_address_of_m_lineOffset_223() { return &___m_lineOffset_223; }
	inline void set_m_lineOffset_223(float value)
	{
		___m_lineOffset_223 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_224)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_224() const { return ___m_meshExtents_224; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_224() { return &___m_meshExtents_224; }
	inline void set_m_meshExtents_224(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_224 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_225)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_225() const { return ___m_htmlColor_225; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_225() { return &___m_htmlColor_225; }
	inline void set_m_htmlColor_225(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_225 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_226)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_colorStack_226() const { return ___m_colorStack_226; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_colorStack_226() { return &___m_colorStack_226; }
	inline void set_m_colorStack_226(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_colorStack_226 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_226))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_227)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_underlineColorStack_227() const { return ___m_underlineColorStack_227; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_underlineColorStack_227() { return &___m_underlineColorStack_227; }
	inline void set_m_underlineColorStack_227(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_underlineColorStack_227 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_227))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_228)); }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  get_m_strikethroughColorStack_228() const { return ___m_strikethroughColorStack_228; }
	inline TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D * get_address_of_m_strikethroughColorStack_228() { return &___m_strikethroughColorStack_228; }
	inline void set_m_strikethroughColorStack_228(TMP_TextProcessingStack_1_t5DDD10EF05A1E21C2893AF7AB369978E3B65FC4D  value)
	{
		___m_strikethroughColorStack_228 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_228))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_HighlightStateStack_229)); }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  get_m_HighlightStateStack_229() const { return ___m_HighlightStateStack_229; }
	inline TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2 * get_address_of_m_HighlightStateStack_229() { return &___m_HighlightStateStack_229; }
	inline void set_m_HighlightStateStack_229(TMP_TextProcessingStack_1_t5E0E8D61A78E6DF7DF7ADD0C113FE0555A7182C2  value)
	{
		___m_HighlightStateStack_229 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_229))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_230)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_230() const { return ___m_colorGradientPreset_230; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_230() { return &___m_colorGradientPreset_230; }
	inline void set_m_colorGradientPreset_230(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_230 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_230), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_231)); }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  get_m_colorGradientStack_231() const { return ___m_colorGradientStack_231; }
	inline TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C * get_address_of_m_colorGradientStack_231() { return &___m_colorGradientStack_231; }
	inline void set_m_colorGradientStack_231(TMP_TextProcessingStack_1_t6C972446834E7D56379DF398A04F25978EF4939C  value)
	{
		___m_colorGradientStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_231))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_231))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPresetIsTinted_232)); }
	inline bool get_m_colorGradientPresetIsTinted_232() const { return ___m_colorGradientPresetIsTinted_232; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_232() { return &___m_colorGradientPresetIsTinted_232; }
	inline void set_m_colorGradientPresetIsTinted_232(bool value)
	{
		___m_colorGradientPresetIsTinted_232 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_233)); }
	inline float get_m_tabSpacing_233() const { return ___m_tabSpacing_233; }
	inline float* get_address_of_m_tabSpacing_233() { return &___m_tabSpacing_233; }
	inline void set_m_tabSpacing_233(float value)
	{
		___m_tabSpacing_233 = value;
	}

	inline static int32_t get_offset_of_m_spacing_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_234)); }
	inline float get_m_spacing_234() const { return ___m_spacing_234; }
	inline float* get_address_of_m_spacing_234() { return &___m_spacing_234; }
	inline void set_m_spacing_234(float value)
	{
		___m_spacing_234 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStacks_235)); }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* get_m_TextStyleStacks_235() const { return ___m_TextStyleStacks_235; }
	inline TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29** get_address_of_m_TextStyleStacks_235() { return &___m_TextStyleStacks_235; }
	inline void set_m_TextStyleStacks_235(TMP_TextProcessingStack_1U5BU5D_tD40BE2C9C48281D1F72B04DDB85CBF15B89FCA29* value)
	{
		___m_TextStyleStacks_235 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_235), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextStyleStackDepth_236)); }
	inline int32_t get_m_TextStyleStackDepth_236() const { return ___m_TextStyleStackDepth_236; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_236() { return &___m_TextStyleStackDepth_236; }
	inline void set_m_TextStyleStackDepth_236(int32_t value)
	{
		___m_TextStyleStackDepth_236 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngleStack_237)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_ItalicAngleStack_237() const { return ___m_ItalicAngleStack_237; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_ItalicAngleStack_237() { return &___m_ItalicAngleStack_237; }
	inline void set_m_ItalicAngleStack_237(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_ItalicAngleStack_237 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_237))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ItalicAngle_238)); }
	inline int32_t get_m_ItalicAngle_238() const { return ___m_ItalicAngle_238; }
	inline int32_t* get_address_of_m_ItalicAngle_238() { return &___m_ItalicAngle_238; }
	inline void set_m_ItalicAngle_238(int32_t value)
	{
		___m_ItalicAngle_238 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_239)); }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  get_m_actionStack_239() const { return ___m_actionStack_239; }
	inline TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06 * get_address_of_m_actionStack_239() { return &___m_actionStack_239; }
	inline void set_m_actionStack_239(TMP_TextProcessingStack_1_t10E9E729940C82CBEB1DA9EE503ACD4BD33B2B06  value)
	{
		___m_actionStack_239 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_239))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_240() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_240)); }
	inline float get_m_padding_240() const { return ___m_padding_240; }
	inline float* get_address_of_m_padding_240() { return &___m_padding_240; }
	inline void set_m_padding_240(float value)
	{
		___m_padding_240 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_241() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_241)); }
	inline float get_m_baselineOffset_241() const { return ___m_baselineOffset_241; }
	inline float* get_address_of_m_baselineOffset_241() { return &___m_baselineOffset_241; }
	inline void set_m_baselineOffset_241(float value)
	{
		___m_baselineOffset_241 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_242() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_242)); }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  get_m_baselineOffsetStack_242() const { return ___m_baselineOffsetStack_242; }
	inline TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA * get_address_of_m_baselineOffsetStack_242() { return &___m_baselineOffsetStack_242; }
	inline void set_m_baselineOffsetStack_242(TMP_TextProcessingStack_1_t86E3BA9881FFE58FBCD069FB01541B557E5BEADA  value)
	{
		___m_baselineOffsetStack_242 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_242))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_243() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_243)); }
	inline float get_m_xAdvance_243() const { return ___m_xAdvance_243; }
	inline float* get_address_of_m_xAdvance_243() { return &___m_xAdvance_243; }
	inline void set_m_xAdvance_243(float value)
	{
		___m_xAdvance_243 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_244() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_244)); }
	inline int32_t get_m_textElementType_244() const { return ___m_textElementType_244; }
	inline int32_t* get_address_of_m_textElementType_244() { return &___m_textElementType_244; }
	inline void set_m_textElementType_244(int32_t value)
	{
		___m_textElementType_244 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_245() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_245)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_245() const { return ___m_cached_TextElement_245; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_245() { return &___m_cached_TextElement_245; }
	inline void set_m_cached_TextElement_245(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_246() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Ellipsis_246)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Ellipsis_246() const { return ___m_Ellipsis_246; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Ellipsis_246() { return &___m_Ellipsis_246; }
	inline void set_m_Ellipsis_246(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Ellipsis_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_246))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_247() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_Underline_247)); }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  get_m_Underline_247() const { return ___m_Underline_247; }
	inline SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF * get_address_of_m_Underline_247() { return &___m_Underline_247; }
	inline void set_m_Underline_247(SpecialCharacter_tCDA2CB6A565CB22035DD91D615B65206D241DBDF  value)
	{
		___m_Underline_247 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_247))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_248() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_248)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_248() const { return ___m_defaultSpriteAsset_248; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_248() { return &___m_defaultSpriteAsset_248; }
	inline void set_m_defaultSpriteAsset_248(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_248 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_248), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_249() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_249)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_249() const { return ___m_currentSpriteAsset_249; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_249() { return &___m_currentSpriteAsset_249; }
	inline void set_m_currentSpriteAsset_249(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_250() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_250)); }
	inline int32_t get_m_spriteCount_250() const { return ___m_spriteCount_250; }
	inline int32_t* get_address_of_m_spriteCount_250() { return &___m_spriteCount_250; }
	inline void set_m_spriteCount_250(int32_t value)
	{
		___m_spriteCount_250 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_251() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_251)); }
	inline int32_t get_m_spriteIndex_251() const { return ___m_spriteIndex_251; }
	inline int32_t* get_address_of_m_spriteIndex_251() { return &___m_spriteIndex_251; }
	inline void set_m_spriteIndex_251(int32_t value)
	{
		___m_spriteIndex_251 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_252() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_252)); }
	inline int32_t get_m_spriteAnimationID_252() const { return ___m_spriteAnimationID_252; }
	inline int32_t* get_address_of_m_spriteAnimationID_252() { return &___m_spriteAnimationID_252; }
	inline void set_m_spriteAnimationID_252(int32_t value)
	{
		___m_spriteAnimationID_252 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_255() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_255)); }
	inline bool get_m_ignoreActiveState_255() const { return ___m_ignoreActiveState_255; }
	inline bool* get_address_of_m_ignoreActiveState_255() { return &___m_ignoreActiveState_255; }
	inline void set_m_ignoreActiveState_255(bool value)
	{
		___m_ignoreActiveState_255 = value;
	}

	inline static int32_t get_offset_of_m_TextBackingArray_256() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextBackingArray_256)); }
	inline TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  get_m_TextBackingArray_256() const { return ___m_TextBackingArray_256; }
	inline TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA * get_address_of_m_TextBackingArray_256() { return &___m_TextBackingArray_256; }
	inline void set_m_TextBackingArray_256(TextBackingContainer_tB14280EA5E186FF7167417C00DDB159187D46DAA  value)
	{
		___m_TextBackingArray_256 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextBackingArray_256))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_k_Power_257() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_257)); }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* get_k_Power_257() const { return ___k_Power_257; }
	inline DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F** get_address_of_k_Power_257() { return &___k_Power_257; }
	inline void set_k_Power_257(DecimalU5BU5D_t163CFBECCD3B6655700701D6451CA0CF493CBF0F* value)
	{
		___k_Power_257 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_257), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  ___m_materialReferenceStack_46;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * ___OnSpriteAssetRequest_163;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_186;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_187;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_188;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_200;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedEllipsisState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLastValidState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedSoftLineBreakState_204;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  ___m_EllipsisInsertionCandidateStack_205;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ParseTextMarker_253;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_InsertNewLineMarker_254;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_258;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_259;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_260;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_261;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_262;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_263;

public:
	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t974BDEBDB1F9F265D148936898B7B04AA2F05B3A  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_t041AB6BBA06AC552F17A2D2F97B1728A58D16029 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t974D5AB2327337E73FB2126366C9513F1C075512 * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_htmlTag_186)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_186() const { return ___m_htmlTag_186; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_186() { return &___m_htmlTag_186; }
	inline void set_m_htmlTag_186(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_xmlAttribute_187)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_187() const { return ___m_xmlAttribute_187; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_187() { return &___m_xmlAttribute_187; }
	inline void set_m_xmlAttribute_187(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_attributeParameterValues_188)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_188() const { return ___m_attributeParameterValues_188; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_188() { return &___m_attributeParameterValues_188; }
	inline void set_m_attributeParameterValues_188(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedWordWrapState_200)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_200() const { return ___m_SavedWordWrapState_200; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_200() { return &___m_SavedWordWrapState_200; }
	inline void set_m_SavedWordWrapState_200(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_200 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_200))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_200))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_200))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedLineState_201)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_201() const { return ___m_SavedLineState_201; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_201() { return &___m_SavedLineState_201; }
	inline void set_m_SavedLineState_201(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_201 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_201))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_201))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_201))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedEllipsisState_202)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedEllipsisState_202() const { return ___m_SavedEllipsisState_202; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedEllipsisState_202() { return &___m_SavedEllipsisState_202; }
	inline void set_m_SavedEllipsisState_202(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedEllipsisState_202 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_202))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_202))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_202))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedLastValidState_203)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLastValidState_203() const { return ___m_SavedLastValidState_203; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLastValidState_203() { return &___m_SavedLastValidState_203; }
	inline void set_m_SavedLastValidState_203(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLastValidState_203 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_203))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_203))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_203))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_SavedSoftLineBreakState_204)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedSoftLineBreakState_204() const { return ___m_SavedSoftLineBreakState_204; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedSoftLineBreakState_204() { return &___m_SavedSoftLineBreakState_204; }
	inline void set_m_SavedSoftLineBreakState_204(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedSoftLineBreakState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___textInfo_35), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_204))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_204))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_204))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___m_EllipsisInsertionCandidateStack_205)); }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  get_m_EllipsisInsertionCandidateStack_205() const { return ___m_EllipsisInsertionCandidateStack_205; }
	inline TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E * get_address_of_m_EllipsisInsertionCandidateStack_205() { return &___m_EllipsisInsertionCandidateStack_205; }
	inline void set_m_EllipsisInsertionCandidateStack_205(TMP_TextProcessingStack_1_t5D152A3DC5BCDADA0643881CEE9AA2BC4839317E  value)
	{
		___m_EllipsisInsertionCandidateStack_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_205))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___textInfo_35), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___italicAngleStack_42))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___underlineColorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___strikethroughColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___highlightColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___highlightStateStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorGradientStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___colorGradientStack_48))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___sizeStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___indentStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___fontWeightStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___styleStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___baselineStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___actionStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___materialReferenceStack_55))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___lineJustificationStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentFontAsset_58), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentSpriteAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_205))->___m_DefaultItem_2))->___currentMaterial_60), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_ParseTextMarker_253() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_ParseTextMarker_253)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ParseTextMarker_253() const { return ___k_ParseTextMarker_253; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ParseTextMarker_253() { return &___k_ParseTextMarker_253; }
	inline void set_k_ParseTextMarker_253(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ParseTextMarker_253 = value;
	}

	inline static int32_t get_offset_of_k_InsertNewLineMarker_254() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_InsertNewLineMarker_254)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_InsertNewLineMarker_254() const { return ___k_InsertNewLineMarker_254; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_InsertNewLineMarker_254() { return &___k_InsertNewLineMarker_254; }
	inline void set_k_InsertNewLineMarker_254(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_InsertNewLineMarker_254 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_258() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_258)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_258() const { return ___k_LargePositiveVector2_258; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_258() { return &___k_LargePositiveVector2_258; }
	inline void set_k_LargePositiveVector2_258(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_258 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_259)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_259() const { return ___k_LargeNegativeVector2_259; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_259() { return &___k_LargeNegativeVector2_259; }
	inline void set_k_LargeNegativeVector2_259(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_260() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_260)); }
	inline float get_k_LargePositiveFloat_260() const { return ___k_LargePositiveFloat_260; }
	inline float* get_address_of_k_LargePositiveFloat_260() { return &___k_LargePositiveFloat_260; }
	inline void set_k_LargePositiveFloat_260(float value)
	{
		___k_LargePositiveFloat_260 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_261)); }
	inline float get_k_LargeNegativeFloat_261() const { return ___k_LargeNegativeFloat_261; }
	inline float* get_address_of_k_LargeNegativeFloat_261() { return &___k_LargeNegativeFloat_261; }
	inline void set_k_LargeNegativeFloat_261(float value)
	{
		___k_LargeNegativeFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_262() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_262)); }
	inline int32_t get_k_LargePositiveInt_262() const { return ___k_LargePositiveInt_262; }
	inline int32_t* get_address_of_k_LargePositiveInt_262() { return &___k_LargePositiveInt_262; }
	inline void set_k_LargePositiveInt_262(int32_t value)
	{
		___k_LargePositiveInt_262 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_263)); }
	inline int32_t get_k_LargeNegativeInt_263() const { return ___k_LargeNegativeInt_263; }
	inline int32_t* get_address_of_k_LargeNegativeInt_263() { return &___k_LargeNegativeInt_263; }
	inline void set_k_LargeNegativeInt_263(int32_t value)
	{
		___k_LargeNegativeInt_263 = value;
	}
};


// TMPro.TextMeshPro
struct TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_264;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_265;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * ___m_renderer_266;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_meshFilter_267;
	// UnityEngine.CanvasRenderer TMPro.TextMeshPro::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_268;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_269;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_270;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_271;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* ___m_subTextObjects_272;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_273;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_274;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_275;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_276;
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_297;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_298;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_299;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * ___OnPreRenderText_300;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_301;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_264() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_hasFontAssetChanged_264)); }
	inline bool get_m_hasFontAssetChanged_264() const { return ___m_hasFontAssetChanged_264; }
	inline bool* get_address_of_m_hasFontAssetChanged_264() { return &___m_hasFontAssetChanged_264; }
	inline void set_m_hasFontAssetChanged_264(bool value)
	{
		___m_hasFontAssetChanged_264 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_265() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_previousLossyScaleY_265)); }
	inline float get_m_previousLossyScaleY_265() const { return ___m_previousLossyScaleY_265; }
	inline float* get_address_of_m_previousLossyScaleY_265() { return &___m_previousLossyScaleY_265; }
	inline void set_m_previousLossyScaleY_265(float value)
	{
		___m_previousLossyScaleY_265 = value;
	}

	inline static int32_t get_offset_of_m_renderer_266() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_renderer_266)); }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * get_m_renderer_266() const { return ___m_renderer_266; }
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** get_address_of_m_renderer_266() { return &___m_renderer_266; }
	inline void set_m_renderer_266(Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		___m_renderer_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_renderer_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_meshFilter_267() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_meshFilter_267)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_meshFilter_267() const { return ___m_meshFilter_267; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_meshFilter_267() { return &___m_meshFilter_267; }
	inline void set_m_meshFilter_267(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_meshFilter_267 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_meshFilter_267), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_268() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_CanvasRenderer_268)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_268() const { return ___m_CanvasRenderer_268; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_268() { return &___m_CanvasRenderer_268; }
	inline void set_m_CanvasRenderer_268(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_269() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_isFirstAllocation_269)); }
	inline bool get_m_isFirstAllocation_269() const { return ___m_isFirstAllocation_269; }
	inline bool* get_address_of_m_isFirstAllocation_269() { return &___m_isFirstAllocation_269; }
	inline void set_m_isFirstAllocation_269(bool value)
	{
		___m_isFirstAllocation_269 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_270() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_max_characters_270)); }
	inline int32_t get_m_max_characters_270() const { return ___m_max_characters_270; }
	inline int32_t* get_address_of_m_max_characters_270() { return &___m_max_characters_270; }
	inline void set_m_max_characters_270(int32_t value)
	{
		___m_max_characters_270 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_271() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_max_numberOfLines_271)); }
	inline int32_t get_m_max_numberOfLines_271() const { return ___m_max_numberOfLines_271; }
	inline int32_t* get_address_of_m_max_numberOfLines_271() { return &___m_max_numberOfLines_271; }
	inline void set_m_max_numberOfLines_271(int32_t value)
	{
		___m_max_numberOfLines_271 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_272() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_subTextObjects_272)); }
	inline TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* get_m_subTextObjects_272() const { return ___m_subTextObjects_272; }
	inline TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD** get_address_of_m_subTextObjects_272() { return &___m_subTextObjects_272; }
	inline void set_m_subTextObjects_272(TMP_SubMeshU5BU5D_t1847E144072AA6E3FEB91A5E855C564CE48448FD* value)
	{
		___m_subTextObjects_272 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_272), (void*)value);
	}

	inline static int32_t get_offset_of_m_maskType_273() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_maskType_273)); }
	inline int32_t get_m_maskType_273() const { return ___m_maskType_273; }
	inline int32_t* get_address_of_m_maskType_273() { return &___m_maskType_273; }
	inline void set_m_maskType_273(int32_t value)
	{
		___m_maskType_273 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_274() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_EnvMapMatrix_274)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_274() const { return ___m_EnvMapMatrix_274; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_274() { return &___m_EnvMapMatrix_274; }
	inline void set_m_EnvMapMatrix_274(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_274 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_275() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_RectTransformCorners_275)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_275() const { return ___m_RectTransformCorners_275; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_275() { return &___m_RectTransformCorners_275; }
	inline void set_m_RectTransformCorners_275(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_275 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_275), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_276() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_isRegisteredForEvents_276)); }
	inline bool get_m_isRegisteredForEvents_276() const { return ___m_isRegisteredForEvents_276; }
	inline bool* get_address_of_m_isRegisteredForEvents_276() { return &___m_isRegisteredForEvents_276; }
	inline void set_m_isRegisteredForEvents_276(bool value)
	{
		___m_isRegisteredForEvents_276 = value;
	}

	inline static int32_t get_offset_of__SortingLayer_297() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ____SortingLayer_297)); }
	inline int32_t get__SortingLayer_297() const { return ____SortingLayer_297; }
	inline int32_t* get_address_of__SortingLayer_297() { return &____SortingLayer_297; }
	inline void set__SortingLayer_297(int32_t value)
	{
		____SortingLayer_297 = value;
	}

	inline static int32_t get_offset_of__SortingLayerID_298() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ____SortingLayerID_298)); }
	inline int32_t get__SortingLayerID_298() const { return ____SortingLayerID_298; }
	inline int32_t* get_address_of__SortingLayerID_298() { return &____SortingLayerID_298; }
	inline void set__SortingLayerID_298(int32_t value)
	{
		____SortingLayerID_298 = value;
	}

	inline static int32_t get_offset_of__SortingOrder_299() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ____SortingOrder_299)); }
	inline int32_t get__SortingOrder_299() const { return ____SortingOrder_299; }
	inline int32_t* get_address_of__SortingOrder_299() { return &____SortingOrder_299; }
	inline void set__SortingOrder_299(int32_t value)
	{
		____SortingOrder_299 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_300() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___OnPreRenderText_300)); }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * get_OnPreRenderText_300() const { return ___OnPreRenderText_300; }
	inline Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD ** get_address_of_OnPreRenderText_300() { return &___OnPreRenderText_300; }
	inline void set_OnPreRenderText_300(Action_1_tD7D8CDC22C3E26637D5064CE96ADB9973677C5CD * value)
	{
		___OnPreRenderText_300 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_300), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_301() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2, ___m_currentAutoSizeMode_301)); }
	inline bool get_m_currentAutoSizeMode_301() const { return ___m_currentAutoSizeMode_301; }
	inline bool* get_address_of_m_currentAutoSizeMode_301() { return &___m_currentAutoSizeMode_301; }
	inline void set_m_currentAutoSizeMode_301(bool value)
	{
		___m_currentAutoSizeMode_301 = value;
	}
};

struct TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextMarker_277;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SetArraySizesMarker_278;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ParseMarkupTextMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_CharacterLookupMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleGPOSFeaturesMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_CalculateVerticesPositionMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ComputeTextMetricsMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleVisibleCharacterMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleWhiteSpacesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleHorizontalLineBreakingMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleVerticalLineBreakingMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SaveGlyphVertexDataMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_ComputeCharacterAdvanceMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleCarriageReturnMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_HandleLineTerminationMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SavePageInfoMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_SaveProcessingStatesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIIMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___k_GenerateTextPhaseIIIMarker_296;

public:
	inline static int32_t get_offset_of_k_GenerateTextMarker_277() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_GenerateTextMarker_277)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextMarker_277() const { return ___k_GenerateTextMarker_277; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextMarker_277() { return &___k_GenerateTextMarker_277; }
	inline void set_k_GenerateTextMarker_277(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextMarker_277 = value;
	}

	inline static int32_t get_offset_of_k_SetArraySizesMarker_278() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_SetArraySizesMarker_278)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SetArraySizesMarker_278() const { return ___k_SetArraySizesMarker_278; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SetArraySizesMarker_278() { return &___k_SetArraySizesMarker_278; }
	inline void set_k_SetArraySizesMarker_278(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SetArraySizesMarker_278 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIMarker_279() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_GenerateTextPhaseIMarker_279)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIMarker_279() const { return ___k_GenerateTextPhaseIMarker_279; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIMarker_279() { return &___k_GenerateTextPhaseIMarker_279; }
	inline void set_k_GenerateTextPhaseIMarker_279(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIMarker_279 = value;
	}

	inline static int32_t get_offset_of_k_ParseMarkupTextMarker_280() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_ParseMarkupTextMarker_280)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ParseMarkupTextMarker_280() const { return ___k_ParseMarkupTextMarker_280; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ParseMarkupTextMarker_280() { return &___k_ParseMarkupTextMarker_280; }
	inline void set_k_ParseMarkupTextMarker_280(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ParseMarkupTextMarker_280 = value;
	}

	inline static int32_t get_offset_of_k_CharacterLookupMarker_281() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_CharacterLookupMarker_281)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_CharacterLookupMarker_281() const { return ___k_CharacterLookupMarker_281; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_CharacterLookupMarker_281() { return &___k_CharacterLookupMarker_281; }
	inline void set_k_CharacterLookupMarker_281(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_CharacterLookupMarker_281 = value;
	}

	inline static int32_t get_offset_of_k_HandleGPOSFeaturesMarker_282() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleGPOSFeaturesMarker_282)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleGPOSFeaturesMarker_282() const { return ___k_HandleGPOSFeaturesMarker_282; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleGPOSFeaturesMarker_282() { return &___k_HandleGPOSFeaturesMarker_282; }
	inline void set_k_HandleGPOSFeaturesMarker_282(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleGPOSFeaturesMarker_282 = value;
	}

	inline static int32_t get_offset_of_k_CalculateVerticesPositionMarker_283() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_CalculateVerticesPositionMarker_283)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_CalculateVerticesPositionMarker_283() const { return ___k_CalculateVerticesPositionMarker_283; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_CalculateVerticesPositionMarker_283() { return &___k_CalculateVerticesPositionMarker_283; }
	inline void set_k_CalculateVerticesPositionMarker_283(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_CalculateVerticesPositionMarker_283 = value;
	}

	inline static int32_t get_offset_of_k_ComputeTextMetricsMarker_284() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_ComputeTextMetricsMarker_284)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ComputeTextMetricsMarker_284() const { return ___k_ComputeTextMetricsMarker_284; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ComputeTextMetricsMarker_284() { return &___k_ComputeTextMetricsMarker_284; }
	inline void set_k_ComputeTextMetricsMarker_284(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ComputeTextMetricsMarker_284 = value;
	}

	inline static int32_t get_offset_of_k_HandleVisibleCharacterMarker_285() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleVisibleCharacterMarker_285)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleVisibleCharacterMarker_285() const { return ___k_HandleVisibleCharacterMarker_285; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleVisibleCharacterMarker_285() { return &___k_HandleVisibleCharacterMarker_285; }
	inline void set_k_HandleVisibleCharacterMarker_285(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleVisibleCharacterMarker_285 = value;
	}

	inline static int32_t get_offset_of_k_HandleWhiteSpacesMarker_286() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleWhiteSpacesMarker_286)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleWhiteSpacesMarker_286() const { return ___k_HandleWhiteSpacesMarker_286; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleWhiteSpacesMarker_286() { return &___k_HandleWhiteSpacesMarker_286; }
	inline void set_k_HandleWhiteSpacesMarker_286(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleWhiteSpacesMarker_286 = value;
	}

	inline static int32_t get_offset_of_k_HandleHorizontalLineBreakingMarker_287() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleHorizontalLineBreakingMarker_287)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleHorizontalLineBreakingMarker_287() const { return ___k_HandleHorizontalLineBreakingMarker_287; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleHorizontalLineBreakingMarker_287() { return &___k_HandleHorizontalLineBreakingMarker_287; }
	inline void set_k_HandleHorizontalLineBreakingMarker_287(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleHorizontalLineBreakingMarker_287 = value;
	}

	inline static int32_t get_offset_of_k_HandleVerticalLineBreakingMarker_288() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleVerticalLineBreakingMarker_288)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleVerticalLineBreakingMarker_288() const { return ___k_HandleVerticalLineBreakingMarker_288; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleVerticalLineBreakingMarker_288() { return &___k_HandleVerticalLineBreakingMarker_288; }
	inline void set_k_HandleVerticalLineBreakingMarker_288(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleVerticalLineBreakingMarker_288 = value;
	}

	inline static int32_t get_offset_of_k_SaveGlyphVertexDataMarker_289() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_SaveGlyphVertexDataMarker_289)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SaveGlyphVertexDataMarker_289() const { return ___k_SaveGlyphVertexDataMarker_289; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SaveGlyphVertexDataMarker_289() { return &___k_SaveGlyphVertexDataMarker_289; }
	inline void set_k_SaveGlyphVertexDataMarker_289(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SaveGlyphVertexDataMarker_289 = value;
	}

	inline static int32_t get_offset_of_k_ComputeCharacterAdvanceMarker_290() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_ComputeCharacterAdvanceMarker_290)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_ComputeCharacterAdvanceMarker_290() const { return ___k_ComputeCharacterAdvanceMarker_290; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_ComputeCharacterAdvanceMarker_290() { return &___k_ComputeCharacterAdvanceMarker_290; }
	inline void set_k_ComputeCharacterAdvanceMarker_290(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_ComputeCharacterAdvanceMarker_290 = value;
	}

	inline static int32_t get_offset_of_k_HandleCarriageReturnMarker_291() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleCarriageReturnMarker_291)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleCarriageReturnMarker_291() const { return ___k_HandleCarriageReturnMarker_291; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleCarriageReturnMarker_291() { return &___k_HandleCarriageReturnMarker_291; }
	inline void set_k_HandleCarriageReturnMarker_291(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleCarriageReturnMarker_291 = value;
	}

	inline static int32_t get_offset_of_k_HandleLineTerminationMarker_292() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_HandleLineTerminationMarker_292)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_HandleLineTerminationMarker_292() const { return ___k_HandleLineTerminationMarker_292; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_HandleLineTerminationMarker_292() { return &___k_HandleLineTerminationMarker_292; }
	inline void set_k_HandleLineTerminationMarker_292(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_HandleLineTerminationMarker_292 = value;
	}

	inline static int32_t get_offset_of_k_SavePageInfoMarker_293() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_SavePageInfoMarker_293)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SavePageInfoMarker_293() const { return ___k_SavePageInfoMarker_293; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SavePageInfoMarker_293() { return &___k_SavePageInfoMarker_293; }
	inline void set_k_SavePageInfoMarker_293(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SavePageInfoMarker_293 = value;
	}

	inline static int32_t get_offset_of_k_SaveProcessingStatesMarker_294() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_SaveProcessingStatesMarker_294)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_SaveProcessingStatesMarker_294() const { return ___k_SaveProcessingStatesMarker_294; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_SaveProcessingStatesMarker_294() { return &___k_SaveProcessingStatesMarker_294; }
	inline void set_k_SaveProcessingStatesMarker_294(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_SaveProcessingStatesMarker_294 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIMarker_295() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_GenerateTextPhaseIIMarker_295)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIIMarker_295() const { return ___k_GenerateTextPhaseIIMarker_295; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIIMarker_295() { return &___k_GenerateTextPhaseIIMarker_295; }
	inline void set_k_GenerateTextPhaseIIMarker_295(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIIMarker_295 = value;
	}

	inline static int32_t get_offset_of_k_GenerateTextPhaseIIIMarker_296() { return static_cast<int32_t>(offsetof(TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_StaticFields, ___k_GenerateTextPhaseIIIMarker_296)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_k_GenerateTextPhaseIIIMarker_296() const { return ___k_GenerateTextPhaseIIIMarker_296; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_k_GenerateTextPhaseIIIMarker_296() { return &___k_GenerateTextPhaseIIIMarker_296; }
	inline void set_k_GenerateTextPhaseIIIMarker_296(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___k_GenerateTextPhaseIIIMarker_296 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * m_Items[1];

public:
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_gshared (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m2094C39A775FDD39B5FB9B5A77E988F3482DC46B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m171A353AB1F6591654B6668EBFA95B2516EA53F4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Enumerable_ToList_TisRuntimeObject_m60A4853FE3E8D49EA18001EEBDF8D2773159A337_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_m367B5E67A40F36DC0C0DA7B5D8E13F4C1D5709DD_gshared (const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Random::ColorHSV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Random_ColorHSV_m614A49A15AC5B12109FC2289586D497E4DE612E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m27E849404725A51B2C7FCC3ECBCCB6E7B5728532_inline (MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::AddToData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m9363F77468532EF1EAD1B07AE8D510B3F0F405E0 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::UpdateData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mFF2AA7926C06241EBC277BA4E9C777742F722ED1 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::RemoveFromData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m78663708BC93CD2F13C94282531BB35FB4062E5D (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Add(!0,!1)
inline void Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, uint32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, uint32_t, const RuntimeMethod*))Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::Remove(!0)
inline bool Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79 (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.UInt32>::.ctor()
inline void Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *, const RuntimeMethod*))Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.MixedRealityToolkit Microsoft.MixedReality.Toolkit.MixedRealityToolkit::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD_inline (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.MixedRealityToolkit::set_ActiveProfile(Microsoft.MixedReality.Toolkit.MixedRealityToolkitConfigurationProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityToolkit_set_ActiveProfile_mF24E3840C777FEAA2DE966862DB3E0DDB28D1559 (MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * __this, MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * Component_GetComponent_TisTextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_m7A50B7E4B260EC155104E89F194B9EDE52870F82 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Single Microsoft.MixedReality.Toolkit.UI.SliderEventData::get_NewValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline (SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2094C39A775FDD39B5FB9B5A77E988F3482DC46B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.Transform>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m171A353AB1F6591654B6668EBFA95B2516EA53F4_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m60A4853FE3E8D49EA18001EEBDF8D2773159A337_gshared)(___source0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.GameObjectExtensions::DestroyGameObject(UnityEngine.GameObject,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectExtensions_DestroyGameObject_m7114755BE0C5889143147379AD4AD37BAA8F1000 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, float ___t1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A (int32_t ___type0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47 (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mEBC7D1DC3F0B2EE20F1BC0347627557AF7812C84_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8 (const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::get_GazeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3 (ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetSpatialAwarenessSystemDataProvider<Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver>()
inline RuntimeObject* CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mBD13C4FF4389459D49919659ED8EB67BE4DD99A4 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetSpatialAwarenessSystemDataProvider_TisRuntimeObject_m367B5E67A40F36DC0C0DA7B5D8E13F4C1D5709DD_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellProfile__ctor_m1706126C6C3A1B3DE48C1068350A585B6D59226B (DwellProfile_t18B88DBB9536DFCF9088A9403A308720EDA06373 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Start_m9BAB1630692327036EDE3D0DAE8E56D81D488640 (ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorChanger_Start_m9BAB1630692327036EDE3D0DAE8E56D81D488640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rend == null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_rend_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rend = GetComponent<MeshRenderer>();
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_2 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		__this->set_rend_4(L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Increment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Increment_m9783FF292243CC1B1D1891EDBFCD0326A3320C0D (ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorChanger_Increment_m9783FF292243CC1B1D1891EDBFCD0326A3320C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mats != null && mats.Length > 0)
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_0 = __this->get_mats_5();
		if (!L_0)
		{
			goto IL_004e;
		}
	}
	{
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_1 = __this->get_mats_5();
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_004e;
		}
	}
	{
		// cur = (cur + 1) % mats.Length;
		int32_t L_2 = __this->get_cur_6();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_3 = __this->get_mats_5();
		NullCheck(L_3);
		__this->set_cur_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))));
		// if (rend != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = __this->get_rend_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// rend.material = mats[cur];
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_6 = __this->get_rend_4();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_7 = __this->get_mats_5();
		int32_t L_8 = __this->get_cur_6();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_6, L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::Decrement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_Decrement_m54C0400E0ED1B2F8661321989FE1F77120DE64FE (ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColorChanger_Decrement_m54C0400E0ED1B2F8661321989FE1F77120DE64FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mats != null && mats.Length > 0)
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_0 = __this->get_mats_5();
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_1 = __this->get_mats_5();
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0057;
		}
	}
	{
		// cur = (cur - 1 + mats.Length) % mats.Length;
		int32_t L_2 = __this->get_cur_6();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_3 = __this->get_mats_5();
		NullCheck(L_3);
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_4 = __this->get_mats_5();
		NullCheck(L_4);
		__this->set_cur_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))));
		// if (rend != null)
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_5 = __this->get_rend_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		// rend.material = mats[cur];
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_7 = __this->get_rend_4();
		MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* L_8 = __this->get_mats_5();
		int32_t L_9 = __this->get_cur_6();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_7, L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::RandomColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger_RandomColor_mFDEEB5DDF3CFA9B7592E59CD22350D171C8E42E4 (ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215 * __this, const RuntimeMethod* method)
{
	{
		// rend.material.color = UnityEngine.Random.ColorHSV();
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = __this->get_rend_4();
		NullCheck(L_0);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_1 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_0, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = Random_ColorHSV_m614A49A15AC5B12109FC2289586D497E4DE612E5(/*hidden argument*/NULL);
		NullCheck(L_1);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ColorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorChanger__ctor_mFDCB5EF0C00F798D36AF03B7175D90CA950846E7 (ColorChanger_tFF89E3A4277BC431564228EF3B3763942385D215 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_Start_m89E6DF0320E966AD102BC4D56DD00BE04F9C83D0 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_Start_m89E6DF0320E966AD102BC4D56DD00BE04F9C83D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m906D7A765D3E3316449845935BC8A713D2D21BD1_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnEnable_m9C1F9A6E9DE60C365CA39C286400700B4CD5C325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RegisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtActionInvoker0::Invoke(DemoSpatialMeshHandler_RegisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m906D7A765D3E3316449845935BC8A713D2D21BD1_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnDisable_m7462CFEDA74845AEFCA58321CE333504823C2F0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnregisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m8051F577DF6619B3C626448376B57BDBCF908FA0_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnDestroy_m4E38931D86C694FDE78C3865C4F800D65FD7ED31 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_OnDestroy_m4E38931D86C694FDE78C3865C4F800D65FD7ED31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnregisterEventHandlers<SpatialAwarenessHandler, SpatialAwarenessMeshObject>();
		GenericVirtActionInvoker0::Invoke(DemoSpatialMeshHandler_UnregisterEventHandlers_TisIMixedRealitySpatialAwarenessObservationHandler_1_tC20E62B4358C8B39FD863ECE3E41CC04425CED8F_TisSpatialAwarenessMeshObject_t8D48326DB8297C123021CFF2A3E80B8E11DE3B3E_m8051F577DF6619B3C626448376B57BDBCF908FA0_RuntimeMethod_var, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationAdded(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationAdded_m3E84D1109EF85920C9F27AE80E5882CBF77A52F9 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// AddToData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m27E849404725A51B2C7FCC3ECBCCB6E7B5728532_inline(L_0, /*hidden argument*/NULL);
		DemoSpatialMeshHandler_AddToData_m9363F77468532EF1EAD1B07AE8D510B3F0F405E0(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationUpdated(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationUpdated_m7916C57B170BB753FC16FDE017753575C77BD198 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// UpdateData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m27E849404725A51B2C7FCC3ECBCCB6E7B5728532_inline(L_0, /*hidden argument*/NULL);
		DemoSpatialMeshHandler_UpdateData_mFF2AA7926C06241EBC277BA4E9C777742F722ED1(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::OnObservationRemoved(Microsoft.MixedReality.Toolkit.SpatialAwareness.MixedRealitySpatialAwarenessEventData`1<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_OnObservationRemoved_mC21C7184514E1100DC2D9B428ED9BEC745FF8D9A (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * ___eventData0, const RuntimeMethod* method)
{
	{
		// RemoveFromData(eventData.Id);
		MixedRealitySpatialAwarenessEventData_1_tBEE29FC913C599C0EDA702339F32E271DA24D9C3 * L_0 = ___eventData0;
		NullCheck(L_0);
		int32_t L_1 = MixedRealitySpatialAwarenessEventData_get_Id_m27E849404725A51B2C7FCC3ECBCCB6E7B5728532_inline(L_0, /*hidden argument*/NULL);
		DemoSpatialMeshHandler_RemoveFromData_m78663708BC93CD2F13C94282531BB35FB4062E5D(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::AddToData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_AddToData_m9363F77468532EF1EAD1B07AE8D510B3F0F405E0 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_AddToData_m9363F77468532EF1EAD1B07AE8D510B3F0F405E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Tracking mesh {eventDataId}");
		int32_t L_0 = ___eventDataId0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral198BCEC94D4602889E6BE9EA255235FE63E9232E, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// meshUpdateData.Add(eventDataId, 0);
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_4 = __this->get_meshUpdateData_4();
		int32_t L_5 = ___eventDataId0;
		NullCheck(L_4);
		Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599(L_4, L_5, 0, /*hidden argument*/Dictionary_2_Add_mA325F23C42F93F9A111F6192EC1CEC7D8E481599_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::UpdateData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_UpdateData_mFF2AA7926C06241EBC277BA4E9C777742F722ED1 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_UpdateData_mFF2AA7926C06241EBC277BA4E9C777742F722ED1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		// if (meshUpdateData.TryGetValue(eventDataId, out uint updateCount))
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = __this->get_meshUpdateData_4();
		int32_t L_1 = ___eventDataId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8(L_0, L_1, (uint32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m87B04E07308BDD9404C3E7C1976D52B69517C6C8_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// meshUpdateData[eventDataId] = ++updateCount;
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_3 = __this->get_meshUpdateData_4();
		int32_t L_4 = ___eventDataId0;
		uint32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		V_0 = L_6;
		NullCheck(L_3);
		Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442(L_3, L_4, L_6, /*hidden argument*/Dictionary_2_set_Item_mAC6062FF357307AFEB797A602E8380AEF272F442_RuntimeMethod_var);
		// Debug.Log($"Mesh {eventDataId} has been updated {updateCount} times.");
		int32_t L_7 = ___eventDataId0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		uint32_t L_10 = V_0;
		uint32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6EF6EE07DC9D5690EBF69A0BDA7FD2041B5B51D2, L_9, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_13, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::RemoveFromData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler_RemoveFromData_m78663708BC93CD2F13C94282531BB35FB4062E5D (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, int32_t ___eventDataId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler_RemoveFromData_m78663708BC93CD2F13C94282531BB35FB4062E5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (meshUpdateData.ContainsKey(eventDataId))
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = __this->get_meshUpdateData_4();
		int32_t L_1 = ___eventDataId0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m6DB80E33ECB9F99824545A77760D313CCF6DD8B9_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.Log($"No longer tracking mesh {eventDataId}.");
		int32_t L_3 = ___eventDataId0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral950AF6817FC43E2E7F84DF55C56271A185CC0031, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		// meshUpdateData.Remove(eventDataId);
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_7 = __this->get_meshUpdateData_4();
		int32_t L_8 = ___eventDataId0;
		NullCheck(L_7);
		Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m0C628D9C267769495DA8B5F019F3FA7383D71E79_RuntimeMethod_var);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.DemoSpatialMeshHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4 (DemoSpatialMeshHandler_t5EA2499E558DC2033B27F8CAD6B3CB5B2C0B2A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemoSpatialMeshHandler__ctor_m128FF5A42EB7BEF2A1D463B5E6179FF7E8D0EAB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, uint> meshUpdateData = new Dictionary<int, uint>();
		Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B * L_0 = (Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B *)il2cpp_codegen_object_new(Dictionary_2_tEBA39BE6427C28D1FC2365D442B32E6BE63BE02B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B(L_0, /*hidden argument*/Dictionary_2__ctor_m936D2F2C58E41A0BBA2C4977D82339392359549B_RuntimeMethod_var);
		__this->set_meshUpdateData_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfilesOnStartup_Update_mD9AF3C7AAFDF3BFC8C680EEE88545A4F7DB12B0B (LoadProfilesOnStartup_tA4FE3F468CC4C90D85AC61FD76B98EF3DDF2243D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoadProfilesOnStartup_Update_mD9AF3C7AAFDF3BFC8C680EEE88545A4F7DB12B0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((configProfile != null) && (MixedRealityToolkit.Instance != null))
		MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * L_0 = __this->get_configProfile_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * L_2 = MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// MixedRealityToolkit.Instance.ActiveProfile = configProfile;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * L_4 = MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD_inline(/*hidden argument*/NULL);
		MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * L_5 = __this->get_configProfile_4();
		NullCheck(L_4);
		MixedRealityToolkit_set_ActiveProfile_mF24E3840C777FEAA2DE966862DB3E0DDB28D1559(L_4, L_5, /*hidden argument*/NULL);
		// Debug.Log($"Loading new MRTK configuration profile: {configProfile.name}");
		MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 * L_6 = __this->get_configProfile_4();
		NullCheck(L_6);
		String_t* L_7 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_6, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFC40C9CAE7B04221D7A101B1BBB0F684365D30A9, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// configProfile = null;
		__this->set_configProfile_4((MixedRealityToolkitConfigurationProfile_tACF291CDF8D9BBC9973AD4FDAB66CB3574979FE9 *)NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.LoadProfilesOnStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadProfilesOnStartup__ctor_m3CEB4E5F1D7582DEB4D8B962E3AAA98080922960 (LoadProfilesOnStartup_tA4FE3F468CC4C90D85AC61FD76B98EF3DDF2243D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerOnStartup_Start_mE804888A0F2154C3D4A8FDC4EE35177F7B05B8AA (TriggerOnStartup_tC5DCCB4FCDC44ACFADF653770ABCB83D03B7C360 * __this, const RuntimeMethod* method)
{
	{
		// OnSceneStart.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_OnSceneStart_4();
		NullCheck(L_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.EyeTracking.TriggerOnStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerOnStartup__ctor_m89B76221DB68F3F4A824677B1C22AB9D5439BEFA (TriggerOnStartup_tC5DCCB4FCDC44ACFADF653770ABCB83D03B7C360 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::OnSliderUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSliderValue_OnSliderUpdated_m52D8FCDFE6CCCAE44217B67CD0D9844DB3860BDD (ShowSliderValue_t8DE53FD8BCD0C6A5479B27F9295BB603647C5917 * __this, SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowSliderValue_OnSliderUpdated_m52D8FCDFE6CCCAE44217B67CD0D9844DB3860BDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textMesh == null)
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_0 = __this->get_textMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// textMesh = GetComponent<TextMeshPro>();
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_2 = Component_GetComponent_TisTextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_m7A50B7E4B260EC155104E89F194B9EDE52870F82(__this, /*hidden argument*/Component_GetComponent_TisTextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2_m7A50B7E4B260EC155104E89F194B9EDE52870F82_RuntimeMethod_var);
		__this->set_textMesh_4(L_2);
	}

IL_001a:
	{
		// if (textMesh != null)
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_3 = __this->get_textMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// textMesh.text = $"{eventData.NewValue:F2}";
		TextMeshPro_t6FF60D9DCAF295045FE47C014CC855C5784752E2 * L_5 = __this->get_textMesh_4();
		SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * L_6 = ___eventData0;
		NullCheck(L_6);
		float L_7 = SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline(L_6, /*hidden argument*/NULL);
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral2FE99FF15508213F90D44FF39B8CF2A8B31F204B, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_10);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ShowSliderValue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowSliderValue__ctor_m858415530C1946100232C0AF54A24944E654A64D (ShowSliderValue_t8DE53FD8BCD0C6A5479B27F9295BB603647C5917 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdatedRed(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdatedRed_m51ADB7B04C953DD23B34C6D86B6021A9C06FB47C (SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1 * __this, SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderChangeColor_OnSliderUpdatedRed_m51ADB7B04C953DD23B34C6D86B6021A9C06FB47C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A(__this, /*hidden argument*/Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var);
		__this->set_TargetRenderer_4(L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_TargetRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = __this->get_TargetRenderer_4();
		NullCheck(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(eventData.NewValue, TargetRenderer.sharedMaterial.color.g, TargetRenderer.sharedMaterial.color.b);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = __this->get_TargetRenderer_4();
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_6, /*hidden argument*/NULL);
		SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * L_8 = ___eventData0;
		NullCheck(L_8);
		float L_9 = SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline(L_8, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_10 = __this->get_TargetRenderer_4();
		NullCheck(L_10);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_12 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_g_1();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = __this->get_TargetRenderer_4();
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_18), L_9, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_7, L_18, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdatedGreen(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdatedGreen_m61BA23C495309ED30FA374134558AEEF75962045 (SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1 * __this, SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderChangeColor_OnSliderUpdatedGreen_m61BA23C495309ED30FA374134558AEEF75962045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A(__this, /*hidden argument*/Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var);
		__this->set_TargetRenderer_4(L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_TargetRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = __this->get_TargetRenderer_4();
		NullCheck(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(TargetRenderer.sharedMaterial.color.r, eventData.NewValue, TargetRenderer.sharedMaterial.color.b);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = __this->get_TargetRenderer_4();
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_6, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_8 = __this->get_TargetRenderer_4();
		NullCheck(L_8);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_r_0();
		SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * L_12 = ___eventData0;
		NullCheck(L_12);
		float L_13 = SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline(L_12, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_14 = __this->get_TargetRenderer_4();
		NullCheck(L_14);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_15 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_18), L_11, L_13, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_7, L_18, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::OnSliderUpdateBlue(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor_OnSliderUpdateBlue_m5E16DAD469064548E2BC4199BEF212F3B2F5210E (SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1 * __this, SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderChangeColor_OnSliderUpdateBlue_m5E16DAD469064548E2BC4199BEF212F3B2F5210E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetRenderer = GetComponentInChildren<Renderer>();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_0 = Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A(__this, /*hidden argument*/Component_GetComponentInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_m4BCA8F337F4B38409E86A82CAAD0E8B0FAD73A9A_RuntimeMethod_var);
		__this->set_TargetRenderer_4(L_0);
		// if ((TargetRenderer != null) && (TargetRenderer.material != null))
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_1 = __this->get_TargetRenderer_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0072;
		}
	}
	{
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_3 = __this->get_TargetRenderer_4();
		NullCheck(L_3);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_4 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// TargetRenderer.material.color = new Color(TargetRenderer.sharedMaterial.color.r, TargetRenderer.sharedMaterial.color.g, eventData.NewValue);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = __this->get_TargetRenderer_4();
		NullCheck(L_6);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_7 = Renderer_get_material_m4434513446B652652CE9FD766B0E3D1D34C4A617(L_6, /*hidden argument*/NULL);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_8 = __this->get_TargetRenderer_4();
		NullCheck(L_8);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_9 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_r_0();
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_12 = __this->get_TargetRenderer_4();
		NullCheck(L_12);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_13 = Renderer_get_sharedMaterial_m2BE9FF3D269968F2E323AC60EFBBCC0B26E7E6F9(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_14 = Material_get_color_m7CE9C1FC0E0B4952D58DFBBA4D569F4B161B27E9(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_g_1();
		SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * L_16 = ___eventData0;
		NullCheck(L_16);
		float L_17 = SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline(L_16, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_18), L_11, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_color_m127EAC5D3CC68359E72D12A2B3CE7428EFBB81C3(L_7, L_18, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SliderChangeColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderChangeColor__ctor_m2E8628C8A17A3F682D297A9B432E96405F9EEF2A (SliderChangeColor_t6E76A76AEFC6A5F6F367B0FC57BF330082D64CF1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_Awake_m899DC97E01B170BEA171B3218C45B764B0D3F65B (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	{
		// BuildMatrix();
		MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix_BuildMatrix_m2E173BFBB7F2BD9F1B8A5922CED661C78E5E5294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_10 = NULL;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * V_11 = NULL;
	Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * V_12 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_13 = NULL;
	{
		// List<Transform> children = transform.Cast<Transform>().ToList();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937(L_0, /*hidden argument*/Enumerable_Cast_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m2C894D1B76F567B4A8207065C8BD617503335937_RuntimeMethod_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00(L_1, /*hidden argument*/Enumerable_ToList_TisTransform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_m576129E7E9EA1B0D9D2882C862DD0416A519CA00_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < children.Count; ++i)
		V_7 = 0;
		goto IL_0033;
	}

IL_0016:
	{
		// Transform child = children[i];
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_3 = V_0;
		int32_t L_4 = V_7;
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		// GameObjectExtensions.DestroyGameObject(child.gameObject);
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		GameObjectExtensions_DestroyGameObject_m7114755BE0C5889143147379AD4AD37BAA8F1000(L_6, (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_7 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_8 = V_7;
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline(L_9, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		// if (material == null)
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		// Debug.LogError("Failed to build material matrix due to missing material.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4FEC3E1B51328AE0888C2F032A7A812DCD6E5932, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0056:
	{
		// float center = (dimension - 1) * positionOffset * -0.5f;
		int32_t L_13 = __this->get_dimension_6();
		float L_14 = __this->get_positionOffset_7();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1))))), (float)L_14)), (float)(-0.5f)));
		// Vector3 position = new Vector3(center, 0.0f, center);
		float L_15 = V_1;
		float L_16 = V_1;
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), L_15, (0.0f), L_16, /*hidden argument*/NULL);
		// int firstPropertyId = Shader.PropertyToID(firstPropertyName);
		String_t* L_17 = __this->get_firstPropertyName_8();
		int32_t L_18 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// int secondPropertyId = Shader.PropertyToID(secondPropertyName);
		String_t* L_19 = __this->get_secondPropertyName_9();
		int32_t L_20 = Shader_PropertyToID_m831E5B48743620DB9E3E3DD15A8DEA483981DD45(L_19, /*hidden argument*/NULL);
		V_4 = L_20;
		// float firstProperty = 0.0f;
		V_5 = (0.0f);
		// float secondProperty = 0.0f;
		V_6 = (0.0f);
		// for (int i = 0; i < dimension; ++i)
		V_8 = 0;
		goto IL_0231;
	}

IL_00aa:
	{
		// for (int j = 0; j < dimension; ++j)
		V_9 = 0;
		goto IL_01ea;
	}

IL_00b2:
	{
		// GameObject element = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = GameObject_CreatePrimitive_mA4D35085D817369E4A513FF31D745CEB27B07F6A(0, /*hidden argument*/NULL);
		V_10 = L_21;
		// element.name = "Element" + (i * dimension + j);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_10;
		int32_t L_23 = V_8;
		int32_t L_24 = __this->get_dimension_6();
		int32_t L_25 = V_9;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24)), (int32_t)L_25));
		RuntimeObject * L_27 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral49FA9FD831096C82AB950BC7AA0A0A7EF8A10998, L_27, /*hidden argument*/NULL);
		NullCheck(L_22);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_22, L_28, /*hidden argument*/NULL);
		// element.transform.parent = transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = V_10;
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_30, L_31, /*hidden argument*/NULL);
		// element.transform.localPosition = position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = V_10;
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_2;
		NullCheck(L_33);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_33, L_34, /*hidden argument*/NULL);
		// element.transform.localRotation = Quaternion.Euler(localRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = V_10;
		NullCheck(L_35);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_35, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = __this->get_localRotation_10();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_38 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_37, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_36, L_38, /*hidden argument*/NULL);
		// position.x += positionOffset;
		float* L_39 = (&V_2)->get_address_of_x_2();
		float* L_40 = L_39;
		float L_41 = *((float*)L_40);
		float L_42 = __this->get_positionOffset_7();
		*((float*)L_40) = (float)((float)il2cpp_codegen_add((float)L_41, (float)L_42));
		// Material newMaterial = new Material(material);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_43 = __this->get_material_4();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_44 = (Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 *)il2cpp_codegen_object_new(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598_il2cpp_TypeInfo_var);
		Material__ctor_m0171C6D4D3FD04D58C70808F255DBA67D0ED2BDE(L_44, L_43, /*hidden argument*/NULL);
		V_11 = L_44;
		// newMaterial.SetFloat(firstPropertyId, firstProperty);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_45 = V_11;
		int32_t L_46 = V_3;
		float L_47 = V_5;
		NullCheck(L_45);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_45, L_46, L_47, /*hidden argument*/NULL);
		// newMaterial.SetFloat(secondPropertyId, secondProperty);
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_48 = V_11;
		int32_t L_49 = V_4;
		float L_50 = V_6;
		NullCheck(L_48);
		Material_SetFloat_mC2FDDF0798373DEE6BBA9B9FFFE03EC3CFB9BF47(L_48, L_49, L_50, /*hidden argument*/NULL);
		// Renderer _renderer = element.GetComponent<Renderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_51 = V_10;
		NullCheck(L_51);
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_52 = GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85(L_51, /*hidden argument*/GameObject_GetComponent_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mD65E2552CCFED4D0EC506EE90DE51215D90AEF85_RuntimeMethod_var);
		V_12 = L_52;
		// MeshFilter meshFilter = element.GetComponent<MeshFilter>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_53 = V_10;
		NullCheck(L_53);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_54 = GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4(L_53, /*hidden argument*/GameObject_GetComponent_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_mD1BA4FFEB800AB3D102141CD0A0ECE237EA70FB4_RuntimeMethod_var);
		V_13 = L_54;
		// if (Application.isPlaying == true)
		bool L_55 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_0198;
		}
	}
	{
		// _renderer.material = newMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_56 = V_12;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_57 = V_11;
		NullCheck(L_56);
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_56, L_57, /*hidden argument*/NULL);
		// if (mesh != null)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_58 = __this->get_mesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_59 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_58, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01d0;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_60 = V_13;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_61 = __this->get_mesh_5();
		NullCheck(L_60);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_60, L_61, /*hidden argument*/NULL);
		// Destroy(element.GetComponent<SphereCollider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_62 = V_10;
		NullCheck(L_62);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_63 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_62, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_63, /*hidden argument*/NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = V_10;
		NullCheck(L_64);
		GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_64, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
		// }
		goto IL_01d0;
	}

IL_0198:
	{
		// _renderer.sharedMaterial = newMaterial;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_65 = V_12;
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_66 = V_11;
		NullCheck(L_65);
		Renderer_set_sharedMaterial_mC94A354D9B0FCA081754A7CB51AEE5A9AD3946A3(L_65, L_66, /*hidden argument*/NULL);
		// if (mesh != null)
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_67 = __this->get_mesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_68 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_67, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_01d0;
		}
	}
	{
		// meshFilter.mesh = mesh;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_69 = V_13;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_70 = __this->get_mesh_5();
		NullCheck(L_69);
		MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_69, L_70, /*hidden argument*/NULL);
		// DestroyImmediate(element.GetComponent<SphereCollider>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_71 = V_10;
		NullCheck(L_71);
		SphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F * L_72 = GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039(L_71, /*hidden argument*/GameObject_GetComponent_TisSphereCollider_tAC3E5E20B385DF1C0B17F3EA5C7214F71367706F_m4DEC2B4735AA4EA2D41E2D02AF512A49659AD039_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_72, /*hidden argument*/NULL);
		// element.AddComponent<MeshCollider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_73 = V_10;
		NullCheck(L_73);
		GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C(L_73, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE_m38A789A66BD8A824B7D5FF46C20C4BD3CE0F3B3C_RuntimeMethod_var);
	}

IL_01d0:
	{
		// firstProperty += 1.0f / (dimension - 1);
		float L_74 = V_5;
		int32_t L_75 = __this->get_dimension_6();
		V_5 = ((float)il2cpp_codegen_add((float)L_74, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_75, (int32_t)1)))))))));
		// for (int j = 0; j < dimension; ++j)
		int32_t L_76 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01ea:
	{
		// for (int j = 0; j < dimension; ++j)
		int32_t L_77 = V_9;
		int32_t L_78 = __this->get_dimension_6();
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_00b2;
		}
	}
	{
		// position.x = center;
		float L_79 = V_1;
		(&V_2)->set_x_2(L_79);
		// position.z += positionOffset;
		float* L_80 = (&V_2)->get_address_of_z_4();
		float* L_81 = L_80;
		float L_82 = *((float*)L_81);
		float L_83 = __this->get_positionOffset_7();
		*((float*)L_81) = (float)((float)il2cpp_codegen_add((float)L_82, (float)L_83));
		// firstProperty = 0.0f;
		V_5 = (0.0f);
		// secondProperty += 1.0f / (dimension - 1);
		float L_84 = V_6;
		int32_t L_85 = __this->get_dimension_6();
		V_6 = ((float)il2cpp_codegen_add((float)L_84, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_85, (int32_t)1)))))))));
		// for (int i = 0; i < dimension; ++i)
		int32_t L_86 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_0231:
	{
		// for (int i = 0; i < dimension; ++i)
		int32_t L_87 = V_8;
		int32_t L_88 = __this->get_dimension_6();
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00aa;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6 (MaterialMatrix_t4C38EA16270583C7EACDC8BCF1BC292DEE1C0BB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix__ctor_mFCCC0A86E66D0E3B69B1C497B366F32E71F752E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int dimension = 5;
		__this->set_dimension_6(5);
		// private float positionOffset = 0.1f;
		__this->set_positionOffset_7((0.1f));
		// private string firstPropertyName = "_Metallic";
		__this->set_firstPropertyName_8(_stringLiteralB9567DED74E1C05B65EAB2AE2C2B49CC75B1660A);
		// private string secondPropertyName = "_Glossiness";
		__this->set_secondPropertyName_9(_stringLiteral76DB1AA30D048277794F2EB6004B5AE7BAA0CBC7);
		// private Vector3 localRotation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_localRotation_10(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::get_GazeProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3 (ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * G_B3_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * G_B2_1 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * G_B4_1 = NULL;
	{
		// private IMixedRealityGazeProviderHeadOverride GazeProvider => gazeProvider ?? (gazeProvider = CoreServices.InputSystem?.GazeProvider as IMixedRealityGazeProviderHeadOverride);
		RuntimeObject* L_0 = __this->get_gazeProvider_4();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B5_0 = L_1;
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_get_InputSystem_m4797E97A2258E0318F789F3291D646530225C3E8(/*hidden argument*/NULL);
		RuntimeObject* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = __this;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = __this;
			goto IL_0017;
		}
	}
	{
		G_B4_0 = ((RuntimeObject*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_001c;
	}

IL_0017:
	{
		NullCheck(G_B3_0);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProvider Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_GazeProvider() */, IMixedRealityInputSystem_t5CCAA5BAD9D45403FCE5D1B3FEEB2E45BA65B22B_il2cpp_TypeInfo_var, G_B3_0);
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
	}

IL_001c:
	{
		RuntimeObject* L_5 = ((RuntimeObject*)IsInst((RuntimeObject*)G_B4_0, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var));
		V_0 = L_5;
		NullCheck(G_B4_1);
		G_B4_1->set_gazeProvider_4(L_5);
		RuntimeObject* L_6 = V_0;
		G_B5_0 = L_6;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::ToggleGazeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGazeSource_ToggleGazeOverride_mF048956F9FC25AF7B7322CE701A57E716D1F485D (ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGazeSource_ToggleGazeOverride_mF048956F9FC25AF7B7322CE701A57E716D1F485D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GazeProvider != null)
		RuntimeObject* L_0 = ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// GazeProvider.UseHeadGazeOverride = !GazeProvider.UseHeadGazeOverride;
		RuntimeObject* L_1 = ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3(__this, /*hidden argument*/NULL);
		RuntimeObject* L_2 = ToggleGazeSource_get_GazeProvider_m966E9BA72306D58993D98191243B2C91C15172F3(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::get_UseHeadGazeOverride() */, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityGazeProviderHeadOverride::set_UseHeadGazeOverride(System.Boolean) */, IMixedRealityGazeProviderHeadOverride_t4A39EF4C5CA64F3025947F07B8A79AAA5C714FAC_il2cpp_TypeInfo_var, L_1, (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleGazeSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGazeSource__ctor_m7A48BED17A624B3A2708F7CD3A7416BBD33E07FA (ToggleGazeSource_t6AC3A9EBDB267E93B82719F25296039E6958C87B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization::ToggleSpatialMeshVisual(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshVisualization_ToggleSpatialMeshVisual_mE41AB894B9F607B8E81704850BA818F6B24E7D63 (ToggleSpatialMeshVisualization_tB5AB5500F0EB137C5217B4B91C455AF56CA98F5E * __this, bool ___mode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleSpatialMeshVisualization_ToggleSpatialMeshVisual_mE41AB894B9F607B8E81704850BA818F6B24E7D63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mBD13C4FF4389459D49919659ED8EB67BE4DD99A4(/*hidden argument*/CoreServices_GetSpatialAwarenessSystemDataProvider_TisIMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_mBD13C4FF4389459D49919659ED8EB67BE4DD99A4_RuntimeMethod_var);
		V_0 = L_0;
		// if (mode == true)
		bool L_1 = ___mode0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var, L_2, 1);
		// }
		return;
	}

IL_0011:
	{
		// observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(1 /* System.Void Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver::set_DisplayOption(Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshDisplayOptions) */, IMixedRealitySpatialAwarenessMeshObserver_tEA7513D832A08CFB2FB9FEEB037EE04C614C1DCB_il2cpp_TypeInfo_var, L_3, 0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.ToggleSpatialMeshVisualization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleSpatialMeshVisualization__ctor_m450896E49A2DB8289EBD2203B2C497A345C970F2 (ToggleSpatialMeshVisualization_tB5AB5500F0EB137C5217B4B91C455AF56CA98F5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::OnSliderUpdated(Microsoft.MixedReality.Toolkit.UI.SliderEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSliderTrackLine_OnSliderUpdated_mE0C7016DCBE669639602A04168E245799C32AFD4 (UpdateSliderTrackLine_t0575CBF1BC9DF5B58B2F5B8C15D9C4DEE9E91AF2 * __this, SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * ___eventData0, const RuntimeMethod* method)
{
	{
		// activeLine.transform.localScale = new Vector3(transform.localScale.x, eventData.NewValue, transform.localScale.z);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_activeLine_4();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * L_5 = ___eventData0;
		NullCheck(L_5);
		float L_6 = SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), L_4, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_1, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Experimental.HandMenu.UpdateSliderTrackLine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateSliderTrackLine__ctor_mBDE2C13AA607B658DBEFEC99610B7D3AB70EFAEF (UpdateSliderTrackLine_t0575CBF1BC9DF5B58B2F5B8C15D9C4DEE9E91AF2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Single Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::get_TimeToAllowDwellDecay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DwellProfileWithDecay_get_TimeToAllowDwellDecay_m44C44AFF7A2793C124533148C314DE1B3828E631 (DwellProfileWithDecay_t803A60F2FC775432403C7223695C713BD685A674 * __this, const RuntimeMethod* method)
{
	{
		// return timeToAllowDwellDecay;
		float L_0 = __this->get_timeToAllowDwellDecay_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Experimental.Dwell.DwellProfileWithDecay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DwellProfileWithDecay__ctor_m452B6249E0ACFF884E43D6D5C7801B8C7D7800B2 (DwellProfileWithDecay_t803A60F2FC775432403C7223695C713BD685A674 * __this, const RuntimeMethod* method)
{
	{
		// private float timeToAllowDwellDecay = 20;
		__this->set_timeToAllowDwellDecay_9((20.0f));
		DwellProfile__ctor_m1706126C6C3A1B3DE48C1068350A585B6D59226B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealitySpatialAwarenessEventData_get_Id_m27E849404725A51B2C7FCC3ECBCCB6E7B5728532_inline (MixedRealitySpatialAwarenessEventData_tF1367F728D31D63B36BE4665951DB8837CC3EA98 * __this, const RuntimeMethod* method)
{
	{
		// public int Id { get; private set; }
		int32_t L_0 = __this->get_U3CIdU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBAD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityToolkit_get_Instance_m02A5ECDA0A8291AA2EDDC518554EF3FAA470DBADMicrosoft_MixedReality_Toolkit_Examples_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityToolkit Instance => activeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var);
		MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47 * L_0 = ((MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityToolkit_tDC525C9CAB7842D94B1F1CF572AF6859FED4AD47_il2cpp_TypeInfo_var))->get_activeInstance_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SliderEventData_get_NewValue_mC5DD5BF2F3A084587B60800086E89B992E42734B_inline (SliderEventData_tDD1C9F24E2D60E321B26CE2DC2E986437F5FD66C * __this, const RuntimeMethod* method)
{
	{
		// public float NewValue { get; private set; }
		float L_0 = __this->get_U3CNewValueU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
