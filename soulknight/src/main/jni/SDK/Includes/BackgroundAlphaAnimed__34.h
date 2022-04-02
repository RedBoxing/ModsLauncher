#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BackgroundAlphaAnimed34
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BackgroundAlphaAnime>d__34"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& fromAlpha() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& toAlpha() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& animeTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(BackgroundAlphaAnimed34*))(Il2CppBase() + 0x4349520))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(BackgroundAlphaAnimed34*))(Il2CppBase() + 0x4349524))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(BackgroundAlphaAnimed34*))(Il2CppBase() + 0x4349658))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(BackgroundAlphaAnimed34*))(Il2CppBase() + 0x4349660))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BackgroundAlphaAnimed34*))(Il2CppBase() + 0x43496C8))(this);
	}

};

}
