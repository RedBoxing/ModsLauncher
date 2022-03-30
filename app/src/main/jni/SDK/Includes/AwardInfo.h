#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AwardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AwardInfo"));
	}

	template <typename T = uintptr_t> T& award_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& award_obj() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& skinInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
