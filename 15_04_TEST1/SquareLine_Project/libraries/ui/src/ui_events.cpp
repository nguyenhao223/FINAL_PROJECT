// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: TESTFN4

#include "ui.h"
#include <Arduino.h>
#include <Preferences.h>
#include "main.h"

extern "C" {
	#include "ui.h"
	#include "ui_events.h"
	#include "ui_helpers.h"
	#include "main.h"
}
///////////////////// VARIABLES ////////////////////
char hourst[10], minst[10], datest[10], monthst[10];
const char *yearst;
int hourst_int = 0, minst_int = 0, datest_int = 0, monthst_int = 0, yearst_int = 0;
char hourpm[10], minpm[10];
int hour_pump = 0, min_pump = 0;
char hourpm_end[10], minpm_end[10];
int hour_pump_end = 0, min_pump_end = 0;
char hourpm_period[10], minpm_period[10];
int hour_pump_period = 0, min_pump_period = 0;

bool Timer = false;
bool Control = true;
bool Period = false;

extern bool CheckSwitch;
extern bool CheckSwitch1;
extern bool CheckSwitch2;
extern bool CheckSWTimerP;
extern bool ForgotPW;
extern bool statusdvc1;
extern bool statusdvc2;
extern bool statuspump;
extern bool statustimer;

