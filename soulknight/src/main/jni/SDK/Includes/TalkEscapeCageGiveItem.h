#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkEscapeCageGiveItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkEscapeCageGiveItem"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(TalkEscapeCageGiveItem*))(Il2CppBase() + 0x43AB7C8))(this);
	}
	template <typename T = void> T GetHelp() {
		return ((T (*)(TalkEscapeCageGiveItem*))(Il2CppBase() + 0x43AB894))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TalkEscapeCageGiveItem*))(Il2CppBase() + 0x43AB968))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHelp() {
		return ((T (*)(TalkEscapeCageGiveItem*))(Il2CppBase() + 0x43AB96C))(this);
	}

};

}
