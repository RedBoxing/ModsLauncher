#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializeLinkerGravity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializeLinkerGravity"));
	}

	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& provider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& trImg() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1823B80))(this);
	}
	template <typename T = uintptr_t> T GetGravityInfo() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1823C78))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetSerializedData() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1823F9C))(this);
	}
	template <typename T = bool> T SetSerializedData(Il2CppDictionary<Il2CppString*, Il2CppString*>* dic) {
		return ((T (*)(SerializeLinkerGravity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x18240D8))(this, dic);
	}
	template <typename T = void> T SetSerializedData_1(uintptr_t info) {
		return ((T (*)(SerializeLinkerGravity*, uintptr_t))(Il2CppBase() + 0x1824230))(this, info);
	}
	template <typename T = void> T ShowSettingWindow() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1824628))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDatas() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x182468C))(this);
	}
	template <typename T = void> T SetDatas(Il2CppArray<uintptr_t>* datas) {
		return ((T (*)(SerializeLinkerGravity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1824AA0))(this, datas);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SerializeLinkerGravity*, uintptr_t))(Il2CppBase() + 0x1824E24))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(SerializeLinkerGravity*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1824E98))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1824F14))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1824F74))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1824FD4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SerializeLinkerGravity*))(Il2CppBase() + 0x1825034))(this);
	}

};

}
