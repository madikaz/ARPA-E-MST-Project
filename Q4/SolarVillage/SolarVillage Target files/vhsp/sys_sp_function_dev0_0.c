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
#include <stdint.h>

// x86 libraries:
#include "../include/sp_functions_dev0.h"

// H files from Advanced C Function components

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
float _solarhouse1_inverter_vrms_vinst_va1__out;
float _solarhouse2_inverter_vrms_vinst_va1__out;
float _solarhouse3_inverter_vrms_vinst_va1__out;
float _solarhouse4_inverter_vrms_vinst_va1__out;
float _ess_inverter_vrms_rms_calc_fast__var_eff_s;
float _ess_inverter_vrms_rms_calc_fast__period;
float _ess_inverter_vrms_rms_calc_slow__var_rms;
float _solarhouse1_inverter_vrms_rms_calc_fast__var_eff_s;
float _solarhouse1_inverter_vrms_rms_calc_fast__period;
float _solarhouse1_inverter_vrms_rms_calc_slow__var_rms;
float _solarhouse2_inverter_vrms_rms_calc_fast__var_eff_s;
float _solarhouse2_inverter_vrms_rms_calc_fast__period;
float _solarhouse2_inverter_vrms_rms_calc_slow__var_rms;
float _solarhouse3_inverter_vrms_rms_calc_fast__var_eff_s;
float _solarhouse3_inverter_vrms_rms_calc_fast__period;
float _solarhouse3_inverter_vrms_rms_calc_slow__var_rms;
float _solarhouse4_inverter_vrms_rms_calc_fast__var_eff_s;
float _solarhouse4_inverter_vrms_rms_calc_fast__period;
float _solarhouse4_inverter_vrms_rms_calc_slow__var_rms;
//@cmp.var.end

//@cmp.svar.start
// state variables
float _ess_inverter_vrms_rt1_output__out =  0.0;
float _ess_inverter_vrms_rt2_output__out =  0.0;
float _solarhouse1_inverter_vrms_rt1_output__out =  0.0;
float _solarhouse1_inverter_vrms_rt2_output__out =  0.0;
float _solarhouse2_inverter_vrms_rt1_output__out =  0.0;
float _solarhouse2_inverter_vrms_rt2_output__out =  0.0;
float _solarhouse3_inverter_vrms_rt1_output__out =  0.0;
float _solarhouse3_inverter_vrms_rt2_output__out =  0.0;
float _solarhouse4_inverter_vrms_rt1_output__out =  0.0;
float _solarhouse4_inverter_vrms_rt2_output__out =  0.0;
float _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _ess_inverter_vrms_rms_calc_fast__var_filt;
float _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _solarhouse1_inverter_vrms_rms_calc_fast__var_filt;
float _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _solarhouse2_inverter_vrms_rms_calc_fast__var_filt;
float _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _solarhouse3_inverter_vrms_rms_calc_fast__var_filt;
float _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state;
X_UnInt32 _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state;
float _solarhouse4_inverter_vrms_rms_calc_fast__var_filt;
//@cmp.svar.end





// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_inverter_vrms_rt1_output__out =  0.0;
    _ess_inverter_vrms_rt2_output__out =  0.0;
    _solarhouse1_inverter_vrms_rt1_output__out =  0.0;
    _solarhouse1_inverter_vrms_rt2_output__out =  0.0;
    _solarhouse2_inverter_vrms_rt1_output__out =  0.0;
    _solarhouse2_inverter_vrms_rt2_output__out =  0.0;
    _solarhouse3_inverter_vrms_rt1_output__out =  0.0;
    _solarhouse3_inverter_vrms_rt2_output__out =  0.0;
    _solarhouse4_inverter_vrms_rt1_output__out =  0.0;
    _solarhouse4_inverter_vrms_rt2_output__out =  0.0;
    _ess_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _ess_inverter_vrms_rms_calc_fast__period = 0.0f;
    _ess_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _solarhouse1_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _solarhouse1_inverter_vrms_rms_calc_fast__period = 0.0f;
    _solarhouse1_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _solarhouse2_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _solarhouse2_inverter_vrms_rms_calc_fast__period = 0.0f;
    _solarhouse2_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _solarhouse3_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _solarhouse3_inverter_vrms_rms_calc_fast__period = 0.0f;
    _solarhouse3_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    _solarhouse4_inverter_vrms_rms_calc_fast__var_eff_s = 0;
    _solarhouse4_inverter_vrms_rms_calc_fast__period = 0.0f;
    _solarhouse4_inverter_vrms_rms_calc_fast__var_filt = 0.0f;
    _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    HIL_OutAO(0x4000, 0.0f);
    HIL_OutAO(0x4001, 0.0f);
    HIL_OutAO(0x4002, 0.0f);
    HIL_OutAO(0x4003, 0.0f);
    HIL_OutAO(0x4004, 0.0f);
    //@cmp.init.block.end
}

