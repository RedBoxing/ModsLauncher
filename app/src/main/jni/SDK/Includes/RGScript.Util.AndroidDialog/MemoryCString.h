#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class MemoryCString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "MemoryCString"));
	}

	template <typename T = uintptr_t> static T& UIText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T showAsToast(Il2CppString* text, uintptr_t activity) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x454F9DC))(0, text, activity);
	}
	template <typename T = uintptr_t> static T toJavaString(Il2CppString* CSharpString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x454DD14))(0, CSharpString);
	}
	template <typename T = Il2CppString*> static T toCString(uintptr_t javaString) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x454FCB4))(0, javaString);
	}
	template <typename T = void> static T showAtText(Il2CppString* textString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x454FDA4))(0, textString);
	}

};

}
