#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Bullet {

class DeBuffElectrificationPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Bullet", "DeBuffElectrificationPlayer"));
	}

	template <typename T = int32_t> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& thunderObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& thunderBuff() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _sourceObject() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _available() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hitCache() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _layerMask() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2C728))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2CF6C))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(DeBuffElectrificationPlayer*, uintptr_t))(Il2CppBase() + 0x1C2D050))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2D174))(this);
	}
	template <typename T = void> T OnPlayerHurt(uintptr_t data) {
		return ((T (*)(DeBuffElectrificationPlayer*, uintptr_t))(Il2CppBase() + 0x1C2C840))(this, data);
	}
	template <typename T = void> T TurnAvailable() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2D864))(this);
	}
	template <typename T = void> T Lightning(uintptr_t t) {
		return ((T (*)(DeBuffElectrificationPlayer*, uintptr_t))(Il2CppBase() + 0x1C2D1D4))(this, t);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2D8C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2DA1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(DeBuffElectrificationPlayer*))(Il2CppBase() + 0x1C2DA24))(this);
	}

};

}
