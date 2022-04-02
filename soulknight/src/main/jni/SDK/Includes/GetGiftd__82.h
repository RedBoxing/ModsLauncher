#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetGiftd82
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetGift>d__82"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& gift_Code() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& 8__1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& exp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(GetGiftd82*))(Il2CppBase() + 0x16F2578))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(GetGiftd82*, uintptr_t))(Il2CppBase() + 0x16F2580))(this, stateMachine);
	}

};

}
