#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeScorePage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeScorePage"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeScorePage*, uintptr_t))(Il2CppBase() + 0x2AF4704))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetCollection() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AF4788))(this);
	}
	template <typename T = uintptr_t> T Length() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AF47F4))(this);
	}
	template <typename T = uintptr_t> T GetElement(uintptr_t index) {
		return ((T (*)(NativeScorePage*, uintptr_t))(Il2CppBase() + 0x2AF4860))(this, index);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AED22C))(this);
	}
	template <typename T = bool> T HasNextScorePage() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AECFDC))(this);
	}
	template <typename T = bool> T HasPrevScorePage() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AED104))(this);
	}
	template <typename T = uintptr_t> T GetNextScorePageToken() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AED048))(this);
	}
	template <typename T = uintptr_t> T GetPreviousScorePageToken() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AED170))(this);
	}
	template <typename T = bool> T Valid() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AECF70))(this);
	}
	template <typename T = uintptr_t> T GetTimeSpan() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AF49A8))(this);
	}
	template <typename T = uintptr_t> T GetStart() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AF4A14))(this);
	}
	template <typename T = Il2CppString*> T GetLeaderboardId() {
		return ((T (*)(NativeScorePage*))(Il2CppBase() + 0x2AF4A80))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE77F8))(0, pointer);
	}
	template <typename T = uintptr_t> T GetEnumeratorb__5_0(uintptr_t index) {
		return ((T (*)(NativeScorePage*, uintptr_t))(Il2CppBase() + 0x2AF4B50))(this, index);
	}
	template <typename T = uintptr_t> T GetLeaderboardIdb__13_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeScorePage*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF4B54))(this, out_string, out_size);
	}

};

}
