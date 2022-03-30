#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class ILFixInterfaceBridge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "ILFixInterfaceBridge"));
	}

	template <typename T = int32_t> T& methodId_0() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& methodId_1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& methodId_2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& methodId_3() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& methodId_4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& methodId_5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& methodId_6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& methodId_7() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& methodId_8() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& methodId_9() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& methodId_10() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& methodId_11() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& methodId_12() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& methodId_13() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& methodId_14() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& methodId_15() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFA70))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFB00))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFBA4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFC70))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFD00))(this);
	}
	template <typename T = void> T MoveNext_1() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFDCC))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t P0) {
		return ((T (*)(ILFixInterfaceBridge*, uintptr_t))(Il2CppBase() + 0x19AFE5C))(this, P0);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Reflection_MethodInfo_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFF00))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Reflection_MethodInfo_GetEnumerator() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19AFFCC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B0098))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorRewired_UI_ControlMapper_ControlMapper_InputActionSet_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B0164))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableRewired_UI_ControlMapper_ControlMapper_InputActionSet_GetEnumerator() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B0230))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorRewired_ElementAssignmentConflictInfo_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B02FC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableRewired_ElementAssignmentConflictInfo_GetEnumerator() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B03D8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorI2_Loc_SimpleJSON_JSONNode_get_Current() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B04A4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableI2_Loc_SimpleJSON_JSONNode_GetEnumerator() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B0570))(this);
	}
	template <typename T = void> T RefAwaitUnsafeOnCompleteMethod() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B094C))(this);
	}
	template <typename T = void> T RefAsyncBuilderStartMethod() {
		return ((T (*)(ILFixInterfaceBridge*))(Il2CppBase() + 0x19B1558))(this);
	}

};

}
