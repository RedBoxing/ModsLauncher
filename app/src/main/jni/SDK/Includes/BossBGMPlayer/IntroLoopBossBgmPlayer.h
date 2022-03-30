#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossBGMPlayer {

class IntroLoopBossBgmPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossBGMPlayer", "IntroLoopBossBgmPlayer"));
	}

	template <typename T = uintptr_t> T& introClip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& loopClip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& silenceLength() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T PlayBgm() {
		return ((T (*)(IntroLoopBossBgmPlayer*))(Il2CppBase() + 0x1DE7F00))(this);
	}

};

}