String OldPW;
String pincode;
Preferences preferences;
void LoginFunc(lv_event_t * e)
{
	// Your code here
	preferences.begin("User", false);
	// Update saved pincode
	pincode = preferences.getString("pin-code", "");
	if (pincode == "")
	{
		pincode = "123456";
		preferences.putString("pin-code", pincode);
	}
	String pincode_input;
	pincode_input = lv_textarea_get_text(ui_PinCodeTextArea);
	if (pincode_input == pincode)
	{
		_ui_screen_change(&ui_MenuScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_MenuScreen_screen_init);
		_ui_flag_modify( ui_LOGINFAILED, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
		//UpdateUserSetting();
	}
	else
	{
		_ui_flag_modify( ui_LOGINFAILED, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
	}
}

void ForgotUserLogin(lv_event_t * e)
{
	// Your code here
	pincode = "165970";
	preferences.putString("pin-code", pincode);
	ForgotPW = true;
	_ui_flag_modify(ui_LOGINFAILED, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
	_ui_flag_modify( ui_SENDNEWPW, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
}

void SaveChangePWFunc(lv_event_t * e)
{
	// Your code here
	OldPW = lv_textarea_get_text(ui_TextCurrentPW);
	String OldPWPR = preferences.getString("pin-code", "");
	String NewPW = lv_textarea_get_text(ui_TextNewPW);
	if (OldPW == OldPWPR) {
		preferences.putString("pin-code", NewPW);
		_ui_flag_modify( ui_TextWrongPW, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
		_ui_flag_modify( ui_NotifySuccsess, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
		_ui_screen_change(&ui_MenuScreen, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_MenuScreen_screen_init);
	} else {
		_ui_flag_modify( ui_TextWrongPW, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
	}	
}

void BTNSaveExitSTTime(lv_event_t * e)
{
	// Your code here
	lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
	    lv_roller_get_selected_str(ui_RLSetHour, hourst, sizeof(hourst));
	    hourst_int = atoi(hourst);
	    lv_roller_get_selected_str(ui_RLSetMinute, minst, sizeof(minst));
	    minst_int = atoi(minst);
	    lv_roller_get_selected_str(ui_RLSetDate, datest, sizeof(datest));
	    datest_int = atoi(datest);
	    lv_roller_get_selected_str(ui_RLSetMonth, monthst, sizeof(monthst));
	    monthst_int = atoi(monthst);
	    yearst = lv_textarea_get_text(ui_TextSetYear);
	    yearst_int = atoi(yearst);
    }
}

void SWDVC1LVRON(lv_event_t * e)
{
	// Your code here
	DVC1 = 1;
	CheckSwitch = true;
	statusdvc1 = 1;
	preferences.begin("User", false);
	preferences.putBool("StatusDevice1", statusdvc1);
	preferences.end();
}

void SWDVC1LVROFF(lv_event_t * e)
{
	// Your code here
	DVC1 = 0;
	CheckSwitch = true;
	statusdvc1 = 0;
	preferences.begin("User", false);
	preferences.putBool("StatusDevice1", statusdvc1);
	preferences.end();
}

void SWDVC2LVRON(lv_event_t * e)
{
	// Your code here
	DVC2 = 1;
	CheckSwitch1 = true;
	statusdvc2 = 1;
	preferences.begin("User", false);
	preferences.putBool("StatusDevice2", statusdvc2);
	preferences.end();
}

void SWDVC2LVROFF(lv_event_t * e)
{
	// Your code here
	DVC2 = 0;
	CheckSwitch1 = true;
	statusdvc2 = 0;
	preferences.begin("User", false);
	preferences.putBool("StatusDevice2", statusdvc2);
	preferences.end();
}

void StageWaterPumpON(lv_event_t * e)
{
	// Your code here
	DVC3 = 1;
	if (Control == true){
	
	CheckSwitch2 = true;
	statuspump = 1;
	preferences.begin("User", false);
	preferences.putBool("StatusPump", statuspump);
	preferences.end();
	}
}

void StageWaterPumpOFF(lv_event_t * e)
{
	// Your code here
	DVC3 = 0;
	if (Control == true){
	
	CheckSwitch2 = true;
	statuspump = 0;
	preferences.begin("User", false);
	preferences.putBool("StatusPump", statuspump);
	preferences.end();
	}
}

void StageTimerON(lv_event_t * e)
{
	// Your code here
	TimerPump = 1;
	if (Control == true){
	
	CheckSWTimerP = true;
	statustimer = 1;
	preferences.begin("User", false);
	preferences.putBool("StatusTimer", statustimer);
	preferences.end();
	}
	
}

void StageTimerOFF(lv_event_t * e)
{
	// Your code here
	TimerPump = 0;
	if (Control == true){
	
	CheckSWTimerP = true;
	statustimer = 0;
	preferences.begin("User", false);
	preferences.putBool("StatusTimer", statustimer);
	preferences.end();
	}
}

void SaveTimeTimer(lv_event_t * e)
{
	// Your code here
	static int count;
	
	count++;
	if (count == 1){
		Timer = true;
		Control = false;
		Period = true;
		Serial.println("TIMEON");
	}
	
	if ((Timer == true) && (TimerPump == 1)){
		
		if (DVC3 == 0) {
		lv_roller_get_selected_str(ui_RLSetHourTimerFarm, hourpm, sizeof(hourpm));
		hour_pump = atoi(hourpm);
		lv_roller_get_selected_str(ui_RLSetMinuteTimerFarm, minpm, sizeof(minpm));
		min_pump = atoi(minpm);
	
		preferences.begin("User", false);
		preferences.putInt("TimeHourPump", hour_pump);
		preferences.putInt("TimeMinPump", min_pump);
		preferences.end();
		}
		if (DVC3 == 1) {
		lv_roller_get_selected_str(ui_RLSetHourTimerFarm, hourpm_end, sizeof(hourpm_end));
		hour_pump_end = atoi(hourpm_end);
		lv_roller_get_selected_str(ui_RLSetMinuteTimerFarm, minpm_end, sizeof(minpm_end));
		min_pump_end = atoi(minpm_end);
	
		preferences.begin("User", false);
		preferences.putInt("TimeHourPumpEnd", hour_pump_end);
		preferences.putInt("TimeMinPumpEnd", min_pump_end);
		preferences.end();
		}
	}
	
	if ((Period == true) && (TimerPump == 0)){
		lv_roller_get_selected_str(ui_RLSetHourTimerFarm, hourpm_period, sizeof(hourpm_period));
		hour_pump_period = atoi(hourpm_period);
		lv_roller_get_selected_str(ui_RLSetMinuteTimerFarm, minpm_period, sizeof(minpm_period));
		min_pump_period = atoi(minpm_period);
		Serial.println(hour_pump_period);
		Serial.println(min_pump_period);
		preferences.begin("User", false);
		preferences.putInt("TimeHourPeriod", hour_pump_period);
		preferences.putInt("TimeMinPeriod", min_pump_period);
		preferences.end();
		Serial.println("Period");
		CheckTimeSVPumpAdd = true;
		}
	if (count >= 2){
		Timer = false;
		Control = true;
		Serial.println("TIMEOFF");
		lv_obj_clear_state(ui_SwitchDevice1FARM, LV_STATE_CHECKED);
		count = 0;
	}
	
	CheckTimeSVPump = true;
	CheckTimeSVPumpEnd = true;
	CheckTimeSVPumpPeriod = true;

}
