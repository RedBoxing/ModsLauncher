#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIDownloadObb
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDownloadObb"));
	}

	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_obbDownloader() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIDownloadObb*))(Il2CppBase() + 0x432FDEC))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(UIDownloadObb*))(Il2CppBase() + 0x4330054))(this);
	}

};

}
