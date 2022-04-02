#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class SliderPanelModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "SliderPanelModel"));
	}

	template <typename T = float> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsInteger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Instance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& FieldInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& TemplateName() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = float> T get_MinValue() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6868))(this);
	}
	template <typename T = float> T get_MaxValue() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6870))(this);
	}
	template <typename T = bool> T get_IsInteger() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6878))(this);
	}
	template <typename T = uintptr_t> T get_Instance() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6880))(this);
	}
	template <typename T = uintptr_t> T get_FieldInfo() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6888))(this);
	}
	template <typename T = Il2CppString*> T get_TemplateName() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6890))(this);
	}
	template <typename T = void> T set_Value(float value) {
		return ((T (*)(SliderPanelModel*, float))(Il2CppBase() + 0x19C69C0))(this, value);
	}
	template <typename T = Il2CppString*> T ValueText() {
		return ((T (*)(SliderPanelModel*))(Il2CppBase() + 0x19C6AC8))(this);
	}
	template <typename T = void> T InstantiateUI(uintptr_t layoutGO, uintptr_t logger, uintptr_t sliderTemplate) {
		return ((T (*)(SliderPanelModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C6CA4))(this, layoutGO, logger, sliderTemplate);
	}

};

}
