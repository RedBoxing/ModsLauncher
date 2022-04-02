#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTokenTicket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTokenTicket"));
	}

	template <typename T = uintptr_t> T& tokenType() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> static T& _Prototype() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& used() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppString*> T& targetName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> static T get_Prototype() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1F644))(0);
	}
	template <typename T = void> T ResetIcon() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A1F754))(this);
	}
	template <typename T = void> T ResetIconSprite() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A1F7BC))(this);
	}
	template <typename T = void> T ResetIconPosition() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A1FB2C))(this);
	}
	template <typename T = void> T SetTokenName(Il2CppString* ticket) {
		return ((T (*)(GunTokenTicket*, Il2CppString*))(Il2CppBase() + 0x1A1FE98))(this, ticket);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A20214))(this);
	}
	template <typename T = Il2CppString*> T GetTicketKey() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A202D4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A203A8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A204A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(GunTokenTicket*))(Il2CppBase() + 0x1A204AC))(this);
	}

};

}
