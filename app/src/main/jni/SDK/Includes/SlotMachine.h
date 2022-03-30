#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SlotMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotMachine"));
	}

	template <typename T = int32_t> static T& SHOW_RESULT_RATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AWARD_RATE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& awardArr() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& punishmentArr() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_moveSpeed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& awardItemCreateHandlerDic() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& awardItemSpriteIconDic() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& handSps() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& potDistributions() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& thunderBulletInfo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& nuclearBulletInfo() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& nuclearUpAnim() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& shootClip() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& warningClip() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& item_name_destory() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppString*> T& slotmachine_destory() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& slotmachine_play() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppString*> T& slotmachine_hit() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> T& slotmachine_not_hit() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& slotmachine_not_enough() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& slotmachine_thunder() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& slotmachine_nuclear_boom() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& rolling() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& brokenSlotMachine() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& idleTransform() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& downTransform() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& handSR() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& pointSR() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& isBroken() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = int32_t> T& weaponLevel() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& coinValArr() {
		return *(T*)((uintptr_t)this + 0x188);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1837AB0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1837F3C))(this);
	}
	template <typename T = void> T ShowObjectInfo() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1837FD0))(this);
	}
	template <typename T = void> T ShowUpEffect(Il2CppVector3 pos) {
		return ((T (*)(SlotMachine*, Il2CppVector3))(Il2CppBase() + 0x18380F0))(this, pos);
	}
	template <typename T = void> T CreateNothing() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1838270))(this);
	}
	template <typename T = void> T CreateMaterial() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x18383D4))(this);
	}
	template <typename T = void> T CreateWeapon() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x18385B0))(this);
	}
	template <typename T = void> T CreatePot() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1838988))(this);
	}
	template <typename T = void> T CreateCoin() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1838B68))(this);
	}
	template <typename T = void> T CreateCoinCount(int32_t count) {
		return ((T (*)(SlotMachine*, int32_t))(Il2CppBase() + 0x1838C94))(this, count);
	}
	template <typename T = void> T CreateBuffBall() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1839018))(this);
	}
	template <typename T = void> T CreateThunderHurt() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1839220))(this);
	}
	template <typename T = void> T CreateNuclearHurt() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x18397EC))(this);
	}
	template <typename T = uintptr_t> T LaunchNuclear() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183996C))(this);
	}
	template <typename T = void> T LaunchNuclearBomb(Il2CppVector2 targetPos) {
		return ((T (*)(SlotMachine*, Il2CppVector2))(Il2CppBase() + 0x1839A20))(this, targetPos);
	}
	template <typename T = void> T HideNormalSlotMachine() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1839CF8))(this);
	}
	template <typename T = void> T RollItem() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x1839F04))(this);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A2B8))(this, controller);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A35C))(this, other);
	}
	template <typename T = void> T ShowTalkText(Il2CppString* key, Il2CppString* defaultContent) {
		return ((T (*)(SlotMachine*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1838308))(this, key, defaultContent);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A400))(this, controller);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A588))(this, controller);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183A8F4))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A96C))(this, controller);
	}
	template <typename T = void> T CatchStart(uintptr_t award) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183A028))(this, award);
	}
	template <typename T = void> T OnCatchSomething(uintptr_t award) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183AA88))(this, award);
	}
	template <typename T = void> T HandShowCatchStatae(bool catchState) {
		return ((T (*)(SlotMachine*, bool))(Il2CppBase() + 0x183AC3C))(this, catchState);
	}
	template <typename T = uintptr_t> T GetRandomAwardData() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183AD00))(this);
	}
	template <typename T = void> T CreateItem(uintptr_t award) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183ADA8))(this, award);
	}
	template <typename T = void> T LaunchNuclearBombb__48_0() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183AF84))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183B008))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183B010))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183B018))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183B020))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183B028))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(SlotMachine*))(Il2CppBase() + 0x183B030))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(SlotMachine*, uintptr_t))(Il2CppBase() + 0x183B038))(this, P0);
	}

};

}
