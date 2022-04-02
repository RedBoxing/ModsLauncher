#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampRootGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampRootGenerator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& spriteModels() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& countDensityRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& rootPositionOffset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& rootSortingLayerName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& rootSortingOrder() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _positionList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<int32_t>*> T& _positionIndexBufferList() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnRoomCreated(uintptr_t roomX) {
		return ((T (*)(SwampRootGenerator*, uintptr_t))(Il2CppBase() + 0x18B7BE0))(this, roomX);
	}

};

}
