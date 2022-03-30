#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCloudSave.UI.Tween {

class EaseMethods
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCloudSave.UI.Tween", "EaseMethods"));
	}

	template <typename T = uintptr_t> static T& _backEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _backEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _backEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _bounceEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& _bounceEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _bounceEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& _circleEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _circleEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& _circleEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& _cubicEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& _cubicEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& _cubicEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& _elasticEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& _elasticEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& _elasticEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& _expoEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& _expoEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& _expoEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& _linearEaseNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& _linearEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& _linearEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& _linearEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& _quadEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& _quadEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& _quadEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& _quartEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& _quartEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& _quartEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& _quintEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& _quintEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& _quintEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& _sineEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& _sineEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& _sineEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& _strongEaseIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& _strongEaseOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& _strongEaseInOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}

	template <typename T = uintptr_t> static T GetEase(uintptr_t style) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x463E998))(0, style);
	}
	template <typename T = float> static T EasedLerp(uintptr_t ease, float from, float to, float t) {
		return ((T (*)(void *, uintptr_t, float, float, float))(Il2CppBase() + 0x4640954))(0, ease, from, to, t);
	}
	template <typename T = uintptr_t> static T get_BackEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463EF04))(0);
	}
	template <typename T = uintptr_t> static T get_BackEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463EFD4))(0);
	}
	template <typename T = uintptr_t> static T get_BackEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F0A0))(0);
	}
	template <typename T = uintptr_t> static T get_BounceEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F16C))(0);
	}
	template <typename T = uintptr_t> static T get_BounceEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F238))(0);
	}
	template <typename T = uintptr_t> static T get_BounceEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F304))(0);
	}
	template <typename T = uintptr_t> static T get_CircleEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F3D0))(0);
	}
	template <typename T = uintptr_t> static T get_CircleEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F49C))(0);
	}
	template <typename T = uintptr_t> static T get_CircleEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F568))(0);
	}
	template <typename T = uintptr_t> static T get_CubicEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F634))(0);
	}
	template <typename T = uintptr_t> static T get_CubicEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F700))(0);
	}
	template <typename T = uintptr_t> static T get_CubicEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F7CC))(0);
	}
	template <typename T = uintptr_t> static T get_ElasticEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F898))(0);
	}
	template <typename T = uintptr_t> static T get_ElasticEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F964))(0);
	}
	template <typename T = uintptr_t> static T get_ElasticEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FA30))(0);
	}
	template <typename T = uintptr_t> static T get_ExpoEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FAFC))(0);
	}
	template <typename T = uintptr_t> static T get_ExpoEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FBC8))(0);
	}
	template <typename T = uintptr_t> static T get_ExpoEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FC94))(0);
	}
	template <typename T = uintptr_t> static T get_LinearEaseNone() {
		return ((T (*)(void *))(Il2CppBase() + 0x463EBD4))(0);
	}
	template <typename T = uintptr_t> static T get_LinearEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463ECA0))(0);
	}
	template <typename T = uintptr_t> static T get_LinearEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463ED6C))(0);
	}
	template <typename T = uintptr_t> static T get_LinearEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463EE38))(0);
	}
	template <typename T = uintptr_t> static T get_QuadEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FD60))(0);
	}
	template <typename T = uintptr_t> static T get_QuadEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FE2C))(0);
	}
	template <typename T = uintptr_t> static T get_QuadEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FEF8))(0);
	}
	template <typename T = uintptr_t> static T get_QuartEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x463FFC4))(0);
	}
	template <typename T = uintptr_t> static T get_QuartEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x4640090))(0);
	}
	template <typename T = uintptr_t> static T get_QuartEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x464015C))(0);
	}
	template <typename T = uintptr_t> static T get_QuintEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x4640228))(0);
	}
	template <typename T = uintptr_t> static T get_QuintEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x46402F4))(0);
	}
	template <typename T = uintptr_t> static T get_QuintEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x46403C0))(0);
	}
	template <typename T = uintptr_t> static T get_SineEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x464048C))(0);
	}
	template <typename T = uintptr_t> static T get_SineEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x4640558))(0);
	}
	template <typename T = uintptr_t> static T get_SineEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x4640624))(0);
	}
	template <typename T = uintptr_t> static T get_StrongEaseIn() {
		return ((T (*)(void *))(Il2CppBase() + 0x46406F0))(0);
	}
	template <typename T = uintptr_t> static T get_StrongEaseOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x46407BC))(0);
	}
	template <typename T = uintptr_t> static T get_StrongEaseInOut() {
		return ((T (*)(void *))(Il2CppBase() + 0x4640888))(0);
	}
	template <typename T = uintptr_t> static T FromAnimationCurve(uintptr_t curve) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4640A00))(0, curve);
	}
	template <typename T = uintptr_t> static T FromVerticalScalingAnimationCurve(uintptr_t curve) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4640ADC))(0, curve);
	}
	template <typename T = uintptr_t> static T FromScalingAnimationCurve(uintptr_t curve) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4640BB8))(0, curve);
	}
	template <typename T = uintptr_t> static T CubicBezier(float p0, float p1, float p2, float p3) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4640C94))(0, p0, p1, p2, p3);
	}
	template <typename T = Il2CppVector2> static T EaseVector2(uintptr_t ease, Il2CppVector2 start, Il2CppVector2 end, float t, float dur) {
		return ((T (*)(void *, uintptr_t, Il2CppVector2, Il2CppVector2, float, float))(Il2CppBase() + 0x4640DD8))(0, ease, start, end, t, dur);
	}
	template <typename T = Il2CppVector3> static T EaseVector3(uintptr_t ease, Il2CppVector3 start, Il2CppVector3 end, float t, float dur) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3, Il2CppVector3, float, float))(Il2CppBase() + 0x4640F34))(0, ease, start, end, t, dur);
	}
	template <typename T = uintptr_t> static T EaseVector4(uintptr_t ease, uintptr_t start, uintptr_t end, float t, float dur) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x46410C0))(0, ease, start, end, t, dur);
	}
	template <typename T = Il2CppQuaternion> static T EaseQuaternion(uintptr_t ease, Il2CppQuaternion start, Il2CppQuaternion end, float t, float dur) {
		return ((T (*)(void *, uintptr_t, Il2CppQuaternion, Il2CppQuaternion, float, float))(Il2CppBase() + 0x4641270))(0, ease, start, end, t, dur);
	}

};

}
