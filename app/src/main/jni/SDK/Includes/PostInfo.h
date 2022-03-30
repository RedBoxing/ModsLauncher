#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PostInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PostInfo"));
	}

	template <typename T = Il2CppString*> T& _key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& startDate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& expiryDate() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = Il2CppString*> T get_eventName() {
		return ((T (*)(PostInfo*))(Il2CppBase() + 0x43A1184))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(PostInfo*))(Il2CppBase() + 0x43A1248))(this);
	}
	template <typename T = void> T GetRewards(bool showUi) {
		return ((T (*)(PostInfo*, bool))(Il2CppBase() + 0x43A14C4))(this, showUi);
	}

};

}
