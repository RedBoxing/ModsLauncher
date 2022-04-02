#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhantomWeaponBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhantomWeaponBulletSpliter"));
	}

	template <typename T = uintptr_t> T& rgWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& phantomSplitDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& defaultSpliter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& splitConfigGetter() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isSplitting() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dicRemoveKeyBuffer() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PhantomWeaponBulletSpliter*))(Il2CppBase() + 0x438F3D8))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(PhantomWeaponBulletSpliter*, void*))(Il2CppBase() + 0x438F540))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(PhantomWeaponBulletSpliter*))(Il2CppBase() + 0x438F6A4))(this);
	}
	template <typename T = void> T OnBulletCreate(uintptr_t bullet) {
		return ((T (*)(PhantomWeaponBulletSpliter*, uintptr_t))(Il2CppBase() + 0x438F7F8))(this, bullet);
	}
	template <typename T = void> T OnRemovePhantom(uintptr_t phantom) {
		return ((T (*)(PhantomWeaponBulletSpliter*, uintptr_t))(Il2CppBase() + 0x438F9E0))(this, phantom);
	}
	template <typename T = void> T NewPhantomStart(uintptr_t sourcePhantom, uintptr_t currentPhantom) {
		return ((T (*)(PhantomWeaponBulletSpliter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x438FC38))(this, sourcePhantom, currentPhantom);
	}
	template <typename T = void> T PhantomDestroy(uintptr_t source, uintptr_t current) {
		return ((T (*)(PhantomWeaponBulletSpliter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x438FDA4))(this, source, current);
	}
	template <typename T = void> T AfterPhantomUpdated(Il2CppList<uintptr_t>* phantoms) {
		return ((T (*)(PhantomWeaponBulletSpliter*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x438FEF8))(this, phantoms);
	}
	template <typename T = void> T BeforePhantomUpdate(Il2CppList<uintptr_t>* phantoms) {
		return ((T (*)(PhantomWeaponBulletSpliter*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x439078C))(this, phantoms);
	}

};

}
