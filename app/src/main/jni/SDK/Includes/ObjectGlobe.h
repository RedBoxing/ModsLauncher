#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectGlobe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectGlobe"));
	}

	template <typename T = bool> T& open_kt_play() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& gold_icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& item_tf() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectGlobe*))(Il2CppBase() + 0x1D6185C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectGlobe*, uintptr_t))(Il2CppBase() + 0x1D61968))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectGlobe*, uintptr_t))(Il2CppBase() + 0x1D61B40))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectGlobe*, uintptr_t))(Il2CppBase() + 0x1D61CCC))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectGlobe*))(Il2CppBase() + 0x1D61D40))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectGlobe*))(Il2CppBase() + 0x1D61DA0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectGlobe*))(Il2CppBase() + 0x1D61E2C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectGlobe*))(Il2CppBase() + 0x1D61E8C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectGlobe*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D61EEC))(this, controller, ext_info);
	}
	template <typename T = void> T GetKtPlayReward(uintptr_t reward) {
		return ((T (*)(ObjectGlobe*, uintptr_t))(Il2CppBase() + 0x1D61F64))(this, reward);
	}

};

}
