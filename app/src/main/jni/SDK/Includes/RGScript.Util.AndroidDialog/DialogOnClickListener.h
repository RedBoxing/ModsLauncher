#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class DialogOnClickListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "DialogOnClickListener"));
	}

	template <typename T = uintptr_t> T& onClickDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onClick(uintptr_t dialog, int32_t which) {
		return ((T (*)(DialogOnClickListener*, uintptr_t, int32_t))(Il2CppBase() + 0x454E6B4))(this, dialog, which);
	}

};

}
