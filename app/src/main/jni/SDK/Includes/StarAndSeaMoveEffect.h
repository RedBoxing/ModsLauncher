#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StarAndSeaMoveEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StarAndSeaMoveEffect"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& bigStarFadeSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& smallStarFadeSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _textureOffsetMove() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<float>*> T& initSpeedList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& smallStarColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& bigStarColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& darkColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429A12C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429A458))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429A534))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429A610))(this);
	}
	template <typename T = void> T Move(uintptr_t m) {
		return ((T (*)(StarAndSeaMoveEffect*, uintptr_t))(Il2CppBase() + 0x429A754))(this, m);
	}
	template <typename T = uintptr_t> T Awakeb__11_0() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429AB0C))(this);
	}
	template <typename T = void> T Awakeb__11_1(uintptr_t x) {
		return ((T (*)(StarAndSeaMoveEffect*, uintptr_t))(Il2CppBase() + 0x429AB18))(this, x);
	}
	template <typename T = uintptr_t> T Awakeb__11_2() {
		return ((T (*)(StarAndSeaMoveEffect*))(Il2CppBase() + 0x429AB24))(this);
	}
	template <typename T = void> T Awakeb__11_3(uintptr_t x) {
		return ((T (*)(StarAndSeaMoveEffect*, uintptr_t))(Il2CppBase() + 0x429AB30))(this, x);
	}

};

}
