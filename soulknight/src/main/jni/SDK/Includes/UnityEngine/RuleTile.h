#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityEngine {

class RuleTile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityEngine", "RuleTile"));
	}

	template <typename T = uintptr_t> T& m_DefaultSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_DefaultColliderType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_OverrideSelf() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RuleNames() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& firstExists() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& These() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = unsigned char> T& DefaultNumOfThese() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TheseNumberOfTiles() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = unsigned char> T& NotZero() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& firstExists2() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = bool> T& NotThese() {
		return *(T*)((uintptr_t)this + 0x4A);
	}
	template <typename T = unsigned char> T& DefaultNumOfNotThese() {
		return *(T*)((uintptr_t)this + 0x4B);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& NotTheseNumberOfTiles() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t3() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t4() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t5() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t6() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& t7() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n3() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n4() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n5() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& n6() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TilingRules() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_m_Self() {
		return ((T (*)(RuleTile*))(Il2CppBase() + 0x43EFF68))(this);
	}
	template <typename T = void> T set_m_Self(uintptr_t value) {
		return ((T (*)(RuleTile*, uintptr_t))(Il2CppBase() + 0x43F0024))(this, value);
	}
	template <typename T = void> T GetTileData(uintptr_t position, uintptr_t tileMap, uintptr_t tileData) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F0098))(this, position, tileMap, tileData);
	}
	template <typename T = float> static T GetPerlinValue(uintptr_t position, float scale, float offset) {
		return ((T (*)(void *, uintptr_t, float, float))(Il2CppBase() + 0x43F0920))(0, position, scale, offset);
	}
	template <typename T = bool> T GetTileAnimationData(uintptr_t position, uintptr_t tilemap, uintptr_t tileAnimationData) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F1020))(this, position, tilemap, tileAnimationData);
	}
	template <typename T = void> T RefreshTile(uintptr_t location, uintptr_t tileMap) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F1274))(this, location, tileMap);
	}
	template <typename T = bool> T RuleMatches(uintptr_t rule, uintptr_t position, uintptr_t tilemap, uintptr_t transform) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F04F4))(this, rule, position, tilemap, transform);
	}
	template <typename T = uintptr_t> static T ApplyRandomTransform(uintptr_t type, uintptr_t original, float perlinScale, uintptr_t position) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, uintptr_t))(Il2CppBase() + 0x43F0A48))(0, type, original, perlinScale, position);
	}
	template <typename T = bool> T RuleMatches_1(uintptr_t rule, uintptr_t position, uintptr_t tilemap, int32_t angle) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x43F144C))(this, rule, position, tilemap, angle);
	}
	template <typename T = bool> T ReturnFalseIf(uintptr_t rule, uintptr_t tile, uintptr_t RULE) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F1BB0))(this, rule, tile, RULE);
	}
	template <typename T = bool> T RuleMatches_2(uintptr_t rule, uintptr_t position, uintptr_t tilemap, bool mirrorX, bool mirrorY) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x43F16B4))(this, rule, position, tilemap, mirrorX, mirrorY);
	}
	template <typename T = int32_t> T GetIndexOfOffset(uintptr_t offset) {
		return ((T (*)(RuleTile*, uintptr_t))(Il2CppBase() + 0x43F1AEC))(this, offset);
	}
	template <typename T = uintptr_t> T GetRotatedPos(uintptr_t original, int32_t rotation) {
		return ((T (*)(RuleTile*, uintptr_t, int32_t))(Il2CppBase() + 0x43F1938))(this, original, rotation);
	}
	template <typename T = uintptr_t> T GetMirroredPos(uintptr_t original, bool mirrorX, bool mirrorY) {
		return ((T (*)(RuleTile*, uintptr_t, bool, bool))(Il2CppBase() + 0x43F1EA0))(this, original, mirrorX, mirrorY);
	}
	template <typename T = void> T iFixBaseProxy_GetTileData(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F2028))(this, P0, P1, P2);
	}
	template <typename T = bool> T iFixBaseProxy_GetTileAnimationData(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F2034))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_RefreshTile(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RuleTile*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43F2040))(this, P0, P1);
	}

};

}
