#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetPointWithIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetPointWithIcon"));
	}

	template <typename T = uintptr_t> T& target_line() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& disappearDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& iconTrans() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& line_renderer0() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& line_renderer1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TargetPointWithIcon*))(Il2CppBase() + 0x43B6148))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(TargetPointWithIcon*))(Il2CppBase() + 0x43B6320))(this);
	}
	template <typename T = Il2CppVector3> T CenterPoint(Il2CppVector3 pos1, Il2CppVector3 pos2) {
		return ((T (*)(TargetPointWithIcon*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x43B6930))(this, pos1, pos2);
	}

};

}
