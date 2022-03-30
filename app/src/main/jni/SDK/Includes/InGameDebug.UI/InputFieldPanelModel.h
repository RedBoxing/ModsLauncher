#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class InputFieldPanelModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "InputFieldPanelModel"));
	}

	template <typename T = uintptr_t> T& Instance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& FieldInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PlaceHolder() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& TemplateName() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Instance() {
		return ((T (*)(InputFieldPanelModel*))(Il2CppBase() + 0x19C6380))(this);
	}
	template <typename T = uintptr_t> T get_FieldInfo() {
		return ((T (*)(InputFieldPanelModel*))(Il2CppBase() + 0x19C6388))(this);
	}
	template <typename T = Il2CppString*> T get_PlaceHolder() {
		return ((T (*)(InputFieldPanelModel*))(Il2CppBase() + 0x19C6390))(this);
	}
	template <typename T = Il2CppString*> T get_TemplateName() {
		return ((T (*)(InputFieldPanelModel*))(Il2CppBase() + 0x19C6398))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(InputFieldPanelModel*))(Il2CppBase() + 0x19C6430))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(InputFieldPanelModel*, Il2CppString*))(Il2CppBase() + 0x19C64F0))(this, value);
	}
	template <typename T = void> T InstantiateUI(uintptr_t layoutGO, uintptr_t logger, uintptr_t template) {
		return ((T (*)(InputFieldPanelModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C657C))(this, layoutGO, logger, template);
	}
	template <typename T = void> T InstantiateUIb__16_0(Il2CppString* value) {
		return ((T (*)(InputFieldPanelModel*, Il2CppString*))(Il2CppBase() + 0x19C6864))(this, value);
	}

};

}
