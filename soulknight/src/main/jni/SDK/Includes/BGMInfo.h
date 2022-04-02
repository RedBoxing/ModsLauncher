#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BGMInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BGMInfo"));
	}

	template <typename T = Il2CppString*> T& intro() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& loop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& silenceLength() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
