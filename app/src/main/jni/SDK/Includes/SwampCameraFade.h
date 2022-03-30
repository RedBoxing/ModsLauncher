#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampCameraFade
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampCameraFade"));
	}

	template <typename T = int32_t> T& roomExtraWidth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& aisleExtraLength() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& aisleExtraHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rectMaskMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<Il2CppRect>*> T& _rects() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _rectMaskEffect() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& RectSendCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T LateUpdate() {
		return ((T (*)(SwampCameraFade*))(Il2CppBase() + 0x42ABD50))(this);
	}
	template <typename T = void> T FlushRectMask() {
		return ((T (*)(SwampCameraFade*))(Il2CppBase() + 0x42ABDB0))(this);
	}
	template <typename T = void> T OnRoomCreated(uintptr_t room) {
		return ((T (*)(SwampCameraFade*, uintptr_t))(Il2CppBase() + 0x42AC26C))(this, room);
	}
	template <typename T = void> T AfterRoomCreatedEvent() {
		return ((T (*)(SwampCameraFade*))(Il2CppBase() + 0x42AC850))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(SwampCameraFade*))(Il2CppBase() + 0x42AC8B0))(this);
	}

};

}
