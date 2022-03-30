#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffElectrification
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffElectrification"));
	}

	template <typename T = int32_t> T& max_distance() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& cooling_time() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& thunder_object() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& thunder_buff() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& target_controller() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& available() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BuffElectrification*))(Il2CppBase() + 0x4598224))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffElectrification*, uintptr_t))(Il2CppBase() + 0x4598968))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffElectrification*))(Il2CppBase() + 0x4598D8C))(this);
	}
	template <typename T = void> T OnTargetHurt(uintptr_t source_object) {
		return ((T (*)(BuffElectrification*, uintptr_t))(Il2CppBase() + 0x4598294))(this, source_object);
	}
	template <typename T = void> T TurnAvailable() {
		return ((T (*)(BuffElectrification*))(Il2CppBase() + 0x45994EC))(this);
	}
	template <typename T = void> T Lightning(uintptr_t t) {
		return ((T (*)(BuffElectrification*, uintptr_t))(Il2CppBase() + 0x4598DEC))(this, t);
	}
	template <typename T = void> T BuffEnd() {
		return ((T (*)(BuffElectrification*))(Il2CppBase() + 0x4598C58))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffElectrification*))(Il2CppBase() + 0x4599578))(this);
	}

};

}
