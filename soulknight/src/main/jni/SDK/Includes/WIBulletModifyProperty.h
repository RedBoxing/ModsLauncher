#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModifyProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModifyProperty"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& propertyTypes() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T BulletMod(uintptr_t bullet) {
		return ((T (*)(WIBulletModifyProperty*, uintptr_t))(Il2CppBase() + 0x435FA2C))(this, bullet);
	}
	template <typename T = void> T iFixBaseProxy_BulletMod(uintptr_t P0) {
		return ((T (*)(WIBulletModifyProperty*, uintptr_t))(Il2CppBase() + 0x435FC38))(this, P0);
	}

};

}
