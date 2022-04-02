#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiGameVersionPostProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiGameVersionPostProcess"));
	}


	template <typename T = Il2CppString*> T GetPostProcessContent(Il2CppString* key, Il2CppString* defaultContent) {
		return ((T (*)(MultiGameVersionPostProcess*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x427517C))(this, key, defaultContent);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetPostProcessContent(Il2CppString* P0, Il2CppString* P1) {
		return ((T (*)(MultiGameVersionPostProcess*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4275290))(this, P0, P1);
	}

};

}
