#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AssassinSkill1Trail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssassinSkill_1_Trail"));
	}

	template <typename T = uintptr_t> T& sourceObj() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& colorData() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(AssassinSkill1Trail*, uintptr_t))(Il2CppBase() + 0x417E5D8))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(AssassinSkill1Trail*))(Il2CppBase() + 0x417E64C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AssassinSkill1Trail*))(Il2CppBase() + 0x417E6AC))(this);
	}

};

}
