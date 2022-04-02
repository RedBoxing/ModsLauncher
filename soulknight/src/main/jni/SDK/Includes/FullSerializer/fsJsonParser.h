#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsJsonParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsJsonParser"));
	}

	template <typename T = int32_t> T& _start() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _input() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _cachedStringBuilder() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T MakeFailure(Il2CppString* message) {
		return ((T (*)(fsJsonParser*, Il2CppString*))(Il2CppBase() + 0x2D1652C))(this, message);
	}
	template <typename T = bool> T TryMoveNext() {
		return ((T (*)(fsJsonParser*))(Il2CppBase() + 0x2D16840))(this);
	}
	template <typename T = bool> T HasValue() {
		return ((T (*)(fsJsonParser*))(Il2CppBase() + 0x2D168E8))(this);
	}
	template <typename T = bool> T HasValue_1(int32_t offset) {
		return ((T (*)(fsJsonParser*, int32_t))(Il2CppBase() + 0x2D1694C))(this, offset);
	}
	template <typename T = char> T Character() {
		return ((T (*)(fsJsonParser*))(Il2CppBase() + 0x2D169F4))(this);
	}
	template <typename T = char> T Character_1(int32_t offset) {
		return ((T (*)(fsJsonParser*, int32_t))(Il2CppBase() + 0x2D16A58))(this, offset);
	}
	template <typename T = void> T SkipSpace() {
		return ((T (*)(fsJsonParser*))(Il2CppBase() + 0x2D16AE8))(this);
	}
	template <typename T = bool> T IsHex(char c) {
		return ((T (*)(fsJsonParser*, char))(Il2CppBase() + 0x2D16D04))(this, c);
	}
	template <typename T = uint32_t> T ParseSingleChar(char c1, uint32_t multipliyer) {
		return ((T (*)(fsJsonParser*, char, uint32_t))(Il2CppBase() + 0x2D16DAC))(this, c1, multipliyer);
	}
	template <typename T = uint32_t> T ParseUnicode(char c1, char c2, char c3, char c4) {
		return ((T (*)(fsJsonParser*, char, char, char, char))(Il2CppBase() + 0x2D16E78))(this, c1, c2, c3, c4);
	}
	template <typename T = uintptr_t> T TryUnescapeChar(uintptr_t* escaped) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D16F64))(this, escaped);
	}
	template <typename T = uintptr_t> T TryParseExact(Il2CppString* content) {
		return ((T (*)(fsJsonParser*, Il2CppString*))(Il2CppBase() + 0x2D174C8))(this, content);
	}
	template <typename T = uintptr_t> T TryParseTrue(uintptr_t* data) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D17664))(this, data);
	}
	template <typename T = uintptr_t> T TryParseFalse(uintptr_t* data) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D17778))(this, data);
	}
	template <typename T = uintptr_t> T TryParseNull(uintptr_t* data) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D1788C))(this, data);
	}
	template <typename T = bool> T IsSeparator(char c) {
		return ((T (*)(fsJsonParser*, char))(Il2CppBase() + 0x2D179A4))(this, c);
	}
	template <typename T = uintptr_t> T TryParseNumber(uintptr_t* data) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D17A8C))(this, data);
	}
	template <typename T = uintptr_t> T TryParseString(uintptr_t* str) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D17DC0))(this, str);
	}
	template <typename T = uintptr_t> T TryParseArray(uintptr_t* arr) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D18058))(this, arr);
	}
	template <typename T = uintptr_t> T TryParseObject(uintptr_t* obj) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D18544))(this, obj);
	}
	template <typename T = uintptr_t> T RunParse(uintptr_t* data) {
		return ((T (*)(fsJsonParser*, uintptr_t*))(Il2CppBase() + 0x2D182B8))(this, data);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* input, uintptr_t* data) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2D188B4))(0, input, data);
	}
	template <typename T = uintptr_t> static T Parse_1(Il2CppString* input) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D18A4C))(0, input);
	}

};

}
