#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass520
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass52_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& achievementID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& progress() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T ReportProgressb__0(Il2CppArray<uintptr_t>* ach) {
		return ((T (*)(cDisplayClass520*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x461AD20))(this, ach);
	}

};

}
