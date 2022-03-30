#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampBossBuffTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampBossBuffTrigger"));
	}

	template <typename T = uintptr_t> T& triggerEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& triggerTags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& triggerModels() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& effectRenderer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& showAnimKey() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& hasTrigger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _buffPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& onTrigger() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _triggerModels() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _controllerDic() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& currentScaleValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _showAnimId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = void> T add_onTrigger(void* value) {
		return ((T (*)(SwampBossBuffTrigger*, void*))(Il2CppBase() + 0x42A91DC))(this, value);
	}
	template <typename T = void> T remove_onTrigger(void* value) {
		return ((T (*)(SwampBossBuffTrigger*, void*))(Il2CppBase() + 0x42A92C8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SwampBossBuffTrigger*))(Il2CppBase() + 0x42A93B4))(this);
	}
	template <typename T = void> T Flush(Il2CppString* key, Il2CppDictionary<uintptr_t, int32_t>* controllerDic, uintptr_t random) {
		return ((T (*)(SwampBossBuffTrigger*, Il2CppString*, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t))(Il2CppBase() + 0x42A9560))(this, key, controllerDic, random);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SwampBossBuffTrigger*, uintptr_t))(Il2CppBase() + 0x42A9724))(this, other);
	}
	template <typename T = void> T TriggerWith(uintptr_t controller) {
		return ((T (*)(SwampBossBuffTrigger*, uintptr_t))(Il2CppBase() + 0x42A9930))(this, controller);
	}
	template <typename T = void> T UpdateEffect(bool showEffect) {
		return ((T (*)(SwampBossBuffTrigger*, bool))(Il2CppBase() + 0x42A9CE0))(this, showEffect);
	}

};

}
