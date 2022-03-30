#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MessageManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MessageManager"));
	}

	template <typename T = uintptr_t> T& msg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& sendHeartTimestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& svrHeartTimestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& checkingNextScene() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41E7C34))(this);
	}
	template <typename T = void> T RegisterMsgHandler(void* handler, bool includeClient, bool includeSvr, bool includeSvrClient) {
		return ((T (*)(MessageManager*, void*, bool, bool, bool))(Il2CppBase() + 0x0))(this, handler, includeClient, includeSvr, includeSvrClient);
	}
	template <typename T = void> T RegisterMsgHandler_1(void* handler, bool includeClient, bool includeSvr, bool includeSvrClient) {
		return ((T (*)(MessageManager*, void*, bool, bool, bool))(Il2CppBase() + 0x0))(this, handler, includeClient, includeSvr, includeSvrClient);
	}
	template <typename T = void> T SvrRegisterMsgHandler(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T SvrRegisterMsgHandler_1(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T OtherClientRegisterMsgHandler(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T OtherClientRegisterMsgHandler_1(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T AllClientReigsterMsgHandler(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T AllClientReigsterMsgHandler_1(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T SvrOtherClientRegisterMsgHandler(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T SvrOtherClientRegisterMsgHandler_1(void* handler) {
		return ((T (*)(MessageManager*, void*))(Il2CppBase() + 0x0))(this, handler);
	}
	template <typename T = void> T SvrSendToAllPlayer(uintptr_t msg, bool includeSvrClient) {
		return ((T (*)(MessageManager*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, msg, includeSvrClient);
	}
	template <typename T = void> T SvrSendToPlayer(uintptr_t ctrl, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, ctrl, msg);
	}
	template <typename T = void> T SendToOtherClientPlayer(uintptr_t msg, int32_t excludeConnId, bool includeSvrClient) {
		return ((T (*)(MessageManager*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x0))(this, msg, excludeConnId, includeSvrClient);
	}
	template <typename T = void> T SendSampleSeedMessage() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41E8FEC))(this);
	}
	template <typename T = void> T GetSampleSeedMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41E91C4))(this, msg);
	}
	template <typename T = void> T SendRandomSeedMessage(int32_t _transformNetId, int32_t _seed, int32_t _netId) {
		return ((T (*)(MessageManager*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41E9364))(this, _transformNetId, _seed, _netId);
	}
	template <typename T = void> T GetRandomSeedMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41E947C))(this, _msg);
	}
	template <typename T = void> T SendEnemyPositionMessage(int32_t transformId, Il2CppVector2 position, Il2CppVector2 move_direction, Il2CppVector2 force_direction, float inertial) {
		return ((T (*)(MessageManager*, int32_t, Il2CppVector2, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x41E95FC))(this, transformId, position, move_direction, force_direction, inertial);
	}
	template <typename T = void> T GetEnemyPositionMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41E9794))(this, _msg);
	}
	template <typename T = void> T SendEnemyForceMessage(int32_t transformId, float inertial, Il2CppVector2 dir) {
		return ((T (*)(MessageManager*, int32_t, float, Il2CppVector2))(Il2CppBase() + 0x41E9B0C))(this, transformId, inertial, dir);
	}
	template <typename T = void> T GetEnemyForceMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41E9C3C))(this, _msg);
	}
	template <typename T = void> T SendRoomStartMessage(int32_t transformNetId, Il2CppVector2 position) {
		return ((T (*)(MessageManager*, int32_t, Il2CppVector2))(Il2CppBase() + 0x41E9E14))(this, transformNetId, position);
	}
	template <typename T = void> T GetRoomStartMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EA020))(this, _msg);
	}
	template <typename T = void> T SendRoomClearMessage(int32_t transformNetId) {
		return ((T (*)(MessageManager*, int32_t))(Il2CppBase() + 0x41EA254))(this, transformNetId);
	}
	template <typename T = void> T GetRoomClearMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EA3B4))(this, _msg);
	}
	template <typename T = void> T SendPositionMessage(int32_t _transformNetId, Il2CppVector3 _position) {
		return ((T (*)(MessageManager*, int32_t, Il2CppVector3))(Il2CppBase() + 0x41EA5E8))(this, _transformNetId, _position);
	}
	template <typename T = void> T GetPositionMessage(uintptr_t conn, uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EA728))(this, conn, _msg);
	}
	template <typename T = void> T SendHurtEnemyMessage(int32_t _transformNetId, int32_t _damage) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EA964))(this, _transformNetId, _damage);
	}
	template <typename T = void> T GetHurtEnemyMessage(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EAAE4))(this, conn, msg);
	}
	template <typename T = void> T SendSelectBuffMessage(int32_t value, int32_t gridNum) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EAC60))(this, value, gridNum);
	}
	template <typename T = void> T GetSelectBuffMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EAD58))(this, msg);
	}
	template <typename T = void> T SendReqRandomSeedMessage(int32_t _transformNetId, int32_t _netId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EAE48))(this, _transformNetId, _netId);
	}
	template <typename T = void> T GetReqRandomSeedMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EAFB8))(this, msg);
	}
	template <typename T = void> T SendRebornMessage(int32_t _tranformNetId, bool _value) {
		return ((T (*)(MessageManager*, int32_t, bool))(Il2CppBase() + 0x41EB41C))(this, _tranformNetId, _value);
	}
	template <typename T = void> T SVrGetRebronMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EB534))(this, msg);
	}
	template <typename T = void> T GetRebornMessage(uintptr_t conn, uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EB5E0))(this, conn, _msg);
	}
	template <typename T = void> T SendHeartMessage() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41EB778))(this);
	}
	template <typename T = void> T SvrGetHeartMessage(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EB8C4))(this, conn, msg);
	}
	template <typename T = void> T GetHeartMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EB984))(this, msg);
	}
	template <typename T = void> T SendCliendReadyToTargetScence(Il2CppString* targetScene) {
		return ((T (*)(MessageManager*, Il2CppString*))(Il2CppBase() + 0x41EBB3C))(this, targetScene);
	}
	template <typename T = void> T OnCliendReadyToTargetScence(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EBCD4))(this, conn, msg);
	}
	template <typename T = uintptr_t> T CheckingNextScenePlayer(Il2CppString* targetScene) {
		return ((T (*)(MessageManager*, Il2CppString*))(Il2CppBase() + 0x41EC054))(this, targetScene);
	}
	template <typename T = void> T SendItemTriggerMessage(int32_t _transformNetId, int32_t netId, Il2CppString* ext_info) {
		return ((T (*)(MessageManager*, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x41EC160))(this, _transformNetId, netId, ext_info);
	}
	template <typename T = void> T GetItemTriggerMessage(uintptr_t conn, uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EC7D8))(this, conn, _msg);
	}
	template <typename T = void> T SendUseItemMessage(int32_t _transformNetId, int32_t netId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EC92C))(this, _transformNetId, netId);
	}
	template <typename T = void> T GetUseItemMessage(uintptr_t conn, uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41ECF00))(this, conn, _msg);
	}
	template <typename T = void> T SendClientNetTransformNotReady(uintptr_t conn, int32_t transformId) {
		return ((T (*)(MessageManager*, uintptr_t, int32_t))(Il2CppBase() + 0x41ED030))(this, conn, transformId);
	}
	template <typename T = void> T GetClientNetTransformNotReady(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41ED11C))(this, msg);
	}
	template <typename T = void> T SendItemTriggerResult(uintptr_t conn, int32_t _transformNetId, int32_t netId, Il2CppString* ext_info) {
		return ((T (*)(MessageManager*, uintptr_t, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x41EC390))(this, conn, _transformNetId, netId, ext_info);
	}
	template <typename T = void> T SendUseItemResult(uintptr_t conn, int32_t _transformNetId, int32_t netId) {
		return ((T (*)(MessageManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x41ECB44))(this, conn, _transformNetId, netId);
	}
	template <typename T = void> T GetItemTriggerResult(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41ED3B0))(this, msg);
	}
	template <typename T = void> T GetUseItemResult(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41ED670))(this, msg);
	}
	template <typename T = void> T SendGameFail() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41ED914))(this);
	}
	template <typename T = void> T GetGameFail(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EDA18))(this, msg);
	}
	template <typename T = void> T SendDeadMessage(int32_t _transformId, int32_t _killerId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EDAF8))(this, _transformId, _killerId);
	}
	template <typename T = void> T GetDeadMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EDF28))(this, _msg);
	}
	template <typename T = void> T HandleDead(int32_t transformId, int32_t killerId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EDC98))(this, transformId, killerId);
	}
	template <typename T = void> T SendMercenaryPickWeapon(int32_t mercenaryId, int32_t weaponId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EE05C))(this, mercenaryId, weaponId);
	}
	template <typename T = void> T GetMercenaryPickWeapon(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EE3F0))(this, msg);
	}
	template <typename T = void> T ProcessMercenaryPickWeapon(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EE1E8))(this, msg);
	}
	template <typename T = void> T SendCustomMessage(int32_t transformId, Il2CppString* methodName) {
		return ((T (*)(MessageManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x41EE514))(this, transformId, methodName);
	}
	template <typename T = void> T GetCustomMessage(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EE6F4))(this, _msg);
	}
	template <typename T = void> T SendEnemyAttack(int32_t transformId, int32_t atkIndex) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41EE894))(this, transformId, atkIndex);
	}
	template <typename T = void> T GetEnemyAttack(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EEC48))(this, msg);
	}
	template <typename T = void> T ProcessEnemyAttack(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EEABC))(this, msg);
	}
	template <typename T = void> T SendNextLevel(Il2CppString* branch) {
		return ((T (*)(MessageManager*, Il2CppString*))(Il2CppBase() + 0x41EED84))(this, branch);
	}
	template <typename T = void> T GetNextLevel(uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EEFCC))(this, _msg);
	}
	template <typename T = void> T ForceDisConnect(uintptr_t conn, uintptr_t _msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EF214))(this, conn, _msg);
	}
	template <typename T = void> T SendForceDisConnect() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41EF28C))(this);
	}
	template <typename T = void> T SendSelectHero(uintptr_t hero, int32_t skinIdx, int32_t skillIdx, uint32_t netId) {
		return ((T (*)(MessageManager*, uintptr_t, int32_t, int32_t, uint32_t))(Il2CppBase() + 0x41EF35C))(this, hero, skinIdx, skillIdx, netId);
	}
	template <typename T = void> T OnSelectHero(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41EF4AC))(this, conn, msg);
	}
	template <typename T = void> T SvrSendCheckPlayerReadyStart() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41EF6D8))(this);
	}
	template <typename T = void> T SendStartGame() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41EF7EC))(this);
	}
	template <typename T = void> T GetStartGame(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41EF8FC))(this, msg);
	}
	template <typename T = void> T SendNetTransformReady(uint32_t netId, int32_t transformId) {
		return ((T (*)(MessageManager*, uint32_t, int32_t))(Il2CppBase() + 0x41F02BC))(this, netId, transformId);
	}
	template <typename T = void> T OnClientNetTrasformReady(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F03D0))(this, msg);
	}
	template <typename T = void> T SendAllClientNetTransformReady(int32_t transformId) {
		return ((T (*)(MessageManager*, int32_t))(Il2CppBase() + 0x41F05B0))(this, transformId);
	}
	template <typename T = void> T OnAllClientNetTransformReady(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0688))(this, msg);
	}
	template <typename T = void> T SendSwitchWeaponMessage(int32_t transformId, int32_t netId) {
		return ((T (*)(MessageManager*, int32_t, int32_t))(Il2CppBase() + 0x41F080C))(this, transformId, netId);
	}
	template <typename T = void> T GetSwitchWeaponCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0944))(this, msg);
	}
	template <typename T = void> T SvrGetSwitchWeaponCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0A00))(this, msg);
	}
	template <typename T = void> T SendWeaponSpecialMessage(int32_t transformId, int32_t netId, uintptr_t btnType, bool isDown) {
		return ((T (*)(MessageManager*, int32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x41F0AAC))(this, transformId, netId, btnType, isDown);
	}
	template <typename T = void> T GetWeaponSpecialCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0C00))(this, msg);
	}
	template <typename T = void> T SvrGetWeaponSpecialCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0CBC))(this, msg);
	}
	template <typename T = void> T SendSkillCmdMessage(int32_t netId, bool isDown, Il2CppVector2 playerPos, int32_t skillInfoCount, uint32_t skillReleaseCount) {
		return ((T (*)(MessageManager*, int32_t, bool, Il2CppVector2, int32_t, uint32_t))(Il2CppBase() + 0x41F0D68))(this, netId, isDown, playerPos, skillInfoCount, skillReleaseCount);
	}
	template <typename T = void> T GetSkillCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F0EE8))(this, msg);
	}
	template <typename T = void> T SvrGetSkillCmdMessage(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F0FA4))(this, conn, msg);
	}
	template <typename T = void> T SendFusionCmdMessage(int32_t transformId, int32_t netId, Il2CppList<int32_t>* weaponTfIds) {
		return ((T (*)(MessageManager*, int32_t, int32_t, Il2CppList<int32_t>*))(Il2CppBase() + 0x41F1058))(this, transformId, netId, weaponTfIds);
	}
	template <typename T = void> T GetFusionCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F11A4))(this, msg);
	}
	template <typename T = void> T SvrGetFusionCmdMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1260))(this, msg);
	}
	template <typename T = void> T SendStartEnterMultiRoom(int32_t netId) {
		return ((T (*)(MessageManager*, int32_t))(Il2CppBase() + 0x41F130C))(this, netId);
	}
	template <typename T = void> T GetStartEnterMultiRoom(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1448))(this, msg);
	}
	template <typename T = void> T SvrSendEnterMultiRoom(uintptr_t ctrl, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F1588))(this, ctrl, msg);
	}
	template <typename T = void> T SvrGetStartEnterMultiRoom(uintptr_t conn, uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F163C))(this, conn, msg);
	}
	template <typename T = void> T SendEmoticon(int32_t emoticonId, int32_t netId, int32_t seed) {
		return ((T (*)(MessageManager*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x41F1800))(this, emoticonId, netId, seed);
	}
	template <typename T = void> T GetEmoticon(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1934))(this, msg);
	}
	template <typename T = void> T SvrGetEmoticon(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1A6C))(this, msg);
	}
	template <typename T = void> T SendIceCaveNailDropMessage(Il2CppVector3 explodePosition, bool isSmallExplode, bool canRelease) {
		return ((T (*)(MessageManager*, Il2CppVector3, bool, bool))(Il2CppBase() + 0x41F1B18))(this, explodePosition, isSmallExplode, canRelease);
	}
	template <typename T = void> T GetIceCaveNailDropMessage(uintptr_t iceCaveNailDropMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1C6C))(this, iceCaveNailDropMessage);
	}
	template <typename T = void> T SendSwampSpawnMushroomMessage(int32_t index, Il2CppVector3 position) {
		return ((T (*)(MessageManager*, int32_t, Il2CppVector3))(Il2CppBase() + 0x41F1DB0))(this, index, position);
	}
	template <typename T = void> T GetSwampSpawnMushroomMessage(uintptr_t message) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F1ED4))(this, message);
	}
	template <typename T = void> T SendHiddenLevelBuffMessage(uintptr_t factor, Il2CppString* customContent) {
		return ((T (*)(MessageManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x41F1FC4))(this, factor, customContent);
	}
	template <typename T = void> T GetHiddenLevelBuffMessage(uintptr_t hiddenLevelBuffMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F20BC))(this, hiddenLevelBuffMessage);
	}
	template <typename T = void> T SvrGetRelicEntranceMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F21DC))(this, relicEntranceMessage);
	}
	template <typename T = void> T SendRelicEntranceMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F2288))(this, relicEntranceMessage);
	}
	template <typename T = void> T GetRelicEntranceMessage(uintptr_t relicEntranceMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F23CC))(this, relicEntranceMessage);
	}
	template <typename T = void> T SendRoomId() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41F24BC))(this);
	}
	template <typename T = void> T GetNewRoomId(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F25F8))(this, msg);
	}
	template <typename T = void> T SendKickPlayer(uintptr_t netCtrl) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F270C))(this, netCtrl);
	}
	template <typename T = void> T SendDisconnectToAll(uintptr_t type, bool includeLocalClient) {
		return ((T (*)(MessageManager*, uintptr_t, bool))(Il2CppBase() + 0x41F27E8))(this, type, includeLocalClient);
	}
	template <typename T = void> T GetKickPlayer(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F28CC))(this, msg);
	}
	template <typename T = void> T SendSetChestEmptyMessage(uintptr_t chestTransform) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F29AC))(this, chestTransform);
	}
	template <typename T = void> T GetChestEmptyMessage(uintptr_t chestEmptyMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F2AB4))(this, chestEmptyMessage);
	}
	template <typename T = void> T SendPsycheSpawnMessage(Il2CppVector3 position) {
		return ((T (*)(MessageManager*, Il2CppVector3))(Il2CppBase() + 0x41F2C58))(this, position);
	}
	template <typename T = void> T SvrGetPsycheSpawnMessage(uintptr_t psycheSpawnMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F2DDC))(this, psycheSpawnMessage);
	}
	template <typename T = void> T SvrGetNetUserDataMessage(uintptr_t userDataMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F2E88))(this, userDataMessage);
	}
	template <typename T = void> T GetPsycheSpawnMessage(uintptr_t psycheSpawnMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F3150))(this, psycheSpawnMessage);
	}
	template <typename T = void> T SendBoxDestroyMessage(uintptr_t boxTransform) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F3240))(this, boxTransform);
	}
	template <typename T = void> T SvrGetBoxDestroyMessage(uintptr_t boxDestroyMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F3420))(this, boxDestroyMessage);
	}
	template <typename T = void> T GetBoxDestroyMessage(uintptr_t boxDestroyMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F34CC))(this, boxDestroyMessage);
	}
	template <typename T = void> T SendUserDataMessage() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41F3670))(this);
	}
	template <typename T = void> T ClientGetUserDataMessage(uintptr_t userDataMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F37BC))(this, userDataMessage);
	}
	template <typename T = void> T SendSummonMessage(Il2CppString* creatureName, Il2CppVector3 position, Il2CppString* effectName, bool isServant) {
		return ((T (*)(MessageManager*, Il2CppString*, Il2CppVector3, Il2CppString*, bool))(Il2CppBase() + 0x41F3954))(this, creatureName, position, effectName, isServant);
	}
	template <typename T = void> T SvrGetSummonMessage(uintptr_t summonMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F3C08))(this, summonMessage);
	}
	template <typename T = void> static T ClientGetSummonMessage(uintptr_t summonMessage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41F3CB4))(0, summonMessage);
	}
	template <typename T = void> T SvrSendBroadCastRebornMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F40A8))(this, msg);
	}
	template <typename T = void> T ClientGetRebornMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F4154))(this, msg);
	}
	template <typename T = void> T SvrSendAllPlayerRebornMessage() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41F4308))(this);
	}
	template <typename T = void> T GetAllPlayerRebornMessage(uintptr_t msg) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F43BC))(this, msg);
	}
	template <typename T = void> T SendCommonMessage(uintptr_t message) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F4550))(this, message);
	}
	template <typename T = void> T SvrGetCommonMessage(uintptr_t conn, uintptr_t message) {
		return ((T (*)(MessageManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x41F46E4))(this, conn, message);
	}
	template <typename T = void> T GetCommonMessage(uintptr_t message) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F47A8))(this, message);
	}
	template <typename T = void> static T SendSyncBuff(uintptr_t type, uintptr_t buff, int32_t index) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x41F4898))(0, type, buff, index);
	}
	template <typename T = void> static T GetSyncBuffMessage(uintptr_t syncBuffMessage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41F49B8))(0, syncBuffMessage);
	}
	template <typename T = void> T SvrGetSyncBuff(uintptr_t syncBuffMessage) {
		return ((T (*)(MessageManager*, uintptr_t))(Il2CppBase() + 0x41F4BF4))(this, syncBuffMessage);
	}
	template <typename T = bool> T get_isSetUp() {
		return ((T (*)(MessageManager*))(Il2CppBase() + 0x41E99A8))(this);
	}

};

}
