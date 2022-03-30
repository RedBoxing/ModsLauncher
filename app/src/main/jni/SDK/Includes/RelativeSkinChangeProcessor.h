#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelativeSkinChangeProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelativeSkinChangeProcessor"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _skinChangers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& autoChange() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _skinIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RelativeSkinChangeProcessor*))(Il2CppBase() + 0x42B2DA0))(this);
	}
	template <typename T = void> T Change(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(RelativeSkinChangeProcessor*, uintptr_t, int32_t))(Il2CppBase() + 0x42B2F78))(this, hero, skinIndex);
	}

};

}
