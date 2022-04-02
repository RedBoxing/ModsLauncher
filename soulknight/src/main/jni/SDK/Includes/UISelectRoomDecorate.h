#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISelectRoomDecorate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISelectRoomDecorate"));
	}

	template <typename T = uintptr_t> T& roomDecorateList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& trEmpty() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& roomDecorateProto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& slot() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423C44C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423C5A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423C5FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423C658))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t slot) {
		return ((T (*)(UISelectRoomDecorate*, uintptr_t))(Il2CppBase() + 0x423C9B4))(this, slot);
	}
	template <typename T = void> T ShowWindow_1() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423CE18))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423D010))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423C764))(this);
	}
	template <typename T = void> T FlushRoomDecorates() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423CA34))(this);
	}
	template <typename T = void> T CreateRoomDecorateItem(Il2CppString* decorate_name) {
		return ((T (*)(UISelectRoomDecorate*, Il2CppString*))(Il2CppBase() + 0x423D1A8))(this, decorate_name);
	}
	template <typename T = void> T OnClick_RoomDecorate() {
		return ((T (*)(UISelectRoomDecorate*))(Il2CppBase() + 0x423D480))(this);
	}

};

}
