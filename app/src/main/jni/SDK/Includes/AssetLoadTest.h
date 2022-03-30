#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AssetLoadTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetLoadTest"));
	}

	template <typename T = int32_t> T& times() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AssetLoadTest*))(Il2CppBase() + 0x4185678))(this);
	}
	template <typename T = uintptr_t> T CreatingSingleton() {
		return ((T (*)(AssetLoadTest*))(Il2CppBase() + 0x41856E8))(this);
	}

};

}
