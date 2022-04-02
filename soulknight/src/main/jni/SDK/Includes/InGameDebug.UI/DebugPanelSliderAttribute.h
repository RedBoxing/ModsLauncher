#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DebugPanelSliderAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DebugPanelSliderAttribute"));
	}

	template <typename T = float> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = float> T get_MinValue() {
		return ((T (*)(DebugPanelSliderAttribute*))(Il2CppBase() + 0x19C5B74))(this);
	}
	template <typename T = float> T get_MaxValue() {
		return ((T (*)(DebugPanelSliderAttribute*))(Il2CppBase() + 0x19C5B7C))(this);
	}

};

}
