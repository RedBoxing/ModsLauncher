#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StarAndSeaMountMoveEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StarAndSeaMountMoveEffect"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _textureOffsetMove() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<float>*> T& initSpeedList() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StarAndSeaMountMoveEffect*))(Il2CppBase() + 0x4299B38))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(StarAndSeaMountMoveEffect*))(Il2CppBase() + 0x4299CBC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StarAndSeaMountMoveEffect*))(Il2CppBase() + 0x4299D98))(this);
	}
	template <typename T = void> T Move(uintptr_t m) {
		return ((T (*)(StarAndSeaMountMoveEffect*, uintptr_t))(Il2CppBase() + 0x4299E74))(this, m);
	}

};

}
