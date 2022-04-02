#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName {

class UnityRealNameWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName", "UnityRealNameWrapper"));
	}

	template <typename T = Il2CppString*> static T& UnKnownName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> static T& AdultTicks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T CallChannelLogin(uintptr_t afterLoginSuccessAction, uintptr_t afterLoginFailAction) {
		return ((T (*)(UnityRealNameWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4400CE0))(this, afterLoginSuccessAction, afterLoginFailAction);
	}
	template <typename T = void> T RequesetChannelRealName() {
		return ((T (*)(UnityRealNameWrapper*))(Il2CppBase() + 0x4400DD4))(this);
	}
	template <typename T = void> T RequesetChannelRealNameb__3_0() {
		return ((T (*)(UnityRealNameWrapper*))(Il2CppBase() + 0x4400EBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_CallChannelLogin(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(UnityRealNameWrapper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4400F10))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_RequesetChannelRealName() {
		return ((T (*)(UnityRealNameWrapper*))(Il2CppBase() + 0x4400F18))(this);
	}

};

}
