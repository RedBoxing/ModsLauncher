#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIItemTowerNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIItemTowerNode"));
	}

	template <typename T = bool> T& select() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_map() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x4339D30))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(UIItemTowerNode*, uintptr_t))(Il2CppBase() + 0x4339DC0))(this, data);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x4339F38))(this);
	}
	template <typename T = void> T Select() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x4339FAC))(this);
	}
	template <typename T = void> T CancelSelect() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x433A030))(this);
	}
	template <typename T = void> T Confirm() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x433A094))(this);
	}
	template <typename T = void> T StartLoad() {
		return ((T (*)(UIItemTowerNode*))(Il2CppBase() + 0x433A17C))(this);
	}

};

}
