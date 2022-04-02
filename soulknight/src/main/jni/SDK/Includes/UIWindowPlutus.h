#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPlutus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPlutus"));
	}

	template <typename T = uintptr_t> T& option1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& option_yes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& option_no() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& text_option1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_imgs() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& object_descs() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& toDriedFishStore() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4317840))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4317A38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4318080))(this);
	}
	template <typename T = void> T UpdateTextInfo() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4317B4C))(this);
	}
	template <typename T = void> T BtnBackClick() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4318148))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4318290))(this);
	}
	template <typename T = void> T BtnOptionClick() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4318358))(this);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x43184C0))(this);
	}
	template <typename T = void> T BtnNoClick() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x43186C4))(this);
	}
	template <typename T = void> T BuyFishClip1(bool value) {
		return ((T (*)(UIWindowPlutus*, bool))(Il2CppBase() + 0x431882C))(this, value);
	}
	template <typename T = void> T CheckReward() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4317E80))(this);
	}
	template <typename T = void> T ShowReward(int32_t index) {
		return ((T (*)(UIWindowPlutus*, int32_t))(Il2CppBase() + 0x43188BC))(this, index);
	}
	template <typename T = void> T BtnStoreClick() {
		return ((T (*)(UIWindowPlutus*))(Il2CppBase() + 0x4318B88))(this);
	}

};

}
