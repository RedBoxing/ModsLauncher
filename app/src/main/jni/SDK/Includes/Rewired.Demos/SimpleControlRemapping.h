#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class SimpleControlRemapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "SimpleControlRemapping"));
	}

	template <typename T = Il2CppString*> static T& category() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& layout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& uiCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& inputMapper() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buttonPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& textPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fieldGroupTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& actionGroupTransform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& controllerNameUIText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& statusUIText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& selectedControllerType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& selectedControllerId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rows() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2683348))(this);
	}
	template <typename T = uintptr_t> T get_controllerMap() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2683408))(this);
	}
	template <typename T = uintptr_t> T get_controller() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2683540))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x26835E4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x268443C))(this);
	}
	template <typename T = void> T RedrawUI() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2684590))(this);
	}
	template <typename T = void> T ClearUI() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2684BDC))(this);
	}
	template <typename T = void> T InitializeUI() {
		return ((T (*)(SimpleControlRemapping*))(Il2CppBase() + 0x2683890))(this);
	}
	template <typename T = void> T CreateUIRow(uintptr_t action, uintptr_t actionRange, Il2CppString* label) {
		return ((T (*)(SimpleControlRemapping*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2684DA4))(this, action, actionRange, label);
	}
	template <typename T = void> T SetSelectedController(uintptr_t controllerType) {
		return ((T (*)(SimpleControlRemapping*, uintptr_t))(Il2CppBase() + 0x2685088))(this, controllerType);
	}
	template <typename T = void> T OnControllerSelected(int32_t controllerType) {
		return ((T (*)(SimpleControlRemapping*, int32_t))(Il2CppBase() + 0x268528C))(this, controllerType);
	}
	template <typename T = void> T OnInputFieldClicked(int32_t index, int32_t actionElementMapToReplaceId) {
		return ((T (*)(SimpleControlRemapping*, int32_t, int32_t))(Il2CppBase() + 0x2685304))(this, index, actionElementMapToReplaceId);
	}
	template <typename T = uintptr_t> T StartListeningDelayed(int32_t index, int32_t actionElementMapToReplaceId) {
		return ((T (*)(SimpleControlRemapping*, int32_t, int32_t))(Il2CppBase() + 0x2685408))(this, index, actionElementMapToReplaceId);
	}
	template <typename T = void> T OnControllerChanged(uintptr_t args) {
		return ((T (*)(SimpleControlRemapping*, uintptr_t))(Il2CppBase() + 0x2685530))(this, args);
	}
	template <typename T = void> T OnInputMapped(uintptr_t data) {
		return ((T (*)(SimpleControlRemapping*, uintptr_t))(Il2CppBase() + 0x26855A8))(this, data);
	}
	template <typename T = void> T OnStopped(uintptr_t data) {
		return ((T (*)(SimpleControlRemapping*, uintptr_t))(Il2CppBase() + 0x268561C))(this, data);
	}

};

}
