#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkEscapeCageMount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkEscapeCageMount"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(TalkEscapeCageMount*))(Il2CppBase() + 0x43ABDA8))(this);
	}
	template <typename T = void> T GetHelp() {
		return ((T (*)(TalkEscapeCageMount*))(Il2CppBase() + 0x43ABEA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TalkEscapeCageMount*))(Il2CppBase() + 0x43ABFAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHelp() {
		return ((T (*)(TalkEscapeCageMount*))(Il2CppBase() + 0x43ABFB0))(this);
	}

};

}
