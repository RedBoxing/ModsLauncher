#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinController"));
	}

	template <typename T = uintptr_t> T& ready_en() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ready_cn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rank_sps() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& multi_player_views() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& destructible() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bgm() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& alreadySetState() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& AllDestroyed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& DestructibleAllDestroyed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& allDestroyed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x4377428))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x4377554))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x4377680))(this);
	}
	template <typename T = uintptr_t> T ShowTitle() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x43780B4))(this);
	}
	template <typename T = void> T ContinueGamePlayerJoin(uintptr_t e) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x4378194))(this, e);
	}
	template <typename T = void> T SetDestructibleState(uintptr_t e) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x437832C))(this, e);
	}
	template <typename T = void> T SetDestructibleState_1() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x4377E58))(this);
	}
	template <typename T = void> T Refresh(uintptr_t e) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x4378420))(this, e);
	}
	template <typename T = void> T Refresh_1(Il2CppArray<uintptr_t>* infos) {
		return ((T (*)(MultiRoomSkinController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4377B8C))(this, infos);
	}
	template <typename T = void> T SetRank(int32_t rank, uintptr_t view) {
		return ((T (*)(MultiRoomSkinController*, int32_t, uintptr_t))(Il2CppBase() + 0x4378A70))(this, rank, view);
	}
	template <typename T = void> T NoPlayer(uintptr_t player_view) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x4378B4C))(this, player_view);
	}
	template <typename T = void> T NotSelectHero(uintptr_t player_view) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x4378504))(this, player_view);
	}
	template <typename T = void> T SelectHero(uintptr_t player_view, int32_t hero_idx, int32_t skin_idx, bool is_ready) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x4378714))(this, player_view, hero_idx, skin_idx, is_ready);
	}
	template <typename T = void> T CheckIfDestroyAll(uintptr_t box) {
		return ((T (*)(MultiRoomSkinController*, uintptr_t))(Il2CppBase() + 0x4378EB4))(this, box);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MultiRoomSkinController*))(Il2CppBase() + 0x4379088))(this);
	}

};

}
