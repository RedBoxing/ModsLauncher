#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffInversDir
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffInversDir"));
	}

	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffInversDir*))(Il2CppBase() + 0x459A85C))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffInversDir*, uintptr_t))(Il2CppBase() + 0x459A9FC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffInversDir*))(Il2CppBase() + 0x459AA70))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffInversDir*))(Il2CppBase() + 0x459AAD0))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffInversDir*))(Il2CppBase() + 0x459ABB4))(this);
	}

};

}
