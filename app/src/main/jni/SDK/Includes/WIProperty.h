#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WIProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WIProperty"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& propertyTypes() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& initValue() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x43608B4))(this);
	}
	template <typename T = void> T MakeEffect(bool isSetup) {
		return ((T (*)(WIProperty*, bool))(Il2CppBase() + 0x4360ACC))(this, isSetup);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x4361298))(this);
	}
	template <typename T = void> T MakeEffect_1(int32_t effectIndex, bool isSetup) {
		return ((T (*)(WIProperty*, int32_t, bool))(Il2CppBase() + 0x4360BD0))(this, effectIndex, isSetup);
	}
	template <typename T = void> T RemoveEffect_1(int32_t effectIndex) {
		return ((T (*)(WIProperty*, int32_t))(Il2CppBase() + 0x4361334))(this, effectIndex);
	}
	template <typename T = void> T ShowItemInfo() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x4361F78))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x43626CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_MakeEffect(bool P0) {
		return ((T (*)(WIProperty*, bool))(Il2CppBase() + 0x43626D4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_RemoveEffect() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x43626E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowItemInfo() {
		return ((T (*)(WIProperty*))(Il2CppBase() + 0x43626E8))(this);
	}

};

}
