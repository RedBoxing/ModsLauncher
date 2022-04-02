#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpgradeSprites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpgradeSprites"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _renderer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _image() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& changeChildActive() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UpgradeSprites*))(Il2CppBase() + 0x44017B4))(this);
	}
	template <typename T = void> T SetSprite(uintptr_t season, int32_t level) {
		return ((T (*)(UpgradeSprites*, uintptr_t, int32_t))(Il2CppBase() + 0x4401864))(this, season, level);
	}
	template <typename T = void> T SetSprite_1(uintptr_t season, uintptr_t prize) {
		return ((T (*)(UpgradeSprites*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4401CFC))(this, season, prize);
	}

};

}
