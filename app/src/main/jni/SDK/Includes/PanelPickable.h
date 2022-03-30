#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PanelPickable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PanelPickable"));
	}

	template <typename T = uintptr_t> T& protoSeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& protoMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& protoBlueprint() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& inited() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& itemSeeds() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& itemBlueprints() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& itemMaterials() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PanelPickable*))(Il2CppBase() + 0x4566200))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PanelPickable*))(Il2CppBase() + 0x4566260))(this);
	}
	template <typename T = void> T FlushPickable(Il2CppList<uintptr_t>* pickables) {
		return ((T (*)(PanelPickable*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x456647C))(this, pickables);
	}
	template <typename T = void> T FlushPickable_1(Il2CppDictionary<Il2CppString*, int32_t>* name2Count) {
		return ((T (*)(PanelPickable*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x4566DC0))(this, name2Count);
	}
	template <typename T = void> T ClearAll() {
		return ((T (*)(PanelPickable*))(Il2CppBase() + 0x456699C))(this);
	}
	template <typename T = uintptr_t> T GetItem(uintptr_t pickableType) {
		return ((T (*)(PanelPickable*, uintptr_t))(Il2CppBase() + 0x4566BD4))(this, pickableType);
	}

};

}
