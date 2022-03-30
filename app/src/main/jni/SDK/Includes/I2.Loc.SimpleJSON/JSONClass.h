#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSONClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSONClass"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_Dict() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Item(Il2CppString* aKey) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x1730DA0))(this, aKey);
	}
	template <typename T = void> T set_Item(Il2CppString* aKey, uintptr_t value) {
		return ((T (*)(JSONClass*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1730FF8))(this, aKey, value);
	}
	template <typename T = uintptr_t> T get_Item_1(int32_t aIndex) {
		return ((T (*)(JSONClass*, int32_t))(Il2CppBase() + 0x17311FC))(this, aIndex);
	}
	template <typename T = void> T set_Item_1(int32_t aIndex, uintptr_t value) {
		return ((T (*)(JSONClass*, int32_t, uintptr_t))(Il2CppBase() + 0x1731410))(this, aIndex, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x173162C))(this);
	}
	template <typename T = void> T Add(Il2CppString* aKey, uintptr_t aItem) {
		return ((T (*)(JSONClass*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1731798))(this, aKey, aItem);
	}
	template <typename T = uintptr_t> T Remove(Il2CppString* aKey) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x173191C))(this, aKey);
	}
	template <typename T = uintptr_t> T Remove_1(int32_t aIndex) {
		return ((T (*)(JSONClass*, int32_t))(Il2CppBase() + 0x1731A38))(this, aIndex);
	}
	template <typename T = uintptr_t> T Remove_2(uintptr_t aNode) {
		return ((T (*)(JSONClass*, uintptr_t))(Il2CppBase() + 0x1731B78))(this, aNode);
	}
	template <typename T = void*> T get_Childs() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x1731D70))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x1731F64))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x173213C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* aPrefix) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x1732828))(this, aPrefix);
	}
	template <typename T = void> T Serialize(uintptr_t aWriter) {
		return ((T (*)(JSONClass*, uintptr_t))(Il2CppBase() + 0x1732DE8))(this, aWriter);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item(Il2CppString* P0) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x17331BC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONClass*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1733230))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item_1(int32_t P0) {
		return ((T (*)(JSONClass*, int32_t))(Il2CppBase() + 0x17332A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item_1(int32_t P0, uintptr_t P1) {
		return ((T (*)(JSONClass*, int32_t, uintptr_t))(Il2CppBase() + 0x173331C))(this, P0, P1);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_Count() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x1733394))(this);
	}
	template <typename T = void> T iFixBaseProxy_Add(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONClass*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x17333F4))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Remove(Il2CppString* P0) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x173346C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Remove_1(int32_t P0) {
		return ((T (*)(JSONClass*, int32_t))(Il2CppBase() + 0x17334E0))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Remove_2(uintptr_t P0) {
		return ((T (*)(JSONClass*, uintptr_t))(Il2CppBase() + 0x1733554))(this, P0);
	}
	template <typename T = void*> T iFixBaseProxy_get_Childs() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x17335C8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(JSONClass*))(Il2CppBase() + 0x173367C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString_1(Il2CppString* P0) {
		return ((T (*)(JSONClass*, Il2CppString*))(Il2CppBase() + 0x1733708))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(JSONClass*, uintptr_t))(Il2CppBase() + 0x17337A8))(this, P0);
	}

};

}
