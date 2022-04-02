#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffDelayDead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffDelayDead"));
	}

	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& hurtBossDmg() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& onTimeCountDownStr() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& deadShowAnim() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& iconChild() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A6894))(this);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A6A90))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A6B70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A7028))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffDelayDead*, uintptr_t))(Il2CppBase() + 0x20A7184))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A6FC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffDelayDead*))(Il2CppBase() + 0x20A7208))(this);
	}

};

}
