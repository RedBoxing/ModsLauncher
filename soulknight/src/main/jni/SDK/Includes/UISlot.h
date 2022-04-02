#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISlot"));
	}

	template <typename T = uintptr_t> T& tap1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tap2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& tap3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_consume() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& reslut() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& bullet_boom() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& can_roll() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& rolled_count() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& levelup_clip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& error_clip() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& gems_icon2() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x423F49C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x423F698))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x423F7D8))(this);
	}
	template <typename T = void> T RollBtnClick() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x423FB28))(this);
	}
	template <typename T = void> T RollTap2() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x4240150))(this);
	}
	template <typename T = void> T RollTap3() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x4240204))(this);
	}
	template <typename T = void> T EndRoll() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x4240274))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x423F8F4))(this);
	}
	template <typename T = void> T CreateExplode() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x4240700))(this);
	}
	template <typename T = void> T CreateCoin(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UISlot*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4240BC8))(this, value);
	}
	template <typename T = void> T GetWeapon(int32_t value) {
		return ((T (*)(UISlot*, int32_t))(Il2CppBase() + 0x42408D8))(this, value);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x4240EBC))(this);
	}
	template <typename T = void> T OnAddClick() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x424109C))(this);
	}
	template <typename T = void> T OnSubClick() {
		return ((T (*)(UISlot*))(Il2CppBase() + 0x42412CC))(this);
	}

};

}
