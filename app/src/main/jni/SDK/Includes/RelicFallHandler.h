#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFallHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFallHandler"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _positionState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _characterHideList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _characterParticles() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _bodySpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isFalling() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _needLand() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> T& _sequence() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _speedModifiedId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _controllerExclusiveMount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _controllerMount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& SafePosition() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = bool> T get_IsSafe() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C1A80))(this);
	}
	template <typename T = Il2CppVector3> T get_SafePosition() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42BFC58))(this);
	}
	template <typename T = void> T set_SafePosition(Il2CppVector3 value) {
		return ((T (*)(RelicFallHandler*, Il2CppVector3))(Il2CppBase() + 0x42C1AE8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C1AF4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C1D68))(this);
	}
	template <typename T = void> T FallEnd() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C2540))(this);
	}
	template <typename T = void> T CustomControllerAfterFallProcess() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C2E38))(this);
	}
	template <typename T = void> static T CustomControllerFallProcess(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x42C2FA0))(0, controller);
	}
	template <typename T = void> T OnAfterMount() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C35C0))(this);
	}
	template <typename T = void> T OnLand() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C36F0))(this);
	}
	template <typename T = void> T MountLandProcess() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C2B84))(this);
	}
	template <typename T = void> T OnForceDropWeapon(uintptr_t weapon) {
		return ((T (*)(RelicFallHandler*, uintptr_t))(Il2CppBase() + 0x42C37C4))(this, weapon);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C39F8))(this);
	}
	template <typename T = void> T OnMultiGameRoomStart(uintptr_t eventBase) {
		return ((T (*)(RelicFallHandler*, uintptr_t))(Il2CppBase() + 0x42C3C44))(this, eventBase);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RelicFallHandler*))(Il2CppBase() + 0x42C3D40))(this);
	}
	template <typename T = void> T ReturnToSafePosition(uintptr_t thisRoom) {
		return ((T (*)(RelicFallHandler*, uintptr_t))(Il2CppBase() + 0x42C3F6C))(this, thisRoom);
	}

};

}
