#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parser"));
	}

	template <typename T = Il2CppString*> static T& WORD_BREAK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& json() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> static T IsWordBreak(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x43C7700))(0, c);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T Parse(Il2CppString* jsonString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43C7500))(0, jsonString);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C79D8))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T ParseObject() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C7860))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ParseArray() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C8030))(this);
	}
	template <typename T = uintptr_t> T ParseValue() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C7FC4))(this);
	}
	template <typename T = uintptr_t> T ParseByToken(uintptr_t token) {
		return ((T (*)(Parser*, uintptr_t))(Il2CppBase() + 0x43C8160))(this, token);
	}
	template <typename T = Il2CppString*> T ParseString() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C7C70))(this);
	}
	template <typename T = uintptr_t> T ParseNumber() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C82CC))(this);
	}
	template <typename T = void> T EatWhitespace() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C85D8))(this);
	}
	template <typename T = char> T get_PeekChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C86EC))(this);
	}
	template <typename T = char> T get_NextChar() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C83E8))(this);
	}
	template <typename T = Il2CppString*> T get_NextWord() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C84B8))(this);
	}
	template <typename T = uintptr_t> T get_NextToken() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x43C7A54))(this);
	}

};

}
