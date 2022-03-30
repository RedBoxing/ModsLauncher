#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTUser"));
	}

	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& headerUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& nickname() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = double> T& gender() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = double> T& vipLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& city() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& score() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = double> T& rank() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& scoreTag() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = double> T& originScore() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& snsUserId() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& loginType() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& gameUserId() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& needPresentNickname() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isNicknameChanged() {
		return *(T*)((uintptr_t)this + 0x79);
	}

	template <typename T = void> T setUserId(Il2CppString* userId) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255A30))(this, userId);
	}
	template <typename T = void> T setHeaderUrl(Il2CppString* headerUrl) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255AA4))(this, headerUrl);
	}
	template <typename T = void> T setNickname(Il2CppString* nickname) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255B18))(this, nickname);
	}
	template <typename T = void> T setGender(int32_t gender) {
		return ((T (*)(KTUser*, int32_t))(Il2CppBase() + 0x4255B8C))(this, gender);
	}
	template <typename T = void> T setVipLevel(int32_t vipLevel) {
		return ((T (*)(KTUser*, int32_t))(Il2CppBase() + 0x4255C04))(this, vipLevel);
	}
	template <typename T = void> T setCity(Il2CppString* city) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255C7C))(this, city);
	}
	template <typename T = void> T setScore(Il2CppString* score) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255CF0))(this, score);
	}
	template <typename T = void> T setRank(int64_t rank) {
		return ((T (*)(KTUser*, int64_t))(Il2CppBase() + 0x4255D64))(this, rank);
	}
	template <typename T = void> T setSnsUserId(Il2CppString* snsUserId) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255DDC))(this, snsUserId);
	}
	template <typename T = void> T setLoginType(Il2CppString* loginType) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255E50))(this, loginType);
	}
	template <typename T = void> T setGameUserId(Il2CppString* gameUserId) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4255EC4))(this, gameUserId);
	}
	template <typename T = void> T setNeedPresentNickname(bool needPresentNickname) {
		return ((T (*)(KTUser*, bool))(Il2CppBase() + 0x4255F38))(this, needPresentNickname);
	}
	template <typename T = void> T setOriginScore(double originScore) {
		return ((T (*)(KTUser*, double))(Il2CppBase() + 0x4255FBC))(this, originScore);
	}
	template <typename T = void> T setScoreTag(Il2CppString* scoreTag) {
		return ((T (*)(KTUser*, Il2CppString*))(Il2CppBase() + 0x4256030))(this, scoreTag);
	}

};

}
