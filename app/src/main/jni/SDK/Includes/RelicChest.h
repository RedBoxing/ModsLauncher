#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicChest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicChest"));
	}

	template <typename T = uintptr_t> T& openEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& openEffectTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& openEffectPositionOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& openAnimKey() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onRoomClear() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _openAnimId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicChest*))(Il2CppBase() + 0x42B5644))(this);
	}
	template <typename T = void> T Init(uintptr_t room) {
		return ((T (*)(RelicChest*, uintptr_t))(Il2CppBase() + 0x42B56B0))(this, room);
	}
	template <typename T = void> T OnRoomClear(uintptr_t room) {
		return ((T (*)(RelicChest*, uintptr_t))(Il2CppBase() + 0x42B57A8))(this, room);
	}
	template <typename T = void> T InstantiateEffect() {
		return ((T (*)(RelicChest*))(Il2CppBase() + 0x42B5838))(this);
	}

};

}
