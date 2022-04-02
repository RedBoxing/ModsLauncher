#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Other.GameEmail {

class TextureUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Other.GameEmail", "TextureUtil"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T GetTextureBytes(uintptr_t sp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E67E0))(0, sp);
	}
	template <typename T = void*> static T GetPNGByte(uintptr_t sp) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E68C0))(0, sp);
	}
	template <typename T = uintptr_t> static T ToTexture2D(uintptr_t sprite) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E6988))(0, sprite);
	}
	template <typename T = uintptr_t> static T ToSprite(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E6D4C))(0, texture);
	}
	template <typename T = uintptr_t> static T ToTexture(Il2CppArray<uintptr_t>* bytes, int32_t width, int32_t height) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x44E6E80))(0, bytes, width, height);
	}
	template <typename T = void*> static T GetPngTuple(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E6C48))(0, texture);
	}
	template <typename T = uintptr_t> static T DeCompress(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E6FC0))(0, source);
	}
	template <typename T = uintptr_t> static T CloneTexture2D(uintptr_t texture2D) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44E7214))(0, texture2D);
	}

};

}
