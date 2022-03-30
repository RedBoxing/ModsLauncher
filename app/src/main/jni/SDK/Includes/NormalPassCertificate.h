#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NormalPassCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NormalPassCertificate"));
	}

	template <typename T = uintptr_t> T& bgConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& magicStoneList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Display(uintptr_t data, uintptr_t bg) {
		return ((T (*)(NormalPassCertificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4524BB4))(this, data, bg);
	}
	template <typename T = void> T AddStatCategory(Il2CppString* text, int32_t value) {
		return ((T (*)(NormalPassCertificate*, Il2CppString*, int32_t))(Il2CppBase() + 0x4527334))(this, text, value);
	}
	template <typename T = bool> T Match(uintptr_t data) {
		return ((T (*)(NormalPassCertificate*, uintptr_t))(Il2CppBase() + 0x45275D4))(this, data);
	}

};

}
