#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class ConsoleMethodInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "ConsoleMethodInfo"));
	}

	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& parameterTypes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& instance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& signature() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(ConsoleMethodInfo*))(Il2CppBase() + 0x19C8020))(this);
	}

};

}
