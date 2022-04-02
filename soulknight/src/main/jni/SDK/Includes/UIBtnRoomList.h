#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIBtnRoomList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIBtnRoomList"));
	}

	template <typename T = Il2CppString*> T& svrAddr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& theRoomInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& room_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& text_version() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& bossrush_mode_icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& baadss_mode_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& sameMd5() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& sameVersion() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& can_click() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = int64_t> T& gameId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factorImgs() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419ECA4))(this);
	}
	template <typename T = void> T SetRoomInfo(Il2CppString* addr, uintptr_t roomInfo) {
		return ((T (*)(UIBtnRoomList*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x419EE3C))(this, addr, roomInfo);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419EED0))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419F804))(this);
	}
	template <typename T = void> T JoinRoom() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419F9A8))(this);
	}
	template <typename T = void> T CheckSavedate() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419FB80))(this);
	}
	template <typename T = void> T ConnectToHost() {
		return ((T (*)(UIBtnRoomList*))(Il2CppBase() + 0x419FE78))(this);
	}

};

}
