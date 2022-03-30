#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class RTLFixerTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "RTLFixerTool"));
	}

	template <typename T = bool> static T& showTashkeel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& useHinduNumbers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}

	template <typename T = Il2CppString*> static T RemoveTashkeel(Il2CppString* str, uintptr_t* tashkeelLocation) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x45EE8C8))(0, str, tashkeelLocation);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReturnTashkeel(Il2CppArray<uintptr_t>* letters, Il2CppList<uintptr_t>* tashkeelLocation) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x45EEFA4))(0, letters, tashkeelLocation);
	}
	template <typename T = Il2CppString*> static T FixLine(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45ED284))(0, str);
	}
	template <typename T = bool> static T IsIgnoredCharacter(char ch) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x45EF274))(0, ch);
	}
	template <typename T = bool> static T IsLeadingLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x45F00BC))(0, letters, index);
	}
	template <typename T = bool> static T IsFinishingLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x45EFCA4))(0, letters, index);
	}
	template <typename T = bool> static T IsMiddleLetter(Il2CppArray<uintptr_t>* letters, int32_t index) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x45EF438))(0, letters, index);
	}

};

}
