#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowSandbox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowSandbox"));
	}

	template <typename T = uintptr_t> T& btnNomal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& btnPressed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cameraSlider() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& topBars() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& windowCustomColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& trSubPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& trHelp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btnShow() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& tgFly() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& needShowRequestReason() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& currentSubPanel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& showBarAnimating() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4321D70))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43226C8))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322738))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322818))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322A28))(this);
	}
	template <typename T = void> T ShowWindow(bool isShow) {
		return ((T (*)(UIWindowSandbox*, bool))(Il2CppBase() + 0x4322A84))(this, isShow);
	}
	template <typename T = void> T Adaptation() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322B18))(this);
	}
	template <typename T = void> T RegisterRecentColor(uintptr_t color) {
		return ((T (*)(UIWindowSandbox*, uintptr_t))(Il2CppBase() + 0x4322CC0))(this, color);
	}
	template <typename T = uintptr_t> T SetWeapon(uintptr_t weaponProto) {
		return ((T (*)(UIWindowSandbox*, uintptr_t))(Il2CppBase() + 0x4322FAC))(this, weaponProto);
	}
	template <typename T = void> T HideSubPanel() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43231D0))(this);
	}
	template <typename T = void> T OnClick_Close() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43232C0))(this);
	}
	template <typename T = void> T OnClick_GlobalSetting() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43234F0))(this);
	}
	template <typename T = void> T OnClick_ShowSubPanel(uintptr_t subUI) {
		return ((T (*)(UIWindowSandbox*, uintptr_t))(Il2CppBase() + 0x43235EC))(this, subUI);
	}
	template <typename T = void> T OnClick_Staff(uintptr_t staffObject) {
		return ((T (*)(UIWindowSandbox*, uintptr_t))(Il2CppBase() + 0x4323788))(this, staffObject);
	}
	template <typename T = void> T OnClick_ColorStaff(uintptr_t staffObject, uintptr_t color) {
		return ((T (*)(UIWindowSandbox*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4323870))(this, staffObject, color);
	}
	template <typename T = void> T OnClick_CustomColor(uintptr_t panel) {
		return ((T (*)(UIWindowSandbox*, uintptr_t))(Il2CppBase() + 0x4323A44))(this, panel);
	}
	template <typename T = void> T OnClick_Help() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43228E0))(this);
	}
	template <typename T = void> T OnClick_HelpClose() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4323C14))(this);
	}
	template <typename T = void> T OnClick_Reset() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4323D10))(this);
	}
	template <typename T = void> T OnClick_SaveScene() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4323F0C))(this);
	}
	template <typename T = void> T SolveNeedShowRequestReason() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322528))(this);
	}
	template <typename T = void> T OnClick_ExportScene() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4324038))(this);
	}
	template <typename T = void> T OnClick_ImportScene() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43241E4))(this);
	}
	template <typename T = void> T OnClick_Play() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4324450))(this);
	}
	template <typename T = void> T OnClick_Share() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43246EC))(this);
	}
	template <typename T = void> T OnClick_Mask() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43247E8))(this);
	}
	template <typename T = void> T OnClick_MapIndex(int32_t mapIndex) {
		return ((T (*)(UIWindowSandbox*, int32_t))(Il2CppBase() + 0x4324848))(this, mapIndex);
	}
	template <typename T = void> T RefreshMapIndexButton() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43222A0))(this);
	}
	template <typename T = void> T OnCameraSizeChange() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4324B60))(this);
	}
	template <typename T = void> T OnClick_ShowButtonBar() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4324C18))(this);
	}
	template <typename T = void> T OnClick_Fly() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4325020))(this);
	}
	template <typename T = void> T HandleUIRealNameIfNeeded() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4322584))(this);
	}
	template <typename T = void> T OnClick_RealNameInfo() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x432529C))(this);
	}
	template <typename T = void> T OnClick_Closeb__20_0() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x4325334))(this);
	}
	template <typename T = void> T OnClick_Resetb__29_0() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x432536C))(this);
	}
	template <typename T = void> T OnClick_ExportSceneb__32_0() {
		return ((T (*)(UIWindowSandbox*))(Il2CppBase() + 0x43255A4))(this);
	}

};

}
