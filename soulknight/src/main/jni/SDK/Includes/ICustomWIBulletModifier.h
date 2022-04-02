#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ICustomWIBulletModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICustomWIBulletModifier"));
	}


	template <typename T = void> T BulletMod(uintptr_t originModifier) {
		return ((T (*)(ICustomWIBulletModifier*, uintptr_t))(Il2CppBase() + 0x0))(this, originModifier);
	}

};

}
