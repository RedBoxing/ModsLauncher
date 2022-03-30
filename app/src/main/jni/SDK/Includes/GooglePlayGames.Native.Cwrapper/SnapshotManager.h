#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class SnapshotManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "SnapshotManager"));
	}


	template <typename T = void> static T SnapshotManager_FetchAll(uintptr_t self, uintptr_t data_source, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357FCD0))(0, self, data_source, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_ShowSelectUIOperation(uintptr_t self, bool allow_create, bool allow_delete, uint32_t max_snapshots, Il2CppString* title, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, bool, bool, uint32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x357FD9C))(0, self, allow_create, allow_delete, max_snapshots, title, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_Read(uintptr_t self, uintptr_t snapshot_metadata, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357FEA4))(0, self, snapshot_metadata, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_Commit(uintptr_t self, uintptr_t snapshot_metadata, uintptr_t metadata_change, Il2CppArray<uintptr_t>* data, uintptr_t data_size, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357FF70))(0, self, snapshot_metadata, metadata_change, data, data_size, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_Open(uintptr_t self, uintptr_t data_source, Il2CppString* file_name, uintptr_t conflict_policy, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3580068))(0, self, data_source, file_name, conflict_policy, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_ResolveConflict(uintptr_t self, Il2CppString* conflict_id, uintptr_t snapshot_metadata, uintptr_t metadata_change, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3580160))(0, self, conflict_id, snapshot_metadata, metadata_change, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_ResolveConflict_1(uintptr_t self, Il2CppString* conflict_id, uintptr_t snapshot_metadata, uintptr_t metadata_change, Il2CppArray<uintptr_t>* data, uintptr_t data_size, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3580258))(0, self, conflict_id, snapshot_metadata, metadata_change, data, data_size, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_ResolveConflict_2(uintptr_t self, Il2CppString* conflict_id, uintptr_t snapshot_metadata, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3580374))(0, self, conflict_id, snapshot_metadata, callback, callback_arg);
	}
	template <typename T = void> static T SnapshotManager_Delete(uintptr_t self, uintptr_t snapshot_metadata) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x358045C))(0, self, snapshot_metadata);
	}
	template <typename T = void> static T SnapshotManager_FetchAllResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580508))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_FetchAllResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35805A4))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_FetchAllResponse_GetData_Length(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580640))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_FetchAllResponse_GetData_GetElement(uintptr_t self, uintptr_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35806DC))(0, self, index);
	}
	template <typename T = void> static T SnapshotManager_OpenResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580788))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_OpenResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580824))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_OpenResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35808C0))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_OpenResponse_GetConflictId(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x358095C))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T SnapshotManager_OpenResponse_GetConflictOriginal(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580A18))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_OpenResponse_GetConflictUnmerged(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580AB4))(0, self);
	}
	template <typename T = void> static T SnapshotManager_CommitResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580B50))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_CommitResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580BEC))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_CommitResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580C88))(0, self);
	}
	template <typename T = void> static T SnapshotManager_ReadResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580D24))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_ReadResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580DC0))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_ReadResponse_GetData(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3580E5C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T SnapshotManager_SnapshotSelectUIResponse_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580F18))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_SnapshotSelectUIResponse_GetStatus(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3580FB4))(0, self);
	}
	template <typename T = uintptr_t> static T SnapshotManager_SnapshotSelectUIResponse_GetData(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3581050))(0, self);
	}

};

}
