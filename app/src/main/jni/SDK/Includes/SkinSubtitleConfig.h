#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinSubtitleConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinSubtitleConfig"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppString*>*>*> T& SkinSubtitleDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T GetSubtitle(uintptr_t hero, int32_t skinIndex) {
		return ((T (*)(SkinSubtitleConfig*, uintptr_t, int32_t))(Il2CppBase() + 0x18375B8))(this, hero, skinIndex);
	}
	template <typename T = Il2CppList<void*>*> T GetSkinCount(Il2CppString* subtitle) {
		return ((T (*)(SkinSubtitleConfig*, Il2CppString*))(Il2CppBase() + 0x18376C0))(this, subtitle);
	}

};

}
