#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemGallery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemGallery"));
	}

	template <typename T = Il2CppString*> T& assetBundle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& uiPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& hideInCNAndroid() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& isLoading() {
		return *(T*)((uintptr_t)this + 0xA9);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemGallery*))(Il2CppBase() + 0x1DA7E54))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA7EB8))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA8160))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA8258))(this, controller);
	}
	template <typename T = uintptr_t> T ShowingUi() {
		return ((T (*)(ItemGallery*))(Il2CppBase() + 0x1DA8670))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemGallery*))(Il2CppBase() + 0x1DA87B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA87C0))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA87C8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemGallery*, uintptr_t))(Il2CppBase() + 0x1DA87D0))(this, P0);
	}

};

}
