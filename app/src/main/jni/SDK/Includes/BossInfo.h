#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossInfo"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hp_anim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& boss_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& boss_hp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& boss_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onHideHpBar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onShowHpBar() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bosses() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& nextInfoName() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isNextInfo() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& animEnd() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = int32_t> T& maxHp() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEAF6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEB120))(this);
	}
	template <typename T = void> T ShowBossInfo(bool playBGM) {
		return ((T (*)(BossInfo*, bool))(Il2CppBase() + 0x1DEB2A0))(this, playBGM);
	}
	template <typename T = void> T NextAnim() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEB4EC))(this);
	}
	template <typename T = void> T EndAnim() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEB814))(this);
	}
	template <typename T = void> T RegisterBoss(uintptr_t newBoss) {
		return ((T (*)(BossInfo*, uintptr_t))(Il2CppBase() + 0x1DEBA40))(this, newBoss);
	}
	template <typename T = void> T UpdateBossMaxHp() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEBC5C))(this);
	}
	template <typename T = void> T UpdateBossHp() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DD664C))(this);
	}
	template <typename T = void> T HideHpBar() {
		return ((T (*)(BossInfo*))(Il2CppBase() + 0x1DEBDEC))(this);
	}

};

}
