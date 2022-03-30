#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DeadChangeLayerOrder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeadChangeLayerOrder"));
	}

	template <typename T = Il2CppString*> T& layerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& order() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rgeCtrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sortingGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DeadChangeLayerOrder*))(Il2CppBase() + 0x42DDF30))(this);
	}
	template <typename T = void> T ChangeSotringLayerOrder(uintptr_t ctrl) {
		return ((T (*)(DeadChangeLayerOrder*, uintptr_t))(Il2CppBase() + 0x42DE06C))(this, ctrl);
	}

};

}
