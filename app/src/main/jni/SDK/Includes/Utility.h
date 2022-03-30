#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Utility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Utility"));
	}

	template <typename T = float> static T& SpringFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DampingFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uint32_t> static T& cSignMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int64_t> static T NowMillisecond() {
		return ((T (*)(void *))(Il2CppBase() + 0x4352A88))(0);
	}
	template <typename T = uint64_t> static T GetTimeNow() {
		return ((T (*)(void *))(Il2CppBase() + 0x4352B54))(0);
	}
	template <typename T = uint32_t> static T getIntegerSomeBit(uint32_t value, int32_t n1, int32_t n2) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x4352CD8))(0, value, n1, n2);
	}
	template <typename T = uint32_t> static T getIntegerSomeBit_FromLow(uint32_t value, int32_t n1, int32_t n2) {
		return ((T (*)(void *, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x4352D74))(0, value, n1, n2);
	}
	template <typename T = uint64_t> static T getIntegerSomeBit64_FromLow(uint64_t value, int32_t n1, int32_t n2) {
		return ((T (*)(void *, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x4352E10))(0, value, n1, n2);
	}
	template <typename T = uint32_t> static T getUint64SomeBit(uint64_t value, int32_t n1, int32_t n2) {
		return ((T (*)(void *, uint64_t, int32_t, int32_t))(Il2CppBase() + 0x4352EAC))(0, value, n1, n2);
	}
	template <typename T = bool> static T GetBit(int32_t mask, int32_t index) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4352F48))(0, mask, index);
	}
	template <typename T = void> static T SetBit(uintptr_t mask, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4352FCC))(0, mask, index);
	}
	template <typename T = void> static T WriteCharToBuffer(char value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, char, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353054))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteInt32ToBuffer(int32_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353100))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteUInt32ToBuffer(uint32_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, uint32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x435323C))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteInt16ToBuffer(int16_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, int16_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353378))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteUInt16ToBuffer(uint16_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, uint16_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353454))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteBoolToBuffer(bool value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, bool, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353530))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteInt64ToBuffer(int64_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, int64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353604))(0, value, buffer, index);
	}
	template <typename T = void> static T WriteUInt64ToBuffer(uint64_t value, Il2CppArray<uintptr_t>* buffer, int32_t index) {
		return ((T (*)(void *, uint64_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353800))(0, value, buffer, index);
	}
	template <typename T = int32_t> static T GetIntFromBuffer(Il2CppArray<uintptr_t>* buffer, int32_t beginLen) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x43539FC))(0, buffer, beginLen);
	}
	template <typename T = int16_t> static T GetShortFromBuffer(Il2CppArray<uintptr_t>* buffer, int32_t beginLen) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353B40))(0, buffer, beginLen);
	}
	template <typename T = uint16_t> static T GetUint16FromBuffer(Il2CppArray<uintptr_t>* buffer, int32_t beginLen) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4353C18))(0, buffer, beginLen);
	}
	template <typename T = float> static T DistanceBetweenTwoPoints(float x1, float y1, float x2, float y2) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x4353CF0))(0, x1, y1, x2, y2);
	}
	template <typename T = float> static T DistanceFromPointToLine(float x, float y, float x1, float y1, float x2, float y2) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x4353DF8))(0, x, y, x1, y1, x2, y2);
	}
	template <typename T = bool> static T IsCircleIntersectRectangle(float x, float y, float r, float x0, float y0, float x1, float y1, float x2, float y2) {
		return ((T (*)(void *, float, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x4353F48))(0, x, y, r, x0, y0, x1, y1, x2, y2);
	}
	template <typename T = float> static T EvaluatePointToLine(float x, float y, float x1, float y1, float x2, float y2) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x4354118))(0, x, y, x1, y1, x2, y2);
	}
	template <typename T = bool> static T IsPointInTriangle(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3) {
		return ((T (*)(void *, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x43541E4))(0, x, y, x1, y1, x2, y2, x3, y3);
	}
	template <typename T = bool> static T IsCircleIntersectLineSeg(float x, float y, float r, float x1, float y1, float x2, float y2) {
		return ((T (*)(void *, float, float, float, float, float, float, float))(Il2CppBase() + 0x4354384))(0, x, y, r, x1, y1, x2, y2);
	}
	template <typename T = bool> static T IsCircleIntersectFan(float x, float y, float r, float x1, float y1, float x2, float y2, float theta) {
		return ((T (*)(void *, float, float, float, float, float, float, float, float))(Il2CppBase() + 0x4354528))(0, x, y, r, x1, y1, x2, y2, theta);
	}
	template <typename T = bool> static T isCollisionWithCircle(float x1, float y1, float x2, float y2, float r1, float r2) {
		return ((T (*)(void *, float, float, float, float, float, float))(Il2CppBase() + 0x435480C))(0, x1, y1, x2, y2, r1, r2);
	}
	template <typename T = float> static T Vec2ToAngle(Il2CppVector2 v) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4354938))(0, v);
	}
	template <typename T = Il2CppVector2> static T AngleToVec2(float angle) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4354A04))(0, angle);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T S2B(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4354AE8))(0, str);
	}
	template <typename T = Il2CppString*> static T B2S(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4354BE4))(0, bytes);
	}
	template <typename T = Il2CppString*> static T GetMD5HashFromFile(Il2CppString* fileName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4354CC8))(0, fileName);
	}
	template <typename T = Il2CppString*> static T GetMD5HashFromString(Il2CppString* json) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4354EC0))(0, json);
	}

};

}
