#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class SnapshotMetadataChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "SnapshotMetadataChange"));
	}


	template <typename T = uintptr_t> static T SnapshotMetadataChange_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3582FF0))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T SnapshotMetadataChange_Image(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583160))(0, self);
	}
	template <typename T = bool> static T SnapshotMetadataChange_PlayedTimeIsChanged(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35831FC))(0, self);
	}
	template <typename T = bool> static T SnapshotMetadataChange_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35832A0))(0, self);
	}
	template <typename T = uint64_t> static T SnapshotMetadataChange_PlayedTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583344))(0, self);
	}
	template <typename T = void> static T SnapshotMetadataChange_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35833E0))(0, self);
	}
	template <typename T = bool> static T SnapshotMetadataChange_ImageIsChanged(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358347C))(0, self);
	}
	template <typename T = bool> static T SnapshotMetadataChange_DescriptionIsChanged(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583520))(0, self);
	}

};

}
