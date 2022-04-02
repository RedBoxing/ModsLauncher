#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RendererMaterialOffsetUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RendererMaterialOffsetUpdate"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& velocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& instanceMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RendererMaterialOffsetUpdate*))(Il2CppBase() + 0x42CA71C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RendererMaterialOffsetUpdate*))(Il2CppBase() + 0x42CA934))(this);
	}

};

}
