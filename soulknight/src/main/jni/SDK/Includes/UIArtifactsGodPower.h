#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactsGodPower
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactsGodPower"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& icons() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& iconDisplayed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& blinkSequence() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& curBlinkImg() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Display(uintptr_t powerType) {
		return ((T (*)(UIArtifactsGodPower*, uintptr_t))(Il2CppBase() + 0x441BFC4))(this, powerType);
	}
	template <typename T = void> T UpdateProgress(uintptr_t powerType, float progress, bool full) {
		return ((T (*)(UIArtifactsGodPower*, uintptr_t, float, bool))(Il2CppBase() + 0x441C254))(this, powerType, progress, full);
	}

};

}
