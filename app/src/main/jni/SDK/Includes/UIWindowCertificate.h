#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowCertificate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowCertificate"));
	}

	template <typename T = uintptr_t> T& OnClose() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& certificateList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btn_share() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _paused() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& closing() {
		return *(T*)((uintptr_t)this + 0x59);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458A834))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t data) {
		return ((T (*)(UIWindowCertificate*, uintptr_t))(Il2CppBase() + 0x458A8F4))(this, data);
	}
	template <typename T = void> T BtnCloseClick() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458AF48))(this);
	}
	template <typename T = void> T BtnShareClick() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458B0F8))(this);
	}
	template <typename T = uintptr_t> T CaptureCamera() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458B1A0))(this);
	}
	template <typename T = void> T ShowWindowb__7_2() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458B278))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UIWindowCertificate*))(Il2CppBase() + 0x458B27C))(this);
	}

};

}
