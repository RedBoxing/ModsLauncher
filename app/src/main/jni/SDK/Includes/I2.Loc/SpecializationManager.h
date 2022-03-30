#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class SpecializationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "SpecializationManager"));
	}

	template <typename T = uintptr_t> static T& Singleton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T GetSpecializedText(Il2CppString* text, Il2CppString* specialization) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1738D90))(0, text, specialization);
	}
	template <typename T = Il2CppString*> static T SetSpecializedText(Il2CppString* text, Il2CppString* newText, Il2CppString* specialization) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1739050))(0, text, newText, specialization);
	}
	template <typename T = Il2CppString*> static T SetSpecializedText_1(Il2CppDictionary<Il2CppString*, Il2CppString*>* specializations) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1739544))(0, specializations);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T GetSpecializations(Il2CppString* text, Il2CppDictionary<Il2CppString*, Il2CppString*>* buffer) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x17392D4))(0, text, buffer);
	}
	template <typename T = void> static T AppendSpecializations(Il2CppString* text, Il2CppList<Il2CppString*>* list) {
		return ((T (*)(void *, Il2CppString*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1739A60))(0, text, list);
	}

};

}
