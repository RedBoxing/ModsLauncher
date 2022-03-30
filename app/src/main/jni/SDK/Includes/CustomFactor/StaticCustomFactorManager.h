#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace CustomFactor {

class StaticCustomFactorManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CustomFactor", "StaticCustomFactorManager"));
	}

	template <typename T = uintptr_t> static T& _customFactorManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& HasInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& OnAddCustomFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& OnRemoveCustomFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& FactorEffects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<Il2CppString*>*>*> static T& EventSupportDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = bool> static T get_HasFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x428226C))(0);
	}
	template <typename T = Il2CppString*> static T get_CurrentFactorId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282318))(0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T get_FactorModelDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x42823F8))(0);
	}
	template <typename T = void> static T add_OnAddCustomFactor(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42824D8))(0, value);
	}
	template <typename T = void> static T remove_OnAddCustomFactor(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4282608))(0, value);
	}
	template <typename T = void> static T add_OnRemoveCustomFactor(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4282738))(0, value);
	}
	template <typename T = void> static T remove_OnRemoveCustomFactor(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4282868))(0, value);
	}
	template <typename T = uintptr_t> static T get_CustomFactorConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282998))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282A28))(0);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282CF8))(0);
	}
	template <typename T = void> static T ResetBattleData() {
		return ((T (*)(void *))(Il2CppBase() + 0x4282E18))(0);
	}
	template <typename T = void> static T LoadBattleData(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4282F34))(0, data);
	}
	template <typename T = void> static T AddCustomFactor(Il2CppString* factorID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x428304C))(0, factorID);
	}
	template <typename T = void> static T BattleDataAddFactor(Il2CppString* factorID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4283184))(0, factorID);
	}
	template <typename T = void> static T RemoveCustomFactor(Il2CppString* factorID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42832AC))(0, factorID);
	}
	template <typename T = void> static T ClearCustomFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x428349C))(0);
	}
	template <typename T = void> static T SetUpWithGameMode(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4283564))(0, e);
	}
	template <typename T = void> static T BattleDataRemove(Il2CppString* factorID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42833E4))(0, factorID);
	}
	template <typename T = void> static T EventDispatch(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, eventName, target);
	}
	template <typename T = uintptr_t> static T GetCurrentSprite() {
		return ((T (*)(void *))(Il2CppBase() + 0x4283664))(0);
	}

};

}
