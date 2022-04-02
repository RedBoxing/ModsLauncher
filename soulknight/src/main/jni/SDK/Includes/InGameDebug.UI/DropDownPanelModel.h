#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DropDownPanelModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DropDownPanelModel"));
	}

	template <typename T = uintptr_t> T& Instance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OptionsFieldInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ValueFieldInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TemplateName() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Instance() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5C18))(this);
	}
	template <typename T = uintptr_t> T get_OptionsFieldInfo() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5C20))(this);
	}
	template <typename T = uintptr_t> T get_ValueFieldInfo() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5C28))(this);
	}
	template <typename T = Il2CppString*> T get_TemplateName() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5C30))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_Options() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5CBC))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(DropDownPanelModel*))(Il2CppBase() + 0x19C5DA0))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(DropDownPanelModel*, Il2CppString*))(Il2CppBase() + 0x19C5E60))(this, value);
	}
	template <typename T = void> T InstantiateUI(uintptr_t layoutGO, uintptr_t logger, uintptr_t dropdownTemplate) {
		return ((T (*)(DropDownPanelModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C5EEC))(this, layoutGO, logger, dropdownTemplate);
	}

};

}
