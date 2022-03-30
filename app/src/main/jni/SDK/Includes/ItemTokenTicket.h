#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemTokenTicket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemTokenTicket"));
	}

	template <typename T = uintptr_t> static T& _protoType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NoneTargetString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& tokenType() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ticketSprites() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ticketSpritesWithTarget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& TransformWeaponsInHeroTokenTicket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_Prototype() {
		return ((T (*)(void *))(Il2CppBase() + 0x2199148))(0);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ItemTokenTicket*, int32_t))(Il2CppBase() + 0x21992B0))(this, seed);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemTokenTicket*, uintptr_t))(Il2CppBase() + 0x219932C))(this, controller);
	}
	template <typename T = uintptr_t> T GetTargetObject(uintptr_t rg_random) {
		return ((T (*)(ItemTokenTicket*, uintptr_t))(Il2CppBase() + 0x21993A8))(this, rg_random);
	}
	template <typename T = void> T ResetSprite() {
		return ((T (*)(ItemTokenTicket*))(Il2CppBase() + 0x2199970))(this);
	}
	template <typename T = void> T ResetIconSprite() {
		return ((T (*)(ItemTokenTicket*))(Il2CppBase() + 0x21999D8))(this);
	}
	template <typename T = void> T ResetIconPosition() {
		return ((T (*)(ItemTokenTicket*))(Il2CppBase() + 0x2199D4C))(this);
	}
	template <typename T = void> T ResetName() {
		return ((T (*)(ItemTokenTicket*))(Il2CppBase() + 0x219A318))(this);
	}
	template <typename T = Il2CppString*> T GetTokenName() {
		return ((T (*)(ItemTokenTicket*))(Il2CppBase() + 0x219A388))(this);
	}
	template <typename T = void> T SetTokenName(Il2CppString* tokenName) {
		return ((T (*)(ItemTokenTicket*, Il2CppString*))(Il2CppBase() + 0x219A5F4))(this, tokenName);
	}
	template <typename T = uintptr_t> static T CreateWeapon(Il2CppString* ticket) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x219A958))(0, ticket);
	}
	template <typename T = Il2CppString*> static T GetTokenName_1(uintptr_t tokenType, Il2CppString* targetName, int32_t level) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x219A464))(0, tokenType, targetName, level);
	}
	template <typename T = uintptr_t> static T GetInfo(uintptr_t tokenType, Il2CppString* targetName, int32_t level) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x219AB74))(0, tokenType, targetName, level);
	}
	template <typename T = uintptr_t> static T GetTicketSprite(uintptr_t tokenType, Il2CppString* ticketName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x219A12C))(0, tokenType, ticketName);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ItemTokenTicket*, int32_t))(Il2CppBase() + 0x219AE00))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemTokenTicket*, uintptr_t))(Il2CppBase() + 0x219AE08))(this, P0);
	}

};

}
