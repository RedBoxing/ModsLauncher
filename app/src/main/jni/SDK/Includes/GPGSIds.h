#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GPGSIds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GPGSIds"));
	}

	template <typename T = Il2CppString*> static T& achievement_second_level() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& achievement_third_level() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& achievement_all_characters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& achievement_all_weapons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& achievement_first_level() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
