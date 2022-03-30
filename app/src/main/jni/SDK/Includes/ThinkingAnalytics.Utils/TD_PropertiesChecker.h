#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ThinkingAnalytics.Utils {

class TDPropertiesChecker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ThinkingAnalytics.Utils", "TD_PropertiesChecker"));
	}

	template <typename T = uintptr_t> static T& keyPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsNumeric(uintptr_t AObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E3C4FC))(0, AObject);
	}
	template <typename T = bool> static T IsList(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E3C66C))(0, obj);
	}
	template <typename T = bool> static T CheckProperties(Il2CppDictionary<Il2CppString*, uintptr_t>* properties) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(0, properties);
	}
	template <typename T = bool> static T CheckProperteis(Il2CppList<Il2CppString*>* properties) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1E3C7F0))(0, properties);
	}
	template <typename T = bool> static T CheckString(Il2CppString* eventName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E3C970))(0, eventName);
	}
	template <typename T = void> static T MergeProperties(Il2CppDictionary<Il2CppString*, uintptr_t>* source, Il2CppDictionary<Il2CppString*, uintptr_t>* dest) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1E3CA94))(0, source, dest);
	}

};

}
