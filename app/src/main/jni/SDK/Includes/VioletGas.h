#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VioletGas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VioletGas"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& can_hit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& is_end() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& hit_player() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& hit_enemy() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435BB74))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435BC24))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435BCD8))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(VioletGas*, uintptr_t))(Il2CppBase() + 0x435C544))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435C770))(this);
	}
	template <typename T = void> T TurnCanHit() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435C608))(this);
	}
	template <typename T = void> T GasEnd() {
		return ((T (*)(VioletGas*))(Il2CppBase() + 0x435C7D0))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(VioletGas*, float))(Il2CppBase() + 0x435C6A8))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(VioletGas*, float))(Il2CppBase() + 0x435C87C))(this, totalTime);
	}

};

}
