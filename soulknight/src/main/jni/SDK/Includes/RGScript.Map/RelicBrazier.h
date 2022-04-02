#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Map {

class RelicBrazier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Map", "RelicBrazier"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& activeTriggerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Active() {
		return ((T (*)(RelicBrazier*))(Il2CppBase() + 0x44E5FE0))(this);
	}

};

}
