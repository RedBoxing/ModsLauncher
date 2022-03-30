#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffInfoTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffInfoTable"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& infos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _buffDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x459A0AC))(0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_buffDic() {
		return ((T (*)(BuffInfoTable*))(Il2CppBase() + 0x459A1A0))(this);
	}
	template <typename T = uintptr_t> T GetInfo(uintptr_t buff) {
		return ((T (*)(BuffInfoTable*, uintptr_t))(Il2CppBase() + 0x459A370))(this, buff);
	}
	template <typename T = void> T ScanBuffs() {
		return ((T (*)(BuffInfoTable*))(Il2CppBase() + 0x459A46C))(this);
	}

};

}
