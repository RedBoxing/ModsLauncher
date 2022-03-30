#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RTLAlignment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTLAlignment"));
	}

	template <typename T = bool> T& needUpdate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& cachedRTL() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& InverseAnchorDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RTLAlignment*))(Il2CppBase() + 0x44D8014))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RTLAlignment*))(Il2CppBase() + 0x44D8220))(this);
	}

};

}
