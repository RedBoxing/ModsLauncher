#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIBulletModifyBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIBulletModifyBuff"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& bullet_color() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T BulletMod(uintptr_t bullet) {
		return ((T (*)(WIBulletModifyBuff*, uintptr_t))(Il2CppBase() + 0x435F1FC))(this, bullet);
	}
	template <typename T = void> T BulletTriggerBuffMod(uintptr_t trigger) {
		return ((T (*)(WIBulletModifyBuff*, uintptr_t))(Il2CppBase() + 0x435F3A8))(this, trigger);
	}
	template <typename T = void> T iFixBaseProxy_BulletMod(uintptr_t P0) {
		return ((T (*)(WIBulletModifyBuff*, uintptr_t))(Il2CppBase() + 0x435F610))(this, P0);
	}

};

}
