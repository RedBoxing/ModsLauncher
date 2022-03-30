#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class LogCollectorRunner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "LogCollectorRunner"));
	}

	template <typename T = Il2CppString*> static T& MYNAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _random() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppRect> T& textRect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppRect> T& chillyUidRect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppRect> T& btnRect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& textGUIStyle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btnGUIStyle() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& sessionId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& t1() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& t2() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& collector() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& context() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& hasSetErrorImage() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> static T InitLogCollectorRunner() {
		return ((T (*)(void *))(Il2CppBase() + 0x43CA898))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LogCollectorRunner*))(Il2CppBase() + 0x43CAA38))(this);
	}
	template <typename T = void> T ChangeErrorImage() {
		return ((T (*)(LogCollectorRunner*))(Il2CppBase() + 0x43CB348))(this);
	}
	template <typename T = void> T ChangeNormalColor() {
		return ((T (*)(LogCollectorRunner*))(Il2CppBase() + 0x43CB3F4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LogCollectorRunner*))(Il2CppBase() + 0x43CB4D4))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(LogCollectorRunner*))(Il2CppBase() + 0x43CB6F8))(this);
	}
	template <typename T = void> static T Toast(Il2CppString* msg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43CB974))(0, msg);
	}
	template <typename T = void> T Startb__13_0(bool isSuccess, Il2CppString* msg) {
		return ((T (*)(LogCollectorRunner*, bool, Il2CppString*))(Il2CppBase() + 0x43CBBBC))(this, isSuccess, msg);
	}

};

}
