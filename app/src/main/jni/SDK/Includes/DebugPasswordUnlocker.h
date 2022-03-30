#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DebugPasswordUnlocker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugPasswordUnlocker"));
	}

	template <typename T = Il2CppString*> T& target_pwd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& alawy_show_pwd() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& consolelog_obj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& unlock_callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& input_pwd() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E030C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E03B8))(this);
	}
	template <typename T = void> T InputNumber(int32_t num) {
		return ((T (*)(DebugPasswordUnlocker*, int32_t))(Il2CppBase() + 0x42E0484))(this, num);
	}
	template <typename T = void> T ClearInput() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E06AC))(this);
	}
	template <typename T = void> T CloseUnlocker() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E0770))(this);
	}
	template <typename T = void> T CheckPwd() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E05A0))(this);
	}
	template <typename T = void> T UnlockSuccess() {
		return ((T (*)(DebugPasswordUnlocker*))(Il2CppBase() + 0x42E082C))(this);
	}

};

}
