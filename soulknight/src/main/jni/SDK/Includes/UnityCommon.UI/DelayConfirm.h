#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class DelayConfirm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "DelayConfirm"));
	}

	template <typename T = bool> T& NeedDealyTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& DefaultAgreeBtnString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& DefaultDisAgreeBtnString() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ContentText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ConfirmText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& AgreeButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& DisagreeButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& afterAgreeClick() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& afterDisagreeClick() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _checkTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& coroutine() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E9408))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E9614))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E9758))(this);
	}
	template <typename T = void> T OnClickAgree() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E9800))(this);
	}
	template <typename T = void> T OnClickDisagree() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E98B4))(this);
	}
	template <typename T = uintptr_t> T ReadTimeReducing() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E96A4))(this);
	}
	template <typename T = void> T UpdateTimeText() {
		return ((T (*)(DelayConfirm*))(Il2CppBase() + 0x43E997C))(this);
	}
	template <typename T = void> T ShowDelayConfirm(Il2CppString* desc, Il2CppString* confirmContent, uintptr_t agreeAction, uintptr_t disagreeAction, int32_t delaySeconds, Il2CppString* agreeBtnString, Il2CppString* disagreeBtnString) {
		return ((T (*)(DelayConfirm*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43E9AE4))(this, desc, confirmContent, agreeAction, disagreeAction, delaySeconds, agreeBtnString, disagreeBtnString);
	}

};

}
