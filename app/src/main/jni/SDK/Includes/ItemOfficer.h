#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemOfficer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemOfficer"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& trTab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& trRewardChallenge() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& trRewardEnemy() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& rewarded() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& officerFactors() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& battleFactorChanger() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talks() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& completedTask() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCC5BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCC678))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCC898))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCC94C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCCA0C))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCCB34))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCD09C))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCE370))(this, controller);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCC748))(this);
	}
	template <typename T = uintptr_t> T GetRewadableTask() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCE56C))(this);
	}
	template <typename T = void> T GetReward() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCDC4C))(this);
	}
	template <typename T = void> T AcceptTask() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCE8CC))(this);
	}
	template <typename T = void> T CancelTask() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCE9B0))(this);
	}
	template <typename T = void> T ChangeBattleFactor() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCD9CC))(this);
	}
	template <typename T = void> T SetBattleFactor(bool isSet) {
		return ((T (*)(ItemOfficer*, bool))(Il2CppBase() + 0x1CCD654))(this, isSet);
	}
	template <typename T = void> T RemoveFactors() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCEA94))(this);
	}
	template <typename T = void> T AddFactors(Il2CppList<uintptr_t>* factors) {
		return ((T (*)(ItemOfficer*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1CCEC6C))(this, factors);
	}
	template <typename T = void> T SayHi() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCCFA8))(this);
	}
	template <typename T = void> T AddTaskCount() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCEE4C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemOfficer*))(Il2CppBase() + 0x1CCF0CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0D4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0DC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0E4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0EC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0F4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ItemOfficer*, uintptr_t))(Il2CppBase() + 0x1CCF0FC))(this, P0);
	}

};

}
