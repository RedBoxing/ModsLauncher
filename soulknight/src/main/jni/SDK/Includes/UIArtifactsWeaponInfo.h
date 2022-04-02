#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactsWeaponInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactsWeaponInfo"));
	}

	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& bgImg() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& bgOriHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& attributesObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& effectsObject() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T SetInfoWithWeapon(uintptr_t weapon) {
		return ((T (*)(UIArtifactsWeaponInfo*, uintptr_t))(Il2CppBase() + 0x4199F00))(this, weapon);
	}

};

}
