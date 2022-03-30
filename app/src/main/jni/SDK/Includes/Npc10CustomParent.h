#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc10CustomParent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc10CustomParent"));
	}

	template <typename T = uintptr_t> T& parentTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& sortingLayerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& sortingOrder() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SetNpcParent(uintptr_t npcObject) {
		return ((T (*)(Npc10CustomParent*, uintptr_t))(Il2CppBase() + 0x4528930))(this, npcObject);
	}
	template <typename T = void> static T NpcOnGetMercenary(uintptr_t npcController) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4528C80))(0, npcController);
	}

};

}
