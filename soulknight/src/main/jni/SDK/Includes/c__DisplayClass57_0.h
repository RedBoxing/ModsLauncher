#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass570
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass57_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadAchievementDescriptionsb__0(Il2CppArray<uintptr_t>* ach) {
		return ((T (*)(cDisplayClass570*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x461B2FC))(this, ach);
	}

};

}
