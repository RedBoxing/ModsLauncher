#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UILocalize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILocalize"));
	}

	template <typename T = uintptr_t> T& chineseObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& otherObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UILocalize*))(Il2CppBase() + 0x433DD30))(this);
	}
	template <typename T = void> T Flush(bool isChinese) {
		return ((T (*)(UILocalize*, bool))(Il2CppBase() + 0x433DE48))(this, isChinese);
	}
	template <typename T = void> T Default() {
		return ((T (*)(UILocalize*))(Il2CppBase() + 0x433DF8C))(this);
	}

};

}
