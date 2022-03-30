#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsSerializer"));
	}

	template <typename T = void*> static T& _reservedKeywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Key_ObjectReference() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Key_ObjectDefinition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Key_InstanceType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Key_Version() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Key_Content() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _cachedConverterTypeInstances() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _cachedConverters() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& _cachedProcessors() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _availableConverters() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _availableDirectConverters() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _processors() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _references() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _lazyReferenceWriter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _abstractTypeRemap() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& Config() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = bool> static T IsReservedKeyword(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D1C318))(0, key);
	}
	template <typename T = bool> static T IsObjectReference(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C3E4))(0, data);
	}
	template <typename T = bool> static T IsObjectDefinition(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C4F4))(0, data);
	}
	template <typename T = bool> static T IsVersioned(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C604))(0, data);
	}
	template <typename T = bool> static T IsTypeSpecified(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C714))(0, data);
	}
	template <typename T = bool> static T IsWrappedData(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C824))(0, data);
	}
	template <typename T = void> static T StripDeserializationMetadata(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1C934))(0, data);
	}
	template <typename T = void> static T ConvertLegacyData(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1CBD8))(0, data);
	}
	template <typename T = void> static T Invoke_OnBeforeSerialize(Il2CppList<uintptr_t>* processors, uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1D1B4))(0, processors, storageType, instance);
	}
	template <typename T = void> static T Invoke_OnAfterSerialize(Il2CppList<uintptr_t>* processors, uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1D2E4))(0, processors, storageType, instance, data);
	}
	template <typename T = void> static T Invoke_OnBeforeDeserialize(Il2CppList<uintptr_t>* processors, uintptr_t storageType, uintptr_t data) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1D41C))(0, processors, storageType, data);
	}
	template <typename T = void> static T Invoke_OnBeforeDeserializeAfterInstanceCreation(Il2CppList<uintptr_t>* processors, uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1D54C))(0, processors, storageType, instance, data);
	}
	template <typename T = void> static T Invoke_OnAfterDeserialize(Il2CppList<uintptr_t>* processors, uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1D688))(0, processors, storageType, instance);
	}
	template <typename T = void> static T EnsureDictionary(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D1D058))(0, data);
	}
	template <typename T = void> T RemapAbstractStorageTypeToDefaultType(uintptr_t storageType) {
		return ((T (*)(fsSerializer*, uintptr_t))(Il2CppBase() + 0x2D1D7A8))(this, storageType);
	}
	template <typename T = void> T AddProcessor(uintptr_t processor) {
		return ((T (*)(fsSerializer*, uintptr_t))(Il2CppBase() + 0x2D1E59C))(this, processor);
	}
	template <typename T = void> T RemoveProcessor() {
		return ((T (*)(fsSerializer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetDefaultStorageType(uintptr_t abstractType, uintptr_t defaultStorageType) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1E1B4))(this, abstractType, defaultStorageType);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetProcessors(uintptr_t type) {
		return ((T (*)(fsSerializer*, uintptr_t))(Il2CppBase() + 0x2D1E680))(this, type);
	}
	template <typename T = void> T AddConverter(uintptr_t converter) {
		return ((T (*)(fsSerializer*, uintptr_t))(Il2CppBase() + 0x2D1E2F4))(this, converter);
	}
	template <typename T = uintptr_t> T GetConverter(uintptr_t type, uintptr_t overrideConverterType) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1E9B4))(this, type, overrideConverterType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, instance, data);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, instance);
	}
	template <typename T = uintptr_t> T TrySerialize_1(uintptr_t storageType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D03598))(this, storageType, instance, data);
	}
	template <typename T = uintptr_t> T TrySerialize_2(uintptr_t storageType, uintptr_t overrideConverterType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0C0FC))(this, storageType, overrideConverterType, instance, data);
	}
	template <typename T = uintptr_t> T InternalSerialize_1_ProcessCycles(uintptr_t storageType, uintptr_t overrideConverterType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1EF04))(this, storageType, overrideConverterType, instance, data);
	}
	template <typename T = uintptr_t> T InternalSerialize_2_Inheritance(uintptr_t storageType, uintptr_t overrideConverterType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1F2E0))(this, storageType, overrideConverterType, instance, data);
	}
	template <typename T = uintptr_t> T InternalSerialize_3_ProcessVersioning(uintptr_t overrideConverterType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1F524))(this, overrideConverterType, instance, data);
	}
	template <typename T = uintptr_t> T InternalSerialize_4_Converter(uintptr_t overrideConverterType, uintptr_t instance, uintptr_t* data) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1F744))(this, overrideConverterType, instance, data);
	}
	template <typename T = uintptr_t> T TryDeserialize_1(uintptr_t data, uintptr_t storageType, uintptr_t result) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D03820))(this, data, storageType, result);
	}
	template <typename T = uintptr_t> T TryDeserialize_2(uintptr_t data, uintptr_t storageType, uintptr_t overrideConverterType, uintptr_t result) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0C5EC))(this, data, storageType, overrideConverterType, result);
	}
	template <typename T = uintptr_t> T InternalDeserialize_1_CycleReference(uintptr_t overrideConverterType, uintptr_t data, uintptr_t storageType, uintptr_t result, uintptr_t* processors) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1F820))(this, overrideConverterType, data, storageType, result, processors);
	}
	template <typename T = uintptr_t> T InternalDeserialize_2_Version(uintptr_t overrideConverterType, uintptr_t data, uintptr_t storageType, uintptr_t result, uintptr_t* processors) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1FA44))(this, overrideConverterType, data, storageType, result, processors);
	}
	template <typename T = uintptr_t> T InternalDeserialize_3_Inheritance(uintptr_t overrideConverterType, uintptr_t data, uintptr_t storageType, uintptr_t result, uintptr_t* processors) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1FF54))(this, overrideConverterType, data, storageType, result, processors);
	}
	template <typename T = uintptr_t> T InternalDeserialize_4_Cycles(uintptr_t overrideConverterType, uintptr_t data, uintptr_t resultType, uintptr_t result) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D206CC))(this, overrideConverterType, data, resultType, result);
	}
	template <typename T = uintptr_t> T InternalDeserialize_5_Converter(uintptr_t overrideConverterType, uintptr_t data, uintptr_t resultType, uintptr_t result) {
		return ((T (*)(fsSerializer*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D2087C))(this, overrideConverterType, data, resultType, result);
	}

};

}
