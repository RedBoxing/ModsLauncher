#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CanvasCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CanvasCreator"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(CanvasCreator*))(Il2CppBase() + 0x186A290))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CanvasCreator*))(Il2CppBase() + 0x186A2EC))(this);
	}

};

}
