#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Integration.UnityUI {

class RewiredPointerInputModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "RewiredPointerInputModule"));
	}

	template <typename T = int32_t> static T& kMouseLeftId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMouseRightId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMouseMiddleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kFakeTouchesId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& customButtonsStartingId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& customButtonsMaxCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& customButtonsLastId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MouseInputSourcesList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& m_PlayerPointerData() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_UserDefaultTouchInputSource() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& __m_DefaultInputSource() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_MouseState() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_defaultInputSource() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x268DEE8))(this);
	}
	template <typename T = uintptr_t> T get_defaultMouseInputSource() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x268DFAC))(this);
	}
	template <typename T = uintptr_t> T get_defaultTouchInputSource() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x268E00C))(this);
	}
	template <typename T = bool> T IsDefaultMouse(uintptr_t mouse) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268E06C))(this, mouse);
	}
	template <typename T = uintptr_t> T GetMouseInputSource(int32_t playerId, int32_t mouseIndex) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t))(Il2CppBase() + 0x268E0EC))(this, playerId, mouseIndex);
	}
	template <typename T = void> T RemoveMouseInputSource(uintptr_t source) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268E38C))(this, source);
	}
	template <typename T = void> T AddMouseInputSource(uintptr_t source) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268E48C))(this, source);
	}
	template <typename T = int32_t> T GetMouseInputSourceCount(int32_t playerId) {
		return ((T (*)(RewiredPointerInputModule*, int32_t))(Il2CppBase() + 0x268E5C0))(this, playerId);
	}
	template <typename T = uintptr_t> T GetTouchInputSource(int32_t playerId, int32_t sourceIndex) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t))(Il2CppBase() + 0x268E7F0))(this, playerId, sourceIndex);
	}
	template <typename T = void> T RemoveTouchInputSource(uintptr_t source) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268E8E0))(this, source);
	}
	template <typename T = void> T AddTouchInputSource(uintptr_t source) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268E9CC))(this, source);
	}
	template <typename T = int32_t> T GetTouchInputSourceCount(int32_t playerId) {
		return ((T (*)(RewiredPointerInputModule*, int32_t))(Il2CppBase() + 0x268EAE0))(this, playerId);
	}
	template <typename T = void> T ClearMouseInputSources() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x268EB6C))(this);
	}
	template <typename T = bool> T get_isMouseSupported() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x268EC0C))(this);
	}
	template <typename T = bool> T IsDefaultPlayer(int32_t playerId) {
		return ((T (*)(RewiredPointerInputModule*, int32_t))(Il2CppBase() + 0x0))(this, playerId);
	}
	template <typename T = bool> T GetPointerData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, uintptr_t* data, bool create, uintptr_t pointerEventType) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t, int32_t, uintptr_t*, bool, uintptr_t))(Il2CppBase() + 0x268EE28))(this, playerId, pointerIndex, pointerTypeId, data, create, pointerEventType);
	}
	template <typename T = uintptr_t> T CreatePointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, uintptr_t pointerEventType) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x268F330))(this, playerId, pointerIndex, pointerTypeId, pointerEventType);
	}
	template <typename T = void> T RemovePointerData(uintptr_t data) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x268F514))(this, data);
	}
	template <typename T = uintptr_t> T GetTouchPointerEventData(int32_t playerId, int32_t touchDeviceIndex, uintptr_t input, uintptr_t* pressed, uintptr_t* released) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x268F670))(this, playerId, touchDeviceIndex, input, pressed, released);
	}
	template <typename T = uintptr_t> T GetMousePointerEventData(int32_t playerId, int32_t mouseIndex) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t))(Il2CppBase() + 0x268FA24))(this, playerId, mouseIndex);
	}
	template <typename T = uintptr_t> T GetLastPointerEventData(int32_t playerId, int32_t pointerIndex, int32_t pointerTypeId, bool ignorePointerTypeId, uintptr_t pointerEventType) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x2690748))(this, playerId, pointerIndex, pointerTypeId, ignorePointerTypeId, pointerEventType);
	}
	template <typename T = bool> static T ShouldStartDrag(Il2CppVector2 pressPos, Il2CppVector2 currentPos, float threshold, bool useDragThreshold) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float, bool))(Il2CppBase() + 0x26909B0))(0, pressPos, currentPos, threshold, useDragThreshold);
	}
	template <typename T = void> T ProcessMove(uintptr_t pointerEvent) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x2690AD4))(this, pointerEvent);
	}
	template <typename T = void> T ProcessDrag(uintptr_t pointerEvent) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t))(Il2CppBase() + 0x2690D44))(this, pointerEvent);
	}
	template <typename T = bool> T IsPointerOverGameObject(int32_t pointerTypeId) {
		return ((T (*)(RewiredPointerInputModule*, int32_t))(Il2CppBase() + 0x26912A4))(this, pointerTypeId);
	}
	template <typename T = void> T ClearSelection() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x2691540))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x2691A00))(this);
	}
	template <typename T = void> T DeselectIfSelectionChanged(uintptr_t currentOverGo, uintptr_t pointerEvent) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2691FB8))(this, currentOverGo, pointerEvent);
	}
	template <typename T = void> T CopyFromTo(uintptr_t from, uintptr_t to) {
		return ((T (*)(RewiredPointerInputModule*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26902C8))(this, from, to);
	}
	template <typename T = uintptr_t> T StateForMouseButton(int32_t playerId, int32_t mouseIndex, int32_t buttonId) {
		return ((T (*)(RewiredPointerInputModule*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2690498))(this, playerId, mouseIndex, buttonId);
	}
	template <typename T = bool> T iFixBaseProxy_IsPointerOverGameObject(int32_t P0) {
		return ((T (*)(RewiredPointerInputModule*, int32_t))(Il2CppBase() + 0x2692248))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(RewiredPointerInputModule*))(Il2CppBase() + 0x2692250))(this);
	}

};

}
