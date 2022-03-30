#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommonGuideView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommonGuideView"));
	}

	template <typename T = uintptr_t> T& MainTitleText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& PageTitleText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ContentText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& LeftBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RightBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& showIndex() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& descPostProcessDic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& mainTitleKey() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& MainTitleDefaultText() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& pages() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& AfterReadGuide() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& _initContentFontSize() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T InitView() {
		return ((T (*)(CommonGuideView*))(Il2CppBase() + 0x4274218))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(CommonGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4274A38))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(CommonGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4274B58))(this, objects);
	}
	template <typename T = void> T SetContentIndex(int32_t index) {
		return ((T (*)(CommonGuideView*, int32_t))(Il2CppBase() + 0x4274574))(this, index);
	}
	template <typename T = uintptr_t> T GetDescPostProcessByIdx(int32_t idx) {
		return ((T (*)(CommonGuideView*, int32_t))(Il2CppBase() + 0x4274CB4))(this, idx);
	}
	template <typename T = void> T InitViewb__14_0() {
		return ((T (*)(CommonGuideView*))(Il2CppBase() + 0x4274E40))(this);
	}
	template <typename T = void> T InitViewb__14_1() {
		return ((T (*)(CommonGuideView*))(Il2CppBase() + 0x4274E4C))(this);
	}
	template <typename T = void> T InitViewb__14_2() {
		return ((T (*)(CommonGuideView*))(Il2CppBase() + 0x4274E58))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(CommonGuideView*))(Il2CppBase() + 0x4274ED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(CommonGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4274EE0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(CommonGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4274EE8))(this, P0);
	}

};

}
