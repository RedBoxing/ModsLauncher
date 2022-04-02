#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CertificateData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CertificateData"));
	}

	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& cellarPassLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& characterIdx() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& characterSkinIdx() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& petIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& skillIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& date() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& killCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& gainCoin() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& dealDamage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& get() {
		return *(T*)((uintptr_t)this + 0x3C);
	}


};

}
