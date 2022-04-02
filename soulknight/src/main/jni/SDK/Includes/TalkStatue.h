#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkStatue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkStatue"));
	}

	template <typename T = uintptr_t> T& light_renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& string_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& string_info() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& statue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_StatueIndex() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43AF454))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43AF4B4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TalkStatue*, uintptr_t))(Il2CppBase() + 0x43AF800))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(TalkStatue*, uintptr_t))(Il2CppBase() + 0x43AFA04))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(TalkStatue*, uintptr_t))(Il2CppBase() + 0x43AFBC4))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(TalkStatue*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x43B0950))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43B0850))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43B0FE0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43B106C))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43B10CC))(this);
	}
	template <typename T = void> T StatisticItem() {
		return ((T (*)(TalkStatue*))(Il2CppBase() + 0x43AF720))(this);
	}

};

}
