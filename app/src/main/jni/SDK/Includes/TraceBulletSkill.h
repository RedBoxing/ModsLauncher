#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TraceBulletSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraceBulletSkill"));
	}

	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _sourceController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliderBuffer() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(TraceBulletSkill*))(Il2CppBase() + 0x1B85D98))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TraceBulletSkill*))(Il2CppBase() + 0x1B863AC))(this);
	}

};

}
