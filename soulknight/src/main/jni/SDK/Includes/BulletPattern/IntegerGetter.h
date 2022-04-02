#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class IntegerGetter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "IntegerGetter"));
	}


	template <typename T = int32_t> T Invoke() {
		return ((T (*)(IntegerGetter*))(Il2CppBase() + 0x238A80C))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(IntegerGetter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238C2FC))(this, callback, object);
	}
	template <typename T = int32_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(IntegerGetter*, uintptr_t))(Il2CppBase() + 0x238C330))(this, result);
	}

};

}
