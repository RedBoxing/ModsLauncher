#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletAttachment"));
	}


	template <typename T = void> T OnCreateBullet(uintptr_t bulletObj) {
		return ((T (*)(IBulletAttachment*, uintptr_t))(Il2CppBase() + 0x0))(this, bulletObj);
	}

};

}
