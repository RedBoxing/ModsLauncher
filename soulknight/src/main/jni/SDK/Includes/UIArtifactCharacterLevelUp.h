#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactCharacterLevelUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactCharacterLevelUp"));
	}

	template <typename T = uintptr_t> T& audioLevelUp1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audioLevelUp2() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& panelObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& selections() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onSelectLevelUp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& choosed() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(UIArtifactCharacterLevelUp*))(Il2CppBase() + 0x441B4E4))(this);
	}
	template <typename T = void> T set_target(uintptr_t value) {
		return ((T (*)(UIArtifactCharacterLevelUp*, uintptr_t))(Il2CppBase() + 0x441B4EC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIArtifactCharacterLevelUp*))(Il2CppBase() + 0x441B4F4))(this);
	}
	template <typename T = void> T DisplaySelection(uintptr_t obj) {
		return ((T (*)(UIArtifactCharacterLevelUp*, uintptr_t))(Il2CppBase() + 0x441B7A0))(this, obj);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIArtifactCharacterLevelUp*))(Il2CppBase() + 0x441BA30))(this);
	}
	template <typename T = void> T Startb__9_0() {
		return ((T (*)(UIArtifactCharacterLevelUp*))(Il2CppBase() + 0x441BB70))(this);
	}

};

}
