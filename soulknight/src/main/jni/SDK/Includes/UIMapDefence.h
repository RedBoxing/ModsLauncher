#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMapDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMapDefence"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& gateIcon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& gateIconOpen() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& gates() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& unit2Dot() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& dotRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& dotProto() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& waveText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T ChangeColor() {
		return ((T (*)(UIMapDefence*))(Il2CppBase() + 0x4342F44))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIMapDefence*))(Il2CppBase() + 0x4343148))(this);
	}
	template <typename T = void> T SetWaveText(Il2CppString* text) {
		return ((T (*)(UIMapDefence*, Il2CppString*))(Il2CppBase() + 0x43432C8))(this, text);
	}
	template <typename T = void> T Register(uintptr_t t) {
		return ((T (*)(UIMapDefence*, uintptr_t))(Il2CppBase() + 0x434335C))(this, t);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIMapDefence*))(Il2CppBase() + 0x43435D4))(this);
	}
	template <typename T = void> T UpdateDotPosition(uintptr_t t) {
		return ((T (*)(UIMapDefence*, uintptr_t))(Il2CppBase() + 0x4343484))(this, t);
	}
	template <typename T = Il2CppVector2> T GetDotPosition(uintptr_t t) {
		return ((T (*)(UIMapDefence*, uintptr_t))(Il2CppBase() + 0x4343754))(this, t);
	}
	template <typename T = void> T ShineGates(Il2CppList<uintptr_t>* directions) {
		return ((T (*)(UIMapDefence*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4343854))(this, directions);
	}

};

}
