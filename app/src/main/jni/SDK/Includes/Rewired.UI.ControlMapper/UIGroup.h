#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UIGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIGroup"));
	}

	template <typename T = uintptr_t> T& _label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_labelText() {
		return ((T (*)(UIGroup*))(Il2CppBase() + 0x1BE0510))(this);
	}
	template <typename T = void> T set_labelText(Il2CppString* value) {
		return ((T (*)(UIGroup*, Il2CppString*))(Il2CppBase() + 0x1BE0608))(this, value);
	}
	template <typename T = uintptr_t> T get_content() {
		return ((T (*)(UIGroup*))(Il2CppBase() + 0x1BE0708))(this);
	}
	template <typename T = void> T SetLabelActive(bool state) {
		return ((T (*)(UIGroup*, bool))(Il2CppBase() + 0x1BE0768))(this, state);
	}

};

}
