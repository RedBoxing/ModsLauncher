#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AchievementInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AchievementInfo"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& is_hide() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& awards() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& got_award() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& unlock_time() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& condition_str() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unlock_condis() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& series() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unlock_gamemode() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& unlock_gametype() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> T CheckAllCondi() {
		return ((T (*)(AchievementInfo*))(Il2CppBase() + 0x1A0AFC8))(this);
	}
	template <typename T = Il2CppString*> T GetLocalizedName() {
		return ((T (*)(AchievementInfo*))(Il2CppBase() + 0x1A0BFB8))(this);
	}
	template <typename T = Il2CppString*> T GetLocalizedDesc() {
		return ((T (*)(AchievementInfo*))(Il2CppBase() + 0x1A0C084))(this);
	}

};

}
