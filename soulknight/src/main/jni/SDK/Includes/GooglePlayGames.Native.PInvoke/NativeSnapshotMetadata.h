#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeSnapshotMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeSnapshotMetadata"));
	}


	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF4D80))(this);
	}
	template <typename T = Il2CppString*> T get_Filename() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF4DEC))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF4EBC))(this);
	}
	template <typename T = Il2CppString*> T get_CoverImageURL() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF4F8C))(this);
	}
	template <typename T = uintptr_t> T get_TotalTimePlayed() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF505C))(this);
	}
	template <typename T = uintptr_t> T get_LastModifiedTimestamp() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF5140))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF52F4))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeSnapshotMetadata*, uintptr_t))(Il2CppBase() + 0x2AF5634))(this, selfPointer);
	}
	template <typename T = uintptr_t> T get_Filenameb__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeSnapshotMetadata*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF56BC))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T get_Descriptionb__6_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeSnapshotMetadata*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF56F0))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T get_CoverImageURLb__8_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeSnapshotMetadata*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AF5724))(this, out_string, out_size);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(NativeSnapshotMetadata*))(Il2CppBase() + 0x2AF5758))(this);
	}

};

}
