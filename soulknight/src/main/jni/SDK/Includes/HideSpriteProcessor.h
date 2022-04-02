#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HideSpriteProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HideSpriteProcessor"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(HideSpriteProcessor*))(Il2CppBase() + 0x1E02148))(this);
	}
	template <typename T = void> T SkillStart(uintptr_t controller) {
		return ((T (*)(HideSpriteProcessor*, uintptr_t))(Il2CppBase() + 0x1E02150))(this, controller);
	}
	template <typename T = void> T SetSpriteEnabled(uintptr_t controller, bool enabled) {
		return ((T (*)(HideSpriteProcessor*, uintptr_t, bool))(Il2CppBase() + 0x1E021CC))(this, controller, enabled);
	}
	template <typename T = void> T SkillEnd(uintptr_t controller) {
		return ((T (*)(HideSpriteProcessor*, uintptr_t))(Il2CppBase() + 0x1E0235C))(this, controller);
	}

};

}
