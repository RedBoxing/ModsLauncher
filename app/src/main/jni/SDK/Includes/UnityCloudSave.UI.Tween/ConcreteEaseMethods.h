#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCloudSave.UI.Tween {

class ConcreteEaseMethods
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCloudSave.UI.Tween", "ConcreteEaseMethods"));
	}

	template <typename T = float> static T& _2PI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _HALF_PI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T BackEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463BC24))(0, t, b, c, d);
	}
	template <typename T = float> static T BackEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463BD8C))(0, t, b, c, d);
	}
	template <typename T = float> static T BackEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463BF00))(0, t, b, c, d);
	}
	template <typename T = float> static T BackEaseInFull(float t, float b, float c, float d, float s) {
		return ((T (*)(void *, float, float, float, float, float))(Il2CppBase() + 0x463BCC8))(0, t, b, c, d, s);
	}
	template <typename T = float> static T BackEaseOutFull(float t, float b, float c, float d, float s) {
		return ((T (*)(void *, float, float, float, float, float))(Il2CppBase() + 0x463BE30))(0, t, b, c, d, s);
	}
	template <typename T = float> static T BackEaseInOutFull(float t, float b, float c, float d, float s) {
		return ((T (*)(void *, float, float, float, float, float))(Il2CppBase() + 0x463BFA4))(0, t, b, c, d, s);
	}
	template <typename T = float> static T BounceEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C0C0))(0, t, b, c, d);
	}
	template <typename T = float> static T BounceEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C214))(0, t, b, c, d);
	}
	template <typename T = float> static T BounceEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C2BC))(0, t, b, c, d);
	}
	template <typename T = float> static T CircleEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C3A4))(0, t, b, c, d);
	}
	template <typename T = float> static T CircleEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C4A8))(0, t, b, c, d);
	}
	template <typename T = float> static T CircleEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C5AC))(0, t, b, c, d);
	}
	template <typename T = float> static T CubicEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C71C))(0, t, b, c, d);
	}
	template <typename T = float> static T CubicEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C7BC))(0, t, b, c, d);
	}
	template <typename T = float> static T CubicEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C86C))(0, t, b, c, d);
	}
	template <typename T = float> static T ElasticEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463C948))(0, t, b, c, d);
	}
	template <typename T = float> static T ElasticEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463CBE8))(0, t, b, c, d);
	}
	template <typename T = float> static T ElasticEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463CE84))(0, t, b, c, d);
	}
	template <typename T = float> static T ElasticEaseInFull(float t, float b, float c, float d, float a, float p) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x463C9EC))(0, t, b, c, d, a, p);
	}
	template <typename T = float> static T ElasticEaseOutFull(float t, float b, float c, float d, float a, float p) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x463CC8C))(0, t, b, c, d, a, p);
	}
	template <typename T = float> static T ElasticEaseInOutFull(float t, float b, float c, float d, float a, float p) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x463CF28))(0, t, b, c, d, a, p);
	}
	template <typename T = float> static T ExpoEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D1A8))(0, t, b, c, d);
	}
	template <typename T = float> static T ExpoEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D2BC))(0, t, b, c, d);
	}
	template <typename T = float> static T ExpoEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D3C4))(0, t, b, c, d);
	}
	template <typename T = float> static T LinearEaseNone(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D540))(0, t, b, c, d);
	}
	template <typename T = float> static T LinearEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D5D8))(0, t, b, c, d);
	}
	template <typename T = float> static T LinearEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D670))(0, t, b, c, d);
	}
	template <typename T = float> static T LinearEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D708))(0, t, b, c, d);
	}
	template <typename T = float> static T QuadEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D7A0))(0, t, b, c, d);
	}
	template <typename T = float> static T QuadEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D83C))(0, t, b, c, d);
	}
	template <typename T = float> static T QuadEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D8E0))(0, t, b, c, d);
	}
	template <typename T = float> static T QuartEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463D9BC))(0, t, b, c, d);
	}
	template <typename T = float> static T QuartEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DA60))(0, t, b, c, d);
	}
	template <typename T = float> static T QuartEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DB10))(0, t, b, c, d);
	}
	template <typename T = float> static T QuintEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DBF4))(0, t, b, c, d);
	}
	template <typename T = float> static T QuintEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DC9C))(0, t, b, c, d);
	}
	template <typename T = float> static T QuintEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DD54))(0, t, b, c, d);
	}
	template <typename T = float> static T SineEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DE40))(0, t, b, c, d);
	}
	template <typename T = float> static T SineEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463DF38))(0, t, b, c, d);
	}
	template <typename T = float> static T SineEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463E02C))(0, t, b, c, d);
	}
	template <typename T = float> static T StrongEaseIn(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463E134))(0, t, b, c, d);
	}
	template <typename T = float> static T StrongEaseOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463E1DC))(0, t, b, c, d);
	}
	template <typename T = float> static T StrongEaseInOut(float t, float b, float c, float d) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x463E294))(0, t, b, c, d);
	}

};

}
