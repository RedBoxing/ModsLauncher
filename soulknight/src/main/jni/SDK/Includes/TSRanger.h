#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSRanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSRanger"));
	}


	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSRanger*))(Il2CppBase() + 0x18CD590))(this);
	}
	template <typename T = void> T Slash(int32_t totalCount) {
		return ((T (*)(TSRanger*, int32_t))(Il2CppBase() + 0x18CD630))(this, totalCount);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSRanger*))(Il2CppBase() + 0x18CE3A4))(this);
	}

};

}
