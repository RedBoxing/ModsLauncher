#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class InputRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "InputRow"));
	}

	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& rowIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& inputFieldActivatedCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_buttons() {
		return ((T (*)(InputRow*))(Il2CppBase() + 0x21F2EC4))(this);
	}
	template <typename T = void> T set_buttons(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(InputRow*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x21F2ECC))(this, value);
	}
	template <typename T = void> T Initialize(int32_t rowIndex, Il2CppString* label, void* inputFieldActivatedCallback) {
		return ((T (*)(InputRow*, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x21F2ED4))(this, rowIndex, label, inputFieldActivatedCallback);
	}
	template <typename T = void> T OnButtonActivated(uintptr_t buttonInfo) {
		return ((T (*)(InputRow*, uintptr_t))(Il2CppBase() + 0x21F2FE8))(this, buttonInfo);
	}

};

}
