#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NPCTalkToObtainObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_TalkToObtainObject"));
	}

	template <typename T = uintptr_t> T& displayCondition() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _got() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& petIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& hideOnObtain() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& onFinished() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = bool> T get_isPet() {
		return ((T (*)(NPCTalkToObtainObject*))(Il2CppBase() + 0x4380524))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NPCTalkToObtainObject*))(Il2CppBase() + 0x438058C))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NPCTalkToObtainObject*, uintptr_t))(Il2CppBase() + 0x4380648))(this, controller);
	}
	template <typename T = void> T GetPet() {
		return ((T (*)(NPCTalkToObtainObject*))(Il2CppBase() + 0x43807E8))(this);
	}
	template <typename T = void> T GetPetb__11_0() {
		return ((T (*)(NPCTalkToObtainObject*))(Il2CppBase() + 0x438098C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(NPCTalkToObtainObject*))(Il2CppBase() + 0x43809A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NPCTalkToObtainObject*, uintptr_t))(Il2CppBase() + 0x43809A8))(this, P0);
	}

};

}
