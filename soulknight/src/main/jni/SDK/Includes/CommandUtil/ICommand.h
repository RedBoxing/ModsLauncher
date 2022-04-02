#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CommandUtil {

class ICommand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CommandUtil", "ICommand"));
	}


	template <typename T = void> T setTag(int32_t tag) {
		return ((T (*)(ICommand*, int32_t))(Il2CppBase() + 0x0))(this, tag);
	}
	template <typename T = int32_t> T getTag() {
		return ((T (*)(ICommand*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Update(float dt) {
		return ((T (*)(ICommand*, float))(Il2CppBase() + 0x0))(this, dt);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(ICommand*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsFinished() {
		return ((T (*)(ICommand*))(Il2CppBase() + 0x0))(this);
	}

};

}
