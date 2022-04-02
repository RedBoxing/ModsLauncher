#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSword"));
	}

	template <typename T = bool> T& revert() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& adjustPositionByScale() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = float> T& autoDestroyDelay() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _b() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& manualDestroy() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_b() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DB56C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DB65C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DB6BC))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(RGSword*, float))(Il2CppBase() + 0x43DB770))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(RGSword*, float))(Il2CppBase() + 0x43DB838))(this, totalTime);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGSword*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43DB944))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T UpdateAttributeByEnemy(uintptr_t source_object, int32_t damage, float the_speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(RGSword*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x43DBBD0))(this, source_object, damage, the_speed, can_through, repel, camp);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGSword*, uintptr_t))(Il2CppBase() + 0x43DBEB0))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DBF28))(this);
	}
	template <typename T = void> T ResetSize() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DBF88))(this);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(RGSword*))(Il2CppBase() + 0x43DC1FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGSword*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43DC2DC))(this, P0, P1);
	}

};

}
