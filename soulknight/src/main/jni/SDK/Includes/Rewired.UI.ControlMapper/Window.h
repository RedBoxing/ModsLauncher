#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class Window
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "Window"));
	}

	template <typename T = uintptr_t> T& backgroundImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _initialized() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _rectTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _titleText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _contentText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _defaultUIElement() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _updateCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _isFocusedCallback() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& cancelCallback() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& lastUISelection() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = bool> T get_hasFocus() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2954))(this);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE29F8))(this);
	}
	template <typename T = uintptr_t> T get_rectTransform() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2A58))(this);
	}
	template <typename T = uintptr_t> T get_titleText() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2B48))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_contentText() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2BA8))(this);
	}
	template <typename T = uintptr_t> T get_defaultUIElement() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2C08))(this);
	}
	template <typename T = void> T set_defaultUIElement(uintptr_t value) {
		return ((T (*)(Window*, uintptr_t))(Il2CppBase() + 0x1BE2C68))(this, value);
	}
	template <typename T = void*> T get_updateCallback() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2CDC))(this);
	}
	template <typename T = void> T set_updateCallback(void* value) {
		return ((T (*)(Window*, void*))(Il2CppBase() + 0x1BE2D3C))(this, value);
	}
	template <typename T = uintptr_t> T get_timer() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2DB0))(this);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2E10))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(Window*, int32_t))(Il2CppBase() + 0x1BE2E90))(this, value);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE2F58))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(Window*, int32_t))(Il2CppBase() + 0x1BE2FD8))(this, value);
	}
	template <typename T = bool> T get_initialized() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE30A0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE3100))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE3194))(this);
	}
	template <typename T = void> T Initialize(int32_t id, void* isFocusedCallback) {
		return ((T (*)(Window*, int32_t, void*))(Il2CppBase() + 0x1BE3400))(this, id, isFocusedCallback);
	}
	template <typename T = void> T SetSize(int32_t width, int32_t height) {
		return ((T (*)(Window*, int32_t, int32_t))(Il2CppBase() + 0x1BE355C))(this, width, height);
	}
	template <typename T = void> T CreateTitleText(uintptr_t prefab, Il2CppVector2 offset) {
		return ((T (*)(Window*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE3620))(this, prefab, offset);
	}
	template <typename T = void> T CreateTitleText_1(uintptr_t prefab, Il2CppVector2 offset, Il2CppString* text) {
		return ((T (*)(Window*, uintptr_t, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x1BE3A2C))(this, prefab, offset, text);
	}
	template <typename T = void> T AddContentText(uintptr_t prefab, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE3BDC))(this, prefab, pivot, anchor, offset);
	}
	template <typename T = void> T AddContentText_1(uintptr_t prefab, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset, Il2CppString* text) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x1BE3D38))(this, prefab, pivot, anchor, offset, text);
	}
	template <typename T = void> T AddContentImage(uintptr_t prefab, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE4020))(this, prefab, pivot, anchor, offset);
	}
	template <typename T = void> T AddContentImage_1(uintptr_t prefab, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset, Il2CppString* text) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, Il2CppString*))(Il2CppBase() + 0x1BE4348))(this, prefab, pivot, anchor, offset, text);
	}
	template <typename T = void> T CreateButton(uintptr_t prefab, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset, Il2CppString* buttonText, uintptr_t confirmCallback, uintptr_t cancelCallback, bool setDefault) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, uintptr_t, Il2CppVector2, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1BE4458))(this, prefab, pivot, anchor, offset, buttonText, confirmCallback, cancelCallback, setDefault);
	}
	template <typename T = Il2CppString*> T GetTitleText(Il2CppString* text) {
		return ((T (*)(Window*, Il2CppString*))(Il2CppBase() + 0x1BE4ABC))(this, text);
	}
	template <typename T = void> T SetTitleText(Il2CppString* text) {
		return ((T (*)(Window*, Il2CppString*))(Il2CppBase() + 0x1BE3ADC))(this, text);
	}
	template <typename T = Il2CppString*> T GetContentText(int32_t index) {
		return ((T (*)(Window*, int32_t))(Il2CppBase() + 0x1BE4BCC))(this, index);
	}
	template <typename T = float> T GetContentTextHeight(int32_t index) {
		return ((T (*)(Window*, int32_t))(Il2CppBase() + 0x1BE4D44))(this, index);
	}
	template <typename T = void> T SetContentText(Il2CppString* text, int32_t index) {
		return ((T (*)(Window*, Il2CppString*, int32_t))(Il2CppBase() + 0x1BE3EA0))(this, text, index);
	}
	template <typename T = void> T SetUpdateCallback(void* callback) {
		return ((T (*)(Window*, void*))(Il2CppBase() + 0x1BE4EC4))(this, callback);
	}
	template <typename T = void> T TakeInputFocus() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE4F3C))(this);
	}
	template <typename T = void> T Enable() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE5088))(this);
	}
	template <typename T = void> T Disable() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE5100))(this);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE5178))(this);
	}
	template <typename T = void> T CreateText(uintptr_t prefab, uintptr_t textComponent, Il2CppString* name, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset) {
		return ((T (*)(Window*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE3740))(this, prefab, textComponent, name, pivot, anchor, offset);
	}
	template <typename T = void> T CreateImage(uintptr_t prefab, Il2CppString* name, uintptr_t pivot, uintptr_t anchor, Il2CppVector2 offset) {
		return ((T (*)(Window*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x1BE4158))(this, prefab, name, pivot, anchor, offset);
	}
	template <typename T = uintptr_t> T CreateButton_1(uintptr_t prefab, Il2CppString* name, uintptr_t anchor, uintptr_t pivot, Il2CppVector2 offset, uintptr_t* buttonInfo) {
		return ((T (*)(Window*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppVector2, uintptr_t*))(Il2CppBase() + 0x1BE4790))(this, prefab, name, anchor, pivot, offset, buttonInfo);
	}
	template <typename T = uintptr_t> T OnEnableAsync() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE51F8))(this);
	}
	template <typename T = void> T CheckUISelection() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE3254))(this);
	}
	template <typename T = void> T RestoreDefaultOrLastUISelection() {
		return ((T (*)(Window*))(Il2CppBase() + 0x1BE52D8))(this);
	}
	template <typename T = void> T SetUISelection(uintptr_t selection) {
		return ((T (*)(Window*, uintptr_t))(Il2CppBase() + 0x1BE53D8))(this, selection);
	}

};

}
