#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecoratePosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecoratePosition"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& positionModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& festivalDecorateConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& defaultPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FestivalDecoratePosition*))(Il2CppBase() + 0x4476428))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FestivalDecoratePosition*))(Il2CppBase() + 0x4476488))(this);
	}

};

}
