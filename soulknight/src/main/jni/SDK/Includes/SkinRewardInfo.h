#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinRewardInfo"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(SkinRewardInfo*, bool))(Il2CppBase() + 0x1836EF4))(this, showUi);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(SkinRewardInfo*))(Il2CppBase() + 0x1837140))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(SkinRewardInfo*))(Il2CppBase() + 0x1837088))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(SkinRewardInfo*))(Il2CppBase() + 0x18371A0))(this);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(SkinRewardInfo*))(Il2CppBase() + 0x1836FA8))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(SkinRewardInfo*))(Il2CppBase() + 0x183742C))(this);
	}

};

}
