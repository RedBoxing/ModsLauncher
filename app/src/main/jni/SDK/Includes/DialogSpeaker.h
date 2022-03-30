#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DialogSpeaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DialogSpeaker"));
	}

	template <typename T = Il2CppString*> T& speakerKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& speakerPrefabName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& extraPrefabName() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
