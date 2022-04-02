#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AboContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AboContainer"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& the_item() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A0027C))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A002D8))(this);
	}
	template <typename T = void> T SetCommodity(uintptr_t commodity, int32_t price) {
		return ((T (*)(AboContainer*, uintptr_t, int32_t))(Il2CppBase() + 0x1A00334))(this, commodity, price);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(AboContainer*, uintptr_t))(Il2CppBase() + 0x1A0062C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(AboContainer*, uintptr_t))(Il2CppBase() + 0x1A00B50))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(AboContainer*, uintptr_t))(Il2CppBase() + 0x1A00D30))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(AboContainer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A01340))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A01638))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A01698))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A01724))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(AboContainer*))(Il2CppBase() + 0x1A01784))(this);
	}

};

}
