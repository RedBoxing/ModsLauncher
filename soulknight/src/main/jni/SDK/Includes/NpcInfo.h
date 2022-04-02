#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcInfo"));
	}

	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& npcName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& i2Key() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& tokenIcon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& showInCell() {
		return *(T*)((uintptr_t)this + 0x44);
	}


};

}
