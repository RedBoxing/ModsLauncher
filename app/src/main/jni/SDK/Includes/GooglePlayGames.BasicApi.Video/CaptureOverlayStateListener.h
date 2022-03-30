#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Video {

class CaptureOverlayStateListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Video", "CaptureOverlayStateListener"));
	}


	template <typename T = void> T OnCaptureOverlayStateChanged(uintptr_t overlayState) {
		return ((T (*)(CaptureOverlayStateListener*, uintptr_t))(Il2CppBase() + 0x0))(this, overlayState);
	}

};

}
