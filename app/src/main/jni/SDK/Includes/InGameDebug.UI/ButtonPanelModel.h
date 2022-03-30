#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class ButtonPanelModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "ButtonPanelModel"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& Param() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& Instance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Method() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TemplateName() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Instance() {
		return ((T (*)(ButtonPanelModel*))(Il2CppBase() + 0x19C53D8))(this);
	}
	template <typename T = uintptr_t> T get_Method() {
		return ((T (*)(ButtonPanelModel*))(Il2CppBase() + 0x19C53E0))(this);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(ButtonPanelModel*))(Il2CppBase() + 0x19C53E8))(this);
	}
	template <typename T = Il2CppString*> T get_TemplateName() {
		return ((T (*)(ButtonPanelModel*))(Il2CppBase() + 0x19C53F0))(this);
	}
	template <typename T = void> T Call() {
		return ((T (*)(ButtonPanelModel*))(Il2CppBase() + 0x19C5490))(this);
	}
	template <typename T = void> T InstantiateUI(uintptr_t layoutGO, uintptr_t logger, uintptr_t template) {
		return ((T (*)(ButtonPanelModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C5560))(this, layoutGO, logger, template);
	}

};

}
