#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTAccountManagerAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTAccountManagerAndroid"));
	}


	template <typename T = void> static T SetLoginStatusChangeCallback(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AA120))(0, obj, callbackMethod);
	}
	template <typename T = void> static T UserProfile(Il2CppString* userId, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AA390))(0, userId, obj, callbackMethod);
	}
	template <typename T = void> static T ShowLoginView(bool closeable, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AA65C))(0, closeable, obj, callbackMethod);
	}
	template <typename T = void> static T loginWithGameUser(Il2CppString* gameUserId, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AA93C))(0, gameUserId, obj, callbackMethod);
	}
	template <typename T = void> static T UpdateProfile(Il2CppString* nickName, Il2CppString* avatarPath, int32_t gender, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AAC08))(0, nickName, avatarPath, gender, obj, callbackMethod);
	}
	template <typename T = void> static T UpdateVipLevel(int32_t vipLevel, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21AAF8C))(0, vipLevel, obj, callbackMethod);
	}
	template <typename T = void> static T setUserProfileLocks(int32_t properties) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x21AB268))(0, properties);
	}
	template <typename T = bool> static T IsLoggedIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x21AB3CC))(0);
	}
	template <typename T = void> static T Logout() {
		return ((T (*)(void *))(Il2CppBase() + 0x21AB4B0))(0);
	}
	template <typename T = uintptr_t> static T CurrentAccount() {
		return ((T (*)(void *))(Il2CppBase() + 0x21AB58C))(0);
	}
	template <typename T = void> static T UseExternalLogin() {
		return ((T (*)(void *))(Il2CppBase() + 0x21ABB08))(0);
	}

};

}
