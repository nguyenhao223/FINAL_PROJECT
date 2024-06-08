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

Preferences preferences1;

void ui_LivingRoomScreen_screen_init(void)
{
    ui_LivingRoomScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_LivingRoomScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_LivingRoomScreen, &ui_img_lroombg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTitleLVRoom = lv_label_create(ui_LivingRoomScreen);
    lv_obj_set_width(ui_TextTitleLVRoom, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTitleLVRoom, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTitleLVRoom, 0);
    lv_obj_set_y(ui_TextTitleLVRoom, 20);
    lv_obj_set_align(ui_TextTitleLVRoom, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_TextTitleLVRoom, "Living Room");
    lv_obj_set_style_text_color(ui_TextTitleLVRoom, lv_color_hex(0x0D12BE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTitleLVRoom, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTitleLVRoom, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

	///////////
	ui_TextAutoLVR = lv_label_create(ui_LivingRoomScreen);
    lv_obj_set_width(ui_TextAutoLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextAutoLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextAutoLVR, 372);
    lv_obj_set_y(ui_TextAutoLVR, 141);
    lv_label_set_text(ui_TextAutoLVR, "Auto");
    lv_obj_set_style_text_color(ui_TextAutoLVR, lv_color_hex(0x001CFB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextAutoLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextAutoLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SwitchAuto = lv_switch_create(ui_LivingRoomScreen);
    preferences1.begin("User", false);
    bool statutautor1 = preferences1.getBool("StatusAutoRoom1", 0);
    preferences1.end();
    if (statutautor1 == 1){
    	lv_obj_add_state(ui_SwitchAuto, LV_STATE_CHECKED);
	}
	else {
		lv_obj_clear_state(ui_SwitchAuto, LV_STATE_CHECKED);
	}
    lv_obj_set_width(ui_SwitchAuto, 76);
    lv_obj_set_height(ui_SwitchAuto, 36);
    lv_obj_set_x(ui_SwitchAuto, 151);
    lv_obj_set_y(ui_SwitchAuto, 22);
    lv_obj_set_align(ui_SwitchAuto, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_SwitchAuto, &ui_img_img_switch_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_SwitchAuto, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SwitchAuto, lv_color_hex(0x274264), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchAuto, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SwitchAuto, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SwitchAuto, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SwitchAuto, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SwitchAuto, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    ///////////////

    ui_ValueAndStatusLVR = lv_obj_create(ui_LivingRoomScreen);
    lv_obj_set_width(ui_ValueAndStatusLVR, 255);
    lv_obj_set_height(ui_ValueAndStatusLVR, 252);
    lv_obj_set_x(ui_ValueAndStatusLVR, 5);
    lv_obj_set_y(ui_ValueAndStatusLVR, 30);
    lv_obj_set_align(ui_ValueAndStatusLVR, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_ValueAndStatusLVR, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ValueAndStatusLVR, lv_color_hex(0xDAD4D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ValueAndStatusLVR, 140, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTempLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextTempLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTempLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTempLVR, 0);
    lv_obj_set_y(ui_TextTempLVR, -10);
    lv_label_set_text(ui_TextTempLVR, "Temperature:");
    lv_obj_set_style_text_color(ui_TextTempLVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTempLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTempLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValTempLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValTempLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValTempLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValTempLVR, 120);
    lv_obj_set_y(ui_ValTempLVR, -10);
    lv_label_set_text(ui_ValTempLVR, "28.7");
    lv_obj_set_style_text_color(ui_ValTempLVR, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValTempLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValTempLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_CelsiusTempLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_CelsiusTempLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CelsiusTempLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CelsiusTempLVR, 160);
    lv_obj_set_y(ui_CelsiusTempLVR, -10);
    lv_label_set_text(ui_CelsiusTempLVR, "°C");
    lv_obj_set_style_text_color(ui_CelsiusTempLVR, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_CelsiusTempLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_CelsiusTempLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextHumLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextHumLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextHumLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextHumLVR, 0);
    lv_obj_set_y(ui_TextHumLVR, 15);
    lv_label_set_text(ui_TextHumLVR, "Humidity:");
    lv_obj_set_style_text_color(ui_TextHumLVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextHumLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextHumLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValHumLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValHumLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValHumLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValHumLVR, 120);
    lv_obj_set_y(ui_ValHumLVR, 15);
    lv_label_set_text(ui_ValHumLVR, "57");
    lv_obj_set_style_text_color(ui_ValHumLVR, lv_color_hex(0x1704D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValHumLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValHumLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PercentHumLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_PercentHumLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PercentHumLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PercentHumLVR, 145);
    lv_obj_set_y(ui_PercentHumLVR, 15);
    lv_label_set_text(ui_PercentHumLVR, "%");
    lv_obj_set_style_text_color(ui_PercentHumLVR, lv_color_hex(0x1704D8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PercentHumLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PercentHumLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextCO2LVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextCO2LVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextCO2LVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextCO2LVR, 0);
    lv_obj_set_y(ui_TextCO2LVR, 40);
    lv_label_set_text(ui_TextCO2LVR, "CO2:");
    lv_obj_set_style_text_color(ui_TextCO2LVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextCO2LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextCO2LVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValCO2LVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValCO2LVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValCO2LVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValCO2LVR, 120);
    lv_obj_set_y(ui_ValCO2LVR, 40);
    lv_label_set_text(ui_ValCO2LVR, "844");
    lv_obj_set_style_text_color(ui_ValCO2LVR, lv_color_hex(0x09AACB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValCO2LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValCO2LVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PPMCO2LVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_PPMCO2LVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PPMCO2LVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PPMCO2LVR, 165);
    lv_obj_set_y(ui_PPMCO2LVR, 40);
    lv_label_set_text(ui_PPMCO2LVR, "PPM");
    lv_obj_set_style_text_color(ui_PPMCO2LVR, lv_color_hex(0x09AACB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PPMCO2LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PPMCO2LVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextTVOCLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextTVOCLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextTVOCLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextTVOCLVR, 0);
    lv_obj_set_y(ui_TextTVOCLVR, 65);
    lv_label_set_text(ui_TextTVOCLVR, "TVOC:");
    lv_obj_set_style_text_color(ui_TextTVOCLVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextTVOCLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextTVOCLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValTVOCLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValTVOCLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValTVOCLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValTVOCLVR, 120);
    lv_obj_set_y(ui_ValTVOCLVR, 65);
    lv_label_set_text(ui_ValTVOCLVR, "67");
    lv_obj_set_style_text_color(ui_ValTVOCLVR, lv_color_hex(0x007188), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValTVOCLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValTVOCLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PPBTVOCLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_PPBTVOCLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PPBTVOCLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PPBTVOCLVR, 165);
    lv_obj_set_y(ui_PPBTVOCLVR, 65);
    lv_label_set_text(ui_PPBTVOCLVR, "PPB");
    lv_obj_set_style_text_color(ui_PPBTVOCLVR, lv_color_hex(0x007188), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_PPBTVOCLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_PPBTVOCLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextFireSSLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextFireSSLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextFireSSLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextFireSSLVR, 0);
    lv_obj_set_y(ui_TextFireSSLVR, 90);
    lv_label_set_text(ui_TextFireSSLVR, "FireSensor:");
    lv_obj_set_style_text_color(ui_TextFireSSLVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextFireSSLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextFireSSLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValFireSSLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValFireSSLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValFireSSLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValFireSSLVR, 120);
    lv_obj_set_y(ui_ValFireSSLVR, 90);
    lv_label_set_text(ui_ValFireSSLVR, "No Detect");
    lv_obj_set_style_text_color(ui_ValFireSSLVR, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValFireSSLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValFireSSLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextSmokeSSLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextSmokeSSLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextSmokeSSLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextSmokeSSLVR, 0);
    lv_obj_set_y(ui_TextSmokeSSLVR, 115);
    lv_label_set_text(ui_TextSmokeSSLVR, "SmokeSensor:");
    lv_obj_set_style_text_color(ui_TextSmokeSSLVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextSmokeSSLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextSmokeSSLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ValSmokeSSLVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_ValSmokeSSLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ValSmokeSSLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ValSmokeSSLVR, 120);
    lv_obj_set_y(ui_ValSmokeSSLVR, 115);
    lv_label_set_text(ui_ValSmokeSSLVR, "No Detect");
    lv_obj_set_style_text_color(ui_ValSmokeSSLVR, lv_color_hex(0xC80B0B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ValSmokeSSLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ValSmokeSSLVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextDevice1LVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextDevice1LVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextDevice1LVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextDevice1LVR, 0);
    lv_obj_set_y(ui_TextDevice1LVR, 150);
    lv_label_set_text(ui_TextDevice1LVR, "Device 1:");
    lv_obj_set_style_text_color(ui_TextDevice1LVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextDevice1LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextDevice1LVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SwitchDevice1LVR = lv_switch_create(ui_ValueAndStatusLVR);
    preferences1.begin("User", false);
    bool statutsw1 = preferences1.getBool("StatusDevice1", 0);
    preferences1.end();
    if (statutsw1 == 1){
    	lv_obj_add_state(ui_SwitchDevice1LVR, LV_STATE_CHECKED);
	}
	else {
		lv_obj_clear_state(ui_SwitchDevice1LVR, LV_STATE_CHECKED);
	}
    lv_obj_set_width(ui_SwitchDevice1LVR, 76);
    lv_obj_set_height(ui_SwitchDevice1LVR, 36);
    lv_obj_set_x(ui_SwitchDevice1LVR, 42);
    lv_obj_set_y(ui_SwitchDevice1LVR, 51);
    lv_obj_set_align(ui_SwitchDevice1LVR, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_SwitchDevice1LVR, &ui_img_img_switch_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_SwitchDevice1LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SwitchDevice1LVR, lv_color_hex(0x274264), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchDevice1LVR, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SwitchDevice1LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SwitchDevice1LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SwitchDevice1LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SwitchDevice1LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_TextDevice2LVR = lv_label_create(ui_ValueAndStatusLVR);
    lv_obj_set_width(ui_TextDevice2LVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextDevice2LVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TextDevice2LVR, 0);
    lv_obj_set_y(ui_TextDevice2LVR, 195);
    lv_label_set_text(ui_TextDevice2LVR, "Device 2:");
    lv_obj_set_style_text_color(ui_TextDevice2LVR, lv_color_hex(0x251C1C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_TextDevice2LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TextDevice2LVR, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SwitchDevice2LVR = lv_switch_create(ui_ValueAndStatusLVR);
    preferences1.begin("User", false);
    bool statutsw2 = preferences1.getBool("StatusDevice2", 0);
    preferences1.end();
    if (statutsw2 == 1){
    	lv_obj_add_state(ui_SwitchDevice2LVR, LV_STATE_CHECKED);
	}
	else {
		lv_obj_clear_state(ui_SwitchDevice2LVR, LV_STATE_CHECKED);
	}
    lv_obj_set_width(ui_SwitchDevice2LVR, 76);
    lv_obj_set_height(ui_SwitchDevice2LVR, 36);
    lv_obj_set_x(ui_SwitchDevice2LVR, 42);
    lv_obj_set_y(ui_SwitchDevice2LVR, 95);
    lv_obj_set_align(ui_SwitchDevice2LVR, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_SwitchDevice2LVR, &ui_img_img_switch_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_SwitchDevice2LVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SwitchDevice2LVR, lv_color_hex(0x274264), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SwitchDevice2LVR, 255, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_SwitchDevice2LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SwitchDevice2LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SwitchDevice2LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SwitchDevice2LVR, -6, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_BTNBackToMenuLVR = lv_btn_create(ui_LivingRoomScreen);
    lv_obj_set_width(ui_BTNBackToMenuLVR, 100);
    lv_obj_set_height(ui_BTNBackToMenuLVR, 50);
    lv_obj_set_x(ui_BTNBackToMenuLVR, 151);
    lv_obj_set_y(ui_BTNBackToMenuLVR, 106);
    lv_obj_set_align(ui_BTNBackToMenuLVR, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTNBackToMenuLVR, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BTNBackToMenuLVR, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BTNBackToMenuLVR, lv_color_hex(0x3A445C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTNBackToMenuLVR, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TextBTNBackToMenuLVR = lv_label_create(ui_BTNBackToMenuLVR);
    lv_obj_set_width(ui_TextBTNBackToMenuLVR, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TextBTNBackToMenuLVR, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TextBTNBackToMenuLVR, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TextBTNBackToMenuLVR, "BACK");
    
	lv_obj_add_event_cb(ui_SwitchAuto, ui_event_SwitchAuto, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SwitchDevice1LVR, ui_event_SwitchDevice1LVR, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SwitchDevice2LVR, ui_event_SwitchDevice2LVR, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BTNBackToMenuLVR, ui_event_BTNBackToMenuLVR, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LivingRoomScreen, ui_event_LivingRoomScreen, LV_EVENT_ALL, NULL);

}