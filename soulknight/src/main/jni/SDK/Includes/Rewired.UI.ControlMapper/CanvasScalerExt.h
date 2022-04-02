#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class CanvasScalerExt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "CanvasScalerExt"));
	}


	template <typename T = void> T ForceRefresh() {
		return ((T (*)(CanvasScalerExt*))(Il2CppBase() + 0x1E8BDBC))(this);
	}

};

}
