#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBTilePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBTilePanel"));
	}

	template <typename T = uintptr_t> T& windowSandbox() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tileGrid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& tileButtonProto() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& butttons() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180D6D4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180D918))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180D974))(this);
	}
	template <typename T = void> T CreatePanel() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180D7B4))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180DD9C))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(SBTilePanel*))(Il2CppBase() + 0x180DE0C))(this);
	}
	template <typename T = void> T CreateTileButton(uintptr_t tileInfo) {
		return ((T (*)(SBTilePanel*, uintptr_t))(Il2CppBase() + 0x180DAA0))(this, tileInfo);
	}

};

}
