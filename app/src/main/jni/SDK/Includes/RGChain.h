#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChain"));
	}

	template <typename T = bool> T& setup() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& chainProto() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& chains() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hitList() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& last_object() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& reflect_chains() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = void*> T& OnHurtEnemy() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& linecast_mask() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_cache() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& box_hit_cache() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T get_count() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D75A0))(this);
	}
	template <typename T = void> T set_count(int32_t value) {
		return ((T (*)(RGChain*, int32_t))(Il2CppBase() + 0x19D7600))(this, value);
	}
	template <typename T = int32_t> T get_reflectCount() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D7BA8))(this);
	}
	template <typename T = uintptr_t> T get_weapon() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D7C08))(this);
	}
	template <typename T = float> T get_rate() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D7C68))(this);
	}
	template <typename T = void> T set_rate(float value) {
		return ((T (*)(RGChain*, float))(Il2CppBase() + 0x19D7CC8))(this, value);
	}
	template <typename T = void> T add_OnHurtEnemy(void* value) {
		return ((T (*)(RGChain*, void*))(Il2CppBase() + 0x19D7D3C))(this, value);
	}
	template <typename T = void> T remove_OnHurtEnemy(void* value) {
		return ((T (*)(RGChain*, void*))(Il2CppBase() + 0x19D7E28))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D7F14))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D8064))(this);
	}
	template <typename T = void> T GenReflectChains() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D78C0))(this);
	}
	template <typename T = void> T HitTarget() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D88C8))(this);
	}
	template <typename T = uintptr_t> T GetTarget() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D9C7C))(this);
	}
	template <typename T = uintptr_t> T FindTarget() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D9D98))(this);
	}
	template <typename T = void> T SearchTarget() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19D9138))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19DA390))(this);
	}
	template <typename T = void> T DoUpdate() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19DA498))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGChain*, uintptr_t))(Il2CppBase() + 0x19DAC98))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGChain*))(Il2CppBase() + 0x19DAD0C))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19DAD6C))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T DestoryLaser(bool needRemove) {
		return ((T (*)(RGChain*, bool))(Il2CppBase() + 0x19D872C))(this, needRemove);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGChain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19DB188))(this, P0, P1);
	}

};

}
