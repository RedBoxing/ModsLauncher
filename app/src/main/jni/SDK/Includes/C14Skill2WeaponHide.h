#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C14Skill2WeaponHide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C14Skill2WeaponHide"));
	}

	template <typename T = uintptr_t> T& hideMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<void*>*>*> T& _spriteDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(C14Skill2WeaponHide*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F3B2E0))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(C14Skill2WeaponHide*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F3B6C8))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T iFixBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(C14Skill2WeaponHide*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F3B994))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(C14Skill2WeaponHide*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1F3B9D0))(this, P0, P1, P2);
	}

};

}
