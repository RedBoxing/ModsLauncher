#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogManager"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& singleton() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& minimumHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& startInPopupMode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& clearCommandAfterExecution() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& commandHistorySize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& receiveLogcatLogsInAndroid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& logcatArguments() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& logItemPrefab() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& infoLog() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& warningLog() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& errorLog() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& logSpriteRepresentations() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& collapseButtonNormalColor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& collapseButtonSelectedColor() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& filterButtonsNormalColor() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& filterButtonsSelectedColor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& logWindowTR() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& canvasTR() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& logItemsContainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& commandInputField() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& collapseButton() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& filterInfoButton() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& filterWarningButton() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& filterErrorButton() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& infoEntryCountText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& warningEntryCountText() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& errorEntryCountText() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& snapToBottomButton() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& deviceInfoText() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& funcText1() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& funcBtn1() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& infoEntryCount() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& warningEntryCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& errorEntryCount() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& logWindowCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = bool> T& isLogWindowVisible() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& screenDimensionsChanged() {
		return *(T*)((uintptr_t)this + 0x131);
	}
	template <typename T = uintptr_t> T& popupManager() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& logItemsScrollRect() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& recycledListView() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = bool> T& isCollapseOn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& logFilter() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = bool> T& snapToBottom() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& collapsedLogEntries() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& collapsedLogEntriesMap() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& uncollapsedLogEntriesIndices() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& indicesOfListEntriesToShow() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pooledLogItems() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = void*> T& commandHistory() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& commandHistoryIndex() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& nullPointerEventData() {
		return *(T*)((uintptr_t)this + 0x198);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3CE0C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3D7FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3D954))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3DA48))(this);
	}
	template <typename T = void> T SetDeviceInfo(uintptr_t e) {
		return ((T (*)(DebugLogManager*, uintptr_t))(Il2CppBase() + 0x1A3DCAC))(this, e);
	}
	template <typename T = void> T OnRectTransformDimensionsChange() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3DFCC))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3E030))(this);
	}
	template <typename T = char> T OnValidateCommand(Il2CppString* text, int32_t charIndex, char addedChar) {
		return ((T (*)(DebugLogManager*, Il2CppString*, int32_t, char))(Il2CppBase() + 0x1A3E67C))(this, text, charIndex, addedChar);
	}
	template <typename T = void> T ReceivedLog(Il2CppString* logString, Il2CppString* stackTrace, uintptr_t logType) {
		return ((T (*)(DebugLogManager*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A3E974))(this, logString, stackTrace, logType);
	}
	template <typename T = void> T SetSnapToBottom(bool snapToBottom) {
		return ((T (*)(DebugLogManager*, bool))(Il2CppBase() + 0x1A3E8FC))(this, snapToBottom);
	}
	template <typename T = void> T ValidateScrollPosition() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3F344))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3F3C8))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3F4B4))(this);
	}
	template <typename T = void> T HideButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3DB90))(this);
	}
	template <typename T = void> T ClearButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3F644))(this);
	}
	template <typename T = void> T CollapseButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3F908))(this);
	}
	template <typename T = void> T FilterLogButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3FF7C))(this);
	}
	template <typename T = void> T FilterWarningButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A40050))(this);
	}
	template <typename T = void> T FilterErrorButtonPressed() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A40124))(this);
	}
	template <typename T = void> T Resize(uintptr_t dat) {
		return ((T (*)(DebugLogManager*, uintptr_t))(Il2CppBase() + 0x1A401F8))(this, dat);
	}
	template <typename T = void> T FilterLogs() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A3FAA8))(this);
	}
	template <typename T = Il2CppString*> T GetAllLogs() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A404D4))(this);
	}
	template <typename T = void> T SaveLogsToFile() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A40778))(this);
	}
	template <typename T = void> T PoolLogItem(uintptr_t logItem) {
		return ((T (*)(DebugLogManager*, uintptr_t))(Il2CppBase() + 0x1A40944))(this, logItem);
	}
	template <typename T = uintptr_t> T PopLogItem() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A40A30))(this);
	}
	template <typename T = void> T FuncBtnClick1() {
		return ((T (*)(DebugLogManager*))(Il2CppBase() + 0x1A40C30))(this);
	}

};

}
