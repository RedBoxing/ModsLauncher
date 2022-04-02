#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LanguageSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LanguageSource"));
	}

	template <typename T = uintptr_t> T& mSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& NeverDestroy() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& UserAgreesToHaveItOnTheScene() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& UserAgreesToHaveItInsideThePluginsFolder() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& GoogleLiveSyncIsUptoDate() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Assets() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Google_WebServiceURL() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Google_SpreadsheetKey() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Google_SpreadsheetName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& Google_LastUpdatedVersion() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& GoogleUpdateFrequency() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& GoogleUpdateDelay() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& Event_OnSourceUpdateFromGoogle() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mLanguages() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& IgnoreDeviceLanguage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _AllowUnloadingLanguages() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTerms() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& CaseInsensitiveTerms() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& OnMissingTranslation() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& mTerm_AppName() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uintptr_t> T get_SourceData() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x422206C))(this);
	}
	template <typename T = void> T set_SourceData(uintptr_t value) {
		return ((T (*)(LanguageSource*, uintptr_t))(Il2CppBase() + 0x42220CC))(this, value);
	}
	template <typename T = void> T add_Event_OnSourceUpdateFromGoogle(uintptr_t value) {
		return ((T (*)(LanguageSource*, uintptr_t))(Il2CppBase() + 0x4222140))(this, value);
	}
	template <typename T = void> T remove_Event_OnSourceUpdateFromGoogle(uintptr_t value) {
		return ((T (*)(LanguageSource*, uintptr_t))(Il2CppBase() + 0x422222C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x4222318))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x4222464))(this);
	}
	template <typename T = Il2CppString*> T GetSourceName() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x4222580))(this);
	}
	template <typename T = void> T OnBeforeSerialize() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x42226D8))(this);
	}
	template <typename T = void> T OnAfterDeserialize() {
		return ((T (*)(LanguageSource*))(Il2CppBase() + 0x422273C))(this);
	}

};

}
