#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass610
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass61_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& blueprintName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T CreateSkinBlueprintb__0(bool isToggle) {
		return ((T (*)(cDisplayClass610*, bool))(Il2CppBase() + 0x457888C))(this, isToggle);
	}

};

}
