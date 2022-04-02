#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiGameManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiGameManager"));
	}

	template <typename T = uintptr_t> static T& _inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& curGameState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& AssetsReady() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ContinueGame() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = uintptr_t> T& theRoomInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& EnterFromContinueGame() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& Lan_Game() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& JoinType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& OpenRoom() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& OpenRoomHostFirstEnter() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = float> T& multiGameStartTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& destructibleInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = double> T& latency_times() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = double> T& total_latency() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& min_latency() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& max_latency() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int64_t> T& sendHeartTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& heartBackTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& heartBack() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& raiseUpdateLatencyTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int64_t> static T& SendHeartInvert() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& startHeartbeat() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& enterMultiroomState() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& checkGameFailTimer() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = bool> static T get_UseTcpCheckHost() {
		return ((T (*)(void *))(Il2CppBase() + 0x41FB5D4))(0);
	}
	template <typename T = bool> T get_IsRunningState() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB62C))(this);
	}
	template <typename T = bool> T get_AssetsReady() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB694))(this);
	}
	template <typename T = void> T set_AssetsReady(bool value) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FB69C))(this, value);
	}
	template <typename T = bool> T get_ContinueGame() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB6A8))(this);
	}
	template <typename T = void> T set_ContinueGame(bool value) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FB6B0))(this, value);
	}
	template <typename T = bool> T get_OpenGame() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB6BC))(this);
	}
	template <typename T = void> T SetOpenGame(bool openGame) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FB734))(this, openGame);
	}
	template <typename T = bool> T IsRoomInfoNewGame() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB7B4))(this);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41FB884))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB928))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FBE5C))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FB988))(this);
	}
	template <typename T = void> T RemoveEvent() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FBEBC))(this);
	}
	template <typename T = void> T SetDistructibleInfo(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FC390))(this, e);
	}
	template <typename T = void> T OnPlayerContinueGame(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FC418))(this, e);
	}
	template <typename T = void> T OnJoinSelectRoom(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FC51C))(this, e);
	}
	template <typename T = void> T OnShowEmotion(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FC590))(this, e);
	}
	template <typename T = void> T ResetNetworkLatency() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FC86C))(this);
	}
	template <typename T = void> T OnUpdateLatency(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FC8D4))(this, e);
	}
	template <typename T = double> T GetAvgNetworkLatency() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FCAA0))(this);
	}
	template <typename T = void> T OnHeroSelect(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FCB28))(this, e);
	}
	template <typename T = void> T OnEnterHeroRoom(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FCE18))(this, e);
	}
	template <typename T = void> T OnHostEnterMultiRoom(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FD268))(this, e);
	}
	template <typename T = void> T OnEnterMultiGame(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FD2DC))(this, e);
	}
	template <typename T = void> T StartHeartBeat() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FD358))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FD3C8))(this);
	}
	template <typename T = void> T SendHeart() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FD550))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FD65C))(this);
	}
	template <typename T = void> T BuildRoom(uintptr_t roomInfo, void* failedCb) {
		return ((T (*)(MultiGameManager*, uintptr_t, void*))(Il2CppBase() + 0x41FD700))(this, roomInfo, failedCb);
	}
	template <typename T = void> T BuildRoomLan(uintptr_t roomInfo) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FD904))(this, roomInfo);
	}
	template <typename T = void> T ConnectTo(Il2CppString* svrAddr, uintptr_t roomInfo) {
		return ((T (*)(MultiGameManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41FE6C4))(this, svrAddr, roomInfo);
	}
	template <typename T = void> T ResetValue() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FE870))(this);
	}
	template <typename T = void> T ConnectToLan(Il2CppString* svrAddr, uintptr_t roomInfo) {
		return ((T (*)(MultiGameManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41FE8E0))(this, svrAddr, roomInfo);
	}
	template <typename T = void> T InitRandomSeed(bool updateRoomInfoSeed) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FE494))(this, updateRoomInfoSeed);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FED2C))(this);
	}
	template <typename T = uintptr_t> T GetRoomInfoWithBattleData(bool forceNewGame) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FEDA4))(this, forceNewGame);
	}
	template <typename T = Il2CppString*> T GetJsonRoomInfoWithBattleData(bool forceNewGame) {
		return ((T (*)(MultiGameManager*, bool))(Il2CppBase() + 0x41FEE34))(this, forceNewGame);
	}
	template <typename T = void> T GoToMultiRoom(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FEFA8))(this, e);
	}
	template <typename T = void> T AfterGotoMultiRoom() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FF4A8))(this);
	}
	template <typename T = uintptr_t> T UpdateRoomInfo(int32_t count, bool joinable, uintptr_t status) {
		return ((T (*)(MultiGameManager*, int32_t, bool, uintptr_t))(Il2CppBase() + 0x41FF650))(this, count, joinable, status);
	}
	template <typename T = void> T SendRandomSeed(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FF7B4))(this, e);
	}
	template <typename T = void> T SyncRandomSeed(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FF888))(this, e);
	}
	template <typename T = uintptr_t> T OnSyncRandomSeed(uintptr_t eParam) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FF970))(this, eParam);
	}
	template <typename T = void> T AfterSyncRandomSeed() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FFA50))(this);
	}
	template <typename T = void> T SelectBuff(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FFB1C))(this, e);
	}
	template <typename T = void> T OnPlayerLeave(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41FFC5C))(this, e);
	}
	template <typename T = void> T CheckSendGameFail() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FFFFC))(this);
	}
	template <typename T = void> T OnGameFail(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x4200284))(this, e);
	}
	template <typename T = void> T GameFail() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4200348))(this);
	}
	template <typename T = void> T EndGame() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4200444))(this);
	}
	template <typename T = void> T OnStopMultiGame(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x4200780))(this, e);
	}
	template <typename T = void> T CheckMultiGameFail() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x42008A8))(this);
	}
	template <typename T = bool> T IsMultiGameFail() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4200938))(this);
	}
	template <typename T = void> T RebornTwiceInNet() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4200C80))(this);
	}
	template <typename T = void> T RestartCheckGameFailTimer() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FE39C))(this);
	}
	template <typename T = void> T OnGoReady(uintptr_t e) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x4200E0C))(this, e);
	}
	template <typename T = void> T StartGame() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4200E80))(this);
	}
	template <typename T = void> T OnStartGame(uintptr_t msg) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x41EF9D4))(this, msg);
	}
	template <typename T = void> T CheckNetTransformReady() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x41FFDC8))(this);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x42010D0))(this);
	}
	template <typename T = void> T SetMaxPlayerNum(int32_t maxPlayer) {
		return ((T (*)(MultiGameManager*, int32_t))(Il2CppBase() + 0x41FD814))(this, maxPlayer);
	}
	template <typename T = void> T ConnectToRemote(Il2CppString* svrInfoJson, uintptr_t roomInfo) {
		return ((T (*)(MultiGameManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41FEB00))(this, svrInfoJson, roomInfo);
	}
	template <typename T = void> T BuildRoomRemote(uintptr_t roomInfo, void* failedCb) {
		return ((T (*)(MultiGameManager*, uintptr_t, void*))(Il2CppBase() + 0x41FDE1C))(this, roomInfo, failedCb);
	}
	template <typename T = void> T OnStartHostErrorRemote(uintptr_t errorCode) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x4201224))(this, errorCode);
	}
	template <typename T = void> T OnClientErrorRemote(uintptr_t errorCode) {
		return ((T (*)(MultiGameManager*, uintptr_t))(Il2CppBase() + 0x4201338))(this, errorCode);
	}
	template <typename T = void> T StopSignalSvr() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x420102C))(this);
	}
	template <typename T = void> T TryReconnectSignalSvr(int32_t tryTimes) {
		return ((T (*)(MultiGameManager*, int32_t))(Il2CppBase() + 0x41FD178))(this, tryTimes);
	}
	template <typename T = void> T ReconnectSignalSvr() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x42014F0))(this);
	}
	template <typename T = void> T UpdateArenaArgs(bool newGame, bool joinable, uintptr_t status) {
		return ((T (*)(MultiGameManager*, bool, bool, uintptr_t))(Il2CppBase() + 0x420167C))(this, newGame, joinable, status);
	}
	template <typename T = uintptr_t> static T GetArenaStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x4201790))(0);
	}
	template <typename T = void> T RemoteHostQuitRoom() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x42011B8))(this);
	}
	template <typename T = void> T TAJoinRoom(Il2CppString* errReason, uintptr_t gameType) {
		return ((T (*)(MultiGameManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4201810))(this, errReason, gameType);
	}
	template <typename T = void> T TACreateRoom(Il2CppString* errReason, uintptr_t gameType) {
		return ((T (*)(MultiGameManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4201B2C))(this, errReason, gameType);
	}
	template <typename T = void> T TAGameStart() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4201E5C))(this);
	}
	template <typename T = void> T TAClientDisconn() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4202110))(this);
	}
	template <typename T = void> T TAHostFull() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x420236C))(this);
	}
	template <typename T = void> T TAHostJoinWhenRunning() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x42024EC))(this);
	}
	template <typename T = void> T ReconnectSignalSvrb__98_1(int32_t errCode) {
		return ((T (*)(MultiGameManager*, int32_t))(Il2CppBase() + 0x4202724))(this, errCode);
	}
	template <typename T = void> T ReconnectSignalSvrb__98_3() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x420287C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnApplicationQuit() {
		return ((T (*)(MultiGameManager*))(Il2CppBase() + 0x4202948))(this);
	}

};

}
