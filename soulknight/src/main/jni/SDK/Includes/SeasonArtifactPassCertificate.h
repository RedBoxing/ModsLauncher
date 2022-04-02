#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonArtifactPassCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonArtifactPassCertificate"));
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
		return ((T (*)(SeasonArtifactPassCertificate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1819754))(this, data, bg);
	}
	template <typename T = void> T AddStatCategory(uintptr_t parent, Il2CppString* text, int32_t value) {
		return ((T (*)(SeasonArtifactPassCertificate*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x181ACA0))(this, parent, text, value);
	}
	template <typename T = bool> T Match(uintptr_t data) {
		return ((T (*)(SeasonArtifactPassCertificate*, uintptr_t))(Il2CppBase() + 0x181B910))(this, data);
	}
	template <typename T = void> T DisplayParts(Il2CppArray<uintptr_t>* parts) {
		return ((T (*)(SeasonArtifactPassCertificate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x181AF4C))(this, parts);
	}
	template <typename T = bool> T Displayb__4_0(uintptr_t obj) {
		return ((T (*)(SeasonArtifactPassCertificate*, uintptr_t))(Il2CppBase() + 0x181B9EC))(this, obj);
	}

};

}
