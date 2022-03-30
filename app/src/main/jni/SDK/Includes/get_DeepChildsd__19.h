#pragma once
#include "Il2Cpp/Il2Cpp.h"

class getDeepChildsd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<get_DeepChilds>d__19"));
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
	template <typename T = void*> T& 7__wrap2() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738600))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x17387F8))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738738))(this);
	}
	template <typename T = void> T m__Finally2() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738678))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorI2_Loc_SimpleJSON_JSONNode_get_Current() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738C34))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738C3C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738CA4))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableI2_Loc_SimpleJSON_JSONNode_GetEnumerator() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738CAC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(getDeepChildsd19*))(Il2CppBase() + 0x1738D5C))(this);
	}

};

}
