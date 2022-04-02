#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fnOnTranslationReady
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "fnOnTranslationReady"));
	}


	template <typename T = void> T Invoke(Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* error) {
		return ((T (*)(fnOnTranslationReady*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x421E0A8))(this, dict, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(fnOnTranslationReady*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x421E828))(this, dict, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(fnOnTranslationReady*, uintptr_t))(Il2CppBase() + 0x421E858))(this, result);
	}

};

}
