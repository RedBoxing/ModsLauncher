#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMover"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& has_target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _detectList() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T StartMove() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x23866F0))(this);
	}
	template <typename T = void> T MoveFixedUpdate() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x23868C4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_detectList() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x2386920))(this);
	}
	template <typename T = float> T get_targetRange() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x23869C0))(this);
	}
	template <typename T = bool> T get_ignoreWall() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x2386A20))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(BulletMover*))(Il2CppBase() + 0x2386A80))(this);
	}

};

}
