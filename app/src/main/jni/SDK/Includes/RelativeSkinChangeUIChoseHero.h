#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelativeSkinChangeUIChoseHero
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelativeSkinChangeUIChoseHero"));
	}

	template <typename T = uintptr_t> T& skinChangeProcessor() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelativeSkinChangeUIChoseHero*))(Il2CppBase() + 0x42B3114))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RelativeSkinChangeUIChoseHero*))(Il2CppBase() + 0x42B32D0))(this);
	}
	template <typename T = void> T OnChoseSkinEnter(uintptr_t choseSkinEnter) {
		return ((T (*)(RelativeSkinChangeUIChoseHero*, uintptr_t))(Il2CppBase() + 0x42B348C))(this, choseSkinEnter);
	}
	template <typename T = void> T OnChoseSkinConfirm(uintptr_t choseSkinConfirm) {
		return ((T (*)(RelativeSkinChangeUIChoseHero*, uintptr_t))(Il2CppBase() + 0x42B3510))(this, choseSkinConfirm);
	}
	template <typename T = void> T OnChoseSkinCancel(uintptr_t choseSkinCancel) {
		return ((T (*)(RelativeSkinChangeUIChoseHero*, uintptr_t))(Il2CppBase() + 0x42B3598))(this, choseSkinCancel);
	}
	template <typename T = void> T OnChoseSkinChangeSelection(uintptr_t eventBase) {
		return ((T (*)(RelativeSkinChangeUIChoseHero*, uintptr_t))(Il2CppBase() + 0x42B3620))(this, eventBase);
	}

};

}
