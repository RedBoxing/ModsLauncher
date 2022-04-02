#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesUserProfile"));
	}

	template <typename T = Il2CppString*> T& mDisplayName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mPlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mAvatarUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mImageLoading() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T ResetIdentity(Il2CppString* displayName, Il2CppString* playerId, Il2CppString* avatarUrl) {
		return ((T (*)(PlayGamesUserProfile*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4615490))(this, displayName, playerId, avatarUrl);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x46151A0))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x4615680))(this);
	}
	template <typename T = bool> T get_isFriend() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461BC80))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461BCE0))(this);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461BD40))(this);
	}
	template <typename T = Il2CppString*> T get_AvatarURL() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461BEB8))(this);
	}
	template <typename T = uintptr_t> T LoadImage() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461BF18))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PlayGamesUserProfile*, uintptr_t))(Il2CppBase() + 0x461BFF8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461C14C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461C248))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(PlayGamesUserProfile*, uintptr_t))(Il2CppBase() + 0x461C2DC))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461C2E4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x461C2EC))(this);
	}

};

}
