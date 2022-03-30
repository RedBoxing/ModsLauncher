#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AssassinSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssassinSkill3Data"));
	}

	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& changeAnim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& changeAlpha() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& characterOnlyEffect() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = Il2CppVector3> T& effectOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& animBoolName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& customAlphaTransformPath() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& customAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
