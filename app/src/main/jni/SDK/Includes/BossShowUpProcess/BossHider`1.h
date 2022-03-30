#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class BossHider1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "BossHider`1"));
	}

	template <typename T = uintptr_t> T& MainBoss() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& extraBossList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& bossId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& monoBehaviour() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& wait() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& hideAfterStart() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_MainBoss() {
		return ((T (*)(BossHider1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_MainBoss(uintptr_t value) {
		return ((T (*)(BossHider1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Register() {
		return ((T (*)(BossHider1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Unregister() {
		return ((T (*)(BossHider1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnBossCreate(uintptr_t e) {
		return ((T (*)(BossHider1*, uintptr_t))(Il2CppBase() + 0x0))(this, e);
	}
	template <typename T = uintptr_t> T HideBoss(uintptr_t bossInstance) {
		return ((T (*)(BossHider1*, uintptr_t))(Il2CppBase() + 0x0))(this, bossInstance);
	}
	template <typename T = void> T ShowMainBoss() {
		return ((T (*)(BossHider1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ShowExtraBoss() {
		return ((T (*)(BossHider1*))(Il2CppBase() + 0x0))(this);
	}

};

}
