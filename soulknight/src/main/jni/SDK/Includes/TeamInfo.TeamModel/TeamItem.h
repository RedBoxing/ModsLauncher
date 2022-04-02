#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace TeamInfo.TeamModel {

class TeamItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "TeamInfo.TeamModel", "TeamItem"));
	}

	template <typename T = int32_t> T& teamIdx() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& playerIdx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skinIdx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& online() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bgState() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = float> T& hpPercent() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mpPercent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& dead() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x30);
	}


};

}
