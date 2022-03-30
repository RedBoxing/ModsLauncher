#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SoulFace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoulFace"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lerp_val() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& face_arr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& dead_face() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& track_mode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& start_pos() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& mid_pos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& end_pos() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& face_sr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& cur_face_idx() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SoulFace*))(Il2CppBase() + 0x42944CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SoulFace*))(Il2CppBase() + 0x42945F0))(this);
	}
	template <typename T = void> T MoveToTarget(uintptr_t target_obj) {
		return ((T (*)(SoulFace*, uintptr_t))(Il2CppBase() + 0x42949B8))(this, target_obj);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(SoulFace*))(Il2CppBase() + 0x4294C9C))(this);
	}
	template <typename T = void> T ChangeFace() {
		return ((T (*)(SoulFace*))(Il2CppBase() + 0x4294B90))(this);
	}
	template <typename T = void> T ShowDeadFace(uintptr_t target_obj) {
		return ((T (*)(SoulFace*, uintptr_t))(Il2CppBase() + 0x4294D50))(this, target_obj);
	}

};

}
