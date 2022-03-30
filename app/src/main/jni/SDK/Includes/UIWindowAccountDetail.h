#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowAccountDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowAccountDetail"));
	}

	template <typename T = uintptr_t> T& inputPhone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& inputEmail() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& inputUUID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& inputDeviceID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& inputLocalSaveID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& inputUUIDChannel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& inputDeviceIDChannel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& inputLocalSaveUIDID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& inputDeviceIDNoRegist() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& inputDeviceLocalSaveUIDID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& trContent() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& trContentChannel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& trContentDevice() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& trEmailRebind() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& inputEmailRebindOld() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& inputEmailRebindNew() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& inputEmailConfirmRebindNew() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DifferentEmail() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& trEmailConfirm() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& inputEmailNeedConfirm() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ChangeEmailBtn() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& inited() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = bool> T get_ChillyAccount() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4581C28))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4581CCC))(this);
	}
	template <typename T = void> T InitComponent() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4581D2C))(this);
	}
	template <typename T = void> T RefleshLocalCloudSaveData() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458273C))(this);
	}
	template <typename T = void> T OnLogout() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4582CE8))(this);
	}
	template <typename T = void> T OnClickClose() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4582F64))(this);
	}
	template <typename T = void> T OnClickRebind() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x45830BC))(this);
	}
	template <typename T = void> T OnClickRebindConfirm() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x45832A4))(this);
	}
	template <typename T = void> T OnClickVerifyEmail() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458378C))(this);
	}
	template <typename T = void> T OnClickShowConfirm() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x45837EC))(this);
	}
	template <typename T = void> T OnClickConfirmEmail() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583900))(this);
	}
	template <typename T = void> T OnClickUnbind() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583A6C))(this);
	}
	template <typename T = void> T OnClickLogOut() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583B94))(this);
	}
	template <typename T = void> T OnClickContent_Email_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583CAC))(this);
	}
	template <typename T = void> T OnClickContent_Uid_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583E58))(this);
	}
	template <typename T = void> T OnClickContent_DeviceID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583EBC))(this);
	}
	template <typename T = void> T OnClickContent_LocalSaveID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583F20))(this);
	}
	template <typename T = void> T OnClickContentChannel_Uid_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583F84))(this);
	}
	template <typename T = void> T OnClickContentChannel_DeviceID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4583FE8))(this);
	}
	template <typename T = void> T OnClickContentChannel_SaveID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458404C))(this);
	}
	template <typename T = void> T OnClickContentDevice_DeviceID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x45840B0))(this);
	}
	template <typename T = void> T OnClickContentDevice_SaveID_Explain() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4584114))(this);
	}
	template <typename T = void> T ChangeExplainActive(uintptr_t inputField) {
		return ((T (*)(UIWindowAccountDetail*, uintptr_t))(Il2CppBase() + 0x4583D10))(this, inputField);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4584178))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458303C))(this);
	}
	template <typename T = bool> T CheckAccountValid(Il2CppString* str, bool showMsg) {
		return ((T (*)(UIWindowAccountDetail*, Il2CppString*, bool))(Il2CppBase() + 0x458366C))(this, str, showMsg);
	}
	template <typename T = void> T ShowMessage(Il2CppString* msg, float duration) {
		return ((T (*)(UIWindowAccountDetail*, Il2CppString*, float))(Il2CppBase() + 0x4584B68))(this, msg, duration);
	}
	template <typename T = void> T OnClickConfirmEmailb__33_0(uintptr_t err) {
		return ((T (*)(UIWindowAccountDetail*, uintptr_t))(Il2CppBase() + 0x4584CA4))(this, err);
	}
	template <typename T = void> T OnClickConfirmEmailb__33_1() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458507C))(this);
	}
	template <typename T = void> T OnClickConfirmEmailb__33_2() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x458525C))(this);
	}
	template <typename T = void> T OnClickUnbindb__34_0() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x45852CC))(this);
	}
	template <typename T = void> T OnClickUnbindb__34_1(uintptr_t errCode, int32_t waitSeconds) {
		return ((T (*)(UIWindowAccountDetail*, uintptr_t, int32_t))(Il2CppBase() + 0x4585398))(this, errCode, waitSeconds);
	}
	template <typename T = void> T OnClickLogOutb__35_0() {
		return ((T (*)(UIWindowAccountDetail*))(Il2CppBase() + 0x4585850))(this);
	}

};

}
