#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetGameDataJsond77
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetGameDataJson>d__77"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& bindInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bindType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(GetGameDataJsond77*))(Il2CppBase() + 0x16F2564))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(GetGameDataJsond77*, uintptr_t))(Il2CppBase() + 0x16F256C))(this, stateMachine);
	}

};

}
