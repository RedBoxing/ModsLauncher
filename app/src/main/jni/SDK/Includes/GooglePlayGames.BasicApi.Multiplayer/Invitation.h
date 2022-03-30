#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi.Multiplayer {

class Invitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi.Multiplayer", "Invitation"));
	}

	template <typename T = uintptr_t> static T& UnixEpoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mInvitationType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mInvitationId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mInviter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mVariant() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& mCreationTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_InvitationType() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C04C8))(this);
	}
	template <typename T = Il2CppString*> T get_InvitationId() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C0528))(this);
	}
	template <typename T = uintptr_t> T get_Inviter() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C0588))(this);
	}
	template <typename T = int32_t> T get_Variant() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C05E8))(this);
	}
	template <typename T = uintptr_t> T get_CreationTime() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C0648))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C0714))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Invitation*))(Il2CppBase() + 0x35C09F0))(this);
	}

};

}
