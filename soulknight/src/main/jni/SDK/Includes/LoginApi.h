#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoginApi
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginApi"));
	}

	template <typename T = Il2CppString*> static T& K_Game_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_loginSvr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_gatewaySvr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_accountId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& m_token() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsLogin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& onInvalidAction() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onInvalidDelayLoginAction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onAlreadySendNeedVarifyEmail() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& onUnKnownErr() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> static T& IsLogining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& isRegistering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& isRegisteChecking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = uintptr_t> static T& _commonHttpClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& requesetingNewIP() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& callNewIPCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& IsInit() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = int32_t> T& changeServerMaxCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> static T& Compress_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ReLogin_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T get_LastGatewaySvrIP_Port() {
		return ((T (*)(void *))(Il2CppBase() + 0x426B15C))(0);
	}
	template <typename T = void> static T set_LastGatewaySvrIP_Port(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x426B1F8))(0, value);
	}
	template <typename T = Il2CppString*> static T get_LastLoginSvrIP_Port() {
		return ((T (*)(void *))(Il2CppBase() + 0x426B28C))(0);
	}
	template <typename T = void> static T set_LastLoginSvrIP_Port(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x426B328))(0, value);
	}
	template <typename T = Il2CppString*> T get_LoginAddress() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426B3BC))(this);
	}
	template <typename T = uint16_t> T get_LoginPort() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426B460))(this);
	}
	template <typename T = Il2CppString*> T get_GateWayIP() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426B4D0))(this);
	}
	template <typename T = uint16_t> T get_GateWayPort() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426B574))(this);
	}
	template <typename T = uintptr_t> static T get_CommonHttpClient() {
		return ((T (*)(void *))(Il2CppBase() + 0x426B5E4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426B810))(this);
	}
	template <typename T = void> T SetState(uintptr_t state) {
		return ((T (*)(LoginApi*, uintptr_t))(Il2CppBase() + 0x426B9E4))(this, state);
	}
	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426BB30))(this);
	}
	template <typename T = void> T CallNewIp(void* callback) {
		return ((T (*)(LoginApi*, void*))(Il2CppBase() + 0x426BB90))(this, callback);
	}
	template <typename T = uintptr_t> T CallBestLoginIP(void* callback) {
		return ((T (*)(LoginApi*, void*))(Il2CppBase() + 0x426BC08))(this, callback);
	}
	template <typename T = bool> T get_IsInit() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426BD5C))(this);
	}
	template <typename T = void> T set_IsInit(bool value) {
		return ((T (*)(LoginApi*, bool))(Il2CppBase() + 0x426BD64))(this, value);
	}
	template <typename T = uintptr_t> T Init(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LoginApi*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426BD70))(this, data);
	}
	template <typename T = void*> T CheckInit() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426BEC4))(this);
	}
	template <typename T = void> T OnSetSvrIp(uintptr_t serverType, void* ip_port) {
		return ((T (*)(LoginApi*, uintptr_t, void*))(Il2CppBase() + 0x426C000))(this, serverType, ip_port);
	}
	template <typename T = uintptr_t> T FetchServerAddress(void* onFetchAddress, uintptr_t serverType) {
		return ((T (*)(LoginApi*, void*, uintptr_t))(Il2CppBase() + 0x426C114))(this, onFetchAddress, serverType);
	}
	template <typename T = uintptr_t> T RegAccount(Il2CppString* account, Il2CppString* password, uintptr_t func, void* exp) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x426C264))(this, account, password, func, exp);
	}
	template <typename T = uintptr_t> T RegCheck(Il2CppString* regdata, uintptr_t bindType, void* callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x426C3D4))(this, regdata, bindType, callback);
	}
	template <typename T = uintptr_t> T ChangePassword(Il2CppString* account, Il2CppString* oldpassword, Il2CppString* newpassword) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x426C538))(this, account, oldpassword, newpassword);
	}
	template <typename T = uintptr_t> T CheckIsValidBindInfo(Il2CppString* account, uintptr_t isValidEmailCallback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x426C69C))(this, account, isValidEmailCallback);
	}
	template <typename T = void> T SetChangeServerMaxCount(int32_t count) {
		return ((T (*)(LoginApi*, int32_t))(Il2CppBase() + 0x426C7E8))(this, count);
	}
	template <typename T = uintptr_t> T AccountLogin(Il2CppString* account, Il2CppString* password, uintptr_t callback, void* exp) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x426C85C))(this, account, password, callback, exp);
	}
	template <typename T = void> T UseGateWay(uintptr_t callback, void* exp) {
		return ((T (*)(LoginApi*, uintptr_t, void*))(Il2CppBase() + 0x426C9CC))(this, callback, exp);
	}
	template <typename T = bool> T IsSaveServerNull() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426CD8C))(this);
	}
	template <typename T = void> T CheckSaveMac(uintptr_t callback) {
		return ((T (*)(LoginApi*, uintptr_t))(Il2CppBase() + 0x426CDF4))(this, callback);
	}
	template <typename T = void> T UnbindMac2(void* callback) {
		return ((T (*)(LoginApi*, void*))(Il2CppBase() + 0x426D120))(this, callback);
	}
	template <typename T = uintptr_t> T AccountBindInfo(Il2CppString* newAccount, bool forceBind, uintptr_t callback) {
		return ((T (*)(LoginApi*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x426D2D8))(this, newAccount, forceBind, callback);
	}
	template <typename T = uintptr_t> T ChangePasswordForce(Il2CppString* account, Il2CppString* newpassword, uintptr_t callback, Il2CppString* smdCode) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x426D440))(this, account, newpassword, callback, smdCode);
	}
	template <typename T = uintptr_t> T ChangingPasswordForce(Il2CppString* account, Il2CppString* newpassword, uintptr_t callback, Il2CppString* smdCode) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x426D5B4))(this, account, newpassword, callback, smdCode);
	}
	template <typename T = void> T CallCenterRpc(uintptr_t rid, uintptr_t func, uintptr_t callback) {
		return ((T (*)(LoginApi*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x426D6F0))(this, rid, func, callback);
	}
	template <typename T = void> T CallGateWayCheckIdentity(uint32_t accountId, uint32_t m_token, uintptr_t callback, void* exp) {
		return ((T (*)(LoginApi*, uint32_t, uint32_t, uintptr_t, void*))(Il2CppBase() + 0x426CB7C))(this, accountId, m_token, callback, exp);
	}
	template <typename T = uintptr_t> T CallRpc(uintptr_t rid, uintptr_t func, uintptr_t callback, void* exp) {
		return ((T (*)(LoginApi*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x426CFAC))(this, rid, func, callback, exp);
	}
	template <typename T = uintptr_t> T CallPureGateWay(uintptr_t rid, uintptr_t func, uintptr_t callback, void* exp) {
		return ((T (*)(LoginApi*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x426D838))(this, rid, func, callback, exp);
	}
	template <typename T = uintptr_t> T CallVerfyEmail(Il2CppString* email, uintptr_t callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x426D9AC))(this, email, callback);
	}
	template <typename T = uintptr_t> T VerfyEmail(Il2CppString* email, uintptr_t callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x426DAF4))(this, email, callback);
	}
	template <typename T = uintptr_t> T SendSMSCode(Il2CppString* phoneNumber, uintptr_t callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x426DBEC))(this, phoneNumber, callback);
	}
	template <typename T = uintptr_t> T VerifySMSCode(Il2CppString* phoneNumber, Il2CppString* smsCode, void* callback) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x426DD38))(this, phoneNumber, smsCode, callback);
	}
	template <typename T = void> T UploadSave(Il2CppArray<uintptr_t>* data, Il2CppString* extra, uintptr_t callback) {
		return ((T (*)(LoginApi*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x426DE98))(this, data, extra, callback);
	}
	template <typename T = void> T CheckForbid(int32_t gemCount, int32_t itemCount, Il2CppString* data) {
		return ((T (*)(LoginApi*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x426E170))(this, gemCount, itemCount, data);
	}
	template <typename T = void> T DnloadSave(void* onSuccess, void* onFail) {
		return ((T (*)(LoginApi*, void*, void*))(Il2CppBase() + 0x426E2CC))(this, onSuccess, onFail);
	}
	template <typename T = void> T GetSaveTimeInfo(void* callback) {
		return ((T (*)(LoginApi*, void*))(Il2CppBase() + 0x426E51C))(this, callback);
	}
	template <typename T = uintptr_t> T SetGameDataJson(Il2CppString* bindInfo, uintptr_t bindType, Il2CppString* json, void* callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x426E6D4))(this, bindInfo, bindType, json, callback);
	}
	template <typename T = uintptr_t> T GetGameDataJson(Il2CppString* bindInfo, uintptr_t bindType, void* callback) {
		return ((T (*)(LoginApi*, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x426E84C))(this, bindInfo, bindType, callback);
	}
	template <typename T = bool> T get_CanUseGameServer() {
		return ((T (*)(LoginApi*))(Il2CppBase() + 0x426E9B0))(this);
	}
	template <typename T = void*> T GetNetTimeByLoginSvr(int32_t maxCostMillisecond) {
		return ((T (*)(LoginApi*, int32_t))(Il2CppBase() + 0x426EA18))(this, maxCostMillisecond);
	}
	template <typename T = void*> T GetNetTimeByGameServer(int32_t maxCostMillisecond) {
		return ((T (*)(LoginApi*, int32_t))(Il2CppBase() + 0x426EB6C))(this, maxCostMillisecond);
	}
	template <typename T = uintptr_t> T GetGift(Il2CppString* gift_Code, void* callback, void* exp) {
		return ((T (*)(LoginApi*, Il2CppString*, void*, void*))(Il2CppBase() + 0x426ECD4))(this, gift_Code, callback, exp);
	}
	template <typename T = void> T CallInvoke(uintptr_t action) {
		return ((T (*)(LoginApi*, uintptr_t))(Il2CppBase() + 0x426EE38))(this, action);
	}
	template <typename T = void> T CallInvoke_1(void* action, uintptr_t t) {
		return ((T (*)(LoginApi*, void*, uintptr_t))(Il2CppBase() + 0x0))(this, action, t);
	}
	template <typename T = void> T CallInvoke_2(void* action, uintptr_t t, uintptr_t u) {
		return ((T (*)(LoginApi*, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, action, t, u);
	}
	template <typename T = uintptr_t> T GetErrCode(uintptr_t recvBuf) {
		return ((T (*)(LoginApi*, uintptr_t))(Il2CppBase() + 0x426EEC4))(this, recvBuf);
	}
	template <typename T = void*> T CallTaskRpc(Il2CppString* ip, uint16_t port, uintptr_t rid, void* func, int32_t maxCostMillis) {
		return ((T (*)(LoginApi*, Il2CppString*, uint16_t, uintptr_t, void*, int32_t))(Il2CppBase() + 0x426EFAC))(this, ip, port, rid, func, maxCostMillis);
	}
	template <typename T = void*> T RpcPostAsync(Il2CppString* url, Il2CppArray<uintptr_t>* sendData) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426F13C))(this, url, sendData);
	}
	template <typename T = void*> T PostAsync(Il2CppString* url, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(LoginApi*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426F298))(this, url, data);
	}
	template <typename T = uintptr_t> T _Decompress(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(LoginApi*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x426F3F8))(this, buf);
	}

};

}
