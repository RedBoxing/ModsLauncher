#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Prefabs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Prefabs"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _fitButton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _inputGridLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _inputGridHeaderLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _inputGridFieldButton() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _inputGridFieldInvertToggle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _windowTitleText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _windowContentText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _fader() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _calibrationWindow() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _inputBehaviorsWindow() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _centerStickGraphic() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _moveStickGraphic() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E872C))(this);
	}
	template <typename T = uintptr_t> T get_fitButton() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E878C))(this);
	}
	template <typename T = uintptr_t> T get_inputGridLabel() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E87EC))(this);
	}
	template <typename T = uintptr_t> T get_inputGridHeaderLabel() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E884C))(this);
	}
	template <typename T = uintptr_t> T get_inputGridFieldButton() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E88AC))(this);
	}
	template <typename T = uintptr_t> T get_inputGridFieldInvertToggle() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E890C))(this);
	}
	template <typename T = uintptr_t> T get_window() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E896C))(this);
	}
	template <typename T = uintptr_t> T get_windowTitleText() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E89CC))(this);
	}
	template <typename T = uintptr_t> T get_windowContentText() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8A2C))(this);
	}
	template <typename T = uintptr_t> T get_fader() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8A8C))(this);
	}
	template <typename T = uintptr_t> T get_calibrationWindow() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8AEC))(this);
	}
	template <typename T = uintptr_t> T get_inputBehaviorsWindow() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8B4C))(this);
	}
	template <typename T = uintptr_t> T get_centerStickGraphic() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8BAC))(this);
	}
	template <typename T = uintptr_t> T get_moveStickGraphic() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8C0C))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(Prefabs*))(Il2CppBase() + 0x21E8C6C))(this);
	}

};

}
