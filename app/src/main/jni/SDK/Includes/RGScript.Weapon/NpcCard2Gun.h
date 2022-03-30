#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class NpcCard2Gun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "NpcCard2Gun"));
	}


	template <typename T = void> T Attack() {
		return ((T (*)(NpcCard2Gun*))(Il2CppBase() + 0x43D215C))(this);
	}

};

}
