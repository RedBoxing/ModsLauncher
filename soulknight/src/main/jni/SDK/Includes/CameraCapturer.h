#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraCapturer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraCapturer"));
	}


	template <typename T = uintptr_t> static T CaptureCamera(Il2CppRect rect, Il2CppArray<uintptr_t>* cameras) {
		return ((T (*)(void *, Il2CppRect, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18691AC))(0, rect, cameras);
	}
	template <typename T = uintptr_t> static T CaptureCameraAndSave(Il2CppString* filePath, Il2CppRect rect, Il2CppArray<uintptr_t>* cameras) {
		return ((T (*)(void *, Il2CppString*, Il2CppRect, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18694D4))(0, filePath, rect, cameras);
	}

};

}
