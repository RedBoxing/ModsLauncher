#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WolfController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WolfController"));
	}

	template <typename T = bool> T& strengthen() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& showSmoke() {
		return *(T*)((uintptr_t)this + 0x179);
	}
	template <typename T = uintptr_t> T& bullet1() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& bullet2() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& swordScale() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& atk_point() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& hpBar() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = bool> T get_has_buff_druid() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4602F90))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x46030B8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4603234))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4603688))(this);
	}
	template <typename T = void> T OnHpChanged(float value, float maxvalue) {
		return ((T (*)(WolfController*, float, float))(Il2CppBase() + 0x4603794))(this, value, maxvalue);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4603834))(this);
	}
	template <typename T = void> T Recovered() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4603D6C))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4603E6C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x46042FC))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604718))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x460481C))(this);
	}
	template <typename T = uintptr_t> T OnAtk() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604A60))(this);
	}
	template <typename T = void> T Escape() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604E38))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604FE8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Recovered() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604FF0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4604FF8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605000))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605008))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605010))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605018))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605020))(this);
	}
	template <typename T = void> T iFixBaseProxy_Escape() {
		return ((T (*)(WolfController*))(Il2CppBase() + 0x4605028))(this);
	}

};

}
