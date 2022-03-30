#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class ScorePage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "ScorePage"));
	}


	template <typename T = void> static T ScorePage_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EA80))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_TimeSpan(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EB1C))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_LeaderboardId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357EBB8))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T ScorePage_Collection(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EC74))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_Start(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357ED10))(0, self);
	}
	template <typename T = bool> static T ScorePage_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EDAC))(0, self);
	}
	template <typename T = bool> static T ScorePage_HasPreviousScorePage(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EE50))(0, self);
	}
	template <typename T = bool> static T ScorePage_HasNextScorePage(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EEF4))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_PreviousScorePageToken(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357EF98))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_NextScorePageToken(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F034))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_Entries_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F0D0))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_Entries_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357F16C))(0, self, index);
	}
	template <typename T = void> static T ScorePage_Entry_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F218))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_Entry_PlayerId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357F2B4))(0, self, out_arg, out_size);
	}
	template <typename T = uint64_t> static T ScorePage_Entry_LastModified(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F36C))(0, self);
	}
	template <typename T = uintptr_t> static T ScorePage_Entry_Score(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F408))(0, self);
	}
	template <typename T = bool> static T ScorePage_Entry_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F4A4))(0, self);
	}
	template <typename T = uint64_t> static T ScorePage_Entry_LastModifiedTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F548))(0, self);
	}
	template <typename T = bool> static T ScorePage_ScorePageToken_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F5E4))(0, self);
	}
	template <typename T = void> static T ScorePage_ScorePageToken_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357F688))(0, self);
	}

};

}
