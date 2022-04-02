#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActions"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& actionList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(ObjectActions*))(Il2CppBase() + 0x1D46B14))(this);
	}
	template <typename T = void> T InitActions() {
		return ((T (*)(ObjectActions*))(Il2CppBase() + 0x1D46B74))(this);
	}
	template <typename T = void> T Todo(uintptr_t info, uintptr_t sequence, bool join) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D46EC4))(this, info, sequence, join);
	}
	template <typename T = void> T Todo_1(uintptr_t info, uintptr_t sequence) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D471B8))(this, info, sequence);
	}
	template <typename T = void> T Todo_2(uintptr_t info, uintptr_t sequence) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D472B8))(this, info, sequence);
	}
	template <typename T = void> T Todo_3(uintptr_t info, uintptr_t sequence, bool join) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D47348))(this, info, sequence, join);
	}
	template <typename T = void> T Todo_4(uintptr_t info, uintptr_t sequence, bool join) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1D477E0))(this, info, sequence, join);
	}
	template <typename T = void> T Todo_5(uintptr_t info, uintptr_t sequence) {
		return ((T (*)(ObjectActions*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D47A6C))(this, info, sequence);
	}

};

}
