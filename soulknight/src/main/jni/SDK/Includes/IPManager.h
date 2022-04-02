#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IPManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPManager"));
	}

	template <typename T = uintptr_t> static T& _ipManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& HasRequestSpareLoginIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& IsUseAllSpareLoginIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _iPStates() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isRequesetingNewIP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isTestPing() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = Il2CppString*> T& RemoteUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B4E6C))(0);
	}
	template <typename T = Il2CppString*> static T get_SpareLoginIP_Port() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B4F1C))(0);
	}
	template <typename T = void> static T set_SpareLoginIP_Port(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19B4FB0))(0, value);
	}
	template <typename T = Il2CppString*> static T get_saveResultPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B503C))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_iPStates() {
		return ((T (*)(IPManager*))(Il2CppBase() + 0x19B50C4))(this);
	}
	template <typename T = void> T set_iPStates(Il2CppList<uintptr_t>* value) {
		return ((T (*)(IPManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x19B5210))(this, value);
	}
	template <typename T = void> T Load() {
		return ((T (*)(IPManager*))(Il2CppBase() + 0x19B512C))(this);
	}
	template <typename T = void> T Save() {
		return ((T (*)(IPManager*))(Il2CppBase() + 0x19B527C))(this);
	}
	template <typename T = bool> static T IsNetworkReachability() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B5324))(0);
	}
	template <typename T = bool> static T getNetStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x19B5384))(0);
	}
	template <typename T = void> T CallBestLoginIP(uintptr_t coroutineObject, void* callback, Il2CppString* old_ip_port) {
		return ((T (*)(IPManager*, uintptr_t, void*, Il2CppString*))(Il2CppBase() + 0x19B53E0))(this, coroutineObject, callback, old_ip_port);
	}
	template <typename T = uintptr_t> T GetBestLoginIp(void* callback, Il2CppString* old_ip_port) {
		return ((T (*)(IPManager*, void*, Il2CppString*))(Il2CppBase() + 0x19B5F9C))(this, callback, old_ip_port);
	}
	template <typename T = bool> T CheckIsMoreThanInterval(int64_t lastPingTime) {
		return ((T (*)(IPManager*, int64_t))(Il2CppBase() + 0x19B5BC0))(this, lastPingTime);
	}

};

}
