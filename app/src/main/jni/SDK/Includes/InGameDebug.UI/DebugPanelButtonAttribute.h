#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DebugPanelButtonAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DebugPanelButtonAttribute"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(DebugPanelButtonAttribute*))(Il2CppBase() + 0x19C5488))(this);
	}

};

}
