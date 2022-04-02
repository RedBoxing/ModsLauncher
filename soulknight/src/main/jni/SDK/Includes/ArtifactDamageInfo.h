#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactDamageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactDamageInfo"));
	}

	template <typename T = uintptr_t> T& bulletEmitter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isGodPower() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_isFromDefaultEmitter() {
		return ((T (*)(ArtifactDamageInfo*))(Il2CppBase() + 0x1CA171C))(this);
	}
	template <typename T = Il2CppString*> T get_emitterKey() {
		return ((T (*)(ArtifactDamageInfo*))(Il2CppBase() + 0x1CA17F8))(this);
	}

};

}
