#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class SwampFactorProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "SwampFactorProcessor"));
	}

	template <typename T = uintptr_t> T& windowShowPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& descTextPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& showDelay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& negativeFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& banBuffs() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& buffImgPath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _suitableBuffs() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _buffs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> static T& BanBuffPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwampFactorProcessor*))(Il2CppBase() + 0x1A36D38))(this);
	}
	template <typename T = void> T FactorProcess(uintptr_t model) {
		return ((T (*)(SwampFactorProcessor*, uintptr_t))(Il2CppBase() + 0x1A36E64))(this, model);
	}
	template <typename T = uintptr_t> T SetFactor(uintptr_t model, Il2CppString* customContent) {
		return ((T (*)(SwampFactorProcessor*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A373D4))(this, model, customContent);
	}
	template <typename T = Il2CppString*> T GetCustomContent(uintptr_t model) {
		return ((T (*)(SwampFactorProcessor*, uintptr_t))(Il2CppBase() + 0x1A37000))(this, model);
	}

};

}
