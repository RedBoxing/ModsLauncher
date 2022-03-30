#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeroCharStage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeroCharStage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& lights() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& valueArr() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HeroCharStage*))(Il2CppBase() + 0x1A33068))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HeroCharStage*))(Il2CppBase() + 0x1A33218))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HeroCharStage*))(Il2CppBase() + 0x1A332FC))(this);
	}
	template <typename T = void> T UpdateProgress(uintptr_t e) {
		return ((T (*)(HeroCharStage*, uintptr_t))(Il2CppBase() + 0x1A333E0))(this, e);
	}

};

}
