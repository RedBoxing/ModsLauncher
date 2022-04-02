#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMulPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMulPlayerInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& multiInfos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& start_btn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T MirrorProcessed() {
		return ((T (*)(UIMulPlayerInfo*))(Il2CppBase() + 0x422E8F4))(this);
	}

};

}
