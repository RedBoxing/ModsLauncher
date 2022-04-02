#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class LogCollector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "LogCollector"));
	}

	template <typename T = uintptr_t> T& logcatListener() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> static T& FLUSH_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FLUSH_LINES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& logLines() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& lastFlushTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& serverURL() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& sessionID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& logId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& autoFlush() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = void*> T& SendResult() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& sendFailMsg() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& lockObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> static T& GetError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& isFlushing() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T add_SendResult(void* value) {
		return ((T (*)(LogCollector*, void*))(Il2CppBase() + 0x4559674))(this, value);
	}
	template <typename T = void> T remove_SendResult(void* value) {
		return ((T (*)(LogCollector*, void*))(Il2CppBase() + 0x4559760))(this, value);
	}
	template <typename T = void> T Label(Il2CppString* text) {
		return ((T (*)(LogCollector*, Il2CppString*))(Il2CppBase() + 0x455984C))(this, text);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(LogCollector*))(Il2CppBase() + 0x4559B4C))(this);
	}
	template <typename T = void> T Start(Il2CppString* serverPostURL, Il2CppString* sessionID) {
		return ((T (*)(LogCollector*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4559F18))(this, serverPostURL, sessionID);
	}
	template <typename T = void> T Stop() {
		return ((T (*)(LogCollector*))(Il2CppBase() + 0x455A124))(this);
	}
	template <typename T = void> T postLogTextToServer(Il2CppString* text) {
		return ((T (*)(LogCollector*, Il2CppString*))(Il2CppBase() + 0x4559E10))(this, text);
	}
	template <typename T = void*> static T Compress(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455A248))(0, data);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CompressGzip(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455A33C))(0, data);
	}
	template <typename T = Il2CppString*> T LogTypeToString(uintptr_t type) {
		return ((T (*)(LogCollector*, uintptr_t))(Il2CppBase() + 0x455A50C))(this, type);
	}
	template <typename T = void> T ReceivedUnityLog(Il2CppString* line, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(LogCollector*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455A5FC))(this, line, stackTrace, type);
	}
	template <typename T = void> T ReceivedLog(Il2CppString* line) {
		return ((T (*)(LogCollector*, Il2CppString*))(Il2CppBase() + 0x455999C))(this, line);
	}

};

}
