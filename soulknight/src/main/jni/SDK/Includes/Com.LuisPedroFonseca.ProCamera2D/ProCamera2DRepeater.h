#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DRepeater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DRepeater"));
	}

	template <typename T = Il2CppString*> static T& ExtensionName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ObjectToRepeat() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector2> T& ObjectSize() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector2> T& ObjectBottomLeft() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& ObjectOnStage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _repeatHorizontal() {
		return *(T*)((uintptr_t)this + 0x71);
	}
	template <typename T = bool> T& _repeatVertical() {
		return *(T*)((uintptr_t)this + 0x72);
	}
	template <typename T = uintptr_t> T& CameraToUse() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _cameraToUseTransform() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppVector3> T& _objStartPosition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _allRepeatedObjects() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& _inactiveRepeatedObjects() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _prevStartIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _prevEndIndex() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& _occupiedIndices() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _pmOrder() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = bool> T get_RepeatHorizontal() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C27F44))(this);
	}
	template <typename T = void> T set_RepeatHorizontal(bool value) {
		return ((T (*)(ProCamera2DRepeater*, bool))(Il2CppBase() + 0x2C27FA4))(this, value);
	}
	template <typename T = bool> T get_RepeatVertical() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C280E0))(this);
	}
	template <typename T = void> T set_RepeatVertical(bool value) {
		return ((T (*)(ProCamera2DRepeater*, bool))(Il2CppBase() + 0x2C28140))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C281BC))(this);
	}
	template <typename T = void> T PostMove(float deltaTime) {
		return ((T (*)(ProCamera2DRepeater*, float))(Il2CppBase() + 0x2C2865C))(this, deltaTime);
	}
	template <typename T = int32_t> T get_PMOrder() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C29144))(this);
	}
	template <typename T = void> T set_PMOrder(int32_t value) {
		return ((T (*)(ProCamera2DRepeater*, int32_t))(Il2CppBase() + 0x2C291A4))(this, value);
	}
	template <typename T = void> T FreeOutOfRangeObjects(uintptr_t startIndex, uintptr_t endIndex) {
		return ((T (*)(ProCamera2DRepeater*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C28CE4))(this, startIndex, endIndex);
	}
	template <typename T = void> T FillGrid(uintptr_t startIndex, uintptr_t endIndex) {
		return ((T (*)(ProCamera2DRepeater*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C28F04))(this, startIndex, endIndex);
	}
	template <typename T = void> T InitCopy(uintptr_t newCopy, bool positionOffscreen) {
		return ((T (*)(ProCamera2DRepeater*, uintptr_t, bool))(Il2CppBase() + 0x2C28498))(this, newCopy, positionOffscreen);
	}
	template <typename T = void> T PositionObject(uintptr_t obj, uintptr_t index) {
		return ((T (*)(ProCamera2DRepeater*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C29218))(this, obj, index);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C28020))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(ProCamera2DRepeater*))(Il2CppBase() + 0x2C29508))(this);
	}

};

}
