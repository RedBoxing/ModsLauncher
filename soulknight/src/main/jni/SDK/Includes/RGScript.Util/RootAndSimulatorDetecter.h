#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class RootAndSimulatorDetecter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "RootAndSimulatorDetecter"));
	}

	template <typename T = uintptr_t> static T& RootOrSimulatorDetectUtil() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsRoot() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CDCA4))(0);
	}
	template <typename T = bool> static T IsSimulator() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CDEE4))(0);
	}

};

}
