#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class DropDownItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "DropDownItem"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(DropDownItem*))(Il2CppBase() + 0x19C5BD0))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(DropDownItem*))(Il2CppBase() + 0x19C5BD8))(this);
	}

};

}
