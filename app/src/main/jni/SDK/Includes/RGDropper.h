#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGDropper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGDropper"));
	}

	template <typename T = Il2CppVector3> T& dropOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _material() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& drops() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, float>*> T& goDrops() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dropsCondtion() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dropClusters() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uintptr_t> static T get_material() {
		return ((T (*)(void *))(Il2CppBase() + 0x221E34C))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x221E440))(this);
	}
	template <typename T = void> T DropItem(uintptr_t rg_random) {
		return ((T (*)(RGDropper*, uintptr_t))(Il2CppBase() + 0x221E76C))(this, rg_random);
	}
	template <typename T = void> T DoublePosibility() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x221F474))(this);
	}
	template <typename T = void> T CreateItem(Il2CppList<uintptr_t>* items) {
		return ((T (*)(RGDropper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x221EB08))(this, items);
	}
	template <typename T = void> T CreateItem_1(Il2CppList<uintptr_t>* items) {
		return ((T (*)(RGDropper*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x221F328))(this, items);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T CreateItem_2(Il2CppList<uintptr_t>* items, uintptr_t trans, Il2CppVector3 dropOffset, float size) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t, Il2CppVector3, float))(Il2CppBase() + 0x221FAF8))(0, items, trans, dropOffset, size);
	}
	template <typename T = bool> T CheckSkinFragmentCanDrop(uintptr_t drop_obj) {
		return ((T (*)(RGDropper*, uintptr_t))(Il2CppBase() + 0x221F778))(this, drop_obj);
	}
	template <typename T = void> T ReplaceMaterial(uintptr_t go) {
		return ((T (*)(RGDropper*, uintptr_t))(Il2CppBase() + 0x221F8F0))(this, go);
	}
	template <typename T = uintptr_t> T CreateCollider(uintptr_t go) {
		return ((T (*)(RGDropper*, uintptr_t))(Il2CppBase() + 0x221F828))(this, go);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x22200A0))(this);
	}
	template <typename T = void> T DropTest() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x22201D8))(this);
	}
	template <typename T = void> T DropTest10() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x2220288))(this);
	}
	template <typename T = void> T DropTest100() {
		return ((T (*)(RGDropper*))(Il2CppBase() + 0x2220354))(this);
	}
	template <typename T = void> static T DropCell(uintptr_t econtroller, uintptr_t rg_random) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2220420))(0, econtroller, rg_random);
	}

};

}
