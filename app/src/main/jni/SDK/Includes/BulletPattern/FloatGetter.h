#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class FloatGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "FloatGetter"));
	}


	template <typename T = float> T Invoke() {
		return ((T (*)(FloatGetter*))(Il2CppBase() + 0x238AC28))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(FloatGetter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238B864))(this, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(FloatGetter*, uintptr_t))(Il2CppBase() + 0x238B898))(this, result);
	}

};

}
