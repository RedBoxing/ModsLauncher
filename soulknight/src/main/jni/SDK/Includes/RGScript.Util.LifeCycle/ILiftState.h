#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class ILiftState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "ILiftState"));
	}


	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(ILiftState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(ILiftState*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ILiftState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ILiftState*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(ILiftState*))(Il2CppBase() + 0x0))(this);
	}

};

}
