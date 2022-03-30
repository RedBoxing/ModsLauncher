#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SinkInWaterEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SinkInWaterEffect"));
	}

	template <typename T = uintptr_t> T& mask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MaskeMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& floatAmount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& floatTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _target() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _targetRigidBody() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _targetSpriteRenderers() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _oriMaterials() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& _Offset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _oriParent() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _oldFloatAmount() {
		return *(T*)((uintptr_t)this + 0x6C);
	}

	template <typename T = void> T SetTarget(uintptr_t target, float deep) {
		return ((T (*)(SinkInWaterEffect*, uintptr_t, float))(Il2CppBase() + 0x1831C8C))(this, target, deep);
	}
	template <typename T = Il2CppVector3> T get_position() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x183257C))(this);
	}
	template <typename T = void> T set_position(Il2CppVector3 value) {
		return ((T (*)(SinkInWaterEffect*, Il2CppVector3))(Il2CppBase() + 0x18326A4))(this, value);
	}
	template <typename T = float> T get_deep() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x18327F8))(this);
	}
	template <typename T = void> T set_deep(float value) {
		return ((T (*)(SinkInWaterEffect*, float))(Il2CppBase() + 0x18323F8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_targetPosition() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x183285C))(this);
	}
	template <typename T = void> T set_targetPosition(Il2CppVector3 value) {
		return ((T (*)(SinkInWaterEffect*, Il2CppVector3))(Il2CppBase() + 0x18329B0))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x1831ED8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x1832DB4))(this);
	}
	template <typename T = void> T RefreshPosition() {
		return ((T (*)(SinkInWaterEffect*))(Il2CppBase() + 0x1832B44))(this);
	}
	template <typename T = void> T ApplyMask(uintptr_t maskTarget, Il2CppArray<uintptr_t>* renderers, Il2CppArray<uintptr_t>* oriMaterials) {
		return ((T (*)(SinkInWaterEffect*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18320BC))(this, maskTarget, renderers, oriMaterials);
	}
	template <typename T = void> T ApplyMaskToSpriteRenderer(uintptr_t spriteRenderer, uintptr_t maskTarget) {
		return ((T (*)(SinkInWaterEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1832E1C))(this, spriteRenderer, maskTarget);
	}

};

}
