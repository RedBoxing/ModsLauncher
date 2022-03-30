#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SmithTestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SmithTestComponent"));
	}



};

}
