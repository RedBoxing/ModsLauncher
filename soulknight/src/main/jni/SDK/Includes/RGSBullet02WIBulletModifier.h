#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSBullet02WIBulletModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSBullet02WIBulletModifier"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& originModifier() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGSBullet02WIBulletModifier*))(Il2CppBase() + 0x1C1F7E8))(this);
	}
	template <typename T = void> T BulletMod(uintptr_t originModifier) {
		return ((T (*)(RGSBullet02WIBulletModifier*, uintptr_t))(Il2CppBase() + 0x1C1F880))(this, originModifier);
	}
	template <typename T = void> T BulletSplited(Il2CppList<uintptr_t>* createdBulletList) {
		return ((T (*)(RGSBullet02WIBulletModifier*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1C1F998))(this, createdBulletList);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSBullet02WIBulletModifier*))(Il2CppBase() + 0x1C1FB4C))(this);
	}

};

}
