#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass720
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass72_0"));
	}

	template <typename T = int32_t> T& gemCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& itemCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CheckForbidb__0(uintptr_t buf) {
		return ((T (*)(cDisplayClass720*, uintptr_t))(Il2CppBase() + 0x42F35C0))(this, buf);
	}

};

}
