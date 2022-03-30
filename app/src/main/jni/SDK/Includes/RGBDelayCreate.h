#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBDelayCreate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBDelayCreate"));
	}

	template <typename T = uintptr_t> T& audip_clip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& pierced() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& repl() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& delay_time() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& destory_time() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& parent_root() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGBDelayCreate*, uintptr_t))(Il2CppBase() + 0x1BAE318))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGBDelayCreate*))(Il2CppBase() + 0x1BAE3C8))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(RGBDelayCreate*))(Il2CppBase() + 0x1BAE428))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(RGBDelayCreate*, float))(Il2CppBase() + 0x1BAEA10))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(RGBDelayCreate*, float))(Il2CppBase() + 0x1BAEAD8))(this, totalTime);
	}

};

}
