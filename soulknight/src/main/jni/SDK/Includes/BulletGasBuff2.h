#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGasBuff2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGasBuff2"));
	}

	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& buffRef() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletGasBuff2*))(Il2CppBase() + 0x2378DE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletGasBuff2*))(Il2CppBase() + 0x2379048))(this);
	}

};

}
