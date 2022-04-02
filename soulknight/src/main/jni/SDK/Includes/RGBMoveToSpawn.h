#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBMoveToSpawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBMoveToSpawn"));
	}

	template <typename T = Il2CppVector3> T& target_pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& spawn_pos() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& move_speed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& spwn_obj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& end_move_func() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBMoveToSpawn*))(Il2CppBase() + 0x1BAF834))(this);
	}
	template <typename T = void> T SetTargetPos(Il2CppVector3 pos) {
		return ((T (*)(RGBMoveToSpawn*, Il2CppVector3))(Il2CppBase() + 0x1BAF958))(this, pos);
	}
	template <typename T = void> T SetSpawnPos(Il2CppVector3 pos) {
		return ((T (*)(RGBMoveToSpawn*, Il2CppVector3))(Il2CppBase() + 0x1BAF9EC))(this, pos);
	}
	template <typename T = void> T SetEndMoveCB(void* cb) {
		return ((T (*)(RGBMoveToSpawn*, void*))(Il2CppBase() + 0x1BAFA80))(this, cb);
	}
	template <typename T = uintptr_t> T MoveToTarget() {
		return ((T (*)(RGBMoveToSpawn*))(Il2CppBase() + 0x1BAF8A4))(this);
	}
	template <typename T = void> T EndMoveToTarget() {
		return ((T (*)(RGBMoveToSpawn*))(Il2CppBase() + 0x1BAFB20))(this);
	}

};

}
