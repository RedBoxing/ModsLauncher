#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsMetaProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsMetaProperty"));
	}

	template <typename T = uintptr_t> T& _memberInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& StorageType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OverrideConverterType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& CanRead() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& CanWrite() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = Il2CppString*> T& JsonName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& MemberName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsPublic() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsReadOnly() {
		return *(T*)((uintptr_t)this + 0x41);
	}

	template <typename T = void> T CommonInitialize(uintptr_t config) {
		return ((T (*)(fsMetaProperty*, uintptr_t))(Il2CppBase() + 0x2D07EFC))(this, config);
	}
	template <typename T = uintptr_t> T get_StorageType() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D03590))(this);
	}
	template <typename T = void> T set_StorageType(uintptr_t value) {
		return ((T (*)(fsMetaProperty*, uintptr_t))(Il2CppBase() + 0x2D07EBC))(this, value);
	}
	template <typename T = uintptr_t> T get_OverrideConverterType() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D08224))(this);
	}
	template <typename T = void> T set_OverrideConverterType(uintptr_t value) {
		return ((T (*)(fsMetaProperty*, uintptr_t))(Il2CppBase() + 0x2D08214))(this, value);
	}
	template <typename T = bool> T get_CanRead() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D0822C))(this);
	}
	template <typename T = void> T set_CanRead(bool value) {
		return ((T (*)(fsMetaProperty*, bool))(Il2CppBase() + 0x2D07EE4))(this, value);
	}
	template <typename T = bool> T get_CanWrite() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D08234))(this);
	}
	template <typename T = void> T set_CanWrite(bool value) {
		return ((T (*)(fsMetaProperty*, bool))(Il2CppBase() + 0x2D07EF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_JsonName() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D0821C))(this);
	}
	template <typename T = void> T set_JsonName(Il2CppString* value) {
		return ((T (*)(fsMetaProperty*, Il2CppString*))(Il2CppBase() + 0x2D0820C))(this, value);
	}
	template <typename T = Il2CppString*> T get_MemberName() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D02EF0))(this);
	}
	template <typename T = void> T set_MemberName(Il2CppString* value) {
		return ((T (*)(fsMetaProperty*, Il2CppString*))(Il2CppBase() + 0x2D07EC4))(this, value);
	}
	template <typename T = bool> T get_IsPublic() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D0823C))(this);
	}
	template <typename T = void> T set_IsPublic(bool value) {
		return ((T (*)(fsMetaProperty*, bool))(Il2CppBase() + 0x2D07ECC))(this, value);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(fsMetaProperty*))(Il2CppBase() + 0x2D08244))(this);
	}
	template <typename T = void> T set_IsReadOnly(bool value) {
		return ((T (*)(fsMetaProperty*, bool))(Il2CppBase() + 0x2D07ED8))(this, value);
	}
	template <typename T = void> T Write(uintptr_t context, uintptr_t value) {
		return ((T (*)(fsMetaProperty*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D038C0))(this, context, value);
	}
	template <typename T = uintptr_t> T Read(uintptr_t context) {
		return ((T (*)(fsMetaProperty*, uintptr_t))(Il2CppBase() + 0x2D03290))(this, context);
	}

};

}
