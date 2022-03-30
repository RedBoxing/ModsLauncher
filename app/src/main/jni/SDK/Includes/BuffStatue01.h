#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffStatue01
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffStatue01"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& pierced() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& offset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& buff_accurate() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffStatue01*))(Il2CppBase() + 0x45A03A4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffStatue01*))(Il2CppBase() + 0x45A0530))(this);
	}
	template <typename T = void> T UseSkill() {
		return ((T (*)(BuffStatue01*))(Il2CppBase() + 0x45A05D8))(this);
	}
	template <typename T = uintptr_t> T UsingSkill(int32_t castTimes) {
		return ((T (*)(BuffStatue01*, int32_t))(Il2CppBase() + 0x45A06BC))(this, castTimes);
	}
	template <typename T = void> T iFixBaseProxy_UseSkill() {
		return ((T (*)(BuffStatue01*))(Il2CppBase() + 0x45A07F4))(this);
	}

};

}
