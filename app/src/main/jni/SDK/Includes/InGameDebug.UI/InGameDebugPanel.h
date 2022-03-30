#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace InGameDebug.UI {

class InGameDebugPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameDebug.UI", "InGameDebugPanel"));
	}

	template <typename T = uintptr_t> T& contentRectTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& templateDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& closeButton() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& dialogGO() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& debugViewButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& inspectorViewButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& debugViewGO() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& inspectorViewGO() {
		return *(T*)((uintptr_t)this + 0x90);
	}


};

}
