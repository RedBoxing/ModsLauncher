#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MyEventHandler1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MyEventHandler`1"));
	}


	template <typename T = void> T Invoke(uintptr_t e) {
		return ((T (*)(MyEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MyEventHandler1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MyEventHandler1*, uintptr_t))(Il2CppBase() + 0x0))(this, result);
	}

};

}
