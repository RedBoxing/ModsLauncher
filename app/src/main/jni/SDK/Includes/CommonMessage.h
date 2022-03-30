#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommonMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonMessage"));
	}

	template <typename T = int32_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& intArray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& paramString() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(CommonMessage*, uintptr_t))(Il2CppBase() + 0x42752F8))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(CommonMessage*, uintptr_t))(Il2CppBase() + 0x42753EC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(CommonMessage*, uintptr_t))(Il2CppBase() + 0x42754E0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(CommonMessage*, uintptr_t))(Il2CppBase() + 0x42754E8))(this, P0);
	}

};

}
