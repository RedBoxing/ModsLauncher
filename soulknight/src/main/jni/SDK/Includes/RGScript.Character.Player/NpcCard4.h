#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class NpcCard4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "NpcCard4"));
	}


	template <typename T = void> T ShootReflection() {
		return ((T (*)(NpcCard4*))(Il2CppBase() + 0x1C318D0))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(NpcCard4*))(Il2CppBase() + 0x1C319CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(NpcCard4*))(Il2CppBase() + 0x1C31A5C))(this);
	}

};

}
