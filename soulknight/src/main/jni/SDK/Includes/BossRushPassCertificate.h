#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossRushPassCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossRushPassCertificate"));
	}

	template <typename T = uintptr_t> T& bgConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& magicStone() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& certBg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& goldenCertBg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Display(uintptr_t data, uintptr_t bg) {
		return ((T (*)(BossRushPassCertificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DEC3D0))(this, data, bg);
	}
	template <typename T = void> T AddStatCategory(Il2CppString* text, int32_t value) {
		return ((T (*)(BossRushPassCertificate*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DEE8EC))(this, text, value);
	}
	template <typename T = bool> T Match(uintptr_t data) {
		return ((T (*)(BossRushPassCertificate*, uintptr_t))(Il2CppBase() + 0x1DEEB8C))(this, data);
	}

};

}
