#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DialogParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogParams"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& content() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& showOption() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& onConfirm() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& onCancel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& lineSpace() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& titleFontSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& contentFontSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T HasOption(uintptr_t option) {
		return ((T (*)(DialogParams*, uintptr_t))(Il2CppBase() + 0x16F34E4))(this, option);
	}

};

}
