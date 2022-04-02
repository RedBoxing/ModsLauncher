#pragma once
#include "Il2Cpp/Il2Cpp.h"

class getChildsd14
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<get_Childs>d__14"));
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
	template <typename T = void*> T& 7__wrap1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733BEC))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733C60))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733C08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorI2_Loc_SimpleJSON_JSONNode_get_Current() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733E04))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733E0C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733E74))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableI2_Loc_SimpleJSON_JSONNode_GetEnumerator() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733E7C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(getChildsd14*))(Il2CppBase() + 0x1733F2C))(this);
	}

};

}
