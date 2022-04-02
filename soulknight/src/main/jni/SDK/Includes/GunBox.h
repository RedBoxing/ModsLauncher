#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBox"));
	}

	template <typename T = bool> T& showInBack() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& createDistance() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& editMode() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& needCheckCopy() {
		return *(T*)((uintptr_t)this + 0x1A9);
	}
	template <typename T = uintptr_t> T& boxPreview() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppVector3> T& hightOffset() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& isUsing() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}

	template <typename T = bool> T get_IsCopiedBox() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2580BE4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2580C64))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2580D3C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_masks() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25814A0))(this);
	}
	template <typename T = bool> T Placable(Il2CppVector3 position) {
		return ((T (*)(GunBox*, Il2CppVector3))(Il2CppBase() + 0x2581690))(this, position);
	}
	template <typename T = void> T OnBoxPlayced(uintptr_t box) {
		return ((T (*)(GunBox*, uintptr_t))(Il2CppBase() + 0x2581894))(this, box);
	}
	template <typename T = void> T TurnActivate() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25819AC))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2581A10))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2581C8C))(this);
	}
	template <typename T = void> T DropWeapon(int32_t target_layer) {
		return ((T (*)(GunBox*, int32_t))(Il2CppBase() + 0x2581F14))(this, target_layer);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2582118))(this);
	}
	template <typename T = void> T OnPreviewPositionChanged() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25824F4))(this);
	}
	template <typename T = Il2CppVector3> T get_placePosition() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x2582310))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25825B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25825C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunBox*))(Il2CppBase() + 0x25825C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_DropWeapon(int32_t P0) {
		return ((T (*)(GunBox*, int32_t))(Il2CppBase() + 0x25825D0))(this, P0);
	}

};

}
