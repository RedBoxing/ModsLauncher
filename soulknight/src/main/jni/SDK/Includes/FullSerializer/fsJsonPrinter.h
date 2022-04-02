#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsJsonPrinter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsJsonPrinter"));
	}


	template <typename T = void> static T InsertSpacing(uintptr_t stream, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2D18B7C))(0, stream, count);
	}
	template <typename T = Il2CppString*> static T EscapeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D18C4C))(0, str);
	}
	template <typename T = void> static T BuildCompressedString(uintptr_t data, uintptr_t stream) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D19030))(0, data, stream);
	}
	template <typename T = void> static T BuildPrettyString(uintptr_t data, uintptr_t stream, int32_t depth) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x2D19770))(0, data, stream, depth);
	}
	template <typename T = void> static T PrettyJson(uintptr_t data, uintptr_t outputStream) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D19E20))(0, data, outputStream);
	}
	template <typename T = Il2CppString*> static T PrettyJson_1(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D19E9C))(0, data);
	}
	template <typename T = void> static T CompressedJson(uintptr_t data, uintptr_t outputStream) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1A054))(0, data, outputStream);
	}
	template <typename T = Il2CppString*> static T CompressedJson_1(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D15A14))(0, data);
	}
	template <typename T = Il2CppString*> static T ConvertDoubleToString(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x2D19570))(0, d);
	}

};

}
