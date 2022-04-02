#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class PlutusShowUpPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "PlutusShowUpPanel"));
	}

	template <typename T = uintptr_t> T& descText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extraText() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
