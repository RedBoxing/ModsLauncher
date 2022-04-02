#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class AndroidPlatformConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "AndroidPlatformConfiguration"));
	}


	template <typename T = void> T SetActivity(uintptr_t activity) {
		return ((T (*)(AndroidPlatformConfiguration*, uintptr_t))(Il2CppBase() + 0x283E4A4))(this, activity);
	}
	template <typename T = void> T SetOptionalIntentHandlerForUI(void* intentHandler) {
		return ((T (*)(AndroidPlatformConfiguration*, void*))(Il2CppBase() + 0x283E524))(this, intentHandler);
	}
	template <typename T = void> T SetOptionalViewForPopups(uintptr_t view) {
		return ((T (*)(AndroidPlatformConfiguration*, uintptr_t))(Il2CppBase() + 0x283E644))(this, view);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(AndroidPlatformConfiguration*, uintptr_t))(Il2CppBase() + 0x283E6C4))(this, selfPointer);
	}
	template <typename T = void> static T InternalIntentHandler(uintptr_t intent, uintptr_t userData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x283E3D0))(0, intent, userData);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x283E748))(0);
	}

};

}
