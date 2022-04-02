#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerSurvive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerSurvive"));
	}


	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerSurvive*))(Il2CppBase() + 0x41E65A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerSurvive*))(Il2CppBase() + 0x41E6688))(this);
	}

};

}
