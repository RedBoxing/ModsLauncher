#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMultiplayerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMultiplayerBase"));
	}

	template <typename T = bool> T& isContinue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ContinueBuild() {
		return ((T (*)(UIWindowMultiplayerBase*))(Il2CppBase() + 0x44B000C))(this);
	}
	template <typename T = void> T OnBtnJoinTabClick() {
		return ((T (*)(UIWindowMultiplayerBase*))(Il2CppBase() + 0x44AFFAC))(this);
	}

};

}
