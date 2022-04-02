#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletBubble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletBubble"));
	}

	template <typename T = float> T& rate() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& this_time() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& speed_value() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& min_speed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& max_speed() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& minScale() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& maxScale() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& destroyTimeMin() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& destroyTimeMax() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> T& _originDestroyTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BulletBubble*))(Il2CppBase() + 0x45AAB58))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BulletBubble*))(Il2CppBase() + 0x45AAE2C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(BulletBubble*))(Il2CppBase() + 0x45AAE90))(this);
	}

};

}
