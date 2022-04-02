#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SteleControllerElementAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SteleControllerElementAttack"));
	}

	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& elemSkinCfgDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& elementRate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& buffDic() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& laser() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SteleControllerElementAttack*))(Il2CppBase() + 0x42A44F8))(this);
	}
	template <typename T = void> T OnTake() {
		return ((T (*)(SteleControllerElementAttack*))(Il2CppBase() + 0x42A4940))(this);
	}
	template <typename T = void> T OnSkinChange(uintptr_t atkElementType) {
		return ((T (*)(SteleControllerElementAttack*, uintptr_t))(Il2CppBase() + 0x42A4740))(this, atkElementType);
	}
	template <typename T = void> T OnHitEnemy(bool isCritial, uintptr_t rgeCtrl) {
		return ((T (*)(SteleControllerElementAttack*, bool, uintptr_t))(Il2CppBase() + 0x42A4A34))(this, isCritial, rgeCtrl);
	}

};

}
