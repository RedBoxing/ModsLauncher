#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IEmail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IEmail"));
	}


	template <typename T = int32_t> T get_Uid() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Uid(int32_t value) {
		return ((T (*)(IEmail*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uintptr_t> T get_EmailType() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_EmailType(uintptr_t value) {
		return ((T (*)(IEmail*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(IEmail*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sender() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Sender(Il2CppString* value) {
		return ((T (*)(IEmail*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Details() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Details(Il2CppString* value) {
		return ((T (*)(IEmail*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Award() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Award(Il2CppString* value) {
		return ((T (*)(IEmail*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T get_IsAwarded() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_IsAwarded(bool value) {
		return ((T (*)(IEmail*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uint64_t> T get_GenerateTime() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_GenerateTime(uint64_t value) {
		return ((T (*)(IEmail*, uint64_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = uint64_t> T get_RemainTime() {
		return ((T (*)(IEmail*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_RemainTime(uint64_t value) {
		return ((T (*)(IEmail*, uint64_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppString*> T GetSerlizeArray(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(IEmail*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, emails);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T DeSerlize(Il2CppString* data) {
		return ((T (*)(IEmail*, Il2CppString*))(Il2CppBase() + 0x0))(this, data);
	}

};

}
