#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomRewardInfo"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(MultiRoomRewardInfo*, bool))(Il2CppBase() + 0x43763CC))(this, showUi);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(MultiRoomRewardInfo*))(Il2CppBase() + 0x4376444))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(MultiRoomRewardInfo*))(Il2CppBase() + 0x43764A4))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(MultiRoomRewardInfo*))(Il2CppBase() + 0x4376570))(this);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(MultiRoomRewardInfo*))(Il2CppBase() + 0x4376670))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(MultiRoomRewardInfo*))(Il2CppBase() + 0x4376760))(this);
	}

};

}
