#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBuffSlay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBuffSlay"));
	}

	template <typename T = float> T& addDamageTimes() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnBuffStart() {
		return ((T (*)(ArtifactBuffSlay*))(Il2CppBase() + 0x1C9998C))(this);
	}
	template <typename T = void> T OnDestroySelf() {
		return ((T (*)(ArtifactBuffSlay*))(Il2CppBase() + 0x1C99BC4))(this);
	}
	template <typename T = int32_t> T ExtraDamage(uintptr_t source_object, int32_t damage, bool addDamage) {
		return ((T (*)(ArtifactBuffSlay*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1C99D28))(this, source_object, damage, addDamage);
	}
	template <typename T = void> T iFixBaseProxy_OnBuffStart() {
		return ((T (*)(ArtifactBuffSlay*))(Il2CppBase() + 0x1C99E88))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroySelf() {
		return ((T (*)(ArtifactBuffSlay*))(Il2CppBase() + 0x1C99E8C))(this);
	}

};

}
