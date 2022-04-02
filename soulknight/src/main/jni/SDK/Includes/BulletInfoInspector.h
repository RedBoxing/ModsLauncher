#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletInfoInspector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletInfoInspector"));
	}

	template <typename T = uintptr_t> T& bulletProto() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& critic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& throughCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T GetBulletInfo() {
		return ((T (*)(BulletInfoInspector*))(Il2CppBase() + 0x238276C))(this);
	}
	template <typename T = uintptr_t> T GetDamageInfo() {
		return ((T (*)(BulletInfoInspector*))(Il2CppBase() + 0x238284C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BulletInfoInspector*))(Il2CppBase() + 0x238297C))(this);
	}

};

}
