#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class RemoteResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "RemoteResult"));
	}

	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& errorCode() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
