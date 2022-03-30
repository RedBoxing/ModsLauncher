#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsIAotConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsIAotConverter"));
	}


	template <typename T = uintptr_t> T get_ModelType() {
		return ((T (*)(fsIAotConverter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_VersionInfo() {
		return ((T (*)(fsIAotConverter*))(Il2CppBase() + 0x0))(this);
	}

};

}
