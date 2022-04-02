#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampEntranceListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampEntranceListener"));
	}

	template <typename T = uintptr_t> T& bossRoomPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bossRoomType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& entranceGatePrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& originalGatePosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& swampGatePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _entranceBossRoom() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _originalBossRoom() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _swampSacrificeRecorder() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _entranceTargetGate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& _hasChangeBossRoom() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampEntranceListener*))(Il2CppBase() + 0x42ADF88))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SwampEntranceListener*))(Il2CppBase() + 0x42AE1C4))(this);
	}
	template <typename T = void> T AfterRoomCreated(uintptr_t mapManagerLevel) {
		return ((T (*)(SwampEntranceListener*, uintptr_t))(Il2CppBase() + 0x42AE400))(this, mapManagerLevel);
	}
	template <typename T = void> T InstantiateExtraBossRoom(uintptr_t mapManager, uintptr_t targetRoom) {
		return ((T (*)(SwampEntranceListener*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42AE598))(this, mapManager, targetRoom);
	}
	template <typename T = void> T EntranceShowGate() {
		return ((T (*)(SwampEntranceListener*))(Il2CppBase() + 0x42AEBB8))(this);
	}
	template <typename T = void> T EntranceInstantiateGate(uintptr_t gate) {
		return ((T (*)(SwampEntranceListener*, uintptr_t))(Il2CppBase() + 0x42AEC94))(this, gate);
	}
	template <typename T = void> T AfterSwampRecord() {
		return ((T (*)(SwampEntranceListener*))(Il2CppBase() + 0x42AEE5C))(this);
	}
	template <typename T = void> T SetBossRoomActive() {
		return ((T (*)(SwampEntranceListener*))(Il2CppBase() + 0x42AE89C))(this);
	}

};

}
