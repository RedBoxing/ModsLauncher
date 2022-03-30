#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class ReportProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "ReportProgress"));
	}


	template <typename T = void> T Invoke(Il2CppString* id, double progress, void* callback) {
		return ((T (*)(ReportProgress*, Il2CppString*, double, void*))(Il2CppBase() + 0x46117D8))(this, id, progress, callback);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* id, double progress, void* callback, uintptr_t __callback, uintptr_t object) {
		return ((T (*)(ReportProgress*, Il2CppString*, double, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x461C5D0))(this, id, progress, callback, __callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReportProgress*, uintptr_t))(Il2CppBase() + 0x461C670))(this, result);
	}

};

}
