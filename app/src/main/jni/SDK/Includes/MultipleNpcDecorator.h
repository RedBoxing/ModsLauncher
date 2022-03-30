#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultipleNpcDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultipleNpcDecorator"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& npcModelDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& pivot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& onNpcObjectInit() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Init(uintptr_t npcObject) {
		return ((T (*)(MultipleNpcDecorator*, uintptr_t))(Il2CppBase() + 0x437A9A4))(this, npcObject);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(MultipleNpcDecorator*))(Il2CppBase() + 0x437ACA4))(this);
	}

};

}
