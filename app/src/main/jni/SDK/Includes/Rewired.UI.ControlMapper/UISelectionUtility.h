#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class UISelectionUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "UISelectionUtility"));
	}


	template <typename T = uintptr_t> static T FindNextSelectable(uintptr_t selectable, uintptr_t transform, Il2CppVector3 direction) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1BE0DA8))(0, selectable, transform, direction);
	}

};

}
