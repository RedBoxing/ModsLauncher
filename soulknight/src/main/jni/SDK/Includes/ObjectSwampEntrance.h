#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSwampEntrance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSwampEntrance"));
	}

	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& recordCounts() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& exclusiveWeaponNames() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _swampSacrificeRecorder() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& noWeaponKey() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = void*> T& _exclusiveWeaponNames() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& bossDead() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& progressBar() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& _parentRoomName() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& getClosed() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = Il2CppString*> T get_parentRoomName() {
		return ((T (*)(ObjectSwampEntrance*))(Il2CppBase() + 0x1DC62C4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ObjectSwampEntrance*))(Il2CppBase() + 0x1DC63D8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ObjectSwampEntrance*))(Il2CppBase() + 0x1DC6624))(this);
	}
	template <typename T = void> T OnRoomClear(uintptr_t eventBase) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC6750))(this, eventBase);
	}
	template <typename T = void> T OnBossDead(uintptr_t eventBase) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC6880))(this, eventBase);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC6980))(this, controller);
	}
	template <typename T = bool> T IsSuitableWeapon(uintptr_t weapon) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC6B20))(this, weapon);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC6C60))(this, controller);
	}
	template <typename T = void> static T DestroyControllerWeapon(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1DC73FC))(0, controller);
	}
	template <typename T = int32_t> T GetRecordCount(uintptr_t handFrontWeapon) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC7348))(this, handFrontWeapon);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC7874))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC7AEC))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t, int32_t))(Il2CppBase() + 0x1DC7E98))(this, controller, state);
	}
	template <typename T = void> T ShowStateTab(uintptr_t controller, int32_t state) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t, int32_t))(Il2CppBase() + 0x1DC8148))(this, controller, state);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectSwampEntrance*))(Il2CppBase() + 0x1DC82FC))(this);
	}
	template <typename T = void> T ShowProgress(bool show) {
		return ((T (*)(ObjectSwampEntrance*, bool))(Il2CppBase() + 0x1DC7584))(this, show);
	}
	template <typename T = void> T OnGetClose(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC83A8))(this, controller);
	}
	template <typename T = void> T OnGetAway(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC84E4))(this, controller);
	}
	template <typename T = int32_t> T totalWeapons(uintptr_t controller) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC7FB8))(this, controller);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC85F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC85F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC8600))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC8608))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t, int32_t))(Il2CppBase() + 0x1DC8610))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ShowStateTab(uintptr_t P0, int32_t P1) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t, int32_t))(Il2CppBase() + 0x1DC8618))(this, P0, P1);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectSwampEntrance*))(Il2CppBase() + 0x1DC8620))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGetClose(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC8628))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnGetAway(uintptr_t P0) {
		return ((T (*)(ObjectSwampEntrance*, uintptr_t))(Il2CppBase() + 0x1DC8630))(this, P0);
	}

};

}
