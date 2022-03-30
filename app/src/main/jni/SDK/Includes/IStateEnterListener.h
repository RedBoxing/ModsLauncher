#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IStateEnterListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IStateEnterListener"));
	}


	template <typename T = Il2CppString*> T get_EnterStateName() {
		return ((T (*)(IStateEnterListener*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnStateEnter() {
		return ((T (*)(IStateEnterListener*))(Il2CppBase() + 0x0))(this);
	}

};

}
