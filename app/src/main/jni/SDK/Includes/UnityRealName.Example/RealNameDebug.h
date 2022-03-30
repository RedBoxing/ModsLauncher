#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.Example {

class RealNameDebug
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.Example", "RealNameDebug"));
	}

	template <typename T = bool> T& isShowDebug() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isShowStatus() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppRect> T& debugBtnRect() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppRect> T& StatusBtnRect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppRect> T& StatusRedBtnRect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppRect> T& RemainTimeRect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& textGUIStyle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& btnGUIStyle() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& t1() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& t2() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& payAmountStr() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& birthDataStr() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& playTimePurchaseDataStr() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& SetRealNameAgeStr() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& SetRealNamePlayTimeStr() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& IsSetRealNameAgeToggle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& IsSetRealNamePlayTimeToggle() {
		return *(T*)((uintptr_t)this + 0xA9);
	}
	template <typename T = bool> T& IsSetRealNameVisitorPlayTimeToggle() {
		return *(T*)((uintptr_t)this + 0xAA);
	}
	template <typename T = Il2CppString*> T& NowLoginStr() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& SetSdkStr() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& normalRunTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& continueCustomTime() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& lastFreezeDateTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& setTimeSpeed() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& timer() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppVector2> T& debugAreaRect1Vector2() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector2> T& debugAreaRect2Vector2() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& PauseLogic() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& textFieldMidLeft24Layout() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& buttonMidCenter24Layout() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& toggleMiddleCenter24Layout() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& lableMiddleLeft24Layout() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& canPlay() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F4198))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F4694))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F75C0))(this);
	}
	template <typename T = void> T OnTick(uintptr_t source, uintptr_t e) {
		return ((T (*)(RealNameDebug*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F76B8))(this, source, e);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F7830))(this);
	}
	template <typename T = void> T GuiInit() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F422C))(this);
	}
	template <typename T = void> T DrawDebugUtil() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F49CC))(this);
	}
	template <typename T = void> T SetAge(int32_t age) {
		return ((T (*)(RealNameDebug*, int32_t))(Il2CppBase() + 0x43F78C4))(this, age);
	}
	template <typename T = uintptr_t> T SetLoginSvrFetchSdkSvr() {
		return ((T (*)(RealNameDebug*))(Il2CppBase() + 0x43F7A7C))(this);
	}

};

}
