#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class CircularGenerateBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "CircularGenerateBullet"));
	}


	template <typename T = void> T Invoke(int32_t currentIndex, float angleOffset) {
		return ((T (*)(CircularGenerateBullet*, int32_t, float))(Il2CppBase() + 0x238B058))(this, currentIndex, angleOffset);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t currentIndex, float angleOffset, uintptr_t callback, uintptr_t object) {
		return ((T (*)(CircularGenerateBullet*, int32_t, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x238B4D0))(this, currentIndex, angleOffset, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(CircularGenerateBullet*, uintptr_t))(Il2CppBase() + 0x238B57C))(this, result);
	}

};

}
