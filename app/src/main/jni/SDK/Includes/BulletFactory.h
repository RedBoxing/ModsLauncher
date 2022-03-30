#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletFactory"));
	}


	template <typename T = uintptr_t> static T CreateBullet(uintptr_t bulletInfo, uintptr_t damageInfo, bool invokeOnTake, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x45AF07C))(0, bulletInfo, damageInfo, invokeOnTake, parent);
	}
	template <typename T = uintptr_t> static T TakeBullet(uintptr_t bulletInfo, uintptr_t damageInfo, bool invokeOnTake, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x45A0E5C))(0, bulletInfo, damageInfo, invokeOnTake, parent);
	}
	template <typename T = void> static T UpdateBulletInfo(uintptr_t bulletObj, uintptr_t bulletInfo, uintptr_t damageInfo, bool invokeOnTake, uintptr_t parent) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, uintptr_t))(Il2CppBase() + 0x45AF338))(0, bulletObj, bulletInfo, damageInfo, invokeOnTake, parent);
	}
	template <typename T = void> static T OnBulletTaken(uintptr_t bulletObj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45AF508))(0, bulletObj);
	}
	template <typename T = void> static T ChangeColor(uintptr_t bullet, uintptr_t bulletColor) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45AF678))(0, bullet, bulletColor);
	}

};

}
