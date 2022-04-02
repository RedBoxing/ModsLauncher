#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFallAi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFallAi"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& SafePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _controllerModel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _characterHideList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _bodySpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isFalling() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _sequence() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _inFallEra() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _inFallEraTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42BF970))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(RelicFallAi*, uintptr_t))(Il2CppBase() + 0x42BF978))(this, value);
	}
	template <typename T = Il2CppVector3> T get_SafePosition() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42BF980))(this);
	}
	template <typename T = void> T set_SafePosition(Il2CppVector3 value) {
		return ((T (*)(RelicFallAi*, Il2CppVector3))(Il2CppBase() + 0x42BF98C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42BF998))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42BFC64))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42C0224))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42C0430))(this);
	}
	template <typename T = void> T Updateb__17_0() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42C0528))(this);
	}
	template <typename T = void> T Updateb__17_1() {
		return ((T (*)(RelicFallAi*))(Il2CppBase() + 0x42C10B4))(this);
	}

};

}
