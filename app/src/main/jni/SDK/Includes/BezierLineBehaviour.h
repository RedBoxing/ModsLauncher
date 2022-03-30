#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BezierLineBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BezierLineBehaviour"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& control_points() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& line() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& len() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& node_num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& control_point_pos_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& control_point_dir_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& is_ready_draw() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BezierLineBehaviour*))(Il2CppBase() + 0x1B271E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BezierLineBehaviour*))(Il2CppBase() + 0x1B275B8))(this);
	}
	template <typename T = void> T UpdateBezierLine() {
		return ((T (*)(BezierLineBehaviour*))(Il2CppBase() + 0x1B27618))(this);
	}
	template <typename T = Il2CppVector3> T CalcuBezierList(float percent, Il2CppList<Il2CppVector3>* points) {
		return ((T (*)(BezierLineBehaviour*, float, Il2CppList<Il2CppVector3>*))(Il2CppBase() + 0x1B27C18))(this, percent, points);
	}

};

}