void ReInit_sp_scope_sys_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void load_fmi_libraries_sys_sp_cpu0_dev0(void) {
#if defined(_WIN64)
#else
#endif
}
// generated using template:generic_macros.template-----------------------------------------
/*********************** Macros (Inline Functions) Definitions ***************************/

// ----------------------------------------------------------------------------------------

#ifndef MAX
#define MAX(value, limit) (((value) > (limit)) ? (value) : (limit))
#endif
#ifndef MIN
#define MIN(value, limit) (((value) < (limit)) ? (value) : (limit))
#endif

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

void TimerCounterHandler_0_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Vrms.Vinst.Va1
    _ess_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x204));
    // Generated from the component: SolarHouse1.Inverter.Vrms.Vinst.Va1
    _solarhouse1_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x406));
    // Generated from the component: SolarHouse2.Inverter.Vrms.Vinst.Va1
    _solarhouse2_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x606));
    // Generated from the component: SolarHouse3.Inverter.Vrms.Vinst.Va1
    _solarhouse3_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0x806));
    // Generated from the component: SolarHouse4.Inverter.Vrms.Vinst.Va1
    _solarhouse4_inverter_vrms_vinst_va1__out = (HIL_InFloat(0xc80000 + 0xa06));
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_fast
    _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state + _ess_inverter_vrms_vinst_va1__out * _ess_inverter_vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _ess_inverter_vrms_rms_calc_fast__var_eff_s = _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _ess_inverter_vrms_rms_calc_fast__period = (float)333;
        _ess_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: ESS.Inverter.Vrms.sys1
    // Generated from the component: SolarHouse1.Inverter.Vrms.rms_calc_fast
    _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state = _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state + _solarhouse1_inverter_vrms_vinst_va1__out * _solarhouse1_inverter_vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse1_inverter_vrms_rms_calc_fast__var_eff_s = _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _solarhouse1_inverter_vrms_rms_calc_fast__period = (float)333;
        _solarhouse1_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: SolarHouse1.Inverter.Vrms.sys1
    // Generated from the component: SolarHouse2.Inverter.Vrms.rms_calc_fast
    _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state = _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state + _solarhouse2_inverter_vrms_vinst_va1__out * _solarhouse2_inverter_vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse2_inverter_vrms_rms_calc_fast__var_eff_s = _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _solarhouse2_inverter_vrms_rms_calc_fast__period = (float)333;
        _solarhouse2_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: SolarHouse2.Inverter.Vrms.sys1
    // Generated from the component: SolarHouse3.Inverter.Vrms.rms_calc_fast
    _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state = _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state + _solarhouse3_inverter_vrms_vinst_va1__out * _solarhouse3_inverter_vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse3_inverter_vrms_rms_calc_fast__var_eff_s = _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _solarhouse3_inverter_vrms_rms_calc_fast__period = (float)333;
        _solarhouse3_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: SolarHouse3.Inverter.Vrms.sys1
    // Generated from the component: SolarHouse4.Inverter.Vrms.rms_calc_fast
    _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state = _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state + _solarhouse4_inverter_vrms_vinst_va1__out * _solarhouse4_inverter_vrms_vinst_va1__out;
    //square sum and period update on period end
    if (333 == _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse4_inverter_vrms_rms_calc_fast__var_eff_s = _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state;
        _solarhouse4_inverter_vrms_rms_calc_fast__period = (float)333;
        _solarhouse4_inverter_vrms_rms_calc_fast__v_sq_sum_state = 0.0f;
    }
    // Generated from the component: SolarHouse4.Inverter.Vrms.sys1
    // Generated from the component: ESS.Inverter.Vrms.rt1.Input
    _ess_inverter_vrms_rt1_output__out = _ess_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: ESS.Inverter.Vrms.rt2.Input
    _ess_inverter_vrms_rt2_output__out = _ess_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: ESS.Inverter.Vrms.t1
    // Generated from the component: SolarHouse1.Inverter.Vrms.rt1.Input
    _solarhouse1_inverter_vrms_rt1_output__out = _solarhouse1_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: SolarHouse1.Inverter.Vrms.rt2.Input
    _solarhouse1_inverter_vrms_rt2_output__out = _solarhouse1_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: SolarHouse1.Inverter.Vrms.t1
    // Generated from the component: SolarHouse2.Inverter.Vrms.rt1.Input
    _solarhouse2_inverter_vrms_rt1_output__out = _solarhouse2_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: SolarHouse2.Inverter.Vrms.rt2.Input
    _solarhouse2_inverter_vrms_rt2_output__out = _solarhouse2_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: SolarHouse2.Inverter.Vrms.t1
    // Generated from the component: SolarHouse3.Inverter.Vrms.rt1.Input
    _solarhouse3_inverter_vrms_rt1_output__out = _solarhouse3_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: SolarHouse3.Inverter.Vrms.rt2.Input
    _solarhouse3_inverter_vrms_rt2_output__out = _solarhouse3_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: SolarHouse3.Inverter.Vrms.t1
    // Generated from the component: SolarHouse4.Inverter.Vrms.rt1.Input
    _solarhouse4_inverter_vrms_rt1_output__out = _solarhouse4_inverter_vrms_rms_calc_fast__var_eff_s;
    // Generated from the component: SolarHouse4.Inverter.Vrms.rt2.Input
    _solarhouse4_inverter_vrms_rt2_output__out = _solarhouse4_inverter_vrms_rms_calc_fast__period;
    // Generated from the component: SolarHouse4.Inverter.Vrms.t1
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_fast
    if (333 == _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _ess_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: SolarHouse1.Inverter.Vrms.rms_calc_fast
    if (333 == _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _solarhouse1_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: SolarHouse2.Inverter.Vrms.rms_calc_fast
    if (333 == _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _solarhouse2_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: SolarHouse3.Inverter.Vrms.rms_calc_fast
    if (333 == _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _solarhouse3_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    // Generated from the component: SolarHouse4.Inverter.Vrms.rms_calc_fast
    if (333 == _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state) {
        _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state = 0;
    }
    _solarhouse4_inverter_vrms_rms_calc_fast__pc_cnt_1_state ++;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_sys_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Vrms.rms_calc_slow
    if(_ess_inverter_vrms_rt2_output__out > 0.0f) {
        _ess_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_ess_inverter_vrms_rt1_output__out / _ess_inverter_vrms_rt2_output__out);
    }
    else {
        _ess_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: SolarHouse1.Inverter.Vrms.rms_calc_slow
    if(_solarhouse1_inverter_vrms_rt2_output__out > 0.0f) {
        _solarhouse1_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_solarhouse1_inverter_vrms_rt1_output__out / _solarhouse1_inverter_vrms_rt2_output__out);
    }
    else {
        _solarhouse1_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: SolarHouse2.Inverter.Vrms.rms_calc_slow
    if(_solarhouse2_inverter_vrms_rt2_output__out > 0.0f) {
        _solarhouse2_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_solarhouse2_inverter_vrms_rt1_output__out / _solarhouse2_inverter_vrms_rt2_output__out);
    }
    else {
        _solarhouse2_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: SolarHouse3.Inverter.Vrms.rms_calc_slow
    if(_solarhouse3_inverter_vrms_rt2_output__out > 0.0f) {
        _solarhouse3_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_solarhouse3_inverter_vrms_rt1_output__out / _solarhouse3_inverter_vrms_rt2_output__out);
    }
    else {
        _solarhouse3_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: SolarHouse4.Inverter.Vrms.rms_calc_slow
    if(_solarhouse4_inverter_vrms_rt2_output__out > 0.0f) {
        _solarhouse4_inverter_vrms_rms_calc_slow__var_rms = sqrtf(_solarhouse4_inverter_vrms_rt1_output__out / _solarhouse4_inverter_vrms_rt2_output__out);
    }
    else {
        _solarhouse4_inverter_vrms_rms_calc_slow__var_rms = 0.0f;
    }
    // Generated from the component: ESS.Inverter.Vrms.rms
    HIL_OutAO(0x4000, _ess_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: ESS.Inverter.Vrms.sys2
    // Generated from the component: SolarHouse1.Inverter.Vrms.rms
    HIL_OutAO(0x4001, _solarhouse1_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: SolarHouse1.Inverter.Vrms.sys2
    // Generated from the component: SolarHouse2.Inverter.Vrms.rms
    HIL_OutAO(0x4002, _solarhouse2_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: SolarHouse2.Inverter.Vrms.sys2
    // Generated from the component: SolarHouse3.Inverter.Vrms.rms
    HIL_OutAO(0x4003, _solarhouse3_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: SolarHouse3.Inverter.Vrms.sys2
    // Generated from the component: SolarHouse4.Inverter.Vrms.rms
    HIL_OutAO(0x4004, _solarhouse4_inverter_vrms_rms_calc_slow__var_rms);
    // Generated from the component: SolarHouse4.Inverter.Vrms.sys2
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------