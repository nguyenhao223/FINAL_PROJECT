// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: TESTFN4

#include "../ui.h"
#include <Arduino.h>
#include <Preferences.h>

extern "C" {
	#include "../ui.h"
	#include "../ui_events.h"
}
Preferences preferences2;

void ui_FarmScreen_screen_init(void)
{
    ui_FarmScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_FarmScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_FarmScreen, &ui_img_farmbg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTitleFarm = lv_label_create(ui_FarmScreen);
    lv_obj_set_width(ui_TextTitleFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTitleFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTitleFarm, 0);
    lv_obj_set_y(ui_TextTitleFarm, 20);
    lv_obj_set_align(ui_TextTitleFarm, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextTitleFarm, "FARM");
    lv_obj_set_style_text_color(ui_TextTitleFarm, lv_color_hex(0x37F909), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTitleFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTitleFarm, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValueAndStatusFarm = lv_obj_create(ui_FarmScreen);
    lv_obj_set_width(ui_ValueAndStatusFarm, 225);
    lv_obj_set_height(ui_ValueAndStatusFarm, 230);
    lv_obj_set_x(ui_ValueAndStatusFarm, 5);
    lv_obj_set_y(ui_ValueAndStatusFarm, 35);
    lv_obj_set_align(ui_ValueAndStatusFarm, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_ValueAndStatusFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ValueAndStatusFarm, lv_color_hex(0xDAD4D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ValueAndStatusFarm, 160, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTempFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_TextTempFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTempFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTempFarm, 0);
    lv_obj_set_y(ui_TextTempFarm, -10);
    lv_label_set_text(ui_TextTempFarm, "Temperature:");
    lv_obj_set_style_text_color(ui_TextTempFarm, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTempFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTempFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValTempFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_ValTempFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValTempFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValTempFarm, 120);
    lv_obj_set_y(ui_ValTempFarm, -10);
    lv_label_set_text(ui_ValTempFarm, "28.7");
    lv_obj_set_style_text_color(ui_ValTempFarm, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValTempFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValTempFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CelsiusTempFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_CelsiusTempFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CelsiusTempFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CelsiusTempFarm, 160);
    lv_obj_set_y(ui_CelsiusTempFarm, -10);
    lv_label_set_text(ui_CelsiusTempFarm, "°C");
    lv_obj_set_style_text_color(ui_CelsiusTempFarm, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CelsiusTempFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CelsiusTempFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextHumFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_TextHumFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextHumFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextHumFarm, 0);
    lv_obj_set_y(ui_TextHumFarm, 15);
    lv_label_set_text(ui_TextHumFarm, "Humidity:");
    lv_obj_set_style_text_color(ui_TextHumFarm, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextHumFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextHumFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValHumFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_ValHumFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValHumFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValHumFarm, 120);
    lv_obj_set_y(ui_ValHumFarm, 15);
    lv_label_set_text(ui_ValHumFarm, "57");
    lv_obj_set_style_text_color(ui_ValHumFarm, lv_color_hex(0x1704D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValHumFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValHumFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PercentHumFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_PercentHumFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PercentHumFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PercentHumFarm, 145);
    lv_obj_set_y(ui_PercentHumFarm, 15);
    lv_label_set_text(ui_PercentHumFarm, "%");
    lv_obj_set_style_text_color(ui_PercentHumFarm, lv_color_hex(0x1704D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PercentHumFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PercentHumFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextSoilFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_TextSoilFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextSoilFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextSoilFarm, 0);
    lv_obj_set_y(ui_TextSoilFarm, 40);
    lv_label_set_text(ui_TextSoilFarm, "Soil moisture:");
    lv_obj_set_style_text_color(ui_TextSoilFarm, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextSoilFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextSoilFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValSoilFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_ValSoilFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValSoilFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValSoilFarm, 120);
    lv_obj_set_y(ui_ValSoilFarm, 40);
    lv_label_set_text(ui_ValSoilFarm, "70");
    lv_obj_set_style_text_color(ui_ValSoilFarm, lv_color_hex(0x09AACB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValSoilFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValSoilFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PercentSoilFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_PercentSoilFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PercentSoilFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PercentSoilFarm, 160);
    lv_obj_set_y(ui_PercentSoilFarm, 40);
    lv_label_set_text(ui_PercentSoilFarm, "%");
    lv_obj_set_style_text_color(ui_PercentSoilFarm, lv_color_hex(0x09AACB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PercentSoilFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PercentSoilFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextRainSSFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_TextRainSSFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextRainSSFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextRainSSFarm, 0);
    lv_obj_set_y(ui_TextRainSSFarm, 65);
    lv_label_set_text(ui_TextRainSSFarm, "Rain sensor:");
    lv_obj_set_style_text_color(ui_TextRainSSFarm, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextRainSSFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextRainSSFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValRainSSFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_ValRainSSFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValRainSSFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValRainSSFarm, 120);
    lv_obj_set_y(ui_ValRainSSFarm, 65);
    lv_label_set_text(ui_ValRainSSFarm, "No Detect");
    lv_obj_set_style_text_color(ui_ValRainSSFarm, lv_color_hex(0x007188), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValRainSSFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValRainSSFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextDeviceFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_TextDeviceFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextDeviceFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextDeviceFarm, 0);
    lv_obj_set_y(ui_TextDeviceFarm, 115);
    lv_label_set_text(ui_TextDeviceFarm, "Water pump:");
    lv_obj_set_style_text_color(ui_TextDeviceFarm, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextDeviceFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextDeviceFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SwitchDevice1FARM = lv_switch_create(ui_ValueAndStatusFarm);
    
    preferences2.begin("User", false);
    bool statutsw1fm = preferences2.getBool("StatusPump", 0);
    preferences2.end();
    if (statutsw1fm == 1){
    	lv_obj_add_state(ui_SwitchDevice1FARM, LV_STATE_CHECKED);
	}
	else {
		lv_obj_clear_state(ui_SwitchDevice1FARM, LV_STATE_CHECKED);
	}
    lv_obj_set_width(ui_SwitchDevice1FARM, 76);
    lv_obj_set_height(ui_SwitchDevice1FARM, 36);
    lv_obj_set_x(ui_SwitchDevice1FARM, 62);
    lv_obj_set_y(ui_SwitchDevice1FARM, 30);
    lv_obj_set_align(ui_SwitchDevice1FARM, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_SwitchDevice1FARM, &ui_img_img_switch_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_SwitchDevice1FARM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SwitchDevice1FARM, lv_color_hex(0x274264), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchDevice1FARM, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SwitchDevice1FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SwitchDevice1FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SwitchDevice1FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SwitchDevice1FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_LabelTimerFarm = lv_label_create(ui_ValueAndStatusFarm);
    lv_obj_set_width(ui_LabelTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelTimerFarm, 0);
    lv_obj_set_y(ui_LabelTimerFarm, 170);
    lv_label_set_text(ui_LabelTimerFarm, "Timer:");
    lv_obj_set_style_text_color(ui_LabelTimerFarm, lv_color_hex(0x891010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_LabelTimerFarm, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelTimerFarm, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SwitchDevice2FARM = lv_switch_create(ui_ValueAndStatusFarm);
    preferences2.begin("User", false);
    bool statutsw2fm = preferences2.getBool("StatusTimer", 0);
    preferences2.end();
    if (statutsw2fm == 1){
    	lv_obj_add_state(ui_SwitchDevice2FARM, LV_STATE_CHECKED);
	}
	else {
		lv_obj_clear_state(ui_SwitchDevice2FARM, LV_STATE_CHECKED);
	}
    lv_obj_set_width(ui_SwitchDevice2FARM, 76);
    lv_obj_set_height(ui_SwitchDevice2FARM, 36);
    lv_obj_set_x(ui_SwitchDevice2FARM, 62);
    lv_obj_set_y(ui_SwitchDevice2FARM, 80);
    lv_obj_set_align(ui_SwitchDevice2FARM, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_SwitchDevice2FARM, &ui_img_img_switch_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_SwitchDevice2FARM, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SwitchDevice2FARM, lv_color_hex(0x274264), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchDevice2FARM, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SwitchDevice2FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SwitchDevice2FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SwitchDevice2FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SwitchDevice2FARM, -6, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_TimerFarm = lv_obj_create(ui_FarmScreen);
    lv_obj_set_width(ui_TimerFarm, 225);
    lv_obj_set_height(ui_TimerFarm, 190);
    lv_obj_set_x(ui_TimerFarm, -8);
    lv_obj_set_y(ui_TimerFarm, 16);
    lv_obj_set_align(ui_TimerFarm, LV_ALIGN_RIGHT_MID);
    lv_obj_clear_flag(ui_TimerFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_TimerFarm, lv_color_hex(0xDAD4D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TimerFarm, 140, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTimerFarm = lv_label_create(ui_TimerFarm);
    lv_obj_set_width(ui_TextTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTimerFarm, 0);
    lv_obj_set_y(ui_TextTimerFarm, -13);
    lv_obj_set_align(ui_TextTimerFarm, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextTimerFarm, "TIMER");
    lv_obj_set_style_text_color(ui_TextTimerFarm, lv_color_hex(0x930707), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTimerFarm, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextNotifTimerFarm = lv_label_create(ui_TimerFarm);
    lv_obj_set_width(ui_TextNotifTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextNotifTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextNotifTimerFarm, 0);
    lv_obj_set_y(ui_TextNotifTimerFarm, 14);
    lv_obj_set_align(ui_TextNotifTimerFarm, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextNotifTimerFarm, "Setup time to On/Off Water pump");
    lv_obj_set_style_text_color(ui_TextNotifTimerFarm, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextNotifTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextNotifTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BGSetHourTimerFarm = lv_img_create(ui_TimerFarm);
    lv_img_set_src(ui_BGSetHourTimerFarm, &ui_img_roller_bg_png);
    lv_obj_set_width(ui_BGSetHourTimerFarm, LV_SIZE_CONTENT);   /// 91
    lv_obj_set_height(ui_BGSetHourTimerFarm, LV_SIZE_CONTENT);    /// 90
    lv_obj_set_x(ui_BGSetHourTimerFarm, -50);
    lv_obj_set_y(ui_BGSetHourTimerFarm, 5);
    lv_obj_set_align(ui_BGSetHourTimerFarm, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BGSetHourTimerFarm, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BGSetHourTimerFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TextSetHourTimerFarm = lv_label_create(ui_TimerFarm);
    lv_obj_set_width(ui_TextSetHourTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextSetHourTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextSetHourTimerFarm, -50);
    lv_obj_set_y(ui_TextSetHourTimerFarm, 30);
    lv_obj_set_align(ui_TextSetHourTimerFarm, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextSetHourTimerFarm, "Set Hour");
    lv_obj_set_style_text_color(ui_TextSetHourTimerFarm, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextSetHourTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextSetHourTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RLSetHourTimerFarm = lv_roller_create(ui_TimerFarm);
    lv_roller_set_options(ui_RLSetHourTimerFarm,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_RLSetHourTimerFarm, 71);
    lv_obj_set_height(ui_RLSetHourTimerFarm, 66);
    lv_obj_set_x(ui_RLSetHourTimerFarm, -50);
    lv_obj_set_y(ui_RLSetHourTimerFarm, 5);
    lv_obj_set_align(ui_RLSetHourTimerFarm, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_RLSetHourTimerFarm, lv_color_hex(0x3F475E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RLSetHourTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RLSetHourTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RLSetHourTimerFarm, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RLSetHourTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_RLSetHourTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_RLSetHourTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_RLSetHourTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_RLSetHourTimerFarm, lv_color_hex(0xDBE6FF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RLSetHourTimerFarm, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RLSetHourTimerFarm, &lv_font_montserrat_14, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RLSetHourTimerFarm, lv_color_hex(0x3A445C), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RLSetHourTimerFarm, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_TextSetMinuteTimerFarm = lv_label_create(ui_TimerFarm);
    lv_obj_set_width(ui_TextSetMinuteTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextSetMinuteTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextSetMinuteTimerFarm, 50);
    lv_obj_set_y(ui_TextSetMinuteTimerFarm, 30);
    lv_obj_set_align(ui_TextSetMinuteTimerFarm, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextSetMinuteTimerFarm, "Set Minute");
    lv_obj_set_style_text_color(ui_TextSetMinuteTimerFarm, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextSetMinuteTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextSetMinuteTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BGSetMinuteTimerFarm = lv_img_create(ui_TimerFarm);
    lv_img_set_src(ui_BGSetMinuteTimerFarm, &ui_img_roller_bg_png);
    lv_obj_set_width(ui_BGSetMinuteTimerFarm, LV_SIZE_CONTENT);   /// 91
    lv_obj_set_height(ui_BGSetMinuteTimerFarm, LV_SIZE_CONTENT);    /// 90
    lv_obj_set_x(ui_BGSetMinuteTimerFarm, 50);
    lv_obj_set_y(ui_BGSetMinuteTimerFarm, 5);
    lv_obj_set_align(ui_BGSetMinuteTimerFarm, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BGSetMinuteTimerFarm, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_BGSetMinuteTimerFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_RLSetMinuteTimerFarm = lv_roller_create(ui_TimerFarm);
    lv_roller_set_options(ui_RLSetMinuteTimerFarm,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_RLSetMinuteTimerFarm, 71);
    lv_obj_set_height(ui_RLSetMinuteTimerFarm, 66);
    lv_obj_set_x(ui_RLSetMinuteTimerFarm, 50);
    lv_obj_set_y(ui_RLSetMinuteTimerFarm, 5);
    lv_obj_set_align(ui_RLSetMinuteTimerFarm, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(ui_RLSetMinuteTimerFarm, lv_color_hex(0x3F475E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RLSetMinuteTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RLSetMinuteTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RLSetMinuteTimerFarm, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RLSetMinuteTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_RLSetMinuteTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_RLSetMinuteTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_RLSetMinuteTimerFarm, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_RLSetMinuteTimerFarm, lv_color_hex(0xDBE6FF), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_RLSetMinuteTimerFarm, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_RLSetMinuteTimerFarm, &lv_font_montserrat_14, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_RLSetMinuteTimerFarm, lv_color_hex(0x3A445C), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_RLSetMinuteTimerFarm, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    ui_BtnTimerFarm = lv_btn_create(ui_TimerFarm);
    lv_obj_set_width(ui_BtnTimerFarm, 80);
    lv_obj_set_height(ui_BtnTimerFarm, 25);
    lv_obj_set_align(ui_BtnTimerFarm, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_BtnTimerFarm, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnTimerFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BtnTimerFarm, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BtnTimerFarm, lv_color_hex(0x5A5A5A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextBTNTimerFarm = lv_label_create(ui_BtnTimerFarm);
    lv_obj_set_width(ui_TextBTNTimerFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextBTNTimerFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TextBTNTimerFarm, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextBTNTimerFarm, "Enter");
    lv_obj_set_style_text_color(ui_TextBTNTimerFarm, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextBTNTimerFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextBTNTimerFarm, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTNBackToMenuFarm = lv_btn_create(ui_FarmScreen);
    lv_obj_set_width(ui_BTNBackToMenuFarm, 100);
    lv_obj_set_height(ui_BTNBackToMenuFarm, 40);
    lv_obj_set_x(ui_BTNBackToMenuFarm, -69);
    lv_obj_set_y(ui_BTNBackToMenuFarm, 275);
    lv_obj_set_align(ui_BTNBackToMenuFarm, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_BTNBackToMenuFarm, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BTNBackToMenuFarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BTNBackToMenuFarm, lv_color_hex(0x3A445C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTNBackToMenuFarm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextBTNBackToMenuFarm = lv_label_create(ui_BTNBackToMenuFarm);
    lv_obj_set_width(ui_TextBTNBackToMenuFarm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextBTNBackToMenuFarm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TextBTNBackToMenuFarm, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextBTNBackToMenuFarm, "BACK");

    lv_obj_add_event_cb(ui_SwitchDevice1FARM, ui_event_SwitchDevice1FARM, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SwitchDevice2FARM, ui_event_SwitchDevice2FARM, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnTimerFarm, ui_event_BtnTimerFarm, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BTNBackToMenuFarm, ui_event_BTNBackToMenuFarm, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_FarmScreen, ui_event_FarmScreen, LV_EVENT_ALL, NULL);

}
