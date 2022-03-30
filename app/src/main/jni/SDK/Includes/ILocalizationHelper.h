#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ILocalizationHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILocalizationHelper"));
	}


	template <typename T = uintptr_t> T get_LocalizationType() {
		return ((T (*)(ILocalizationHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppList<void*>*> T get_SelfLocalizaitonData() {
		return ((T (*)(ILocalizationHelper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_SelfLocalizaitonData(Il2CppList<void*>* value) {
		return ((T (*)(ILocalizationHelper*, Il2CppList<void*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T GetLocalization(Il2CppString* key, Il2CppString* language, Il2CppString* defaultLocalize, uintptr_t extra) {
		return ((T (*)(ILocalizationHelper*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, key, language, defaultLocalize, extra);
	}

};

}
