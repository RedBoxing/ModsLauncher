#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class LifeCycleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "LifeCycleManager"));
	}

	template <typename T = Il2CppString*> T& CurrentStateName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& OnInit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& OnInitOnce() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AfterDataIsReady() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AfterDataIsReadyOnce() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OnResourcesPreparedOnce() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& OnResourcesPrepared() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& OnInitSuccessAndResurcesPrepared() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& OnInitSuccessAndResurcesPreparedOnce() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& OnAccountLogin() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& OnAccountLoginOnce() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& OnAccountChange() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& OnAccountChangeOnce() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OnLogOut() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OnLogOutOnce() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _liftState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _accountId() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _isInitSuccess() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _isResourcesPrepared() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = bool> T& _dataIsReady() {
		return *(T*)((uintptr_t)this + 0x9A);
	}

	template <typename T = Il2CppString*> T get__usedAccounts() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x455507C))(this);
	}
	template <typename T = void> T set__usedAccounts(Il2CppString* value) {
		return ((T (*)(LifeCycleManager*, Il2CppString*))(Il2CppBase() + 0x4555118))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UsedAccounts() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x45551C0))(this);
	}
	template <typename T = Il2CppString*> T get_AccountId() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x45552D8))(this);
	}
	template <typename T = bool> T get_IsResourcesPrepared() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4555338))(this);
	}
	template <typename T = bool> T get_IsInitSuccessAndResurcesPrepared() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4555398))(this);
	}
	template <typename T = bool> T get_DataIsReady() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4555470))(this);
	}
	template <typename T = bool> T get_IsInitSuccess() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4555410))(this);
	}
	template <typename T = void> T add_OnInit(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x45554D0))(this, value);
	}
	template <typename T = void> T remove_OnInit(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x45555BC))(this, value);
	}
	template <typename T = void> T add_OnInitOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x45556A8))(this, value);
	}
	template <typename T = void> T remove_OnInitOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4555794))(this, value);
	}
	template <typename T = void> T add_AfterDataIsReady(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555880))(this, value);
	}
	template <typename T = void> T remove_AfterDataIsReady(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x455596C))(this, value);
	}
	template <typename T = void> T add_AfterDataIsReadyOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555A58))(this, value);
	}
	template <typename T = void> T remove_AfterDataIsReadyOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555B44))(this, value);
	}
	template <typename T = void> T add_OnResourcesPreparedOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555C30))(this, value);
	}
	template <typename T = void> T remove_OnResourcesPreparedOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555D1C))(this, value);
	}
	template <typename T = void> T add_OnResourcesPrepared(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555E08))(this, value);
	}
	template <typename T = void> T remove_OnResourcesPrepared(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555EF4))(this, value);
	}
	template <typename T = void> T add_OnInitSuccessAndResurcesPrepared(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4555FE0))(this, value);
	}
	template <typename T = void> T remove_OnInitSuccessAndResurcesPrepared(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x45560CC))(this, value);
	}
	template <typename T = void> T add_OnInitSuccessAndResurcesPreparedOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x45561B8))(this, value);
	}
	template <typename T = void> T remove_OnInitSuccessAndResurcesPreparedOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x45562A4))(this, value);
	}
	template <typename T = void> T add_OnAccountLogin(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556390))(this, value);
	}
	template <typename T = void> T remove_OnAccountLogin(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x455647C))(this, value);
	}
	template <typename T = void> T add_OnAccountLoginOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556568))(this, value);
	}
	template <typename T = void> T remove_OnAccountLoginOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556654))(this, value);
	}
	template <typename T = void> T add_OnAccountChange(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556740))(this, value);
	}
	template <typename T = void> T remove_OnAccountChange(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x455682C))(this, value);
	}
	template <typename T = void> T add_OnAccountChangeOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556918))(this, value);
	}
	template <typename T = void> T remove_OnAccountChangeOnce(void* value) {
		return ((T (*)(LifeCycleManager*, void*))(Il2CppBase() + 0x4556A04))(this, value);
	}
	template <typename T = void> T add_OnLogOut(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4556AF0))(this, value);
	}
	template <typename T = void> T remove_OnLogOut(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4556BDC))(this, value);
	}
	template <typename T = void> T add_OnLogOutOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4556CC8))(this, value);
	}
	template <typename T = void> T remove_OnLogOutOnce(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4556DB4))(this, value);
	}
	template <typename T = uintptr_t> T get_LiftState() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4556EA0))(this);
	}
	template <typename T = void> T set_LiftState(uintptr_t value) {
		return ((T (*)(LifeCycleManager*, uintptr_t))(Il2CppBase() + 0x4556F00))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x45572C0))(this);
	}
	template <typename T = void> T SetInitResult(bool success, Il2CppString* extra) {
		return ((T (*)(LifeCycleManager*, bool, Il2CppString*))(Il2CppBase() + 0x45573C4))(this, success, extra);
	}
	template <typename T = void> T SetResourcesPrepared() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x45575C4))(this);
	}
	template <typename T = void> T SetInitSuccessAndResourcesPrepared() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x45574F8))(this);
	}
	template <typename T = void> T SetAccountLogin(Il2CppString* accountId) {
		return ((T (*)(LifeCycleManager*, Il2CppString*))(Il2CppBase() + 0x4557AB8))(this, accountId);
	}
	template <typename T = void> T SetAccountChange(Il2CppString* oldAccountId, Il2CppString* newAccountId) {
		return ((T (*)(LifeCycleManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4557D58))(this, oldAccountId, newAccountId);
	}
	template <typename T = void> T SetLogOut() {
		return ((T (*)(LifeCycleManager*))(Il2CppBase() + 0x4557E44))(this);
	}
	template <typename T = void> T RunEvent(uintptr_t action, Il2CppString* actionName) {
		return ((T (*)(LifeCycleManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4557698))(this, action, actionName);
	}
	template <typename T = void> T RunEvent_1(void* action, uintptr_t t, Il2CppString* actionName) {
		return ((T (*)(LifeCycleManager*, void*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, action, t, actionName);
	}
	template <typename T = void> T RunEvent_2(void* action, uintptr_t t, uintptr_t u, Il2CppString* actionName) {
		return ((T (*)(LifeCycleManager*, void*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, action, t, u, actionName);
	}
	template <typename T = void> T AddUsedAccount(Il2CppString* account) {
		return ((T (*)(LifeCycleManager*, Il2CppString*))(Il2CppBase() + 0x4557BF4))(this, account);
	}

};

}
