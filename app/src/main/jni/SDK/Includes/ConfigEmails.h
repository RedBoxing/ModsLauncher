#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConfigEmails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigEmails"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int64_t>*> T& baseEmails() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
