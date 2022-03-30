#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UIImageHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UIImageHelper"));
	}

	template <typename T = uintptr_t> T& enabledState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& disabledState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& currentState() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SetEnabledState(bool newState) {
		return ((T (*)(UIImageHelper*, bool))(Il2CppBase() + 0x1BE0880))(this, newState);
	}
	template <typename T = void> T SetEnabledStateColor(uintptr_t color) {
		return ((T (*)(UIImageHelper*, uintptr_t))(Il2CppBase() + 0x1BE0B20))(this, color);
	}
	template <typename T = void> T SetDisabledStateColor(uintptr_t color) {
		return ((T (*)(UIImageHelper*, uintptr_t))(Il2CppBase() + 0x1BE0BCC))(this, color);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIImageHelper*))(Il2CppBase() + 0x1BE0C78))(this);
	}

};

}
