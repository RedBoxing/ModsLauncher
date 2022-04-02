#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class MorphController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "MorphController"));
	}

	template <typename T = uintptr_t> T& MorphShape() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& changeShapeEffect() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& timeToChangeShapeDuringEffect() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& lavaShape() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& iceShape() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& poisonShape() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& thornShape() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& fireFeet() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& morphPoison() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _availableShapes() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& _random() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _thornTimer() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& _fireFeetTimer() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _morphPoisonInst() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = int32_t> static T& run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_MorphShape() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C2F5E0))(this);
	}
	template <typename T = void> T set_MorphShape(uintptr_t value) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C2F5E8))(this, value);
	}
	template <typename T = void> T UpdateAnimatorController() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C2F5F0))(this);
	}
	template <typename T = uintptr_t> T GetBattleData() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C2F988))(this);
	}
	template <typename T = void> T TurnShape(uintptr_t shape) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C2FAD8))(this, shape);
	}
	template <typename T = void> T CheckBuffs() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C2FF0C))(this);
	}
	template <typename T = bool> T HasDeBuffFireOrPoison(uintptr_t requiredBuff) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C3015C))(this, requiredBuff);
	}
	template <typename T = void> T CheckRideConditionAndAddDeBuff(uintptr_t requiredBuff, Il2CppString* deBuffName) {
		return ((T (*)(MorphController*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C30214))(this, requiredBuff, deBuffName);
	}
	template <typename T = void> T DestroyTimers() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C303A8))(this);
	}
	template <typename T = void> T SetUp(uintptr_t controller) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C3042C))(this, controller);
	}
	template <typename T = void> T Mount(uintptr_t controller) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C304DC))(this, controller);
	}
	template <typename T = void> T Land() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C305E0))(this);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C3069C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30758))(this);
	}
	template <typename T = void> T CreateFireFeet() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C307B8))(this);
	}
	template <typename T = void> T FireFeet() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30A10))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30B60))(this);
	}
	template <typename T = void> T Updateb__33_0() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30F48))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUp(uintptr_t P0) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C30F94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Mount(uintptr_t P0) {
		return ((T (*)(MorphController*, uintptr_t))(Il2CppBase() + 0x1C30F9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Land() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30FA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Dead() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30FAC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(MorphController*))(Il2CppBase() + 0x1C30FB4))(this);
	}

};

}
