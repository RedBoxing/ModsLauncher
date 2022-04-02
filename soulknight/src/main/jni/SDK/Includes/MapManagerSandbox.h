#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerSandbox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerSandbox"));
	}

	template <typename T = uintptr_t> T& mapSize() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& floorTileId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& floorTile() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& floorTileHorizontal() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& floorTileVerticle() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& floorTileCross() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& startPointProto() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& startPoint() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& floorRoot() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = bool> T get_hasChanged() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E4F08))(this);
	}
	template <typename T = void> T set_hasChanged(bool value) {
		return ((T (*)(MapManagerSandbox*, bool))(Il2CppBase() + 0x41E4F94))(this, value);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41E5038))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E50F8))(this);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(MapManagerSandbox*, int32_t))(Il2CppBase() + 0x41E5380))(this, seed);
	}
	template <typename T = void> T InitCamera() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E5474))(this);
	}
	template <typename T = void> T SetUpMapSetting() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E5418))(this);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E5530))(this);
	}
	template <typename T = void> T SetMapIndex(int32_t mapIndex) {
		return ((T (*)(MapManagerSandbox*, int32_t))(Il2CppBase() + 0x41E60E8))(this, mapIndex);
	}
	template <typename T = void> T CreateTips() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E6174))(this);
	}
	template <typename T = void> T RefreshFloor(int32_t tileId) {
		return ((T (*)(MapManagerSandbox*, int32_t))(Il2CppBase() + 0x41E573C))(this, tileId);
	}
	template <typename T = void> T RefreshStartPoint(uintptr_t newStartPoint) {
		return ((T (*)(MapManagerSandbox*, uintptr_t))(Il2CppBase() + 0x41E5E0C))(this, newStartPoint);
	}
	template <typename T = void> T CreateWall() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E5DB0))(this);
	}
	template <typename T = void> T CreateSanboxObject() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E5ACC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetRGRandomSeed(int32_t P0) {
		return ((T (*)(MapManagerSandbox*, int32_t))(Il2CppBase() + 0x41E6360))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_InitCamera() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E6368))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerSandbox*))(Il2CppBase() + 0x41E6370))(this);
	}

};

}
