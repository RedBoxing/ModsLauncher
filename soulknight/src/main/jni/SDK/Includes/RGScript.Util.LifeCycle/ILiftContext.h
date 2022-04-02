#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.LifeCycle {

class ILiftContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.LifeCycle", "ILiftContext"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_UsedAccounts() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_AccountId() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LiftState() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LiftState(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsInitSuccess() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsResourcesPrepared() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsInitSuccessAndResurcesPrepared() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_DataIsReady() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnInit(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInit(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInitOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInitOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetInitResult(bool success, Il2CppString* extra) {
		return ((T (*)(ILiftContext*, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, success, extra);
	}
	template <typename T = void> T add_OnResourcesPrepared(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnResourcesPrepared(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnResourcesPreparedOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnResourcesPreparedOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetResourcesPrepared() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnInitSuccessAndResurcesPrepared(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInitSuccessAndResurcesPrepared(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInitSuccessAndResurcesPreparedOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInitSuccessAndResurcesPreparedOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetInitSuccessAndResourcesPrepared() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnAccountLogin(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAccountLogin(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAccountLoginOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAccountLoginOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetAccountLogin(Il2CppString* accountId) {
		return ((T (*)(ILiftContext*, Il2CppString*))(Il2CppBase() + 0x0))(this, accountId);
	}
	template <typename T = void> T add_AfterDataIsReady(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_AfterDataIsReady(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_AfterDataIsReadyOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_AfterDataIsReadyOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAccountChange(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAccountChange(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnAccountChangeOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnAccountChangeOnce(void* value) {
		return ((T (*)(ILiftContext*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetAccountChange(Il2CppString* oldAccountId, Il2CppString* newAccountId) {
		return ((T (*)(ILiftContext*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, oldAccountId, newAccountId);
	}
	template <typename T = void> T add_OnLogOut(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnLogOut(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnLogOutOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnLogOutOnce(uintptr_t value) {
		return ((T (*)(ILiftContext*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T SetLogOut() {
		return ((T (*)(ILiftContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
