#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ConditionalSpriteAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionalSpriteAnimation"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(ConditionalSpriteAnimation*))(Il2CppBase() + 0x42756A8))(this);
	}
	template <typename T = void> T StartPlaying() {
		return ((T (*)(ConditionalSpriteAnimation*))(Il2CppBase() + 0x4275714))(this);
	}
	template <typename T = void> T StopPlaying() {
		return ((T (*)(ConditionalSpriteAnimation*))(Il2CppBase() + 0x4275778))(this);
	}
	template <typename T = void> T iFixBaseProxy_Init() {
		return ((T (*)(ConditionalSpriteAnimation*))(Il2CppBase() + 0x42757E0))(this);
	}

};

}
