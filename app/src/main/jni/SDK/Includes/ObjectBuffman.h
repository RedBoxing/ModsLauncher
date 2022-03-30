#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBuffman
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBuffman"));
	}

	template <typename T = uintptr_t> T& award_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& talk_string() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& talk_no_buff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& talk_not_money() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& talk_get_use() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4E298))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4E4F4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectBuffman*, uintptr_t))(Il2CppBase() + 0x1D4E550))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectBuffman*, uintptr_t))(Il2CppBase() + 0x1D4E75C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectBuffman*, uintptr_t))(Il2CppBase() + 0x1D4E91C))(this, controller);
	}
	template <typename T = void> T GetUsedTalk() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F178))(this);
	}
	template <typename T = void> T NoMoney() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F234))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectBuffman*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D4F2F0))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F078))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F580))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F60C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4F66C))(this);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(ObjectBuffman*))(Il2CppBase() + 0x1D4E420))(this);
	}

};

}
