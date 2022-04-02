#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PickableInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickableInfo"));
	}

	template <typename T = uintptr_t> T& itemType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetPickableName(bool withCount) {
		return ((T (*)(PickableInfo*, bool))(Il2CppBase() + 0x16F2AF0))(this, withCount);
	}
	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(PickableInfo*, bool))(Il2CppBase() + 0x16F2AFC))(this, showUi);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(PickableInfo*))(Il2CppBase() + 0x16F2B08))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(PickableInfo*))(Il2CppBase() + 0x16F2B10))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(PickableInfo*))(Il2CppBase() + 0x16F2B18))(this);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(PickableInfo*))(Il2CppBase() + 0x16F2B20))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(PickableInfo*))(Il2CppBase() + 0x16F2B28))(this);
	}

};

}
