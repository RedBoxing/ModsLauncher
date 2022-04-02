#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class LogcatListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "LogcatListener"));
	}

	template <typename T = uintptr_t> T& nativeObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& logMessageReceivedThreaded() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_logMessageReceivedThreaded(uintptr_t value) {
		return ((T (*)(LogcatListener*, uintptr_t))(Il2CppBase() + 0x43CC150))(this, value);
	}
	template <typename T = void> T remove_logMessageReceivedThreaded(uintptr_t value) {
		return ((T (*)(LogcatListener*, uintptr_t))(Il2CppBase() + 0x43CC23C))(this, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(LogcatListener*))(Il2CppBase() + 0x43CC39C))(this);
	}
	template <typename T = void> T createNativeObject() {
		return ((T (*)(LogcatListener*))(Il2CppBase() + 0x43CC4E0))(this);
	}
	template <typename T = bool> T canReadFromLogcat() {
		return ((T (*)(LogcatListener*))(Il2CppBase() + 0x43CC5BC))(this);
	}
	template <typename T = void> T Start(Il2CppString* arguments) {
		return ((T (*)(LogcatListener*, Il2CppString*))(Il2CppBase() + 0x43CC688))(this, arguments);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(LogcatListener*))(Il2CppBase() + 0x43CC424))(this);
	}
	template <typename T = void> T OnLogReceived(Il2CppString* log) {
		return ((T (*)(LogcatListener*, Il2CppString*))(Il2CppBase() + 0x43CC7F4))(this, log);
	}

};

}
