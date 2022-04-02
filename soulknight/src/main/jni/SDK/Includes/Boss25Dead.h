#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss25Dead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss25Dead"));
	}

	template <typename T = float> T& animationTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& initDelay() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& swampEntrancePosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& scaleAnimCurve() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& rotationAmount() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Boss25Dead*))(Il2CppBase() + 0x1B2CF0C))(this);
	}
	template <typename T = void> T OnEnemyDead(uintptr_t obj) {
		return ((T (*)(Boss25Dead*, uintptr_t))(Il2CppBase() + 0x1B2D000))(this, obj);
	}
	template <typename T = void> T OnEnemyDeadb__6_0() {
		return ((T (*)(Boss25Dead*))(Il2CppBase() + 0x1B2D354))(this);
	}
	template <typename T = void> T OnEnemyDeadb__6_1() {
		return ((T (*)(Boss25Dead*))(Il2CppBase() + 0x1B2D48C))(this);
	}

};

}
