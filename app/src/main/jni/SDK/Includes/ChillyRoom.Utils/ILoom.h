#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom.Utils {

class ILoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom.Utils", "ILoom"));
	}


	template <typename T = void> T RunOnMainThread(uintptr_t action, float delayTime) {
		return ((T (*)(ILoom*, uintptr_t, float))(Il2CppBase() + 0x0))(this, action, delayTime);
	}
	template <typename T = void> T RunAsyncThread(uintptr_t action) {
		return ((T (*)(ILoom*, uintptr_t))(Il2CppBase() + 0x0))(this, action);
	}

};

}
