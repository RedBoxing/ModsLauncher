#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace NewDynamicConfig {

class FishChipStoreConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "NewDynamicConfig", "FishChipStoreConfig"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& configs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& storeConfigs() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ForceConfig() {
		return ((T (*)(FishChipStoreConfig*))(Il2CppBase() + 0x4462E9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ForceConfig() {
		return ((T (*)(FishChipStoreConfig*))(Il2CppBase() + 0x44631AC))(this);
	}

};

}
