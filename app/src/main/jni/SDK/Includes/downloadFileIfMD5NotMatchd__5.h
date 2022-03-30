#pragma once
#include "Il2Cpp/Il2Cpp.h"

class downloadFileIfMD5NotMatchd5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<downloadFileIfMD5NotMatch>d__5"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& localName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& md5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& fileUrl() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& tmpName5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(downloadFileIfMD5NotMatchd5*))(Il2CppBase() + 0x16F32C8))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(downloadFileIfMD5NotMatchd5*, uintptr_t))(Il2CppBase() + 0x16F32D0))(this, stateMachine);
	}

};

}
