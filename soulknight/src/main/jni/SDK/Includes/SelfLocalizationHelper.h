#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelfLocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelfLocalizationHelper"));
	}

	template <typename T = Il2CppList<void*>*> T& SelfLocalizaitonData() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_LocalizationType() {
		return ((T (*)(SelfLocalizationHelper*))(Il2CppBase() + 0x1821ADC))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_SelfLocalizaitonData() {
		return ((T (*)(SelfLocalizationHelper*))(Il2CppBase() + 0x1821B3C))(this);
	}
	template <typename T = void> T set_SelfLocalizaitonData(Il2CppList<void*>* value) {
		return ((T (*)(SelfLocalizationHelper*, Il2CppList<void*>*))(Il2CppBase() + 0x1821B44))(this, value);
	}
	template <typename T = Il2CppString*> T GetLocalization(Il2CppString* key, Il2CppString* language, Il2CppString* defaultLocalize, uintptr_t extra) {
		return ((T (*)(SelfLocalizationHelper*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1821B4C))(this, key, language, defaultLocalize, extra);
	}

};

}
