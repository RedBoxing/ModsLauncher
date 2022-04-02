#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IRGBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRGBox"));
	}


	template <typename T = uintptr_t> T get_boxDestroyEvent() {
		return ((T (*)(IRGBox*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_boxDestroyEvent(uintptr_t value) {
		return ((T (*)(IRGBox*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T Hit(int32_t damage, uintptr_t source_object, int32_t camp) {
		return ((T (*)(IRGBox*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, damage, source_object, camp);
	}
	template <typename T = Il2CppVector3> T GetPosition() {
		return ((T (*)(IRGBox*))(Il2CppBase() + 0x0))(this);
	}

};

}
