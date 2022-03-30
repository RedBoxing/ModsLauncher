#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletEliminator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletEliminator"));
	}


	template <typename T = int32_t> T get_camp() {
		return ((T (*)(IBulletEliminator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T CanEliminate(uintptr_t bullet) {
		return ((T (*)(IBulletEliminator*, uintptr_t))(Il2CppBase() + 0x0))(this, bullet);
	}
	template <typename T = void> T OnEliminate(uintptr_t bullet) {
		return ((T (*)(IBulletEliminator*, uintptr_t))(Il2CppBase() + 0x0))(this, bullet);
	}

};

}
