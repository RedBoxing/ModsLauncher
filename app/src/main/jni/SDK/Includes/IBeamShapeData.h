#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBeamShapeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBeamShapeData"));
	}


	template <typename T = void> T SetShapeUpdateCallback(void* callback) {
		return ((T (*)(IBeamShapeData*, void*))(Il2CppBase() + 0x0))(this, callback);
	}

};

}
