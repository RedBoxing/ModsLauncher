#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReCalld02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReCall>d__0`2"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& trySendCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& dataTask() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& maxCostMillSecondsPerSend() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& dealReceiveData() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& exp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t5__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& exception5__3() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& task5__4() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& u__3() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& u__4() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(ReCalld02*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(ReCalld02*, uintptr_t))(Il2CppBase() + 0x0))(this, stateMachine);
	}

};

}
