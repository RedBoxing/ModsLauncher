#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ImageExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ImageExtension"));
	}


	template <typename T = uintptr_t> static T SetBrownColor(uintptr_t image) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19C5150))(0, image);
	}

};

}
