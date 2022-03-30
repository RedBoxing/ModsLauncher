#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITeaching
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITeaching"));
	}

	template <typename T = Il2CppString*> static T& FORGE_WEAPON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& fixed_x() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& fixed_y() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& knight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& dog() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ticket() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& teach_target_infos() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& teach_target_infos_map() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& current_teach() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& the_button() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ui_chose_hero() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& destroy_count() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& frame_count() {
		return *(T*)((uintptr_t)this + 0xB4);
	}

	template <typename T = uintptr_t> T get_ui_forge() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C5EE8))(this);
	}
	template <typename T = uintptr_t> T get_ui_plant() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C5F94))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C6040))(this);
	}
	template <typename T = void> T MoveToPos(int32_t idx) {
		return ((T (*)(UITeaching*, int32_t))(Il2CppBase() + 0x41C6700))(this, idx);
	}
	template <typename T = uintptr_t> T GetRectTransformByIdx(int32_t idx) {
		return ((T (*)(UITeaching*, int32_t))(Il2CppBase() + 0x41C6C0C))(this, idx);
	}
	template <typename T = void> T OnApplicationFocus() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C6DF0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C6EA0))(this);
	}
	template <typename T = void> T HeroBtnConfirm() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C718C))(this);
	}
	template <typename T = void> T HeroSkinBtnNext() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C7284))(this);
	}
	template <typename T = void> T OnBtnClick() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C737C))(this);
	}
	template <typename T = void> T WindowShowSkinReward() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C62D4))(this);
	}
	template <typename T = void> T WindowShowTicket() {
		return ((T (*)(UITeaching*))(Il2CppBase() + 0x41C87A8))(this);
	}

};

}
