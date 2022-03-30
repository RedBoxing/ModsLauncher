#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class NpcCard5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "NpcCard5"));
	}

	template <typename T = uintptr_t> T& atkClip() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}
	template <typename T = uintptr_t> T& _gunPoint() {
		return *(T*)((uintptr_t)this + 0x1F8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31A64))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31B4C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31C88))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31D00))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31FEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31FF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(NpcCard5*))(Il2CppBase() + 0x1C31FFC))(this);
	}

};

}
