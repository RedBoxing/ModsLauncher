#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkEscapeCage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkEscapeCage"));
	}

	template <typename T = Il2CppString*> T& escape_talk() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& talk_transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& label_height() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TalkEscapeCage*))(Il2CppBase() + 0x43AB570))(this);
	}
	template <typename T = void> T ShowEscapeTalk() {
		return ((T (*)(TalkEscapeCage*))(Il2CppBase() + 0x43AB650))(this);
	}
	template <typename T = void> T GetHelp() {
		return ((T (*)(TalkEscapeCage*))(Il2CppBase() + 0x43AB75C))(this);
	}

};

}
