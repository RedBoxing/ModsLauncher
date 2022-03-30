#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Fix43ChangeChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Fix43ChangeChannel"));
	}


	template <typename T = void> static T FixChangeChannel() {
		return ((T (*)(void *))(Il2CppBase() + 0x450F518))(0);
	}

};

}
