#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowSettingSBRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowSettingSBRoom"));
	}

	template <typename T = uintptr_t> T& trRoomPanal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& trEnemyPanal() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ipWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ipHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& dpRoomType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& dpLevelScene() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tgDoorNorth() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& tgDoorSounth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tgDoorEast() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& tgDoorWest() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& txLevelIndex() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& slLevelIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ipHpPercentage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ipDensity() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ipEnemyPoint() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ipAtkOffset() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& tgExEnemy() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& roomTypes() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& levelScenes() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_roomInfo() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x4328254))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x43282C8))(this);
	}
	template <typename T = void> T Click() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x43290D8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x4329134))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x4329190))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t room) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43291EC))(0, room);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x432935C))(this);
	}
	template <typename T = void> T ShowEnemyPanel() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x43298E0))(this);
	}
	template <typename T = void> T HideSubPanel() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x4329A04))(this);
	}
	template <typename T = void> T OnValueChanged_RoomType(int32_t index) {
		return ((T (*)(UIWindowSettingSBRoom*, int32_t))(Il2CppBase() + 0x4329B50))(this, index);
	}
	template <typename T = void> T OnValueChanged_LevelScene(int32_t index) {
		return ((T (*)(UIWindowSettingSBRoom*, int32_t))(Il2CppBase() + 0x4329C2C))(this, index);
	}
	template <typename T = void> T OnSliderChanged_LevelIndex(float value) {
		return ((T (*)(UIWindowSettingSBRoom*, float))(Il2CppBase() + 0x4329CE4))(this, value);
	}
	template <typename T = void> T OnEditEnd_ClampValue(Il2CppString* value, int32_t minValue, int32_t maxValue, uintptr_t inputField) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4329DAC))(this, value, minValue, maxValue, inputField);
	}
	template <typename T = void> T OnClick_Confirm() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x4329EDC))(this);
	}
	template <typename T = bool> T IsRoomPlacable(int32_t width, int32_t height) {
		return ((T (*)(UIWindowSettingSBRoom*, int32_t, int32_t))(Il2CppBase() + 0x432A5E0))(this, width, height);
	}
	template <typename T = void> T OnClick_Cancel() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x432A90C))(this);
	}
	template <typename T = void> T Awakeb__22_0(Il2CppString* text) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*))(Il2CppBase() + 0x432AAA4))(this, text);
	}
	template <typename T = void> T Awakeb__22_1(Il2CppString* text) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*))(Il2CppBase() + 0x432AAB4))(this, text);
	}
	template <typename T = void> T Awakeb__22_2(Il2CppString* text) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*))(Il2CppBase() + 0x432AAC4))(this, text);
	}
	template <typename T = void> T Awakeb__22_3(Il2CppString* text) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*))(Il2CppBase() + 0x432AAD4))(this, text);
	}
	template <typename T = void> T Awakeb__22_4(Il2CppString* text) {
		return ((T (*)(UIWindowSettingSBRoom*, Il2CppString*))(Il2CppBase() + 0x432AAE4))(this, text);
	}
	template <typename T = void> T HideSubPanelb__29_0() {
		return ((T (*)(UIWindowSettingSBRoom*))(Il2CppBase() + 0x432AAF4))(this);
	}

};

}
