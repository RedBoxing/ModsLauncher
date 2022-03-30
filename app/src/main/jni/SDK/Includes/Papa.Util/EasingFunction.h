#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Papa.Util {

class EasingFunction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Papa.Util", "EasingFunction"));
	}

	template <typename T = float> static T& NATURAL_LOG_OF_2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T Linear(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B280))(0, start, end, value);
	}
	template <typename T = float> static T Spring(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B358))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuad(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B4B0))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuad(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B544))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuad(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B5E0))(0, start, end, value);
	}
	template <typename T = float> static T EaseInCubic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B6B4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutCubic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B74C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutCubic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B7F4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuart(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B8CC))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuart(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456B968))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuart(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BA10))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuint(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BAEC))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuint(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BB8C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuint(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BC3C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInSine(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BD24))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutSine(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BE0C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutSine(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BEF0))(0, start, end, value);
	}
	template <typename T = float> static T EaseInExpo(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456BFE4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutExpo(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C0CC))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutExpo(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C1B4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInCirc(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C2F4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutCirc(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C3F0))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutCirc(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C4EC))(0, start, end, value);
	}
	template <typename T = float> static T EaseInBounce(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C648))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutBounce(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C6EC))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutBounce(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C838))(0, start, end, value);
	}
	template <typename T = float> static T EaseInBack(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C908))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutBack(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456C9B8))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutBack(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456CA78))(0, start, end, value);
	}
	template <typename T = float> static T EaseInElastic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456CB7C))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutElastic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456CCB4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutElastic(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456CDE8))(0, start, end, value);
	}
	template <typename T = float> static T LinearD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456CF9C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuadD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D024))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuadD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D0B4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuadD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D150))(0, start, end, value);
	}
	template <typename T = float> static T EaseInCubicD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D1F8))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutCubicD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D290))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutCubicD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D330))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuartD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D3EC))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuartD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D488))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuartD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D52C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInQuintD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D5E4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutQuintD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D684))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutQuintD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D72C))(0, start, end, value);
	}
	template <typename T = float> static T EaseInSineD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D7F0))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutSineD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D8E4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutSineD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456D9C8))(0, start, end, value);
	}
	template <typename T = float> static T EaseInExpoD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DAB4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutExpoD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DBA4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutExpoD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DC94))(0, start, end, value);
	}
	template <typename T = float> static T EaseInCircD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DDD4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutCircD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DEC8))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutCircD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456DFC4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInBounceD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E110))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutBounceD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E1A4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutBounceD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E2B0))(0, start, end, value);
	}
	template <typename T = float> static T EaseInBackD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E368))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutBackD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E418))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutBackD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E4D4))(0, start, end, value);
	}
	template <typename T = float> static T EaseInElasticD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E5E4))(0, start, end, value);
	}
	template <typename T = float> static T EaseOutElasticD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E740))(0, start, end, value);
	}
	template <typename T = float> static T EaseInOutElasticD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456E898))(0, start, end, value);
	}
	template <typename T = float> static T SpringD(float start, float end, float value) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x456EA8C))(0, start, end, value);
	}
	template <typename T = uintptr_t> static T GetEasingFunction(uintptr_t easingFunction) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x456EC9C))(0, easingFunction);
	}
	template <typename T = uintptr_t> static T GetEasingFunctionDerivative(uintptr_t easingFunction) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x456F0E0))(0, easingFunction);
	}

};

}
