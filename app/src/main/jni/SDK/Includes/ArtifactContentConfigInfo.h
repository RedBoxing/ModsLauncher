#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactContentConfigInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactContentConfigInfo"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> T& initParts() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> T& parts() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<Il2CppString*>*>*> T& weaponComponents() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& components() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
