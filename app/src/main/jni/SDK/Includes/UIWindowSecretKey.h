#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowSecretKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowSecretKey"));
	}

	template <typename T = uintptr_t> T& error_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& input_field() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& object_img() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& title() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowSecretKey*))(Il2CppBase() + 0x4326AF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowSecretKey*))(Il2CppBase() + 0x4326C0C))(this);
	}
	template <typename T = void> T HandleOriginException(uintptr_t exception) {
		return ((T (*)(UIWindowSecretKey*, uintptr_t))(Il2CppBase() + 0x4326CC4))(this, exception);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UIWindowSecretKey*))(Il2CppBase() + 0x4326E78))(this);
	}
	template <typename T = int32_t> T OldGiftCode() {
		return ((T (*)(UIWindowSecretKey*))(Il2CppBase() + 0x432740C))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowSecretKey*))(Il2CppBase() + 0x4327C14))(this);
	}
	template <typename T = void> T ShowUIWinowObject(Il2CppString* object_name) {
		return ((T (*)(UIWindowSecretKey*, Il2CppString*))(Il2CppBase() + 0x4327A54))(this, object_name);
	}
	template <typename T = int32_t> T GetOtherReward(uintptr_t hero, int32_t skin) {
		return ((T (*)(UIWindowSecretKey*, uintptr_t, int32_t))(Il2CppBase() + 0x43277C8))(this, hero, skin);
	}
	template <typename T = void> T HandleOriginExceptionb__7_0(bool success) {
		return ((T (*)(UIWindowSecretKey*, bool))(Il2CppBase() + 0x4327D08))(this, success);
	}
	template <typename T = void> T BtnYesClickb__8_0(bool getResult, Il2CppString* data) {
		return ((T (*)(UIWindowSecretKey*, bool, Il2CppString*))(Il2CppBase() + 0x4327DF0))(this, getResult, data);
	}

};

}
