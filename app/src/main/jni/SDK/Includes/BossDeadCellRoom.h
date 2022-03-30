#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossDeadCellRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDeadCellRoom"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& arrowTowers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& boss() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _room() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BossDeadCellRoom*))(Il2CppBase() + 0x1DE9960))(this);
	}
	template <typename T = void> T ChangePlayerPosition() {
		return ((T (*)(BossDeadCellRoom*))(Il2CppBase() + 0x1DE9AD0))(this);
	}
	template <typename T = void> T Startb__3_0(uintptr_t bossObj) {
		return ((T (*)(BossDeadCellRoom*, uintptr_t))(Il2CppBase() + 0x1DEA238))(this, bossObj);
	}
	template <typename T = void> T Startb__3_2(uintptr_t e) {
		return ((T (*)(BossDeadCellRoom*, uintptr_t))(Il2CppBase() + 0x1DEA3B0))(this, e);
	}
	template <typename T = void> T Startb__3_1(uintptr_t r) {
		return ((T (*)(BossDeadCellRoom*, uintptr_t))(Il2CppBase() + 0x1DEA490))(this, r);
	}
	template <typename T = void> T Startb__3_3() {
		return ((T (*)(BossDeadCellRoom*))(Il2CppBase() + 0x1DEA5A8))(this);
	}
	template <typename T = void> T Startb__3_5() {
		return ((T (*)(BossDeadCellRoom*))(Il2CppBase() + 0x1DEA678))(this);
	}
	template <typename T = void> T Startb__3_4() {
		return ((T (*)(BossDeadCellRoom*))(Il2CppBase() + 0x1DEA73C))(this);
	}

};

}
