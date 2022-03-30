#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class Cookie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "Cookie"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& expirationDate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& domain() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& secure() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& scriptAccessible() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = Il2CppString*> static T& cookiePattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T Matches(uintptr_t accessInfo) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x1A25614))(this, accessInfo);
	}
	template <typename T = bool> T CollidesWith(uintptr_t accessInfo) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x1A256CC))(this, accessInfo);
	}
	template <typename T = Il2CppString*> T ToValueString() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x1A258C0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x1A25954))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x1A25C44))(this);
	}

};

}
