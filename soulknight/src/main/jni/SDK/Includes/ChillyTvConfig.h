#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChillyTvConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChillyTvConfig"));
	}

	template <typename T = uintptr_t> T& showType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& quanWatchTv() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& channelByOrder() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = int32_t> T& tvVersion() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& configs() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uintptr_t> T GetConfigItem() {
		return ((T (*)(ChillyTvConfig*))(Il2CppBase() + 0x1E762A8))(this);
	}

};

}
