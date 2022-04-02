#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameUtil"));
	}

	template <typename T = int64_t> static T& ratio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> static T& canRandomChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SetCameraSize(uintptr_t camera, float targetSize, float duration) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x442DD24))(0, camera, targetSize, duration);
	}
	template <typename T = void> static T EnlargeCameraInController(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442DE74))(0, camera);
	}
	template <typename T = void> static T EnlargeCameraInController2(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442DEDC))(0, camera);
	}
	template <typename T = void> static T EnlargeCameraSelection1(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442DF44))(0, camera);
	}
	template <typename T = void> static T EnlargeCameraSelection2(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442DFAC))(0, camera);
	}
	template <typename T = void> static T NarrowCamera(uintptr_t camera) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442E014))(0, camera);
	}
	template <typename T = int32_t> static T GenerateRandomSeedNumber() {
		return ((T (*)(void *))(Il2CppBase() + 0x442E080))(0);
	}
	template <typename T = bool> static T IsMultiGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x442E148))(0);
	}
	template <typename T = bool> static T IsSingleGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x442C8C8))(0);
	}
	template <typename T = bool> static T InMultiGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x442BFD0))(0);
	}
	template <typename T = bool> static T IsSingleGameOrHeroRoomMultiGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x442E27C))(0);
	}
	template <typename T = bool> static T MultiGameInHeroRoom() {
		return ((T (*)(void *))(Il2CppBase() + 0x442E31C))(0);
	}
	template <typename T = bool> static T get_InGameScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x442E3BC))(0);
	}
	template <typename T = Il2CppString*> static T GetHourMinSecStr(int32_t time) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x442E444))(0, time);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTargetBezier(Il2CppVector2 targetPos, Il2CppVector2 curObjPos, int32_t maxPointCount) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, int32_t))(Il2CppBase() + 0x442E588))(0, targetPos, curObjPos, maxPointCount);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTargetBezier_1(uintptr_t target, uintptr_t curObj, int32_t maxPointCount) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x442EB3C))(0, target, curObj, maxPointCount);
	}
	template <typename T = Il2CppVector2> static T CalculateCubicBezierPoint2(float t, Il2CppVector2 p0, Il2CppVector2 p1, Il2CppVector2 p2, Il2CppVector2 p3) {
		return ((T (*)(void *, float, Il2CppVector2, Il2CppVector2, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x442E950))(0, t, p0, p1, p2, p3);
	}
	template <typename T = void> static T CameraShake(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x442EC84))(0, level);
	}
	template <typename T = void> static T RaseTriggerSuccess(uintptr_t type, uintptr_t targerTF) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x442EE28))(0, type, targerTF);
	}
	template <typename T = void> static T PlayerPickUpWeapon(Il2CppString* weaponName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x442EF34))(0, weaponName);
	}
	template <typename T = bool> static T HasFactor(uintptr_t factor) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x442F1FC))(0, factor);
	}
	template <typename T = bool> static T NotNeedDropMat() {
		return ((T (*)(void *))(Il2CppBase() + 0x442F278))(0);
	}
	template <typename T = bool> static T NeedShowMiniMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x442F2E8))(0);
	}
	template <typename T = bool> static T NeedCheckTask() {
		return ((T (*)(void *))(Il2CppBase() + 0x442F364))(0);
	}
	template <typename T = bool> static T CanAddBuff() {
		return ((T (*)(void *))(Il2CppBase() + 0x442F3E0))(0);
	}
	template <typename T = bool> static T CanRebornTwice() {
		return ((T (*)(void *))(Il2CppBase() + 0x442F65C))(0);
	}
	template <typename T = void> static T GetBezierPoint(Il2CppVector3 sourcePoint, Il2CppVector3 targetPoint, float range, uintptr_t* p2, uintptr_t* p3, uintptr_t random) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, float, uintptr_t*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x442F708))(0, sourcePoint, targetPoint, range, p2, p3, random);
	}
	template <typename T = void> static T GetBezierCurve(Il2CppVector3 p1, Il2CppVector3 p2, Il2CppVector3 p3, Il2CppVector3 p4, int32_t resolution, Il2CppArray<uintptr_t>* resultPoints, int32_t pointStartIndex) {
		return ((T (*)(void *, Il2CppVector3, Il2CppVector3, Il2CppVector3, Il2CppVector3, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x442FAB4))(0, p1, p2, p3, p4, resolution, resultPoints, pointStartIndex);
	}
	template <typename T = bool> static T NotNullAndContainsKey(Il2CppDictionary<uintptr_t, uintptr_t>* dictionary, uintptr_t key) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = bool> static T InMainCam(Il2CppVector3 worldPos) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x442FDB0))(0, worldPos);
	}
	template <typename T = int64_t> static T GenGameId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4430034))(0);
	}
	template <typename T = bool> static T HasShieldIce(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44300D0))(0, data);
	}
	template <typename T = bool> static T NeedConsumeMaterial(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4430300))(0, data);
	}
	template <typename T = bool> static T IsBattleDataStatisticDataSameGameId(uintptr_t savePlace) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4430660))(0, savePlace);
	}
	template <typename T = void> static T ConsumeBattleDataRecordInfos() {
		return ((T (*)(void *))(Il2CppBase() + 0x4430848))(0);
	}
	template <typename T = void> static T CopyToClipboard(Il2CppString* content) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44319B0))(0, content);
	}
	template <typename T = Il2CppString*> static T GetClipboardContent() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431A14))(0);
	}
	template <typename T = bool> static T IsRemoteGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431A6C))(0);
	}
	template <typename T = bool> static T IsLocalMultiGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431B38))(0);
	}
	template <typename T = Il2CppString*> static T GetGameType() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431C04))(0);
	}
	template <typename T = bool> static T InBattleState() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431CB0))(0);
	}
	template <typename T = bool> static T CompleteNewPlayertoturial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431DCC))(0);
	}
	template <typename T = bool> static T CompleteChooseKnightToturial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431E94))(0);
	}
	template <typename T = bool> static T CompleteAdvTutorial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4431F5C))(0);
	}
	template <typename T = bool> static T NeedNewPlayerTutorial() {
		return ((T (*)(void *))(Il2CppBase() + 0x443201C))(0);
	}
	template <typename T = bool> static T CompleteChangeSkin() {
		return ((T (*)(void *))(Il2CppBase() + 0x4432148))(0);
	}
	template <typename T = bool> static T CompleteUseTicket() {
		return ((T (*)(void *))(Il2CppBase() + 0x4432208))(0);
	}
	template <typename T = void> static T SetNewPlayerFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x44322C8))(0);
	}
	template <typename T = bool> static T InFirstTutorial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4432540))(0);
	}
	template <typename T = bool> static T InAdvTutorial() {
		return ((T (*)(void *))(Il2CppBase() + 0x4432600))(0);
	}
	template <typename T = bool> static T InTutorial() {
		return ((T (*)(void *))(Il2CppBase() + 0x44326C0))(0);
	}
	template <typename T = int32_t> static T GetPerLevelCount(uintptr_t mode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x443272C))(0, mode);
	}
	template <typename T = bool> static T IsNeedEmptyChest(uintptr_t chestTransform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4432794))(0, chestTransform);
	}
	template <typename T = bool> static T AlwaysCritical() {
		return ((T (*)(void *))(Il2CppBase() + 0x443291C))(0);
	}
	template <typename T = bool> static T IsTransformWeapon(Il2CppString* weaponName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4432AA0))(0, weaponName);
	}
	template <typename T = bool> static T TryParseTransformWeaponPlayerIdx(Il2CppString* transformWeaponName, uintptr_t* playerIdx) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x4432B40))(0, transformWeaponName, playerIdx);
	}
	template <typename T = bool> static T IsEnvoy(int32_t playerIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4430248))(0, playerIdx);
	}
	template <typename T = Il2CppList<int32_t>*> static T GetRandomChars() {
		return ((T (*)(void *))(Il2CppBase() + 0x4432D24))(0);
	}
	template <typename T = uintptr_t> static T CreateWeaponInBattleData(uintptr_t weapon) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4432E7C))(0, weapon);
	}
	template <typename T = bool> static T CanRebornByBlessing(int32_t pIdx) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4433104))(0, pIdx);
	}
	template <typename T = void> static T DetectRoomAndWarn() {
		return ((T (*)(void *))(Il2CppBase() + 0x443323C))(0);
	}
	template <typename T = Il2CppString*> static T GetDeviceId(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4433524))(0, key);
	}
	template <typename T = Il2CppString*> static T GetDeviceId_1(Il2CppString* deviceId, Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44335D0))(0, deviceId, key);
	}
	template <typename T = bool> static T IsSpecialWeaponToken(Il2CppString* ticketName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x44337FC))(0, ticketName);
	}
	template <typename T = bool> static T HasNewPlayerPkgContent() {
		return ((T (*)(void *))(Il2CppBase() + 0x44339BC))(0);
	}

};

}
