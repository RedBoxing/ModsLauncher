#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveStatisticIcon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveStatisticIcon"));
	}

	template <typename T = Il2CppString*> T& eventKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& customKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_text() {
		return ((T (*)(CloudSaveStatisticIcon*))(Il2CppBase() + 0x1E837A4))(this);
	}
	template <typename T = void> T Refresh(uintptr_t cloudData) {
		return ((T (*)(CloudSaveStatisticIcon*, uintptr_t))(Il2CppBase() + 0x1E7A1D0))(this, cloudData);
	}

};

}
