#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectMagicStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectMagicStone"));
	}

	template <typename T = uintptr_t> T& stone_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& flash_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& magic_stone() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& light1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& light2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& light3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& light4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& triggerd() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB298C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB2B84))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectMagicStone*, uintptr_t))(Il2CppBase() + 0x1DB2CB8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectMagicStone*, uintptr_t))(Il2CppBase() + 0x1DB2ED4))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectMagicStone*, uintptr_t))(Il2CppBase() + 0x1DB3094))(this, controller);
	}
	template <typename T = void> T PlayFlash() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB33FC))(this);
	}
	template <typename T = void> T StateMents() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB351C))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB36C8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB3728))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB37B4))(this);
	}
	template <typename T = void> T Light1Play() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB3814))(this);
	}
	template <typename T = void> T Light2Play() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB38BC))(this);
	}
	template <typename T = void> T Light3Play() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB3964))(this);
	}
	template <typename T = void> T Light4Play() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB3A0C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB3AB4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectMagicStone*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DB3B14))(this, controller, ext_info);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(ObjectMagicStone*))(Il2CppBase() + 0x1DB2BE4))(this);
	}

};

}
