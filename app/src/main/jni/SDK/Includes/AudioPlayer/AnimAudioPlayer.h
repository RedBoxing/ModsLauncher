#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace AudioPlayer {

class AnimAudioPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AudioPlayer", "AnimAudioPlayer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& playOnStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AnimAudioPlayer*))(Il2CppBase() + 0x4185C94))(this);
	}
	template <typename T = void> T PlayAudio() {
		return ((T (*)(AnimAudioPlayer*))(Il2CppBase() + 0x4185D08))(this);
	}

};

}
