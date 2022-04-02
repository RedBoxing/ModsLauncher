#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace SoulKnight.Runtime.EnemyEditor {

class DropConditionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SoulKnight.Runtime.EnemyEditor", "DropConditionType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& BluePrintResearched() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& BluePrintHasBeenGot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& MaterialCountLessThanRequiredNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
