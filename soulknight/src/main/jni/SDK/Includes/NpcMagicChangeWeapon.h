#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcMagicChangeWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcMagicChangeWeapon"));
	}

	template <typename T = int32_t> T& talkIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& changeWeaponAnimKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& restoreDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _changeWeaponAnimId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NpcMagicChangeWeapon*))(Il2CppBase() + 0x452B6BC))(this);
	}
	template <typename T = void> T OnShowTalk(int32_t talkIndex) {
		return ((T (*)(NpcMagicChangeWeapon*, int32_t))(Il2CppBase() + 0x452B728))(this, talkIndex);
	}

};

}
