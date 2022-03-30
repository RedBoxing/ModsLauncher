#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DebugPanelDropDownAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DebugPanelDropDownAttribute"));
	}

	template <typename T = Il2CppString*> T& OptionField() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_OptionField() {
		return ((T (*)(DebugPanelDropDownAttribute*))(Il2CppBase() + 0x19C5AE4))(this);
	}

};

}
