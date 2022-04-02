#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPromoteMan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPromoteMan"));
	}

	template <typename T = Il2CppString*> T& uiPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& gemsIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& gameId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& movable() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& speedReduce() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& tab() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& tabDissmissed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& tabTempHiding() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& labelFix() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& moved() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& _running() {
		return *(T*)((uintptr_t)this + 0xDD);
	}
	template <typename T = uintptr_t> T& _rigidbody2D() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD66B4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD676C))(this);
	}
	template <typename T = void> T TryShowTab() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD69EC))(this);
	}
	template <typename T = void> T HideTab() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD6D38))(this);
	}
	template <typename T = void> T CheckVisible() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD6954))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD6DD0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD70B8))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD7194))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD728C))(this, controller);
	}
	template <typename T = uintptr_t> T Scout() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD68A0))(this);
	}
	template <typename T = uintptr_t> T Moving() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD758C))(this);
	}
	template <typename T = void> T OnCollisionEnter2D(uintptr_t collision) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD766C))(this, collision);
	}
	template <typename T = bool> T get_running() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD7758))(this);
	}
	template <typename T = void> T set_running(bool value) {
		return ((T (*)(ItemPromoteMan*, bool))(Il2CppBase() + 0x1CD77B8))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD78A0))(this);
	}
	template <typename T = void> T OnItemTriggerSuccessb__19_2() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD7B5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemPromoteMan*))(Il2CppBase() + 0x1CD7C04))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD7C0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD7C14))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD7C1C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemPromoteMan*, uintptr_t))(Il2CppBase() + 0x1CD7C24))(this, P0);
	}

};

}
