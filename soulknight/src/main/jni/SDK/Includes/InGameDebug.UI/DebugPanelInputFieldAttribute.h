#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DebugPanelInputFieldAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DebugPanelInputFieldAttribute"));
	}

	template <typename T = Il2CppString*> T& PlaceHolder() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_PlaceHolder() {
		return ((T (*)(DebugPanelInputFieldAttribute*))(Il2CppBase() + 0x19C5B2C))(this);
	}

};

}
