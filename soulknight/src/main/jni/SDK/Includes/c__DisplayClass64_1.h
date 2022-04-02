#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass641
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass64_1"));
	}

	template <typename T = uintptr_t> T& white() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& red() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& progress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& newAddGem() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& addGem() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& newTotalGem() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& totalGem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& changeScene() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Startb__7() {
		return ((T (*)(cDisplayClass641*))(Il2CppBase() + 0x41BE2F0))(this);
	}
	template <typename T = float> T Startb__8() {
		return ((T (*)(cDisplayClass641*))(Il2CppBase() + 0x41BE3F8))(this);
	}
	template <typename T = void> T Startb__9(float p) {
		return ((T (*)(cDisplayClass641*, float))(Il2CppBase() + 0x41BE400))(this, p);
	}
	template <typename T = void> T Startb__10() {
		return ((T (*)(cDisplayClass641*))(Il2CppBase() + 0x41BE58C))(this);
	}

};

}
