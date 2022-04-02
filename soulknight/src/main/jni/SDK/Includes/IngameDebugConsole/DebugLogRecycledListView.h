#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogRecycledListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogRecycledListView"));
	}

	template <typename T = uintptr_t> T& transformComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& viewportTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& debugManager() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& logItemNormalColor1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& logItemNormalColor2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& logItemSelectedColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& manager() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& logItemHeight() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _1OverLogItemHeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& viewportHeight() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& collapsedLogEntries() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& indicesOfEntriesToShow() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& indexOfSelectedLogEntry() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& positionOfSelectedLogEntry() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& heightOfSelectedLogEntry() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& deltaHeightOfSelectedLogEntry() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& logItemsAtIndices() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isCollapseOn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& currentTopIndex() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& currentBottomIndex() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = float> T get_ItemHeight() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A3C77C))(this);
	}
	template <typename T = float> T get_SelectedItemHeight() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A3C71C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A41950))(this);
	}
	template <typename T = void> T Initialize(uintptr_t manager, Il2CppList<uintptr_t>* collapsedLogEntries, uintptr_t indicesOfEntriesToShow, float logItemHeight) {
		return ((T (*)(DebugLogRecycledListView*, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t, float))(Il2CppBase() + 0x1A3D490))(this, manager, collapsedLogEntries, indicesOfEntriesToShow, logItemHeight);
	}
	template <typename T = void> T SetCollapseMode(bool collapse) {
		return ((T (*)(DebugLogRecycledListView*, bool))(Il2CppBase() + 0x1A3FA30))(this, collapse);
	}
	template <typename T = void> T OnLogItemClicked(uintptr_t item) {
		return ((T (*)(DebugLogRecycledListView*, uintptr_t))(Il2CppBase() + 0x1A3C9A4))(this, item);
	}
	template <typename T = void> T DeselectSelectedLogItem() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A3F808))(this);
	}
	template <typename T = void> T OnLogEntriesUpdated(bool updateAllVisibleItemContents) {
		return ((T (*)(DebugLogRecycledListView*, bool))(Il2CppBase() + 0x1A3EF40))(this, updateAllVisibleItemContents);
	}
	template <typename T = void> T OnCollapsedLogEntryAtIndexUpdated(int32_t index) {
		return ((T (*)(DebugLogRecycledListView*, int32_t))(Il2CppBase() + 0x1A3EE68))(this, index);
	}
	template <typename T = void> T OnViewportDimensionsChanged() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A3E498))(this);
	}
	template <typename T = void> T HardResetItems() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A41C48))(this);
	}
	template <typename T = void> T CalculateContentHeight() {
		return ((T (*)(DebugLogRecycledListView*))(Il2CppBase() + 0x1A41B18))(this);
	}
	template <typename T = void> T UpdateItemsInTheList(bool updateAllVisibleItemContents) {
		return ((T (*)(DebugLogRecycledListView*, bool))(Il2CppBase() + 0x1A3D544))(this, updateAllVisibleItemContents);
	}
	template <typename T = void> T CreateLogItemsBetweenIndices(int32_t topIndex, int32_t bottomIndex) {
		return ((T (*)(DebugLogRecycledListView*, int32_t, int32_t))(Il2CppBase() + 0x1A41DC8))(this, topIndex, bottomIndex);
	}
	template <typename T = void> T CreateLogItemAtIndex(int32_t index) {
		return ((T (*)(DebugLogRecycledListView*, int32_t))(Il2CppBase() + 0x1A41FE8))(this, index);
	}
	template <typename T = void> T DestroyLogItemsBetweenIndices(int32_t topIndex, int32_t bottomIndex) {
		return ((T (*)(DebugLogRecycledListView*, int32_t, int32_t))(Il2CppBase() + 0x1A41CC4))(this, topIndex, bottomIndex);
	}
	template <typename T = void> T UpdateLogItemContentsBetweenIndices(int32_t topIndex, int32_t bottomIndex) {
		return ((T (*)(DebugLogRecycledListView*, int32_t, int32_t))(Il2CppBase() + 0x1A41E58))(this, topIndex, bottomIndex);
	}
	template <typename T = void> T ColorLogItem(uintptr_t logItem, int32_t index) {
		return ((T (*)(DebugLogRecycledListView*, uintptr_t, int32_t))(Il2CppBase() + 0x1A419E8))(this, logItem, index);
	}

};

}
