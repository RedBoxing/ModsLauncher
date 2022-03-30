#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsData"));
	}

	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& True() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& False() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T CreateDictionary() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D07B38))(0);
	}
	template <typename T = uintptr_t> static T CreateList() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D155A4))(0);
	}
	template <typename T = uintptr_t> static T CreateList_1(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D057B0))(0, capacity);
	}
	template <typename T = void> T BecomeDictionary() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D15664))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D1570C))(this);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B860))(this);
	}
	template <typename T = bool> T get_IsNull() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D157C4))(this);
	}
	template <typename T = bool> T get_IsDouble() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B5F0))(this);
	}
	template <typename T = bool> T get_IsInt64() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B728))(this);
	}
	template <typename T = bool> T get_IsBool() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D113C0))(this);
	}
	template <typename T = bool> T get_IsString() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0471C))(this);
	}
	template <typename T = bool> T get_IsDictionary() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D1582C))(this);
	}
	template <typename T = bool> T get_IsList() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D158F0))(this);
	}
	template <typename T = double> T get_AsDouble() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B698))(this);
	}
	template <typename T = int64_t> T get_AsInt64() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B7D0))(this);
	}
	template <typename T = bool> T get_AsBool() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0B560))(this);
	}
	template <typename T = Il2CppString*> T get_AsString() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D047C4))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T get_AsDictionary() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D07D3C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AsList() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D0587C))(this);
	}
	template <typename T = uintptr_t> T Cast() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D159B4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(fsData*, uintptr_t))(Il2CppBase() + 0x2D15BC8))(this, obj);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(fsData*, uintptr_t))(Il2CppBase() + 0x2D15C84))(this, other);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D16204))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D07C74))(0, a, b);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D16344))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D16460))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(fsData*, uintptr_t))(Il2CppBase() + 0x2D16468))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(fsData*))(Il2CppBase() + 0x2D16470))(this);
	}

};

}
