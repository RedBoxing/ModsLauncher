#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class ConsoleMethodAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "ConsoleMethodAttribute"));
	}

	template <typename T = Il2CppString*> T& m_command() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& m_description() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Command() {
		return ((T (*)(ConsoleMethodAttribute*))(Il2CppBase() + 0x19C7EEC))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(ConsoleMethodAttribute*))(Il2CppBase() + 0x19C7F44))(this);
	}

};

}
