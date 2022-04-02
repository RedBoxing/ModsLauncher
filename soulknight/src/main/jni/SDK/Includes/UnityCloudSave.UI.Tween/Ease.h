#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCloudSave.UI.Tween {

class Ease
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCloudSave.UI.Tween", "Ease"));
	}


	template <typename T = float> T Invoke(float current, float initialValue, float totalChange, float duration) {
		return ((T (*)(Ease*, float, float, float, float))(Il2CppBase() + 0x463E390))(this, current, initialValue, totalChange, duration);
	}
	template <typename T = uintptr_t> T BeginInvoke(float current, float initialValue, float totalChange, float duration, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Ease*, float, float, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x463E88C))(this, current, initialValue, totalChange, duration, callback, object);
	}
	template <typename T = float> T EndInvoke(uintptr_t result) {
		return ((T (*)(Ease*, uintptr_t))(Il2CppBase() + 0x463E95C))(this, result);
	}

};

}
