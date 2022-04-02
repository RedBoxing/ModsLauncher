#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IStateExitListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStateExitListener"));
	}


	template <typename T = Il2CppString*> T get_ExitStateName() {
		return ((T (*)(IStateExitListener*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnStateExit() {
		return ((T (*)(IStateExitListener*))(Il2CppBase() + 0x0))(this);
	}

};

}
