#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayConfirm"));
	}

	template <typename T = bool> T& NeedDealyTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& DefaultAgreeString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AgreeButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DisagreeButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& afterAgreeClick() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& afterDisagreeClick() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _checkTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& coroutine() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5A38))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5C08))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5D4C))(this);
	}
	template <typename T = void> T OnClickAgree() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5DF4))(this);
	}
	template <typename T = void> T OnClickDisagree() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5EA8))(this);
	}
	template <typename T = uintptr_t> T ReadTimeReducing() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5C98))(this);
	}
	template <typename T = void> T UpdateTimeText() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x42E5F70))(this);
	}

};

}
