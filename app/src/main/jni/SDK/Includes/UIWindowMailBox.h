#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowMailBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowMailBox"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> static T& emailType2Localization() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& Email2TransDic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& currectShowEmail() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& emailContentTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& awardContentTransform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& rewardTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rectTransform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& rewardDescribe() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& TitleText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& SenderText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& DetailText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ButtonText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& GotoUrlButtonText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DetailIcon() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& GetAwardButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FishChipStoreButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DeleteButton() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GotoUrlButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& btn_close() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& emailItemGa() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& awardItem() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& Init() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& scrollRect() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*>*> T& emailSprites() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SelectEmail() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& NoticeText() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& Speed() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& _MoveEndPoint() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector2> T& _MoveStartPoint() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& _ParentWidth() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& _SelfWidth() {
		return *(T*)((uintptr_t)this + 0x104);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A149C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A1C04))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A253C))(this);
	}
	template <typename T = void> T OnHrefClick(Il2CppString* hrefName) {
		return ((T (*)(UIWindowMailBox*, Il2CppString*))(Il2CppBase() + 0x44A2E2C))(this, hrefName);
	}
	template <typename T = uintptr_t> T LoadEmailSprite(Il2CppString* key) {
		return ((T (*)(UIWindowMailBox*, Il2CppString*))(Il2CppBase() + 0x44A3020))(this, key);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3130))(this);
	}
	template <typename T = void> T SetDeletButtonActive(uintptr_t email, bool active) {
		return ((T (*)(UIWindowMailBox*, uintptr_t, bool))(Il2CppBase() + 0x44A3554))(this, email, active);
	}
	template <typename T = void> T Show() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3600))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A342C))(this);
	}
	template <typename T = void> T GetAwardButtonMethod() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A37FC))(this);
	}
	template <typename T = void> T ToFishChipStore() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3A34))(this);
	}
	template <typename T = void> T GotoUrl() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3B04))(this);
	}
	template <typename T = void> T GetAllAwardButtonMethod() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3CB4))(this);
	}
	template <typename T = void> T DeleteButtonMethod() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A3F04))(this);
	}
	template <typename T = void> T DeleteAllButtonMethod() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A40E0))(this);
	}
	template <typename T = void> T OnEmailGetAward(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A430C))(this, email);
	}
	template <typename T = void> T OnEmailsGetAward(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(UIWindowMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A48E8))(this, emails);
	}
	template <typename T = void> T OnEmailRead(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A49E0))(this, email);
	}
	template <typename T = void> T OnEmailsRead(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(UIWindowMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A4C10))(this, emails);
	}
	template <typename T = void> T OnRemoveEmail(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A4CD0))(this, email);
	}
	template <typename T = void> T OnRemoveEmails(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(UIWindowMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A500C))(this, emails);
	}
	template <typename T = void> T OnRefleshAllEmail(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(UIWindowMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A51AC))(this, emails);
	}
	template <typename T = void> T OnRefleshEmail(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A58AC))(this, email);
	}
	template <typename T = void> T OnAddEmail(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A7234))(this, email);
	}
	template <typename T = void> T OnAddEmails(Il2CppArray<uintptr_t>* emails) {
		return ((T (*)(UIWindowMailBox*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44A72AC))(this, emails);
	}
	template <typename T = void> T ShowNextEmail(int32_t index) {
		return ((T (*)(UIWindowMailBox*, int32_t))(Il2CppBase() + 0x44A4EAC))(this, index);
	}
	template <typename T = void> T SetAwardItemGot(uintptr_t tr) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A4584))(this, tr);
	}
	template <typename T = void> T SetEmailItemRead(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A4A58))(this, email);
	}
	template <typename T = void> T ShowEmail(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A59E8))(this, email);
	}
	template <typename T = void> T ShowEmailItem(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A66B0))(this, email);
	}
	template <typename T = void> T AddEmail(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A569C))(this, email);
	}
	template <typename T = void> T ShowEmailRewards(Il2CppList<uintptr_t>* rewardables, Il2CppList<Il2CppString*>* describe) {
		return ((T (*)(UIWindowMailBox*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x44A736C))(this, rewardables, describe);
	}
	template <typename T = void> T AddItem(uintptr_t icon, Il2CppString* title, Il2CppString* parentRoot, int32_t count) {
		return ((T (*)(UIWindowMailBox*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x44A7C50))(this, icon, title, parentRoot, count);
	}
	template <typename T = void> T AddSeedItem(uintptr_t icon, uintptr_t flag, Il2CppVector3 angles, Il2CppString* title, int32_t count) {
		return ((T (*)(UIWindowMailBox*, uintptr_t, uintptr_t, Il2CppVector3, Il2CppString*, int32_t))(Il2CppBase() + 0x44A8A24))(this, icon, flag, angles, title, count);
	}
	template <typename T = void> T AddBlueprint(uintptr_t icon, uintptr_t flag, Il2CppString* title, int32_t count) {
		return ((T (*)(UIWindowMailBox*, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x44A906C))(this, icon, flag, title, count);
	}
	template <typename T = void> T AddSkill_Material_Or_Bluemap(uintptr_t icon, uintptr_t flag, Il2CppString* title, uintptr_t pickableTransform, int32_t count) {
		return ((T (*)(UIWindowMailBox*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x44A9648))(this, icon, flag, title, pickableTransform, count);
	}
	template <typename T = Il2CppString*> T AddPickables(uintptr_t info) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A8338))(this, info);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A9D9C))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44A9E0C))(this);
	}
	template <typename T = void> T FixEmailShow(uintptr_t email) {
		return ((T (*)(UIWindowMailBox*, uintptr_t))(Il2CppBase() + 0x44A7A98))(this, email);
	}
	template <typename T = void> T RegisterBroadcast(Il2CppString* text) {
		return ((T (*)(UIWindowMailBox*, Il2CppString*))(Il2CppBase() + 0x44A9EEC))(this, text);
	}
	template <typename T = void> T DeleteButtonMethodb__38_0() {
		return ((T (*)(UIWindowMailBox*))(Il2CppBase() + 0x44AA354))(this);
	}

};

}
