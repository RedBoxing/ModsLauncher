#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITask"));
	}

	template <typename T = uintptr_t> T& delete_clip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tasks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& currIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& trContent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& trEnemy() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& trChallenge() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& trCustomChallenge() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& pnReward() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& txTitle() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& txEnemy() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& imEnemy() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& imDone() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& itemFactor() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& btnAccept() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& btnCancel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& btnDelete() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& officer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& stateMachine() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& mainState() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& subState() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C3A60))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C4138))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C419C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C41F8))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C3F38))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C461C))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C468C))(this);
	}
	template <typename T = void> T OnClick_Accept() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C476C))(this);
	}
	template <typename T = void> T OnClick_Cancel() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C4838))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C42D4))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C4904))(this);
	}
	template <typename T = void> T ShowDetail() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C4A08))(this);
	}
	template <typename T = void> T FlushDetail(uintptr_t data) {
		return ((T (*)(UITask*, uintptr_t))(Il2CppBase() + 0x41C4AB0))(this, data);
	}
	template <typename T = void> T OnClick_CloseDetail() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C5744))(this);
	}
	template <typename T = void> T OnClick_DeletePaper() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C57F4))(this);
	}
	template <typename T = void> T SelectDefault() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C59A8))(this);
	}
	template <typename T = void> T OnClick_DeletePaperb__35_0() {
		return ((T (*)(UITask*))(Il2CppBase() + 0x41C5A74))(this);
	}

};

}
