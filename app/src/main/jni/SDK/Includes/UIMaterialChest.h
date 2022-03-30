#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMaterialChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMaterialChest"));
	}

	template <typename T = uintptr_t> T& itemList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& trEmpty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& itemProto() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& seedProto() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& scrollProto() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ticketProto() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tapeProto() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btnGroupNormal() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& btnGroupTicket() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& selectedTicket() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isTicket() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& currentTabIndex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& toggles() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4343E04))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4344124))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4344180))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43441DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43442C4))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43443D8))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43445D0))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4344768))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43449B4))(this);
	}
	template <typename T = void> T OnClick_Tab(int32_t index) {
		return ((T (*)(UIMaterialChest*, int32_t))(Il2CppBase() + 0x4344C3C))(this, index);
	}
	template <typename T = void> T Refresh(int32_t index) {
		return ((T (*)(UIMaterialChest*, int32_t))(Il2CppBase() + 0x4344CB4))(this, index);
	}
	template <typename T = uintptr_t> T ScrollRectDontFadeAtTopOrBottom() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4346FCC))(this);
	}
	template <typename T = void> T AfterRefresh(int32_t index) {
		return ((T (*)(UIMaterialChest*, int32_t))(Il2CppBase() + 0x43470AC))(this, index);
	}
	template <typename T = void> T CreateItem(Il2CppString* materialName, int32_t materialCount) {
		return ((T (*)(UIMaterialChest*, Il2CppString*, int32_t))(Il2CppBase() + 0x43456EC))(this, materialName, materialCount);
	}
	template <typename T = void> T CreateTicketItem(Il2CppString* ticketName, int32_t count) {
		return ((T (*)(UIMaterialChest*, Il2CppString*, int32_t))(Il2CppBase() + 0x4346380))(this, ticketName, count);
	}
	template <typename T = void> T CreateTapeItem(Il2CppString* tapeName) {
		return ((T (*)(UIMaterialChest*, Il2CppString*))(Il2CppBase() + 0x4346B68))(this, tapeName);
	}
	template <typename T = void> T OnSelectTicket(Il2CppString* ticketName) {
		return ((T (*)(UIMaterialChest*, Il2CppString*))(Il2CppBase() + 0x434712C))(this, ticketName);
	}
	template <typename T = void> T OnSelectTape(Il2CppString* bgmName) {
		return ((T (*)(UIMaterialChest*, Il2CppString*))(Il2CppBase() + 0x43471A8))(this, bgmName);
	}
	template <typename T = void> T CreateSeedItem(Il2CppString* seedName, int32_t seedCount) {
		return ((T (*)(UIMaterialChest*, Il2CppString*, int32_t))(Il2CppBase() + 0x4345DC8))(this, seedName, seedCount);
	}
	template <typename T = void> T SwitchBtnGroup(bool _isTicket) {
		return ((T (*)(UIMaterialChest*, bool))(Il2CppBase() + 0x43455DC))(this, _isTicket);
	}
	template <typename T = void> T SelectTabLeft() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4347430))(this);
	}
	template <typename T = void> T SelectTabRight() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x4347514))(this);
	}
	template <typename T = bool> T get_IsSelf() {
		return ((T (*)(UIMaterialChest*))(Il2CppBase() + 0x43475F8))(this);
	}

};

}
