#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIRoomDecorate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIRoomDecorate"));
	}

	template <typename T = uintptr_t> T& room_decorate_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& trEmpty() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& room_decorate_proto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& slot() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x42392F8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x423944C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x42394A8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x4239504))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t slot) {
		return ((T (*)(UIRoomDecorate*, uintptr_t))(Il2CppBase() + 0x4239860))(this, slot);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x4239970))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x42399CC))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x4239610))(this);
	}
	template <typename T = void> T FlushRoomDecorate() {
		return ((T (*)(UIRoomDecorate*))(Il2CppBase() + 0x42398E0))(this);
	}

};

}
