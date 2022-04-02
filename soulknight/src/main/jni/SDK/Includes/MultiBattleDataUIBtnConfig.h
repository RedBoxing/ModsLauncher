#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiBattleDataUIBtnConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiBattleDataUIBtnConfig"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& btnTextureDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& saveDataTypeTexDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41FB2B0))(0);
	}
	template <typename T = uintptr_t> T GetGameTypeSp(uintptr_t type) {
		return ((T (*)(MultiBattleDataUIBtnConfig*, uintptr_t))(Il2CppBase() + 0x41FB3A4))(this, type);
	}

};

}
