#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletTriggerDontDestroy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletTriggerDontDestroy"));
	}


	template <typename T = void> T CheckDestroyState() {
		return ((T (*)(BulletTriggerDontDestroy*))(Il2CppBase() + 0x1DF414C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CheckDestroyState() {
		return ((T (*)(BulletTriggerDontDestroy*))(Il2CppBase() + 0x1DF41B8))(this);
	}

};

}
