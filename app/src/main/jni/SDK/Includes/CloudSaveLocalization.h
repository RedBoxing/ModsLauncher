#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveLocalization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveLocalization"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& err2Message() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T GetMessage(uintptr_t errCode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E755D8))(0, errCode);
	}

};

}
