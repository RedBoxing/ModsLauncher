#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace AudioPlayer {

class IAudioPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AudioPlayer", "IAudioPlayer"));
	}


	template <typename T = void> T PlayAudio() {
		return ((T (*)(IAudioPlayer*))(Il2CppBase() + 0x0))(this);
	}

};

}
