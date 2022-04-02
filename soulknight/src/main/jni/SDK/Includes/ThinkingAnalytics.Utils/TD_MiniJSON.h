#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics.Utils {

class TDMiniJSON
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics.Utils", "TD_MiniJSON"));
	}


	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T Deserialize(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C748C))(0, json);
	}
	template <typename T = Il2CppString*> static T Serialize(uintptr_t obj, void* func) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x43C767C))(0, obj, func);
	}

};

}
