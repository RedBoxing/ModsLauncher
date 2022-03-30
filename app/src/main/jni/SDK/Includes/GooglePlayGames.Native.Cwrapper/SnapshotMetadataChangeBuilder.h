#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class SnapshotMetadataChangeBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "SnapshotMetadataChangeBuilder"));
	}


	template <typename T = void> static T SnapshotMetadataChange_Builder_SetDescription(uintptr_t self, Il2CppString* description) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35835C4))(0, self, description);
	}
	template <typename T = uintptr_t> static T SnapshotMetadataChange_Builder_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x3583684))(0);
	}
	template <typename T = void> static T SnapshotMetadataChange_Builder_SetPlayedTime(uintptr_t self, uint64_t played_time) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x3583710))(0, self, played_time);
	}
	template <typename T = void> static T SnapshotMetadataChange_Builder_SetCoverImageFromPngData(uintptr_t self, Il2CppArray<uintptr_t>* png_data, uintptr_t png_data_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x35837BC))(0, self, png_data, png_data_size);
	}
	template <typename T = uintptr_t> static T SnapshotMetadataChange_Builder_Create(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583878))(0, self);
	}
	template <typename T = void> static T SnapshotMetadataChange_Builder_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3583914))(0, self);
	}

};

}
