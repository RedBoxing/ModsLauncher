#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayInterstitialNotificationDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayInterstitialNotificationDelegate"));
	}


	template <typename T = void> T Invoke(Il2CppString* interstitialID, uintptr_t interstialNotificationEvent) {
		return ((T (*)(KTPlayInterstitialNotificationDelegate*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21B47C8))(this, interstitialID, interstialNotificationEvent);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* interstitialID, uintptr_t interstialNotificationEvent, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayInterstitialNotificationDelegate*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B5140))(this, interstitialID, interstialNotificationEvent, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayInterstitialNotificationDelegate*, uintptr_t))(Il2CppBase() + 0x21B51DC))(this, result);
	}

};

}
