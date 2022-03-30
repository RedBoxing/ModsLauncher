#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsDateConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsDateConverter"));
	}

	template <typename T = Il2CppString*> static T& DefaultDateTimeFormatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DateTimeOffsetFormatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_DateTimeFormatString() {
		return ((T (*)(fsDateConverter*))(Il2CppBase() + 0x451961C))(this);
	}
	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsDateConverter*, uintptr_t))(Il2CppBase() + 0x45196D4))(this, type);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsDateConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x4519848))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsDateConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4519A58))(this, data, instance, storageType);
	}

};

}
