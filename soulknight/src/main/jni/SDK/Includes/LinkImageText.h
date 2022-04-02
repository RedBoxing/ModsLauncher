#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LinkImageText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LinkImageText"));
	}

	template <typename T = bool> T& link_underline() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& link_color() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = float> T& link_underline_height() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = bool> T& isImageDirty() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& m_OutputText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppList<void*>*> T& m_ImagesPool() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ImagesVertexIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HrefInfos() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& s_TextBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_OnHrefClick() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> static T& s_ImageRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_OffsetRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& s_SizeDeltaRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& s_HrefRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> T& funLoadSprite() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppRect> T& oneRect() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& underlineList() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = uintptr_t> T get_onHrefClick() {
		return ((T (*)(LinkImageText*))(Il2CppBase() + 0x4264CE8))(this);
	}
	template <typename T = void> T set_onHrefClick(uintptr_t value) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4264D48))(this, value);
	}
	template <typename T = void> T SetVerticesDirty() {
		return ((T (*)(LinkImageText*))(Il2CppBase() + 0x4264DBC))(this);
	}
	template <typename T = void> T UpdateQuadImage() {
		return ((T (*)(LinkImageText*))(Il2CppBase() + 0x4264E28))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t toFill) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4266074))(this, toFill);
	}
	template <typename T = Il2CppString*> T GetOutputText(Il2CppString* outputText) {
		return ((T (*)(LinkImageText*, Il2CppString*))(Il2CppBase() + 0x42668AC))(this, outputText);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x426714C))(this, eventData);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LinkImageText*))(Il2CppBase() + 0x4267438))(this);
	}
	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4267B88))(this, eventData);
	}
	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4267BF8))(this, eventData);
	}
	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4267C68))(this, eventData);
	}
	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4267CD8))(this, eventData);
	}
	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x4267D48))(this, eventData);
	}
	template <typename T = void> T iFixBaseProxy_SetVerticesDirty() {
		return ((T (*)(LinkImageText*))(Il2CppBase() + 0x42680D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnPopulateMesh(uintptr_t P0) {
		return ((T (*)(LinkImageText*, uintptr_t))(Il2CppBase() + 0x42680E0))(this, P0);
	}

};

}
