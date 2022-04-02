#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class NetMemberInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "NetMemberInfo"));
	}

	template <typename T = Il2CppString*> T& deviceId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& channelUid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& chillyUid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& channel() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
