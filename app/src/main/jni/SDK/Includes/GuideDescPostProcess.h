#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GuideDescPostProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuideDescPostProcess"));
	}


	template <typename T = Il2CppString*> T GetPostProcessContent(Il2CppString* key, Il2CppString* defaultContent) {
		return ((T (*)(GuideDescPostProcess*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42750A0))(this, key, defaultContent);
	}

};

}
