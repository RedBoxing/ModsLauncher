#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class SnapshotManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "SnapshotManager"));
	}

	template <typename T = uintptr_t> T& mServices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T FetchAll(uintptr_t source, void* callback) {
		return ((T (*)(SnapshotManager*, uintptr_t, void*))(Il2CppBase() + 0x2B0198C))(this, source, callback);
	}
	template <typename T = void> static T InternalFetchAllCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B0150C))(0, response, data);
	}
	template <typename T = void> T SnapshotSelectUI(bool allowCreate, bool allowDelete, uint32_t maxSnapshots, Il2CppString* uiTitle, void* callback) {
		return ((T (*)(SnapshotManager*, bool, bool, uint32_t, Il2CppString*, void*))(Il2CppBase() + 0x2B01B04))(this, allowCreate, allowDelete, maxSnapshots, uiTitle, callback);
	}
	template <typename T = void> static T InternalSnapshotSelectUICallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B015DC))(0, response, data);
	}
	template <typename T = void> T Open(Il2CppString* fileName, uintptr_t source, uintptr_t conflictPolicy, void* callback) {
		return ((T (*)(SnapshotManager*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x2B01CC8))(this, fileName, source, conflictPolicy, callback);
	}
	template <typename T = void> static T InternalOpenCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B016AC))(0, response, data);
	}
	template <typename T = void> T Commit(uintptr_t metadata, uintptr_t metadataChange, Il2CppArray<uintptr_t>* updatedData, void* callback) {
		return ((T (*)(SnapshotManager*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x2B01E8C))(this, metadata, metadataChange, updatedData, callback);
	}
	template <typename T = void> T Resolve(uintptr_t metadata, uintptr_t metadataChange, Il2CppString* conflictId, void* callback) {
		return ((T (*)(SnapshotManager*, uintptr_t, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x2B020BC))(this, metadata, metadataChange, conflictId, callback);
	}
	template <typename T = void> T Resolve_1(uintptr_t metadata, uintptr_t metadataChange, Il2CppString* conflictId, Il2CppArray<uintptr_t>* updatedData, void* callback) {
		return ((T (*)(SnapshotManager*, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x2B022D0))(this, metadata, metadataChange, conflictId, updatedData, callback);
	}
	template <typename T = void> static T InternalCommitCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B0177C))(0, response, data);
	}
	template <typename T = void> T Delete(uintptr_t metadata) {
		return ((T (*)(SnapshotManager*, uintptr_t))(Il2CppBase() + 0x2B0253C))(this, metadata);
	}
	template <typename T = void> T Read(uintptr_t metadata, void* callback) {
		return ((T (*)(SnapshotManager*, uintptr_t, void*))(Il2CppBase() + 0x2B0262C))(this, metadata, callback);
	}
	template <typename T = void> static T InternalReadCallback(uintptr_t response, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B0184C))(0, response, data);
	}

};

}
