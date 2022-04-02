#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ScrollbarVisibilityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ScrollbarVisibilityHelper"));
	}

	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
