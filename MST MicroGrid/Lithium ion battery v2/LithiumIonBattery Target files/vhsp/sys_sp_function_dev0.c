// generated using template: cop_main.template---------------------------------------------
/******************************************************************************************
**
**  Module Name: cop_main.c
**  NOTE: Automatically generated file. DO NOT MODIFY!
**  Description:
**            Main file
**
******************************************************************************************/
// generated using template: arm/custom_include.template-----------------------------------

#include "math.h"

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components
//#include "example_dll.h"

// Header files from additional sources (Advanced C Function)
// ----------------------------------------------------------------------------------------
// generated using template: VirtualHIL/custom_defines.template----------------------------

typedef unsigned char X_UnInt8;
typedef char X_Int8;
typedef signed short X_Int16;
typedef unsigned short X_UnInt16;
typedef int X_Int32;
typedef unsigned int X_UnInt32;
typedef unsigned int uint;
typedef double real;

// ----------------------------------------------------------------------------------------
// generated using template: custom_consts.template----------------------------------------

// arithmetic constants
#define C_SQRT_2                    1.4142135623730950488016887242097f
#define C_SQRT_3                    1.7320508075688772935274463415059f
#define C_PI                        3.1415926535897932384626433832795f
#define C_E                         2.7182818284590452353602874713527f
#define C_2PI                       6.283185307179586476925286766559f

//@cmp.def.start
//component defines























































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
float _ess_inverter_vrms_vinst_va1__out;
float _ess_measurement_vrms_vinst_va1__out;
float _ev_charging_station_inverter_vrms_vinst_va1__out;
float _ev_charging_station_measurement_vrms_vinst_va1__out;
float _measurement_vrms_vinst_va1__out;
float _ess_inverter_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _ess_inverter_vrms_rms_calc_fast__period;
X_UnInt8 _ess_inverter_vrms_rms_calc_fast__var_zc;
float _ess_inverter_vrms_rms_calc_fast__var_filt_old;
float _ess_inverter_vrms_rms_calc_slow__var_rms;
float _ess_measurement_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _ess_measurement_vrms_rms_calc_fast__period;
X_UnInt8 _ess_measurement_vrms_rms_calc_fast__var_zc;
float _ess_measurement_vrms_rms_calc_fast__var_filt_old;
float _ess_measurement_vrms_rms_calc_slow__var_rms;
float _ev_charging_station_inverter_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _ev_charging_station_inverter_vrms_rms_calc_fast__period;
X_UnInt8 _ev_charging_station_inverter_vrms_rms_calc_fast__var_zc;
float _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt_old;
float _ev_charging_station_inverter_vrms_rms_calc_slow__var_rms;
float _ev_charging_station_measurement_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _ev_charging_station_measurement_vrms_rms_calc_fast__period;
X_UnInt8 _ev_charging_station_measurement_vrms_rms_calc_fast__var_zc;
float _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt_old;
float _ev_charging_station_measurement_vrms_rms_calc_slow__var_rms;
float _measurement_vrms_rms_calc_fast__var_eff_s;
X_UnInt32 _measurement_vrms_rms_calc_fast__period;
X_UnInt8 _measurement_vrms_rms_calc_fast__var_zc;
float _measurement_vrms_rms_calc_fast__var_filt_old;
float _measurement_vrms_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _ess_inverter_vrms_rt1_output__out =  0.0;

float _ess_inverter_vrms_rt2_output__out =  0.0;

float _ess_measurement_vrms_rt1_output__out =  0.0;

float _ess_measurement_vrms_rt2_output__out =  0.0;

float _ev_charging_station_inverter_vrms_rt1_output__out =  0.0;

float _ev_charging_station_inverter_vrms_rt2_output__out =  0.0;

float _ev_charging_station_measurement_vrms_rt1_output__out =  0.0;

float _ev_charging_station_measurement_vrms_rt2_output__out =  0.0;

float _measurement_vrms_rt1_output__out =  0.0;

float _measurement_vrms_rt2_output__out =  0.0;

float _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _ess_inverter_vrms_rms_calc_fast__var_filt;
float _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
float _ess_measurement_vrms_rms_calc_fast__var_filt;
float _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt;
float _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
float _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt;
float _measurement_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _measurement_vrms_rms_calc_fast__pc_cnt_1_state;
float _measurement_vrms_rms_calc_fast__var_filt;
//@cmp.svar.end


// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_inverter_vrms_rt1_output__out =  0.0;
    _ess_inverter_vrms_rt2_output__out =  0.0;
    _ess_measurement_vrms_rt1_output__out =  0.0;
    _ess_measurement_vrms_rt2_output__out =  0.0;
    _ev_charging_station_inverter_vrms_rt1_output__out =  0.0;
    _ev_charging_station_inverter_vrms_rt2_output__out =  0.0;
    _ev_charging_station_measurement_vrms_rt1_output__out =  0.0;
    _ev_charging_station_measurement_vrms_rt2_output__out =  0.0;
    _measurement_vrms_rt1_output__out =  0.0;
    _measurement_vrms_rt2_output__out =  0.0;
    _ess_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _ess_inverter_vrms_rms_calc_fast__period = 0;
    _ess_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _ess_measurement_vrms_rms_calc_fast__var_eff_s = 0;
    _ess_measurement_vrms_rms_calc_fast__period = 0;
    _ess_measurement_vrms_rms_calc_fast__var_filt = 0.0f;
    _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _ev_charging_station_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _ev_charging_station_inverter_vrms_rms_calc_fast__period = 0;
    _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _ev_charging_station_measurement_vrms_rms_calc_fast__var_eff_s = 0;
    _ev_charging_station_measurement_vrms_rms_calc_fast__period = 0;
    _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt = 0.0f;
    _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _measurement_vrms_rms_calc_fast__var_eff_s = 0;
    _measurement_vrms_rms_calc_fast__period = 0;
    _measurement_vrms_rms_calc_fast__var_filt = 0.0f;
    _measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
}


// generated using template: common_timer_counter_handler.template-------------------------

/*****************************************************************************************/
/**
* This function is the handler which performs processing for the timer counter.
* It is called from an interrupt context such that the amount of processing
* performed should be minimized.  It is called when the timer counter expires
* if interrupts are enabled.
*
*
* @param    None
*
* @return   None
*
* @note     None
*
*****************************************************************************************/

