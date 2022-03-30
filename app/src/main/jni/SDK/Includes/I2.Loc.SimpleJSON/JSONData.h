#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc.SimpleJSON {

class JSONData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc.SimpleJSON", "JSONData"));
	}

	template <typename T = Il2CppString*> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(JSONData*))(Il2CppBase() + 0x1733F30))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(JSONData*, Il2CppString*))(Il2CppBase() + 0x1733F8C))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JSONData*))(Il2CppBase() + 0x1734128))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(Il2CppString* aPrefix) {
		return ((T (*)(JSONData*, Il2CppString*))(Il2CppBase() + 0x17341C8))(this, aPrefix);
	}
	template <typename T = void> T Serialize(uintptr_t aWriter) {
		return ((T (*)(JSONData*, uintptr_t))(Il2CppBase() + 0x173427C))(this, aWriter);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_get_Value() {
		return ((T (*)(JSONData*))(Il2CppBase() + 0x1734608))(this);
	}
	template <typename T = void> T iFixBaseProxy_set_Value(Il2CppString* P0) {
		return ((T (*)(JSONData*, Il2CppString*))(Il2CppBase() + 0x1734694))(this, P0);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(JSONData*))(Il2CppBase() + 0x1734704))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString_1(Il2CppString* P0) {
		return ((T (*)(JSONData*, Il2CppString*))(Il2CppBase() + 0x1734708))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(JSONData*, uintptr_t))(Il2CppBase() + 0x173470C))(this, P0);
	}

};

}
