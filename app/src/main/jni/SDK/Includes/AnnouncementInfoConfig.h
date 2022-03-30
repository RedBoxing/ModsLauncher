#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnnouncementInfoConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnnouncementInfoConfig"));
	}

	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& images() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& links() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& announcementInfos() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
