#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetActionSetsd18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetActionSets>d__18"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& l__initialThreadId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& mapCategoryId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& 3__mapCategoryId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& list5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& count5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& i5__4() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E721C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E7220))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorRewired_UI_ControlMapper_ControlMapper_InputActionSet_get_Current() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E736C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E7374))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E73DC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableRewired_UI_ControlMapper_ControlMapper_InputActionSet_GetEnumerator() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E73E4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(GetActionSetsd18*))(Il2CppBase() + 0x21E74A4))(this);
	}

};

}
