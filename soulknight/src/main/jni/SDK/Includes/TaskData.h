#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TaskData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskData"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& enemyId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& isCompleted() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isRewarded() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = void*> T& onEnemyDead() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& battleFactors() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& rewards() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& excludeFactors() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T FlushDelegate() {
		return ((T (*)(TaskData*))(Il2CppBase() + 0x43B6AD0))(this);
	}
	template <typename T = void> T FlushDelegateb__10_0(Il2CppString* id) {
		return ((T (*)(TaskData*, Il2CppString*))(Il2CppBase() + 0x43B6C44))(this, id);
	}

};

}
