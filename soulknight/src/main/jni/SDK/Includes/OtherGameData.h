#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OtherGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OtherGameData"));
	}

	template <typename T = bool> T& HasClearCloudSaveId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
