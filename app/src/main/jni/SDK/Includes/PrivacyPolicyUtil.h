#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrivacyPolicyUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrivacyPolicyUtil"));
	}


	template <typename T = bool> static T get_NeedShowPrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A6EA8))(0);
	}
	template <typename T = bool> static T get_HasAgreePrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A6F14))(0);
	}
	template <typename T = void> static T set_HasAgreePrivacyPolicy(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43A6FE8))(0, value);
	}
	template <typename T = bool> static T get_ChillyHasAgreePrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A708C))(0);
	}
	template <typename T = void> static T set_ChillyHasAgreePrivacyPolicy(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x43A7174))(0, value);
	}
	template <typename T = void> static T HandleDefaultPrivacyConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A7254))(0);
	}

};

}
