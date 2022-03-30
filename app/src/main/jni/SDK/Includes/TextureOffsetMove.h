#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextureOffsetMove
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextureOffsetMove"));
	}

	template <typename T = uintptr_t> T& targetRenderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& DefaultOffsetSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& MoveManually() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ShaderTextureSettings() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TextureOffsetMove*))(Il2CppBase() + 0x43C3B30))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TextureOffsetMove*))(Il2CppBase() + 0x43C3BAC))(this);
	}
	template <typename T = void> T Move() {
		return ((T (*)(TextureOffsetMove*))(Il2CppBase() + 0x43C3C20))(this);
	}

};

}
