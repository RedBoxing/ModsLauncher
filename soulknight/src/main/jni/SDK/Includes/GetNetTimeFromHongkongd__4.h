#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetNetTimeFromHongkongd4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetNetTimeFromHongkong>d__4"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& maxCostMillisecond() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& task5__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(GetNetTimeFromHongkongd4*))(Il2CppBase() + 0x16F3264))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(GetNetTimeFromHongkongd4*, uintptr_t))(Il2CppBase() + 0x16F326C))(this, stateMachine);
	}

};

}
