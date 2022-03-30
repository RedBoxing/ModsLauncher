#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoomAccount {

class EmailUrl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoomAccount", "EmailUrl"));
	}

	template <typename T = uintptr_t> static T& _emailUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& emailUrlData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& ContactQQs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isAutoGotoUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isCheckFrequentClick() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = int32_t> T& checkLockTimeDistance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& checkLockCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& freezeTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsDownloadMergeCharegePoint() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsUploadMergeCharegePoint() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> T& PingRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& pingInterval() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isNeedChangeOverlap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& sendSMSInterval() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& phoneRegex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_emailUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E737F8))(0);
	}
	template <typename T = void> static T SetConfigEmail(uintptr_t emailUrl) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E74288))(0, emailUrl);
	}
	template <typename T = Il2CppString*> T GetQQString() {
		return ((T (*)(EmailUrl*))(Il2CppBase() + 0x1E74334))(this);
	}

};

}
