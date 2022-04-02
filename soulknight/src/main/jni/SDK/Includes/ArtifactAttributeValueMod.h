#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactAttributeValueMod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactAttributeValueMod"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& attributes() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _mod() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(ArtifactAttributeValueMod*, uintptr_t))(Il2CppBase() + 0x1C96E2C))(this, weapon);
	}
	template <typename T = int32_t> T GetValue(uintptr_t attribute, int32_t value) {
		return ((T (*)(ArtifactAttributeValueMod*, uintptr_t, int32_t))(Il2CppBase() + 0x1C9712C))(this, attribute, value);
	}

};

}
