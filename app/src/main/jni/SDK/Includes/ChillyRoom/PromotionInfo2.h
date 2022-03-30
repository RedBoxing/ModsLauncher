#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class PromotionInfo2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "PromotionInfo2"));
	}

	template <typename T = int32_t> T& serializeVersion() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& gameInfos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& specifiedPromoMan() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& offsetPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& deltaPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& new_player_show_promo_count() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& common_player_show_promo_count() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E676B0))(0);
	}
	template <typename T = bool> static T get_promoteFileExist() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E67788))(0);
	}
	template <typename T = uintptr_t> T GetPromotionInfoByGameId(Il2CppString* gameId) {
		return ((T (*)(PromotionInfo2*, Il2CppString*))(Il2CppBase() + 0x1E67840))(this, gameId);
	}
	template <typename T = uintptr_t> T GetPromotionInfoByMailId(int32_t emailId) {
		return ((T (*)(PromotionInfo2*, int32_t))(Il2CppBase() + 0x1E679C8))(this, emailId);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ParseInfo(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E67B44))(0, path);
	}
	template <typename T = void> static T SetPromotionInfo2(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E67BE0))(0, info);
	}
	template <typename T = void> static T SetPromotionInfo2Path(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1E67C74))(0, path);
	}

};

}
