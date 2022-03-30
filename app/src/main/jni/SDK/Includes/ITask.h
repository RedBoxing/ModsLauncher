#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ITask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITask"));
	}


	template <typename T = uintptr_t> T ExecuteTask() {
		return ((T (*)(ITask*))(Il2CppBase() + 0x0))(this);
	}

};

}
