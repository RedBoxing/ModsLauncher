#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampEntranceGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampEntranceGenerator"));
	}

	template <typename T = uintptr_t> T& swampEntrancePrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& normalRoomType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& maxCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& delay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _swampSacrificeRecorder() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T AfterRoomCreated(uintptr_t mapManagerLevel) {
		return ((T (*)(SwampEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x42AD5FC))(this, mapManagerLevel);
	}
	template <typename T = uintptr_t> T CreateEntrance(uintptr_t mapManagerLevel) {
		return ((T (*)(SwampEntranceGenerator*, uintptr_t))(Il2CppBase() + 0x42AD758))(this, mapManagerLevel);
	}

};

}
