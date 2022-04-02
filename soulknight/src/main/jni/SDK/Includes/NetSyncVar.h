#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetSyncVar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetSyncVar"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& sample_random_seed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& map_random_seed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& last_sample_random_seed() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& last_map_random_seed() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x445C8FC))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445CACC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445CB28))(this);
	}
	template <typename T = void> T OnStartServer() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445CC54))(this);
	}
	template <typename T = void> T UpdateSampleRandomSeed() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445CCB0))(this);
	}
	template <typename T = void> T UpdateMapRandomSeed() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445CEE8))(this);
	}
	template <typename T = void> T OnSampleRandomSeedChange(int32_t value) {
		return ((T (*)(NetSyncVar*, int32_t))(Il2CppBase() + 0x445D120))(this, value);
	}
	template <typename T = void> T OnMapRandomSeedChange(int32_t value) {
		return ((T (*)(NetSyncVar*, int32_t))(Il2CppBase() + 0x445D268))(this, value);
	}
	template <typename T = void> T MirrorProcessed() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445D418))(this);
	}
	template <typename T = int32_t> T get_Networksample_random_seed() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445D474))(this);
	}
	template <typename T = void> T set_Networksample_random_seed(int32_t value) {
		return ((T (*)(NetSyncVar*, int32_t))(Il2CppBase() + 0x445CE04))(this, value);
	}
	template <typename T = int32_t> T get_Networkmap_random_seed() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445D4D4))(this);
	}
	template <typename T = void> T set_Networkmap_random_seed(int32_t value) {
		return ((T (*)(NetSyncVar*, int32_t))(Il2CppBase() + 0x445D03C))(this, value);
	}
	template <typename T = bool> T OnSerialize(uintptr_t writer, bool forceAll) {
		return ((T (*)(NetSyncVar*, uintptr_t, bool))(Il2CppBase() + 0x445D534))(this, writer, forceAll);
	}
	template <typename T = void> T OnDeserialize(uintptr_t reader, bool initialState) {
		return ((T (*)(NetSyncVar*, uintptr_t, bool))(Il2CppBase() + 0x445D700))(this, reader, initialState);
	}
	template <typename T = void> T iFixBaseProxy_OnStartServer() {
		return ((T (*)(NetSyncVar*))(Il2CppBase() + 0x445D884))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnSerialize(uintptr_t P0, bool P1) {
		return ((T (*)(NetSyncVar*, uintptr_t, bool))(Il2CppBase() + 0x445D88C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnDeserialize(uintptr_t P0, bool P1) {
		return ((T (*)(NetSyncVar*, uintptr_t, bool))(Il2CppBase() + 0x445D898))(this, P0, P1);
	}

};

}
