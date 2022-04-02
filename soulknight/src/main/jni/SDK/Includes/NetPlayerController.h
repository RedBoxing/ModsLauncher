#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetPlayerController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetPlayerController"));
	}

	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& teammate_hp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& set_controller() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& d_time() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& isServerController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& battleData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& netPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& needSendEnterMultiRoom() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& bReady() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = float> static T& PosSyncRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> T& lastMovedir() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector2> T& syncPosition() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppVector3> T& syncVelocity() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& syncTargetTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& lastEnergy() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = void> T set_battleDataReady(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4443C68))(this, value);
	}
	template <typename T = bool> T get_battleDataReady() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4443CE0))(this);
	}
	template <typename T = bool> T get_IsHeartbeatTimeout() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4443D40))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4443F60))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444401C))(this);
	}
	template <typename T = void> T InitBattleData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44443CC))(this);
	}
	template <typename T = void> T InitPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44445B4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4445020))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444532C))(this);
	}
	template <typename T = void> T ReSetNetController() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444552C))(this);
	}
	template <typename T = void> T SetThisName() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4444250))(this);
	}
	template <typename T = void> T SetUpControler() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44455E8))(this);
	}
	template <typename T = void> T SetTeammateBar(uintptr_t value) {
		return ((T (*)(NetPlayerController*, uintptr_t))(Il2CppBase() + 0x4445900))(this, value);
	}
	template <typename T = void> T ReSetInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4446330))(this);
	}
	template <typename T = bool> T IsDead() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4446404))(this);
	}
	template <typename T = void> T ChangeMovementInput(uintptr_t value) {
		return ((T (*)(NetPlayerController*, uintptr_t))(Il2CppBase() + 0x4446474))(this, value);
	}
	template <typename T = void> T CmdMovementInput(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x44466BC))(this, value);
	}
	template <typename T = void> T RpcMovementInput(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x444682C))(this, value);
	}
	template <typename T = void> T RoleAtk(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444699C))(this, value);
	}
	template <typename T = void> T CmdRoleAtk(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4446AA0))(this, value);
	}
	template <typename T = void> T RpcRoleAtk(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4446BF8))(this, value);
	}
	template <typename T = void> T RoleSkill(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4446D50))(this, value);
	}
	template <typename T = void> T CmdRoleSkill(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x44470FC))(this, value);
	}
	template <typename T = void> T RpcRoleSkill(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4447254))(this, value);
	}
	template <typename T = void> T SetCctrlRandomSeed(int32_t seed) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x44473AC))(this, seed);
	}
	template <typename T = void> T LocalSkill(uintptr_t msg) {
		return ((T (*)(NetPlayerController*, uintptr_t))(Il2CppBase() + 0x4447450))(this, msg);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444760C))(this);
	}
	template <typename T = void> T CmdSwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44478D0))(this);
	}
	template <typename T = void> T RpcSwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44479F0))(this);
	}
	template <typename T = void> T LocalSwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4447B10))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x4447BA0))(this, isDown, btnType);
	}
	template <typename T = void> T CmdWeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x4447E6C))(this, isDown, btnType);
	}
	template <typename T = void> T RpcWeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x4447FDC))(this, isDown, btnType);
	}
	template <typename T = void> T LocalWeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x444814C))(this, isDown, btnType);
	}
	template <typename T = void> T CmdPlayerPosition(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x44451BC))(this, value);
	}
	template <typename T = void> T RpcPlayerPosition(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x4448204))(this, value);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4448374))(this);
	}
	template <typename T = void> T SyncTargetToOther() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44487EC))(this);
	}
	template <typename T = void> T SyncTarget(uintptr_t target) {
		return ((T (*)(NetPlayerController*, uintptr_t))(Il2CppBase() + 0x44488CC))(this, target);
	}
	template <typename T = void> T CmdTargetObject(int32_t targetId) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448994))(this, targetId);
	}
	template <typename T = void> T RpcTargetObject(int32_t targetId) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448AEC))(this, targetId);
	}
	template <typename T = void> T SetHeroHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448C44))(this, value);
	}
	template <typename T = void> T RpcSetHeroHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448EA0))(this, value);
	}
	template <typename T = void> T CmdSetHeroHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448D48))(this, value);
	}
	template <typename T = void> T SetMountHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4448FF8))(this, value);
	}
	template <typename T = void> T RpcSetMountHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4449258))(this, value);
	}
	template <typename T = void> T CmdSetMountHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4449100))(this, value);
	}
	template <typename T = void> T BroadcastEnergy() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44493B0))(this);
	}
	template <typename T = void> T SetHeroEnergy(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4449540))(this, value);
	}
	template <typename T = void> T RpcSetHeroEnergy(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4449710))(this, value);
	}
	template <typename T = void> T CmdSetHeroEnergy(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x44495B8))(this, value);
	}
	template <typename T = void> T ConfirmChoice(int32_t hero_index, int32_t ring_index, int32_t skin_index, int32_t skill_index) {
		return ((T (*)(NetPlayerController*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4449868))(this, hero_index, ring_index, skin_index, skill_index);
	}
	template <typename T = void> T CmdSetBattleData(Il2CppString* dataJson) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x44498FC))(this, dataJson);
	}
	template <typename T = void> T RpcSetBattleData(Il2CppString* dataJson) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x4449A54))(this, dataJson);
	}
	template <typename T = void> T CmdRequestData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4449BAC))(this);
	}
	template <typename T = void> T LoadNetData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4449CCC))(this);
	}
	template <typename T = void> T RequestAllData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4449F38))(this);
	}
	template <typename T = void> T BroadcastData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4449FB4))(this);
	}
	template <typename T = void> T UploadData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4444DDC))(this);
	}
	template <typename T = void> T OnGetBattleFacotr() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x44449D0))(this);
	}
	template <typename T = void> T EnterMultiRoom() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444A09C))(this);
	}
	template <typename T = void> T LoadNetPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4444D74))(this);
	}
	template <typename T = void> T UploadPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444A1A8))(this);
	}
	template <typename T = void> T CmdUpdatePlayerInfo(Il2CppString* playerInfoStr) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x444A3A0))(this, playerInfoStr);
	}
	template <typename T = void> T RpcUpdatePlayerInfo(Il2CppString* playerInfoStr) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x444A4F8))(this, playerInfoStr);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t playerInfo) {
		return ((T (*)(NetPlayerController*, uintptr_t))(Il2CppBase() + 0x444A650))(this, playerInfo);
	}
	template <typename T = void> T RequestAllPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444A324))(this);
	}
	template <typename T = void> T CmdRequestPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444A6C4))(this);
	}
	template <typename T = void> T BroadCastPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444A7E4))(this);
	}
	template <typename T = void> T SetUIInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4444890))(this);
	}
	template <typename T = Il2CppString*> T GetWeaponName(int32_t index) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x444A8CC))(this, index);
	}
	template <typename T = bool> T IsReady() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444AA00))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444AAA8))(this, pauseStatus);
	}
	template <typename T = void> T CmdBackground(bool background) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444AF4C))(this, background);
	}
	template <typename T = void> T RpcBackground(bool background) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444ADF4))(this, background);
	}
	template <typename T = void> T CmdNextLevel(bool isReady) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444B0A4))(this, isReady);
	}
	template <typename T = void> T RpcNextLevel(bool isReady) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444B1FC))(this, isReady);
	}
	template <typename T = void> T CmdCancelNextLevel() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444B354))(this);
	}
	template <typename T = void> T RpcCancelNextLevel() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444B474))(this);
	}
	template <typename T = void> T CmdGoNextLevel(bool isSpecial, Il2CppString* branchIdx) {
		return ((T (*)(NetPlayerController*, bool, Il2CppString*))(Il2CppBase() + 0x444B594))(this, isSpecial, branchIdx);
	}
	template <typename T = void> T RpcGoNextLevel(bool isSpecial, Il2CppString* branchIndex) {
		return ((T (*)(NetPlayerController*, bool, Il2CppString*))(Il2CppBase() + 0x444B704))(this, isSpecial, branchIndex);
	}
	template <typename T = void> T UpdateChar(uintptr_t hero, int32_t skinIdx, int32_t skillIdx) {
		return ((T (*)(NetPlayerController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x444B874))(this, hero, skinIdx, skillIdx);
	}
	template <typename T = void> T DoRebornCtrl() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444B934))(this);
	}
	template <typename T = void> T MirrorProcessed() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444C66C))(this);
	}
	template <typename T = bool> T get_NetworkisServerController() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444C6C8))(this);
	}
	template <typename T = void> T set_NetworkisServerController(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444C728))(this, value);
	}
	template <typename T = void> static T InvokeCmdCmdMovementInput(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444C810))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdRoleAtk(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444CB00))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdRoleSkill(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444CDCC))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdSwitchWeapon(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444D080))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdWeaponSpecial(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444D2E8))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdPlayerPosition(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444D5CC))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdTargetObject(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444D8A4))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdSetHeroHp(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444DB58))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdSetMountHp(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444DE0C))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdSetHeroEnergy(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444E0C0))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdSetBattleData(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444E374))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdRequestData(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444E6A8))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdUpdatePlayerInfo(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444ED14))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdRequestPlayerInfo(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444EFC8))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdBackground(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444F3CC))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444F680))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdCancelNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444F934))(0, obj, reader);
	}
	template <typename T = void> static T InvokeCmdCmdGoNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444FB9C))(0, obj, reader);
	}
	template <typename T = void> T CallCmdMovementInput(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x444CA64))(this, value);
	}
	template <typename T = void> T CallCmdRoleAtk(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444CD3C))(this, value);
	}
	template <typename T = void> T CallCmdRoleSkill(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444D008))(this, value);
	}
	template <typename T = void> T CallCmdSwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444D288))(this);
	}
	template <typename T = void> T CallCmdWeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x444D548))(this, isDown, btnType);
	}
	template <typename T = void> T CallCmdPlayerPosition(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x444D820))(this, value);
	}
	template <typename T = void> T CallCmdTargetObject(int32_t targetId) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x444DAE0))(this, targetId);
	}
	template <typename T = void> T CallCmdSetHeroHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x444DD94))(this, value);
	}
	template <typename T = void> T CallCmdSetMountHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x444E048))(this, value);
	}
	template <typename T = void> T CallCmdSetHeroEnergy(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x444E2FC))(this, value);
	}
	template <typename T = void> T CallCmdSetBattleData(Il2CppString* dataJson) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x444E5B0))(this, dataJson);
	}
	template <typename T = void> T CallCmdRequestData() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444E8B0))(this);
	}
	template <typename T = void> T CallCmdUpdatePlayerInfo(Il2CppString* playerInfoStr) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x444EF50))(this, playerInfoStr);
	}
	template <typename T = void> T CallCmdRequestPlayerInfo() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444F1D0))(this);
	}
	template <typename T = void> T CallCmdBackground(bool background) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444F608))(this, background);
	}
	template <typename T = void> T CallCmdNextLevel(bool isReady) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x444F8BC))(this, isReady);
	}
	template <typename T = void> T CallCmdCancelNextLevel() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x444FB3C))(this);
	}
	template <typename T = void> T CallCmdGoNextLevel(bool isSpecial, Il2CppString* branchIdx) {
		return ((T (*)(NetPlayerController*, bool, Il2CppString*))(Il2CppBase() + 0x444FDFC))(this, isSpecial, branchIdx);
	}
	template <typename T = void> static T InvokeRpcRpcMovementInput(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x444FE80))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcRoleAtk(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44501A4))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcRoleSkill(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x445049C))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcSwitchWeapon(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4450790))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcWeaponSpecial(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4450A28))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcPlayerPosition(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4450D40))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcTargetObject(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4451028))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcSetHeroHp(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4451388))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcSetMountHp(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x44517FC))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcSetHeroEnergy(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4451B80))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcSetBattleData(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4451ECC))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcUpdatePlayerInfo(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x445230C))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcBackground(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4452AD8))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4452F08))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcCancelNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4453308))(0, obj, reader);
	}
	template <typename T = void> static T InvokeRpcRpcGoNextLevel(uintptr_t obj, uintptr_t reader) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4453588))(0, obj, reader);
	}
	template <typename T = void> T CallRpcMovementInput(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x44500D4))(this, value);
	}
	template <typename T = void> T CallRpcRoleAtk(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x44503E0))(this, value);
	}
	template <typename T = void> T CallRpcRoleSkill(bool value) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x44506D8))(this, value);
	}
	template <typename T = void> T CallRpcSwitchWeapon() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4450998))(this);
	}
	template <typename T = void> T CallRpcWeaponSpecial(bool isDown, uintptr_t btnType) {
		return ((T (*)(NetPlayerController*, bool, uintptr_t))(Il2CppBase() + 0x4450C88))(this, isDown, btnType);
	}
	template <typename T = void> T CallRpcPlayerPosition(Il2CppVector2 value) {
		return ((T (*)(NetPlayerController*, Il2CppVector2))(Il2CppBase() + 0x4450F94))(this, value);
	}
	template <typename T = void> T CallRpcTargetObject(int32_t targetId) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4451264))(this, targetId);
	}
	template <typename T = void> T CallRpcSetHeroHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x44515C4))(this, value);
	}
	template <typename T = void> T CallRpcSetMountHp(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4451A38))(this, value);
	}
	template <typename T = void> T CallRpcSetHeroEnergy(int32_t value) {
		return ((T (*)(NetPlayerController*, int32_t))(Il2CppBase() + 0x4451DBC))(this, value);
	}
	template <typename T = void> T CallRpcSetBattleData(Il2CppString* dataJson) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x4452108))(this, dataJson);
	}
	template <typename T = void> T CallRpcUpdatePlayerInfo(Il2CppString* playerInfoStr) {
		return ((T (*)(NetPlayerController*, Il2CppString*))(Il2CppBase() + 0x4452548))(this, playerInfoStr);
	}
	template <typename T = void> T CallRpcBackground(bool background) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4452D14))(this, background);
	}
	template <typename T = void> T CallRpcNextLevel(bool isReady) {
		return ((T (*)(NetPlayerController*, bool))(Il2CppBase() + 0x4453144))(this, isReady);
	}
	template <typename T = void> T CallRpcCancelNextLevel() {
		return ((T (*)(NetPlayerController*))(Il2CppBase() + 0x4453510))(this);
	}
	template <typename T = void> T CallRpcGoNextLevel(bool isSpecial, Il2CppString* branchIndex) {
		return ((T (*)(NetPlayerController*, bool, Il2CppString*))(Il2CppBase() + 0x44537E8))(this, isSpecial, branchIndex);
	}
	template <typename T = bool> T OnSerialize(uintptr_t writer, bool forceAll) {
		return ((T (*)(NetPlayerController*, uintptr_t, bool))(Il2CppBase() + 0x44538D0))(this, writer, forceAll);
	}
	template <typename T = void> T OnDeserialize(uintptr_t reader, bool initialState) {
		return ((T (*)(NetPlayerController*, uintptr_t, bool))(Il2CppBase() + 0x4453A30))(this, reader, initialState);
	}
	template <typename T = bool> T iFixBaseProxy_OnSerialize(uintptr_t P0, bool P1) {
		return ((T (*)(NetPlayerController*, uintptr_t, bool))(Il2CppBase() + 0x4453B58))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnDeserialize(uintptr_t P0, bool P1) {
		return ((T (*)(NetPlayerController*, uintptr_t, bool))(Il2CppBase() + 0x4453B64))(this, P0, P1);
	}

};

}
