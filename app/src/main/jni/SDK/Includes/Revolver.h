#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Revolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Revolver"));
	}

	template <typename T = uintptr_t> T& revolverConfig() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppQuaternion> T& rotate() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& currentCount() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& shoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& triggerDic() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = bool> T get_inThrowMode() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A084))(this);
	}
	template <typename T = bool> T get_inShootMode() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A0FC))(this);
	}
	template <typename T = float> T get_shootInterval() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A190))(this);
	}
	template <typename T = float> T get_shootAngle() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A1F8))(this);
	}
	template <typename T = void> T Init(uintptr_t revolverConfig) {
		return ((T (*)(Revolver*, uintptr_t))(Il2CppBase() + 0x204A264))(this, revolverConfig);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A3CC))(this);
	}
	template <typename T = void> T ThrowUpdate() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A5E0))(this);
	}
	template <typename T = void> T ShootUpdate() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A738))(this);
	}
	template <typename T = void> T RotateUpdate() {
		return ((T (*)(Revolver*))(Il2CppBase() + 0x204A468))(this);
	}
	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(Revolver*, uintptr_t))(Il2CppBase() + 0x204AA44))(this, other);
	}
	template <typename T = void> T TriggerWithEnemy(uintptr_t enemy) {
		return ((T (*)(Revolver*, uintptr_t))(Il2CppBase() + 0x204AB48))(this, enemy);
	}

};

}
