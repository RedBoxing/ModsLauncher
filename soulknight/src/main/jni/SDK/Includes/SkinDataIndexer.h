#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinDataIndexer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinDataIndexer"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skinIndexerArr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skinDataArr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& clipList() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T GetSkinData(int32_t idx) {
		return ((T (*)(SkinDataIndexer*, int32_t))(Il2CppBase() + 0x1834A88))(this, idx);
	}
	template <typename T = uintptr_t> T GetSkinAudioClip(int32_t idx) {
		return ((T (*)(SkinDataIndexer*, int32_t))(Il2CppBase() + 0x1834C88))(this, idx);
	}

};

}
