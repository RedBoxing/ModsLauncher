#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.EnemyTest {

class Boss12Checker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.EnemyTest", "Boss12Checker"));
	}

	template <typename T = uintptr_t> T& _boss1() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _boss2() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _boss_parent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _boss_ai1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _boss_ai2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _boss_animator1() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _boss_animator2() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& boss_select() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_boss() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EDFBC))(this);
	}
	template <typename T = uintptr_t> T get_boss_parent() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EE0FC))(this);
	}
	template <typename T = uintptr_t> T get_boss_ai() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EE1F4))(this);
	}
	template <typename T = uintptr_t> T get_boss_animator() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EE36C))(this);
	}
	template <typename T = uintptr_t> T GetHurtCheck(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss12Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EE56C))(this, damage, error);
	}
	template <typename T = void> T GetHurt(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss12Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EE694))(this, damage, error);
	}
	template <typename T = uintptr_t> T DizzyState() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EEA9C))(this);
	}
	template <typename T = void> T BeforeRoomStart() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EEB7C))(this);
	}
	template <typename T = uintptr_t> T n__0(int32_t damage, Il2CppString* error) {
		return ((T (*)(Boss12Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EEC30))(this, damage, error);
	}
	template <typename T = uintptr_t> T n__1() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EEC34))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_boss() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EECEC))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_boss_ai() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EEE14))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_boss_animator() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EEF0C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetHurtCheck(int32_t P0, Il2CppString* P1) {
		return ((T (*)(Boss12Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EF004))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, Il2CppString* P1) {
		return ((T (*)(Boss12Checker*, int32_t, Il2CppString*))(Il2CppBase() + 0x26EF008))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DizzyState() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EF33C))(this);
	}
	template <typename T = void> T iFixBaseProxy_BeforeRoomStart() {
		return ((T (*)(Boss12Checker*))(Il2CppBase() + 0x26EF340))(this);
	}

};

}
