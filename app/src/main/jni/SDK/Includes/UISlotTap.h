#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UISlotTap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UISlotTap"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& spr_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& this_index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& the_slot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& img_1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& img_2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& img_3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& lowdow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& a_speed() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UISlotTap*))(Il2CppBase() + 0x424156C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UISlotTap*))(Il2CppBase() + 0x4241714))(this);
	}
	template <typename T = void> T StartRoll() {
		return ((T (*)(UISlotTap*))(Il2CppBase() + 0x4240044))(this);
	}
	template <typename T = void> T LowDown() {
		return ((T (*)(UISlotTap*))(Il2CppBase() + 0x42417F4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UISlotTap*))(Il2CppBase() + 0x4241858))(this);
	}
	template <typename T = void> T ChangeImg(int32_t value) {
		return ((T (*)(UISlotTap*, int32_t))(Il2CppBase() + 0x4241948))(this, value);
	}

};

}
