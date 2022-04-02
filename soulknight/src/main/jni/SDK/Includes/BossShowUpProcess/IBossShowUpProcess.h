#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class IBossShowUpProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "IBossShowUpProcess"));
	}


	template <typename T = void> T ShowUp() {
		return ((T (*)(IBossShowUpProcess*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_CanShow() {
		return ((T (*)(IBossShowUpProcess*))(Il2CppBase() + 0x0))(this);
	}

};

}
