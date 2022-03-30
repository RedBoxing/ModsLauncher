#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossBGMPlayer {

class IBossBgmPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossBGMPlayer", "IBossBgmPlayer"));
	}


	template <typename T = void> T PlayBgm() {
		return ((T (*)(IBossBgmPlayer*))(Il2CppBase() + 0x0))(this);
	}

};

}
