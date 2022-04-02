#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal.DirectConverters {

class KeyframeDirectConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal.DirectConverters", "Keyframe_DirectConverter"));
	}


	template <typename T = uintptr_t> T DoSerialize(uintptr_t model, Il2CppDictionary<Il2CppString*, uintptr_t>* serialized) {
		return ((T (*)(KeyframeDirectConverter*, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4516C90))(this, model, serialized);
	}
	template <typename T = uintptr_t> T DoDeserialize(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t model) {
		return ((T (*)(KeyframeDirectConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4516F08))(this, data, model);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(KeyframeDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45171F8))(this, data, storageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(KeyframeDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4517310))(this, P0, P1);
	}

};

}
