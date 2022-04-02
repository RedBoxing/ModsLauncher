#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class PromotionGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "PromotionGameInfo"));
	}

	template <typename T = Il2CppString*> T& gameId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& adVersion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& rewardVersion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& isPublished() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& videoUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& downloadUrl() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& showCharactor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& promoText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& linkUid() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& forcePush() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& jsonType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& rewardsJson() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _rewards() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& ExtraData() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> T get_rewards() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E660D4))(this);
	}
	template <typename T = uintptr_t> T get_rewardEmail() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E661A4))(this);
	}
	template <typename T = Il2CppString*> T get_path() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E662EC))(this);
	}
	template <typename T = Il2CppString*> T get_frontImgPath() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E663A8))(this);
	}
	template <typename T = Il2CppString*> T get_backImgPath() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E66470))(this);
	}
	template <typename T = bool> T get_needShow() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E66538))(this);
	}
	template <typename T = int32_t> T get_localRewardVersion() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E666DC))(this);
	}
	template <typename T = void> T set_localRewardVersion(int32_t value) {
		return ((T (*)(PromotionGameInfo*, int32_t))(Il2CppBase() + 0x1E6677C))(this, value);
	}
	template <typename T = bool> T get_rewarded() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E665CC))(this);
	}
	template <typename T = void> T set_rewarded(bool value) {
		return ((T (*)(PromotionGameInfo*, bool))(Il2CppBase() + 0x1E66830))(this, value);
	}
	template <typename T = int32_t> T get_localAdVersion() {
		return ((T (*)(PromotionGameInfo*))(Il2CppBase() + 0x1E6663C))(this);
	}
	template <typename T = void> T set_localAdVersion(int32_t value) {
		return ((T (*)(PromotionGameInfo*, int32_t))(Il2CppBase() + 0x1E668C0))(this, value);
	}

};

}
