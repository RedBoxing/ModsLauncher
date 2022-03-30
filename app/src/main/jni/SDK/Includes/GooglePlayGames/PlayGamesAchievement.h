#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class PlayGamesAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesAchievement"));
	}

	template <typename T = uintptr_t> T& mProgressCallback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mIsIncremental() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mCurrentSteps() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& mTotalSteps() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = double> T& mPercentComplete() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& mCompleted() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mHidden() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& mLastModifiedTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& mTitle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& mRevealedImageUrl() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& mUnlockedImageUrl() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mImageFetcher() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mImage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& mDescription() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint64_t> T& mPoints() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T ReportProgress(void* callback) {
		return ((T (*)(PlayGamesAchievement*, void*))(Il2CppBase() + 0x4611738))(this, callback);
	}
	template <typename T = uintptr_t> T LoadImage() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x4611F94))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x46121E4))(this);
	}
	template <typename T = void> T set_id(Il2CppString* value) {
		return ((T (*)(PlayGamesAchievement*, Il2CppString*))(Il2CppBase() + 0x4612244))(this, value);
	}
	template <typename T = bool> T get_isIncremental() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x46122B8))(this);
	}
	template <typename T = int32_t> T get_currentSteps() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x4612318))(this);
	}
	template <typename T = int32_t> T get_totalSteps() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x4612378))(this);
	}
	template <typename T = double> T get_percentCompleted() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x46123D8))(this);
	}
	template <typename T = void> T set_percentCompleted(double value) {
		return ((T (*)(PlayGamesAchievement*, double))(Il2CppBase() + 0x4612438))(this, value);
	}
	template <typename T = bool> T get_completed() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x4612184))(this);
	}
	template <typename T = bool> T get_hidden() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x4612124))(this);
	}
	template <typename T = uintptr_t> T get_lastReportedDate() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x46124AC))(this);
	}
	template <typename T = Il2CppString*> T get_title() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x461250C))(this);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x461256C))(this);
	}
	template <typename T = Il2CppString*> T get_achievedDescription() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x46125CC))(this);
	}
	template <typename T = Il2CppString*> T get_unachievedDescription() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x461262C))(this);
	}
	template <typename T = int32_t> T get_points() {
		return ((T (*)(PlayGamesAchievement*))(Il2CppBase() + 0x461268C))(this);
	}

};

}
