#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBubble
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBubble"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25850D0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x2585130))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x2585224))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25852A0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25853AC))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(GunBubble*, int32_t))(Il2CppBase() + 0x25854E0))(this, i);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25856C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25856D0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunBubble*))(Il2CppBase() + 0x25856D8))(this);
	}

};

}
