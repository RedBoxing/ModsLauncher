#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fnOnTranslated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "fnOnTranslated"));
	}


	template <typename T = void> T Invoke(Il2CppString* Translation, Il2CppString* Error) {
		return ((T (*)(fnOnTranslated*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4219CB4))(this, Translation, Error);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* Translation, Il2CppString* Error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(fnOnTranslated*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x421E06C))(this, Translation, Error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(fnOnTranslated*, uintptr_t))(Il2CppBase() + 0x421E09C))(this, result);
	}

};

}
