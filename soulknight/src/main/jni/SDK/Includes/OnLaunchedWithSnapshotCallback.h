#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnLaunchedWithSnapshotCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnLaunchedWithSnapshotCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(OnLaunchedWithSnapshotCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CDAAC))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnLaunchedWithSnapshotCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CDF14))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnLaunchedWithSnapshotCallback*, uintptr_t))(Il2CppBase() + 0x35CDFB4))(this, result);
	}

};

}
