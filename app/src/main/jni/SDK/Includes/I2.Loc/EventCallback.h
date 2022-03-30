#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class EventCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "EventCallback"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MethodName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Execute(uintptr_t Sender) {
		return ((T (*)(EventCallback*, uintptr_t))(Il2CppBase() + 0x4210CBC))(this, Sender);
	}
	template <typename T = bool> T HasCallback() {
		return ((T (*)(EventCallback*))(Il2CppBase() + 0x4210D94))(this);
	}

};

}
