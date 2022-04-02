#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal.DirectConverters {

class RectDirectConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal.DirectConverters", "Rect_DirectConverter"));
	}


	template <typename T = uintptr_t> T DoSerialize(Il2CppRect model, Il2CppDictionary<Il2CppString*, uintptr_t>* serialized) {
		return ((T (*)(RectDirectConverter*, Il2CppRect, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4517D0C))(this, model, serialized);
	}
	template <typename T = uintptr_t> T DoDeserialize(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t model) {
		return ((T (*)(RectDirectConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4517F54))(this, data, model);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(RectDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45181D0))(this, data, storageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RectDirectConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45182E0))(this, P0, P1);
	}

};

}
