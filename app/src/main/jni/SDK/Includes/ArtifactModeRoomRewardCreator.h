#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactModeRoomRewardCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactModeRoomRewardCreator"));
	}

	template <typename T = uintptr_t> T& battleRoomChest() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& battleRoomEliteChest() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T OnCreateReward(uintptr_t room) {
		return ((T (*)(ArtifactModeRoomRewardCreator*, uintptr_t))(Il2CppBase() + 0x1CA7C9C))(this, room);
	}

};

}
