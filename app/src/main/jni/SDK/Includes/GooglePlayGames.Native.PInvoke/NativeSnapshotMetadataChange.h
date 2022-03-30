#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeSnapshotMetadataChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeSnapshotMetadataChange"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeSnapshotMetadataChange*, uintptr_t))(Il2CppBase() + 0x2AF57D8))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AF585C))(0, pointer);
	}

};

}
