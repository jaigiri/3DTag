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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour/Invoker>
struct Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t79DBAD8EFA3332B8CE0D7CBEF6F1AC175331AC38;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t687CC016C273A05B2269AF904753378F23CC9A11;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t7348E69CA57FC75395C9BBB4A9FBB33953F29F27;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_tDDB69E91697CCB64C7993B651487CEEC287DB7E8;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t5BBF33C66D868C3B9C722A703D57C2AD3F18EE30;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t6AEF21B80E2C499BFFB48F8148C3026FBBA3FD72;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct IEnumerator_1_tD9D3BB20C184568D47EBBBC0FC9090BD04C254F2;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Plane>
struct IEnumerator_1_tD383708E3E757D9AE0D1B55691740097AC4704B7;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Rendering.BatchVisibility>
struct IEnumerator_1_t1669FCDE137697FFB30B6660EEB8301A39A6C33A;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7;
// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6;
// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD;
// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB;
// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t8F250F71EB16B1681BB533722AC210AAD539DF44;
// UnityEngine.Networking.Match.NetworkMatch/<ProcessMatchResponse>d__26`2<System.Object,System.Object>
struct U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF;
// UnityEngine.Networking.Match.NetworkMatch/DataResponseDelegate`1<System.Object>
struct DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1;
// UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<System.Object,System.Object>
struct InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7;
// UnityEngine.Networking.Match.Response
struct Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181;
// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9;
// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00;
IL2CPP_EXTERN_C String_t* _stringLiteral22AC1B9DAB1A5A272FEBD04091C310E3D95A6989;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF59C8E6CEE45F36DB6254667EE895B2731A0750;
IL2CPP_EXTERN_C String_t* _stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m2A82DB72B70D7BE957769A683CCB939EA58A42D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m2EF257EC723A0596591A4431CBB0AF23557EBF60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m393C57E000F1F2642AD4F82BF758BB8689EA5552_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_m7AF849913200C9530C425F24DDD23AF7570C1AC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncListChanged_BeginInvoke_mCDA1EFAC9F2A08BE17981BBF05803A99003494E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_m8B99383890BB5B65500081647ED28F94293E2C52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SyncList_1_SendMsg_mF05134C6C8E16CA49C17AD998C5A3DF66A8935A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CProcessMatchResponseU3Ed__26_2_MoveNext_m068F73E5349787BD74987099D357673D16A4C8ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
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


// System.Collections.Generic.List`1<System.Single>
struct  List_1_t026D7A8C4D989218772DB3E051A624F753A60859  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____items_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t026D7A8C4D989218772DB3E051A624F753A60859_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.UInt32>
struct  List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____items_1)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__items_1() const { return ____items_1; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE_StaticFields, ____emptyArray_5)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
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


// UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>
struct  U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::client
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___client_2;
	// UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE> UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::internalCallback
	InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * ___internalCallback_3;
	// USERRESPONSEDELEGATETYPE UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::userCallback
	RuntimeObject * ___userCallback_4;
	// UnityEngine.Networking.Match.NetworkMatch UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::<>4__this
	NetworkMatch_t8F250F71EB16B1681BB533722AC210AAD539DF44 * ___U3CU3E4__this_5;
	// JSONRESPONSE UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::<jsonInterface>5__1
	RuntimeObject * ___U3CjsonInterfaceU3E5__1_6;
	// System.ArgumentException UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2::<exception>5__2
	ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * ___U3CexceptionU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___client_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_client_2() const { return ___client_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_2), (void*)value);
	}

	inline static int32_t get_offset_of_internalCallback_3() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___internalCallback_3)); }
	inline InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * get_internalCallback_3() const { return ___internalCallback_3; }
	inline InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 ** get_address_of_internalCallback_3() { return &___internalCallback_3; }
	inline void set_internalCallback_3(InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * value)
	{
		___internalCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_userCallback_4() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___userCallback_4)); }
	inline RuntimeObject * get_userCallback_4() const { return ___userCallback_4; }
	inline RuntimeObject ** get_address_of_userCallback_4() { return &___userCallback_4; }
	inline void set_userCallback_4(RuntimeObject * value)
	{
		___userCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___U3CU3E4__this_5)); }
	inline NetworkMatch_t8F250F71EB16B1681BB533722AC210AAD539DF44 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline NetworkMatch_t8F250F71EB16B1681BB533722AC210AAD539DF44 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(NetworkMatch_t8F250F71EB16B1681BB533722AC210AAD539DF44 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CjsonInterfaceU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___U3CjsonInterfaceU3E5__1_6)); }
	inline RuntimeObject * get_U3CjsonInterfaceU3E5__1_6() const { return ___U3CjsonInterfaceU3E5__1_6; }
	inline RuntimeObject ** get_address_of_U3CjsonInterfaceU3E5__1_6() { return &___U3CjsonInterfaceU3E5__1_6; }
	inline void set_U3CjsonInterfaceU3E5__1_6(RuntimeObject * value)
	{
		___U3CjsonInterfaceU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CjsonInterfaceU3E5__1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CexceptionU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF, ___U3CexceptionU3E5__2_7)); }
	inline ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * get_U3CexceptionU3E5__2_7() const { return ___U3CexceptionU3E5__2_7; }
	inline ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 ** get_address_of_U3CexceptionU3E5__2_7() { return &___U3CexceptionU3E5__2_7; }
	inline void set_U3CexceptionU3E5__2_7(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * value)
	{
		___U3CexceptionU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CexceptionU3E5__2_7), (void*)value);
	}
};


// UnityEngine.Networking.Match.Response
struct  Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.Match.Response::success
	bool ___success_0;
	// System.String UnityEngine.Networking.Match.Response::extendedInfo
	String_t* ___extendedInfo_1;

public:
	inline static int32_t get_offset_of_success_0() { return static_cast<int32_t>(offsetof(Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742, ___success_0)); }
	inline bool get_success_0() const { return ___success_0; }
	inline bool* get_address_of_success_0() { return &___success_0; }
	inline void set_success_0(bool value)
	{
		___success_0 = value;
	}

	inline static int32_t get_offset_of_extendedInfo_1() { return static_cast<int32_t>(offsetof(Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742, ___extendedInfo_1)); }
	inline String_t* get_extendedInfo_1() const { return ___extendedInfo_1; }
	inline String_t** get_address_of_extendedInfo_1() { return &___extendedInfo_1; }
	inline void set_extendedInfo_1(String_t* value)
	{
		___extendedInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extendedInfo_1), (void*)value);
	}
};


// UnityEngine.Networking.NetworkReader
struct  NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_buf_0;

public:
	inline static int32_t get_offset_of_m_buf_0() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12, ___m_buf_0)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_buf_0() const { return ___m_buf_0; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_buf_0() { return &___m_buf_0; }
	inline void set_m_buf_0(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_buf_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buf_0), (void*)value);
	}
};

struct NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields
{
public:
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_4;

public:
	inline static int32_t get_offset_of_s_StringReaderBuffer_3() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_StringReaderBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringReaderBuffer_3() const { return ___s_StringReaderBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringReaderBuffer_3() { return &___s_StringReaderBuffer_3; }
	inline void set_s_StringReaderBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringReaderBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringReaderBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_Encoding_4() { return static_cast<int32_t>(offsetof(NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12_StaticFields, ___s_Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_4() const { return ___s_Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_4() { return &___s_Encoding_4; }
	inline void set_s_Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_4), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Boolean>
struct  SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9, ___m_Objects_0)); }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9, ___m_Callback_3)); }
	inline SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Int32>
struct  SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4, ___m_Objects_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4, ___m_Callback_3)); }
	inline SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Object>
struct  SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Objects_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47, ___m_Callback_3)); }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.Single>
struct  SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Objects_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71, ___m_Callback_3)); }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.Networking.SyncList`1<System.UInt32>
struct  SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___m_Callback_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Objects_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Behaviour_1() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Behaviour_1)); }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * get_m_Behaviour_1() const { return ___m_Behaviour_1; }
	inline NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C ** get_address_of_m_Behaviour_1() { return &___m_Behaviour_1; }
	inline void set_m_Behaviour_1(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * value)
	{
		___m_Behaviour_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Behaviour_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CmdHash_2() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_CmdHash_2)); }
	inline int32_t get_m_CmdHash_2() const { return ___m_CmdHash_2; }
	inline int32_t* get_address_of_m_CmdHash_2() { return &___m_CmdHash_2; }
	inline void set_m_CmdHash_2(int32_t value)
	{
		___m_CmdHash_2 = value;
	}

	inline static int32_t get_offset_of_m_Callback_3() { return static_cast<int32_t>(offsetof(SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C, ___m_Callback_3)); }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * get_m_Callback_3() const { return ___m_Callback_3; }
	inline SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 ** get_address_of_m_Callback_3() { return &___m_Callback_3; }
	inline void set_m_Callback_3(SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * value)
	{
		___m_Callback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Callback_3), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Boolean>
struct  Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	bool ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___list_0)); }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * get_list_0() const { return ___list_0; }
	inline List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Int32>
struct  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___list_0)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_list_0() const { return ___list_0; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
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


// System.Collections.Generic.List`1_Enumerator<System.Single>
struct  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	float ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___list_0)); }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * get_list_0() const { return ___list_0; }
	inline List_1_t026D7A8C4D989218772DB3E051A624F753A60859 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD, ___current_3)); }
	inline float get_current_3() const { return ___current_3; }
	inline float* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(float value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.UInt32>
struct  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	uint32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___list_0)); }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * get_list_0() const { return ___list_0; }
	inline List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC, ___current_3)); }
	inline uint32_t get_current_3() const { return ___current_3; }
	inline uint32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint32_t value)
	{
		___current_3 = value;
	}
};


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

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Boolean>
struct  InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB, ___Delegate_0)); }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct  LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Networking.NetworkHash128
struct  NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C 
{
public:
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;

public:
	inline static int32_t get_offset_of_i0_0() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i0_0)); }
	inline uint8_t get_i0_0() const { return ___i0_0; }
	inline uint8_t* get_address_of_i0_0() { return &___i0_0; }
	inline void set_i0_0(uint8_t value)
	{
		___i0_0 = value;
	}

	inline static int32_t get_offset_of_i1_1() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i1_1)); }
	inline uint8_t get_i1_1() const { return ___i1_1; }
	inline uint8_t* get_address_of_i1_1() { return &___i1_1; }
	inline void set_i1_1(uint8_t value)
	{
		___i1_1 = value;
	}

	inline static int32_t get_offset_of_i2_2() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i2_2)); }
	inline uint8_t get_i2_2() const { return ___i2_2; }
	inline uint8_t* get_address_of_i2_2() { return &___i2_2; }
	inline void set_i2_2(uint8_t value)
	{
		___i2_2 = value;
	}

	inline static int32_t get_offset_of_i3_3() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i3_3)); }
	inline uint8_t get_i3_3() const { return ___i3_3; }
	inline uint8_t* get_address_of_i3_3() { return &___i3_3; }
	inline void set_i3_3(uint8_t value)
	{
		___i3_3 = value;
	}

	inline static int32_t get_offset_of_i4_4() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i4_4)); }
	inline uint8_t get_i4_4() const { return ___i4_4; }
	inline uint8_t* get_address_of_i4_4() { return &___i4_4; }
	inline void set_i4_4(uint8_t value)
	{
		___i4_4 = value;
	}

	inline static int32_t get_offset_of_i5_5() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i5_5)); }
	inline uint8_t get_i5_5() const { return ___i5_5; }
	inline uint8_t* get_address_of_i5_5() { return &___i5_5; }
	inline void set_i5_5(uint8_t value)
	{
		___i5_5 = value;
	}

	inline static int32_t get_offset_of_i6_6() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i6_6)); }
	inline uint8_t get_i6_6() const { return ___i6_6; }
	inline uint8_t* get_address_of_i6_6() { return &___i6_6; }
	inline void set_i6_6(uint8_t value)
	{
		___i6_6 = value;
	}

	inline static int32_t get_offset_of_i7_7() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i7_7)); }
	inline uint8_t get_i7_7() const { return ___i7_7; }
	inline uint8_t* get_address_of_i7_7() { return &___i7_7; }
	inline void set_i7_7(uint8_t value)
	{
		___i7_7 = value;
	}

	inline static int32_t get_offset_of_i8_8() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i8_8)); }
	inline uint8_t get_i8_8() const { return ___i8_8; }
	inline uint8_t* get_address_of_i8_8() { return &___i8_8; }
	inline void set_i8_8(uint8_t value)
	{
		___i8_8 = value;
	}

	inline static int32_t get_offset_of_i9_9() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i9_9)); }
	inline uint8_t get_i9_9() const { return ___i9_9; }
	inline uint8_t* get_address_of_i9_9() { return &___i9_9; }
	inline void set_i9_9(uint8_t value)
	{
		___i9_9 = value;
	}

	inline static int32_t get_offset_of_i10_10() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i10_10)); }
	inline uint8_t get_i10_10() const { return ___i10_10; }
	inline uint8_t* get_address_of_i10_10() { return &___i10_10; }
	inline void set_i10_10(uint8_t value)
	{
		___i10_10 = value;
	}

	inline static int32_t get_offset_of_i11_11() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i11_11)); }
	inline uint8_t get_i11_11() const { return ___i11_11; }
	inline uint8_t* get_address_of_i11_11() { return &___i11_11; }
	inline void set_i11_11(uint8_t value)
	{
		___i11_11 = value;
	}

	inline static int32_t get_offset_of_i12_12() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i12_12)); }
	inline uint8_t get_i12_12() const { return ___i12_12; }
	inline uint8_t* get_address_of_i12_12() { return &___i12_12; }
	inline void set_i12_12(uint8_t value)
	{
		___i12_12 = value;
	}

	inline static int32_t get_offset_of_i13_13() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i13_13)); }
	inline uint8_t get_i13_13() const { return ___i13_13; }
	inline uint8_t* get_address_of_i13_13() { return &___i13_13; }
	inline void set_i13_13(uint8_t value)
	{
		___i13_13 = value;
	}

	inline static int32_t get_offset_of_i14_14() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i14_14)); }
	inline uint8_t get_i14_14() const { return ___i14_14; }
	inline uint8_t* get_address_of_i14_14() { return &___i14_14; }
	inline void set_i14_14(uint8_t value)
	{
		___i14_14 = value;
	}

	inline static int32_t get_offset_of_i15_15() { return static_cast<int32_t>(offsetof(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C, ___i15_15)); }
	inline uint8_t get_i15_15() const { return ___i15_15; }
	inline uint8_t* get_address_of_i15_15() { return &___i15_15; }
	inline void set_i15_15(uint8_t value)
	{
		___i15_15 = value;
	}
};


// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___Zero_2 = value;
	}
};


// UnityEngine.Networking.NetworkSceneId
struct  NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};


// UnityEngine.Networking.UIntFloat
struct  UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_floatValue_0() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___floatValue_0)); }
	inline float get_floatValue_0() const { return ___floatValue_0; }
	inline float* get_address_of_floatValue_0() { return &___floatValue_0; }
	inline void set_floatValue_0(float value)
	{
		___floatValue_0 = value;
	}

	inline static int32_t get_offset_of_intValue_1() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___intValue_1)); }
	inline uint32_t get_intValue_1() const { return ___intValue_1; }
	inline uint32_t* get_address_of_intValue_1() { return &___intValue_1; }
	inline void set_intValue_1(uint32_t value)
	{
		___intValue_1 = value;
	}

	inline static int32_t get_offset_of_doubleValue_2() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___doubleValue_2)); }
	inline double get_doubleValue_2() const { return ___doubleValue_2; }
	inline double* get_address_of_doubleValue_2() { return &___doubleValue_2; }
	inline void set_doubleValue_2(double value)
	{
		___doubleValue_2 = value;
	}

	inline static int32_t get_offset_of_longValue_3() { return static_cast<int32_t>(offsetof(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0, ___longValue_3)); }
	inline uint64_t get_longValue_3() const { return ___longValue_3; }
	inline uint64_t* get_address_of_longValue_3() { return &___longValue_3; }
	inline void set_longValue_3(uint64_t value)
	{
		___longValue_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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


// UnityEngine.Rendering.BatchVisibility
struct  BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


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


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Events.CachedInvokableCall`1<System.Boolean>
struct  CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7  : public InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	bool ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7, ___m_Arg1_1)); }
	inline bool get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline bool* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(bool value)
	{
		___m_Arg1_1 = value;
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct  CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6  : public InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	int32_t ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6, ___m_Arg1_1)); }
	inline int32_t get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline int32_t* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(int32_t value)
	{
		___m_Arg1_1 = value;
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct  CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD  : public InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	RuntimeObject * ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD, ___m_Arg1_1)); }
	inline RuntimeObject * get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline RuntimeObject ** get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(RuntimeObject * value)
	{
		___m_Arg1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Arg1_1), (void*)value);
	}
};


// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct  CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A  : public InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26
{
public:
	// T UnityEngine.Events.CachedInvokableCall`1::m_Arg1
	float ___m_Arg1_1;

public:
	inline static int32_t get_offset_of_m_Arg1_1() { return static_cast<int32_t>(offsetof(CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A, ___m_Arg1_1)); }
	inline float get_m_Arg1_1() const { return ___m_Arg1_1; }
	inline float* get_address_of_m_Arg1_1() { return &___m_Arg1_1; }
	inline void set_m_Arg1_1(float value)
	{
		___m_Arg1_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct  FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct  LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct  LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030  : public RuntimeObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030, ___m_Buffer_1)); }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t2BA43CF3688776F372BECD54D28F90CB0559B36C * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Buffer_1), (void*)value);
	}
};

struct NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_StringWriteBuffer_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_tFF4D5273EEDE59506E38E1C3A3932139C4EACBE0  value)
	{
		___s_FloatConverter_4 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Boolean>
struct  Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Int32>
struct  Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Object>
struct  Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.Single>
struct  Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.SyncList`1_Operation<System.UInt32>
struct  Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367 
{
public:
	// System.Int32 UnityEngine.Networking.SyncList`1_Operation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

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

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


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


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct  LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___color_1;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___indirectColor_2;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_3;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_4;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_5;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_9;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_10;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_11;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_12;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_13;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___color_1)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_color_1() const { return ___color_1; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_indirectColor_2() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___indirectColor_2)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_indirectColor_2() const { return ___indirectColor_2; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_indirectColor_2() { return &___indirectColor_2; }
	inline void set_indirectColor_2(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___indirectColor_2 = value;
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___orientation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_3() const { return ___orientation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___position_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_4() const { return ___position_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_coneAngle_6() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___coneAngle_6)); }
	inline float get_coneAngle_6() const { return ___coneAngle_6; }
	inline float* get_address_of_coneAngle_6() { return &___coneAngle_6; }
	inline void set_coneAngle_6(float value)
	{
		___coneAngle_6 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_7() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___innerConeAngle_7)); }
	inline float get_innerConeAngle_7() const { return ___innerConeAngle_7; }
	inline float* get_address_of_innerConeAngle_7() { return &___innerConeAngle_7; }
	inline void set_innerConeAngle_7(float value)
	{
		___innerConeAngle_7 = value;
	}

	inline static int32_t get_offset_of_shape0_8() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape0_8)); }
	inline float get_shape0_8() const { return ___shape0_8; }
	inline float* get_address_of_shape0_8() { return &___shape0_8; }
	inline void set_shape0_8(float value)
	{
		___shape0_8 = value;
	}

	inline static int32_t get_offset_of_shape1_9() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape1_9)); }
	inline float get_shape1_9() const { return ___shape1_9; }
	inline float* get_address_of_shape1_9() { return &___shape1_9; }
	inline void set_shape1_9(float value)
	{
		___shape1_9 = value;
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___type_10)); }
	inline uint8_t get_type_10() const { return ___type_10; }
	inline uint8_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(uint8_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___mode_11)); }
	inline uint8_t get_mode_11() const { return ___mode_11; }
	inline uint8_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(uint8_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_shadow_12() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shadow_12)); }
	inline uint8_t get_shadow_12() const { return ___shadow_12; }
	inline uint8_t* get_address_of_shadow_12() { return &___shadow_12; }
	inline void set_shadow_12(uint8_t value)
	{
		___shadow_12 = value;
	}

	inline static int32_t get_offset_of_falloff_13() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___falloff_13)); }
	inline uint8_t get_falloff_13() const { return ___falloff_13; }
	inline uint8_t* get_address_of_falloff_13() { return &___falloff_13; }
	inline void set_falloff_13(uint8_t value)
	{
		___falloff_13 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1_Enumerator<System.Byte>
struct  Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A, ___m_Array_0)); }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<System.Int32>
struct  Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77, ___m_Array_0)); }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231, ___m_Array_0)); }
	inline NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.Plane>
struct  Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476, ___m_Array_0)); }
	inline NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// Unity.Collections.NativeArray`1_Enumerator<UnityEngine.Rendering.BatchVisibility>
struct  Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1_Enumerator::m_Array
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1_Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4, ___m_Array_0)); }
	inline NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>
struct  DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>
struct  InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>
struct  SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>
struct  SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>
struct  SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>
struct  SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>
struct  SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Networking.NetworkBehaviour
struct  NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkBehaviour::m_SyncVarDirtyBits
	uint32_t ___m_SyncVarDirtyBits_4;
	// System.Single UnityEngine.Networking.NetworkBehaviour::m_LastSendTime
	float ___m_LastSendTime_5;
	// System.Boolean UnityEngine.Networking.NetworkBehaviour::m_SyncVarGuard
	bool ___m_SyncVarGuard_6;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkBehaviour::m_MyView
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * ___m_MyView_8;

public:
	inline static int32_t get_offset_of_m_SyncVarDirtyBits_4() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarDirtyBits_4)); }
	inline uint32_t get_m_SyncVarDirtyBits_4() const { return ___m_SyncVarDirtyBits_4; }
	inline uint32_t* get_address_of_m_SyncVarDirtyBits_4() { return &___m_SyncVarDirtyBits_4; }
	inline void set_m_SyncVarDirtyBits_4(uint32_t value)
	{
		___m_SyncVarDirtyBits_4 = value;
	}

	inline static int32_t get_offset_of_m_LastSendTime_5() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_LastSendTime_5)); }
	inline float get_m_LastSendTime_5() const { return ___m_LastSendTime_5; }
	inline float* get_address_of_m_LastSendTime_5() { return &___m_LastSendTime_5; }
	inline void set_m_LastSendTime_5(float value)
	{
		___m_LastSendTime_5 = value;
	}

	inline static int32_t get_offset_of_m_SyncVarGuard_6() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_SyncVarGuard_6)); }
	inline bool get_m_SyncVarGuard_6() const { return ___m_SyncVarGuard_6; }
	inline bool* get_address_of_m_SyncVarGuard_6() { return &___m_SyncVarGuard_6; }
	inline void set_m_SyncVarGuard_6(bool value)
	{
		___m_SyncVarGuard_6 = value;
	}

	inline static int32_t get_offset_of_m_MyView_8() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C, ___m_MyView_8)); }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * get_m_MyView_8() const { return ___m_MyView_8; }
	inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B ** get_address_of_m_MyView_8() { return &___m_MyView_8; }
	inline void set_m_MyView_8(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * value)
	{
		___m_MyView_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MyView_8), (void*)value);
	}
};

struct NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Networking.NetworkBehaviour_Invoker> UnityEngine.Networking.NetworkBehaviour::s_CmdHandlerDelegates
	Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * ___s_CmdHandlerDelegates_9;

public:
	inline static int32_t get_offset_of_s_CmdHandlerDelegates_9() { return static_cast<int32_t>(offsetof(NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C_StaticFields, ___s_CmdHandlerDelegates_9)); }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * get_s_CmdHandlerDelegates_9() const { return ___s_CmdHandlerDelegates_9; }
	inline Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B ** get_address_of_s_CmdHandlerDelegates_9() { return &___s_CmdHandlerDelegates_9; }
	inline void set_s_CmdHandlerDelegates_9(Dictionary_2_t7CB63C060ADDEC4A72D1BBD323E4C66E5A50238B * value)
	{
		___s_CmdHandlerDelegates_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CmdHandlerDelegates_9), (void*)value);
	}
};


// UnityEngine.Networking.NetworkIdentity
struct  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;

