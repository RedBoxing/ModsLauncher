#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectQuestBoard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectQuestBoard"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectQuestBoard*))(Il2CppBase() + 0x1DBCEC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectQuestBoard*))(Il2CppBase() + 0x1DBCF24))(this);
	}

};

}
