#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.NewConfigs.Configs {

class AdData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.NewConfigs.Configs", "AdData"));
	}

	template <typename T = Il2CppString*> T& reward() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& rewardNum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& limitCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
