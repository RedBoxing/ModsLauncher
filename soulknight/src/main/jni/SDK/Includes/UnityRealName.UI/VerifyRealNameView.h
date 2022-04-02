#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.UI {

class VerifyRealNameView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.UI", "VerifyRealNameView"));
	}

	template <typename T = uintptr_t> T& DecribeText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& NameInputField() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& IdCardNumberInputField() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ExitBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& VisitorBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& VerifyRealNameBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CustomerServiceBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& QuitBtn() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& KnowBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NameGa() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& IdentifyGa() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& idGa() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& birthGa() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& IdentifyTypeDropdown() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& YearInputField() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& MonthInputField() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& DayInputField() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& _identifyType() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& IdentifyNameDic() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppString*> T& showStr() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& AfterShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& AfterHideView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> T& CalledFrom() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = uintptr_t> T get_IdentifyType() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FD034))(this);
	}
	template <typename T = void> T set_IdentifyType(uintptr_t value) {
		return ((T (*)(VerifyRealNameView*, uintptr_t))(Il2CppBase() + 0x43FD094))(this, value);
	}
	template <typename T = void> static T add_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F8810))(0, value);
	}
	template <typename T = void> static T remove_AfterShowView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FD520))(0, value);
	}
	template <typename T = void> static T add_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43F890C))(0, value);
	}
	template <typename T = void> static T remove_AfterHideView(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43FD61C))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FD71C))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(VerifyRealNameView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FE28C))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(VerifyRealNameView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FEA38))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(VerifyRealNameView*, uintptr_t))(Il2CppBase() + 0x43FEC28))(this, navigationEvent);
	}
	template <typename T = void> T ClickVisitorBtn() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FED30))(this);
	}
	template <typename T = void> T ClickConfirm() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FEEC4))(this);
	}
	template <typename T = void> T ClickVerifyRealNameBtn() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FF08C))(this);
	}
	template <typename T = uintptr_t> static T ShowRealNameView(Il2CppString* calledFrom) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43F9198))(0, calledFrom);
	}
	template <typename T = void> static T HideRealNameView() {
		return ((T (*)(void *))(Il2CppBase() + 0x43F92D0))(0);
	}
	template <typename T = void> T RefleshIndentify(uintptr_t IdentifyType) {
		return ((T (*)(VerifyRealNameView*, uintptr_t))(Il2CppBase() + 0x43FD110))(this, IdentifyType);
	}
	template <typename T = void> T IDCardValueChange(Il2CppString* data) {
		return ((T (*)(VerifyRealNameView*, Il2CppString*))(Il2CppBase() + 0x43FF194))(this, data);
	}
	template <typename T = void> T onDetectScreenShot(Il2CppString* path) {
		return ((T (*)(VerifyRealNameView*, Il2CppString*))(Il2CppBase() + 0x43FF2CC))(this, path);
	}
	template <typename T = void> T InitViewb__30_0(int32_t i) {
		return ((T (*)(VerifyRealNameView*, int32_t))(Il2CppBase() + 0x43FF4B8))(this, i);
	}
	template <typename T = void> T InitViewb__30_2() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FF590))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(VerifyRealNameView*))(Il2CppBase() + 0x43FF5F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(VerifyRealNameView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FF5F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(VerifyRealNameView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43FF5FC))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_OnEvent(uintptr_t P0) {
		return ((T (*)(VerifyRealNameView*, uintptr_t))(Il2CppBase() + 0x43FF600))(this, P0);
	}

};

}
