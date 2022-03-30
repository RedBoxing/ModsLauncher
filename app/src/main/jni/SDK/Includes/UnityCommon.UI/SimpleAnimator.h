#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class SimpleAnimator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "SimpleAnimator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isRepeat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& interval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isActive() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _coroutine() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SimpleAnimator*))(Il2CppBase() + 0x43EA7A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SimpleAnimator*))(Il2CppBase() + 0x43EA8C8))(this);
	}
	template <typename T = uintptr_t> T Animator() {
		return ((T (*)(SimpleAnimator*))(Il2CppBase() + 0x43EA928))(this);
	}
	template <typename T = void> T RunAnim() {
		return ((T (*)(SimpleAnimator*))(Il2CppBase() + 0x43EA800))(this);
	}

};

}
