#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGAutoCollectItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGAutoCollectItem"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& canCollect() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T get_canCollect() {
		return ((T (*)(RGAutoCollectItem*))(Il2CppBase() + 0x1BADAEC))(this);
	}
	template <typename T = void> T set_canCollect(void* value) {
		return ((T (*)(RGAutoCollectItem*, void*))(Il2CppBase() + 0x1BADAF4))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGAutoCollectItem*))(Il2CppBase() + 0x1BADAFC))(this);
	}

};

}
