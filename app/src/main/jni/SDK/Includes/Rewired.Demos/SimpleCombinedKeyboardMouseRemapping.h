#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Demos {

class SimpleCombinedKeyboardMouseRemapping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Demos", "SimpleCombinedKeyboardMouseRemapping"));
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
	template <typename T = uintptr_t> T& inputMapper_keyboard() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputMapper_mouse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& buttonPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fieldGroupTransform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& actionGroupTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& controllerNameUIText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& statusUIText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rows() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _replaceTargetMapping() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_player() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x2680C5C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x2680D1C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x2681C34))(this);
	}
	template <typename T = void> T RedrawUI() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x2681CFC))(this);
	}
	template <typename T = void> T ClearUI() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x268239C))(this);
	}
	template <typename T = void> T InitializeUI() {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*))(Il2CppBase() + 0x2681088))(this);
	}
	template <typename T = void> T CreateUIRow(uintptr_t action, uintptr_t actionRange, Il2CppString* label) {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x268251C))(this, action, actionRange, label);
	}
	template <typename T = void> T OnInputFieldClicked(int32_t index, int32_t actionElementMapToReplaceId) {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*, int32_t, int32_t))(Il2CppBase() + 0x2682800))(this, index, actionElementMapToReplaceId);
	}
	template <typename T = uintptr_t> T StartListeningDelayed(int32_t index, uintptr_t keyboardMap, uintptr_t mouseMap, int32_t actionElementMapToReplaceId) {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*, int32_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2682A14))(this, index, keyboardMap, mouseMap, actionElementMapToReplaceId);
	}
	template <typename T = void> T OnInputMapped(uintptr_t data) {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*, uintptr_t))(Il2CppBase() + 0x2682B80))(this, data);
	}
	template <typename T = void> T OnStopped(uintptr_t data) {
		return ((T (*)(SimpleCombinedKeyboardMouseRemapping*, uintptr_t))(Il2CppBase() + 0x2682C8C))(this, data);
	}

};

}
