#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class WaitInitAndResourcesState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "WaitInitAndResourcesState"));
	}

	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(WaitInitAndResourcesState*))(Il2CppBase() + 0x4558748))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(WaitInitAndResourcesState*, uintptr_t))(Il2CppBase() + 0x4558750))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WaitInitAndResourcesState*))(Il2CppBase() + 0x4558758))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WaitInitAndResourcesState*))(Il2CppBase() + 0x4558944))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(WaitInitAndResourcesState*))(Il2CppBase() + 0x4558CE8))(this);
	}
	template <typename T = void> T OnInitSuccessAndResurcesPrepared() {
		return ((T (*)(WaitInitAndResourcesState*))(Il2CppBase() + 0x4558E1C))(this);
	}

};

}
