#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkCharNpc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkCharNpc"));
	}

	template <typename T = uintptr_t> T& char_npc_type() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& char_index() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& talk_name() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& talk_string1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& talk_string2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& has_trigger() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& the_object() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& drinkDistribute() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D2594))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D2658))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D2828))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D2A2C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D2BEC))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(TalkCharNpc*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x18D3A3C))(this, controller, ext_info);
	}
	template <typename T = void> T TriggerSuccess(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D36F0))(this, controller);
	}
	template <typename T = void> T GetMerenary(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D3AF8))(this, controller);
	}
	template <typename T = void> T GetWeapon(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D3D30))(this, controller);
	}
	template <typename T = void> T GetHP(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D4EA4))(this, controller);
	}
	template <typename T = void> T GetEnergy(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D3FE4))(this, controller);
	}
	template <typename T = void> T GetWolf(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D5018))(this, controller);
	}
	template <typename T = void> T GetPot(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D4164))(this, controller);
	}
	template <typename T = void> T GetObject(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D45DC))(this, controller);
	}
	template <typename T = void> T GetGate(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D4834))(this, controller);
	}
	template <typename T = void> T GetTickey(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D4B88))(this, controller);
	}
	template <typename T = void> T GetSeed(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D5334))(this, controller);
	}
	template <typename T = void> T GetMaterial(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D56C4))(this, controller);
	}
	template <typename T = void> T GetDrink(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D5A2C))(this, controller);
	}
	template <typename T = void> T GetEquipment(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D5FA8))(this, controller);
	}
	template <typename T = void> T GetMount(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D6858))(this, controller);
	}
	template <typename T = void> T GetBattleFactor(uintptr_t controller) {
		return ((T (*)(TalkCharNpc*, uintptr_t))(Il2CppBase() + 0x18D6450))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D3690))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D6D14))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D6DA0))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(TalkCharNpc*))(Il2CppBase() + 0x18D6E00))(this);
	}

};

}
