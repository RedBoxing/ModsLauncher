#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DoHeroConfirmd130
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoHeroConfirm>d__130"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameSceneManager5__2() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(DoHeroConfirmd130*))(Il2CppBase() + 0x44F9B68))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(DoHeroConfirmd130*))(Il2CppBase() + 0x44F9B6C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(DoHeroConfirmd130*))(Il2CppBase() + 0x44FA908))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(DoHeroConfirmd130*))(Il2CppBase() + 0x44FA910))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DoHeroConfirmd130*))(Il2CppBase() + 0x44FA978))(this);
	}

};

}
