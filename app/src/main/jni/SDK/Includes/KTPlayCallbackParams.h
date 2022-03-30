#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayCallbackParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayCallbackParams"));
	}

	template <typename T = Il2CppString*> static T& KEY_WHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_PARAMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_REWARD_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_REWARD_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_REWARD_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& KTPlayEventResult() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& reward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasNewActivity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppString*> T& linkScheme() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& interstialNotificationEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& interstitialID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& playError() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T ParseFromString(Il2CppString* s) {
		return ((T (*)(KTPlayCallbackParams*, Il2CppString*))(Il2CppBase() + 0x21B8244))(this, s);
	}

};

}
