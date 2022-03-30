#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TermData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TermData"));
	}

	template <typename T = Il2CppString*> T& Term() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TermType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Languages() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Flags() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Languages_Touch() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = Il2CppString*> T GetTranslation(int32_t idx, Il2CppString* specialization, bool editMode) {
		return ((T (*)(TermData*, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x173A418))(this, idx, specialization, editMode);
	}
	template <typename T = void> T SetTranslation(int32_t idx, Il2CppString* translation, Il2CppString* specialization) {
		return ((T (*)(TermData*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x173A6E4))(this, idx, translation, specialization);
	}
	template <typename T = void> T RemoveSpecialization(Il2CppString* specialization) {
		return ((T (*)(TermData*, Il2CppString*))(Il2CppBase() + 0x173A948))(this, specialization);
	}
	template <typename T = void> T RemoveSpecialization_1(int32_t idx, Il2CppString* specialization) {
		return ((T (*)(TermData*, int32_t, Il2CppString*))(Il2CppBase() + 0x173A9EC))(this, idx, specialization);
	}
	template <typename T = bool> T IsAutoTranslated(int32_t idx, bool IsTouch) {
		return ((T (*)(TermData*, int32_t, bool))(Il2CppBase() + 0x173ABE4))(this, idx, IsTouch);
	}
	template <typename T = void> T Validate() {
		return ((T (*)(TermData*))(Il2CppBase() + 0x173AD90))(this);
	}
	template <typename T = bool> T IsTerm(Il2CppString* name, bool allowCategoryMistmatch) {
		return ((T (*)(TermData*, Il2CppString*, bool))(Il2CppBase() + 0x173B15C))(this, name, allowCategoryMistmatch);
	}
	template <typename T = bool> T HasSpecializations() {
		return ((T (*)(TermData*))(Il2CppBase() + 0x173B340))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAllSpecializations() {
		return ((T (*)(TermData*))(Il2CppBase() + 0x173B4A8))(this);
	}

};

}
