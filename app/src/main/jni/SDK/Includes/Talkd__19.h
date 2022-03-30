#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Talkd19
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Talk>d__19"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& dialog() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(Talkd19*))(Il2CppBase() + 0x45FECC0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Talkd19*))(Il2CppBase() + 0x45FECC4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(Talkd19*))(Il2CppBase() + 0x45FEDB4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Talkd19*))(Il2CppBase() + 0x45FEDBC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Talkd19*))(Il2CppBase() + 0x45FEE24))(this);
	}

};

}
