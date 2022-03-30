#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun010
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun010"));
	}

	template <typename T = float> T& destory_time() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = Il2CppVector3> T& target_offset() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& onFollowerCreate() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = void*> T& onFollowerReset() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T add_onFollowerCreate(void* value) {
		return ((T (*)(Gun010*, void*))(Il2CppBase() + 0x256D65C))(this, value);
	}
	template <typename T = void> T remove_onFollowerCreate(void* value) {
		return ((T (*)(Gun010*, void*))(Il2CppBase() + 0x256D74C))(this, value);
	}
	template <typename T = void> T add_onFollowerReset(void* value) {
		return ((T (*)(Gun010*, void*))(Il2CppBase() + 0x256D83C))(this, value);
	}
	template <typename T = void> T remove_onFollowerReset(void* value) {
		return ((T (*)(Gun010*, void*))(Il2CppBase() + 0x256D92C))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256DA1C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256DA7C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256DB1C))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256E03C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256E0FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256E104))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun010*))(Il2CppBase() + 0x256E10C))(this);
	}

};

}
