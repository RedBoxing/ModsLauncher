#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChainTargetCaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChainTargetCaster"));
	}

	template <typename T = int32_t> T& hitCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _targetList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _targetMask() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _searchRange() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _colliderBuffer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& _constrainObjectSet() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TargetList() {
		return ((T (*)(ChainTargetCaster*))(Il2CppBase() + 0x186F514))(this);
	}
	template <typename T = void> T Init(int32_t targetMask, float searchRange, void* constrainObject) {
		return ((T (*)(ChainTargetCaster*, int32_t, float, void*))(Il2CppBase() + 0x186F574))(this, targetMask, searchRange, constrainObject);
	}
	template <typename T = void> T SearchForTarget() {
		return ((T (*)(ChainTargetCaster*))(Il2CppBase() + 0x186F60C))(this);
	}

};

}
