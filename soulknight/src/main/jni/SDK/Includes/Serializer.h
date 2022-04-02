#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Serializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Serializer"));
	}

	template <typename T = uintptr_t> T& builder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& func() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> static T Serialize(uintptr_t obj, void* func) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x1E3B390))(0, obj, func);
	}
	template <typename T = void> T SerializeValue(uintptr_t value) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1E3B49C))(this, value);
	}
	template <typename T = void> T SerializeObject(uintptr_t obj) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1E3BCF8))(this, obj);
	}
	template <typename T = void> T SerializeArray(uintptr_t anArray) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1E3B9B0))(this, anArray);
	}
	template <typename T = void> T SerializeString(Il2CppString* str) {
		return ((T (*)(Serializer*, Il2CppString*))(Il2CppBase() + 0x1E3B6A0))(this, str);
	}
	template <typename T = void> T SerializeOther(uintptr_t value) {
		return ((T (*)(Serializer*, uintptr_t))(Il2CppBase() + 0x1E3C18C))(this, value);
	}

};

}
