#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillCmdMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillCmdMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isDown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& randomSeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& playerPos() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& skillInfoCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& skillReleaseCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SkillCmdMessage*, uintptr_t))(Il2CppBase() + 0x1833028))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SkillCmdMessage*, uintptr_t))(Il2CppBase() + 0x183315C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SkillCmdMessage*, uintptr_t))(Il2CppBase() + 0x1833294))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SkillCmdMessage*, uintptr_t))(Il2CppBase() + 0x183329C))(this, P0);
	}

};

}
