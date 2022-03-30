#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BulletPattern {

class CircularBulletSync
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BulletPattern", "CircularBulletSync"));
	}

	template <typename T = uintptr_t> T& BulletCountGetter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& InitAngleOffsetGetter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnBulletGenerate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_BulletCountGetter() {
		return ((T (*)(CircularBulletSync*))(Il2CppBase() + 0x238A6C0))(this);
	}
	template <typename T = uintptr_t> T get_InitAngleOffsetGetter() {
		return ((T (*)(CircularBulletSync*))(Il2CppBase() + 0x238A6C8))(this);
	}
	template <typename T = uintptr_t> T get_OnBulletGenerate() {
		return ((T (*)(CircularBulletSync*))(Il2CppBase() + 0x238A6D0))(this);
	}
	template <typename T = void> T GenerateBullet() {
		return ((T (*)(CircularBulletSync*))(Il2CppBase() + 0x238A718))(this);
	}

};

}
