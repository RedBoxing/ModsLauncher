#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFollow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFollow"));
	}

	template <typename T = uintptr_t> T& target_obj() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& target_offset() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& ease_time() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& ballPositionOffset() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& scaleRootByBulletSize() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = bool> T& syncBulletInfoToChildren() {
		return *(T*)((uintptr_t)this + 0x125);
	}
	template <typename T = bool> T& invertRotate() {
		return *(T*)((uintptr_t)this + 0x126);
	}
	template <typename T = float> T& start_time() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& left_time() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& smooth_rotate_speed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& current_rotate_speed() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = float> T& sprite_alpha() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = float> T& smooth_alpha() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraChild() {
		return *(T*)((uintptr_t)this + 0x148);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B302C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B30C4))(this);
	}
	template <typename T = uintptr_t> T DirectionUpdating() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B32B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B3384))(this);
	}
	template <typename T = void> T UpdateAnime() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B3594))(this);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(BulletFollow*, float))(Il2CppBase() + 0x45B39D8))(this, alpha);
	}
	template <typename T = void> T SetRotate(float rotate_amount) {
		return ((T (*)(BulletFollow*, float))(Il2CppBase() + 0x45B3718))(this, rotate_amount);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletFollow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B3B50))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetSize(float sizeFactor) {
		return ((T (*)(BulletFollow*, float))(Il2CppBase() + 0x45B3E98))(this, sizeFactor);
	}
	template <typename T = void> T AddChild(int32_t count) {
		return ((T (*)(BulletFollow*, int32_t))(Il2CppBase() + 0x45B4030))(this, count);
	}
	template <typename T = void> T RemoveChild() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B44C0))(this);
	}
	template <typename T = void> T UpdateDamageInfo(uintptr_t damageInfo) {
		return ((T (*)(BulletFollow*, uintptr_t))(Il2CppBase() + 0x45B4834))(this, damageInfo);
	}
	template <typename T = void> T ReSetDestoryTime() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B4A08))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B4AEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B4AF4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DirectionUpdating() {
		return ((T (*)(BulletFollow*))(Il2CppBase() + 0x45B4AFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletFollow*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45B4B04))(this, P0, P1);
	}

};

}
