#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal.DirectConverters {

class GUIStyleDirectConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal.DirectConverters", "GUIStyle_DirectConverter"));
	}


	template <typename T = uintptr_t> T DoSerialize(uintptr_t model, Il2CppDictionary<Il2CppString*, uintptr_t>* serialized) {
		return ((T (*)(GUIStyleDirectConverter*, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4514CB8))(this, model, serialized);
	}
	template <typename T = uintptr_t> T DoDeserialize(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t model) {
		return ((T (*)(GUIStyleDirectConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4515738))(this, data, model);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(GUIStyleDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45166C8))(this, data, storageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(GUIStyleDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45167D4))(this, P0, P1);
	}

};

}
