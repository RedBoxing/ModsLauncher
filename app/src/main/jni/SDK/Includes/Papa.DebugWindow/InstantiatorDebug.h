#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Papa.DebugWindow {

class InstantiatorDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Papa.DebugWindow", "InstantiatorDebug"));
	}


	template <typename T = uintptr_t> T NpcSummonProcess(uintptr_t npc) {
		return ((T (*)(InstantiatorDebug*, uintptr_t))(Il2CppBase() + 0x456A690))(this, npc);
	}

};

}
