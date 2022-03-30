#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class Achievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "Achievement"));
	}

	template <typename T = uintptr_t> static T& UnixEpoch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mIsIncremental() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsRevealed() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& mIsUnlocked() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = int32_t> T& mCurrentSteps() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mTotalSteps() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mDescription() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& mName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& mLastModifiedTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& mPoints() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& mRevealedImageUrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mUnlockedImageUrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4441FC8))(this);
	}
	template <typename T = bool> T get_IsIncremental() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x44423F8))(this);
	}
	template <typename T = void> T set_IsIncremental(bool value) {
		return ((T (*)(Achievement*, bool))(Il2CppBase() + 0x4442458))(this, value);
	}
	template <typename T = int32_t> T get_CurrentSteps() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x44424D0))(this);
	}
	template <typename T = void> T set_CurrentSteps(int32_t value) {
		return ((T (*)(Achievement*, int32_t))(Il2CppBase() + 0x4442530))(this, value);
	}
	template <typename T = int32_t> T get_TotalSteps() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x44425A4))(this);
	}
	template <typename T = void> T set_TotalSteps(int32_t value) {
		return ((T (*)(Achievement*, int32_t))(Il2CppBase() + 0x4442604))(this, value);
	}
	template <typename T = bool> T get_IsUnlocked() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442678))(this);
	}
	template <typename T = void> T set_IsUnlocked(bool value) {
		return ((T (*)(Achievement*, bool))(Il2CppBase() + 0x44426D8))(this, value);
	}
	template <typename T = bool> T get_IsRevealed() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442750))(this);
	}
	template <typename T = void> T set_IsRevealed(bool value) {
		return ((T (*)(Achievement*, bool))(Il2CppBase() + 0x44427B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442828))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x4442888))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x44428FC))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x444295C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x44429D0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x4442A30))(this, value);
	}
	template <typename T = uintptr_t> T get_LastModifiedTime() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442AA4))(this);
	}
	template <typename T = void> T set_LastModifiedTime(uintptr_t value) {
		return ((T (*)(Achievement*, uintptr_t))(Il2CppBase() + 0x4442B70))(this, value);
	}
	template <typename T = uint64_t> T get_Points() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442C78))(this);
	}
	template <typename T = void> T set_Points(uint64_t value) {
		return ((T (*)(Achievement*, uint64_t))(Il2CppBase() + 0x4442CD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_RevealedImageUrl() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442D4C))(this);
	}
	template <typename T = void> T set_RevealedImageUrl(Il2CppString* value) {
		return ((T (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x4442DAC))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnlockedImageUrl() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442E20))(this);
	}
	template <typename T = void> T set_UnlockedImageUrl(Il2CppString* value) {
		return ((T (*)(Achievement*, Il2CppString*))(Il2CppBase() + 0x4442E80))(this, value);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(Achievement*))(Il2CppBase() + 0x4442F84))(this);
	}

};

}