void TimerCounterHandler_0_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Vrms.Vinst.Va1
    _ess_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x20e));
    // Generated from the component: ESS.Measurement.Vrms.Vinst.Va1
    _ess_measurement_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x210));
    // Generated from the component: EV Charging Station.Inverter.Vrms.Vinst.Va1
    _ev_charging_station_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x60e));
    // Generated from the component: EV Charging Station.Measurement.Vrms.Vinst.Va1
    _ev_charging_station_measurement_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x610));
    // Generated from the component: Measurement.Vrms.Vinst.Va1
    _measurement_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_fast
    _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state + _ess_inverter_vrms_vinst_va1__out * _ess_inverter_vrms_vinst_va1__out;
    _ess_inverter_vrms_rms_calc_fast__var_filt_old = _ess_inverter_vrms_rms_calc_fast__var_filt;
    _ess_inverter_vrms_rms_calc_fast__var_filt = (_ess_inverter_vrms_rms_calc_fast__var_filt_old * 0.909 + _ess_inverter_vrms_vinst_va1__out * 0.0909);
    if((_ess_inverter_vrms_rms_calc_fast__var_filt >= 0.0f) && (_ess_inverter_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _ess_inverter_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _ess_inverter_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ess_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ess_inverter_vrms_rms_calc_fast__var_eff_s = _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _ess_inverter_vrms_rms_calc_fast__period = (float)_ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
        _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: ESS.Inverter.Vrms.sys1
    // Generated from the component: ESS.Measurement.Vrms.rms_calc_fast
    _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state = _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state + _ess_measurement_vrms_vinst_va1__out * _ess_measurement_vrms_vinst_va1__out;
    _ess_measurement_vrms_rms_calc_fast__var_filt_old = _ess_measurement_vrms_rms_calc_fast__var_filt;
    _ess_measurement_vrms_rms_calc_fast__var_filt = (_ess_measurement_vrms_rms_calc_fast__var_filt_old * 0.909 + _ess_measurement_vrms_vinst_va1__out * 0.0909);
    if((_ess_measurement_vrms_rms_calc_fast__var_filt >= 0.0f) && (_ess_measurement_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _ess_measurement_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _ess_measurement_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ess_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ess_measurement_vrms_rms_calc_fast__var_eff_s = _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state;
        _ess_measurement_vrms_rms_calc_fast__period = (float)_ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
        _ess_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: ESS.Measurement.Vrms.sys1
    // Generated from the component: EV Charging Station.Inverter.Vrms.rms_calc_fast
    _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state = _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state + _ev_charging_station_inverter_vrms_vinst_va1__out * _ev_charging_station_inverter_vrms_vinst_va1__out;
    _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt_old = _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt;
    _ev_charging_station_inverter_vrms_rms_calc_fast__var_filt = (_ev_charging_station_inverter_vrms_rms_calc_fast__var_filt_old * 0.909 + _ev_charging_station_inverter_vrms_vinst_va1__out * 0.0909);
    if((_ev_charging_station_inverter_vrms_rms_calc_fast__var_filt >= 0.0f) && (_ev_charging_station_inverter_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _ev_charging_station_inverter_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _ev_charging_station_inverter_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ev_charging_station_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ev_charging_station_inverter_vrms_rms_calc_fast__var_eff_s = _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _ev_charging_station_inverter_vrms_rms_calc_fast__period = (float)_ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
        _ev_charging_station_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: EV Charging Station.Inverter.Vrms.sys1
    // Generated from the component: EV Charging Station.Measurement.Vrms.rms_calc_fast
    _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state = _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state + _ev_charging_station_measurement_vrms_vinst_va1__out * _ev_charging_station_measurement_vrms_vinst_va1__out;
    _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt_old = _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt;
    _ev_charging_station_measurement_vrms_rms_calc_fast__var_filt = (_ev_charging_station_measurement_vrms_rms_calc_fast__var_filt_old * 0.909 + _ev_charging_station_measurement_vrms_vinst_va1__out * 0.0909);
    if((_ev_charging_station_measurement_vrms_rms_calc_fast__var_filt >= 0.0f) && (_ev_charging_station_measurement_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _ev_charging_station_measurement_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _ev_charging_station_measurement_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_ev_charging_station_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ev_charging_station_measurement_vrms_rms_calc_fast__var_eff_s = _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state;
        _ev_charging_station_measurement_vrms_rms_calc_fast__period = (float)_ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
        _ev_charging_station_measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: EV Charging Station.Measurement.Vrms.sys1
    // Generated from the component: Measurement.Vrms.rms_calc_fast
    _measurement_vrms_rms_calc_fast__v_sq_sum_state = _measurement_vrms_rms_calc_fast__v_sq_sum_state + _measurement_vrms_vinst_va1__out * _measurement_vrms_vinst_va1__out;
    _measurement_vrms_rms_calc_fast__var_filt_old = _measurement_vrms_rms_calc_fast__var_filt;
    _measurement_vrms_rms_calc_fast__var_filt = (_measurement_vrms_rms_calc_fast__var_filt_old * 0.909 + _measurement_vrms_vinst_va1__out * 0.0909);
    if((_measurement_vrms_rms_calc_fast__var_filt >= 0.0f) && (_measurement_vrms_rms_calc_fast__var_filt_old < 0.0f)) {
        _measurement_vrms_rms_calc_fast__var_zc = 1;
    }
    else {
        _measurement_vrms_rms_calc_fast__var_zc = 0;
    }
    //square sum and period update on signal zero cross
    if ((_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _measurement_vrms_rms_calc_fast__var_eff_s = _measurement_vrms_rms_calc_fast__v_sq_sum_state;
        _measurement_vrms_rms_calc_fast__period = (float)_measurement_vrms_rms_calc_fast__pc_cnt_1_state;
        _measurement_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: Measurement.Vrms.sys1
    // Generated from the component: ESS.Inverter.Vrms.rt1.Input
    _ess_inverter_vrms_rt1_output__out = _ess_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: ESS.Inverter.Vrms.rt2.Input
    _ess_inverter_vrms_rt2_output__out = _ess_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: ESS.Inverter.Vrms.t1
    // Generated from the component: ESS.Measurement.Vrms.rt1.Input
    _ess_measurement_vrms_rt1_output__out = _ess_measurement_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: ESS.Measurement.Vrms.rt2.Input
    _ess_measurement_vrms_rt2_output__out = _ess_measurement_vrms_rms_calc_fast__period;
    // Generated from the component: ESS.Measurement.Vrms.t1
    // Generated from the component: EV Charging Station.Inverter.Vrms.rt1.Input
    _ev_charging_station_inverter_vrms_rt1_output__out = _ev_charging_station_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: EV Charging Station.Inverter.Vrms.rt2.Input
    _ev_charging_station_inverter_vrms_rt2_output__out = _ev_charging_station_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: EV Charging Station.Inverter.Vrms.t1
    // Generated from the component: EV Charging Station.Measurement.Vrms.rt1.Input
    _ev_charging_station_measurement_vrms_rt1_output__out = _ev_charging_station_measurement_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: EV Charging Station.Measurement.Vrms.rt2.Input
    _ev_charging_station_measurement_vrms_rt2_output__out = _ev_charging_station_measurement_vrms_rms_calc_fast__period;
    // Generated from the component: EV Charging Station.Measurement.Vrms.t1
    // Generated from the component: Measurement.Vrms.rt1.Input
    _measurement_vrms_rt1_output__out = _measurement_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: Measurement.Vrms.rt2.Input
    _measurement_vrms_rt2_output__out = _measurement_vrms_rms_calc_fast__period;
    // Generated from the component: Measurement.Vrms.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_fast
    if ((_ess_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: ESS.Measurement.Vrms.rms_calc_fast
    if ((_ess_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ess_measurement_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: EV Charging Station.Inverter.Vrms.rms_calc_fast
    if ((_ev_charging_station_inverter_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ev_charging_station_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: EV Charging Station.Measurement.Vrms.rms_calc_fast
    if ((_ev_charging_station_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ev_charging_station_measurement_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: Measurement.Vrms.rms_calc_fast
    if ((_measurement_vrms_rms_calc_fast__var_zc == 1) || (10000 == _measurement_vrms_rms_calc_fast__pc_cnt_1_state)) {
        _measurement_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _measurement_vrms_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Vrms.rt1.Output
    // Generated from the component: ESS.Inverter.Vrms.rt2.Output
    // Generated from the component: ESS.Measurement.Vrms.rt1.Output
    // Generated from the component: ESS.Measurement.Vrms.rt2.Output
    // Generated from the component: EV Charging Station.Inverter.Vrms.rt1.Output
    // Generated from the component: EV Charging Station.Inverter.Vrms.rt2.Output
    // Generated from the component: EV Charging Station.Measurement.Vrms.rt1.Output
    // Generated from the component: EV Charging Station.Measurement.Vrms.rt2.Output
    // Generated from the component: Measurement.Vrms.rt1.Output
    // Generated from the component: Measurement.Vrms.rt2.Output
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_slow
    if(_ess_inverter_vrms_rt2_output__out > 0.0f) {
        _ess_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_ess_inverter_vrms_rt1_output__out / _ess_inverter_vrms_rt2_output__out);
    }
    else {
        _ess_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: ESS.Measurement.Vrms.rms_calc_slow
    if(_ess_measurement_vrms_rt2_output__out > 0.0f) {
        _ess_measurement_vrms_rms_calc_slow__var_rms = sqrtf(_ess_measurement_vrms_rt1_output__out / _ess_measurement_vrms_rt2_output__out);
    }
    else {
        _ess_measurement_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: EV Charging Station.Inverter.Vrms.rms_calc_slow
    if(_ev_charging_station_inverter_vrms_rt2_output__out > 0.0f) {
        _ev_charging_station_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_ev_charging_station_inverter_vrms_rt1_output__out / _ev_charging_station_inverter_vrms_rt2_output__out);
    }
    else {
        _ev_charging_station_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: EV Charging Station.Measurement.Vrms.rms_calc_slow
    if(_ev_charging_station_measurement_vrms_rt2_output__out > 0.0f) {
        _ev_charging_station_measurement_vrms_rms_calc_slow__var_rms = sqrtf(_ev_charging_station_measurement_vrms_rt1_output__out / _ev_charging_station_measurement_vrms_rt2_output__out);
    }
    else {
        _ev_charging_station_measurement_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: Measurement.Vrms.rms_calc_slow
    if(_measurement_vrms_rt2_output__out > 0.0f) {
        _measurement_vrms_rms_calc_slow__var_rms = sqrtf(_measurement_vrms_rt1_output__out / _measurement_vrms_rt2_output__out);
    }
    else {
        _measurement_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: ESS.Inverter.Vrms.rms
    HIL_OutAO(0x4000, _ess_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: ESS.Inverter.Vrms.sys2
    // Generated from the component: ESS.Measurement.Vrms.rms
    HIL_OutAO(0x4001, _ess_measurement_vrms_rms_calc_slow__var_rms);
    // Generated from the component: ESS.Measurement.Vrms.sys2
    // Generated from the component: EV Charging Station.Inverter.Vrms.rms
    HIL_OutAO(0x4002, _ev_charging_station_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: EV Charging Station.Inverter.Vrms.sys2
    // Generated from the component: EV Charging Station.Measurement.Vrms.rms
    HIL_OutAO(0x4003, _ev_charging_station_measurement_vrms_rms_calc_slow__var_rms);
    // Generated from the component: EV Charging Station.Measurement.Vrms.sys2
    // Generated from the component: Measurement.Vrms.rms
    HIL_OutAO(0x4004, _measurement_vrms_rms_calc_slow__var_rms);
    // Generated from the component: Measurement.Vrms.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------