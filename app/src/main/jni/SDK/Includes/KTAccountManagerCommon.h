#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTAccountManagerCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTAccountManagerCommon"));
	}


	template <typename T = void> static T SetLoginStatusChange(uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A74C4))(0, obj, callbackMethod);
	}
	template <typename T = void> static T UserProfile(Il2CppString* userId, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A753C))(0, userId, obj, callbackMethod);
	}
	template <typename T = void> static T ShowLoginView(bool closeable, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A75C0))(0, closeable, obj, callbackMethod);
	}
	template <typename T = void> static T loginWithGameUser(Il2CppString* gameUserId, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A7644))(0, gameUserId, obj, callbackMethod);
	}
	template <typename T = void> static T Logout() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A7310))(0);
	}
	template <typename T = bool> static T IsLoggedIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A73B8))(0);
	}
	template <typename T = uintptr_t> static T CurrentAccount() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A7460))(0);
	}
	template <typename T = void> static T UpdateProfile(Il2CppString* nickname, Il2CppString* avatarPath, int32_t gender, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A76C8))(0, nickname, avatarPath, gender, obj, callbackMethod);
	}
	template <typename T = void> static T UpdateVipLevel(int32_t vipLevel, uintptr_t obj, uintptr_t callbackMethod) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21A7770))(0, vipLevel, obj, callbackMethod);
	}
	template <typename T = void> static T setUserProfileLocks(int32_t properties) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x21A725C))(0, properties);
	}

};

}
