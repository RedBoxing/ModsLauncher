#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IFix {

class RequestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IFix", "RequestData"));
	}

	template <typename T = Il2CppString*> T& appVersion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& patchVersion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& channelName() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
