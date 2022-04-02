#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class ConfirmReportArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "ConfirmReportArgs"));
	}

	template <typename T = Il2CppString*> T& arenaId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& reporterDeviceId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& targetDeviceId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& targetChannelUid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& targetChillyUid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& reportType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& targetChannel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> T get_arenaId() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385530))(this);
	}
	template <typename T = void> T set_arenaId(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385538))(this, value);
	}
	template <typename T = Il2CppString*> T get_reporterDeviceId() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385540))(this);
	}
	template <typename T = void> T set_reporterDeviceId(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385548))(this, value);
	}
	template <typename T = Il2CppString*> T get_targetDeviceId() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385550))(this);
	}
	template <typename T = void> T set_targetDeviceId(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385558))(this, value);
	}
	template <typename T = Il2CppString*> T get_targetChannelUid() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385560))(this);
	}
	template <typename T = void> T set_targetChannelUid(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385568))(this, value);
	}
	template <typename T = Il2CppString*> T get_targetChillyUid() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385570))(this);
	}
	template <typename T = void> T set_targetChillyUid(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385578))(this, value);
	}
	template <typename T = uintptr_t> T get_reportType() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385580))(this);
	}
	template <typename T = void> T set_reportType(uintptr_t value) {
		return ((T (*)(ConfirmReportArgs*, uintptr_t))(Il2CppBase() + 0x4385588))(this, value);
	}
	template <typename T = Il2CppString*> T get_targetChannel() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385590))(this);
	}
	template <typename T = void> T set_targetChannel(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x4385598))(this, value);
	}
	template <typename T = Il2CppString*> T get_message() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x43855A0))(this);
	}
	template <typename T = void> T set_message(Il2CppString* value) {
		return ((T (*)(ConfirmReportArgs*, Il2CppString*))(Il2CppBase() + 0x43855A8))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x43855B0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(ConfirmReportArgs*))(Il2CppBase() + 0x4385A70))(this);
	}

};

}
