#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom {

class Loom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom", "Loom"));
	}

	template <typename T = int32_t> static T& maxThreads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& numThreads() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _current() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& initialized() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _delayed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _currentDelayed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _currentActions() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& TaskIEDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& TaskCorDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0x187AC8C))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Loom*))(Il2CppBase() + 0x187AE98))(this);
	}
	template <typename T = void> static T Initialize() {
		return ((T (*)(void *))(Il2CppBase() + 0x187AD34))(0);
	}
	template <typename T = void> static T QueueOnMainThread(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x187AF50))(0, action);
	}
	template <typename T = void> static T QueueOnMainThread_1(uintptr_t action, float time) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x187AFF8))(0, action, time);
	}
	template <typename T = uintptr_t> static T RunAsync(uintptr_t a) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x187B348))(0, a);
	}
	template <typename T = void> static T RunAction(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x187B490))(0, action);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Loom*))(Il2CppBase() + 0x187B72C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Loom*))(Il2CppBase() + 0x187B840))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Loom*))(Il2CppBase() + 0x187B89C))(this);
	}
	template <typename T = void> static T AddTaskAndStart(uintptr_t s, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x187BF28))(0, s, id);
	}
	template <typename T = void> static T AddTask(uintptr_t s, int32_t id) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x187C134))(0, s, id);
	}
	template <typename T = void> static T StartTask(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x187C270))(0, id);
	}
	template <typename T = void> static T CancelTask(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x187C3CC))(0, id);
	}
	template <typename T = void> static T ClearAllTask() {
		return ((T (*)(void *))(Il2CppBase() + 0x187C550))(0);
	}

};

}
