#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGItem"));
	}

	template <typename T = bool> T& showArrowOnlyIfTriggerable() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& item_name() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& repeat() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& statisticKey() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& label_height() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& _childItemInterface() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& triggerState() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& colorFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LevelColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnReady() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B5FF18))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B5FF74))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B5FFE8))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B60134))(this, controller);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B601A4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B60574))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B605D0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B60970))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B60CD0))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B61054))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B610B4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B61134))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B61194))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1B61210))(this, controller, ext_info);
	}
	template <typename T = void> T OnGetClose(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B61404))(this, controller);
	}
	template <typename T = void> T OnGetAway(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B61474))(this, controller);
	}
	template <typename T = void> T ShowTap(Il2CppString* tapMsg, bool useI2) {
		return ((T (*)(RGItem*, Il2CppString*, bool))(Il2CppBase() + 0x1B614E4))(this, tapMsg, useI2);
	}
	template <typename T = void> T ShowTalk(uintptr_t talker, Il2CppString* talk, float duration) {
		return ((T (*)(RGItem*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x1B616D0))(this, talker, talk, duration);
	}
	template <typename T = void> T HideTap(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B617A8))(this, controller);
	}
	template <typename T = Il2CppString*> static T GetStringWithColor(Il2CppString* row, int32_t level) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x1B61880))(0, row, level);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(RGItem*))(Il2CppBase() + 0x1B604A4))(this);
	}
	template <typename T = void> T PickUp(uintptr_t controller) {
		return ((T (*)(RGItem*, uintptr_t))(Il2CppBase() + 0x1B6197C))(this, controller);
	}

};

}
