#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RedPoint {

class CharacterLevelupRedPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RedPoint", "CharacterLevelupRedPoint"));
	}

	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& redPoint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CharacterLevelupRedPoint*))(Il2CppBase() + 0x42B26DC))(this);
	}
	template <typename T = void> T RefreshRedPoint(uintptr_t e) {
		return ((T (*)(CharacterLevelupRedPoint*, uintptr_t))(Il2CppBase() + 0x42B277C))(this, e);
	}
	template <typename T = bool> static T NeedShowRedPoint(int32_t playerIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42B2C84))(0, playerIdx);
	}
	template <typename T = bool> static T NeedShowTips(int32_t playerIdx, bool uiSelectHero) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x42B28B8))(0, playerIdx, uiSelectHero);
	}
	template <typename T = void> T ShowRedPoint(bool show) {
		return ((T (*)(CharacterLevelupRedPoint*, bool))(Il2CppBase() + 0x42B2A3C))(this, show);
	}

};

}
