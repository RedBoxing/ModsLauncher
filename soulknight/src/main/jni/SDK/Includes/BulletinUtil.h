#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletinUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletinUtil"));
	}

	template <typename T = uintptr_t> T& _loginServer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_loginServer() {
		return ((T (*)(BulletinUtil*))(Il2CppBase() + 0x1DF4B88))(this);
	}
	template <typename T = Il2CppString*> T get_area() {
		return ((T (*)(BulletinUtil*))(Il2CppBase() + 0x1DF4C44))(this);
	}
	template <typename T = Il2CppString*> T get_platformId() {
		return ((T (*)(BulletinUtil*))(Il2CppBase() + 0x1DF4CD0))(this);
	}
	template <typename T = void> T RequestBulletin(void* onSuccess) {
		return ((T (*)(BulletinUtil*, void*))(Il2CppBase() + 0x1DF4D74))(this, onSuccess);
	}

};

}
