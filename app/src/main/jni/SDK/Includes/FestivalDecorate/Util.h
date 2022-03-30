#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FestivalDecorate {

class Util
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FestivalDecorate", "Util"));
	}

	template <typename T = Il2CppString*> static T& ConfigPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
