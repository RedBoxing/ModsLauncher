#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PostAsyncd89
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PostAsync>d__89"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& memoryStream5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& requestContent5__3() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& u__2() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(PostAsyncd89*))(Il2CppBase() + 0x16F25C0))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(PostAsyncd89*, uintptr_t))(Il2CppBase() + 0x16F25C8))(this, stateMachine);
	}

};

}