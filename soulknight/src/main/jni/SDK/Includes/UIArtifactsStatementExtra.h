#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactsStatementExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactsStatementExtra"));
	}


	template <typename T = void> static T ProcessUI(uintptr_t uiStatement) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x441F18C))(0, uiStatement);
	}
	template <typename T = void> static T ProcessPassInfo(uintptr_t passInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x441F818))(0, passInfo);
	}

};

}
