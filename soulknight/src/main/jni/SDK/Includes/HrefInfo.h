#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HrefInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HrefInfo"));
	}

	template <typename T = int32_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& endIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppRect>*> T& boxes() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
