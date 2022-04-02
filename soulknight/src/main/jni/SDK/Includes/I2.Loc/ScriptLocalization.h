#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ScriptLocalization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ScriptLocalization"));
	}


	template <typename T = Il2CppString*> static T Get(Il2CppString* Term) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45F0FD8))(0, Term);
	}
	template <typename T = Il2CppString*> static T Get_1(Il2CppString* Term, Il2CppString* defaultStr) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45F10CC))(0, Term, defaultStr);
	}
	template <typename T = Il2CppString*> static T Get_2(Il2CppString* Term, bool FixForRTL) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x45F11EC))(0, Term, FixForRTL);
	}
	template <typename T = Il2CppString*> static T Get_3(Il2CppString* Term, bool FixForRTL, int32_t maxLineLengthForRTL) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x45F12BC))(0, Term, FixForRTL, maxLineLengthForRTL);
	}
	template <typename T = Il2CppString*> static T Get_4(Il2CppString* Term, bool FixForRTL, int32_t maxLineLengthForRTL, bool ignoreNumbers) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t, bool))(Il2CppBase() + 0x45F1394))(0, Term, FixForRTL, maxLineLengthForRTL, ignoreNumbers);
	}
	template <typename T = Il2CppString*> static T GetCN(Il2CppString* Term) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45F1480))(0, Term);
	}

};

}
