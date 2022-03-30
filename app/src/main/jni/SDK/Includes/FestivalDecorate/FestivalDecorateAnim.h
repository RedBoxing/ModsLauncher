#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class FestivalDecorateAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "FestivalDecorateAnim"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& animatorModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& festivalDecorateConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& defaultAnimatorController() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T get_festivalKeyDropDownList() {
		return ((T (*)(FestivalDecorateAnim*))(Il2CppBase() + 0x44758D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(FestivalDecorateAnim*))(Il2CppBase() + 0x4475B44))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(FestivalDecorateAnim*))(Il2CppBase() + 0x4475BA4))(this);
	}

};

}
