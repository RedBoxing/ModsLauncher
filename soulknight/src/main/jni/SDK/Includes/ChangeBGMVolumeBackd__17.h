#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeBGMVolumeBackd17
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ChangeBGMVolumeBack>d__17"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(ChangeBGMVolumeBackd17*))(Il2CppBase() + 0x18340B8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ChangeBGMVolumeBackd17*))(Il2CppBase() + 0x18340BC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(ChangeBGMVolumeBackd17*))(Il2CppBase() + 0x18341D8))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ChangeBGMVolumeBackd17*))(Il2CppBase() + 0x18341E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ChangeBGMVolumeBackd17*))(Il2CppBase() + 0x1834248))(this);
	}

};

}
