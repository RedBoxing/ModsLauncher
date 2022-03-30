#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IllegalWordDetection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IllegalWordDetection"));
	}

	template <typename T = void*> static T& wordsSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& fastCheck() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& fastLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& startCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dectectedBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& SkipList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& SkipBitArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& endCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = bool> static T& inited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> static T get_IsInited() {
		return ((T (*)(void *))(Il2CppBase() + 0x19C3AB8))(0);
	}
	template <typename T = void> static T Init(Il2CppArray<uintptr_t>* badwords) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19C3B54))(0, badwords);
	}
	template <typename T = Il2CppString*> static T OriginalToLower(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19C4190))(0, text);
	}
	template <typename T = bool> static T EnsuranceLower(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19C4240))(0, text);
	}
	template <typename T = Il2CppString*> static T Filter(Il2CppString* text, Il2CppString* mask) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19C42F0))(0, text, mask);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> static T DetectIllegalWords(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19C451C))(0, text);
	}

};

}
