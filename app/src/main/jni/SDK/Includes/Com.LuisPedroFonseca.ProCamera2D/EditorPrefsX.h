#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class EditorPrefsX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "EditorPrefsX"));
	}

	template <typename T = int32_t> static T& endianDiff1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& endianDiff2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& idx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& byteBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T SetBool(Il2CppString* name, bool value) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x207CFB4))(0, name, value);
	}
	template <typename T = bool> static T GetBool(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207D028))(0, name);
	}
	template <typename T = bool> static T GetBool_1(Il2CppString* name, bool defaultValue) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x207D088))(0, name, defaultValue);
	}
	template <typename T = int64_t> static T GetLong(Il2CppString* key, int64_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0x207D0FC))(0, key, defaultValue);
	}
	template <typename T = int64_t> static T GetLong_1(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207D170))(0, key);
	}
	template <typename T = void> static T SplitLong(int64_t input, uintptr_t* lowBits, uintptr_t* highBits) {
		return ((T (*)(void *, int64_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x207D1D0))(0, input, lowBits, highBits);
	}
	template <typename T = void> static T SetLong(Il2CppString* key, int64_t value) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0x207D254))(0, key, value);
	}
	template <typename T = bool> static T SetVector2(Il2CppString* key, Il2CppVector2 vector) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x207D2C4))(0, key, vector);
	}
	template <typename T = Il2CppVector2> static T GetVector2(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207D4AC))(0, key);
	}
	template <typename T = Il2CppVector2> static T GetVector2_1(Il2CppString* key, Il2CppVector2 defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector2))(Il2CppBase() + 0x207D6DC))(0, key, defaultValue);
	}
	template <typename T = bool> static T SetVector3(Il2CppString* key, Il2CppVector3 vector) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x207D79C))(0, key, vector);
	}
	template <typename T = Il2CppVector3> static T GetVector3(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207D8D0))(0, key);
	}
	template <typename T = Il2CppVector3> static T GetVector3_1(Il2CppString* key, Il2CppVector3 defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x207DA14))(0, key, defaultValue);
	}
	template <typename T = bool> static T SetQuaternion(Il2CppString* key, Il2CppQuaternion vector) {
		return ((T (*)(void *, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x207DAE8))(0, key, vector);
	}
	template <typename T = Il2CppQuaternion> static T GetQuaternion(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207DC44))(0, key);
	}
	template <typename T = Il2CppQuaternion> static T GetQuaternion_1(Il2CppString* key, Il2CppQuaternion defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x207DDB0))(0, key, defaultValue);
	}
	template <typename T = bool> static T SetColor(Il2CppString* key, uintptr_t color) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x207DE8C))(0, key, color);
	}
	template <typename T = uintptr_t> static T GetColor(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207DFE8))(0, key);
	}
	template <typename T = uintptr_t> static T GetColor_1(Il2CppString* key, uintptr_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x207E120))(0, key, defaultValue);
	}
	template <typename T = bool> static T SetBoolArray(Il2CppString* key, Il2CppArray<uintptr_t>* boolArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207E1B8))(0, key, boolArray);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBoolArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207E638))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetBoolArray_1(Il2CppString* key, bool defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x207E958))(0, key, defaultValue, defaultSize);
	}
	template <typename T = bool> static T SetStringArray(Il2CppString* key, Il2CppArray<uintptr_t>* stringArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207EA04))(0, key, stringArray);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStringArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207EA78))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStringArray_1(Il2CppString* key, Il2CppString* defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x207EB08))(0, key, defaultValue, defaultSize);
	}
	template <typename T = bool> static T SetIntArray(Il2CppString* key, Il2CppArray<uintptr_t>* intArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207EBB4))(0, key, intArray);
	}
	template <typename T = bool> static T SetFloatArray(Il2CppString* key, Il2CppArray<uintptr_t>* floatArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207D3C4))(0, key, floatArray);
	}
	template <typename T = bool> static T SetVector2Array(Il2CppString* key, Il2CppArray<uintptr_t>* vector2Array) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207EC9C))(0, key, vector2Array);
	}
	template <typename T = bool> static T SetVector3Array(Il2CppString* key, Il2CppArray<uintptr_t>* vector3Array) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207ED84))(0, key, vector3Array);
	}
	template <typename T = bool> static T SetQuaternionArray(Il2CppString* key, Il2CppArray<uintptr_t>* quaternionArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207EE6C))(0, key, quaternionArray);
	}
	template <typename T = bool> static T SetColorArray(Il2CppString* key, Il2CppArray<uintptr_t>* colorArray) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207EF54))(0, key, colorArray);
	}
	template <typename T = bool> static T SetValue(Il2CppString* key, uintptr_t array, uintptr_t arrayType, int32_t vectorNumber, void* convert) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x0))(0, key, array, arrayType, vectorNumber, convert);
	}
	template <typename T = void> static T ConvertFromInt(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F03C))(0, array, bytes, i);
	}
	template <typename T = void> static T ConvertFromFloat(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F0EC))(0, array, bytes, i);
	}
	template <typename T = void> static T ConvertFromVector2(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F274))(0, array, bytes, i);
	}
	template <typename T = void> static T ConvertFromVector3(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F34C))(0, array, bytes, i);
	}
	template <typename T = void> static T ConvertFromQuaternion(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F460))(0, array, bytes, i);
	}
	template <typename T = void> static T ConvertFromColor(Il2CppArray<uintptr_t>* array, Il2CppArray<uintptr_t>* bytes, int32_t i) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x207F598))(0, array, bytes, i);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIntArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207F6D0))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetIntArray_1(Il2CppString* key, int32_t defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x207F7F4))(0, key, defaultValue, defaultSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFloatArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207D5B8))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFloatArray_1(Il2CppString* key, float defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, float, int32_t))(Il2CppBase() + 0x207F8A0))(0, key, defaultValue, defaultSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetVector2Array(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207F958))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetVector2Array_1(Il2CppString* key, Il2CppVector2 defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector2, int32_t))(Il2CppBase() + 0x207FA7C))(0, key, defaultValue, defaultSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetVector3Array(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207FB3C))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetVector3Array_1(Il2CppString* key, Il2CppVector3 defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, int32_t))(Il2CppBase() + 0x207FC60))(0, key, defaultValue, defaultSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetQuaternionArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207FD34))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetQuaternionArray_1(Il2CppString* key, Il2CppQuaternion defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, Il2CppQuaternion, int32_t))(Il2CppBase() + 0x207FE58))(0, key, defaultValue, defaultSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetColorArray(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x207FF34))(0, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetColorArray_1(Il2CppString* key, uintptr_t defaultValue, int32_t defaultSize) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x2080058))(0, key, defaultValue, defaultSize);
	}
	template <typename T = void> static T GetValue(Il2CppString* key, uintptr_t list, uintptr_t arrayType, int32_t vectorNumber, void* convert) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, int32_t, void*))(Il2CppBase() + 0x0))(0, key, list, arrayType, vectorNumber, convert);
	}
	template <typename T = void> static T ConvertToInt(Il2CppList<int32_t>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<int32_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2080134))(0, list, bytes);
	}
	template <typename T = void> static T ConvertToFloat(Il2CppList<float>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<float>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20801F4))(0, list, bytes);
	}
	template <typename T = void> static T ConvertToVector2(Il2CppList<Il2CppVector2>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<Il2CppVector2>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2080388))(0, list, bytes);
	}
	template <typename T = void> static T ConvertToVector3(Il2CppList<Il2CppVector3>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<Il2CppVector3>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2080484))(0, list, bytes);
	}
	template <typename T = void> static T ConvertToQuaternion(Il2CppList<Il2CppQuaternion>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<Il2CppQuaternion>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2080598))(0, list, bytes);
	}
	template <typename T = void> static T ConvertToColor(Il2CppList<uintptr_t>* list, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20806C4))(0, list, bytes);
	}
	template <typename T = void> static T ShowArrayType(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x20807F0))(0, key);
	}
	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x207E3DC))(0);
	}
	template <typename T = bool> static T SaveBytes(Il2CppString* key, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207E5C4))(0, key, bytes);
	}
	template <typename T = void> static T ConvertFloatToBytes(float f, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207F19C))(0, f, bytes);
	}
	template <typename T = float> static T ConvertBytesToFloat(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20802C0))(0, bytes);
	}
	template <typename T = void> static T ConvertInt32ToBytes(int32_t i, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207E4EC))(0, i, bytes);
	}
	template <typename T = int32_t> static T ConvertBytesToInt32(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x207E890))(0, bytes);
	}
	template <typename T = void> static T ConvertTo4Bytes(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x208084C))(0, bytes);
	}
	template <typename T = void> static T ConvertFrom4Bytes(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2080ADC))(0, bytes);
	}

};

}
