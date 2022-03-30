#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HyperText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HyperText"));
	}

	template <typename T = float> T& imgYOffset() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HrefInfos() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& m_spriteTagRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& s_HrefRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& s_TextBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& hrefOnClick() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& hrefOnPress() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppString*> T& m_ProcessedText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& uiVertCount() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listSprite() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listTagInfor() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& m_spriteGraphic() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420AC60))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420ACBC))(this);
	}
	template <typename T = void> T InnerInit() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420AD28))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T ParseHrefNameList(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x420B008))(0, str);
	}
	template <typename T = Il2CppString*> T PreprocessText(Il2CppString* str) {
		return ((T (*)(HyperText*, Il2CppString*))(Il2CppBase() + 0x420B478))(this, str);
	}
	template <typename T = void> T SetVerticesDirty() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420BC78))(this);
	}
	template <typename T = void> T OnPopulateMesh(uintptr_t toFill) {
		return ((T (*)(HyperText*, uintptr_t))(Il2CppBase() + 0x420C3E8))(this, toFill);
	}
	template <typename T = void> T DrawSprite() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420D5A0))(this);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420DC1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420DF1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnable() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420DF24))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetVerticesDirty() {
		return ((T (*)(HyperText*))(Il2CppBase() + 0x420DF2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnPopulateMesh(uintptr_t P0) {
		return ((T (*)(HyperText*, uintptr_t))(Il2CppBase() + 0x420DF34))(this, P0);
	}

};

}
