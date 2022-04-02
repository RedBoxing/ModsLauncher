#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReloadClip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReloadClip"));
	}

	template <typename T = bool> T& reloading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ReloadClip*))(Il2CppBase() + 0x42CA1A0))(this);
	}
	template <typename T = void> T PlayReloadAnim(float time) {
		return ((T (*)(ReloadClip*, float))(Il2CppBase() + 0x42CA250))(this, time);
	}
	template <typename T = void> T PlayReloadInverseAnim(float time) {
		return ((T (*)(ReloadClip*, float))(Il2CppBase() + 0x42CA3C0))(this, time);
	}
	template <typename T = void> T SetReloadProgress(float progress) {
		return ((T (*)(ReloadClip*, float))(Il2CppBase() + 0x42CA530))(this, progress);
	}
	template <typename T = void> T EndReload() {
		return ((T (*)(ReloadClip*))(Il2CppBase() + 0x42CA610))(this);
	}
	template <typename T = void> T FlnishReload() {
		return ((T (*)(ReloadClip*))(Il2CppBase() + 0x42CA6B4))(this);
	}

};

}
