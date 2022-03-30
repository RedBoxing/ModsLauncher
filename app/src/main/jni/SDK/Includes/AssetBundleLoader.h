#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AssetBundleLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetBundleLoader"));
	}

	template <typename T = Il2CppString*> static T& Common() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& LevelCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& LevelObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Hall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Tutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Sandbox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& Defence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& MultiRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& bundleCacheDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BattleBundles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& HallBundles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SceneBundles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> T& manifest() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& loadingBundles() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> static T& loadBundleSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = bool> T& isShowGuideRealName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& loadingScene() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& loadedSceneBundle() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& unpackScene() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& netRegionFetched() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> static T& fetchGatewayServerSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x61);
	}
	template <typename T = uintptr_t> static T& afterFetchGatewayServerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = bool> static T& realnameChecked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppString*> static T& key() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = void*> T get_loadedBundles() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417E8B4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417E914))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F44C))(this);
	}
	template <typename T = void> T CheckAndShowLog() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F090))(this);
	}
	template <typename T = uintptr_t> T DownloadPromoteVideos() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F4F0))(this);
	}
	template <typename T = uintptr_t> T Init() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F5D0))(this);
	}
	template <typename T = void> T AfterInit() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F6B0))(this);
	}
	template <typename T = void> T ShowGuideRealName() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417FAF8))(this);
	}
	template <typename T = uintptr_t> T LoadBundle(Il2CppString* bundleName, uintptr_t onLoadComplete) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x417FD00))(this, bundleName, onLoadComplete);
	}
	template <typename T = uintptr_t> T LoadingBundle(Il2CppString* bundleName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x417FE24))(this, bundleName);
	}
	template <typename T = bool> T BundleLoaded(Il2CppString* bundleName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x417FF30))(this, bundleName);
	}
	template <typename T = uintptr_t> T GetBundle(Il2CppString* bundleName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x41802A8))(this, bundleName);
	}
	template <typename T = void> static T UnloadCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x4180600))(0);
	}
	template <typename T = void> T UnLoadBundle(Il2CppString* bundleName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x41806F4))(this, bundleName);
	}
	template <typename T = void> T EnterBattle() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x4180B04))(this);
	}
	template <typename T = void> T ExitBattle() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x4180C60))(this);
	}
	template <typename T = void> T UnloadRooms() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x4180CBC))(this);
	}
	template <typename T = uintptr_t> T Load(Il2CppString* resPath) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x4180FFC))(this, resPath);
	}
	template <typename T = uintptr_t> T Load_1(Il2CppString* resPath) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x0))(this, resPath);
	}
	template <typename T = uintptr_t> T Load_2(Il2CppString* resPath, uintptr_t type) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41810D4))(this, resPath, type);
	}
	template <typename T = uintptr_t> T Load_3(Il2CppString* bundleName, Il2CppString* resPath) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x41819DC))(this, bundleName, resPath);
	}
	template <typename T = uintptr_t> T Load_4(Il2CppString* bundleName, Il2CppString* resPath) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, bundleName, resPath);
	}
	template <typename T = bool> T IsBundleLoaded(Il2CppString* name) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x4181D6C))(this, name);
	}
	template <typename T = uintptr_t> T LoadScene(Il2CppString* sceneName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x41820C8))(this, sceneName);
	}
	template <typename T = uintptr_t> T Wait() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x41822BC))(this);
	}
	template <typename T = uintptr_t> T LoadSceneAsync(Il2CppString* sceneName) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*))(Il2CppBase() + 0x41821DC))(this, sceneName);
	}
	template <typename T = uintptr_t> T LoadSceneBundle(Il2CppString* sceneName, uintptr_t onLoadComplete) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41823B8))(this, sceneName, onLoadComplete);
	}
	template <typename T = uintptr_t> T LoadSceneBundleAsync(Il2CppString* sceneName, uintptr_t onLoadComplete) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41824F4))(this, sceneName, onLoadComplete);
	}
	template <typename T = void> T RequestNetworkTime() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417EEFC))(this);
	}
	template <typename T = void> T RequestNetworkRegion() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417EFA0))(this);
	}
	template <typename T = uintptr_t> T UpdateRegion() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x4182618))(this);
	}
	template <typename T = void> T HandleRealNameCheck() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x41826F8))(this);
	}
	template <typename T = void> T DoHandleRealNameCheck() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x41827D8))(this);
	}
	template <typename T = void> T RequesetMacRealName(void* callback, bool ForeWriteValue) {
		return ((T (*)(AssetBundleLoader*, void*, bool))(Il2CppBase() + 0x4182CC8))(this, callback, ForeWriteValue);
	}
	template <typename T = void> T RuquestRealName(Il2CppString* accountId, void* callback) {
		return ((T (*)(AssetBundleLoader*, Il2CppString*, void*))(Il2CppBase() + 0x4182BAC))(this, accountId, callback);
	}
	template <typename T = void> T RequestGatewayServerAddress(bool forceRequest) {
		return ((T (*)(AssetBundleLoader*, bool))(Il2CppBase() + 0x417F28C))(this, forceRequest);
	}
	template <typename T = uintptr_t> T FetchGatewayServerAddress(bool forceRequest) {
		return ((T (*)(AssetBundleLoader*, bool))(Il2CppBase() + 0x4182DAC))(this, forceRequest);
	}
	template <typename T = void> T InitUtils() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x417F314))(this);
	}
	template <typename T = void> static T InitAfterAgreePrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x4182EA4))(0);
	}
	template <typename T = void> static T InitAfterDisAgreePrivacyPolicy() {
		return ((T (*)(void *))(Il2CppBase() + 0x4183010))(0);
	}
	template <typename T = void> T EditorLoadBundle(uintptr_t bundle) {
		return ((T (*)(AssetBundleLoader*, uintptr_t))(Il2CppBase() + 0x4183064))(this, bundle);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(AssetBundleLoader*, bool))(Il2CppBase() + 0x4183294))(this, pauseStatus);
	}
	template <typename T = void> T RequestNetworkRegionb__49_0() {
		return ((T (*)(AssetBundleLoader*))(Il2CppBase() + 0x41838A4))(this);
	}

};

}
