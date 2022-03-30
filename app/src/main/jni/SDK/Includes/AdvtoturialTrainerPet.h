#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdvtoturialTrainerPet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvtoturialTrainerPet"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& trainer_talk_group_list() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& battle_talk_list() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& other_talk_list() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& teach_target() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = int32_t> T& cur_talk_idx() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = int32_t> T& cur_talk_group_idx() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& cur_talk_group() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& default_talk_time() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A14210))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A143A8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A14B0C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A14CF0))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A1532C))(this);
	}
	template <typename T = void> T Stay(float time) {
		return ((T (*)(AdvtoturialTrainerPet*, float))(Il2CppBase() + 0x1A156A0))(this, time);
	}
	template <typename T = void> T EndStay() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A15794))(this);
	}
	template <typename T = void> T CreateEnergyPot() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A145DC))(this);
	}
	template <typename T = void> T AtkProcess() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A15858))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A15A68))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A1427C))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A14BC4))(this);
	}
	template <typename T = void> T OnTriggerTalk(uintptr_t e) {
		return ((T (*)(AdvtoturialTrainerPet*, uintptr_t))(Il2CppBase() + 0x1A160A4))(this, e);
	}
	template <typename T = void> T ProcessBattleTalk() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A158B8))(this);
	}
	template <typename T = void> T ProcessToturialTalk(int32_t talk_id) {
		return ((T (*)(AdvtoturialTrainerPet*, int32_t))(Il2CppBase() + 0x1A144A8))(this, talk_id);
	}
	template <typename T = void> T ProcessOtherTalk(int32_t talk_id) {
		return ((T (*)(AdvtoturialTrainerPet*, int32_t))(Il2CppBase() + 0x1A16210))(this, talk_id);
	}
	template <typename T = Il2CppString*> T GetLocTalk(Il2CppString* key) {
		return ((T (*)(AdvtoturialTrainerPet*, Il2CppString*))(Il2CppBase() + 0x1A163E4))(this, key);
	}
	template <typename T = uintptr_t> T GetTalkGroupByIdx(int32_t idx) {
		return ((T (*)(AdvtoturialTrainerPet*, int32_t))(Il2CppBase() + 0x1A16474))(this, idx);
	}
	template <typename T = void> T ToturialTalk() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A16564))(this);
	}
	template <typename T = void> T QuickToNext() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A167D4))(this);
	}
	template <typename T = void> T OnTriigerRoomStart(uintptr_t e) {
		return ((T (*)(AdvtoturialTrainerPet*, uintptr_t))(Il2CppBase() + 0x1A16848))(this, e);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A16998))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A169A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A169A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A169B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_AtkProcess() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A169B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(AdvtoturialTrainerPet*))(Il2CppBase() + 0x1A169C0))(this);
	}

};

}
