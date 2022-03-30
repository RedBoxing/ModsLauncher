#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletThunder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletThunder"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& thunder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& intensify() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& can_hit_back() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& buff_ele() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& dizzy_rate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& max_count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& the_max_count() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& last_target() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& has_hit_list() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& jumpOnly() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& bulletSize() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& OnInstantiateBuff() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T add_OnInstantiateBuff(void* value) {
		return ((T (*)(BulletThunder*, void*))(Il2CppBase() + 0x1DF2B20))(this, value);
	}
	template <typename T = void> T remove_OnInstantiateBuff(void* value) {
		return ((T (*)(BulletThunder*, void*))(Il2CppBase() + 0x1DF2C0C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletThunder*))(Il2CppBase() + 0x1DF2CF8))(this);
	}
	template <typename T = void> T FindNextTarget() {
		return ((T (*)(BulletThunder*))(Il2CppBase() + 0x1DF2DB8))(this);
	}
	template <typename T = void> T CreateEleBuff(uintptr_t targetTransform) {
		return ((T (*)(BulletThunder*, uintptr_t))(Il2CppBase() + 0x1DF3A2C))(this, targetTransform);
	}
	template <typename T = void> T StartThunder(bool isIntensive, uintptr_t originTarget, int32_t damage) {
		return ((T (*)(BulletThunder*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x1DF3CA0))(this, isIntensive, originTarget, damage);
	}

};

}
