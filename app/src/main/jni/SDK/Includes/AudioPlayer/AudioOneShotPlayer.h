#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace AudioPlayer {

class AudioOneShotPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AudioPlayer", "AudioOneShotPlayer"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T PlayAudio() {
		return ((T (*)(AudioOneShotPlayer*))(Il2CppBase() + 0x4185E2C))(this);
	}

};

}
