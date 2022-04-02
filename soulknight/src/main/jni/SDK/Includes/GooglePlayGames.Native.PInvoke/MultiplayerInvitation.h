#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class MultiplayerInvitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "MultiplayerInvitation"));
	}


	template <typename T = uintptr_t> T Inviter() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AED680))(this);
	}
	template <typename T = uint32_t> T Variant() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AED854))(this);
	}
	template <typename T = uint64_t> T CreationTime() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AED8C0))(this);
	}
	template <typename T = uintptr_t> T Type() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AED92C))(this);
	}
	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AED998))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(MultiplayerInvitation*, uintptr_t))(Il2CppBase() + 0x2AEDCF0))(this, selfPointer);
	}
	template <typename T = uint32_t> T AutomatchingSlots() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AEDD74))(this);
	}
	template <typename T = uint32_t> T ParticipantCount() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AEDDE0))(this);
	}
	template <typename T = uintptr_t> static T ToInvType(uintptr_t invitationType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AEDE68))(0, invitationType);
	}
	template <typename T = uintptr_t> T AsInvitation() {
		return ((T (*)(MultiplayerInvitation*))(Il2CppBase() + 0x2AEDF80))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AE9BAC))(0, selfPointer);
	}
	template <typename T = uintptr_t> T Idb__5_0(Il2CppArray<uintptr_t>* out_string, uintptr_t size) {
		return ((T (*)(MultiplayerInvitation*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEE390))(this, out_string, size);
	}

};

}
