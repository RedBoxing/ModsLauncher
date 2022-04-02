#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletRebound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletRebound"));
	}


	template <typename T = int32_t> T get_camp() {
		return ((T (*)(IBulletRebound*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanRebound(uintptr_t bullet) {
		return ((T (*)(IBulletRebound*, uintptr_t))(Il2CppBase() + 0x0))(this, bullet);
	}
	template <typename T = void> T OnRebound(uintptr_t bullet) {
		return ((T (*)(IBulletRebound*, uintptr_t))(Il2CppBase() + 0x0))(this, bullet);
	}

};

}
