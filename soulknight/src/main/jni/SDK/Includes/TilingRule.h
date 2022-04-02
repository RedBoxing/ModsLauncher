#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TilingRule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TilingRule"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_Neighbors() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_AnimationSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_PerlinScale() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_RuleTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_Output() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_ColliderType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_RandomTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
