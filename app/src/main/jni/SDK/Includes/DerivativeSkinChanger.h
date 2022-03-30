#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DerivativeSkinChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DerivativeSkinChanger"));
	}

	template <typename T = uintptr_t> T& rootObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& source_hero() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& need_skill() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& cur_skill_idx() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skins() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& multiUseDefault() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DerivativeSkinChanger*))(Il2CppBase() + 0x42EB858))(this);
	}
	template <typename T = void> T ChangeSkinBySaveMgr() {
		return ((T (*)(DerivativeSkinChanger*))(Il2CppBase() + 0x42EB8B8))(this);
	}
	template <typename T = void> T Change(int32_t index, int32_t skill_id) {
		return ((T (*)(DerivativeSkinChanger*, int32_t, int32_t))(Il2CppBase() + 0x42EBAFC))(this, index, skill_id);
	}
	template <typename T = void> T OnSkinChanged(int32_t skinIndex) {
		return ((T (*)(DerivativeSkinChanger*, int32_t))(Il2CppBase() + 0x42EC0E8))(this, skinIndex);
	}

};

}
