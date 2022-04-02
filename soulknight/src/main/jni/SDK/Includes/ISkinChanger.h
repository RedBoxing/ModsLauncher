#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ISkinChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISkinChanger"));
	}


	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(ISkinChanger*, int32_t))(Il2CppBase() + 0x0))(this, skinIndex);
	}

};

}
