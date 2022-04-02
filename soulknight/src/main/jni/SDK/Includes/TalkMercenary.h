#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkMercenary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkMercenary"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& talk_string() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& talk_not_money() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& OnHireSuccess() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _customProcess() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T add_OnHireSuccess(void* value) {
		return ((T (*)(TalkMercenary*, void*))(Il2CppBase() + 0x43AC1F4))(this, value);
	}
	template <typename T = void> T remove_OnHireSuccess(void* value) {
		return ((T (*)(TalkMercenary*, void*))(Il2CppBase() + 0x43AC2E0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43AC3CC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43AC464))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TalkMercenary*, uintptr_t))(Il2CppBase() + 0x43AC65C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TalkMercenary*, uintptr_t))(Il2CppBase() + 0x43AC860))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(TalkMercenary*, uintptr_t))(Il2CppBase() + 0x43ACA20))(this, controller);
	}
	template <typename T = bool> T CanHire(uintptr_t controller) {
		return ((T (*)(TalkMercenary*, uintptr_t))(Il2CppBase() + 0x43AD224))(this, controller);
	}
	template <typename T = void> T ShowHireTalk() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43ACFC8))(this);
	}
	template <typename T = void> T NoMoney() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43AD6EC))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(TalkMercenary*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43AD7A8))(this, controller, ext_info);
	}
	template <typename T = void> T ControllerConsume(uintptr_t controller) {
		return ((T (*)(TalkMercenary*, uintptr_t))(Il2CppBase() + 0x43AD388))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43AD5EC))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43AD9C8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43ADA54))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(TalkMercenary*))(Il2CppBase() + 0x43ADAB4))(this);
	}

};

}
