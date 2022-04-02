#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSecretKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSecretKey"));
	}

	template <typename T = int32_t> T& key_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& reward() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& expiry_date() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& hasOtherReward() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pickables() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& heroes() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<int32_t>*> T& skinIndexes() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}
