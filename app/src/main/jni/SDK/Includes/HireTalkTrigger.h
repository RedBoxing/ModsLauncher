#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HireTalkTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HireTalkTrigger"));
	}

	template <typename T = int32_t> T& talkCount() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& talkRestoreCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& talkObject() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& giftString() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& skinFragment() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& talkIndex() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& restored() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& justRestored() {
		return *(T*)((uintptr_t)this + 0xCD);
	}

	template <typename T = bool> T get_giveGift() {
		return ((T (*)(HireTalkTrigger*))(Il2CppBase() + 0x1A38AF0))(this);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(HireTalkTrigger*))(Il2CppBase() + 0x1A38D20))(this);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(HireTalkTrigger*, uintptr_t))(Il2CppBase() + 0x1A38D88))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(HireTalkTrigger*, uintptr_t))(Il2CppBase() + 0x1A38ED8))(this, controller);
	}
	template <typename T = void> T HandleGift(uintptr_t controller) {
		return ((T (*)(HireTalkTrigger*, uintptr_t))(Il2CppBase() + 0x1A39048))(this, controller);
	}
	template <typename T = void> T Talk() {
		return ((T (*)(HireTalkTrigger*))(Il2CppBase() + 0x1A39610))(this);
	}
	template <typename T = Il2CppString*> T GetTalk(int32_t index) {
		return ((T (*)(HireTalkTrigger*, int32_t))(Il2CppBase() + 0x1A398A8))(this, index);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(HireTalkTrigger*))(Il2CppBase() + 0x1A399BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(HireTalkTrigger*, uintptr_t))(Il2CppBase() + 0x1A39A88))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(HireTalkTrigger*, uintptr_t))(Il2CppBase() + 0x1A39A90))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(HireTalkTrigger*))(Il2CppBase() + 0x1A39A98))(this);
	}

};

}
