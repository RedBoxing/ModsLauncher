#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletChain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletChain"));
	}

	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& tail() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SetTarget(uintptr_t target) {
		return ((T (*)(BulletChain*, uintptr_t))(Il2CppBase() + 0x45ABA50))(this, target);
	}
	template <typename T = void> T SetTarget_1(Il2CppVector3 targetPos) {
		return ((T (*)(BulletChain*, Il2CppVector3))(Il2CppBase() + 0x45ABAE4))(this, targetPos);
	}

};

}
