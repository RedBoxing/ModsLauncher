#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial {

class TutorialConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial", "TutorialConfig"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& TutorialGroups() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
