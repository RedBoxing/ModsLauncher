#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunPhantom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunPhantom"));
	}

	template <typename T = void*> T& beforePhantomsUpdate() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = void*> T& afterPhantomsUpdated() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = void*> T& onRemovePhantom() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _phantoms() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = void> T add_beforePhantomsUpdate(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D444))(this, value);
	}
	template <typename T = void> T remove_beforePhantomsUpdate(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D534))(this, value);
	}
	template <typename T = void> T add_afterPhantomsUpdated(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D624))(this, value);
	}
	template <typename T = void> T remove_afterPhantomsUpdated(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D714))(this, value);
	}
	template <typename T = void> T add_onRemovePhantom(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D804))(this, value);
	}
	template <typename T = void> T remove_onRemovePhantom(void* value) {
		return ((T (*)(GunPhantom*, void*))(Il2CppBase() + 0x216D8F4))(this, value);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216D9E4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216DA44))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216DAE0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216E7EC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216E89C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216EAB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216EABC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunPhantom*))(Il2CppBase() + 0x216EAC4))(this);
	}

};

}
