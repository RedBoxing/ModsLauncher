#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BaseEmail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseEmail"));
	}

	template <typename T = Il2CppString*> static T& decryptCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& emailType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& title() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& sender() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& details() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& award() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isAwarded() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isRead() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = int64_t> T& gengerateTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& originGenerateTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& remainTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& uid() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& spriteId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& btnText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& extraData() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& customTags() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& needLocalize() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& localizationType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppList<void*>*> T& selfLocalizaitonData() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& textureData() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& linkDatas() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& leftTitle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& needGotoUrl() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& gotoUrlBtnText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> static T& GotoUrlKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& achievementColorRichTextFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& guildColorRichTextFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& UidBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UidPromoOtherWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UidOfficerUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_EmailType() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188314))(this);
	}
	template <typename T = void> T set_EmailType(uintptr_t value) {
		return ((T (*)(BaseEmail*, uintptr_t))(Il2CppBase() + 0x4188374))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x41883E8))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x4188448))(this, value);
	}
	template <typename T = Il2CppString*> T get_Sender() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x41884BC))(this);
	}
	template <typename T = void> T set_Sender(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x418851C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Details() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188590))(this);
	}
	template <typename T = void> T set_Details(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x41885F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Award() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188664))(this);
	}
	template <typename T = void> T set_Award(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x41886C4))(this, value);
	}
	template <typename T = bool> T get_IsAwarded() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188738))(this);
	}
	template <typename T = void> T set_IsAwarded(bool value) {
		return ((T (*)(BaseEmail*, bool))(Il2CppBase() + 0x4188860))(this, value);
	}
	template <typename T = bool> T get_IsRead() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188940))(this);
	}
	template <typename T = void> T set_IsRead(bool value) {
		return ((T (*)(BaseEmail*, bool))(Il2CppBase() + 0x41889A0))(this, value);
	}
	template <typename T = int64_t> T get_GenerateTime() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188A18))(this);
	}
	template <typename T = void> T set_GenerateTime(int64_t value) {
		return ((T (*)(BaseEmail*, int64_t))(Il2CppBase() + 0x4188A78))(this, value);
	}
	template <typename T = int64_t> T get_OriginGenerateTime() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188AEC))(this);
	}
	template <typename T = void> T set_OriginGenerateTime(int64_t value) {
		return ((T (*)(BaseEmail*, int64_t))(Il2CppBase() + 0x4188B4C))(this, value);
	}
	template <typename T = int64_t> T get_RemainTime() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188BC0))(this);
	}
	template <typename T = void> T set_RemainTime(int64_t value) {
		return ((T (*)(BaseEmail*, int64_t))(Il2CppBase() + 0x4188C20))(this, value);
	}
	template <typename T = int32_t> T get_Uid() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188800))(this);
	}
	template <typename T = void> T set_Uid(int32_t value) {
		return ((T (*)(BaseEmail*, int32_t))(Il2CppBase() + 0x4188C94))(this, value);
	}
	template <typename T = int32_t> T get_SpriteId() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188D08))(this);
	}
	template <typename T = void> T set_SpriteId(int32_t value) {
		return ((T (*)(BaseEmail*, int32_t))(Il2CppBase() + 0x4188D68))(this, value);
	}
	template <typename T = Il2CppString*> T get_BtnText() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188DDC))(this);
	}
	template <typename T = void> T set_BtnText(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x4188E3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtraData() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188EB0))(this);
	}
	template <typename T = void> T set_ExtraData(Il2CppString* value) {
		return ((T (*)(BaseEmail*, Il2CppString*))(Il2CppBase() + 0x4188F10))(this, value);
	}
	template <typename T = bool> T get_NeedLocalize() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4188F84))(this);
	}
	template <typename T = void> T set_NeedLocalize(bool value) {
		return ((T (*)(BaseEmail*, bool))(Il2CppBase() + 0x4188FE4))(this, value);
	}
	template <typename T = bool> T get_needShow() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x418905C))(this);
	}
	template <typename T = uintptr_t> T get_LocalizationType() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4189230))(this);
	}
	template <typename T = void> T set_LocalizationType(uintptr_t value) {
		return ((T (*)(BaseEmail*, uintptr_t))(Il2CppBase() + 0x4189290))(this, value);
	}
	template <typename T = Il2CppList<void*>*> T get_SelfLocalizaitonData() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x4189304))(this);
	}
	template <typename T = void> T set_SelfLocalizaitonData(Il2CppList<void*>* value) {
		return ((T (*)(BaseEmail*, Il2CppList<void*>*))(Il2CppBase() + 0x4189364))(this, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T get_TextureData() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x41893D8))(this);
	}
	template <typename T = void> T set_TextureData(Il2CppDictionary<Il2CppString*, void*>* value) {
		return ((T (*)(BaseEmail*, Il2CppDictionary<Il2CppString*, void*>*))(Il2CppBase() + 0x4189438))(this, value);
	}
	template <typename T = Il2CppString*> T GetLocalization(Il2CppString* key, Il2CppString* language, Il2CppString* defaultLocalize, uintptr_t extra) {
		return ((T (*)(BaseEmail*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x41894AC))(this, key, language, defaultLocalize, extra);
	}
	template <typename T = Il2CppString*> static T GetSerlizeArray(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4189558))(0, emails);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DeSerlize(Il2CppString* data) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4189630))(0, data);
	}
	template <typename T = uintptr_t> static T CreatBaseEmail(uintptr_t achieveInfos) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41896C0))(0, achieveInfos);
	}
	template <typename T = uintptr_t> static T CreatBaseEmail_1(Il2CppString* title, Il2CppString* detail, Il2CppDictionary<Il2CppString*, int32_t>* award2Count) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x418A510))(0, title, detail, award2Count);
	}
	template <typename T = void> static T TryFixAchievementInfoTokenTicketEmail(Il2CppList<int32_t>* fixAchieveId) {
		return ((T (*)(void *, Il2CppList<int32_t>*))(Il2CppBase() + 0x418B114))(0, fixAchieveId);
	}
	template <typename T = void> static T GenerateAwordByAchieve(uintptr_t baseEmail, uintptr_t achieveInfos) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4189C3C))(0, baseEmail, achieveInfos);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetSprites(Il2CppList<uintptr_t>* sprites) {
		return ((T (*)(BaseEmail*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x418B3C8))(this, sprites);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T GetStrings() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x418B9E8))(this);
	}
	template <typename T = bool> T IsRemoteEmail() {
		return ((T (*)(BaseEmail*))(Il2CppBase() + 0x418BF50))(this);
	}

};

}
