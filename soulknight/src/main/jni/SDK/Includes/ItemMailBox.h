#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemMailBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMailBox"));
	}

	template <typename T = uintptr_t> T& noEmailObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& allReadEmailObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& notReadEmailObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& NoEmailSprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& AllReadEmailSprite() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& NotReadEmailSprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> static T& isFetched() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ItemMailBox*))(Il2CppBase() + 0x1DACAD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemMailBox*))(Il2CppBase() + 0x1DACEC0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ItemMailBox*))(Il2CppBase() + 0x1DAD448))(this);
	}
	template <typename T = void> T OnEnterShow(uintptr_t ctrl) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAD830))(this, ctrl);
	}
	template <typename T = void> T OnExitShow(uintptr_t ctrl) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAD960))(this, ctrl);
	}
	template <typename T = void> T OnItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAD9DC))(this, controller);
	}
	template <typename T = void> T OnRefleshAllEmail(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(ItemMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DADEA0))(this, emails);
	}
	template <typename T = void> T OnSetRead(uintptr_t email) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DADF14))(this, email);
	}
	template <typename T = void> T OnRemoveEmail(uintptr_t email) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DADF88))(this, email);
	}
	template <typename T = void> T OnAddEmail(uintptr_t email) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DADFFC))(this, email);
	}
	template <typename T = void> T RefleshState() {
		return ((T (*)(ItemMailBox*))(Il2CppBase() + 0x1DACF94))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnterShow(uintptr_t P0) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAE078))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnExitShow(uintptr_t P0) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAE080))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemMailBox*, uintptr_t))(Il2CppBase() + 0x1DAE088))(this, P0);
	}

};

}
