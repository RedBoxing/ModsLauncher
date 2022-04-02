#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class AbstractPanelMethods
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "AbstractPanelMethods"));
	}

	template <typename T = uintptr_t> T& Logger() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Init(uintptr_t commonBundle) {
		return ((T (*)(AbstractPanelMethods*, uintptr_t))(Il2CppBase() + 0x0))(this, commonBundle);
	}
	template <typename T = uintptr_t> T get_Logger() {
		return ((T (*)(AbstractPanelMethods*))(Il2CppBase() + 0x19C5328))(this);
	}

};

}
