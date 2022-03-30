#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceNailGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceNailGenerator"));
	}

	template <typename T = uintptr_t> T& mapManagerLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& iceCaveConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _lastTriggerNailTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _rooms() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _roomRelease() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _aisleRelease() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _neighbourAisleRelease() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _neighbourRoomRelease() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& EmAre2DirectionDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _explodeAreaReverseDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& createdFishingSpotCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_RandomObject() {
		return ((T (*)(IceNailGenerator*))(Il2CppBase() + 0x19C06FC))(this);
	}
	template <typename T = void> T AfterRoomCreated() {
		return ((T (*)(IceNailGenerator*))(Il2CppBase() + 0x19C0764))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(IceNailGenerator*))(Il2CppBase() + 0x19C08B0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IceNailGenerator*))(Il2CppBase() + 0x19C09D4))(this);
	}
	template <typename T = void> T ReleaseBullet(float currentTime, uintptr_t releaseQueue) {
		return ((T (*)(IceNailGenerator*, float, uintptr_t))(Il2CppBase() + 0x19C0A78))(this, currentTime, releaseQueue);
	}
	template <typename T = void> T RefreshTimeOnStart(uintptr_t queue) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C0F24))(this, queue);
	}
	template <typename T = void> T OnExplodeStart(uintptr_t eventBase) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C1068))(this, eventBase);
	}
	template <typename T = void> T ForceReleaseNail(Il2CppVector3 position, bool isSmallExplode) {
		return ((T (*)(IceNailGenerator*, Il2CppVector3, bool))(Il2CppBase() + 0x19C1708))(this, position, isSmallExplode);
	}
	template <typename T = void> T OnExplodeStartLocal(uintptr_t explodeEvent) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C127C))(this, explodeEvent);
	}
	template <typename T = void> T TryCreateFishingSpot(Il2CppVector3 pos) {
		return ((T (*)(IceNailGenerator*, Il2CppVector3))(Il2CppBase() + 0x19C1B08))(this, pos);
	}
	template <typename T = bool> T CanAddNail(uintptr_t explodeStartEvent) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C1604))(this, explodeStartEvent);
	}
	template <typename T = bool> T IsExplodeSuitable(uintptr_t explodeStartEvent) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C13E8))(this, explodeStartEvent);
	}
	template <typename T = void> T AddNail(uintptr_t eventBase) {
		return ((T (*)(IceNailGenerator*, uintptr_t))(Il2CppBase() + 0x19C236C))(this, eventBase);
	}
	template <typename T = void> T AddNail_1(Il2CppVector3 explodePosition, bool isSmallExplode) {
		return ((T (*)(IceNailGenerator*, Il2CppVector3, bool))(Il2CppBase() + 0x19C17B4))(this, explodePosition, isSmallExplode);
	}
	template <typename T = void> T AddNailInRoom(uintptr_t room, bool isSmallExplode, void* releaseQueue) {
		return ((T (*)(IceNailGenerator*, uintptr_t, bool, void*))(Il2CppBase() + 0x19C2608))(this, room, isSmallExplode, releaseQueue);
	}
	template <typename T = void> T AddNailInRect(Il2CppVector3 centerPosition, int32_t width, int32_t height, bool isSmallExplode, void* releaseQueue) {
		return ((T (*)(IceNailGenerator*, Il2CppVector3, int32_t, int32_t, bool, void*))(Il2CppBase() + 0x19C2A08))(this, centerPosition, width, height, isSmallExplode, releaseQueue);
	}
	template <typename T = uintptr_t> T GetNeighbourRoom(uintptr_t room, uintptr_t explodeArea) {
		return ((T (*)(IceNailGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C2D44))(this, room, explodeArea);
	}
	template <typename T = uintptr_t> T GetExplodeRoom(Il2CppVector3 explodePosition) {
		return ((T (*)(IceNailGenerator*, Il2CppVector3))(Il2CppBase() + 0x19C2134))(this, explodePosition);
	}
	template <typename T = uintptr_t> static T GetExplodeArea(Il2CppVector3 explodePosition, uintptr_t explodeRoom) {
		return ((T (*)(void *, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x19C24D4))(0, explodePosition, explodeRoom);
	}
	template <typename T = bool> static T TryGetAreaRect(uintptr_t explodeArea, uintptr_t room, uintptr_t* centerPosition, uintptr_t* width, uintptr_t* height) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x19C27C8))(0, explodeArea, room, centerPosition, width, height);
	}

};

}
