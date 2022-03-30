#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Sentinels
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Sentinels"));
	}


	template <typename T = uintptr_t> static T Sentinels_AutomatchingParticipant() {
		return ((T (*)(void *))(Il2CppBase() + 0x357FC44))(0);
	}

};

}
