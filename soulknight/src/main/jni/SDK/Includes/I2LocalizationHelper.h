#pragma once
#include "Il2Cpp/Il2Cpp.h"

class I2LocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "I2LocalizationHelper"));
	}

	template <typename T = Il2CppList<void*>*> T& SelfLocalizaitonData() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_LocalizationType() {
		return ((T (*)(I2LocalizationHelper*))(Il2CppBase() + 0x173D7C4))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_SelfLocalizaitonData() {
		return ((T (*)(I2LocalizationHelper*))(Il2CppBase() + 0x173D8F0))(this);
	}
	template <typename T = void> T set_SelfLocalizaitonData(Il2CppList<void*>* value) {
		return ((T (*)(I2LocalizationHelper*, Il2CppList<void*>*))(Il2CppBase() + 0x173D8F8))(this, value);
	}
	template <typename T = Il2CppString*> T GetLocalization(Il2CppString* key, Il2CppString* language, Il2CppString* defaultLocalize, uintptr_t extra) {
		return ((T (*)(I2LocalizationHelper*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x173D900))(this, key, language, defaultLocalize, extra);
	}

};

}
