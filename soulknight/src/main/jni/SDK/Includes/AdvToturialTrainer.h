#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AdvToturialTrainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvToturialTrainer"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& toturial_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& cur_info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& toturial_idx() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& all_complete() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& boxCollider() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AdvToturialTrainer*))(Il2CppBase() + 0x1A0F810))(this);
	}
	template <typename T = void> T OnInitToturial() {
		return ((T (*)(AdvToturialTrainer*))(Il2CppBase() + 0x1A0F8E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AdvToturialTrainer*))(Il2CppBase() + 0x1A0FBB4))(this);
	}
	template <typename T = void> T OnTriggerEvent(uintptr_t e) {
		return ((T (*)(AdvToturialTrainer*, uintptr_t))(Il2CppBase() + 0x1A0FED8))(this, e);
	}
	template <typename T = void> T ProcessTrigger(Il2CppString* method, Il2CppList<Il2CppString*>* param) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1A109D8))(this, method, param);
	}
	template <typename T = uintptr_t> T GetMethodByName(Il2CppString* method_name) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*))(Il2CppBase() + 0x1A10B48))(this, method_name);
	}
	template <typename T = void> T OpenRoomDoor(Il2CppString* room_name) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*))(Il2CppBase() + 0x1A10BDC))(this, room_name);
	}
	template <typename T = void> T CloseRoomDoor(Il2CppString* room_name) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*))(Il2CppBase() + 0x1A10D50))(this, room_name);
	}
	template <typename T = void> T TrainerTalk(Il2CppString* talk_type, Il2CppString* talk_idx) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A10EC4))(this, talk_type, talk_idx);
	}
	template <typename T = void> T ShowForceTeach(Il2CppString* canvas, Il2CppString* path, Il2CppString* call_method) {
		return ((T (*)(AdvToturialTrainer*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A11004))(this, canvas, path, call_method);
	}
	template <typename T = void> T EndAdvTourial() {
		return ((T (*)(AdvToturialTrainer*))(Il2CppBase() + 0x1A1128C))(this);
	}
	template <typename T = void> T JumpToIdx(int32_t idx) {
		return ((T (*)(AdvToturialTrainer*, int32_t))(Il2CppBase() + 0x1A117B8))(this, idx);
	}

};

}
