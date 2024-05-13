// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: TESTFN4

#include "../ui.h"

void ui_HomeScreen_screen_init(void)
{
    ui_HomeScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_HomeScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_HomeScreen, &ui_img_bgiot4_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DateHome = lv_obj_create(ui_HomeScreen);
    lv_obj_set_width(ui_DateHome, 291);
    lv_obj_set_height(ui_DateHome, 180);
    lv_obj_set_align(ui_DateHome, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_DateHome, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_DateHome, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_DateHome, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_DateHome, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_DateHome, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DayOTWHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_DayOTWHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DayOTWHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_DayOTWHome, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_DayOTWHome, "MONDAY");
    lv_obj_set_style_text_color(ui_DayOTWHome, lv_color_hex(0x0BDFF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DayOTWHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DayOTWHome, &ui_font_FontDay, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_DayHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_DayHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DayHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_DayHome, -120);
    lv_obj_set_y(ui_DayHome, 0);
    lv_obj_set_align(ui_DayHome, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DayHome, "13");
    lv_obj_set_style_text_color(ui_DayHome, lv_color_hex(0x0BDFF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_DayHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_DayHome, &ui_font_Font1Date, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MonthNameHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_MonthNameHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MonthNameHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MonthNameHome, -31);
    lv_obj_set_y(ui_MonthNameHome, 0);
    lv_obj_set_align(ui_MonthNameHome, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MonthNameHome, "November");
    lv_obj_set_style_text_color(ui_MonthNameHome, lv_color_hex(0x0BDFF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MonthNameHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MonthNameHome, &ui_font_Font1Date, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_YearHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_YearHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_YearHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_YearHome, 71);
    lv_obj_set_y(ui_YearHome, 0);
    lv_obj_set_align(ui_YearHome, LV_ALIGN_CENTER);
    lv_label_set_text(ui_YearHome, "2023");
    lv_obj_set_style_text_color(ui_YearHome, lv_color_hex(0x0BDFF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_YearHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_YearHome, &ui_font_Font1Date, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HourHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_HourHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HourHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HourHome, -98);
    lv_obj_set_y(ui_HourHome, -1);
    lv_obj_set_align(ui_HourHome, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_HourHome, "12");
    lv_obj_set_style_text_color(ui_HourHome, lv_color_hex(0x0DA6F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_HourHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HourHome, &ui_font_Font2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colon1 = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_colon1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_colon1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_colon1, -61);
    lv_obj_set_y(ui_colon1, -1);
    lv_obj_set_align(ui_colon1, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_colon1, ":");
    lv_obj_set_style_text_color(ui_colon1, lv_color_hex(0x0DA6F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_colon1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_colon1, &ui_font_Font2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MinuteHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_MinuteHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MinuteHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_MinuteHome, -19);
    lv_obj_set_y(ui_MinuteHome, -1);
    lv_obj_set_align(ui_MinuteHome, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_MinuteHome, "22");
    lv_obj_set_style_text_color(ui_MinuteHome, lv_color_hex(0x0DA6F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_MinuteHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MinuteHome, &ui_font_Font2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SecondHome = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_SecondHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SecondHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SecondHome, 63);
    lv_obj_set_y(ui_SecondHome, -2);
    lv_obj_set_align(ui_SecondHome, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_SecondHome, "39");
    lv_obj_set_style_text_color(ui_SecondHome, lv_color_hex(0x0DA6F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SecondHome, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SecondHome, &ui_font_Font2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_colon2 = lv_label_create(ui_DateHome);
    lv_obj_set_width(ui_colon2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_colon2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_colon2, 21);
    lv_obj_set_y(ui_colon2, -1);
    lv_obj_set_align(ui_colon2, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_colon2, ":");
    lv_obj_set_style_text_color(ui_colon2, lv_color_hex(0x0DA6F9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_colon2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_colon2, &ui_font_Font2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SunHome = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_SunHome, &ui_img_sun_png);
    lv_obj_set_width(ui_SunHome, 147);
    lv_obj_set_height(ui_SunHome, 256);
    lv_obj_set_x(ui_SunHome, 167);
    lv_obj_set_y(ui_SunHome, 47);
    lv_obj_set_align(ui_SunHome, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SunHome, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SunHome, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_CloudHome = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_CloudHome, &ui_img_clouds_png);
    lv_obj_set_width(ui_CloudHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_CloudHome, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_CloudHome, 159);
    lv_obj_set_y(ui_CloudHome, 50);
    lv_obj_set_align(ui_CloudHome, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_CloudHome, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_CloudHome, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BtnMenu = lv_btn_create(ui_HomeScreen);
    lv_obj_set_width(ui_BtnMenu, 100);
    lv_obj_set_height(ui_BtnMenu, 50);
    lv_obj_set_x(ui_BtnMenu, 185);
    lv_obj_set_y(ui_BtnMenu, -133);
    lv_obj_set_align(ui_BtnMenu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnMenu, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnMenu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BtnMenu, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BtnMenu, lv_color_hex(0xF5F5F5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnMenu, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgBtnMenu = lv_img_create(ui_BtnMenu);
    lv_img_set_src(ui_ImgBtnMenu, &ui_img_house_png);
    lv_obj_set_width(ui_ImgBtnMenu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImgBtnMenu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ImgBtnMenu, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImgBtnMenu, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImgBtnMenu, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    
    ////////////////////////////////////////////////////////
    ui_namedayweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_namedayweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_namedayweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_namedayweather, -100);
    lv_obj_set_y(ui_namedayweather, 20);
    lv_obj_set_align(ui_namedayweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_namedayweather, "Today");
    lv_obj_set_style_text_color(ui_namedayweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_namedayweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_iconweather = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_iconweather, &ui_img_weather_png);
    lv_obj_set_width(ui_iconweather, LV_SIZE_CONTENT);   /// 28
    lv_obj_set_height(ui_iconweather, LV_SIZE_CONTENT);    /// 23
    lv_obj_set_x(ui_iconweather, -100);
    lv_obj_set_y(ui_iconweather, 47);
    lv_obj_set_align(ui_iconweather, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_iconweather, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_iconweather, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_tempminweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_tempminweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_tempminweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_tempminweather, -190);
    lv_obj_set_y(ui_tempminweather, 76);
    lv_obj_set_align(ui_tempminweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tempminweather, "Tem min:");
    lv_obj_set_style_text_color(ui_tempminweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tempminweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    ////
    ui_tempminweather1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_tempminweather1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_tempminweather1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_tempminweather1, -125);
    lv_obj_set_y(ui_tempminweather1, 76);
    lv_obj_set_align(ui_tempminweather1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tempminweather1, "°C");
    lv_obj_set_style_text_color(ui_tempminweather1, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tempminweather1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
	////
	
    ui_tempmaxweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_tempmaxweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_tempmaxweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_tempmaxweather, -40);
    lv_obj_set_y(ui_tempmaxweather, 76);
    lv_obj_set_align(ui_tempmaxweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tempmaxweather, "Tem max:");
    lv_obj_set_style_text_color(ui_tempmaxweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tempmaxweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///
    ui_tempmaxweather1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_tempmaxweather1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_tempmaxweather1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_tempmaxweather1, 25);
    lv_obj_set_y(ui_tempmaxweather1, 76);
    lv_obj_set_align(ui_tempmaxweather1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_tempmaxweather1, "°C");
    lv_obj_set_style_text_color(ui_tempmaxweather1, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_tempmaxweather1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///

    ui_humweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_humweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_humweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_humweather, -190);
    lv_obj_set_y(ui_humweather, 104);
    lv_obj_set_align(ui_humweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_humweather, "Humidity:");
    lv_obj_set_style_text_color(ui_humweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_humweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///
    ui_humweather1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_humweather1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_humweather1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_humweather1, -130);
    lv_obj_set_y(ui_humweather1, 104);
    lv_obj_set_align(ui_humweather1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_humweather1, "%");
    lv_obj_set_style_text_color(ui_humweather1, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_humweather1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///

    ui_pressureweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_pressureweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pressureweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pressureweather, -40);
    lv_obj_set_y(ui_pressureweather, 104);
    lv_obj_set_align(ui_pressureweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pressureweather, "Pressure:");
    lv_obj_set_style_text_color(ui_pressureweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pressureweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///
    ui_pressureweather1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_pressureweather1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_pressureweather1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_pressureweather1, 35);
    lv_obj_set_y(ui_pressureweather1, 104);
    lv_obj_set_align(ui_pressureweather1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_pressureweather1, "hPa");
    lv_obj_set_style_text_color(ui_pressureweather1, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_pressureweather1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///

    ui_windspeedweather = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_windspeedweather, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_windspeedweather, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_windspeedweather, -177);
    lv_obj_set_y(ui_windspeedweather, 132);
    lv_obj_set_align(ui_windspeedweather, LV_ALIGN_CENTER);
    lv_label_set_text(ui_windspeedweather, "Wind Speed:");
    lv_obj_set_style_text_color(ui_windspeedweather, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_windspeedweather, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///
    ui_windspeedweather1 = lv_label_create(ui_HomeScreen);
    lv_obj_set_width(ui_windspeedweather1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_windspeedweather1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_windspeedweather1, -95);
    lv_obj_set_y(ui_windspeedweather1, 132);
    lv_obj_set_align(ui_windspeedweather1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_windspeedweather1, "m/s");
    lv_obj_set_style_text_color(ui_windspeedweather1, lv_color_hex(0x00FFFC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_windspeedweather1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ///

    ui_iconweather1 = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_iconweather1, &ui_img_weather_cloud_png);
    lv_obj_set_width(ui_iconweather1, LV_SIZE_CONTENT);   /// 37
    lv_obj_set_height(ui_iconweather1, LV_SIZE_CONTENT);    /// 30
    lv_obj_set_x(ui_iconweather1, -134);
    lv_obj_set_y(ui_iconweather1, 47);
    lv_obj_set_align(ui_iconweather1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_iconweather1, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_iconweather1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_iconweather2 = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_iconweather2, &ui_img_weather_cloud_fog_png);
    lv_obj_set_width(ui_iconweather2, LV_SIZE_CONTENT);   /// 37
    lv_obj_set_height(ui_iconweather2, LV_SIZE_CONTENT);    /// 29
    lv_obj_set_x(ui_iconweather2, -133);
    lv_obj_set_y(ui_iconweather2, 47);
    lv_obj_set_align(ui_iconweather2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_iconweather2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_iconweather2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_iconweather3 = lv_img_create(ui_HomeScreen);
    lv_img_set_src(ui_iconweather3, &ui_img_weather_sun_png);
    lv_obj_set_width(ui_iconweather3, LV_SIZE_CONTENT);   /// 28
    lv_obj_set_height(ui_iconweather3, LV_SIZE_CONTENT);    /// 28
    lv_obj_set_x(ui_iconweather3, -132);
    lv_obj_set_y(ui_iconweather3, 48);
    lv_obj_set_align(ui_iconweather3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_iconweather3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_iconweather3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ////////////////////////////////////////////////////////

    lv_obj_add_event_cb(ui_BtnMenu, ui_event_BtnMenu, LV_EVENT_ALL, NULL);

}
