#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass261
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass26_1"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& efx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& vec2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& enemyState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& customUpdate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& landXMin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& landXMax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& landYMin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& landYMax() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& currentDeep() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& swimSpeed() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& oriMass() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CS$8__locals1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& 9__7() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& 9__8() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& 9__9() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& 9__6() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T EnemiesDiveb__0(uintptr_t e) {
		return ((T (*)(cDisplayClass261*, uintptr_t))(Il2CppBase() + 0x1A4A080))(this, e);
	}
	template <typename T = void> T EnemiesDiveb__6(uintptr_t e) {
		return ((T (*)(cDisplayClass261*, uintptr_t))(Il2CppBase() + 0x1A4A14C))(this, e);
	}
	template <typename T = float> T EnemiesDiveb__7() {
		return ((T (*)(cDisplayClass261*))(Il2CppBase() + 0x1A4A36C))(this);
	}
	template <typename T = void> T EnemiesDiveb__8(float d) {
		return ((T (*)(cDisplayClass261*, float))(Il2CppBase() + 0x1A4A39C))(this, d);
	}
	template <typename T = void> T EnemiesDiveb__9() {
		return ((T (*)(cDisplayClass261*))(Il2CppBase() + 0x1A4A3DC))(this);
	}
	template <typename T = float> T EnemiesDiveb__1() {
		return ((T (*)(cDisplayClass261*))(Il2CppBase() + 0x1A4A468))(this);
	}
	template <typename T = void> T EnemiesDiveb__2(float d) {
		return ((T (*)(cDisplayClass261*, float))(Il2CppBase() + 0x1A4A498))(this, d);
	}
	template <typename T = void> T EnemiesDiveb__3() {
		return ((T (*)(cDisplayClass261*))(Il2CppBase() + 0x1A4A4D8))(this);
	}
	template <typename T = void> T EnemiesDiveb__4() {
		return ((T (*)(cDisplayClass261*))(Il2CppBase() + 0x1A4A4E4))(this);
	}
	template <typename T = void> T EnemiesDiveb__5(float dt) {
		return ((T (*)(cDisplayClass261*, float))(Il2CppBase() + 0x1A4A568))(this, dt);
	}

};

}
