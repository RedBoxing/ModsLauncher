#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowBroadcast
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowBroadcast"));
	}

	template <typename T = uintptr_t> T& ipUID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ipOpenId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ipDevice() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& txRealName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& txPlayedTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& imRealNameIcon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txVersion() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& txChannel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& txService() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& txServicePhone() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& trPrivacy() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& trLogOff() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& trGashapon_probility() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x4588CC4))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x45892FC))(this);
	}
	template <typename T = Il2CppString*> static T ReplaceOPPOString(uintptr_t text, Il2CppString* str) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4584A38))(0, text, str);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A4C4))(this);
	}
	template <typename T = void> T OnClick_RealNameChange() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A570))(this);
	}
	template <typename T = void> static T StaticShowPrivacyAgreement() {
		return ((T (*)(void *))(Il2CppBase() + 0x457CB38))(0);
	}
	template <typename T = void> T OnClick_Privacy_Agreement() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A630))(this);
	}
	template <typename T = void> T OnClick_Gashapon_Probaility() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A68C))(this);
	}
	template <typename T = Il2CppString*> T GetChannelName() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A1E4))(this);
	}
	template <typename T = Il2CppString*> T GetRealNameText() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x4589C50))(this);
	}
	template <typename T = Il2CppString*> T GetPlayedTime() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A0D4))(this);
	}
	template <typename T = Il2CppString*> T GetServiceInfo() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A288))(this);
	}
	template <typename T = Il2CppString*> T GetServicePhone() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A314))(this);
	}
	template <typename T = Il2CppString*> T GetPrivacyAgreementURL() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A3A8))(this);
	}
	template <typename T = void> T DealLogOffActive() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A434))(this);
	}
	template <typename T = void> T ClickLogOff() {
		return ((T (*)(UIWindowBroadcast*))(Il2CppBase() + 0x458A7D0))(this);
	}

};

}
