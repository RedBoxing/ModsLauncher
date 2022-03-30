#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass860
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass86_0"));
	}

	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& spurCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& spurRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& spurCenter() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
