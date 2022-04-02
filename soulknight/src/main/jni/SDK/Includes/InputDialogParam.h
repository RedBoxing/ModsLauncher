#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputDialogParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputDialogParam"));
	}

	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& placeholder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& defaultStr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& useHelpBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& helpTitle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& helpContent() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
