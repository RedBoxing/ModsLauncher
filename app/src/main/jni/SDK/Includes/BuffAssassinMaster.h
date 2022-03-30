#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffAssassinMaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffAssassinMaster"));
	}

	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& random_position_y_range() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& parentEnemy() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffAssassinMaster*, uintptr_t))(Il2CppBase() + 0x20A4204))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffAssassinMaster*))(Il2CppBase() + 0x20A44F0))(this);
	}
	template <typename T = void> T HurtEnemy() {
		return ((T (*)(BuffAssassinMaster*))(Il2CppBase() + 0x20A4550))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(BuffAssassinMaster*))(Il2CppBase() + 0x20A45AC))(this);
	}

};

}
