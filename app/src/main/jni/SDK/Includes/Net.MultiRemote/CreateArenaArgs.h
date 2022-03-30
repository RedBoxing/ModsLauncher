#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class CreateArenaArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "CreateArenaArgs"));
	}

	template <typename T = Il2CppString*> T& host() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isPublic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& payload() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
