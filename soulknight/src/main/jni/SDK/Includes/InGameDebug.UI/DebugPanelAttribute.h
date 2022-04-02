#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DebugPanelAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DebugPanelAttribute"));
	}

	template <typename T = int32_t> T& VerticalGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_VerticalGroup() {
		return ((T (*)(DebugPanelAttribute*))(Il2CppBase() + 0x19C53C8))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(DebugPanelAttribute*))(Il2CppBase() + 0x19C53D0))(this);
	}

};

}
