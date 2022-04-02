#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc12DecoratorCustom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc12DecoratorCustom"));
	}

	template <typename T = Il2CppString*> T& initSortingLayerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hideObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onGetMercenary() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& delayShowTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& delayAfterShow() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& showEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _sortingGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isGet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnObjectInit(uintptr_t npcObject) {
		return ((T (*)(Npc12DecoratorCustom*, uintptr_t))(Il2CppBase() + 0x4529260))(this, npcObject);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Npc12DecoratorCustom*))(Il2CppBase() + 0x4529470))(this);
	}
	template <typename T = void> T NpcOnGetMercenary(uintptr_t npcController) {
		return ((T (*)(Npc12DecoratorCustom*, uintptr_t))(Il2CppBase() + 0x4529678))(this, npcController);
	}

};

}
