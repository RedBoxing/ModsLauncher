#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace IngameDebugConsole {

class DebugsOnScrollListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IngameDebugConsole", "DebugsOnScrollListener"));
	}

	template <typename T = uintptr_t> T& debugsScrollRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& debugLogManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnScroll(uintptr_t data) {
		return ((T (*)(DebugsOnScrollListener*, uintptr_t))(Il2CppBase() + 0x1A421D8))(this, data);
	}
	template <typename T = void> T OnBeginDrag(uintptr_t data) {
		return ((T (*)(DebugsOnScrollListener*, uintptr_t))(Il2CppBase() + 0x1A42308))(this, data);
	}
	template <typename T = void> T OnEndDrag(uintptr_t data) {
		return ((T (*)(DebugsOnScrollListener*, uintptr_t))(Il2CppBase() + 0x1A42390))(this, data);
	}
	template <typename T = void> T OnScrollbarDragStart(uintptr_t data) {
		return ((T (*)(DebugsOnScrollListener*, uintptr_t))(Il2CppBase() + 0x1A42438))(this, data);
	}
	template <typename T = void> T OnScrollbarDragEnd(uintptr_t data) {
		return ((T (*)(DebugsOnScrollListener*, uintptr_t))(Il2CppBase() + 0x1A424C0))(this, data);
	}
	template <typename T = bool> T IsScrollbarAtBottom() {
		return ((T (*)(DebugsOnScrollListener*))(Il2CppBase() + 0x1A42280))(this);
	}

};

}
