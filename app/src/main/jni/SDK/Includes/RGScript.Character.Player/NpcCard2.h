#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class NpcCard2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "NpcCard2"));
	}


	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C30FBC))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C31018))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C314C8))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C31738))(this);
	}
	template <typename T = void> T Atk() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C31820))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C318B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C318B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C318C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(NpcCard2*))(Il2CppBase() + 0x1C318C8))(this);
	}

};

}
