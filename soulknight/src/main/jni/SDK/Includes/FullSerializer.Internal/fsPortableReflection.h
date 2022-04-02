#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsPortableReflection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsPortableReflection"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _cachedAttributeQueries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& DeclaredFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> static T HasAttribute(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, element);
	}
	template <typename T = bool> static T HasAttribute_1(uintptr_t element, bool shouldCache) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, element, shouldCache);
	}
	template <typename T = bool> static T HasAttribute_2(uintptr_t element, uintptr_t attributeType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D085AC))(0, element, attributeType);
	}
	template <typename T = bool> static T HasAttribute_3(uintptr_t element, uintptr_t attributeType, bool shouldCache) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2D0866C))(0, element, attributeType, shouldCache);
	}
	template <typename T = uintptr_t> static T GetAttribute(uintptr_t element, uintptr_t attributeType, bool shouldCache) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2D08704))(0, element, attributeType, shouldCache);
	}
	template <typename T = uintptr_t> static T GetAttribute_1(uintptr_t element, bool shouldCache) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x0))(0, element, shouldCache);
	}
	template <typename T = uintptr_t> static T GetAttribute_2(uintptr_t element) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, element);
	}
	template <typename T = uintptr_t> static T GetDeclaredProperty(uintptr_t type, Il2CppString* propertyName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D079D0))(0, type, propertyName);
	}
	template <typename T = uintptr_t> static T GetDeclaredMethod(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D06E80))(0, type, methodName);
	}
	template <typename T = uintptr_t> static T GetDeclaredConstructor(uintptr_t type, Il2CppArray<uintptr_t>* parameters) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D08B78))(0, type, parameters);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDeclaredConstructors(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D08DCC))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetFlattenedMember(uintptr_t type, Il2CppString* memberName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D08E98))(0, type, memberName);
	}
	template <typename T = uintptr_t> static T GetFlattenedMethod(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D06540))(0, type, methodName);
	}
	template <typename T = void*> static T GetFlattenedMethods(uintptr_t type, Il2CppString* methodName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D091BC))(0, type, methodName);
	}
	template <typename T = uintptr_t> static T GetFlattenedProperty(uintptr_t type, Il2CppString* propertyName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D06C90))(0, type, propertyName);
	}
	template <typename T = uintptr_t> static T GetDeclaredMember(uintptr_t type, Il2CppString* memberName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2D092E4))(0, type, memberName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDeclaredMethods(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D08AAC))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDeclaredProperties(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D089E0))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDeclaredFields(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0944C))(0, type);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetDeclaredMembers(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D090F0))(0, type);
	}
	template <typename T = uintptr_t> static T AsMemberInfo(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D09518))(0, type);
	}
	template <typename T = bool> static T IsType(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D09578))(0, member);
	}
	template <typename T = uintptr_t> static T AsType(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D09638))(0, member);
	}
	template <typename T = uintptr_t> static T Resolve(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D05B8C))(0, type);
	}

};

}
