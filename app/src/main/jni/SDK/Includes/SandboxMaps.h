#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxMaps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxMaps"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& maps() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _editingMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T GetMapData(int32_t mapIndex) {
		return ((T (*)(SandboxMaps*, int32_t))(Il2CppBase() + 0x1815AFC))(this, mapIndex);
	}
	template <typename T = uintptr_t> static T get_data() {
		return ((T (*)(void *))(Il2CppBase() + 0x1815C38))(0);
	}
	template <typename T = void> static T set_data(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1815DC8))(0, value);
	}
	template <typename T = uintptr_t> T get_currentMap() {
		return ((T (*)(SandboxMaps*))(Il2CppBase() + 0x1815E5C))(this);
	}
	template <typename T = uintptr_t> T get_editingMap() {
		return ((T (*)(SandboxMaps*))(Il2CppBase() + 0x1815ED0))(this);
	}
	template <typename T = void> T ReloadEditingMap() {
		return ((T (*)(SandboxMaps*))(Il2CppBase() + 0x1815F40))(this);
	}
	template <typename T = void> T SetEditingMap(uintptr_t data) {
		return ((T (*)(SandboxMaps*, uintptr_t))(Il2CppBase() + 0x1815FBC))(this, data);
	}
	template <typename T = Il2CppString*> static T get__43OldPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1816030))(0);
	}
	template <typename T = Il2CppString*> static T get_Path() {
		return ((T (*)(void *))(Il2CppBase() + 0x18160C0))(0);
	}
	template <typename T = void> static T FixData(Il2CppString* uid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x18161AC))(0, uid);
	}
	template <typename T = void> static T Save(bool updateMap) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1816284))(0, updateMap);
	}
	template <typename T = void> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x1815CD8))(0);
	}
	template <typename T = void> T UpdateCurrentMap() {
		return ((T (*)(SandboxMaps*))(Il2CppBase() + 0x1816480))(this);
	}
	template <typename T = void> T Reload() {
		return ((T (*)(SandboxMaps*))(Il2CppBase() + 0x1816564))(this);
	}

};

}
