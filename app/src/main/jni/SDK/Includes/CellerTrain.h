#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CellerTrain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CellerTrain"));
	}

	template <typename T = uintptr_t> T& raid_clip() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& wait_clip() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& run_clip() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Mount(uintptr_t driver) {
		return ((T (*)(CellerTrain*, uintptr_t))(Il2CppBase() + 0x186EC0C))(this, driver);
	}
	template <typename T = void> T PlayWaitClipAfterRaid() {
		return ((T (*)(CellerTrain*))(Il2CppBase() + 0x186ED5C))(this);
	}
	template <typename T = void> T PlayWaitClip(bool play) {
		return ((T (*)(CellerTrain*, bool))(Il2CppBase() + 0x186EE14))(this, play);
	}
	template <typename T = void> T PlayRunClip(bool play) {
		return ((T (*)(CellerTrain*, bool))(Il2CppBase() + 0x186EF98))(this, play);
	}
	template <typename T = void> T RoleMove(uintptr_t m) {
		return ((T (*)(CellerTrain*, uintptr_t))(Il2CppBase() + 0x186F11C))(this, m);
	}
	template <typename T = void> T Land() {
		return ((T (*)(CellerTrain*))(Il2CppBase() + 0x186F254))(this);
	}
	template <typename T = void> T OnDriveStatusChanged(bool isMount) {
		return ((T (*)(CellerTrain*, bool))(Il2CppBase() + 0x186F2D0))(this, isMount);
	}
	template <typename T = void> T iFixBaseProxy_Mount(uintptr_t P0) {
		return ((T (*)(CellerTrain*, uintptr_t))(Il2CppBase() + 0x186F4F0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RoleMove(uintptr_t P0) {
		return ((T (*)(CellerTrain*, uintptr_t))(Il2CppBase() + 0x186F4F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Land() {
		return ((T (*)(CellerTrain*))(Il2CppBase() + 0x186F500))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDriveStatusChanged(bool P0) {
		return ((T (*)(CellerTrain*, bool))(Il2CppBase() + 0x186F508))(this, P0);
	}

};

}
