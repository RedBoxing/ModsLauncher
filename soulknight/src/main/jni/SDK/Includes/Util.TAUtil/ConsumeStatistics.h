#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Util.TAUtil {

class ConsumeStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Util.TAUtil", "ConsumeStatistics"));
	}

	template <typename T = Il2CppString*> static T& CUR_GEM_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OBTAIN_GEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OBTAIN_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OBTAIN_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONSUME_GEM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONSUME_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONSUME_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CONRUME_MAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T TrackObtainType(int32_t obtainCount, uintptr_t obtatinType, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4351DD4))(0, obtainCount, obtatinType, param);
	}
	template <typename T = void> static T TrackObtainType_1(uintptr_t obtainGemType, Il2CppDictionary<uintptr_t, int32_t>* materials, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<uintptr_t, int32_t>*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x4352088))(0, obtainGemType, materials, param);
	}
	template <typename T = void> static T TrackConsumeType(int32_t consumeCount, uintptr_t consumeType, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, int32_t, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x43522AC))(0, consumeCount, consumeType, param);
	}
	template <typename T = void> static T TrackConsumeType_1(uintptr_t consumeType, Il2CppDictionary<uintptr_t, int32_t>* materials, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, uintptr_t, Il2CppDictionary<uintptr_t, int32_t>*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x43524C8))(0, consumeType, materials, param);
	}
	template <typename T = void> static T TrackMatConsume(Il2CppString* mat_name, Il2CppDictionary<Il2CppString*, uintptr_t>* param) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x43526EC))(0, mat_name, param);
	}

};

}
