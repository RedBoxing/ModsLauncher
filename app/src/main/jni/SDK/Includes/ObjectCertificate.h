#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectCertificate"));
	}

	template <typename T = uintptr_t> T& item_icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& certificate_index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& the_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D51840))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectCertificate*, uintptr_t))(Il2CppBase() + 0x1D51B20))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectCertificate*, uintptr_t))(Il2CppBase() + 0x1D51CE0))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D51E6C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D51ECC))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D51F58))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D51FB8))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectCertificate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D52018))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectCertificate*, uintptr_t))(Il2CppBase() + 0x1D52090))(this, controller);
	}
	template <typename T = void> T ChangeEdge() {
		return ((T (*)(ObjectCertificate*))(Il2CppBase() + 0x1D519C8))(this);
	}

};

}
