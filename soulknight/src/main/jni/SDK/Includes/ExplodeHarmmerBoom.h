#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodeHarmmerBoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodeHarmmerBoom"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& boom_positions() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& boom_time() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& time_interval() {
		return *(T*)((uintptr_t)this + 0x114);
	}

	template <typename T = void> T ExplodeStart() {
		return ((T (*)(ExplodeHarmmerBoom*))(Il2CppBase() + 0x446D404))(this);
	}
	template <typename T = uintptr_t> T CreateBoom() {
		return ((T (*)(ExplodeHarmmerBoom*))(Il2CppBase() + 0x446D568))(this);
	}
	template <typename T = void> T iFixBaseProxy_ExplodeStart() {
		return ((T (*)(ExplodeHarmmerBoom*))(Il2CppBase() + 0x446D658))(this);
	}

};

}
