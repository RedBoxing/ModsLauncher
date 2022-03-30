#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffDeadNote
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffDeadNote"));
	}

	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& parentEnemy() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffDeadNote*, uintptr_t))(Il2CppBase() + 0x20A6420))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffDeadNote*))(Il2CppBase() + 0x20A66AC))(this);
	}
	template <typename T = void> T KillEnemy() {
		return ((T (*)(BuffDeadNote*))(Il2CppBase() + 0x20A670C))(this);
	}

};

}
