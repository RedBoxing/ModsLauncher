#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSONArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSONArray"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Item(int32_t aIndex) {
		return ((T (*)(JSONArray*, int32_t))(Il2CppBase() + 0x45F1B74))(this, aIndex);
	}
	template <typename T = void> T set_Item(int32_t aIndex, uintptr_t value) {
		return ((T (*)(JSONArray*, int32_t, uintptr_t))(Il2CppBase() + 0x45F1C8C))(this, aIndex, value);
	}
	template <typename T = uintptr_t> T get_Item_1(Il2CppString* aKey) {
		return ((T (*)(JSONArray*, Il2CppString*))(Il2CppBase() + 0x45F1DB4))(this, aKey);
	}
	template <typename T = void> T set_Item_1(Il2CppString* aKey, uintptr_t value) {
		return ((T (*)(JSONArray*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45F1E6C))(this, aKey, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F1F2C))(this);
	}
	template <typename T = void> T Add(Il2CppString* aKey, uintptr_t aItem) {
		return ((T (*)(JSONArray*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45F1FCC))(this, aKey, aItem);
	}
	template <typename T = uintptr_t> T Remove(int32_t aIndex) {
		return ((T (*)(JSONArray*, int32_t))(Il2CppBase() + 0x45F208C))(this, aIndex);
	}
	template <typename T = uintptr_t> T Remove_1(uintptr_t aNode) {
		return ((T (*)(JSONArray*, uintptr_t))(Il2CppBase() + 0x45F21B0))(this, aNode);
	}
	template <typename T = void*> T get_Childs() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F2270))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F236C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F244C))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* aPrefix) {
		return ((T (*)(JSONArray*, Il2CppString*))(Il2CppBase() + 0x45F2654))(this, aPrefix);
	}
	template <typename T = void> T Serialize(uintptr_t aWriter) {
		return ((T (*)(JSONArray*, uintptr_t))(Il2CppBase() + 0x45F28C0))(this, aWriter);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item(int32_t P0) {
		return ((T (*)(JSONArray*, int32_t))(Il2CppBase() + 0x45F2AA8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item(int32_t P0, uintptr_t P1) {
		return ((T (*)(JSONArray*, int32_t, uintptr_t))(Il2CppBase() + 0x45F2AB0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_Item_1(Il2CppString* P0) {
		return ((T (*)(JSONArray*, Il2CppString*))(Il2CppBase() + 0x45F2AB8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_set_Item_1(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONArray*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45F2AC0))(this, P0, P1);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_Count() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F2AC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Add(Il2CppString* P0, uintptr_t P1) {
		return ((T (*)(JSONArray*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x45F2AD0))(this, P0, P1);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Remove(int32_t P0) {
		return ((T (*)(JSONArray*, int32_t))(Il2CppBase() + 0x45F2AD8))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Remove_1(uintptr_t P0) {
		return ((T (*)(JSONArray*, uintptr_t))(Il2CppBase() + 0x45F2AE0))(this, P0);
	}
	template <typename T = void*> T iFixBaseProxy_get_Childs() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F2AE8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(JSONArray*))(Il2CppBase() + 0x45F2AF0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString_1(Il2CppString* P0) {
		return ((T (*)(JSONArray*, Il2CppString*))(Il2CppBase() + 0x45F2AF8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(JSONArray*, uintptr_t))(Il2CppBase() + 0x45F2B00))(this, P0);
	}

};

}
