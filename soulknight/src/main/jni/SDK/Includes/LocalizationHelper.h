#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationHelper"));
	}

	template <typename T = uintptr_t> static T& _i2LocalizationHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _selfLocalizationHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> static T GetLocalization(uintptr_t localizationType, Il2CppString* key, Il2CppString* language, Il2CppString* defaultLocalize, uintptr_t extra) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4268A80))(0, localizationType, key, language, defaultLocalize, extra);
	}

};

}
