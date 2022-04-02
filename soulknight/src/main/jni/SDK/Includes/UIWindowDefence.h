#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowDefence"));
	}

	template <typename T = uintptr_t> T& warnAudio() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& trCountDown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& txCountDown() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& animWave() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& txWave() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txWarning() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& imEndPlotRoot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& imEndPlot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& txEndPlot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& btnEndPlot() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& nextWaveSecond() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> static T& PlotEventKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& endplotShown() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& plotEnded() {
		return *(T*)((uintptr_t)this + 0x75);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4590568))(this);
	}
	template <typename T = void> T ShineGates(Il2CppList<uintptr_t>* directions) {
		return ((T (*)(UIWindowDefence*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x45909A8))(this, directions);
	}
	template <typename T = void> T RefreshMapText() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4590A34))(this);
	}
	template <typename T = void> T ShowSignpostZombie() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4590BA8))(this);
	}
	template <typename T = Il2CppString*> T get_waveText() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4590AB8))(this);
	}
	template <typename T = void> T StartCountDown(int32_t second, uintptr_t callback) {
		return ((T (*)(UIWindowDefence*, int32_t, uintptr_t))(Il2CppBase() + 0x4590C8C))(this, second, callback);
	}
	template <typename T = void> T ForceNextWave() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4590E1C))(this);
	}
	template <typename T = uintptr_t> T CountingDown(int32_t second, uintptr_t callback) {
		return ((T (*)(UIWindowDefence*, int32_t, uintptr_t))(Il2CppBase() + 0x4590D20))(this, second, callback);
	}
	template <typename T = void> T ShowWarnTextDelay() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4591008))(this);
	}
	template <typename T = void> T ShowWarnText() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x45910A0))(this);
	}
	template <typename T = bool> T TryShowPlotEnd() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x45913D8))(this);
	}
	template <typename T = uintptr_t> T PlayingPlot() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4591674))(this);
	}
	template <typename T = uintptr_t> T EndPlot() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4591754))(this);
	}
	template <typename T = void> T OnClick_EndPlot() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4591834))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x45918A4))(this);
	}
	template <typename T = void> T CountingDownb__20_0() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x4591964))(this);
	}
	template <typename T = void> T ShowWarnTextb__22_0() {
		return ((T (*)(UIWindowDefence*))(Il2CppBase() + 0x45919B0))(this);
	}

};

}