public:
	inline static int32_t get_offset_of_m_SceneId_4() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_SceneId_4)); }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  get_m_SceneId_4() const { return ___m_SceneId_4; }
	inline NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340 * get_address_of_m_SceneId_4() { return &___m_SceneId_4; }
	inline void set_m_SceneId_4(NetworkSceneId_t462EC62A23A1B7AF60637C48CD916A09BC493340  value)
	{
		___m_SceneId_4 = value;
	}

	inline static int32_t get_offset_of_m_AssetId_5() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_AssetId_5)); }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  get_m_AssetId_5() const { return ___m_AssetId_5; }
	inline NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C * get_address_of_m_AssetId_5() { return &___m_AssetId_5; }
	inline void set_m_AssetId_5(NetworkHash128_t157C5C14B16832B67D8F519C11ABA013695AF28C  value)
	{
		___m_AssetId_5 = value;
	}

	inline static int32_t get_offset_of_m_ServerOnly_6() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ServerOnly_6)); }
	inline bool get_m_ServerOnly_6() const { return ___m_ServerOnly_6; }
	inline bool* get_address_of_m_ServerOnly_6() { return &___m_ServerOnly_6; }
	inline void set_m_ServerOnly_6(bool value)
	{
		___m_ServerOnly_6 = value;
	}

	inline static int32_t get_offset_of_m_LocalPlayerAuthority_7() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_LocalPlayerAuthority_7)); }
	inline bool get_m_LocalPlayerAuthority_7() const { return ___m_LocalPlayerAuthority_7; }
	inline bool* get_address_of_m_LocalPlayerAuthority_7() { return &___m_LocalPlayerAuthority_7; }
	inline void set_m_LocalPlayerAuthority_7(bool value)
	{
		___m_LocalPlayerAuthority_7 = value;
	}

	inline static int32_t get_offset_of_m_IsClient_8() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsClient_8)); }
	inline bool get_m_IsClient_8() const { return ___m_IsClient_8; }
	inline bool* get_address_of_m_IsClient_8() { return &___m_IsClient_8; }
	inline void set_m_IsClient_8(bool value)
	{
		___m_IsClient_8 = value;
	}

	inline static int32_t get_offset_of_m_IsServer_9() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsServer_9)); }
	inline bool get_m_IsServer_9() const { return ___m_IsServer_9; }
	inline bool* get_address_of_m_IsServer_9() { return &___m_IsServer_9; }
	inline void set_m_IsServer_9(bool value)
	{
		___m_IsServer_9 = value;
	}

	inline static int32_t get_offset_of_m_HasAuthority_10() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_HasAuthority_10)); }
	inline bool get_m_HasAuthority_10() const { return ___m_HasAuthority_10; }
	inline bool* get_address_of_m_HasAuthority_10() { return &___m_HasAuthority_10; }
	inline void set_m_HasAuthority_10(bool value)
	{
		___m_HasAuthority_10 = value;
	}

	inline static int32_t get_offset_of_m_NetId_11() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetId_11)); }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  get_m_NetId_11() const { return ___m_NetId_11; }
	inline NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 * get_address_of_m_NetId_11() { return &___m_NetId_11; }
	inline void set_m_NetId_11(NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  value)
	{
		___m_NetId_11 = value;
	}

	inline static int32_t get_offset_of_m_IsLocalPlayer_12() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_IsLocalPlayer_12)); }
	inline bool get_m_IsLocalPlayer_12() const { return ___m_IsLocalPlayer_12; }
	inline bool* get_address_of_m_IsLocalPlayer_12() { return &___m_IsLocalPlayer_12; }
	inline void set_m_IsLocalPlayer_12(bool value)
	{
		___m_IsLocalPlayer_12 = value;
	}

	inline static int32_t get_offset_of_m_ConnectionToServer_13() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToServer_13)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToServer_13() const { return ___m_ConnectionToServer_13; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToServer_13() { return &___m_ConnectionToServer_13; }
	inline void set_m_ConnectionToServer_13(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToServer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToServer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConnectionToClient_14() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ConnectionToClient_14)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ConnectionToClient_14() const { return ___m_ConnectionToClient_14; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ConnectionToClient_14() { return &___m_ConnectionToClient_14; }
	inline void set_m_ConnectionToClient_14(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ConnectionToClient_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConnectionToClient_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerId_15() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_PlayerId_15)); }
	inline int16_t get_m_PlayerId_15() const { return ___m_PlayerId_15; }
	inline int16_t* get_address_of_m_PlayerId_15() { return &___m_PlayerId_15; }
	inline void set_m_PlayerId_15(int16_t value)
	{
		___m_PlayerId_15 = value;
	}

	inline static int32_t get_offset_of_m_NetworkBehaviours_16() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_NetworkBehaviours_16)); }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* get_m_NetworkBehaviours_16() const { return ___m_NetworkBehaviours_16; }
	inline NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB** get_address_of_m_NetworkBehaviours_16() { return &___m_NetworkBehaviours_16; }
	inline void set_m_NetworkBehaviours_16(NetworkBehaviourU5BU5D_tA321D64478B9213228935C52651EBFA3E352C7CB* value)
	{
		___m_NetworkBehaviours_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NetworkBehaviours_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ObserverConnections_17() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ObserverConnections_17)); }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * get_m_ObserverConnections_17() const { return ___m_ObserverConnections_17; }
	inline HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E ** get_address_of_m_ObserverConnections_17() { return &___m_ObserverConnections_17; }
	inline void set_m_ObserverConnections_17(HashSet_1_tD16423F193A61077DD5FE7C8517877716AAFF11E * value)
	{
		___m_ObserverConnections_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObserverConnections_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Observers_18() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Observers_18)); }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * get_m_Observers_18() const { return ___m_Observers_18; }
	inline List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D ** get_address_of_m_Observers_18() { return &___m_Observers_18; }
	inline void set_m_Observers_18(List_1_t7A006745EA41BB1EE354777CCAE13C252BF8240D * value)
	{
		___m_Observers_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Observers_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClientAuthorityOwner_19() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_ClientAuthorityOwner_19)); }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * get_m_ClientAuthorityOwner_19() const { return ___m_ClientAuthorityOwner_19; }
	inline NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA ** get_address_of_m_ClientAuthorityOwner_19() { return &___m_ClientAuthorityOwner_19; }
	inline void set_m_ClientAuthorityOwner_19(NetworkConnection_t56E90DAE06B07A4A3233611CC9C0CBCD0A1CAFBA * value)
	{
		___m_ClientAuthorityOwner_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClientAuthorityOwner_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Reset_20() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B, ___m_Reset_20)); }
	inline bool get_m_Reset_20() const { return ___m_Reset_20; }
	inline bool* get_address_of_m_Reset_20() { return &___m_Reset_20; }
	inline void set_m_Reset_20(bool value)
	{
		___m_Reset_20 = value;
	}
};

struct NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity_ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * ___clientAuthorityCallback_23;

