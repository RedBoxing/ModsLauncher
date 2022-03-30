#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.SavedGame {

class ISavedGameMetadata
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.SavedGame", "ISavedGameMetadata"));
	}


	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Filename() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_CoverImageURL() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_TotalTimePlayed() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_LastModifiedTimestamp() {
		return ((T (*)(ISavedGameMetadata*))(Il2CppBase() + 0x0))(this);
	}

};

}
