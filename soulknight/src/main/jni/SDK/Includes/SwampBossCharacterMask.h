#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampBossCharacterMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampBossCharacterMask"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& playerTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& scaleLevelFactor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& animSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& activeAnimKey() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& shieldEffectObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& initShieldSize() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& shieldParticle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _targetController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& maskLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _maskNormalLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _playerController() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& onControllerEnter() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& onControllerLeave() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _playerCollider() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _controllers() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _activeAnimKey() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T get_IsEnlarge() {
		return ((T (*)(SwampBossCharacterMask*))(Il2CppBase() + 0x42A9DEC))(this);
	}
	template <typename T = bool> T get_IsNormal() {
		return ((T (*)(SwampBossCharacterMask*))(Il2CppBase() + 0x42A9E54))(this);
	}
	template <typename T = void> T add_onControllerEnter(void* value) {
		return ((T (*)(SwampBossCharacterMask*, void*))(Il2CppBase() + 0x42A9EBC))(this, value);
	}
	template <typename T = void> T remove_onControllerEnter(void* value) {
		return ((T (*)(SwampBossCharacterMask*, void*))(Il2CppBase() + 0x42A9FA8))(this, value);
	}
	template <typename T = void> T add_onControllerLeave(void* value) {
		return ((T (*)(SwampBossCharacterMask*, void*))(Il2CppBase() + 0x42AA094))(this, value);
	}
	template <typename T = void> T remove_onControllerLeave(void* value) {
		return ((T (*)(SwampBossCharacterMask*, void*))(Il2CppBase() + 0x42AA180))(this, value);
	}
	template <typename T = bool> T get_IsControllerIn() {
		return ((T (*)(SwampBossCharacterMask*))(Il2CppBase() + 0x42AA26C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SwampBossCharacterMask*))(Il2CppBase() + 0x42AA31C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwampBossCharacterMask*))(Il2CppBase() + 0x42AA388))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SwampBossCharacterMask*, uintptr_t))(Il2CppBase() + 0x42AA4C8))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(SwampBossCharacterMask*, uintptr_t))(Il2CppBase() + 0x42AA7B0))(this, other);
	}
	template <typename T = void> T Init(int32_t maskLevel, int32_t maskNormalLevel, float basicScale, uintptr_t characterSprite, uintptr_t targetController, Il2CppDictionary<uintptr_t, int32_t>* controllers) {
		return ((T (*)(SwampBossCharacterMask*, int32_t, int32_t, float, uintptr_t, uintptr_t, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x42AA8F4))(this, maskLevel, maskNormalLevel, basicScale, characterSprite, targetController, controllers);
	}

};

}
