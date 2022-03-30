#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffCurse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffCurse"));
	}

	template <typename T = float> T& changeValue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffCurse*))(Il2CppBase() + 0x20A5450))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffCurse*, uintptr_t))(Il2CppBase() + 0x20A5670))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffCurse*))(Il2CppBase() + 0x20A56E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffCurse*))(Il2CppBase() + 0x20A574C))(this);
	}

};

}
