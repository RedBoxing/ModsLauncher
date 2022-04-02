#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RefreshUseSvrFolderb1d
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<<RefreshUseSvrFolder>b__1>d"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& t__builder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& entry() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& localName5__2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& u__1() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T MoveNext() {
		return ((T (*)(RefreshUseSvrFolderb1d*))(Il2CppBase() + 0x16F32A4))(this);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(RefreshUseSvrFolderb1d*, uintptr_t))(Il2CppBase() + 0x16F32AC))(this, stateMachine);
	}

};

}
