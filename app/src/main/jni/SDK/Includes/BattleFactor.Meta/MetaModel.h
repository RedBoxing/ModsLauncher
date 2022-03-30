#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Meta {

class MetaModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Meta", "MetaModel"));
	}

	template <typename T = uintptr_t> T& BattleFactor() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_BattleFactor() {
		return ((T (*)(MetaModel*))(Il2CppBase() + 0x1B1EFB8))(this);
	}

};

}
