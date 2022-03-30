#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicRuneEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicRuneEffect"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _wait() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicRuneEffect*))(Il2CppBase() + 0x42C7B18))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RelicRuneEffect*))(Il2CppBase() + 0x42C7BCC))(this);
	}
	template <typename T = uintptr_t> T Restore() {
		return ((T (*)(RelicRuneEffect*))(Il2CppBase() + 0x42C7C3C))(this);
	}
	template <typename T = void> T Init(int32_t index) {
		return ((T (*)(RelicRuneEffect*, int32_t))(Il2CppBase() + 0x42BC3C0))(this, index);
	}

};

}
