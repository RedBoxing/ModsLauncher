#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectExhibition"));
	}

	template <typename T = uintptr_t> T& object_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& item_level() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& item_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& level_clause() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& item_score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& item_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& the_name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& the_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& the_level() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& originalBoardSprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D5535C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectExhibition*, uintptr_t))(Il2CppBase() + 0x1D55C18))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectExhibition*, uintptr_t))(Il2CppBase() + 0x1D55DDC))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D55F68))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D55FC8))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D56054))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D560B4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectExhibition*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D56114))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectExhibition*, uintptr_t))(Il2CppBase() + 0x1D5618C))(this, controller);
	}
	template <typename T = void> T ChangeEdge() {
		return ((T (*)(ObjectExhibition*))(Il2CppBase() + 0x1D558F8))(this);
	}
	template <typename T = uintptr_t> static T GetEnemyLevel(int32_t currentEnemyLevel, int32_t currentKillCount, int32_t goldenKillCount) {
		return ((T (*)(void *, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1D5650C))(0, currentEnemyLevel, currentKillCount, goldenKillCount);
	}
	template <typename T = void> T SetEnemyInfo(uintptr_t info, bool isLarge) {
		return ((T (*)(ObjectExhibition*, uintptr_t, bool))(Il2CppBase() + 0x1D56600))(this, info, isLarge);
	}
	template <typename T = void> T SetupLevel(int32_t level, int32_t rareLevel) {
		return ((T (*)(ObjectExhibition*, int32_t, int32_t))(Il2CppBase() + 0x1D56A5C))(this, level, rareLevel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetLevelClause(int32_t level, int32_t rareLevel) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1D56AE4))(0, level, rareLevel);
	}

};

}
