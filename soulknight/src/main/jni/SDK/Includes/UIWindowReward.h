#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowReward"));
	}


	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UIWindowReward*))(Il2CppBase() + 0x4321B14))(this);
	}

};

}