public:
	inline static int32_t get_offset_of_s_NextNetworkId_21() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_NextNetworkId_21)); }
	inline uint32_t get_s_NextNetworkId_21() const { return ___s_NextNetworkId_21; }
	inline uint32_t* get_address_of_s_NextNetworkId_21() { return &___s_NextNetworkId_21; }
	inline void set_s_NextNetworkId_21(uint32_t value)
	{
		___s_NextNetworkId_21 = value;
	}

	inline static int32_t get_offset_of_s_UpdateWriter_22() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___s_UpdateWriter_22)); }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * get_s_UpdateWriter_22() const { return ___s_UpdateWriter_22; }
	inline NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 ** get_address_of_s_UpdateWriter_22() { return &___s_UpdateWriter_22; }
	inline void set_s_UpdateWriter_22(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * value)
	{
		___s_UpdateWriter_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateWriter_22), (void*)value);
	}

	inline static int32_t get_offset_of_clientAuthorityCallback_23() { return static_cast<int32_t>(offsetof(NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_StaticFields, ___clientAuthorityCallback_23)); }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * get_clientAuthorityCallback_23() const { return ___clientAuthorityCallback_23; }
	inline ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 ** get_address_of_clientAuthorityCallback_23() { return &___clientAuthorityCallback_23; }
	inline void set_clientAuthorityCallback_23(ClientAuthorityCallback_tB6533BDCE069DE0B5628A9BEE08EDCC76F373644 * value)
	{
		___clientAuthorityCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientAuthorityCallback_23), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void Unity.Collections.NativeArray`1<System.Byte>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m10759170BEA7F13303B632085DFD592DAAFEE231_gshared (Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Byte>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF4DF4DE60837606428F83E481E8EF84A230293CA_gshared (Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<System.Int32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m745B3A12570AACFCDE1307622F3396FDE2AA8F8D_gshared (Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Plane>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mADD0A13015FE0F89E19788C25891266CBAE839FB_gshared (Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Rendering.BatchVisibility>::.ctor(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m3F879D1B618BB9B9C6D136268C1274673907C88C_gshared (Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___other0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89 (void* ___memory0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Deallocate()
inline void NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_m10759170BEA7F13303B632085DFD592DAAFEE231 (Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A *, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))Enumerator__ctor_m10759170BEA7F13303B632085DFD592DAAFEE231_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Byte>::GetEnumerator()
inline Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 , const RuntimeMethod*))NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(System.Object)
inline bool NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Deallocate()
inline void NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<System.Int32>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_mF4DF4DE60837606428F83E481E8EF84A230293CA (Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 *, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))Enumerator__ctor_mF4DF4DE60837606428F83E481E8EF84A230293CA_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
inline Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42 (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021 (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014 (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF , const RuntimeMethod*))NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(System.Object)
inline bool NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<System.Int32>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2 (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *, const RuntimeMethod*))NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Deallocate()
inline void NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Dispose()
inline void NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50 (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_m745B3A12570AACFCDE1307622F3396FDE2AA8F8D (Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 *, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))Enumerator__ctor_m745B3A12570AACFCDE1307622F3396FDE2AA8F8D_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetEnumerator()
inline Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54 (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6 (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE , const RuntimeMethod*))NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(System.Object)
inline bool NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *, const RuntimeMethod*))NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Deallocate()
inline void NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Dispose()
inline void NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Plane>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_mADD0A13015FE0F89E19788C25891266CBAE839FB (Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 *, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))Enumerator__ctor_mADD0A13015FE0F89E19788C25891266CBAE839FB_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetEnumerator()
inline Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 , const RuntimeMethod*))NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(System.Object)
inline bool NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124 (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *, const RuntimeMethod*))NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Deallocate()
inline void NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Dispose()
inline void NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.Rendering.BatchVisibility>::.ctor(Unity.Collections.NativeArray`1<T>&)
inline void Enumerator__ctor_m3F879D1B618BB9B9C6D136268C1274673907C88C (Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * ___array0, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 *, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))Enumerator__ctor_m3F879D1B618BB9B9C6D136268C1274673907C88C_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetEnumerator()
inline Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58 (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1 (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1_gshared)(__this, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.IEnumerable.GetEnumerator()
inline RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00 (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(Unity.Collections.NativeArray`1<T>)
inline bool NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8 (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 , const RuntimeMethod*))NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8_gshared)(__this, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(System.Object)
inline bool NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, RuntimeObject *, const RuntimeMethod*))NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D_gshared)(__this, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetHashCode()
inline int32_t NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *, const RuntimeMethod*))NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * ___type0, RuntimeObject * ___firstArgument1, MethodInfo_t * ___method2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091 (Delegate_t * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mBBBDCD9B8641C1CFC6DBF22778AD399D5325D90A (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387 (String_t* ___fmt0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.Match.Response::SetFailure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4 (Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 * __this, String_t* ___info0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.LogFilter::get_logError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Boolean UnityEngine.Networking.NetworkIdentity::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4 (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, int16_t ___msgType0, const RuntimeMethod* method);
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1 (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___contextObj0, NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * ___writer1, int32_t ___channelId2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkBehaviour::get_isClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * __this, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9 (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * __this, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mB97E1CE732F7A08D8F45C86B8994FB67222C99E7 (bool* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mBE9097707986D98549AC11E94FB986DA1AB3E16C (int32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16 (float* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.UInt32::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_m7C492DEA967BE62634741CD342B3DF765C125C92_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_m7C492DEA967BE62634741CD342B3DF765C125C92_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<System.Byte>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NativeArray_1_get_Item_m015A14CD738DC3B584A365E56802B9C8EF3E5A4F_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		uint8_t L_2 = ((  uint8_t (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = (uint8_t)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		uint8_t L_3 = V_0;
		return (uint8_t)L_3;
	}
}
IL2CPP_EXTERN_C  uint8_t NativeArray_1_get_Item_m015A14CD738DC3B584A365E56802B9C8EF3E5A4F_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_mF1C6BF3046E10278E792475A2D457037C36B8B8A_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		uint8_t L_2 = ___value1;
		((  void (*) (void*, int32_t, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (uint8_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_mF1C6BF3046E10278E792475A2D457037C36B8B8A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(uint8_t, (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_mAF59D9BBB852315DF9338528F9D2F8BC0C069ECF((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	NativeArray_1_Dispose_m25DCDDB6DBFF92C0A7624D3765CEFF85BDDF2609(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<System.Byte>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m10759170BEA7F13303B632085DFD592DAAFEE231((&L_0), (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_1 = V_0;
		return (Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Byte>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m10759170BEA7F13303B632085DFD592DAAFEE231((&L_0), (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m219DF31D4BEAB2362DBEDD4A1C39A4E759792C30(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Byte>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_0 = NativeArray_1_GetEnumerator_mEBF0994E9CFCB8639DEE6CE7583A32741608682D((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		Enumerator_tFD280D3A93B8A4933CB606EA3043C9D886AF795A  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m4F7CBA09DD885DD778366D05EA8E05095012A6ED(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_mE56926AA2A26196FE1CD9A5021D8075546780FD0((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)__this, (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )((*(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_Equals_m4F6005ED0E30912FEE3B6C65D5E936AB9226EFCF(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<System.Byte>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * _thisAdjusted = reinterpret_cast<NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *>(__this + _offset);
	return NativeArray_1_GetHashCode_mDA88F866000235D50CE20A09E4333004FF6A68F0(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Collections.NativeArray`1<System.Int32>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_m5B34B05E14A452343C6A4F749F06237DA447707A_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_m5B34B05E14A452343C6A4F749F06237DA447707A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Item_m31A335092E43793581FEC36438068998D8FAE9F8_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		int32_t L_2 = ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = (int32_t)L_2;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Item_m31A335092E43793581FEC36438068998D8FAE9F8_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_mC608E2D5A7A043DF2C7B838DCBB106C14B048703_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		int32_t L_2 = ___value1;
		((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_mC608E2D5A7A043DF2C7B838DCBB106C14B048703_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_m56CC5E40643CC29A7A06BD4897B61FDA9A769CCD((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	NativeArray_1_Dispose_m327F8C56C1CD08FEB1D21131273EE1E12221097F(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF4DF4DE60837606428F83E481E8EF84A230293CA((&L_0), (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_1 = V_0;
		return (Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mF4DF4DE60837606428F83E481E8EF84A230293CA((&L_0), (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEA9ABF6CC842091244946FD3D1FAE594B4B38021(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_0 = NativeArray_1_GetEnumerator_mA5F7CB0F3E39FE64915F04312B42FF12DA58DD42((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		Enumerator_t4302E76CC39AD357E3B45A5154FB9B8FD6A60B77  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m3047DCD28421B719B6BE998B1F35BDF0AFBF34DF(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014_AdjustorThunk (RuntimeObject * __this, NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_mE8296529FB09789F7E44A56DB4BE3A073D8DD014((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)__this, (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )((*(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)((NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_Equals_m3F403D6E8CA0BB2ED1DF694A2FDC751C472BB14C(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<System.Int32>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2_gshared (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF * _thisAdjusted = reinterpret_cast<NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF *>(__this + _offset);
	return NativeArray_1_GetHashCode_m0EBFF649208C5065C53B1A6FEBAA98AE9B2130D2(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_m800248C85167C71ECAC916ADEFBF13CD916066B6_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_m800248C85167C71ECAC916ADEFBF13CD916066B6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  NativeArray_1_get_Item_m0B9DBB5E1333775CFFC63C4B23F9B55EA1FE2861_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_2 = ((  LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = (LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 )L_2;
		goto IL_0010;
	}

IL_0010:
	{
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_3 = V_0;
		return (LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 )L_3;
	}
}
IL2CPP_EXTERN_C  LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  NativeArray_1_get_Item_m0B9DBB5E1333775CFFC63C4B23F9B55EA1FE2861_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 , (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m62D898551E928EB6FFF09A22D1163D112F1946AC_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, int32_t ___index0, LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_2 = ___value1;
		((  void (*) (void*, int32_t, LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_m62D898551E928EB6FFF09A22D1163D112F1946AC_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 , (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_m3DD74741802D3407669B21C8017704B52DFD6FCB((NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	NativeArray_1_Dispose_m048A711831A09F2EE9DF22093BED6E375B009D50(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m745B3A12570AACFCDE1307622F3396FDE2AA8F8D((&L_0), (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_1 = V_0;
		return (Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m745B3A12570AACFCDE1307622F3396FDE2AA8F8D((&L_0), (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B48CC800DE6ED5ED20CC1EE45EA1105130F992A(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_0 = NativeArray_1_GetEnumerator_m79AB8A70BEADFB890979D4B68891A41CB87EAF54((NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		Enumerator_tEBE371CA7DCA93914BC9E05BAA9CC459CF0C2231  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m66C0D3FCD8B68E120CC5AF3BEF1E216E4D79D8F6(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_m6F7964E6234A2A35D649921C99CD8D3B8D66BCAB((NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)__this, (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )((*(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)((NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_Equals_mA2348130767E99FA8AF518FFE35AA90F2D4A8C4F(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E_gshared (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE * _thisAdjusted = reinterpret_cast<NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE *>(__this + _offset);
	return NativeArray_1_GetHashCode_mD9531E2D037A5A6CD724870EAC0CC84967A09E3E(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Plane>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mCB5C7A1BFB69BBB7E7707481AB3110B621206B50_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_mCB5C7A1BFB69BBB7E7707481AB3110B621206B50_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<UnityEngine.Plane>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  NativeArray_1_get_Item_mAFC970464EECD85AF110B53715090E85A05B347B_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_2 = ((  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED )L_2;
		goto IL_0010;
	}

IL_0010:
	{
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_3 = V_0;
		return (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED )L_3;
	}
}
IL2CPP_EXTERN_C  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  NativeArray_1_get_Item_mAFC970464EECD85AF110B53715090E85A05B347B_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED , (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m78EAECACE98B16FC868A09663B25C95C14CD85FA_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, int32_t ___index0, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_2 = ___value1;
		((  void (*) (void*, int32_t, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_m78EAECACE98B16FC868A09663B25C95C14CD85FA_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED , (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Plane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_mC4634919ADB54929CF0CA63C41047A2A2A3B0130((NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	NativeArray_1_Dispose_mFE6BEE407319CA5D61E76FD4780700DE6D7977D7(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mADD0A13015FE0F89E19788C25891266CBAE839FB((&L_0), (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_1 = V_0;
		return (Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mADD0A13015FE0F89E19788C25891266CBAE839FB((&L_0), (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA592F7AB8A082A094A950F50FAB5483AD36D5092(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Plane>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_0 = NativeArray_1_GetEnumerator_mF7A86CBB64034BDF9F6535E60A741032A941AA13((NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		Enumerator_t2940B78ACDDF08E3D0DA814968616785F5F2A476  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m30BEBE3E108DCC8E13410E84444803AA0E6ED0F2(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Plane>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_mFED7D3F0B5152A1753932FE5664C9514616D99CD((NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)__this, (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )((*(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)((NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_Equals_m2BBC5D3CE47C9245067CA4C7B283B867C838D550(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Plane>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124_gshared (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 * _thisAdjusted = reinterpret_cast<NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 *>(__this + _offset);
	return NativeArray_1_GetHashCode_m4A917201547DDEBE9B86E45B1FC25E7D3E197124(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_m3A0052C6594569525A78DF2B25B6F3B2039761D5_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Length_1();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_get_Length_m3A0052C6594569525A78DF2B25B6F3B2039761D5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_LENGTH((_thisAdjusted)->___m_Length_1);
}
// T Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  NativeArray_1_get_Item_m33D61F31F1DCC2343DD4A05F6A58E1A58329809A_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_2 = ((  BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  (*) (void*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		V_0 = (BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 )L_2;
		goto IL_0010;
	}

IL_0010:
	{
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_3 = V_0;
		return (BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 )L_3;
	}
}
IL2CPP_EXTERN_C  BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  NativeArray_1_get_Item_m33D61F31F1DCC2343DD4A05F6A58E1A58329809A_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return IL2CPP_NATIVEARRAY_GET_ITEM(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 , (_thisAdjusted)->___m_Buffer_0, ___index0);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m3B075DFF037E94E3907B24D7F663E71E527AAB46_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, int32_t ___index0, BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  ___value1, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = ___index0;
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_2 = ___value1;
		((  void (*) (void*, int32_t, BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1)->methodPointer)((void*)(void*)L_0, (int32_t)L_1, (BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 )L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_set_Item_m3B075DFF037E94E3907B24D7F663E71E527AAB46_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	IL2CPP_NATIVEARRAY_SET_ITEM(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 , (_thisAdjusted)->___m_Buffer_0, ___index0, ___value1);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Deallocate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_AllocatorLabel_2();
		UnsafeUtility_Free_mAC082BB03B10D20CA9E5AD7FBA33164DF2B52E89((void*)(void*)L_0, (int32_t)L_1, /*hidden argument*/NULL);
		__this->set_m_Buffer_0((void*)(((uintptr_t)0)));
		__this->set_m_Length_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B(_thisAdjusted, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	{
		NativeArray_1_Deallocate_mB2A50C391F36F0CE75E73295439A0AA1A9ED204B((NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C  void NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	NativeArray_1_Dispose_m5B00E298CFED050CFC9782D591635BD1F8FAEBEE(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1_Enumerator<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F879D1B618BB9B9C6D136268C1274673907C88C((&L_0), (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		V_0 = (Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 )L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_1 = V_0;
		return (Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4 )L_1;
	}
}
IL2CPP_EXTERN_C  Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58(_thisAdjusted, method);
}
// System.Collections.Generic.IEnumerator`1<T> Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m3F879D1B618BB9B9C6D136268C1274673907C88C((&L_0), (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mC5DA92C20B04EDBAFE1386645BB4DB19A027F0D1(_thisAdjusted, method);
}
// System.Collections.IEnumerator Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_0 = NativeArray_1_GetEnumerator_m27D9B24897EF4162142131BB5716CE0BD1419E58((NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		Enumerator_tBF1321662B82066F185005E1E61FA61D9631CDF4  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3), &L_1);
		V_0 = (RuntimeObject*)L_2;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_3 = V_0;
		return (RuntimeObject*)L_3;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_System_Collections_IEnumerable_GetEnumerator_m581440C925682E6715347BDEDABBFF000C286F00(_thisAdjusted, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_1 = ___other0;
		void* L_2 = (void*)L_1.get_m_Buffer_0();
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = (int32_t)__this->get_m_Length_1();
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = ___other0;
		int32_t L_5 = (int32_t)L_4.get_m_Length_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8_AdjustorThunk (RuntimeObject * __this, NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8(_thisAdjusted, ___other0, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject * L_3 = ___obj0;
		bool L_4 = NativeArray_1_Equals_mA8F02AC4F225693A189A5E19092CBB3CF990E6E8((NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)__this, (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )((*(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)((NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *)UnBox(L_3, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 6))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		G_B5_0 = ((int32_t)(L_4));
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_Equals_mCDD06EECF4EC9621B9D4655821AF412778729F5D(_thisAdjusted, ___obj0, method);
}
// System.Int32 Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E_gshared (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		void* L_0 = (void*)__this->get_m_Buffer_0();
		int32_t L_1 = (int32_t)__this->get_m_Length_1();
		V_0 = (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)(((int32_t)((int32_t)(intptr_t)L_0))), (int32_t)((int32_t)397)))^(int32_t)L_1));
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
IL2CPP_EXTERN_C  int32_t NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 * _thisAdjusted = reinterpret_cast<NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 *>(__this + _offset);
	return NativeArray_1_GetHashCode_mE18F0ED5D0D2E83FE8987508F588B663762C892E(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mA3C18A22B57202EE83921ED0909FCB6CD4154409_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, bool ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m5B12C225C3222632C784AB1B9E4D72AA44FF16D0_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Boolean>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mD178E9486AB5CE271209EDFFB7B585BCFC3540F3_gshared (CachedInvokableCall_1_tD9D6B42DED8777941C4EE375EDB67DF2B8F445D7 * __this, bool ___arg00, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (bool)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m356112807416B358ED661EBB9CF67BCCE0B19394_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, int32_t ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mE6AF058DE940B099197112058811BCCDE75A9ACC_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m11A4EA149C8447CBE9342AE0794B7ECC733C6319_gshared (CachedInvokableCall_1_t6BEFF8A9DE48B8E970AE15346E7DF4DE5A3BADB6 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_mB15077A11BD14A961B3E106B55FA77B468269505_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, RuntimeObject * ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m2B24B497363472EE321923536ED3F9EC155764D7_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m00E6F009BC9A2005BBF11A5E905CB25FEA4BE367_gshared (CachedInvokableCall_1_tF7F1670398EB759A3D4AFEB35F47850DCD7D00AD * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1__ctor_m208307DC945B843624A47886B3AB95A974528DB6_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___target0, MethodInfo_t * ___theFunction1, float ___argument2, const RuntimeMethod* method)
{
	{
		Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_2 = ___argument2;
		__this->set_m_Arg1_1(L_2);
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_m02CB2404196A61986E0CBD8DADC2A635CC4FADE1_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return;
	}
}
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CachedInvokableCall_1_Invoke_mCE251DA79E23FF9DA0D0FD7FD9939488748907A5_gshared (CachedInvokableCall_1_t853CA34F3C49BD37B91F7733304984E8B1FDEF0A * __this, float ___arg00, const RuntimeMethod* method)
{
	{
		float L_0 = (float)__this->get_m_Arg1_1();
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (float)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m4E82F43967A7055293BFFED4E5F61243811A64FD_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_2 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_2;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_5, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m7CDAE49CF684DAF1D43E52D254A87D0D212DD3D8_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_0 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_1 = NULL;
	UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * V_2 = NULL;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0;
	}

IL_0007:
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_1 = V_0;
		V_1 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC ** L_5 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)__this->get_address_of_Delegate_0();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = V_2;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_7 = V_1;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *>((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC **)L_5, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_6, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_7);
		V_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_8;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = V_0;
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9) == ((RuntimeObject*)(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD592EB69D1FB0A9CF5AB24ED4C76E3BE3AD2F91E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m6B758D360877DD24606999DB8F603F4CA2EC6F80_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB *)__this, (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_mD853B78F92A849FE113AE5A310944708C59AB2B0_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_6 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_9 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_9, (bool)((*(bool*)((bool*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Boolean>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m604D33CCBE0C77896F73A6055B71E0621C933B2F_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, bool ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		bool L_4 = ___args00;
		((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Boolean>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m1E75C7EC325D570FDA089492841E90F9268C23B9_gshared (InvokableCall_1_t6BD1F5F651D0A87B8D70001680F43294771251CB * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_0 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_3 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE3BB48BDA767C8D30DCBBDF05E6FEA3BAEDE250_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_2 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_5 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_2;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_5, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mF1D0E0E38759A51DECAAF3161E33308F93DED24F_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_0 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_1 = NULL;
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * V_2 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_1 = V_0;
		V_1 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** L_5 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)__this->get_address_of_Delegate_0();
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = V_2;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_7 = V_1;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *>((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F **)L_5, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_6, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_7);
		V_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_8;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = V_0;
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9) == ((RuntimeObject*)(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m1BF8BFBAE0C6EF1B38DC415ABDD2BB4E583CBA6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m5FFF6B89AD1D4AE06939C3B82377B4AF048C1817_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)__this, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_m48AB6731BEF540A6B1F23189413840859F56D212_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_6 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_9 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_9, (int32_t)((*(int32_t*)((int32_t*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m738E6C677B8DD40E3E708C81B8354EA85AEFFB04_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, int32_t ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		int32_t L_4 = ___args00;
		((  void (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m61994A78233EE8233DBAA7B6912E18829A09B150_gshared (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_3 = (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m092F0A272D937E03EB590E19DC2F2B788961018F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m2ABA630C73B024EB3A47100C48B91D1BE75C117C_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m476D3C83264B8980782F15E2A538B679279F61A1_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD81223A0EAE1E7988803B8F92DB9090ECFA259FE_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		RuntimeObject * L_4 = ___args00;
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_mB3AD5A37531368D7FC5F37AD22993EE25951B71F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE30AB74153DFEDBDAAC58B591F3E428C728AE0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mC3043D0ED54DD94A81FDC076B97C12CC0D9A16F5_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m67D765DB693A73CCBB66BD79C6A05E92B006B19E_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9, (float)((*(float*)((float*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m02605F267CE1A72199776BF4E08D4C81A08DF499_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, float ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		float L_4 = ___args00;
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m5F8CC01C8996F78D450562A0A4B128DA2D4E3A0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_9 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_10 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_9, /*hidden argument*/NULL);
		V_1 = (bool)L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_12 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___args0;
		int32_t L_14 = 0;
		RuntimeObject * L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		int32_t L_17 = 1;
		RuntimeObject * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_12, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0056:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m26B7D50B1D4203B1E9539D5BE727050009CDBEA5_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_12 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		bool L_13 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_12, /*hidden argument*/NULL);
		V_1 = (bool)L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_15 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		int32_t L_17 = 0;
		RuntimeObject * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		int32_t L_20 = 1;
		RuntimeObject * L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		int32_t L_23 = 2;
		RuntimeObject * L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		((  void (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_15, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0067:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_mC8983BEEB7D91A851B167DA159F31647EF0FD7CE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = ___args0;
		int32_t L_13 = 3;
		RuntimeObject * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_15 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		bool L_16 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_15, /*hidden argument*/NULL);
		V_1 = (bool)L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_18 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		int32_t L_20 = 0;
		RuntimeObject * L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		int32_t L_23 = 1;
		RuntimeObject * L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = ___args0;
		int32_t L_26 = 2;
		RuntimeObject * L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = ___args0;
		int32_t L_29 = 3;
		RuntimeObject * L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		((  void (*) (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_18, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_27, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_30, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0078:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m31A9DD32912CC3F597F67C5B123F65D8D83BCB55_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_0 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_3 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return (bool)L_7;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2E86E0D0DEBECD002A246E5E15032AD5C31D573B_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m6BDDE2C02C9B1B969AF9C8E3283A99EDF725308E_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03E7697F347F98D3FD8952EC0CE1A714D1FA20BB_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFA3B154991DCD05A05EEF0F8A4ADD01D48BF5F74_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m57B06346DBA8E9878C2A3589AB5F4AACDF0BD1BD_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mC40753D8C3D37080677F4956B214A840380FF011_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2C1F34094D739A035851500EBC9355B92734EAC8_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m0E6F26B70A39427E3FF824D0C1A2B4A05DC93781_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m8A8457E16443B452AC53C84F32402BAC6B93E6FF_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFC7714F2FF67E4A6A886734EF21DB0CEC8D92083_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m23BC5C707027B6C49AE29FB21A4F9F9F0CA72648_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03AE0A9995BF8D246D2317542428D220C55160B9_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35B0A0067C115007E10FBD8E008AE5A04F766BC7_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m28278C6E83173B3BC3CBC240F14DD94D721E78C2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1B23318369E0A45239A06ACB2AEF27BB6AF8B3A2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mF4DB369856F884CA526A897CB6E86FE396844206_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m06DA8061B2E6984DD80B43D6080FC181B3231267_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mCF4D420D2E1AE5C6A9CBDA25C21702141DF45B40_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4C1A8B33A480934E69D745B3A99F88E761BF16E2_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7A6442C74537CB34212426734073E9DBE87E7FE5_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mADF341B796508D58BEDF95CC8C087F2827F5105D_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4D471FEA8177D598ED108C5B2A9A35687D439D09_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mDC07A3AA1306CA33C495D2954233DBB9B3BB6A04_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m4E5A5335E63C942B335D047296080EB8DA73FB99_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_mAF3A961DD4A745EB47F2C7056216F11449C74F82_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mD65DD6F2A7160759B11B9E9402E42889B0308B7C_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m4CC353FB62BF2996DDB0BDE4B517D4CBAB1388B2_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
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
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_mF0A7FADCA696D28F879DBE8BB21E0107020310CB_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m40F664442966F777B243BE41660DF4D97FCF9A24_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, ___arg33, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
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
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, ___arg33, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8802189BD39CB9C93447909FF521F9AF7EC2307B_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_24 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_24, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_28 = V_0;
		int32_t L_29 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_28, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return (MethodInfo_t *)L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m146206128006F3071AEC91A73E3DDFDC34A53F2D_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return (MethodInfo_t *)L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return (MethodInfo_t *)L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return (MethodInfo_t *)L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_3;
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
// System.Void UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessMatchResponseU3Ed__26_2__ctor_mDB21832A419181177F1134EE971089F9FC77F933_gshared (U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CProcessMatchResponseU3Ed__26_2_System_IDisposable_Dispose_m309478010F66533B61C0FC8A3D81737B8EA01AEA_gshared (U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CProcessMatchResponseU3Ed__26_2_MoveNext_m068F73E5349787BD74987099D357673D16A4C8ED_gshared (U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CProcessMatchResponseU3Ed__26_2_MoveNext_m068F73E5349787BD74987099D357673D16A4C8ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B11_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->get_U3CU3E1__state_0();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_3 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_4 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003a:
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject * L_5 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		__this->set_U3CjsonInterfaceU3E5__1_6(L_5);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		bool L_7 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0069;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_8 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		bool L_9 = UnityWebRequest_get_isHttpError_m8F636B70C239EC848FACC83189DE0C22CADEC1C3((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_8, /*hidden argument*/NULL);
		G_B11_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B11_0 = 0;
	}

IL_006a:
	{
		V_1 = (bool)G_B11_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00d2;
		}
	}
	{
	}

IL_006f:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_12 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_11, /*hidden argument*/NULL);
		String_t* L_13 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_12, /*hidden argument*/NULL);
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E5__1_6();
		JsonUtility_FromJsonOverwrite_mBBBDCD9B8641C1CFC6DBF22778AD399D5325D90A((String_t*)L_13, (RuntimeObject *)L_14, /*hidden argument*/NULL);
		goto IL_00cf;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0094;
		throw e;
	}

CATCH_0094:
	{ // begin catch(System.ArgumentException)
		V_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)((ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)__exception_local);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_15 = V_2;
		__this->set_U3CexceptionU3E5__2_7(L_15);
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E5__1_6();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17;
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_19 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)__this->get_U3CexceptionU3E5__2_7();
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_19);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_20);
		String_t* L_21 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387((String_t*)_stringLiteralBF59C8E6CEE45F36DB6254667EE895B2731A0750, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_18, /*hidden argument*/NULL);
		Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)L_16, (String_t*)L_21, /*hidden argument*/NULL);
		goto IL_00cf;
	} // end catch (depth: 1)

IL_00cf:
	{
		goto IL_0116;
	}

IL_00d2:
	{
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E5__1_6();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_25 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		String_t* L_26 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_25, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_24;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_28 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_29 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_28, /*hidden argument*/NULL);
		String_t* L_30 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)L_29, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		String_t* L_31 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387((String_t*)_stringLiteral22AC1B9DAB1A5A272FEBD04091C310E3D95A6989, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_27, /*hidden argument*/NULL);
		Response_SetFailure_mBCE3605B454161D3F467F8BDA85B2BE7F02995B4((Response_tE3D1110D7F08CC65754EE4BF0F780D24FEB37742 *)L_22, (String_t*)L_31, /*hidden argument*/NULL);
	}

IL_0116:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_32 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)__this->get_client_2();
		UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)L_32, /*hidden argument*/NULL);
		InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * L_33 = (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *)__this->get_internalCallback_3();
		RuntimeObject * L_34 = (RuntimeObject *)__this->get_U3CjsonInterfaceU3E5__1_6();
		RuntimeObject * L_35 = (RuntimeObject *)__this->get_userCallback_4();
		((  void (*) (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 *)L_33, (RuntimeObject *)L_34, (RuntimeObject *)L_35, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessMatchResponseU3Ed__26_2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFAD24400C3808216037AEA5FC56D14DB459A54AB_gshared (U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return (RuntimeObject *)L_0;
	}
}
// System.Object UnityEngine.Networking.Match.NetworkMatch_<ProcessMatchResponse>d__26`2<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CProcessMatchResponseU3Ed__26_2_System_Collections_IEnumerator_get_Current_mE436661C4C99027B58196699F45A3AF2D7A82D87_gshared (U3CProcessMatchResponseU3Ed__26_2_t00C49EB1AC9C4C46700C54D31FBFD148662306BF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CU3E2__current_1();
		return (RuntimeObject *)L_0;
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
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1__ctor_m2A66AA4D10565DC95B7191AF04527E59DA840C6C_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::Invoke(System.Boolean,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1_Invoke_mD39A9B6892C634627056033A4539978573E0E14A_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, bool ___success0, String_t* ___extendedInfo1, RuntimeObject * ___responseData2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, ___extendedInfo1, ___responseData2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, ___responseData2, targetMethod);
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
						GenericInterfaceActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1, ___responseData2);
					else
						GenericVirtActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(targetMethod, targetThis, ___success0, ___extendedInfo1, ___responseData2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0, ___extendedInfo1, ___responseData2);
					else
						VirtActionInvoker3< bool, String_t*, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0, ___extendedInfo1, ___responseData2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___success0) - 1), ___extendedInfo1, ___responseData2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, String_t*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, ___extendedInfo1, ___responseData2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::BeginInvoke(System.Boolean,System.String,T,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, bool ___success0, String_t* ___extendedInfo1, RuntimeObject * ___responseData2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataResponseDelegate_1_BeginInvoke_mDF10224CF1CB08DFD4E2398664E3C7ED5EEAE168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___success0);
	__d_args[1] = ___extendedInfo1;
	__d_args[2] = ___responseData2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_DataResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataResponseDelegate_1_EndInvoke_m9C066D95E3BF16CE510944FA4764A3F05BFC5033_gshared (DataResponseDelegate_1_t26170CF2105600AC9B412E932EB4103D80D763C1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2__ctor_mB5F4D02C91141D2EEDEB55BCC5144759806D70AE_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::Invoke(T,U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2_Invoke_m10B2EFB27CFBB2AC4BE12F55CF451B863D3BE395_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___response0, RuntimeObject * ___userCallback1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, ___userCallback1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___response0, ___userCallback1);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___response0, ___userCallback1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___response0, ___userCallback1);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___response0, ___userCallback1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___userCallback1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___response0, ___userCallback1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___response0, ___userCallback1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___response0, ___userCallback1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___response0, ___userCallback1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___response0) - 1), ___userCallback1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___response0, ___userCallback1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___response0, ___userCallback1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::BeginInvoke(T,U,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalResponseDelegate_2_BeginInvoke_mBB25A661A61A16461BCB1B3413FE9C6D0828385F_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject * ___response0, RuntimeObject * ___userCallback1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___response0;
	__d_args[1] = ___userCallback1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.Match.NetworkMatch_InternalResponseDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalResponseDelegate_2_EndInvoke_m586B417F9D58E2BD8A1B83F26476F2CA28D8869B_gshared (InternalResponseDelegate_2_tA096DAC41C013FEB4017B65B26A3B13B2C9F51C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m5F8BF30B91A713FF13458695470D22459486B8EC_gshared (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_mF9921DD12E1C477D6A2F64D1B224FB0B951D505C_gshared (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m2A82DB72B70D7BE957769A683CCB939EA58A42D8_gshared (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m2A82DB72B70D7BE957769A683CCB939EA58A42D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_tAF7E4E7F5B99C35049BD5BA1224C52CF15F1D2D5_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m6053D8F07E693B026E6DC7BBFD78A3F7C904E389_gshared (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m3BE8032D074E0AD1AE755CF9776548362A03C3A3_gshared (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_mA92E300693BB8B0CFFDA753D283C509E352B4CBD_gshared (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m7AF849913200C9530C425F24DDD23AF7570C1AC8_gshared (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m7AF849913200C9530C425F24DDD23AF7570C1AC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_tD52C254604455280BBCD2C3F23F8AFA5BA756F84_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m3BD095A78D45FA4D02493FAB4C3CF207B7CBBC3B_gshared (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m9B9929A94EDECDC1178D38C20EECBE3CB0A30132_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_mE7FAF20F900143918CE5747EF2F362784C28FCA1_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m2EF257EC723A0596591A4431CBB0AF23557EBF60_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m2EF257EC723A0596591A4431CBB0AF23557EBF60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t1B75654F0759475B2C029E92A9B3C443D5D644C9_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m94BD85BD105E8DA0189141202948849037BB12E3_gshared (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_mE65312E6D0600AD05DA75583AC417488ED74BE4E_gshared (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m7F946D0426618406A66044BD31EDE8A24F06F67F_gshared (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_mCDA1EFAC9F2A08BE17981BBF05803A99003494E7_gshared (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_mCDA1EFAC9F2A08BE17981BBF05803A99003494E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t8297DBEBB31DE17FBA6F294DA35BE1F5F37AC315_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m5A09D5AFF54CFF5F9BD159CEA5177A363E510D94_gshared (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged__ctor_m7E8938A39806816BE8EC9B7E7B74EC21BC818BFB_gshared (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::Invoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_Invoke_m51BED04F79DBEEFE1F5D71E56DC23574BD7531AC_gshared (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___op0, ___itemIndex1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
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
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___op0, ___itemIndex1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___op0, ___itemIndex1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___op0, ___itemIndex1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___op0) - 1), ___itemIndex1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___op0, ___itemIndex1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::BeginInvoke(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncListChanged_BeginInvoke_m393C57E000F1F2642AD4F82BF758BB8689EA5552_gshared (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * __this, int32_t ___op0, int32_t ___itemIndex1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncListChanged_BeginInvoke_m393C57E000F1F2642AD4F82BF758BB8689EA5552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Operation_t7839B7BA805803FF180DD035BA3BDC66E36C8367_il2cpp_TypeInfo_var, &___op0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___itemIndex1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Networking.SyncList`1_SyncListChanged<System.UInt32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListChanged_EndInvoke_m325EB2095883B136BFF0215BB4E48C742D4FC003_gshared (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m8C5E1684E926239EC17FBD1D93A239ECF9633034_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_1 = ((  int32_t (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mC17DAC31153FEF1723FE2B2ED20FDEFD1F112466_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Boolean>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * SyncList_1_get_Callback_m5A67E66EA2E3449FE9AB9B1DEF6B473B8247A6E5_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_0 = (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)__this->get_m_Callback_3();
		return (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_mE3FE426DCC286527786906A917870B49405704F0_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mA44337CE4DA1213B90E85782A538949857C4064A_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m8B99383890BB5B65500081647ED28F94293E2C52_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___op0, int32_t ___itemIndex1, bool ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m8B99383890BB5B65500081647ED28F94293E2C52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		bool L_22 = ___item2;
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, bool >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (bool)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_33 = (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_34 = (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		((  void (*) (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mD70F8BB0A09BDA85920D7AECD3180F26C8550F10_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)L_0, (int32_t)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_mC3C79A45A748EB0768D6CA5385D09CB6985CAE51_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		bool L_5 = VirtFuncInvoker1< bool, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Boolean>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (bool)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_8 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_9 = V_2;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_10 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_11 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		bool L_13 = V_2;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_11, (int32_t)L_12, (bool)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_14 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_15 = V_2;
		((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_14, (bool)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_16 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_18 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		bool L_20 = V_2;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_18, (int32_t)L_19, (bool)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_21 = (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C * L_22 = (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		((  void (*) (SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t585E9BC2FE705690295531AA096BEFA7C205688C *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mDE909BCCF19B19DFDF1F892C523C378DFD744EBB_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m9E2063BBD7E2A37D341E3D688E8D9F8BDE03D80E_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_2 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_3 = ((  int32_t (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		bool L_4 = ___item0;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m45D10772E6E51CDC83E62CE5E188310F91BBE959_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m3FBCA9757C923EA1E3059C81813399AE1335DA75_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_mF204680515C04DC64C2B991FD3014912241E0C45_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mE3BFCDB3158AD6C20E3FF84288CB6E0114A8563F_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, bool ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		int32_t L_2 = ((  int32_t (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mB240CD0F1C399D4FA0516FAC99C478802328741E_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___index0, bool ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		bool L_2 = ___item1;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (int32_t)L_1, (bool)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		bool L_4 = ___item1;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)2, (int32_t)L_3, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m50AC0069350DADCF8476CA369AA5F3305EA1386C_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, bool ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		bool L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		bool L_4 = ___item0;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)3, (int32_t)0, (bool)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return (bool)G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m89B7A014172304552619AE4DFD77C36BF3F9B70C_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m138AD4B77451A56EA93A5A2209759B141E792F62_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_1 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		bool L_3 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)6, (int32_t)L_0, (bool)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_Item_m249479A75DA22BFEFC4BB24BFCA0AE2DCC6F1F1D_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		bool L_2 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m4B1F3B0B7EDF8B3ACAFE002AD2A7BA830EE133F3_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, int32_t ___i0, bool ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		bool L_2 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_4 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		bool L_6 = ((  bool (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (bool)L_6;
		bool L_7 = ___value1;
		bool L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Boolean_Equals_mB97E1CE732F7A08D8F45C86B8994FB67222C99E7((bool*)(bool*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_11 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		bool L_13 = ___value1;
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_11, (int32_t)L_12, (bool)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		bool L_16 = ___value1;
		((  void (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, int32_t, int32_t, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, (int32_t)5, (int32_t)L_15, (bool)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m2B0DB5FE96D8B6D30A553DAA5CFD812915F3881F_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)__this->get_m_Objects_0();
		Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  L_1 = ((  Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_mE8B1F404DCF5B2488D53C0D4F4C61558685B4505_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mAC80EA91B243EAD38D1FBBC9BF670A3C7D057D33_gshared (SyncList_1_t1430E336D803A92BF65736AEE7B1189185C898B9 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE * L_0 = (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t19FD9E99EF958D3D6E17E5C441DC4F57D73516FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mAB94B568B34D7F4B6F9F1976DA9824810A1B18E7_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m85C52B93F99A46902368C71836CB918B69BB382E_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Int32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * SyncList_1_get_Callback_mB9CAF22FA3FBB572725F20E83BC69AAEF5E6CEC1_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_0 = (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)__this->get_m_Callback_3();
		return (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_mC1418B5996B7F832BFBCC35F76104C7E2660DD6B_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m5E6D93DB935CCA85E564B365D769FF248E68D4B6_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mF05134C6C8E16CA49C17AD998C5A3DF66A8935A2_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___op0, int32_t ___itemIndex1, int32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_mF05134C6C8E16CA49C17AD998C5A3DF66A8935A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		int32_t L_22 = ___item2;
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, int32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (int32_t)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_33 = (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_34 = (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		((  void (*) (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mB20D1A6185FA33526CCF00D49E1892EB01996654_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m750A81980DA3B66F2F24260AED7447F99750BFA0_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		int32_t L_5 = VirtFuncInvoker1< int32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Int32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (int32_t)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_8 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_9 = V_2;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_10 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_11 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		int32_t L_13 = V_2;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11, (int32_t)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_15 = V_2;
		((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_16 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_18 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_18, (int32_t)L_19, (int32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_21 = (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD * L_22 = (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		((  void (*) (SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t95A16EAF70C9B36AFB18D32DE946DBB2978E83FD *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m7F6E7F283BAE849002650806458767BAD090B325_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m94C64CD6F4B5EE5F6A9686B51411D4104A9C8E3C_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_3 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		int32_t L_4 = ___item0;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m2D74D9A9C0ABDBBE2C0F5B81E15D93C218562BDE_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mC75881DDDED4734A55DDC2E801ACF9ECF9693522_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m3EEC481447911C1FE81BA34406143E781484C788_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m0DECB0DFF877326F5FD699EDDE6D27AC63C957FD_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mC42204ACFF140497B4503604C739335D8A9D034F_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___index0, int32_t ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		int32_t L_2 = ___item1;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		int32_t L_4 = ___item1;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mFAC8960AB8F242AE556E763DF09CF5D8EC467E6B_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		int32_t L_4 = ___item0;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)3, (int32_t)0, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return (bool)G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_mA2846B0E1277FC5490A74F044290C82B39ABE812_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_mCB02307FCD3F6EB644B5483A1E4AEA828C45EE06_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		int32_t L_3 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)6, (int32_t)L_0, (int32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Item_m55075881B8AE28B940B1626EC96CE5C9A8D8363D_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m66AAF7FD98336112FF3BD005A358FBC59C4D686B_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, int32_t ___i0, int32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		int32_t L_2 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_4 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		int32_t L_6 = ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (int32_t)L_6;
		int32_t L_7 = ___value1;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Int32_Equals_mBE9097707986D98549AC11E94FB986DA1AB3E16C((int32_t*)(int32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_11 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		int32_t L_13 = ___value1;
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_11, (int32_t)L_12, (int32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		int32_t L_16 = ___value1;
		((  void (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, (int32_t)5, (int32_t)L_15, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m01551145C8D9733BAA3F31DB67F9558F519F1503_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)__this->get_m_Objects_0();
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_1 = ((  Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t1A13F370EC7EA46EA20204D8881CCE685A3C348C  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_mD88989A47F42B82E2AAA9E8F87AE97F263422485_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m22D0DD54237563F57ACEBB9F0071C9E0406D892E_gshared (SyncList_1_tEEB01A93110A08077AAF5CB644C6B310A10736B4 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_0 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mDDB3745A70D8AB8302ACAD1EEB19E1AAEB441B91_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m9764997BE44D14E581256A6FB395269E8FACCCB4_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * SyncList_1_get_Callback_m20E24906A31F41D9F1937C600CBBE86301850994_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		return (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m1FE2DB3A33EDF7DEA75278C69828ED589FE64BD8_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m9E5233B6B3869707E0C95960BD03C9A7158BB360_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, RuntimeObject * ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m250726C663A41ABBC3797C19E695CC21D200ECEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		RuntimeObject * L_22 = ___item2;
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, RuntimeObject * >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Object>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (RuntimeObject *)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_33 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_34 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_mBBBAE26A0F85309D06F8FA716FA78F7F567A90D7_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m7F8AD633E6405A82303D80E9102F897BE5CA69C6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Object>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (RuntimeObject *)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_9 = V_2;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_10 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		RuntimeObject * L_13 = V_2;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_11, (int32_t)L_12, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_15 = V_2;
		((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (RuntimeObject *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_16 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_18 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		RuntimeObject * L_20 = V_2;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_18, (int32_t)L_19, (RuntimeObject *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_21 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 * L_22 = (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		((  void (*) (SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t579F5BD295BD6E7D36C957317106706184800643 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m4AA586E4EB7BFE218BE0BFCD4018CEF4A2FB1FA6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mE173FF64092798EAEF0C19527A494E830AB91C15_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject * L_4 = ___item0;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mFE2457D2BABDC536E39BCB3A784926573611E4E6_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mE9925F7E61DE2C0F3508C8CFE9918DECB7883A1A_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m32CDC644CD385320FE4A88DC1D6D97AFAC4E2B6D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mEAAF5318DE88AC6687DAC665C3694AED59B9277D_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		int32_t L_2 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_m8EB3A1E1ED19516ACE719F34D90E8CC9BBF3C7EF_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___item1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = ___item1;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)2, (int32_t)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m37B3302E3190BC679FBD06A44D87896BD8F00C09_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		RuntimeObject * L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		RuntimeObject * L_4 = ___item0;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)3, (int32_t)0, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return (bool)G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m8048DD22538A1E3F543C3D7A06C8418C377887A9_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m2B49962EC74E2287446B0C982ED048B12B13A39C_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)6, (int32_t)L_0, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SyncList_1_get_Item_m57B77B62E54F2CCB1907379E651EFB95CCF748AE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (RuntimeObject *)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_mE10812F910EBBACCF6A3461B7EFD2FD9B4E9D874_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, int32_t ___i0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		RuntimeObject * L_2 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (value == null)
		RuntimeObject * L_3 = ___value1;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (RuntimeObject *)L_6;
		RuntimeObject * L_7 = ___value1;
		bool L_8 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(V_1), (RuntimeObject *)L_7);
		V_0 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_9 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		int32_t L_10 = ___i0;
		RuntimeObject * L_11 = ___value1;
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_9, (int32_t)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_12 = V_0;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_13 = ___i0;
		RuntimeObject * L_14 = ___value1;
		((  void (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, (int32_t)5, (int32_t)L_13, (RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m3D928CBF99237EEF31163BF55C886673E18A9CAE_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)__this->get_m_Objects_0();
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_1 = ((  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m70D70E97406458CD44D17ABD5CEC771CC1E413C0_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m193925AC0DC6CD416CDFCB25F0C50F219D2DC490_gshared (SyncList_1_tFA9D6F35F070FCE897ECE22F40BECD929C239B47 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mE6D989EF63944773A0C8963CB0D258C1E0EB27EA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_mB2AB79D68D93AAD00E1F8443308AED727DB20F07_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * SyncList_1_get_Callback_m6AFC36CC469E5D3CC16C969C9FD8CEB7971625B7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		return (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m2F2B7CDEFA7D37ECEB981B62D944073DE010A812_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_m79D617273D080282A3EDE963553F109F014A4894_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, float ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m7911B99A1DE0F3037B8B33EC4DD31AE6783E0AFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		float L_22 = ___item2;
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, float >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.Single>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (float)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_33 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_34 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m65B07DCAE32D55A117BC804C437BB05DC7B0CFE3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(float));
		float L_2 = V_0;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m056C4D8FF7378B3197458797EDD10EC030B09D45_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		float L_5 = VirtFuncInvoker1< float, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.Single>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (float)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_8 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_9 = V_2;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_8, (float)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_10 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		float L_13 = V_2;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_14 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_15 = V_2;
		((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_14, (float)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_16 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_18 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		float L_20 = V_2;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_18, (int32_t)L_19, (float)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_21 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 * L_22 = (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		((  void (*) (SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_t66D958CFA1D593AB94F12EA276A3757222E2DA59 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mCD26D99DCC66569C81313168C2887AE45AA5099E_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_mA1DB0248A3DBE9F01EFADBEEC45E4356BEAEF4D3_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_2 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_3 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		float L_4 = ___item0;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m40B9DB3EEC6D28BE8C960A373BC2D618672D7BE7_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_m89669E45649CC81A778AA607F2BE1B059931B6AA_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_m3F5C626CD476A8FBA3C418A529C4BC2C0E1C7046_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_mF2C2F81E318206B047F98F9F27FFBF691BBD24C5_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		int32_t L_2 = ((  int32_t (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mF9C9216B27ED33E16C6F563B62EF39509E25508A_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, float ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		float L_2 = ___item1;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, (float)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		float L_4 = ___item1;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)2, (int32_t)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_m2B6A1D2327947DEDBE61FFF41BBA593717A9E9C4_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, float ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		float L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (float)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		float L_4 = ___item0;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)3, (int32_t)0, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return (bool)G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m0377FF1A27E91CB0AAF5102A1525CE28856A1FB9_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m28A7A063F9A8D4056900C009E13C249502C54311_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_1 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		float L_3 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)6, (int32_t)L_0, (float)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_mFC231403EC08B98E4891CAD8681AA325E4248B92_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (float)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m4042501A69B9BE095B4A3656263D730881628D48_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, int32_t ___i0, float ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		float L_2 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_4 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		float L_6 = ((  float (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (float)L_6;
		float L_7 = ___value1;
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = Single_Equals_mF4C7AEA9D216B3C9CB735BF327D07BF50F101A16((float*)(float*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_11 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		float L_13 = ___value1;
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_11, (int32_t)L_12, (float)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		float L_16 = ___value1;
		((  void (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, int32_t, int32_t, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, (int32_t)5, (int32_t)L_15, (float)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m7E79618E1133C66DC2AA9D17FDDBA09ED58367C0_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)__this->get_m_Objects_0();
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_1 = ((  Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_tFAFBEAFCC7B8C7F0A58F04A243A8773B576C4EFD  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m2C6A97F08DA04D74CC990C2825A2ED0F060B9954_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m4F2232A5EF0BE18785DA4D9C357E9642A2D4D0F6_gshared (SyncList_1_t0EFEDD77DAF9D07B8E3EE33817C4BEC07EE63A71 * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_t026D7A8C4D989218772DB3E051A624F753A60859 * L_0 = (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_t026D7A8C4D989218772DB3E051A624F753A60859 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
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
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m477A2ED05BB22DC1E9CB80A5FBF084E1DD48A866_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public int Count { get { return m_Objects.Count; } }
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		return (int32_t)L_1;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_IsReadOnly_m80C51D5FF71A67512EB415CA19F5649F86F52EE6_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsReadOnly { get { return false; } }
		return (bool)0;
	}
}
// UnityEngine.Networking.SyncList`1_SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * SyncList_1_get_Callback_mB94ADF0A296618486FB9EFE883B5CDDB9478E324_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		return (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1_SyncListChanged<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Callback_m12197649E902CDA084D2902017B8775CE3C4BBDC_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * ___value0, const RuntimeMethod* method)
{
	{
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_0 = ___value0;
		__this->set_m_Callback_3(L_0);
		// public SyncListChanged Callback { get { return m_Callback; } set { m_Callback = value; } }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_InitializeBehaviour_mF159E49D488220DC87E0398A01E2068E92166585_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * ___beh0, int32_t ___cmdHash1, const RuntimeMethod* method)
{
	{
		// m_Behaviour = beh;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = ___beh0;
		__this->set_m_Behaviour_1(L_0);
		// m_CmdHash = cmdHash;
		int32_t L_1 = ___cmdHash1;
		__this->set_m_CmdHash_2(L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, uint32_t ___item2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SyncList_1_SendMsg_m43C35FD0778DDF03FB51919A2E2A489B53888E12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * V_0 = NULL;
	NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * V_1 = NULL;
	{
		// if (m_Behaviour == null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_0 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_2 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList not initialized"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral02A1CE557DC872E91BC93ED77E8B60DF3DFB4A00, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// return;
		return;
	}

IL_0020:
	{
		// var uv = m_Behaviour.GetComponent<NetworkIdentity>();
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_3 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_4 = Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_3, /*hidden argument*/Component_GetComponent_TisNetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B_m1B246F83788387F4E1BD668088D39CF221FD3F59_RuntimeMethod_var);
		V_0 = (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_4;
		// if (uv == null)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(LogFilter_t5202A297E770086F7954B8D6703BAC03C22654ED_il2cpp_TypeInfo_var);
		bool L_7 = LogFilter_get_logError_m782345C28E87D1E15882B5804CB36D5006389095(/*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// if (LogFilter.logError) { Debug.LogError("SyncList no NetworkIdentity"); }
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteralE35C7729141357B5A11D8FBAAC5AFED079F1C9B8, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// if (!uv.isServer)
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_8 = V_0;
		bool L_9 = NetworkIdentity_get_isServer_m4146445D1558F70FD14FA7EBA0A9E25B5BE44CB4((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		// return;
		return;
	}

IL_0050:
	{
		// NetworkWriter writer = new NetworkWriter();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_10 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)il2cpp_codegen_object_new(NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030_il2cpp_TypeInfo_var);
		NetworkWriter__ctor_mC712BEBC523BE9489F7E902E47AB91C181113512(L_10, /*hidden argument*/NULL);
		V_1 = (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_10;
		// writer.StartMessage(MsgType.SyncList);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_11 = V_1;
		NetworkWriter_StartMessage_m216E24DCA28F545FC8B5B8AEA63F907621AEB6DF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_11, (int16_t)((int32_t)9), /*hidden argument*/NULL);
		// writer.Write(uv.netId);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_12 = V_1;
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_13 = V_0;
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_14 = NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline((NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B *)L_13, /*hidden argument*/NULL);
		NetworkWriter_Write_mF0D1D43BF82C8AACAD0686ABC83CEE0A0B9EBB27((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_12, (NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615 )L_14, /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)m_CmdHash);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_15 = V_1;
		int32_t L_16 = (int32_t)__this->get_m_CmdHash_2();
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_15, (uint32_t)L_16, /*hidden argument*/NULL);
		// writer.Write((byte)op);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_17 = V_1;
		int32_t L_18 = ___op0;
		NetworkWriter_Write_mB0AF303656681C5DF86052CF556FB9112D68F4EF((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_17, (uint8_t)(((int32_t)((uint8_t)L_18))), /*hidden argument*/NULL);
		// writer.WritePackedUInt32((uint)itemIndex);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_19 = V_1;
		int32_t L_20 = ___itemIndex1;
		NetworkWriter_WritePackedUInt32_m7A1E1475AA1508F1F433B2A7426C6924B2874CE9((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_19, (uint32_t)L_20, /*hidden argument*/NULL);
		// SerializeItem(writer, item);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_21 = V_1;
		uint32_t L_22 = ___item2;
		VirtActionInvoker2< NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *, uint32_t >::Invoke(18 /* System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SerializeItem(UnityEngine.Networking.NetworkWriter,T) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_21, (uint32_t)L_22);
		// writer.FinishMessage();
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_23 = V_1;
		NetworkWriter_FinishMessage_mA0310D648D56E8724883F8ED1C562A16980D08A1((NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_23, /*hidden argument*/NULL);
		// NetworkServer.SendWriterToReady(uv.gameObject, writer, m_Behaviour.GetNetworkChannel());
		NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * L_24 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_24, /*hidden argument*/NULL);
		NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 * L_26 = V_1;
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_27 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		int32_t L_28 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.Networking.NetworkBehaviour::GetNetworkChannel() */, (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_27);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkServer_tFD62C268FC6F01624A5989BFC1D0DD689A66B4A1_il2cpp_TypeInfo_var);
		NetworkServer_SendWriterToReady_mC72D27114E718B6CF8EDAACA4133CD4DD98482D2((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_25, (NetworkWriter_t9BE861BDE3F59F374D83A1E4CC697C73003FF030 *)L_26, (int32_t)L_28, /*hidden argument*/NULL);
		// if (m_Behaviour.isServer && m_Behaviour.isClient && m_Callback != null)
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_29 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_30 = NetworkBehaviour_get_isServer_m3450756B843EE53AC48B9FAFF8A7384D6782276C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00d9;
		}
	}
	{
		NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C * L_31 = (NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)__this->get_m_Behaviour_1();
		bool L_32 = NetworkBehaviour_get_isClient_m1E896B2C90B850DB1E4FC03A2D38A720A161580C((NetworkBehaviour_tE0C48D0A9ED8AC3977CAEF5B8090089CD544D19C *)L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	{
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_33 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_33)
		{
			goto IL_00d9;
		}
	}
	{
		// m_Callback.Invoke(op, itemIndex);
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_34 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		int32_t L_35 = ___op0;
		int32_t L_36 = ___itemIndex1;
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_34, (int32_t)L_35, (int32_t)L_36, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00d9:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1_Operation<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_SendMsg_m47CD9D607320F8912D05D9B2C7CC7AB0FE011044_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___op0, int32_t ___itemIndex1, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		// SendMsg(op, itemIndex, default(T));
		int32_t L_0 = ___op0;
		int32_t L_1 = ___itemIndex1;
		il2cpp_codegen_initobj((&V_0), sizeof(uint32_t));
		uint32_t L_2 = V_0;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_HandleMsg_m4492E3D13DDC40C5CA23D94265B8DB9BB914D3C1_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * ___reader0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// byte op = reader.ReadByte();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_0 = ___reader0;
		uint8_t L_1 = NetworkReader_ReadByte_m34EBFEEAF0791BEE98C13084384D4A86D93C1552((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_0, /*hidden argument*/NULL);
		V_0 = (uint8_t)L_1;
		// int itemIndex = (int)reader.ReadPackedUInt32();
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_2 = ___reader0;
		uint32_t L_3 = NetworkReader_ReadPackedUInt32_mB42737FFDF73B0EE9F109C2C53F31BCC6B3C3FD9((NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_2, /*hidden argument*/NULL);
		V_1 = (int32_t)L_3;
		// T item = DeserializeItem(reader);
		NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * L_4 = ___reader0;
		uint32_t L_5 = VirtFuncInvoker1< uint32_t, NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 * >::Invoke(19 /* T UnityEngine.Networking.SyncList`1<System.UInt32>::DeserializeItem(UnityEngine.Networking.NetworkReader) */, (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (NetworkReader_t7011A2F66F461EA5D4413F3979F1F3244D82FD12 *)L_4);
		V_2 = (uint32_t)L_5;
		// switch ((Operation)op)
		uint8_t L_6 = V_0;
		V_3 = (int32_t)L_6;
		int32_t L_7 = V_3;
		switch (L_7)
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_0075;
			}
			case 5:
			{
				goto IL_0083;
			}
			case 6:
			{
				goto IL_0083;
			}
		}
	}
	{
		goto IL_0090;
	}

IL_003c:
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_8 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_9 = V_2;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_8, (uint32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// break;
		goto IL_0090;
	}

IL_004a:
	{
		// m_Objects.Clear();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_10 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// break;
		goto IL_0090;
	}

IL_0057:
	{
		// m_Objects.Insert(itemIndex, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = V_1;
		uint32_t L_13 = V_2;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// break;
		goto IL_0090;
	}

IL_0066:
	{
		// m_Objects.Remove(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_14 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_15 = V_2;
		((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_14, (uint32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// break;
		goto IL_0090;
	}

IL_0075:
	{
		// m_Objects.RemoveAt(itemIndex);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_16 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_17 = V_1;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_16, (int32_t)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// break;
		goto IL_0090;
	}

IL_0083:
	{
		// m_Objects[itemIndex] = item;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_18 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_19 = V_1;
		uint32_t L_20 = V_2;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_18, (int32_t)L_19, (uint32_t)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0090:
	{
		// if (m_Callback != null)
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_21 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		// m_Callback.Invoke((Operation)op, itemIndex);
		SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 * L_22 = (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)__this->get_m_Callback_3();
		uint8_t L_23 = V_0;
		int32_t L_24 = V_1;
		((  void (*) (SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((SyncListChanged_tD1909BD890DF90C0B396D9EABEBD26B20EBB8181 *)L_22, (int32_t)L_23, (int32_t)L_24, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mD85298653F599E3BF7297D5E34AB0160FB267898_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Add_m50AACA6E70666A9462410B65BE86B5B5CCF07639_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// m_Objects.Add(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		// SendMsg(Operation.OP_ADD, m_Objects.Count - 1, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_2 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_3 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		uint32_t L_4 = ___item0;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)0, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)), (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m196B5CD3228535A361FBBAA94C284CFE2E215FBB_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// m_Objects.Clear();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		// SendMsg(Operation.OP_CLEAR, 0);
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Contains_mD2941C51CC476BEE5C181C5C3D183A68F7EAF35F_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.Contains(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 12));
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_CopyTo_mE0B5ABBD7F2F92C12CB443792A804400F7E970E7_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		// m_Objects.CopyTo(array, index);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* L_1 = ___array0;
		int32_t L_2 = ___index1;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB*)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 13));
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_IndexOf_m74F91DCB69A209813838685681B952AE0CDE7189_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	{
		// return m_Objects.IndexOf(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		int32_t L_2 = ((  int32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 14));
		return (int32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Insert_mC111E9856E76542D83663AC2AA72FB34BEF1E961_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, uint32_t ___item1, const RuntimeMethod* method)
{
	{
		// m_Objects.Insert(index, item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		uint32_t L_2 = ___item1;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, (uint32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		// SendMsg(Operation.OP_INSERT, index, item);
		int32_t L_3 = ___index0;
		uint32_t L_4 = ___item1;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)2, (int32_t)L_3, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_Remove_mF04C662A1BC3EC6AFEA9F89963CBE13A35A9686B_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, uint32_t ___item0, const RuntimeMethod* method)
{
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	{
		// var result = m_Objects.Remove(item);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		uint32_t L_1 = ___item0;
		bool L_2 = ((  bool (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (uint32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		// if (result)
		bool L_3 = (bool)L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B2_0 = L_3;
			goto IL_0018;
		}
	}
	{
		// SendMsg(Operation.OP_REMOVE, 0, item);
		uint32_t L_4 = ___item0;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)3, (int32_t)0, (uint32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		G_B2_0 = G_B1_0;
	}

IL_0018:
	{
		// return result;
		return (bool)G_B2_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_RemoveAt_m41D4B99E19DF04F1FC5934D1E1115D0C2181284D_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// m_Objects.RemoveAt(index);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___index0;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		// SendMsg(Operation.OP_REMOVEAT, index);
		int32_t L_2 = ___index0;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)4, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Dirty_m97EB0387816ABE4540E46D88BDD1206C2EA80DBD_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// SendMsg(Operation.OP_DIRTY, index, m_Objects[index]);
		int32_t L_0 = ___index0;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_1 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_2 = ___index0;
		uint32_t L_3 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)6, (int32_t)L_0, (uint32_t)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// }
		return;
	}
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_m8D671E7C84FD0C968D60488553A568E9C31FEFC3_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// get { return m_Objects[i]; }
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		return (uint32_t)L_2;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_set_Item_m3D81172C28BDD0A6997376863AEEB3CC367F2282_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, int32_t ___i0, uint32_t ___value1, const RuntimeMethod* method)
{
	bool V_0 = false;
	uint32_t V_1 = 0;
	{
		// bool changed = false;
		V_0 = (bool)0;
		// if (m_Objects[i] == null)
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_1 = ___i0;
		uint32_t L_2 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		goto IL_0022;
	}
	{
		// if (value == null)
		goto IL_001e;
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// changed = true;
		V_0 = (bool)1;
		// }
		goto IL_0046;
	}

IL_0022:
	{
		// changed = !m_Objects[i].Equals(value);
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_4 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_5 = ___i0;
		uint32_t L_6 = ((  uint32_t (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 15));
		V_1 = (uint32_t)L_6;
		uint32_t L_7 = ___value1;
		uint32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 16), &L_8);
		bool L_10 = UInt32_Equals_m44E796DB35F5DB4E5D4C98EC6AB5053242A320C3((uint32_t*)(uint32_t*)(&V_1), (RuntimeObject *)L_9, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}

IL_0046:
	{
		// m_Objects[i] = value;
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_11 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		int32_t L_12 = ___i0;
		uint32_t L_13 = ___value1;
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_11, (int32_t)L_12, (uint32_t)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		// if (changed)
		bool L_14 = V_0;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// SendMsg(Operation.OP_SET, i, value);
		int32_t L_15 = ___i0;
		uint32_t L_16 = ___value1;
		((  void (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, int32_t, int32_t, uint32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, (int32_t)5, (int32_t)L_15, (uint32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_GetEnumerator_m2D8E20107EFF81EC73C806B373FF762E0CD24A78_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// return m_Objects.GetEnumerator();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)__this->get_m_Objects_0();
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_1 = ((  Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17)->methodPointer)((List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 17));
		Enumerator_t6C6061565EA2787387759C1CA5549E561A4FABBC  L_2 = L_1;
		RuntimeObject * L_3 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 18), &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_System_Collections_IEnumerable_GetEnumerator_m0D4C05B534CF3521BDF05B7B54BCCE6CD00D39EF_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0 = ((  RuntimeObject* (*) (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19)->methodPointer)((SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 19));
		return (RuntimeObject*)L_0;
	}
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mBBC4C3820B8E74954702F4B0B8CB6ADE0BFDF76A_gshared (SyncList_1_t8C9373BF49FF7DE47176456100B7A5446B31D34C * __this, const RuntimeMethod* method)
{
	{
		// List<T> m_Objects = new List<T>();
		List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE * L_0 = (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 20));
		((  void (*) (List_1_tD49C9DE2DD9D3B4C15E7898CFBDE6EC98CC30DFE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21)->methodPointer)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 21));
		__this->set_m_Objects_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0((RuntimeObject *)__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  NetworkIdentity_get_netId_m22EB7CD04E2633FFAF99093749F79816B2BC9F28_inline (NetworkIdentity_t764E9C8A578DEF667FDCB3D1171A4B0DDF38069B * __this, const RuntimeMethod* method)
{
	{
		// public NetworkInstanceId netId { get { return m_NetId; } }
		NetworkInstanceId_tB6492FD2B3B2062582F787801BF7C0457271F615  L_0 = __this->get_m_NetId_11();
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
