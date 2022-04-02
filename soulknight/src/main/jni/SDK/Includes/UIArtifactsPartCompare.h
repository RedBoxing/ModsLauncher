#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIArtifactsPartCompare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIArtifactsPartCompare"));
	}

	template <typename T = uintptr_t> T& artifactPartImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& artifactPartName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& elementTypeImg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& artifactComponentList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& switchButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& selfHide() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _partObj() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _moveDelta() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& buttonDetached() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T SetWeaponPart(uintptr_t part) {
		return ((T (*)(UIArtifactsPartCompare*, uintptr_t))(Il2CppBase() + 0x441C6C0))(this, part);
	}
	template <typename T = void> T Display(uintptr_t otherPanel) {
		return ((T (*)(UIArtifactsPartCompare*, uintptr_t))(Il2CppBase() + 0x441DAD0))(this, otherPanel);
	}
	template <typename T = void> T SetPartInfo(uintptr_t part) {
		return ((T (*)(UIArtifactsPartCompare*, uintptr_t))(Il2CppBase() + 0x441C774))(this, part);
	}
	template <typename T = void> T MoveUp(bool hasSwitchButton) {
		return ((T (*)(UIArtifactsPartCompare*, bool))(Il2CppBase() + 0x441DE04))(this, hasSwitchButton);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UIArtifactsPartCompare*))(Il2CppBase() + 0x441E284))(this);
	}
	template <typename T = void> T MoveDown() {
		return ((T (*)(UIArtifactsPartCompare*))(Il2CppBase() + 0x441E344))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIArtifactsPartCompare*))(Il2CppBase() + 0x441E450))(this);
	}
	template <typename T = Il2CppString*> static T GetEffectText(Il2CppArray<uintptr_t>* components) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x441DF9C))(0, components);
	}
	template <typename T = Il2CppString*> static T GetEffectText_1(uintptr_t component, bool prefixDot, Il2CppString* keySuffix) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x441E71C))(0, component, prefixDot, keySuffix);
	}
	template <typename T = Il2CppString*> static T DefaultComponentDescFormat(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x441EDB4))(0, key);
	}
	template <typename T = void> T MoveUpb__13_0() {
		return ((T (*)(UIArtifactsPartCompare*))(Il2CppBase() + 0x441EE1C))(this);
	}

};

}
