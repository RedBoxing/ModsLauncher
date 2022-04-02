#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class CookieJar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "CookieJar"));
	}

	template <typename T = Il2CppString*> static T& version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& cookieJarLock() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& cookies() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ContentsChanged() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& cookiesStringPattern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& boundary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A25DD4))(0);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(CookieJar*))(Il2CppBase() + 0x1A25F3C))(this);
	}
	template <typename T = bool> T SetCookie(uintptr_t cookie) {
		return ((T (*)(CookieJar*, uintptr_t))(Il2CppBase() + 0x1A26074))(this, cookie);
	}
	template <typename T = uintptr_t> T GetCookie(Il2CppString* name, uintptr_t accessInfo) {
		return ((T (*)(CookieJar*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A26624))(this, name, accessInfo);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCookies(uintptr_t accessInfo) {
		return ((T (*)(CookieJar*, uintptr_t))(Il2CppBase() + 0x1A26814))(this, accessInfo);
	}
	template <typename T = void> T SetCookies(Il2CppArray<uintptr_t>* cookieObjects) {
		return ((T (*)(CookieJar*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A26A00))(this, cookieObjects);
	}
	template <typename T = void> T SetCookies_1(Il2CppString* cookiesString) {
		return ((T (*)(CookieJar*, Il2CppString*))(Il2CppBase() + 0x1A26AC0))(this, cookiesString);
	}
	template <typename T = Il2CppString*> T Serialize() {
		return ((T (*)(CookieJar*))(Il2CppBase() + 0x1A26CF4))(this);
	}
	template <typename T = void> T Deserialize(Il2CppString* cookieJarString, bool clear) {
		return ((T (*)(CookieJar*, Il2CppString*, bool))(Il2CppBase() + 0x1A2707C))(this, cookieJarString, clear);
	}

};

}
