#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class ViewOnClickListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "ViewOnClickListener"));
	}

	template <typename T = uintptr_t> T& onClickDelegate() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T onClick(uintptr_t view) {
		return ((T (*)(ViewOnClickListener*, uintptr_t))(Il2CppBase() + 0x45505D0))(this, view);
	}

};

}
