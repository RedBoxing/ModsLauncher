#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Integration.UnityUI {

class PlayerPointerEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "PlayerPointerEventData"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& inputSourceIndex() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& mouseSource() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& touchSource() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& sourceType() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& buttonIndex() {
		return *(T*)((uintptr_t)this + 0x14C);
	}

	template <typename T = int32_t> T get_playerId() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267CF7C))(this);
	}
	template <typename T = void> T set_playerId(int32_t value) {
		return ((T (*)(PlayerPointerEventData*, int32_t))(Il2CppBase() + 0x268D880))(this, value);
	}
	template <typename T = int32_t> T get_inputSourceIndex() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267CF84))(this);
	}
	template <typename T = void> T set_inputSourceIndex(int32_t value) {
		return ((T (*)(PlayerPointerEventData*, int32_t))(Il2CppBase() + 0x268D888))(this, value);
	}
	template <typename T = uintptr_t> T get_mouseSource() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267EE60))(this);
	}
	template <typename T = void> T set_mouseSource(uintptr_t value) {
		return ((T (*)(PlayerPointerEventData*, uintptr_t))(Il2CppBase() + 0x268D890))(this, value);
	}
	template <typename T = uintptr_t> T get_touchSource() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267EE68))(this);
	}
	template <typename T = void> T set_touchSource(uintptr_t value) {
		return ((T (*)(PlayerPointerEventData*, uintptr_t))(Il2CppBase() + 0x268D898))(this, value);
	}
	template <typename T = uintptr_t> T get_sourceType() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267EE58))(this);
	}
	template <typename T = void> T set_sourceType(uintptr_t value) {
		return ((T (*)(PlayerPointerEventData*, uintptr_t))(Il2CppBase() + 0x268D8A0))(this, value);
	}
	template <typename T = int32_t> T get_buttonIndex() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x267D7B8))(this);
	}
	template <typename T = void> T set_buttonIndex(int32_t value) {
		return ((T (*)(PlayerPointerEventData*, int32_t))(Il2CppBase() + 0x268D8A8))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x268D8E4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(PlayerPointerEventData*))(Il2CppBase() + 0x268DBB0))(this);
	}

};

}
