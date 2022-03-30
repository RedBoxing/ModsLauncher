#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFBatteryBunker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFBatteryBunker"));
	}

	template <typename T = uintptr_t> T& spriteRise() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& spriteDown() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = uintptr_t> T& col() {
		return *(T*)((uintptr_t)this + 0x290);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DFBatteryBunker*))(Il2CppBase() + 0x42870E4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DFBatteryBunker*))(Il2CppBase() + 0x4287218))(this);
	}
	template <typename T = void> T SwitchState(bool isRise) {
		return ((T (*)(DFBatteryBunker*, bool))(Il2CppBase() + 0x42872E4))(this, isRise);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(DFBatteryBunker*, int32_t))(Il2CppBase() + 0x42873C0))(this, game_state);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(DFBatteryBunker*))(Il2CppBase() + 0x4287450))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(DFBatteryBunker*))(Il2CppBase() + 0x4287458))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(DFBatteryBunker*, int32_t))(Il2CppBase() + 0x428745C))(this, P0);
	}

};

}
