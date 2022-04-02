#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateShow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateShow"));
	}

	template <typename T = Il2CppString*> T& festivalKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& festivalDecorateConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isInversed() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T get_festivalKeyDropDownList() {
		return ((T (*)(FestivalDecorateShow*))(Il2CppBase() + 0x4476780))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(FestivalDecorateShow*))(Il2CppBase() + 0x44769F4))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FestivalDecorateShow*))(Il2CppBase() + 0x4476A54))(this);
	}

};

}
