#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics {

class IDynamicSuperProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics", "IDynamicSuperProperties"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetDynamicSuperProperties() {
		return ((T (*)(IDynamicSuperProperties*))(Il2CppBase() + 0x0))(this);
	}

};

}
