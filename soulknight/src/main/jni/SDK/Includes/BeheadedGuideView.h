#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BeheadedGuideView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeheadedGuideView"));
	}


	template <typename T = void> T ShowGuideView() {
		return ((T (*)(BeheadedGuideView*))(Il2CppBase() + 0x1B233E0))(this);
	}

};

}
