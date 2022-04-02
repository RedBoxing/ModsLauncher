#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveAgent"));
	}

	template <typename T = uintptr_t> T& uiTitle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& windowSave() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& saveName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& loadedGameData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loadedCloudData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& UpLoadGameAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& BeforeDownloadGameAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& DownLoadGameAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& saved_game_meta() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_hasFetchData() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7B840))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7B8B8))(this);
	}
	template <typename T = void> T FetchGameIfNotFetched() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7B9E8))(this);
	}
	template <typename T = void> T FetchGame() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7BA60))(this);
	}
	template <typename T = void> T onFetchGameSuccess(Il2CppString* json) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7BDA8))(this, json);
	}
	template <typename T = void> T onFetchGameFail(Il2CppString* errMsg) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7BE3C))(this, errMsg);
	}
	template <typename T = void> T LoadGame() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7BFA4))(this);
	}
	template <typename T = void> T onLoadGameSuccess(Il2CppString* args) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7C11C))(this, args);
	}
	template <typename T = void> T onLoadGameFail(Il2CppString* args) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7CF6C))(this, args);
	}
	template <typename T = void> T SaveGame() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7D070))(this);
	}
	template <typename T = void> T onSaveGameSuccess(Il2CppString* json) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7D1E0))(this, json);
	}
	template <typename T = void> T onSaveGameFail(Il2CppString* json) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7D2CC))(this, json);
	}
	template <typename T = void> T ShowMessage(Il2CppString* msg) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7BF10))(this, msg);
	}
	template <typename T = void> T ShowSelectUI() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7D3B8))(this);
	}
	template <typename T = void> T OnSavedGameSelected(uintptr_t status, uintptr_t game) {
		return ((T (*)(CloudSaveAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7D554))(this, status, game);
	}
	template <typename T = void> T OpenSavedGame(Il2CppString* filename) {
		return ((T (*)(CloudSaveAgent*, Il2CppString*))(Il2CppBase() + 0x1E7BC18))(this, filename);
	}
	template <typename T = void> T OnSavedGameOpened(uintptr_t status, uintptr_t game) {
		return ((T (*)(CloudSaveAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7DA5C))(this, status, game);
	}
	template <typename T = void> T SaveGame_1(uintptr_t game, Il2CppArray<uintptr_t>* savedData, uintptr_t totalPlaytime) {
		return ((T (*)(CloudSaveAgent*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E7E0B8))(this, game, savedData, totalPlaytime);
	}
	template <typename T = void> T OnSavedGameWritten(uintptr_t status, uintptr_t game) {
		return ((T (*)(CloudSaveAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E7E494))(this, status, game);
	}
	template <typename T = uintptr_t> T getScreenshot() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7E81C))(this);
	}
	template <typename T = void> T LoadGameData(uintptr_t game) {
		return ((T (*)(CloudSaveAgent*, uintptr_t))(Il2CppBase() + 0x1E7DE64))(this, game);
	}
	template <typename T = void> T OnSavedGameDataRead(uintptr_t status, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(CloudSaveAgent*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1E7E950))(this, status, data);
	}
	template <typename T = void> T OnLogout() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7EB48))(this);
	}
	template <typename T = void> T LoadGameb__16_0() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7EBFC))(this);
	}
	template <typename T = void> T SaveGameb__19_0() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7F4AC))(this);
	}
	template <typename T = void> T SaveGameb__19_1() {
		return ((T (*)(CloudSaveAgent*))(Il2CppBase() + 0x1E7F750))(this);
	}

};

}
