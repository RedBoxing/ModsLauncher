#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetBestLoginIpd23
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBestLoginIp>d__23"));
	}

	template <typename T = int32_t> T& 1__state() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 2__current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& old_ip_port() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& request5__2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& random5__3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& IsNeedPingServer5__4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& 7__wrap4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& 7__wrap5() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& 7__wrap6() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uint16_t> T& _port5__8() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int64_t> T& nowTicks5__9() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ping5__10() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B61E8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B637C))(this);
	}
	template <typename T = void> T m__Finally1() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B62BC))(this);
	}
	template <typename T = void> T m__Finally2() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B6264))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorSystem_Object_get_Current() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B7A38))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B7A40))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetBestLoginIpd23*))(Il2CppBase() + 0x19B7AA8))(this);
	}

};

}
