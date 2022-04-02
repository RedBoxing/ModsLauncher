#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxObjectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxObjectData"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& datas() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SandboxObjectData*))(Il2CppBase() + 0x1814F50))(this);
	}

};

}
