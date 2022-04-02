#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.SavedGame {

class SavedGameMetadataUpdate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.SavedGame", "SavedGameMetadataUpdate"));
	}

	template <typename T = bool> T& mDescriptionUpdated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& mNewDescription() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mCoverImageUpdated() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mNewPngCoverImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& mNewPlayedTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_IsDescriptionUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B284))(this);
	}
	template <typename T = Il2CppString*> T get_UpdatedDescription() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B28C))(this);
	}
	template <typename T = bool> T get_IsCoverImageUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B294))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UpdatedPngCoverImage() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B29C))(this);
	}
	template <typename T = bool> T get_IsPlayedTimeUpdated() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B2A4))(this);
	}
	template <typename T = void*> T get_UpdatedPlayedTime() {
		return ((T (*)(SavedGameMetadataUpdate*))(Il2CppBase() + 0x153B2AC))(this);
	}

};

}
