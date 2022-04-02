#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffPlague
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffPlague"));
	}

	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isStrengthen() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459C0DC))(this);
	}
	template <typename T = void> T GetHurt() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459C6B8))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffPlague*, uintptr_t))(Il2CppBase() + 0x459C8EC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459C960))(this);
	}
	template <typename T = void> T HandleNecStrengthen() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459C470))(this);
	}
	template <typename T = void> T StrengthenOnEnemyDead(uintptr_t enemy) {
		return ((T (*)(BuffPlague*, uintptr_t))(Il2CppBase() + 0x459C9C0))(this, enemy);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459CB80))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffPlague*))(Il2CppBase() + 0x459CCCC))(this);
	}

};

}
