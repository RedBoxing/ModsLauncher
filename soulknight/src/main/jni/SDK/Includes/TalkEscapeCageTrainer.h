#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkEscapeCageTrainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkEscapeCageTrainer"));
	}

	template <typename T = uintptr_t> T& trainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TalkEscapeCageTrainer*))(Il2CppBase() + 0x43ABFB4))(this);
	}
	template <typename T = void> T GetHelp() {
		return ((T (*)(TalkEscapeCageTrainer*))(Il2CppBase() + 0x43AC118))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TalkEscapeCageTrainer*))(Il2CppBase() + 0x43AC1EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHelp() {
		return ((T (*)(TalkEscapeCageTrainer*))(Il2CppBase() + 0x43AC1F0))(this);
	}

};

}
