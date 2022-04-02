#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PaperTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PaperTask"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& txEnemy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& imDone() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& factors() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = uintptr_t> T get_uiTask() {
		return ((T (*)(PaperTask*))(Il2CppBase() + 0x456FAC0))(this);
	}
	template <typename T = void> T OnClick_Task() {
		return ((T (*)(PaperTask*))(Il2CppBase() + 0x456FB50))(this);
	}
	template <typename T = uintptr_t> T SetState() {
		return ((T (*)(PaperTask*))(Il2CppBase() + 0x456FD14))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(PaperTask*, uintptr_t))(Il2CppBase() + 0x456FDF4))(this, data);
	}

};

}
