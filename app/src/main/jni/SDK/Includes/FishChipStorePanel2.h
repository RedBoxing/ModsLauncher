#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FishChipStorePanel2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishChipStorePanel2"));
	}

	template <typename T = uintptr_t> T& FishChipStorePanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlutusWindowPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& onBackClick() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_onBackClick(uintptr_t value) {
		return ((T (*)(FishChipStorePanel2*, uintptr_t))(Il2CppBase() + 0x450C1E4))(this, value);
	}
	template <typename T = void> T remove_onBackClick(uintptr_t value) {
		return ((T (*)(FishChipStorePanel2*, uintptr_t))(Il2CppBase() + 0x450C2D0))(this, value);
	}
	template <typename T = void> T BackClick() {
		return ((T (*)(FishChipStorePanel2*))(Il2CppBase() + 0x450C3BC))(this);
	}
	template <typename T = void> T Show(Il2CppString* source) {
		return ((T (*)(FishChipStorePanel2*, Il2CppString*))(Il2CppBase() + 0x450C618))(this, source);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(FishChipStorePanel2*))(Il2CppBase() + 0x450C41C))(this);
	}
	template <typename T = void> T FadeIn() {
		return ((T (*)(FishChipStorePanel2*))(Il2CppBase() + 0x450C714))(this);
	}
	template <typename T = void> T FadeOutb__7_0() {
		return ((T (*)(FishChipStorePanel2*))(Il2CppBase() + 0x450C878))(this);
	}

};

}
