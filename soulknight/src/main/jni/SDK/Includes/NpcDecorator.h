#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcDecorator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcDecorator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& hideObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& npcPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& npcRotate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& pivot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onNpcObjectInit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& onNpcHireSuccess() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Init(uintptr_t npcObject) {
		return ((T (*)(NpcDecorator*, uintptr_t))(Il2CppBase() + 0x452A428))(this, npcObject);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(NpcDecorator*))(Il2CppBase() + 0x452A770))(this);
	}
	template <typename T = void> T Initb__6_0(uintptr_t controller) {
		return ((T (*)(NpcDecorator*, uintptr_t))(Il2CppBase() + 0x452A898))(this, controller);
	}

};

}
