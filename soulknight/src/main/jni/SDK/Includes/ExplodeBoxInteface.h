#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeBoxInteface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeBoxInteface"));
	}


	template <typename T = void> T SetExplodeBox() {
		return ((T (*)(ExplodeBoxInteface*))(Il2CppBase() + 0x0))(this);
	}

};

}
