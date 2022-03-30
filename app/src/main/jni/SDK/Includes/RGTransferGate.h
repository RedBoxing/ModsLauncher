#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTransferGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTransferGate"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isSpecificBranch() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& branchIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& triggerd() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& secondConfirm() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = Il2CppString*> T& creator_name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E5474))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E55E4))(this);
	}
	template <typename T = void> T OnHide() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E5640))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E5768))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGTransferGate*, uintptr_t))(Il2CppBase() + 0x43E5874))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGTransferGate*, uintptr_t))(Il2CppBase() + 0x43E5A9C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGTransferGate*, uintptr_t))(Il2CppBase() + 0x43E5C70))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGTransferGate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43E62C4))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E66C4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E6724))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E67B0))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E6810))(this);
	}
	template <typename T = void> T SetCreator(Il2CppString* creator_name) {
		return ((T (*)(RGTransferGate*, Il2CppString*))(Il2CppBase() + 0x43E6870))(this, creator_name);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E5510))(this);
	}
	template <typename T = void> T ItemTriggerb__14_0() {
		return ((T (*)(RGTransferGate*))(Il2CppBase() + 0x43E6944))(this);
	}

};

}
