#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CallTaskRpcd87
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CallTaskRpc>d__87"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& rid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& func() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint16_t> T& port() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& maxCostMillis() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& postTask5__2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(CallTaskRpcd87*))(Il2CppBase() + 0x16F24E0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(CallTaskRpcd87*, uintptr_t))(Il2CppBase() + 0x16F24E8))(this, stateMachine);
	}

};

}
