#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace MuseumUnlock {

class Const
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MuseumUnlock", "Const"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& rewardTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& RewardSkinType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
