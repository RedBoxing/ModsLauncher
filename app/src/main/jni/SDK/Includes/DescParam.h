#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DescParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescParam"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& defText() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_text() {
		return ((T (*)(DescParam*))(Il2CppBase() + 0x4275034))(this);
	}

};

}
