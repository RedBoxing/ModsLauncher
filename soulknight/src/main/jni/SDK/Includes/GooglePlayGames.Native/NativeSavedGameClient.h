#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class NativeSavedGameClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "NativeSavedGameClient"));
	}

	template <typename T = uintptr_t> static T& ValidFilenameRegex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSnapshotManager() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T OpenWithAutomaticConflictResolution(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(NativeSavedGameClient*, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x28315F4))(this, filename, source, resolutionStrategy, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T OpenWithAutomaticConflictResolution_1(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, void* completedCallback) {
		return ((T (*)(NativeSavedGameClient*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2831D24))(this, filename, source, resolutionStrategy, completedCallback);
	}
	template <typename T = uintptr_t> T ToOnGameThread(uintptr_t conflictCallback) {
		return ((T (*)(NativeSavedGameClient*, uintptr_t))(Il2CppBase() + 0x28318DC))(this, conflictCallback);
	}
	template <typename T = void> T OpenWithManualConflictResolution(Il2CppString* filename, uintptr_t source, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(NativeSavedGameClient*, Il2CppString*, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x2831DDC))(this, filename, source, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T InternalOpen(Il2CppString* filename, uintptr_t source, uintptr_t resolutionStrategy, bool prefetchDataOnConflict, uintptr_t conflictCallback, void* completedCallback) {
		return ((T (*)(NativeSavedGameClient*, Il2CppString*, uintptr_t, uintptr_t, bool, uintptr_t, void*))(Il2CppBase() + 0x2831AA4))(this, filename, source, resolutionStrategy, prefetchDataOnConflict, conflictCallback, completedCallback);
	}
	template <typename T = void> T ReadBinaryData(uintptr_t metadata, void* completedCallback) {
		return ((T (*)(NativeSavedGameClient*, uintptr_t, void*))(Il2CppBase() + 0x2832104))(this, metadata, completedCallback);
	}
	template <typename T = void> T ShowSelectSavedGameUI(Il2CppString* uiTitle, uint32_t maxDisplayedSavedGames, bool showCreateSaveUI, bool showDeleteSaveUI, void* callback) {
		return ((T (*)(NativeSavedGameClient*, Il2CppString*, uint32_t, bool, bool, void*))(Il2CppBase() + 0x2832398))(this, uiTitle, maxDisplayedSavedGames, showCreateSaveUI, showDeleteSaveUI, callback);
	}
	template <typename T = void> T CommitUpdate(uintptr_t metadata, uintptr_t updateForMetadata, Il2CppArray<uintptr_t>* updatedBinaryData, void* callback) {
		return ((T (*)(NativeSavedGameClient*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x2832600))(this, metadata, updateForMetadata, updatedBinaryData, callback);
	}
	template <typename T = void> T FetchAllSavedGames(uintptr_t source, void* callback) {
		return ((T (*)(NativeSavedGameClient*, uintptr_t, void*))(Il2CppBase() + 0x2832B30))(this, source, callback);
	}
	template <typename T = void> T Delete(uintptr_t metadata) {
		return ((T (*)(NativeSavedGameClient*, uintptr_t))(Il2CppBase() + 0x2832D04))(this, metadata);
	}
	template <typename T = bool> static T IsValidFilename(Il2CppString* filename) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x28319CC))(0, filename);
	}
	template <typename T = uintptr_t> static T AsConflictPolicy(uintptr_t strategy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2832E54))(0, strategy);
	}
	template <typename T = uintptr_t> static T AsRequestStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2832F64))(0, status);
	}
	template <typename T = uintptr_t> static T AsDataSource(uintptr_t source) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2831FE8))(0, source);
	}
	template <typename T = uintptr_t> static T AsRequestStatus_1(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2833080))(0, status);
	}
	template <typename T = uintptr_t> static T AsUIStatus(uintptr_t uiStatus) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2833214))(0, uiStatus);
	}
	template <typename T = uintptr_t> static T AsMetadataChange(uintptr_t update) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2832958))(0, update);
	}
	template <typename T = void*> static T ToOnGameThread_1(void* toConvert) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, toConvert);
	}

};

}
