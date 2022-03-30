#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug {

class InGameDebugManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug", "InGameDebugManager"));
	}

	template <typename T = uintptr_t> T& inputField() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& debugLogManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_inputFieldPrefab() {
		return ((T (*)(InGameDebugManager*))(Il2CppBase() + 0x19C523C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(InGameDebugManager*))(Il2CppBase() + 0x19C52CC))(this);
	}

};

}
