#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TriggerModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerModel"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buffPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& scaleValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
