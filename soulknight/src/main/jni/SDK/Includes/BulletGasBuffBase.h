#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletGasBuffBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletGasBuffBase"));
	}

	template <typename T = float> T& buffLeftTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& extraDamage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& canHurt() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& poisonColor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& poisoningTime() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& isDestroying() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& master_gas_ids() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& poisonMaterial() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& instancePoisonMaterial() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bodyRenderers() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2378530))(this);
	}
	template <typename T = void> T AddPoisonTime(float plusTime) {
		return ((T (*)(BulletGasBuffBase*, float))(Il2CppBase() + 0x2379AD0))(this, plusTime);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379B4C))(this);
	}
	template <typename T = uintptr_t> T DelayBeforeEnd() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379C24))(this);
	}
	template <typename T = uintptr_t> T CountDown() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379A1C))(this);
	}
	template <typename T = void> T StopHurt() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379D30))(this);
	}
	template <typename T = void> T GetHurt() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379D90))(this);
	}
	template <typename T = void> T SetPoisoningMaterialAttr(float lightSoft, float lightExpand, float outerLightStrengh, float innerLightStrengh) {
		return ((T (*)(BulletGasBuffBase*, float, float, float, float))(Il2CppBase() + 0x2378BA0))(this, lightSoft, lightExpand, outerLightStrengh, innerLightStrengh);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BulletGasBuffBase*, uintptr_t))(Il2CppBase() + 0x2379ECC))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379F40))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x2379FA0))(this);
	}
	template <typename T = void> T StartDestroy() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x237A1E4))(this);
	}
	template <typename T = void> T n__0() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x237A2B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x237A2B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_BuffEnd() {
		return ((T (*)(BulletGasBuffBase*))(Il2CppBase() + 0x237A2C0))(this);
	}

};

}
