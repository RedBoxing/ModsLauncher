#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveDescPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveDescPanel"));
	}

	template <typename T = uintptr_t> T& noSaveText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& titleText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& picPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& moneyText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& roles() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CloudSaveDescPanel*))(Il2CppBase() + 0x1E7FAFC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CloudSaveDescPanel*))(Il2CppBase() + 0x1E7FC8C))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t gameData) {
		return ((T (*)(CloudSaveDescPanel*, uintptr_t))(Il2CppBase() + 0x1E7FD8C))(this, gameData);
	}

};

}
