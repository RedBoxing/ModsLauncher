#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletAddArchLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletAddArchLightning"));
	}

	template <typename T = int32_t> T& max_count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& time_interval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& max_range() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& thunder_object() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletAddArchLightning*))(Il2CppBase() + 0x45A681C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletAddArchLightning*))(Il2CppBase() + 0x45A687C))(this);
	}
	template <typename T = uintptr_t> T ArchLightning() {
		return ((T (*)(BulletAddArchLightning*))(Il2CppBase() + 0x45A68EC))(this);
	}

};

}
