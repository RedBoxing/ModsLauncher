#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fAnonymousType02
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>f__AnonymousType0`2"));
	}

	template <typename T = uintptr_t> T& fileNamei__Field() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& filePathi__Field() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> T get_fileName() {
		return ((T (*)(fAnonymousType02*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_filePath() {
		return ((T (*)(fAnonymousType02*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(fAnonymousType02*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(fAnonymousType02*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(fAnonymousType02*))(Il2CppBase() + 0x0))(this);
	}

};

}
