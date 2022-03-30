#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Papa.DebugWindow {

class NpcSummon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Papa.DebugWindow", "NpcSummon"));
	}

	template <typename T = Il2CppString*> T& npcPath() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& npcName() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
