#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class ContentsChangedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "ContentsChangedDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(ContentsChangedDelegate*))(Il2CppBase() + 0x1A24D20))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(ContentsChangedDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A25120))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ContentsChangedDelegate*, uintptr_t))(Il2CppBase() + 0x1A25154))(this, result);
	}

};

}
