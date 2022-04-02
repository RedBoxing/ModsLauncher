#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemRoomDecorateSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRoomDecorateSlot"));
	}

	template <typename T = uintptr_t> T& decorate_item() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& decorate_container() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& empty_sprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& old_room_decorate() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& FlushCallbackDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_decorate() {
		return ((T (*)(ItemRoomDecorateSlot*))(Il2CppBase() + 0x1CD9DF0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemRoomDecorateSlot*))(Il2CppBase() + 0x1CD9F18))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDA520))(this, controller);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDA874))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDABE0))(this, other);
	}
	template <typename T = void> T ChangeSkin(Il2CppString* skin_name) {
		return ((T (*)(ItemRoomDecorateSlot*, Il2CppString*))(Il2CppBase() + 0x1CDAD44))(this, skin_name);
	}
	template <typename T = void> T FlushRoomDecorate() {
		return ((T (*)(ItemRoomDecorateSlot*))(Il2CppBase() + 0x1CDA138))(this);
	}
	template <typename T = void> static T FlushSomeRoomDecorate(uintptr_t decorate_item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1CDAEEC))(0, decorate_item);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemRoomDecorateSlot*))(Il2CppBase() + 0x1CDB120))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDB128))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDB130))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ItemRoomDecorateSlot*, uintptr_t))(Il2CppBase() + 0x1CDB138))(this, P0);
	}

};

}
