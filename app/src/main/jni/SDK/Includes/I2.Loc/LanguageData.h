#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LanguageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LanguageData"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Code() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& Flags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Compressed() {
		return *(T*)((uintptr_t)this + 0x21);
	}

	template <typename T = bool> T IsEnabled() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x4221D8C))(this);
	}
	template <typename T = void> T SetEnabled(bool bEnabled) {
		return ((T (*)(LanguageData*, bool))(Il2CppBase() + 0x4221DF4))(this, bEnabled);
	}
	template <typename T = bool> T IsLoaded() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x4221E7C))(this);
	}
	template <typename T = bool> T CanBeUnloaded() {
		return ((T (*)(LanguageData*))(Il2CppBase() + 0x4221EE4))(this);
	}
	template <typename T = void> T SetLoaded(bool loaded) {
		return ((T (*)(LanguageData*, bool))(Il2CppBase() + 0x4221F4C))(this, loaded);
	}
	template <typename T = void> T SetCanBeUnLoaded(bool allowUnloading) {
		return ((T (*)(LanguageData*, bool))(Il2CppBase() + 0x4221FD8))(this, allowUnloading);
	}

};

}
