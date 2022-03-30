#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChannelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChannelConfig"));
	}

	template <typename T = bool> static T& IntlRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& Fn4399() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& Fn43Box() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& Hardcore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}
	template <typename T = bool> static T& TapTap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& GooglePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}

	template <typename T = Il2CppString*> static T GetChannelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873A18))(0);
	}
	template <typename T = bool> static T get_UseChillyAccount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873A84))(0);
	}
	template <typename T = bool> static T get_HasKTPlay() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873ADC))(0);
	}
	template <typename T = bool> static T get_HasBBS() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873B34))(0);
	}
	template <typename T = bool> static T get_IsTapTap() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873BCC))(0);
	}
	template <typename T = bool> static T get_IsOPPO() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873C78))(0);
	}
	template <typename T = bool> static T get_IsVIVO() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873D24))(0);
	}
	template <typename T = bool> static T get_IsHuaWei() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873DD0))(0);
	}
	template <typename T = bool> static T get_IsOVH() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873E7C))(0);
	}
	template <typename T = bool> static T get_IsGamePop() {
		return ((T (*)(void *))(Il2CppBase() + 0x1873F64))(0);
	}
	template <typename T = bool> static T get_IsBazaar() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874010))(0);
	}
	template <typename T = bool> static T get_IsHuaWeiOutseas() {
		return ((T (*)(void *))(Il2CppBase() + 0x18740BC))(0);
	}
	template <typename T = bool> static T get_IsHuaWeiTv() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874168))(0);
	}
	template <typename T = bool> static T get_IsGP() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874214))(0);
	}
	template <typename T = bool> static T get_IsAllIOS() {
		return ((T (*)(void *))(Il2CppBase() + 0x18742C0))(0);
	}
	template <typename T = bool> static T get_IsIOS_CN() {
		return ((T (*)(void *))(Il2CppBase() + 0x187437C))(0);
	}
	template <typename T = bool> static T get_IsIOS() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874428))(0);
	}
	template <typename T = bool> static T get_IsChuanyin() {
		return ((T (*)(void *))(Il2CppBase() + 0x18744D4))(0);
	}
	template <typename T = bool> static T get_HasCloudSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874580))(0);
	}
	template <typename T = bool> static T IsChineseLanguage(bool includeTW) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x187464C))(0, includeTW);
	}
	template <typename T = bool> static T get_HasNetGiftCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x18746F8))(0);
	}
	template <typename T = bool> static T get_RealNameDebug() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874818))(0);
	}
	template <typename T = bool> static T get_NeedCheckRealName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874870))(0);
	}
	template <typename T = bool> static T get_NeedAntiAddition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874938))(0);
	}
	template <typename T = bool> static T get_CanChangeRealName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874A88))(0);
	}
	template <typename T = void> static T ConfirmChannelName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1874B5C))(0);
	}

};

}
