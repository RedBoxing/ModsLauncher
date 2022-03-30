#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UnReadSpot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnReadSpot"));
	}

	template <typename T = Il2CppString*> T& readTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& targetToggle() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T ResetReadTag(Il2CppString* readTag) {
		return ((T (*)(UnReadSpot*, Il2CppString*))(Il2CppBase() + 0x462D518))(this, readTag);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UnReadSpot*))(Il2CppBase() + 0x462DC08))(this);
	}
	template <typename T = void> T CheckRead() {
		return ((T (*)(UnReadSpot*))(Il2CppBase() + 0x462D940))(this);
	}
	template <typename T = void> T ClickTargetButton() {
		return ((T (*)(UnReadSpot*))(Il2CppBase() + 0x462DC68))(this);
	}
	template <typename T = void> T SelectTargetToggle(bool isSelect) {
		return ((T (*)(UnReadSpot*, bool))(Il2CppBase() + 0x462DDA4))(this, isSelect);
	}
	template <typename T = void> T RegisterEvent(bool isRegister) {
		return ((T (*)(UnReadSpot*, bool))(Il2CppBase() + 0x462D624))(this, isRegister);
	}

};

}
