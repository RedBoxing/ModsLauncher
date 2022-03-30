#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.MultiRemote {

class InviteCodeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.MultiRemote", "InviteCodeView"));
	}

	template <typename T = uintptr_t> T& roomId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(InviteCodeView*))(Il2CppBase() + 0x44FC900))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(InviteCodeView*))(Il2CppBase() + 0x44FCA18))(this);
	}
	template <typename T = void> T UpdateRoomId(uintptr_t e) {
		return ((T (*)(InviteCodeView*, uintptr_t))(Il2CppBase() + 0x44FCAFC))(this, e);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(InviteCodeView*))(Il2CppBase() + 0x44FCC1C))(this);
	}

};

}
