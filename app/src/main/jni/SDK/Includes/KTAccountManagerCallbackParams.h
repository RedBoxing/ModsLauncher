#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTAccountManagerCallbackParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTAccountManagerCallbackParams"));
	}

	template <typename T = Il2CppString*> static T& KEY_WHAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_PARAMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KEY_REQINFO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& accountManagerEventResult() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& statusUser() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isLogin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& oneUser() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& gameUserId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& nickName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& userProfileError() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& loginViewError() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& loginWhithGameUserError() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& accountEventSetNickNameError() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& accountEventUpdateProfileError() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& accountEventUpdateVipLevelError() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& profileUser() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isSuccess() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T ParseFromString(Il2CppString* s) {
		return ((T (*)(KTAccountManagerCallbackParams*, Il2CppString*))(Il2CppBase() + 0x21ABBEC))(this, s);
	}

};

}
