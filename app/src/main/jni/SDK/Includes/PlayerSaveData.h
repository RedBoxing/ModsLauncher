#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerSaveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerSaveData"));
	}


	template <typename T = int32_t> T get_pet_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439AC74))(this);
	}
	template <typename T = void> T set_pet_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439ADB0))(this, value);
	}
	template <typename T = bool> T get_has_save_date() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439AF00))(this);
	}
	template <typename T = void> T set_has_save_date(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439B078))(this, value);
	}
	template <typename T = int32_t> T get_difficulty() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B1E4))(this);
	}
	template <typename T = void> T set_difficulty(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B274))(this, value);
	}
	template <typename T = int32_t> T get_last_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B318))(this);
	}
	template <typename T = void> T set_last_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B3A8))(this, value);
	}
	template <typename T = int32_t> T get_fail_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B44C))(this);
	}
	template <typename T = void> T set_fail_time(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B4DC))(this, value);
	}
	template <typename T = int32_t> T get_total_indexes() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B580))(this);
	}
	template <typename T = void> T set_total_indexes(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B610))(this, value);
	}
	template <typename T = int32_t> T get_index_difficalty() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B6B4))(this);
	}
	template <typename T = int32_t> T get_last_day_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B784))(this);
	}
	template <typename T = void> T set_last_day_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B814))(this, value);
	}
	template <typename T = int32_t> T get_show_post_man() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B8B8))(this);
	}
	template <typename T = void> T set_show_post_man(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439B948))(this, value);
	}
	template <typename T = int32_t> T get_last_play_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439B9EC))(this);
	}
	template <typename T = void> T set_last_play_time(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439BA7C))(this, value);
	}
	template <typename T = int32_t> T get_show_ad_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439BB20))(this);
	}
	template <typename T = void> T set_show_ad_time(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439BBB0))(this, value);
	}
	template <typename T = int32_t> T get_ShowRetiredKnightAdTimes() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439BC54))(this);
	}
	template <typename T = void> T set_ShowRetiredKnightAdTimes(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439BCE4))(this, value);
	}
	template <typename T = int32_t> T get_slot_rate_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439BD88))(this);
	}
	template <typename T = void> T set_slot_rate_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439BE18))(this, value);
	}
	template <typename T = Il2CppString*> T get_host_room_name() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439BEBC))(this);
	}
	template <typename T = void> T set_host_room_name(Il2CppString* value) {
		return ((T (*)(PlayerSaveData*, Il2CppString*))(Il2CppBase() + 0x439BFD4))(this, value);
	}
	template <typename T = int32_t> T get_sample_random_seed() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C078))(this);
	}
	template <typename T = void> T set_sample_random_seed(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C108))(this, value);
	}
	template <typename T = int32_t> T get_magic_stone_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C1AC))(this);
	}
	template <typename T = void> T set_magic_stone_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C23C))(this, value);
	}
	template <typename T = int32_t> T get_egg_machine_times() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C2E0))(this);
	}
	template <typename T = void> T set_egg_machine_times(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C370))(this, value);
	}
	template <typename T = int32_t> T get_magic_well_fished_times() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C414))(this);
	}
	template <typename T = void> T set_magic_well_fished_times(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C4A4))(this, value);
	}
	template <typename T = int32_t> T get_gems() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C548))(this);
	}
	template <typename T = void> T set_gems(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C5D8))(this, value);
	}
	template <typename T = int32_t> T get_last_gems() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C67C))(this);
	}
	template <typename T = void> T set_last_gems(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C70C))(this, value);
	}
	template <typename T = int32_t> T get_var_gems() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C7B0))(this);
	}
	template <typename T = void> T set_var_gems(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C840))(this, value);
	}
	template <typename T = int32_t> T get_room_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439C8E4))(this);
	}
	template <typename T = void> T set_room_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439C974))(this, value);
	}
	template <typename T = int32_t> T get_reborn_card() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439CA18))(this);
	}
	template <typename T = void> T set_reborn_card(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439CAA8))(this, value);
	}
	template <typename T = int32_t> T get_furniture_plant_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439CB4C))(this);
	}
	template <typename T = void> T set_furniture_plant_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439CBDC))(this, value);
	}
	template <typename T = int32_t> T get_furniture_book_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439CC80))(this);
	}
	template <typename T = void> T set_furniture_book_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439CD10))(this, value);
	}
	template <typename T = int32_t> T get_furniture_pet_food_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439CDB4))(this);
	}
	template <typename T = void> T set_furniture_pet_food_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439CE44))(this, value);
	}
	template <typename T = int32_t> T get_furniture_chest() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439CEE8))(this);
	}
	template <typename T = void> T set_furniture_chest(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439CF78))(this, value);
	}
	template <typename T = int32_t> T get_furniture_safe_level() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D01C))(this);
	}
	template <typename T = void> T set_furniture_safe_level(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439D0AC))(this, value);
	}
	template <typename T = int32_t> T get_fish_chips_count() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D150))(this);
	}
	template <typename T = void> T set_fish_chips_count(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439D1E0))(this, value);
	}
	template <typename T = bool> T get_has_pay() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D284))(this);
	}
	template <typename T = void> T set_has_pay(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439D350))(this, value);
	}
	template <typename T = int32_t> T get_last_ring_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D410))(this);
	}
	template <typename T = void> T set_last_ring_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439D4A0))(this, value);
	}
	template <typename T = int32_t> T get_unlock_ring_index() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D544))(this);
	}
	template <typename T = void> T set_unlock_ring_index(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439D5D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_last_account_id() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D678))(this);
	}
	template <typename T = void> T set_last_account_id(Il2CppString* value) {
		return ((T (*)(PlayerSaveData*, Il2CppString*))(Il2CppBase() + 0x439D710))(this, value);
	}
	template <typename T = int32_t> T get_has_tutorial() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D7B4))(this);
	}
	template <typename T = void> T set_has_tutorial(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439D844))(this, value);
	}
	template <typename T = Il2CppString*> T get_tutorial_end_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439D8E8))(this);
	}
	template <typename T = void> T set_tutorial_end_time(Il2CppString* value) {
		return ((T (*)(PlayerSaveData*, Il2CppString*))(Il2CppBase() + 0x439D980))(this, value);
	}
	template <typename T = int32_t> T get_has_setLanguage() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439DA24))(this);
	}
	template <typename T = void> T set_has_setLanguage(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439DAB4))(this, value);
	}
	template <typename T = int32_t> T get_first_play() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439DB58))(this);
	}
	template <typename T = void> T set_first_play(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439DBE8))(this, value);
	}
	template <typename T = int32_t> T get_first_in_room() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439DC8C))(this);
	}
	template <typename T = void> T set_first_in_room(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439DD1C))(this, value);
	}
	template <typename T = int32_t> T get_first_tv() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439DDC0))(this);
	}
	template <typename T = void> T set_first_tv(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439DE50))(this, value);
	}
	template <typename T = int32_t> T get_first_mul() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439DEF4))(this);
	}
	template <typename T = void> T set_first_mul(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439DF84))(this, value);
	}
	template <typename T = bool> T get_set_up_skin() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E028))(this);
	}
	template <typename T = void> T set_set_up_skin(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439E0F4))(this, value);
	}
	template <typename T = int32_t> T get_last_play_version() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E1B4))(this);
	}
	template <typename T = void> T set_last_play_version(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439E244))(this, value);
	}
	template <typename T = bool> T get_skill_demo_switch() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E2E8))(this);
	}
	template <typename T = void> T set_skill_demo_switch(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439E3B4))(this, value);
	}
	template <typename T = int32_t> T get_achievement_lv1() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E474))(this);
	}
	template <typename T = void> T set_achievement_lv1(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439E678))(this, value);
	}
	template <typename T = int32_t> T get_achievement_lv2() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E754))(this);
	}
	template <typename T = void> T set_achievement_lv2(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439E81C))(this, value);
	}
	template <typename T = int32_t> T get_achievement_lv3() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439E8F8))(this);
	}
	template <typename T = void> T set_achievement_lv3(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439E9C0))(this, value);
	}
	template <typename T = int32_t> T get_achievement_weapon() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439EA9C))(this);
	}
	template <typename T = void> T set_achievement_weapon(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439EB64))(this, value);
	}
	template <typename T = int32_t> T get_achievement_character() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439EC40))(this);
	}
	template <typename T = void> T set_achievement_character(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439ED08))(this, value);
	}
	template <typename T = int32_t> T get_control_mode() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439EDE4))(this);
	}
	template <typename T = void> T set_control_mode(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439EEAC))(this, value);
	}
	template <typename T = int32_t> T get_axis_mode() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439EF88))(this);
	}
	template <typename T = void> T set_axis_mode(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439F050))(this, value);
	}
	template <typename T = bool> T get_open_bgm() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F12C))(this);
	}
	template <typename T = void> T set_open_bgm(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439F1F8))(this, value);
	}
	template <typename T = bool> T get_open_effect() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F2B8))(this);
	}
	template <typename T = void> T set_open_effect(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439F384))(this, value);
	}
	template <typename T = int32_t> T get_bgm_Volume() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F444))(this);
	}
	template <typename T = void> T set_bgm_Volume(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439F4D4))(this, value);
	}
	template <typename T = int32_t> T get_effect_Volume() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F578))(this);
	}
	template <typename T = void> T set_effect_Volume(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439F608))(this, value);
	}
	template <typename T = bool> T get_has_oppo_reward() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F6AC))(this);
	}
	template <typename T = void> T set_has_oppo_reward(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439F70C))(this, value);
	}
	template <typename T = bool> T get_has_item_data() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F7B0))(this);
	}
	template <typename T = void> T set_has_item_data(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439F84C))(this, value);
	}
	template <typename T = bool> T get_has_statistic_data() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439F8F0))(this);
	}
	template <typename T = void> T set_has_statistic_data(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439F98C))(this, value);
	}
	template <typename T = bool> T get_unlock_debug_tool() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439FA30))(this);
	}
	template <typename T = void> T set_unlock_debug_tool(bool value) {
		return ((T (*)(PlayerSaveData*, bool))(Il2CppBase() + 0x439FACC))(this, value);
	}
	template <typename T = int32_t> T get_total_game_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439FB70))(this);
	}
	template <typename T = void> T set_total_game_time(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439FC00))(this, value);
	}
	template <typename T = int32_t> T get_last_game_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439FCA4))(this);
	}
	template <typename T = void> T set_last_game_time(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439FD34))(this, value);
	}
	template <typename T = int32_t> T get_statue_random_seed() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439FDD8))(this);
	}
	template <typename T = void> T set_statue_random_seed(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x439FED4))(this, value);
	}
	template <typename T = int32_t> T get_general_random_seed() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x439FF78))(this);
	}
	template <typename T = void> T set_general_random_seed(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x43A0150))(this, value);
	}
	template <typename T = int32_t> T get_font_setting_value() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x43A01F4))(this);
	}
	template <typename T = void> T set_font_setting_value(int32_t value) {
		return ((T (*)(PlayerSaveData*, int32_t))(Il2CppBase() + 0x43A0284))(this, value);
	}
	template <typename T = Il2CppString*> T get_check_unlock_work_shop_time() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x43A0328))(this);
	}
	template <typename T = void> T set_check_unlock_work_shop_time(Il2CppString* value) {
		return ((T (*)(PlayerSaveData*, Il2CppString*))(Il2CppBase() + 0x43A03C0))(this, value);
	}
	template <typename T = void> T ResetSaveData() {
		return ((T (*)(PlayerSaveData*))(Il2CppBase() + 0x43A0464))(this);
	}
	template <typename T = bool> static T HasKey(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43A00BC))(0, key);
	}
	template <typename T = void> static T SetInt(Il2CppString* key, int32_t value) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x439AE54))(0, key, value);
	}
	template <typename T = int32_t> static T GetInt(Il2CppString* key, int32_t default_value) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x439AD04))(0, key, default_value);
	}
	template <typename T = void> static T SetFloat(Il2CppString* key, float value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x43A04C4))(0, key, value);
	}
	template <typename T = float> static T GetFloat(Il2CppString* key, float default_value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x43A0570))(0, key, default_value);
	}
	template <typename T = void> static T SetString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x439B138))(0, key, value);
	}
	template <typename T = Il2CppString*> static T GetString(Il2CppString* key, Il2CppString* default_value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x439AFCC))(0, key, default_value);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A061C))(0);
	}

};

}
