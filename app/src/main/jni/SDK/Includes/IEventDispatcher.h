#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IEventDispatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEventDispatcher"));
	}


	template <typename T = void> T EventDispatch(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(IEventDispatcher*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, eventName, target);
	}
	template <typename T = void> T AddListener(Il2CppString* eventName, void* callBack) {
		return ((T (*)(IEventDispatcher*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, eventName, callBack);
	}
	template <typename T = void> T RemoveListener(Il2CppString* eventName, void* callBack) {
		return ((T (*)(IEventDispatcher*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, eventName, callBack);
	}

};

}
