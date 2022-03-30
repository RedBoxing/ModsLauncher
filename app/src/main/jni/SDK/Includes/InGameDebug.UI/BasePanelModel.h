#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class BasePanelModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "BasePanelModel"));
	}

	template <typename T = int32_t> T& VerticalGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_VerticalGroup() {
		return ((T (*)(BasePanelModel*))(Il2CppBase() + 0x19C535C))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(BasePanelModel*))(Il2CppBase() + 0x19C5364))(this);
	}
	template <typename T = Il2CppString*> T get_TemplateName() {
		return ((T (*)(BasePanelModel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T InstantiateUI(uintptr_t layoutGO, uintptr_t logger, uintptr_t template) {
		return ((T (*)(BasePanelModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, layoutGO, logger, template);
	}

};

}
