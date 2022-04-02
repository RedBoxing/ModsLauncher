#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SpritePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpritePlayer"));
	}

	template <typename T = float> T& FrameUpdateTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ImageSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpriteRendererSource() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _initTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _currentAnimationName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isPlaying() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _currentSpriteIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& AnimationDic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isLoop() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& OnFrameChange() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = float> T get_FrameUpdateTime() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x42979C8))(this);
	}
	template <typename T = uintptr_t> T get_ImageSource() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x42979D0))(this);
	}
	template <typename T = uintptr_t> T get_SpriteRendererSource() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x42979D8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T get_AnimationDic() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x42979E0))(this);
	}
	template <typename T = uintptr_t> T AddAnimation(Il2CppString* animationName, Il2CppList<uintptr_t>* sprites) {
		return ((T (*)(SpritePlayer*, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4297B20))(this, animationName, sprites);
	}
	template <typename T = void> T PlayAnimation(Il2CppString* animationName, bool isLoop) {
		return ((T (*)(SpritePlayer*, Il2CppString*, bool))(Il2CppBase() + 0x4297BEC))(this, animationName, isLoop);
	}
	template <typename T = void> T StopAnimation() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x4297EC4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x4297F24))(this);
	}
	template <typename T = void> T SetSprite() {
		return ((T (*)(SpritePlayer*))(Il2CppBase() + 0x4297D08))(this);
	}

};

}
