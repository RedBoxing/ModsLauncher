#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnityExtendAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnityExtendAndroid"));
	}

	template <typename T = uintptr_t> static T& _singleton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& jc() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_singleton() {
		return ((T (*)(void *))(Il2CppBase() + 0x43F3D70))(0);
	}
	template <typename T = Il2CppString*> T GetKeyHash() {
		return ((T (*)(UnityExtendAndroid*))(Il2CppBase() + 0x43F3E94))(this);
	}
	template <typename T = void> T ShowToast(Il2CppString* content) {
		return ((T (*)(UnityExtendAndroid*, Il2CppString*))(Il2CppBase() + 0x43F3F58))(this, content);
	}
	template <typename T = void> T RedirectUrl(Il2CppString* url) {
		return ((T (*)(UnityExtendAndroid*, Il2CppString*))(Il2CppBase() + 0x43F4078))(this, url);
	}

};

}
