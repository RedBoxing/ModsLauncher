#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextFadeOutAnimed23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<TextFadeOutAnime>d__23"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(TextFadeOutAnimed23*))(Il2CppBase() + 0x45D2688))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(TextFadeOutAnimed23*))(Il2CppBase() + 0x45D268C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(TextFadeOutAnimed23*))(Il2CppBase() + 0x45D27B4))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(TextFadeOutAnimed23*))(Il2CppBase() + 0x45D27BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(TextFadeOutAnimed23*))(Il2CppBase() + 0x45D2824))(this);
	}

};

}
