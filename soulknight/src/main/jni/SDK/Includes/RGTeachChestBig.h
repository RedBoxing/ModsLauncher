#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTeachChestBig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTeachChestBig"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttonsPressed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E373C))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E3988))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E3AC0))(this);
	}
	template <typename T = void> T InstantiateWeapon() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E3D9C))(this);
	}
	template <typename T = void> T OpenChestEffect() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E404C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGTeachChestBig*, uintptr_t))(Il2CppBase() + 0x43E4308))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGTeachChestBig*, uintptr_t))(Il2CppBase() + 0x43E4528))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGTeachChestBig*, uintptr_t))(Il2CppBase() + 0x43E46E8))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E47E8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E4848))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E48D8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E4938))(this);
	}
	template <typename T = void> T BtnCheck(int32_t btnindex, bool value) {
		return ((T (*)(RGTeachChestBig*, int32_t, bool))(Il2CppBase() + 0x43E49AC))(this, btnindex, value);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGTeachChestBig*))(Il2CppBase() + 0x43E3A0C))(this);
	}

};

}
