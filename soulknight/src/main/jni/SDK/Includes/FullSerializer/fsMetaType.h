#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsMetaType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsMetaType"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*>*> static T& _configMetaTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ReflectedType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Properties() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _hasDefaultConstructorCache() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _isDefaultConstructorPublicCache() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = uintptr_t> static T Get(uintptr_t config, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D02C2C))(0, config, type);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D1A1A4))(0);
	}
	template <typename T = void> static T CollectProperties(uintptr_t config, Il2CppList<uintptr_t>* properties, uintptr_t reflectedType) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D1A328))(0, config, properties, reflectedType);
	}
	template <typename T = bool> static T IsAutoProperty(uintptr_t property, Il2CppArray<uintptr_t>* members) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D1AFBC))(0, property, members);
	}
	template <typename T = bool> static T CanSerializeProperty(uintptr_t config, uintptr_t property, Il2CppArray<uintptr_t>* members, bool annotationFreeValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2D1A914))(0, config, property, members, annotationFreeValue);
	}
	template <typename T = bool> static T CanSerializeField(uintptr_t config, uintptr_t field, bool annotationFreeValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2D1ACF8))(0, config, field, annotationFreeValue);
	}
	template <typename T = void> T EmitAotData(bool throwException) {
		return ((T (*)(fsMetaType*, bool))(Il2CppBase() + 0x2D0BE2C))(this, throwException);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Properties() {
		return ((T (*)(fsMetaType*))(Il2CppBase() + 0x2D02EE8))(this);
	}
	template <typename T = void> T set_Properties(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(fsMetaType*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D1A904))(this, value);
	}
	template <typename T = bool> T get_HasDefaultConstructor() {
		return ((T (*)(fsMetaType*))(Il2CppBase() + 0x2D1B1A8))(this);
	}
	template <typename T = bool> T get_IsDefaultConstructorPublic() {
		return ((T (*)(fsMetaType*))(Il2CppBase() + 0x2D11A8C))(this);
	}
	template <typename T = uintptr_t> T CreateInstance() {
		return ((T (*)(fsMetaType*))(Il2CppBase() + 0x2D03C0C))(this);
	}

};

}
