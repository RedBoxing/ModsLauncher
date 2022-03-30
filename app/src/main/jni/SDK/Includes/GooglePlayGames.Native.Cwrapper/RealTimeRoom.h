#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class RealTimeRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "RealTimeRoom"));
	}


	template <typename T = uintptr_t> static T RealTimeRoom_Status(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D340))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoom_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357D3DC))(0, self, out_arg, out_size);
	}
	template <typename T = uint32_t> static T RealTimeRoom_Variant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D548))(0, self);
	}
	template <typename T = uint64_t> static T RealTimeRoom_CreationTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D5E4))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoom_Participants_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D680))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoom_Participants_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x357D71C))(0, self, index);
	}
	template <typename T = bool> static T RealTimeRoom_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D7C8))(0, self);
	}
	template <typename T = uint32_t> static T RealTimeRoom_RemainingAutomatchingSlots(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D86C))(0, self);
	}
	template <typename T = uint64_t> static T RealTimeRoom_AutomatchWaitEstimate(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D908))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoom_CreatingParticipant(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357D9A4))(0, self);
	}
	template <typename T = uintptr_t> static T RealTimeRoom_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357DA40))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T RealTimeRoom_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357DAFC))(0, self);
	}

};

}
