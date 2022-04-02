#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreArea"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& restore_invert() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& hp_val() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mp_val() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _time() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& detect_list() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RestoreArea*))(Il2CppBase() + 0x42CBF08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RestoreArea*))(Il2CppBase() + 0x42CBFA4))(this);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(RestoreArea*))(Il2CppBase() + 0x42CC0D8))(this);
	}
	template <typename T = bool> T CheckCanRestore() {
		return ((T (*)(RestoreArea*))(Il2CppBase() + 0x42CC05C))(this);
	}

};

}
