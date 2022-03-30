#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace SoulKnight.Runtime.EnemyEditor {

class EnemyDropGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SoulKnight.Runtime.EnemyEditor", "EnemyDropGroup"));
	}

	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Drops() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
