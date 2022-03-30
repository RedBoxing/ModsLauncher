#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AttackTalk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttackTalk"));
	}

	template <typename T = Il2CppString*> T& talkKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AttackTalk*))(Il2CppBase() + 0x4185974))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AttackTalk*))(Il2CppBase() + 0x4185A0C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AttackTalk*))(Il2CppBase() + 0x4185AE0))(this);
	}
	template <typename T = void> T Talk() {
		return ((T (*)(AttackTalk*))(Il2CppBase() + 0x4185BB4))(this);
	}

};

}
