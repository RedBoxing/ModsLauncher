#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBuff"));
	}

	template <typename T = bool> T& is_enemy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& buff_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& canMultiple() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onBuffEnd() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T add_onBuffEnd(uintptr_t value) {
		return ((T (*)(RGBuff*, uintptr_t))(Il2CppBase() + 0x19CD390))(this, value);
	}
	template <typename T = void> T remove_onBuffEnd(uintptr_t value) {
		return ((T (*)(RGBuff*, uintptr_t))(Il2CppBase() + 0x19CD47C))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGBuff*))(Il2CppBase() + 0x19CD568))(this);
	}
	template <typename T = void> T OnBuffStart() {
		return ((T (*)(RGBuff*))(Il2CppBase() + 0x19CD8A0))(this);
	}
	template <typename T = void> T RefreshTime(float time) {
		return ((T (*)(RGBuff*, float))(Il2CppBase() + 0x19CD8FC))(this, time);
	}
	template <typename T = void> T StartDestroy(float duration) {
		return ((T (*)(RGBuff*, float))(Il2CppBase() + 0x19CD9B4))(this, duration);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(RGBuff*))(Il2CppBase() + 0x19CDA60))(this);
	}
	template <typename T = void> T OnDestroySelf() {
		return ((T (*)(RGBuff*))(Il2CppBase() + 0x19CDAD8))(this);
	}
	template <typename T = void> T SetDamage(uintptr_t damageInfo) {
		return ((T (*)(RGBuff*, uintptr_t))(Il2CppBase() + 0x19CDB94))(this, damageInfo);
	}

};

}
