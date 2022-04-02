#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletInitMage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletInitMage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprite_renderers() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& max_alphas() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& alpha_ease() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& position_ease() {
		return *(T*)((uintptr_t)this + 0x14C);
	}

	template <typename T = void> T InitAnime(Il2CppVector3 target_position, uintptr_t controller_transform, float anime_time) {
		return ((T (*)(BulletInitMage*, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x2382CAC))(this, target_position, controller_transform, anime_time);
	}
	template <typename T = uintptr_t> T Anime(Il2CppVector3 target_position, uintptr_t controller_transform, float anime_time) {
		return ((T (*)(BulletInitMage*, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x2382D7C))(this, target_position, controller_transform, anime_time);
	}
	template <typename T = void> T AlphaSetting(float percentage) {
		return ((T (*)(BulletInitMage*, float))(Il2CppBase() + 0x2382EEC))(this, percentage);
	}
	template <typename T = void> T PositionSetting(Il2CppVector3 target_position, uintptr_t controller_transform, float percentage) {
		return ((T (*)(BulletInitMage*, Il2CppVector3, uintptr_t, float))(Il2CppBase() + 0x2383018))(this, target_position, controller_transform, percentage);
	}

};

}
