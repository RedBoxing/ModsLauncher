#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ILockableObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILockableObject"));
	}


	template <typename T = bool> T CanOffLock(uintptr_t character) {
		return ((T (*)(ILockableObject*, uintptr_t))(Il2CppBase() + 0x0))(this, character);
	}
	template <typename T = bool> T IsLocked() {
		return ((T (*)(ILockableObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T BeLock() {
		return ((T (*)(ILockableObject*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OffLock() {
		return ((T (*)(ILockableObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
