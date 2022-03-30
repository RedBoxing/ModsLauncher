#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Downloadd0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Download>d__0"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& localfile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& checkEtag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& req5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& netStream5__3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& localStream5__4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& u__2() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(Downloadd0*))(Il2CppBase() + 0x16F1ACC))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(Downloadd0*, uintptr_t))(Il2CppBase() + 0x16F1AD4))(this, stateMachine);
	}

};

}
