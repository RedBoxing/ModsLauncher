#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdvanceToturialManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvanceToturialManager"));
	}

	template <typename T = uintptr_t> T& enterClip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& entered() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& bundle_name() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& pass_pos() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& trainning_talk_list() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& talk_around_stake_list() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& need_change_pos() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& finished_adv_toturial() {
		return *(T*)((uintptr_t)this + 0xF1);
	}
	template <typename T = int32_t> T& talk_index() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& adv_talk_keys() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& adv_talks() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& last_talk_time() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& _beforeEnterTutorialEvent() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A11A38))(this);
	}
	template <typename T = void> T InvokeTalkTips(uintptr_t e) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A11FA0))(this, e);
	}
	template <typename T = void> T CreateRoomTrainer(uintptr_t e) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A120B8))(this, e);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A12430))(this);
	}
	template <typename T = void> T AddFinishEmail(uintptr_t e) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A12734))(this, e);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A11DD0))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A12564))(this);
	}
	template <typename T = void> T TalkTips() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A129AC))(this);
	}
	template <typename T = void> T StakeHurt(uintptr_t e) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A12C70))(this, e);
	}
	template <typename T = void> T TalkAroundStake() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A12D50))(this);
	}
	template <typename T = void> T StakeDestroy(uintptr_t e) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A12EA4))(this, e);
	}
	template <typename T = void> T StakeDestroy1() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A12F98))(this);
	}
	template <typename T = void> T StakeDestroy2() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A130BC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A131C0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A132BC))(this, other);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1A133D0))(this, controller, state);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A135D0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A136E8))(this, controller);
	}
	template <typename T = void> T LoadScene() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A13950))(this);
	}
	template <typename T = uintptr_t> T EnterToturial() {
		return ((T (*)(AdvanceToturialManager*))(Il2CppBase() + 0x1A139C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A13D50))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A13D58))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1A13D60))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A13D68))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(AdvanceToturialManager*, uintptr_t))(Il2CppBase() + 0x1A13D70))(this, P0);
	}

};

}
