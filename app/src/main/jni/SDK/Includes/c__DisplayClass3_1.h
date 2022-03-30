#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass31
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass3_1"));
	}

	template <typename T = uintptr_t> T& img() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppVector3> T BoatStartLandingb__3() {
		return ((T (*)(cDisplayClass31*))(Il2CppBase() + 0x1FE5B9C))(this);
	}
	template <typename T = void> T BoatStartLandingb__4(Il2CppVector3 p) {
		return ((T (*)(cDisplayClass31*, Il2CppVector3))(Il2CppBase() + 0x1FE5BE4))(this, p);
	}

};

}
