#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugLogConsole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugLogConsole"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& methods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> static T& parseFunctions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& typeReadableNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T& commandArguments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& inputDelimiters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T LogAllCommands() {
		return ((T (*)(void *))(Il2CppBase() + 0x19C952C))(0);
	}
	template <typename T = void> static T LogSystemInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x19C9978))(0);
	}
	template <typename T = uintptr_t> static T AppendSysInfoIfPresent(uintptr_t sb, Il2CppString* info, Il2CppString* postfix) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19CA4AC))(0, sb, info, postfix);
	}
	template <typename T = uintptr_t> static T AppendSysInfoIfPresent_1(uintptr_t sb, int32_t info, Il2CppString* postfix) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x19CA5C0))(0, sb, info, postfix);
	}
	template <typename T = void> static T AddCommandInstance(Il2CppString* command, Il2CppString* description, Il2CppString* methodName, uintptr_t instance) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19CA6C0))(0, command, description, methodName, instance);
	}
	template <typename T = void> static T AddCommandStatic(Il2CppString* command, Il2CppString* description, Il2CppString* methodName, uintptr_t ownerType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x19C9450))(0, command, description, methodName, ownerType);
	}
	template <typename T = void> static T RemoveCommand(Il2CppString* command) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19CA8CC))(0, command);
	}
	template <typename T = Il2CppString*> static T GetAutoCompleteCommand(Il2CppString* commandStart) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19CA9AC))(0, commandStart);
	}
	template <typename T = void> static T AddCommand(Il2CppString* command, Il2CppString* description, Il2CppString* methodName, uintptr_t ownerType, uintptr_t instance) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19CA7F8))(0, command, description, methodName, ownerType, instance);
	}
	template <typename T = void> static T AddCommand_1(Il2CppString* command, Il2CppString* description, uintptr_t method, uintptr_t instance) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19C9384))(0, command, description, method, instance);
	}
	template <typename T = void> static T ExecuteCommand(Il2CppString* command) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19C72A8))(0, command);
	}
	template <typename T = int32_t> static T IndexOfDelimiter(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x19CAC50))(0, c);
	}
	template <typename T = int32_t> static T IndexOfChar(Il2CppString* command, char c, int32_t startIndex) {
		return ((T (*)(void *, Il2CppString*, char, int32_t))(Il2CppBase() + 0x19CAB90))(0, command, c, startIndex);
	}
	template <typename T = bool> static T ParseString(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CADB8))(0, input, output);
	}
	template <typename T = bool> static T ParseBool(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CAE44))(0, input, output);
	}
	template <typename T = bool> static T ParseInt(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CAFDC))(0, input, output);
	}
	template <typename T = bool> static T ParseUInt(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB0A0))(0, input, output);
	}
	template <typename T = bool> static T ParseLong(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB164))(0, input, output);
	}
	template <typename T = bool> static T ParseULong(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB230))(0, input, output);
	}
	template <typename T = bool> static T ParseByte(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB2FC))(0, input, output);
	}
	template <typename T = bool> static T ParseSByte(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB3C0))(0, input, output);
	}
	template <typename T = bool> static T ParseShort(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB484))(0, input, output);
	}
	template <typename T = bool> static T ParseUShort(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB548))(0, input, output);
	}
	template <typename T = bool> static T ParseChar(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB60C))(0, input, output);
	}
	template <typename T = bool> static T ParseFloat(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB6E8))(0, input, output);
	}
	template <typename T = bool> static T ParseDouble(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB7AC))(0, input, output);
	}
	template <typename T = bool> static T ParseDecimal(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB890))(0, input, output);
	}
	template <typename T = bool> static T ParseVector2(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CB974))(0, input, output);
	}
	template <typename T = bool> static T ParseVector3(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CC120))(0, input, output);
	}
	template <typename T = bool> static T ParseVector4(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CC218))(0, input, output);
	}
	template <typename T = bool> static T ParseGameObject(Il2CppString* input, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x19CC310))(0, input, output);
	}
	template <typename T = bool> static T CreateVectorFromInput(Il2CppString* input, uintptr_t vectorType, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x19CBA6C))(0, input, vectorType, output);
	}

};

}
