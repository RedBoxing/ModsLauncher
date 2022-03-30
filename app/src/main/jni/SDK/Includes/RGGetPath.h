#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGGetPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGGetPath"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& id2transform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& transform2id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& id2NetTf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& itemTriggerInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& enemyDeadInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& seedReadyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& clientSeedReadyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& cmdQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& dmgList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> static T ResetDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4691C))(0);
	}
	template <typename T = uintptr_t> static T GetTransform(int32_t transformId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1C4EE20))(0, transformId);
	}
	template <typename T = int32_t> static T GetNetId(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C4315C))(0, transform);
	}
	template <typename T = uintptr_t> static T GetEnemy(int32_t transformId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1C4F1E0))(0, transformId);
	}
	template <typename T = uintptr_t> static T GetBox(int32_t transformId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1C4F3B4))(0, transformId);
	}
	template <typename T = int32_t> static T RegisterTransform(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C4EF50))(0, transform);
	}
	template <typename T = void> static T UnRegisterTransform(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C501A0))(0, transform);
	}
	template <typename T = Il2CppString*> static T GetFullPath(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C4F588))(0, transform);
	}
	template <typename T = int32_t> static T GetNetId_1(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1C4F6F4))(0, str);
	}
	template <typename T = void> static T AddUnReadyNetTransform(int32_t id, uintptr_t netBehaviour) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1C5035C))(0, id, netBehaviour);
	}
	template <typename T = void> static T RemoveUnReadyNetTransform(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1C50584))(0, id);
	}
	template <typename T = void> static T ProcessDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C50680))(0);
	}
	template <typename T = void> static T EnqueueCmd(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C50A68))(0, msg);
	}
	template <typename T = void> static T ProcessUnhandleCommand() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C50BB0))(0);
	}
	template <typename T = bool> static T ProcessSwitchWeapon(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C51118))(0, msg);
	}
	template <typename T = bool> static T ProcessWeaponSpecial(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C51430))(0, msg);
	}
	template <typename T = bool> static T ProcessSkill(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C5179C))(0, msg);
	}
	template <typename T = bool> static T ProcessFusion(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C51970))(0, msg);
	}
	template <typename T = bool> static T ProcessItemTrigger(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1C51E58))(0, msg);
	}
	template <typename T = void> static T ProcessUnhandleEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C4F85C))(0);
	}

};

}
