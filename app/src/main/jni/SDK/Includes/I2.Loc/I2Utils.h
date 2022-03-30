#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class I2Utils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "I2Utils"));
	}

	template <typename T = Il2CppString*> static T& ValidChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NumberChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ValidNameSymbols() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T ReverseText(Il2CppString* source) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42207B0))(0, source);
	}
	template <typename T = Il2CppString*> static T RemoveNonASCII(Il2CppString* text, bool allowCategory) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4220910))(0, text, allowCategory);
	}
	template <typename T = Il2CppString*> static T GetValidTermName(Il2CppString* text, bool allowCategory) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4220C0C))(0, text, allowCategory);
	}
	template <typename T = Il2CppString*> static T SplitLine(Il2CppString* line, int32_t maxCharacters) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4220D60))(0, line, maxCharacters);
	}
	template <typename T = bool> static T FindNextTag(Il2CppString* line, int32_t iStart, uintptr_t* tagStart, uintptr_t* tagEnd) {
		return ((T (*)(void *, Il2CppString*, int32_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x422110C))(0, line, iStart, tagStart, tagEnd);
	}
	template <typename T = Il2CppString*> static T RemoveTags(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4220CA0))(0, text);
	}
	template <typename T = bool> static T RemoveResourcesPath(uintptr_t sPath) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4221364))(0, sPath);
	}
	template <typename T = bool> static T IsPlaying() {
		return ((T (*)(void *))(Il2CppBase() + 0x42216C4))(0);
	}
	template <typename T = Il2CppString*> static T GetPath(uintptr_t tr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422171C))(0, tr);
	}
	template <typename T = uintptr_t> static T FindObject(Il2CppString* objectPath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422184C))(0, objectPath);
	}
	template <typename T = uintptr_t> static T FindObject_1(uintptr_t scene, Il2CppString* objectPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42218B8))(0, scene, objectPath);
	}
	template <typename T = uintptr_t> static T FindObject_2(uintptr_t root, Il2CppString* objectPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4221AB8))(0, root, objectPath);
	}
	template <typename T = uintptr_t> static T FindInParents(uintptr_t tr) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, tr);
	}
	template <typename T = Il2CppString*> static T GetCaptureMatch(uintptr_t match) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x421D2E0))(0, match);
	}
	template <typename T = void> static T SendWebRequest(uintptr_t www) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4221C94))(0, www);
	}

};

}
