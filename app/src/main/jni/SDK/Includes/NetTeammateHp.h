#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetTeammateHp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetTeammateHp"));
	}

	template <typename T = bool> T& local_player() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bar_hp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& max_hp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& reborning() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& reborn_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& this_reborn_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& sprite_bar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sprite_hp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& helping() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& boxCol2D() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = int32_t> T get_maxHp() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445D8A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445DA80))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445DC20))(this);
	}
	template <typename T = void> T StartNetTeammateHp() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445DCDC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445DEEC))(this);
	}
	template <typename T = void> T UpdateHpBar(int32_t value) {
		return ((T (*)(NetTeammateHp*, int32_t))(Il2CppBase() + 0x445E440))(this, value);
	}
	template <typename T = void> T ShowBar() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445E608))(this);
	}
	template <typename T = void> T HideBar() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445DE54))(this);
	}
	template <typename T = void> T StopReborn() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445E1D8))(this);
	}
	template <typename T = void> T FlnishReload() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445E298))(this);
	}
	template <typename T = void> T GetReloadResult(bool value) {
		return ((T (*)(NetTeammateHp*, bool))(Il2CppBase() + 0x445E6A0))(this, value);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NetTeammateHp*, uintptr_t))(Il2CppBase() + 0x445E7C0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(NetTeammateHp*, uintptr_t))(Il2CppBase() + 0x445E9D8))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(NetTeammateHp*, uintptr_t))(Il2CppBase() + 0x445EC58))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445EE94))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445EEF4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445EF84))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(NetTeammateHp*))(Il2CppBase() + 0x445EFE4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(NetTeammateHp*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x445F044))(this, controller, ext_info);
	}

};

}
