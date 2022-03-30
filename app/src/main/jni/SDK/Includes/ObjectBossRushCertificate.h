#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBossRushCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBossRushCertificate"));
	}

	template <typename T = uintptr_t> T& item_icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& the_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A1E4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectBossRushCertificate*, uintptr_t))(Il2CppBase() + 0x1D4A4B4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectBossRushCertificate*, uintptr_t))(Il2CppBase() + 0x1D4A674))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A800))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A860))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A8EC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A94C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectBossRushCertificate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D4A9AC))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectBossRushCertificate*, uintptr_t))(Il2CppBase() + 0x1D4AA24))(this, controller);
	}
	template <typename T = void> T ChangeEdge() {
		return ((T (*)(ObjectBossRushCertificate*))(Il2CppBase() + 0x1D4A364))(this);
	}

};

}
