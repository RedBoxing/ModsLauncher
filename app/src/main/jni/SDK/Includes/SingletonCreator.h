#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SingletonCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SingletonCreator"));
	}

	template <typename T = uintptr_t> T& saveManger() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& saveMangerSwitch() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x1831610))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x1831AF8))(this);
	}
	template <typename T = void> T CreateGoogleGameCenter() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x1831714))(this);
	}
	template <typename T = void> T CreatePwdTrigger() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x18317F8))(this);
	}
	template <typename T = void> T OnCreate() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x1831B58))(this);
	}
	template <typename T = void> T CreateInputControl() {
		return ((T (*)(SingletonCreator*))(Il2CppBase() + 0x1831A4C))(this);
	}

};

}
