#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AchieveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AchieveInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& got_award() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& has_show() {
		return *(T*)((uintptr_t)this + 0x16);
	}


};

}
