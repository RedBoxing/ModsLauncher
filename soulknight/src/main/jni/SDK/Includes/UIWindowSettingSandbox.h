#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowSettingSandbox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowSettingSandbox"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& timeProto() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stringProto() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& integerProto() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& floatProto() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& boolProto() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& areaProto() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& type2Proto() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& data2Items() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowSettingSandbox*))(Il2CppBase() + 0x432AB40))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t settable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x432AF48))(0, settable);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPanelDatas() {
		return ((T (*)(UIWindowSettingSandbox*))(Il2CppBase() + 0x432B23C))(this);
	}
	template <typename T = void> T SetDatas(Il2CppArray<uintptr_t>* datas) {
		return ((T (*)(UIWindowSettingSandbox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x432B130))(this, datas);
	}
	template <typename T = void> T CreateItem(uintptr_t data) {
		return ((T (*)(UIWindowSettingSandbox*, uintptr_t))(Il2CppBase() + 0x432B85C))(this, data);
	}
	template <typename T = uintptr_t> T ReadItem(uintptr_t data, uintptr_t item) {
		return ((T (*)(UIWindowSettingSandbox*, uintptr_t, uintptr_t))(Il2CppBase() + 0x432B464))(this, data, item);
	}
	template <typename T = void> T OnClick_Confirm() {
		return ((T (*)(UIWindowSettingSandbox*))(Il2CppBase() + 0x432BDC8))(this);
	}
	template <typename T = void> T OnClick_Cancel() {
		return ((T (*)(UIWindowSettingSandbox*))(Il2CppBase() + 0x432BF58))(this);
	}

};

}
