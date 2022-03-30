#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Meta {

class MetaBattleFactorConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Meta", "MetaBattleFactorConst"));
	}

	template <typename T = Il2CppString*> static T& BattleFactorAddEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BattleFactorRemoveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GameSceneInitEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
