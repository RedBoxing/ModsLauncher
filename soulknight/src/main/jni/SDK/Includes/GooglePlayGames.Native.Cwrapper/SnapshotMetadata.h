#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class SnapshotMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "SnapshotMetadata"));
	}


	template <typename T = void> static T SnapshotMetadata_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3582AA0))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotMetadata_CoverImageURL(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3582B3C))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T SnapshotMetadata_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3582BF8))(0, self, out_arg, out_size);
	}
	template <typename T = bool> static T SnapshotMetadata_IsOpen(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3582CB4))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotMetadata_FileName(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3582D58))(0, self, out_arg, out_size);
	}
	template <typename T = bool> static T SnapshotMetadata_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3582E14))(0, self);
	}
	template <typename T = int64_t> static T SnapshotMetadata_PlayedTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3582EB8))(0, self);
	}
	template <typename T = int64_t> static T SnapshotMetadata_LastModifiedTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3582F54))(0, self);
	}

};

}
