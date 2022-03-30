#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Bullet {

class BuffIceShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Bullet", "BuffIceShield"));
	}

	template <typename T = uintptr_t> T& iceEnd() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& trigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T SetSourceObject(uintptr_t source) {
		return ((T (*)(BuffIceShield*, uintptr_t))(Il2CppBase() + 0x1C2C04C))(this, source);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffIceShield*))(Il2CppBase() + 0x1C2C2CC))(this);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffIceShield*))(Il2CppBase() + 0x1C2C32C))(this);
	}
	template <typename T = void> T Disappear() {
		return ((T (*)(BuffIceShield*))(Il2CppBase() + 0x1C2C5BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BuffIceShield*))(Il2CppBase() + 0x1C2C720))(this);
	}

};

}
