#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunInitKnightXXSkillListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunInitKnightXXSkillListener"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& handPositionDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& prevPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T get_spriteRenderer() {
		return ((T (*)(GunInitKnightXXSkillListener*))(Il2CppBase() + 0x22700F4))(this);
	}
	template <typename T = void> T OnKnightSkillStart(int32_t index) {
		return ((T (*)(GunInitKnightXXSkillListener*, int32_t))(Il2CppBase() + 0x2270200))(this, index);
	}
	template <typename T = void> T OnKnightSkillEnd() {
		return ((T (*)(GunInitKnightXXSkillListener*))(Il2CppBase() + 0x2270464))(this);
	}

};

}
