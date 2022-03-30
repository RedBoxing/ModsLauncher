#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GiftCodeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GiftCodeUtil"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x443ABBC))(0);
	}
	template <typename T = void> T GetGift(Il2CppString* gift_Code, void* callback, void* exp) {
		return ((T (*)(GiftCodeUtil*, Il2CppString*, void*, void*))(Il2CppBase() + 0x443AC60))(this, gift_Code, callback, exp);
	}

};

}
