#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Thunder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Thunder"));
	}

	template <typename T = uintptr_t> T& gradient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& FromPosOffset() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& TEXTURE_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _line() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _head_transform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _head_sprite() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _tail_transform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _tail_sprite() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& from() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& to() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& start_time() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& life_time() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& size() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppVector2> T& texture_offset() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = Il2CppVector3> T get_FromPosOffset() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42A18))(this);
	}
	template <typename T = void> T set_FromPosOffset(Il2CppVector3 value) {
		return ((T (*)(Thunder*, Il2CppVector3))(Il2CppBase() + 0x1E42A24))(this, value);
	}
	template <typename T = uintptr_t> T get_line() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42A30))(this);
	}
	template <typename T = uintptr_t> T get_head_transform() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42B04))(this);
	}
	template <typename T = uintptr_t> T get_head_sprite() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42BEC))(this);
	}
	template <typename T = uintptr_t> T get_tail_transform() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42CD4))(this);
	}
	template <typename T = uintptr_t> T get_tail_sprite() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E42DBC))(this);
	}
	template <typename T = void> T SetUp(uintptr_t from, uintptr_t to, float life_time, float size) {
		return ((T (*)(Thunder*, uintptr_t, uintptr_t, float, float))(Il2CppBase() + 0x1E42EA4))(this, from, to, life_time, size);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E4339C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E435C4))(this);
	}
	template <typename T = void> T UpdatePosition() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E4305C))(this);
	}
	template <typename T = void> T AlphaSetting(float alpha) {
		return ((T (*)(Thunder*, float))(Il2CppBase() + 0x1E43434))(this, alpha);
	}
	template <typename T = void> T Destroying() {
		return ((T (*)(Thunder*))(Il2CppBase() + 0x1E437A8))(this);
	}

};

}
