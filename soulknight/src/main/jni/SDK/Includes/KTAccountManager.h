#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTAccountManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTAccountManager"));
	}

	template <typename T = int32_t> static T& KT_USERPROFILE_PROPERTY_NICKNAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& KT_USERPROFILE_PROPERTY_AVATAR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& KT_USERPROFILE_PROPERTY_GENDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ktLoginStatusChangeDelegate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ktGetUserProfileDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ktShowLoginViewDelegate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ktLoginWithGameUserDelegate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ktUpdateProfileDelegate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ktUpdateVipLevelDelegate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ktplayObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A6818))(0);
	}
	template <typename T = void> static T SetLoginStatusChangeDelegate(uintptr_t delegateMethod) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x21A6968))(0, delegateMethod);
	}
	template <typename T = void> static T GetUserProfile(Il2CppString* userId, uintptr_t delegateMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A6AAC))(0, userId, delegateMethod);
	}
	template <typename T = void> static T ShowLoginView(bool closeable, uintptr_t delegateMethod) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x21A6C14))(0, closeable, delegateMethod);
	}
	template <typename T = void> static T LoginWithGameUser(Il2CppString* gameUserId, uintptr_t delegateMethod) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A6D7C))(0, gameUserId, delegateMethod);
	}
	template <typename T = void> static T UpdateProfile(Il2CppString* nickname, Il2CppString* avatarPath, int32_t gender, uintptr_t delegateMethod) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x21A6EE4))(0, nickname, avatarPath, gender, delegateMethod);
	}
	template <typename T = void> static T UpdateVipLevel(int32_t vipLevel, uintptr_t delegateMethod) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x21A7094))(0, vipLevel, delegateMethod);
	}
	template <typename T = void> static T setUserProfileLocks(int32_t properties) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x21A71FC))(0, properties);
	}
	template <typename T = void> static T Logout() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A72BC))(0);
	}
	template <typename T = bool> static T isLoggedIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A7364))(0);
	}
	template <typename T = uintptr_t> static T CurrentAccount() {
		return ((T (*)(void *))(Il2CppBase() + 0x21A740C))(0);
	}
	template <typename T = void> T SetLoginStatusChangeCallback(uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, uintptr_t))(Il2CppBase() + 0x21A69DC))(this, delegateMethod);
	}
	template <typename T = void> T GetUserProfileCallback(Il2CppString* userId, uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A6B38))(this, userId, delegateMethod);
	}
	template <typename T = void> T ShowLoginViewCallback(bool closeable, uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, bool, uintptr_t))(Il2CppBase() + 0x21A6CA0))(this, closeable, delegateMethod);
	}
	template <typename T = void> T LoginWithGameUserCallback(Il2CppString* gameUserId, uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21A6E08))(this, gameUserId, delegateMethod);
	}
	template <typename T = void> T UpdateProfileCallback(Il2CppString* nickname, Il2CppString* avatarPath, int32_t gender, uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x21A6F94))(this, nickname, avatarPath, gender, delegateMethod);
	}
	template <typename T = void> T UpdateVipLevelCallback(int32_t vipLevel, uintptr_t delegateMethod) {
		return ((T (*)(KTAccountManager*, int32_t, uintptr_t))(Il2CppBase() + 0x21A7120))(this, vipLevel, delegateMethod);
	}
	template <typename T = void> T onAccountManager(Il2CppString* param) {
		return ((T (*)(KTAccountManager*, Il2CppString*))(Il2CppBase() + 0x21A77F4))(this, param);
	}

};

}
