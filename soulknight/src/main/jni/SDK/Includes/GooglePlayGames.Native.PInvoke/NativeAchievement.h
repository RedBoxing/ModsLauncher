#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class NativeAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "NativeAchievement"));
	}

	template <typename T = uint64_t> static T& MinusOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uint32_t> T CurrentSteps() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEED3C))(this);
	}
	template <typename T = Il2CppString*> T Description() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEEDA8))(this);
	}
	template <typename T = Il2CppString*> T Id() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEEE78))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEEF48))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF018))(this);
	}
	template <typename T = uint32_t> T TotalSteps() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF084))(this);
	}
	template <typename T = uintptr_t> T Type() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF0F0))(this);
	}
	template <typename T = uint64_t> T LastModifiedTime() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF15C))(this);
	}
	template <typename T = uint64_t> T getXP() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF1F0))(this);
	}
	template <typename T = Il2CppString*> T getRevealedImageUrl() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF25C))(this);
	}
	template <typename T = Il2CppString*> T getUnlockedImageUrl() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF32C))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(NativeAchievement*, uintptr_t))(Il2CppBase() + 0x2AEF3FC))(this, selfPointer);
	}
	template <typename T = uintptr_t> T AsAchievement() {
		return ((T (*)(NativeAchievement*))(Il2CppBase() + 0x2AEF480))(this);
	}
	template <typename T = uintptr_t> T Descriptionb__3_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeAchievement*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEF788))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T Idb__4_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeAchievement*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEF7BC))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T Nameb__5_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeAchievement*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEF7F0))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T getRevealedImageUrlb__11_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeAchievement*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEF824))(this, out_string, out_size);
	}
	template <typename T = uintptr_t> T getUnlockedImageUrlb__12_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(NativeAchievement*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2AEF858))(this, out_string, out_size);
	}

};

}
