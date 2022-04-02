#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LineDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LineDamageCarrier"));
	}

	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& endLayerMask() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = void*> T& onUpdateLine() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& hasTargetPosition() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& targetPosition() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = int32_t> T& defaultLength() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _collider() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = bool> T get_hasTargetPosition() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4263CC8))(this);
	}
	template <typename T = void> T set_hasTargetPosition(bool value) {
		return ((T (*)(LineDamageCarrier*, bool))(Il2CppBase() + 0x4263CD0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_targetPosition() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4263CDC))(this);
	}
	template <typename T = void> T set_targetPosition(Il2CppVector3 value) {
		return ((T (*)(LineDamageCarrier*, Il2CppVector3))(Il2CppBase() + 0x4263CEC))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4263CFC))(this);
	}
	template <typename T = void> T DealDamage() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4263DA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4264808))(this);
	}
	template <typename T = void> T UpdateLine() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x42641A4))(this);
	}
	template <typename T = Il2CppVector3> T GetEnd(Il2CppVector3 start, Il2CppVector3 dir) {
		return ((T (*)(LineDamageCarrier*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x4264568))(this, start, dir);
	}
	template <typename T = void> T SetShapeUpdateCallback(void* callback) {
		return ((T (*)(LineDamageCarrier*, void*))(Il2CppBase() + 0x4264874))(this, callback);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x42648F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_DealDamage() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4264900))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(LineDamageCarrier*))(Il2CppBase() + 0x4264908))(this);
	}

};

}
