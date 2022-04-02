#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AnnouncementInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnnouncementInfo"));
	}

	template <typename T = Il2CppString*> T& start_time_stamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& stop_time_stamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& announcementList() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
