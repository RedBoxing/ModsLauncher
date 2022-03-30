#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTroopSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTroopSkill"));
	}

	template <typename T = float> T& scanDelay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& scanInterval() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& skillInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& objectReferences() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& skillCasting() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& skillTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& cdTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& shadowLock() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _scanTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_skillReady() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6BF8))(this);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6C70))(this);
	}
	template <typename T = bool> T get_isStrength() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6CE4))(this);
	}
	template <typename T = int32_t> T get_skinIndex() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6D54))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6DB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E6FF8))(this);
	}
	template <typename T = void> T SkillReady() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E71A4))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E7474))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E7598))(this);
	}
	template <typename T = void> T HideShadowLock() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E7610))(this);
	}
	template <typename T = void> T ResetScanTime() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E76A0))(this);
	}
	template <typename T = void> T SkillUpdate(float deltaTime) {
		return ((T (*)(RGTroopSkill*, float))(Il2CppBase() + 0x43E7724))(this, deltaTime);
	}
	template <typename T = void> T Scan() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E7960))(this);
	}
	template <typename T = void> T ScanSkill(uintptr_t skillInfo) {
		return ((T (*)(RGTroopSkill*, uintptr_t))(Il2CppBase() + 0x43E79C4))(this, skillInfo);
	}
	template <typename T = void> T OnDead() {
		return ((T (*)(RGTroopSkill*))(Il2CppBase() + 0x43E7D24))(this);
	}

};

}
