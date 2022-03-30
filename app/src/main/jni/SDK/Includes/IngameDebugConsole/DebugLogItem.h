#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogItem"));
	}

	template <typename T = uintptr_t> T& transformComponent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& imageComponent() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& logText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& logTypeImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& logCountParent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& logCountText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& logEntry() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& entryIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& manager() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_Transform() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3C3B8))(this);
	}
	template <typename T = uintptr_t> T get_Image() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3C418))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3C478))(this);
	}
	template <typename T = void> T Initialize(uintptr_t manager) {
		return ((T (*)(DebugLogItem*, uintptr_t))(Il2CppBase() + 0x1A3C4D8))(this, manager);
	}
	template <typename T = void> T SetContent(uintptr_t logEntry, int32_t entryIndex, bool isExpanded) {
		return ((T (*)(DebugLogItem*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x1A3C54C))(this, logEntry, entryIndex, isExpanded);
	}
	template <typename T = void> T ShowCount() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3C7DC))(this);
	}
	template <typename T = void> T HideCount() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3C8A4))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(DebugLogItem*, uintptr_t))(Il2CppBase() + 0x1A3C91C))(this, eventData);
	}
	template <typename T = float> T CalculateExpandedHeight(Il2CppString* content) {
		return ((T (*)(DebugLogItem*, Il2CppString*))(Il2CppBase() + 0x1A3CB90))(this, content);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3CD84))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(DebugLogItem*))(Il2CppBase() + 0x1A3CE04))(this);
	}

};

}
