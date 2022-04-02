#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass59_0"));
	}

	template <typename T = uintptr_t> T& coloredTile() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& runeIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T TriggerRuneProcessb__0() {
		return ((T (*)(cDisplayClass590*))(Il2CppBase() + 0x42BE104))(this);
	}

};

}
