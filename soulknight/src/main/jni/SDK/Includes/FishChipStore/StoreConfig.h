#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class StoreConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "StoreConfig"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& storeItems() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& expireTimestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& startTimeStamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customContents() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T InitItemIndex() {
		return ((T (*)(StoreConfig*))(Il2CppBase() + 0x450BAD0))(this);
	}

};

}
