#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class UnsupportedSavedGamesClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "UnsupportedSavedGamesClient"));
	}

	template <typename T = Il2CppString*> T& mMessage() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OpenWithAutomaticConflictResolution(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, void* callback) {
		return ((T (*)(UnsupportedSavedGamesClient*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x460E270))(this, filename, source, resolutionStrategy, callback);
	}
	template <typename T = void> T OpenWithManualConflictResolution(Il2CppString* filename, uintptr_t source, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(UnsupportedSavedGamesClient*, Il2CppString*, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x460E354))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T ReadBinaryData(uintptr_t metadata, void* completedCallback) {
		return ((T (*)(UnsupportedSavedGamesClient*, uintptr_t, void*))(Il2CppBase() + 0x460E448))(this, metadata, completedCallback);
	}
	template <typename T = void> T ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, void* callback) {
		return ((T (*)(UnsupportedSavedGamesClient*, Il2CppString*, uint32_t, bool, bool, void*))(Il2CppBase() + 0x460E514))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename T = void> T CommitUpdate(uintptr_t metadata, uintptr_t updateForMetadata, Il2CppArray<uintptr_t>* updatedBinaryData, void* callback) {
		return ((T (*)(UnsupportedSavedGamesClient*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x460E608))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename T = void> T FetchAllSavedGames(uintptr_t source, void* callback) {
		return ((T (*)(UnsupportedSavedGamesClient*, uintptr_t, void*))(Il2CppBase() + 0x460E720))(this, source, callback);
	}
	template <typename T = void> T Delete(uintptr_t metadata) {
		return ((T (*)(UnsupportedSavedGamesClient*, uintptr_t))(Il2CppBase() + 0x460E7EC))(this, metadata);
	}

};

}
