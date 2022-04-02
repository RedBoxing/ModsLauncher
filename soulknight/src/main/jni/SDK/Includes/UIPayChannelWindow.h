#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPayChannelWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPayChannelWindow"));
	}

	template <typename T = Il2CppString*> static T& WindowName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& OnPurchaseDone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& channelIds() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T GetChannelId(uintptr_t payChannel) {
		return ((T (*)(UIPayChannelWindow*, uintptr_t))(Il2CppBase() + 0x4234BF8))(this, payChannel);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x4234CA0))(this);
	}
	template <typename T = void> static T Show(Il2CppString* key, void* OnPurchaseDone) {
		return ((T (*)(void *, Il2CppString*, void*))(Il2CppBase() + 0x4234CFC))(0, key, OnPurchaseDone);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x4235138))(this);
	}
	template <typename T = bool> static T TryHide() {
		return ((T (*)(void *))(Il2CppBase() + 0x42351B8))(0);
	}
	template <typename T = void> T OnClick_WechatPay() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x42353DC))(this);
	}
	template <typename T = void> T OnClick_Alipay() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x4235448))(this);
	}
	template <typename T = void> T OnClick_ThridPay() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x42354B4))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x4235520))(this);
	}
	template <typename T = void> T HandleButtons() {
		return ((T (*)(UIPayChannelWindow*))(Il2CppBase() + 0x4234FF4))(this);
	}

};

}
