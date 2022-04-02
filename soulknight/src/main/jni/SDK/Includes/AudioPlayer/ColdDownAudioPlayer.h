#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace AudioPlayer {

class ColdDownAudioPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AudioPlayer", "ColdDownAudioPlayer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& audioClips() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& useUnscaledTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& _startTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_CurrentTime() {
		return ((T (*)(ColdDownAudioPlayer*))(Il2CppBase() + 0x4185EF8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ColdDownAudioPlayer*))(Il2CppBase() + 0x4185F70))(this);
	}
	template <typename T = void> T PlayAudio() {
		return ((T (*)(ColdDownAudioPlayer*))(Il2CppBase() + 0x4185FCC))(this);
	}

};

}
