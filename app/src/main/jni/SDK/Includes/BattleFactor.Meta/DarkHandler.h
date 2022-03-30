#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Meta {

class DarkHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Meta", "DarkHandler"));
	}

	template <typename T = uintptr_t> T& Factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1E81C))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1E824))(this);
	}
	template <typename T = bool> T get_inHeroOrMultiRoom() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1E82C))(this);
	}
	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(DarkHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1E8A8))(this, eventName, target);
	}
	template <typename T = void> T GameSceneAddEffect() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1ECC0))(this);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1EB50))(this);
	}
	template <typename T = void> T AddEffect() {
		return ((T (*)(DarkHandler*))(Il2CppBase() + 0x1B1E9D4))(this);
	}

};

}
