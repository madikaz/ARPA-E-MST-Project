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































































































#define _vs_tdf_sg_ctrl_sine1__no_of_points 1000
#define _vs_tdf_sg_ctrl_sine1__max_int40 (1099511627775)
#define _vs_tdf_sg_ctrl_sine1__max_int32 (4294967295)


































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _constant1__out = 120.0;
double _constant2__out = 60.0;
double _constant3__out = 0.0;
double _measurement_ia_ia1__out;
double _measurement_single_phase_power_meter1_radian__out = 0.0174533;
double _measurement_va_va1__out;
X_Int32 _microgrid_inverter_controller_c_function3__k;
double _microgrid_inverter_controller_c_function3__t;


double _microgrid_inverter_controller_c_function3__Pref;
double _microgrid_inverter_controller_c_function3__Qref;
double _microgrid_inverter_controller_constant2__out = 1.0;
double _microgrid_inverter_controller_constant3__out = 3.141592653589793;
double _microgrid_inverter_controller_constant4__out = 2e-05;
double _microgrid_inverter_controller_gain23__out;
double _microgrid_inverter_controller_gain24__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out = 0.1;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out = 1.0;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_constant2__out = 2;
double _microgrid_inverter_controller_single_phase_pll1_i__out;
double _microgrid_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
double _microgrid_inverter_controller_single_phase_pll1_integrator1__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator10__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator2__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator3__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator4__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator5__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator6__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator7__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator8__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator9__out;
double _microgrid_inverter_controller_single_phase_pll1_trigonometric_function1__out;
double _microgrid_inverter_controller_single_phase_pll1_const__out = 376.99111843077515;
X_Int32 _microgrid_inverter_controller_charge__out;
double _microgrid_inverter_e_va1__out;
double _microgrid_inverter_i_ia1__out;
double _microgrid_inverter_io_ia1__out;
double _microgrid_inverter_power_meas_gain4__out;
double _microgrid_inverter_power_meas_gain5__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _microgrid_inverter_vdc_cpu_trans_output__out;
double _microgrid_measurement_ia_ia1__out;
double _microgrid_measurement_single_phase_power_meter1_radian__out = 0.0174533;
double _microgrid_measurement_va_va1__out;
double _microgrid_pv_solar_irradiance_clock1__out;
double _microgrid_pv_solar_irradiance_constant14__out = 0.2;
double _microgrid_pv_solar_irradiance_constant15__out = 1.0;
double _microgrid_pv_solar_irradiance_constant17__out = 1.0;
double _microgrid_pv_solar_irradiance_ang_t__out;
double _vs_limit1__out;
double _vs_limit2__out;
double _measurement_single_phase_power_meter1_ia_rms__out;
double _measurement_single_phase_power_meter1_va_rms__out;

double _measurement_single_phase_power_meter1_phi__phase_diff;
double _measurement_single_phase_power_meter1_phi__correction_ref;
double _measurement_single_phase_power_meter1_phi__correction_in;
X_UnInt32 _measurement_single_phase_power_meter1_phi__zc_flag_ref;
X_UnInt32 _measurement_single_phase_power_meter1_phi__zc_flag_in;
X_UnInt32 _measurement_single_phase_power_meter1_phi__no_zc_flag_in;
double _measurement_single_phase_power_meter1_phi__filtered_ref;
double _measurement_single_phase_power_meter1_phi__filtered_in;

double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum5__out;
X_Int32 _microgrid_inverter_controller_c_function2__charge;
double _microgrid_inverter_controller_c_function2__ref;


double _microgrid_inverter_controller_c_function2__out;
X_Int32 _microgrid_inverter_controller_c_function1__charge;
double _microgrid_inverter_controller_c_function1__ref;


double _microgrid_inverter_controller_c_function1__out;
double _microgrid_inverter_controller_gain25__out;
double _microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq;
double _microgrid_inverter_controller_single_phase_pll1_c_function1__va;
double _microgrid_inverter_controller_single_phase_pll1_c_function1__vb;


double _microgrid_inverter_controller_single_phase_pll1_c_function1__vd;
double _microgrid_inverter_controller_single_phase_pll1_c_function1__vq;
double _microgrid_inverter_controller_single_phase_pll1_sum4__out;
double _microgrid_inverter_controller_single_phase_pll1_product2__out;
double _microgrid_inverter_controller_single_phase_pll1_w_to_f__out;
double _microgrid_inverter_controller_single_phase_pll1_sum9__out;
double _microgrid_inverter_controller_single_phase_pll1_sum11__out;
double _microgrid_inverter_controller_single_phase_pll1_sum13__out;
double _microgrid_inverter_controller_single_phase_pll1_sum14__out;
double _microgrid_inverter_controller_hilbert_transform__out;
double _microgrid_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9924884953368251, 1.0};
double _microgrid_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9924884953368251};
double _microgrid_inverter_controller_hilbert_transform__a_sum;
double _microgrid_inverter_controller_hilbert_transform__b_sum;
double _microgrid_inverter_controller_hilbert_transform__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_hilbert_transform__i;
double _microgrid_inverter_controller_single_phase_pll1_sum1__out;
double _microgrid_inverter_controller_hilbert_transform1__out;
double _microgrid_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9924884953368251, 1.0};
double _microgrid_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9924884953368251};
double _microgrid_inverter_controller_hilbert_transform1__a_sum;
double _microgrid_inverter_controller_hilbert_transform1__b_sum;
double _microgrid_inverter_controller_hilbert_transform1__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_hilbert_transform1__i;
double _microgrid_inverter_power_meas_gain6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i;
double _microgrid_measurement_single_phase_power_meter1_ia_rms__out;
double _microgrid_measurement_single_phase_power_meter1_va_rms__out;

double _microgrid_measurement_single_phase_power_meter1_phi__phase_diff;
double _microgrid_measurement_single_phase_power_meter1_phi__correction_ref;
double _microgrid_measurement_single_phase_power_meter1_phi__correction_in;
X_UnInt32 _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_ref;
X_UnInt32 _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_in;
X_UnInt32 _microgrid_measurement_single_phase_power_meter1_phi__no_zc_flag_in;
double _microgrid_measurement_single_phase_power_meter1_phi__filtered_ref;
double _microgrid_measurement_single_phase_power_meter1_phi__filtered_in;

double _microgrid_pv_lpf_dc__out;
double _microgrid_pv_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_pv_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_pv_lpf_dc__a_sum;
double _microgrid_pv_lpf_dc__b_sum;
double _microgrid_pv_lpf_dc__delay_line_in;
X_UnInt32 _microgrid_pv_lpf_dc__i;
double _microgrid_pv_solar_irradiance_c_function4__k;
double _microgrid_pv_solar_irradiance_c_function4__clk;


double _microgrid_pv_solar_irradiance_c_function4__ETR;
double _microgrid_pv_solar_irradiance_c_function4__GHI;
double _microgrid_pv_solar_irradiance_c_function4__ang_z;
double _microgrid_pv_solar_irradiance_trigonometric_function2__out;
double _microgrid_pv_solar_irradiance_trigonometric_function7__out;
double _microgrid_pv_solar_irradiance_gain4__out;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__channels[1] = {0};
double _vs_tdf_sg_ctrl_sine1__gain;
double _vs_tdf_sg_ctrl_sine1__period;
double _vs_tdf_sg_ctrl_sine1__shift;
double _vs_tdf_sg_ctrl_sine1__phase_pu;
double _vs_tdf_sg_ctrl_sine1__offset;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__offset_uint;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi;
double _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__sg_update_value;
double _vs_tdf_sg_ctrl_sine1__xn;
double _vs_tdf_sg_ctrl_sine1__xn_1;
double _vs_tdf_sg_ctrl_sine1__yn;
double _vs_tdf_sg_ctrl_sine1__yn_1;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__i;
X_UnInt32 _vs_tdf_sg_ctrl_sine1__j;
double _vs_tdf_sg_ctrl_sine1__k;
double _measurement_single_phase_power_meter1_calc_s__out;
double _measurement_single_phase_power_meter1_degree_to_radians__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain5__out;
double _microgrid_inverter_controller_gain21__out;
double _microgrid_inverter_controller_gain22__out;
double _microgrid_inverter_controller_gain33__out;
double _microgrid_inverter_controller_c_function4__Ts;
double _microgrid_inverter_controller_c_function4__in;
double _microgrid_inverter_controller_c_function4__pi;


double _microgrid_inverter_controller_c_function4__out;
double _microgrid_inverter_controller_single_phase_pll1_gain3__out;
double _microgrid_inverter_controller_single_phase_pll1_math_f1__out;
double _microgrid_inverter_controller_single_phase_pll1_math_f2__out;
double _microgrid_inverter_controller_single_phase_pll1_gain5__out;
double _microgrid_inverter_controller_single_phase_pll1_sum12__out;
double _microgrid_inverter_controller_single_phase_pll1_gain7__out;
double _microgrid_inverter_controller_single_phase_pll1_gain8__out;
double _microgrid_inverter_controller_single_phase_pll1_gain10__out;
double _microgrid_inverter_controller_single_phase_pll1_gain11__out;
double _microgrid_inverter_controller_single_phase_pll1_gain2__out;
double _microgrid_measurement_single_phase_power_meter1_calc_s__out;
double _microgrid_measurement_single_phase_power_meter1_degree_to_radians__out;
double _microgrid_pv_solar_irradiance_c_function2__k;
double _microgrid_pv_solar_irradiance_c_function2__ETR;
double _microgrid_pv_solar_irradiance_c_function2__GHI;


double _microgrid_pv_solar_irradiance_c_function2__Gdh;
double _microgrid_pv_solar_irradiance_c_function2__f;
double _microgrid_pv_solar_irradiance_gain5__out;
double _microgrid_pv_solar_irradiance_gain1__out;
double _microgrid_pv_solar_irradiance_gain2__out;
double _microgrid_pv_solar_irradiance_sum7__out;
double _microgrid_pv_solar_irradiance_trigonometric_function3__out;
double _measurement_single_phase_power_meter1_cos__out;
double _measurement_single_phase_power_meter1_sin__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out;
double _microgrid_inverter_controller_trigonometric_function1__out;
double _microgrid_inverter_controller_trigonometric_function2__out;
double _microgrid_inverter_controller_single_phase_pll1_sum7__out;
double _microgrid_inverter_controller_single_phase_pll1_sum6__out;
double _microgrid_inverter_controller_single_phase_pll1_gain9__out;
double _microgrid_inverter_controller_single_phase_pll1_sum2__out;
double _microgrid_measurement_single_phase_power_meter1_cos__out;
double _microgrid_measurement_single_phase_power_meter1_sin__out;
double _microgrid_pv_solar_irradiance_product4__out;
double _microgrid_pv_solar_irradiance_sum3__out;
double _microgrid_pv_solar_irradiance_trigonometric_function4__out;
double _microgrid_pv_solar_irradiance_trigonometric_function5__out;
double _microgrid_pv_solar_irradiance_trigonometric_function1__out;
double _microgrid_pv_solar_irradiance_trigonometric_function6__out;
double _microgrid_pv_solar_irradiance_sum4__out;
double _measurement_single_phase_power_meter1_pmult__out;
double _measurement_single_phase_power_meter1_conjugate__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__pi_reg_out_int;
double _microgrid_inverter_controller_c_function5__Valpha;
double _microgrid_inverter_controller_c_function5__Vbeta;
double _microgrid_inverter_controller_c_function5__k1;
double _microgrid_inverter_controller_c_function5__k2;


double _microgrid_inverter_controller_c_function5__Vd;
double _microgrid_inverter_controller_c_function5__Vq;
double _microgrid_inverter_controller_c_function6__k1;
double _microgrid_inverter_controller_c_function6__k2;
double _microgrid_inverter_controller_c_function6__xalpha;
double _microgrid_inverter_controller_c_function6__xbeta;


double _microgrid_inverter_controller_c_function6__yd;
double _microgrid_inverter_controller_c_function6__yq;
double _microgrid_inverter_controller_single_phase_pll1_gain4__out;
double _microgrid_inverter_controller_single_phase_pll1_math1__out;
double _microgrid_inverter_controller_single_phase_pll1_product1__out;
double _microgrid_measurement_single_phase_power_meter1_pmult__out;
double _microgrid_measurement_single_phase_power_meter1_conjugate__out;
double _microgrid_pv_solar_irradiance_sum5__out;
double _microgrid_pv_solar_irradiance_product2__out;
double _microgrid_pv_solar_irradiance_bus_join1__out[4];
double _microgrid_pv_solar_irradiance_product3__out;
double _measurement_single_phase_power_meter1_qmult__out;
double _microgrid_inverter_controller_gain28__out;
double _microgrid_inverter_controller_gain29__out;
double _microgrid_inverter_controller_gain30__out;
double _microgrid_inverter_controller_gain31__out;
double _microgrid_inverter_controller_single_phase_pll1_limit1__out;
double _microgrid_measurement_single_phase_power_meter1_qmult__out;
double _microgrid_pv_solar_irradiance_c_function3__Gdh;
double _microgrid_pv_solar_irradiance_c_function3__fk;
double _microgrid_pv_solar_irradiance_c_function3__x[4];


double _microgrid_pv_solar_irradiance_c_function3__Gd;
double _microgrid_pv_solar_irradiance_gain3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_product1__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_product4__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_product2__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_product3__out;
double _microgrid_inverter_controller_single_phase_pll1_product8__out;
double _microgrid_pv_solar_irradiance_sum6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_sum1__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_sum2__out;
double _microgrid_inverter_controller_single_phase_pll1_abs1__out;
double _microgrid_pv_c_function2__Pmax;
double _microgrid_pv_c_function2__Pref;
double _microgrid_pv_c_function2__SI;


double _microgrid_pv_c_function2__Vmax;
double _microgrid_pv_c_function2__Y;
double _microgrid_pv_c_function2__out1;
double _microgrid_pv_c_function2__out2;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i;
double _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
double _microgrid_inverter_controller_single_phase_pll1_kd_lut__value;
double _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kd_lut__rightIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr;
double _microgrid_inverter_controller_single_phase_pll1_kd_lut__fraction;

double _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
double _microgrid_inverter_controller_single_phase_pll1_ki_lut__value;
double _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_ki_lut__rightIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr;
double _microgrid_inverter_controller_single_phase_pll1_ki_lut__fraction;

double _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
double _microgrid_inverter_controller_single_phase_pll1_kp_lut__value;
double _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kp_lut__rightIndex;
X_Int32 _microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr;
double _microgrid_inverter_controller_single_phase_pll1_kp_lut__fraction;

double _microgrid_pv_c_function1__Vdc;
double _microgrid_pv_c_function1__Vmax;
double _microgrid_pv_c_function1__Y;


double _microgrid_pv_c_function1__Ipv;
double _microgrid_pv_c_function1__Ppv;
double _microgrid_pv_mathematical_function1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out;
double _microgrid_inverter_controller_single_phase_pll1_product6__out;
double _microgrid_inverter_controller_single_phase_pll1_product5__out;
double _microgrid_inverter_controller_single_phase_pll1_product7__out;
double _microgrid_pv_c_function3__Y;
double _microgrid_pv_c_function3__in;
double _microgrid_pv_c_function3__in2;


double _microgrid_pv_c_function3__Vref;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out;
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.890158908367555};
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
X_UnInt32 _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _microgrid_inverter_controller_single_phase_pll1_sum8__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _microgrid_inverter_controller_single_phase_pll1_limit2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _microgrid_inverter_controller_single_phase_pll1_sum5__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _microgrid_inverter_controller_single_phase_pll1_sum10__out;
double _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
double _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
double _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__in;


double _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _microgrid_inverter_controller_single_phase_pll1_gain6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _microgrid_inverter_controller_bus_join1__out[2];
double _microgrid_inverter_controller_bus_split1__out;
double _microgrid_inverter_controller_bus_split1__out1;
double _microgrid_inverter_controller_gain20__out;
X_UnInt32 _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {0, 1};
double _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _microgrid_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _microgrid_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_rate_transition1_output__out =  500.0;

double _microgrid_inverter_controller_rate_transition10_output__out =  0.0;

X_Int32 _microgrid_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;

double _microgrid_inverter_controller_rate_transition9_output__out =  0.0;

double _microgrid_inverter_controller_single_phase_pll1_i__integrator_state;
X_UnInt32 _microgrid_inverter_controller_single_phase_pll1_i__av_active;
double _microgrid_inverter_controller_single_phase_pll1_i__filter_state;
double _microgrid_inverter_controller_single_phase_pll1_integrator1__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator10__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator2__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator3__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator4__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator5__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator6__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator7__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator8__state;
double _microgrid_inverter_controller_single_phase_pll1_integrator9__state;
double _microgrid_pv_rate_transition1_output__out =  600.0;

double _microgrid_pv_rate_transition2_output__out =  0.0;

double _microgrid_pv_solar_irradiance_clock1__state;
double _microgrid_pv_solar_irradiance_rate_transition3_output__out =  0.0;

double _measurement_single_phase_power_meter1_ia_rms__square_sum;
double _measurement_single_phase_power_meter1_ia_rms__sample_cnt;
double _measurement_single_phase_power_meter1_va_rms__square_sum;
double _measurement_single_phase_power_meter1_va_rms__sample_cnt;

double _measurement_single_phase_power_meter1_phi__phase_state;
double _measurement_single_phase_power_meter1_phi__previous_correction_ref;
double _measurement_single_phase_power_meter1_phi__previous_correction_in;
double _measurement_single_phase_power_meter1_phi__sample_cnt_ref;
double _measurement_single_phase_power_meter1_phi__sample_cnt_in;
double _measurement_single_phase_power_meter1_phi__previous_filtered_ref;
double _measurement_single_phase_power_meter1_phi__previous_filtered_in;

double _microgrid_inverter_controller_hilbert_transform__states[1];
double _microgrid_inverter_controller_hilbert_transform1__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__states[1];
double _microgrid_measurement_single_phase_power_meter1_ia_rms__square_sum;
double _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt;
double _microgrid_measurement_single_phase_power_meter1_va_rms__square_sum;
double _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt;

double _microgrid_measurement_single_phase_power_meter1_phi__phase_state;
double _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_ref;
double _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_in;
double _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
double _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in;
double _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref;
double _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in;

double _microgrid_pv_lpf_dc__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__integrator_state;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__av_active;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__filter_state;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[1];
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _microgrid_inverter_controller_c_function3__k = 0;
    _microgrid_inverter_controller_c_function3__t = 1;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_rate_transition1_output__out =  500.0;
    _microgrid_inverter_controller_rate_transition10_output__out =  0.0;
    _microgrid_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _microgrid_inverter_controller_rate_transition9_output__out =  0.0;
    _microgrid_inverter_controller_single_phase_pll1_i__integrator_state =  0.0;
    _microgrid_inverter_controller_single_phase_pll1_i__filter_state =  0.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator1__state = 0.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator10__state = 60.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator2__state = -169.7056274847714;
    _microgrid_inverter_controller_single_phase_pll1_integrator3__state = 169.7056274847714;
    _microgrid_inverter_controller_single_phase_pll1_integrator4__state = 169.7056274847714;
    _microgrid_inverter_controller_single_phase_pll1_integrator5__state = 376.99111843077515;
    _microgrid_inverter_controller_single_phase_pll1_integrator6__state = 376.99111843077515;
    _microgrid_inverter_controller_single_phase_pll1_integrator7__state = 60.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator8__state = 60.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator9__state = 60.0;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _microgrid_pv_rate_transition1_output__out =  600.0;
    _microgrid_pv_rate_transition2_output__out =  0.0;
    _microgrid_pv_solar_irradiance_clock1__state = 0.0f;
    _microgrid_pv_solar_irradiance_rate_transition3_output__out =  0.0;
    _measurement_single_phase_power_meter1_ia_rms__square_sum = 0x0;
    _measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0x0;
    _measurement_single_phase_power_meter1_va_rms__square_sum = 0x0;
    _measurement_single_phase_power_meter1_va_rms__sample_cnt = 0x0;
    _measurement_single_phase_power_meter1_phi__phase_state = 0x0;
    _measurement_single_phase_power_meter1_phi__previous_correction_ref = 0x0;
    _measurement_single_phase_power_meter1_phi__previous_correction_in = 0x0;
    _measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0x0;
    _measurement_single_phase_power_meter1_phi__sample_cnt_in = 0x0;
    _measurement_single_phase_power_meter1_phi__previous_filtered_ref = 0x0;
    _measurement_single_phase_power_meter1_phi__previous_filtered_in = 0x0;
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4014, 0.0f);
    for (_microgrid_inverter_controller_hilbert_transform__i = 0; _microgrid_inverter_controller_hilbert_transform__i < 1; _microgrid_inverter_controller_hilbert_transform__i++) {
        _microgrid_inverter_controller_hilbert_transform__states[_microgrid_inverter_controller_hilbert_transform__i] = 0.0;
    }
    HIL_OutAO(0x401b, 0.0f);
    for (_microgrid_inverter_controller_hilbert_transform1__i = 0; _microgrid_inverter_controller_hilbert_transform1__i < 1; _microgrid_inverter_controller_hilbert_transform1__i++) {
        _microgrid_inverter_controller_hilbert_transform1__states[_microgrid_inverter_controller_hilbert_transform1__i] = 0.0;
    }
    HIL_OutAO(0x4018, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0.0;
    }
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i] = 0.0;
    }
    _microgrid_measurement_single_phase_power_meter1_ia_rms__square_sum = 0x0;
    _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0x0;
    _microgrid_measurement_single_phase_power_meter1_va_rms__square_sum = 0x0;
    _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__phase_state = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_in = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref = 0x0;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in = 0x0;
    for (_microgrid_pv_lpf_dc__i = 0; _microgrid_pv_lpf_dc__i < 1; _microgrid_pv_lpf_dc__i++) {
        _microgrid_pv_lpf_dc__states[_microgrid_pv_lpf_dc__i] = 0.0;
    }
    // write initial SG parameters
    for (_vs_tdf_sg_ctrl_sine1__i = 0; _vs_tdf_sg_ctrl_sine1__i < 1; _vs_tdf_sg_ctrl_sine1__i++) {
        HIL_OutFloat(0x400200 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 0.0f);  // set gain to 0 (initial value)
        HIL_OutInt32(0x400180 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 0);      // set offset to 0 (initial value)
        HIL_OutInt32(0x400000 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 1);
        HIL_OutInt32(0x400280 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 0);
        HIL_OutFloat(0x400100 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 2.0f);
        HIL_OutInt32(0x400300 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], 1);   // enable wave update
        _vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i];
    }
    // calculate and write waveform data
    _vs_tdf_sg_ctrl_sine1__k = 2.0f * M_PI / _vs_tdf_sg_ctrl_sine1__no_of_points;
    // oscillator based sine implementation
    // oscillator init
    _vs_tdf_sg_ctrl_sine1__xn_1 = sin(0.0f);
    _vs_tdf_sg_ctrl_sine1__yn_1 = cos(0.0f);
    // oscillator
    for (_vs_tdf_sg_ctrl_sine1__i = 0; _vs_tdf_sg_ctrl_sine1__i < _vs_tdf_sg_ctrl_sine1__no_of_points; _vs_tdf_sg_ctrl_sine1__i++) {
        _vs_tdf_sg_ctrl_sine1__xn = _vs_tdf_sg_ctrl_sine1__xn_1 + _vs_tdf_sg_ctrl_sine1__k * _vs_tdf_sg_ctrl_sine1__yn_1;
        _vs_tdf_sg_ctrl_sine1__yn = _vs_tdf_sg_ctrl_sine1__yn_1 - _vs_tdf_sg_ctrl_sine1__k * _vs_tdf_sg_ctrl_sine1__xn;
        // write the same data to all the channels
        for (_vs_tdf_sg_ctrl_sine1__j = 0; _vs_tdf_sg_ctrl_sine1__j < 1; _vs_tdf_sg_ctrl_sine1__j++) {
            HIL_OutFloat(0x600000 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__j] * 0x800 + _vs_tdf_sg_ctrl_sine1__i, (float) _vs_tdf_sg_ctrl_sine1__xn_1);
        }
        _vs_tdf_sg_ctrl_sine1__xn_1 = _vs_tdf_sg_ctrl_sine1__xn;
        _vs_tdf_sg_ctrl_sine1__yn_1 = _vs_tdf_sg_ctrl_sine1__yn;
    }
    HIL_OutInt32(0x400080, _vs_tdf_sg_ctrl_sine1__sg_update_value);  // update both parameters and waveforms on all channels
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__integrator_state =  0.0;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4004, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0.0;
    }
    HIL_OutAO(0x4015, 0.0f);
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0.0f;
    for (_microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__states[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__states[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    HIL_OutFloat(141295616, 0.0);
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    for (_microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i] = 0.0;
    }
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x400e, 0.0f);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x400d, 0.0f);
    _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc = 0.0;
    _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI;
    HIL_OutAO(0x4012, 0.0f);
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x400c, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    _microgrid_inverter_single_phase_inverter1_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _microgrid_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu_dev0() {
    // initialise SP Scope buffer pointer
}

void init_fmu_objects_dev0(void) {
    return;
}


void terminate_fmu_objects_dev0(void) {
    return;
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

void TimerCounterHandler_0_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Measurement.Ia.Ia1
    _measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x3));
    // Generated from the component: Measurement.Single Phase Power Meter1.Radian
    // Generated from the component: Measurement.Va.Va1
    _measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x1));
    // Generated from the component: Microgrid.Inverter.Controller.Constant2
    // Generated from the component: Microgrid.Inverter.Controller.Constant3
    // Generated from the component: Microgrid.Inverter.Controller.Constant4
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out < 10.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = 10.0;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit3
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__out > 600.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit3__out = 600.0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__out < 200.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit3__out = 200.0;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit3__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit_zero
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Rate Transition1.Output
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.one
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition10.Output
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition8.Output
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition9.Output
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Constant2
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.I
    _microgrid_inverter_controller_single_phase_pll1_i__pi_reg_out_int = _microgrid_inverter_controller_single_phase_pll1_i__integrator_state;
    if (_microgrid_inverter_controller_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586) {
        _microgrid_inverter_controller_single_phase_pll1_i__out = -62.83185307179586;
        _microgrid_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else if (_microgrid_inverter_controller_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586) {
        _microgrid_inverter_controller_single_phase_pll1_i__out = 62.83185307179586;
        _microgrid_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else {
        _microgrid_inverter_controller_single_phase_pll1_i__out = _microgrid_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
        _microgrid_inverter_controller_single_phase_pll1_i__av_active = 0;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator1
    _microgrid_inverter_controller_single_phase_pll1_integrator1__out = _microgrid_inverter_controller_single_phase_pll1_integrator1__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator10
    _microgrid_inverter_controller_single_phase_pll1_integrator10__out = _microgrid_inverter_controller_single_phase_pll1_integrator10__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator2
    _microgrid_inverter_controller_single_phase_pll1_integrator2__out = _microgrid_inverter_controller_single_phase_pll1_integrator2__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator3
    _microgrid_inverter_controller_single_phase_pll1_integrator3__out = _microgrid_inverter_controller_single_phase_pll1_integrator3__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator4
    _microgrid_inverter_controller_single_phase_pll1_integrator4__out = _microgrid_inverter_controller_single_phase_pll1_integrator4__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator5
    _microgrid_inverter_controller_single_phase_pll1_integrator5__out = _microgrid_inverter_controller_single_phase_pll1_integrator5__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator6
    _microgrid_inverter_controller_single_phase_pll1_integrator6__out = _microgrid_inverter_controller_single_phase_pll1_integrator6__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator7
    _microgrid_inverter_controller_single_phase_pll1_integrator7__out = _microgrid_inverter_controller_single_phase_pll1_integrator7__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator8
    _microgrid_inverter_controller_single_phase_pll1_integrator8__out = _microgrid_inverter_controller_single_phase_pll1_integrator8__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator9
    _microgrid_inverter_controller_single_phase_pll1_integrator9__out = _microgrid_inverter_controller_single_phase_pll1_integrator9__state;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Trigonometric function1
    _microgrid_inverter_controller_single_phase_pll1_trigonometric_function1__out = sin(_microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.const
    // Generated from the component: Microgrid.Inverter.Controller.charge
    _microgrid_inverter_controller_charge__out = XIo_InInt32(0x55000104);
    // Generated from the component: Microgrid.Inverter.E.Va1
    _microgrid_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: Microgrid.Inverter.I.Ia1
    _microgrid_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x20a));
    // Generated from the component: Microgrid.Inverter.Io.Ia1
    _microgrid_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x20b));
    // Generated from the component: Microgrid.Inverter.Power_Meas.Gain4
    _microgrid_inverter_power_meas_gain4__out = 10000.0 * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Gain5
    _microgrid_inverter_power_meas_gain5__out = 10000.0 * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: Microgrid.Inverter.VDC.cpu_trans.Output
    _microgrid_inverter_vdc_cpu_trans_output__out = XIo_InFloat(0x55000100);
    // Generated from the component: Microgrid.Measurement.Ia.Ia1
    _microgrid_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Radian
    // Generated from the component: Microgrid.Measurement.Va.Va1
    _microgrid_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x208));
    // Generated from the component: Microgrid.PV.Rate Transition1.Output
    // Generated from the component: Microgrid.PV.Rate Transition2.Output
    // Generated from the component: Microgrid.PV.Solar irradiance.Clock1
    _microgrid_pv_solar_irradiance_clock1__out = _microgrid_pv_solar_irradiance_clock1__state;
    // Generated from the component: Microgrid.PV.Solar irradiance.Constant14
    // Generated from the component: Microgrid.PV.Solar irradiance.Constant15
    // Generated from the component: Microgrid.PV.Solar irradiance.Constant17
    // Generated from the component: Microgrid.PV.Solar irradiance.Rate Transition3.Output
    // Generated from the component: Microgrid.PV.Solar irradiance.ang_t
    _microgrid_pv_solar_irradiance_ang_t__out = XIo_InFloat(0x55000108);
    // Generated from the component: Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _measurement_single_phase_power_meter1_ia_rms__out = sqrt(_measurement_single_phase_power_meter1_ia_rms__square_sum / _measurement_single_phase_power_meter1_ia_rms__sample_cnt);
        _measurement_single_phase_power_meter1_ia_rms__square_sum = 0.0f;
    }
    // Generated from the component: Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _measurement_single_phase_power_meter1_va_rms__out = sqrt(_measurement_single_phase_power_meter1_va_rms__square_sum / _measurement_single_phase_power_meter1_va_rms__sample_cnt);
        _measurement_single_phase_power_meter1_va_rms__square_sum = 0.0f;
    }
    // Generated from the component: Measurement.Single Phase Power Meter1.phi
    _measurement_single_phase_power_meter1_phi__phase_diff = _measurement_single_phase_power_meter1_phi__phase_state;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum5__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_rate_transition1_output__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit3__out;
    // Generated from the component: Microgrid.Inverter.Controller.C function2
    _microgrid_inverter_controller_c_function2__charge = _microgrid_inverter_controller_rate_transition8_output__out;
    _microgrid_inverter_controller_c_function2__ref = _microgrid_inverter_controller_rate_transition10_output__out;
    if (_microgrid_inverter_controller_c_function2__charge > 0)_microgrid_inverter_controller_c_function2__out = 0;
    else _microgrid_inverter_controller_c_function2__out = _microgrid_inverter_controller_c_function2__ref;
    // Generated from the component: Microgrid.Inverter.Controller.C function1
    _microgrid_inverter_controller_c_function1__charge = _microgrid_inverter_controller_rate_transition8_output__out;
    _microgrid_inverter_controller_c_function1__ref = _microgrid_inverter_controller_rate_transition9_output__out;
    if (_microgrid_inverter_controller_c_function1__charge > 0)_microgrid_inverter_controller_c_function1__out = -1;
    else _microgrid_inverter_controller_c_function1__out = _microgrid_inverter_controller_c_function1__ref;
    // Generated from the component: Microgrid.Inverter.Controller.Gain25
    _microgrid_inverter_controller_gain25__out = 6.283185307179586 * _microgrid_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.C function1
    _microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq = _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out;
    _microgrid_inverter_controller_single_phase_pll1_c_function1__va = _microgrid_inverter_controller_single_phase_pll1_integrator1__out;
    _microgrid_inverter_controller_single_phase_pll1_c_function1__vb = _microgrid_inverter_controller_single_phase_pll1_integrator2__out;
    _microgrid_inverter_controller_single_phase_pll1_c_function1__vq = cos(_microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _microgrid_inverter_controller_single_phase_pll1_c_function1__va + sin(_microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _microgrid_inverter_controller_single_phase_pll1_c_function1__vb;
    _microgrid_inverter_controller_single_phase_pll1_c_function1__vd = -sin(_microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _microgrid_inverter_controller_single_phase_pll1_c_function1__va + cos(_microgrid_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _microgrid_inverter_controller_single_phase_pll1_c_function1__vb;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum4
    _microgrid_inverter_controller_single_phase_pll1_sum4__out = _microgrid_inverter_controller_single_phase_pll1_integrator3__out - _microgrid_inverter_controller_single_phase_pll1_integrator4__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product2
    _microgrid_inverter_controller_single_phase_pll1_product2__out = (_microgrid_inverter_controller_single_phase_pll1_integrator5__out * _microgrid_inverter_controller_single_phase_pll1_integrator1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.w_to_f
    _microgrid_inverter_controller_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _microgrid_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum9
    _microgrid_inverter_controller_single_phase_pll1_sum9__out = _microgrid_inverter_controller_single_phase_pll1_integrator6__out - _microgrid_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum11
    _microgrid_inverter_controller_single_phase_pll1_sum11__out = _microgrid_inverter_controller_single_phase_pll1_integrator7__out - _microgrid_inverter_controller_single_phase_pll1_integrator8__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum13
    _microgrid_inverter_controller_single_phase_pll1_sum13__out = _microgrid_inverter_controller_single_phase_pll1_integrator8__out - _microgrid_inverter_controller_single_phase_pll1_integrator9__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum14
    _microgrid_inverter_controller_single_phase_pll1_sum14__out = _microgrid_inverter_controller_single_phase_pll1_integrator9__out - _microgrid_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition8.Input
    _microgrid_inverter_controller_rate_transition8_output__out = _microgrid_inverter_controller_charge__out;
    // Generated from the component: Microgrid.Inverter.Controller.Hilbert Transform
    _microgrid_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _microgrid_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _microgrid_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_hilbert_transform__i = 0; _microgrid_inverter_controller_hilbert_transform__i < 1; _microgrid_inverter_controller_hilbert_transform__i++) {
        _microgrid_inverter_controller_hilbert_transform__b_sum += _microgrid_inverter_controller_hilbert_transform__b_coeff[_microgrid_inverter_controller_hilbert_transform__i + 1] * _microgrid_inverter_controller_hilbert_transform__states[_microgrid_inverter_controller_hilbert_transform__i];
    }
    _microgrid_inverter_controller_hilbert_transform__a_sum += _microgrid_inverter_controller_hilbert_transform__states[0] * _microgrid_inverter_controller_hilbert_transform__a_coeff[1];
    _microgrid_inverter_controller_hilbert_transform__delay_line_in = _microgrid_inverter_e_va1__out - _microgrid_inverter_controller_hilbert_transform__a_sum;
    _microgrid_inverter_controller_hilbert_transform__b_sum += _microgrid_inverter_controller_hilbert_transform__b_coeff[0] * _microgrid_inverter_controller_hilbert_transform__delay_line_in;
    _microgrid_inverter_controller_hilbert_transform__out = _microgrid_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum1
    _microgrid_inverter_controller_single_phase_pll1_sum1__out =  - _microgrid_inverter_controller_single_phase_pll1_integrator1__out + _microgrid_inverter_e_va1__out;
    // Generated from the component: Microgrid.Inverter.V
    HIL_OutAO(0x401b, (float)_microgrid_inverter_e_va1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Hilbert Transform1
    _microgrid_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _microgrid_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _microgrid_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_hilbert_transform1__i = 0; _microgrid_inverter_controller_hilbert_transform1__i < 1; _microgrid_inverter_controller_hilbert_transform1__i++) {
        _microgrid_inverter_controller_hilbert_transform1__b_sum += _microgrid_inverter_controller_hilbert_transform1__b_coeff[_microgrid_inverter_controller_hilbert_transform1__i + 1] * _microgrid_inverter_controller_hilbert_transform1__states[_microgrid_inverter_controller_hilbert_transform1__i];
    }
    _microgrid_inverter_controller_hilbert_transform1__a_sum += _microgrid_inverter_controller_hilbert_transform1__states[0] * _microgrid_inverter_controller_hilbert_transform1__a_coeff[1];
    _microgrid_inverter_controller_hilbert_transform1__delay_line_in = _microgrid_inverter_i_ia1__out - _microgrid_inverter_controller_hilbert_transform1__a_sum;
    _microgrid_inverter_controller_hilbert_transform1__b_sum += _microgrid_inverter_controller_hilbert_transform1__b_coeff[0] * _microgrid_inverter_controller_hilbert_transform1__delay_line_in;
    _microgrid_inverter_controller_hilbert_transform1__out = _microgrid_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: Microgrid.Inverter.P
    HIL_OutAO(0x4018, (float)_microgrid_inverter_power_meas_gain4__out);
    // Generated from the component: Microgrid.Inverter.Q
    HIL_OutAO(0x4019, (float)_microgrid_inverter_power_meas_gain5__out);
    // Generated from the component: Microgrid.Inverter.Power_Meas.Gain6
    _microgrid_inverter_power_meas_gain6__out = 10000.0 * _microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: Microgrid.Inverter.pf
    HIL_OutAO(0x401d, (float)_microgrid_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _microgrid_inverter_vdc_cpu_trans_output__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.LPF_dc
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_coeff[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i + 1] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__i];
    }
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__states[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_coeff[1];
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__delay_line_in = _microgrid_inverter_vdc_cpu_trans_output__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__a_sum;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_coeff[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__delay_line_in;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__b_sum;
    // Generated from the component: Microgrid.PV.Rate Transition1.Input
    _microgrid_pv_rate_transition1_output__out = _microgrid_inverter_vdc_cpu_trans_output__out;
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _microgrid_measurement_single_phase_power_meter1_ia_rms__out = sqrt(_microgrid_measurement_single_phase_power_meter1_ia_rms__square_sum / _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt);
        _microgrid_measurement_single_phase_power_meter1_ia_rms__square_sum = 0.0f;
    }
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _microgrid_measurement_single_phase_power_meter1_va_rms__out = sqrt(_microgrid_measurement_single_phase_power_meter1_va_rms__square_sum / _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt);
        _microgrid_measurement_single_phase_power_meter1_va_rms__square_sum = 0.0f;
    }
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.phi
    _microgrid_measurement_single_phase_power_meter1_phi__phase_diff = _microgrid_measurement_single_phase_power_meter1_phi__phase_state;
    // Generated from the component: Microgrid.PV.LPF_dc
    _microgrid_pv_lpf_dc__a_sum = 0.0f;
    _microgrid_pv_lpf_dc__b_sum = 0.0f;
    _microgrid_pv_lpf_dc__delay_line_in = 0.0f;
    for (_microgrid_pv_lpf_dc__i = 0; _microgrid_pv_lpf_dc__i < 1; _microgrid_pv_lpf_dc__i++) {
        _microgrid_pv_lpf_dc__b_sum += _microgrid_pv_lpf_dc__b_coeff[_microgrid_pv_lpf_dc__i + 1] * _microgrid_pv_lpf_dc__states[_microgrid_pv_lpf_dc__i];
    }
    _microgrid_pv_lpf_dc__a_sum += _microgrid_pv_lpf_dc__states[0] * _microgrid_pv_lpf_dc__a_coeff[1];
    _microgrid_pv_lpf_dc__delay_line_in = _microgrid_pv_rate_transition1_output__out - _microgrid_pv_lpf_dc__a_sum;
    _microgrid_pv_lpf_dc__b_sum += _microgrid_pv_lpf_dc__b_coeff[0] * _microgrid_pv_lpf_dc__delay_line_in;
    _microgrid_pv_lpf_dc__out = _microgrid_pv_lpf_dc__b_sum;
    // Generated from the component: Microgrid.PV.Solar irradiance.C function4
    _microgrid_pv_solar_irradiance_c_function4__clk = _microgrid_pv_solar_irradiance_clock1__out;
    if (_microgrid_pv_solar_irradiance_c_function4__clk < 1800) {
        _microgrid_pv_solar_irradiance_c_function4__GHI = 300;
        _microgrid_pv_solar_irradiance_c_function4__ETR = 330;
        _microgrid_pv_solar_irradiance_c_function4__ang_z = 2.5;
    }
    else if (_microgrid_pv_solar_irradiance_c_function4__clk < 3600) {
        _microgrid_pv_solar_irradiance_c_function4__GHI = 330;
        _microgrid_pv_solar_irradiance_c_function4__ETR = 393;
        _microgrid_pv_solar_irradiance_c_function4__ang_z = 2.4;
    }
    else if (_microgrid_pv_solar_irradiance_c_function4__clk < 5400) {
        _microgrid_pv_solar_irradiance_c_function4__GHI = 399;
        _microgrid_pv_solar_irradiance_c_function4__ETR = 430;
        _microgrid_pv_solar_irradiance_c_function4__ang_z = 2.4;
    }
    else {
        _microgrid_pv_solar_irradiance_c_function4__GHI = 510;
        _microgrid_pv_solar_irradiance_c_function4__ETR = 510;
        _microgrid_pv_solar_irradiance_c_function4__ang_z = 2.4;
    }
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function2
    _microgrid_pv_solar_irradiance_trigonometric_function2__out = cos(_microgrid_pv_solar_irradiance_rate_transition3_output__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function7
    _microgrid_pv_solar_irradiance_trigonometric_function7__out = sin(_microgrid_pv_solar_irradiance_rate_transition3_output__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Gain4
    _microgrid_pv_solar_irradiance_gain4__out = 0.017453292519943295 * _microgrid_pv_solar_irradiance_ang_t__out;
    // Generated from the component: Measurement.Single Phase Power Meter1.calc S
    _measurement_single_phase_power_meter1_calc_s__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.Degree to radians
    _measurement_single_phase_power_meter1_degree_to_radians__out = (_measurement_single_phase_power_meter1_phi__phase_diff * _measurement_single_phase_power_meter1_radian__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Gain5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain5__out = 0.0016666666666666668 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum5__out;
    // Generated from the component: Microgrid.Inverter.Controller.Gain21
    _microgrid_inverter_controller_gain21__out = 0.1 * _microgrid_inverter_controller_c_function2__out;
    // Generated from the component: Microgrid.Inverter.Controller.Gain22
    _microgrid_inverter_controller_gain22__out = 0.1 * _microgrid_inverter_controller_c_function1__out;
    // Generated from the component: Microgrid.Inverter.Controller.Gain33
    _microgrid_inverter_controller_gain33__out = 1000.0 * _microgrid_inverter_controller_c_function1__out;
    // Generated from the component: Microgrid.Inverter.Controller.C function4
    _microgrid_inverter_controller_c_function4__Ts = _microgrid_inverter_controller_constant4__out;
    _microgrid_inverter_controller_c_function4__in = _microgrid_inverter_controller_gain25__out;
    _microgrid_inverter_controller_c_function4__pi = _microgrid_inverter_controller_constant3__out;
    _microgrid_inverter_controller_c_function4__out = _microgrid_inverter_controller_c_function4__out + _microgrid_inverter_controller_c_function4__in * _microgrid_inverter_controller_c_function4__Ts;
    if (_microgrid_inverter_controller_c_function4__out >= 2 * _microgrid_inverter_controller_c_function4__pi) {
        _microgrid_inverter_controller_c_function4__out = _microgrid_inverter_controller_c_function4__out - 2 * _microgrid_inverter_controller_c_function4__pi;
    }
    // Generated from the component: Microgrid.Inverter.Controller.w
    HIL_OutAO(0x4017, (float)_microgrid_inverter_controller_gain25__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain3
    _microgrid_inverter_controller_single_phase_pll1_gain3__out = -1.0 * _microgrid_inverter_controller_single_phase_pll1_c_function1__vd;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Math_f1
    _microgrid_inverter_controller_single_phase_pll1_math_f1__out = pow(_microgrid_inverter_controller_single_phase_pll1_c_function1__vq, _microgrid_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Math_f2
    _microgrid_inverter_controller_single_phase_pll1_math_f2__out = pow(_microgrid_inverter_controller_single_phase_pll1_c_function1__vd, _microgrid_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain5
    _microgrid_inverter_controller_single_phase_pll1_gain5__out = 125.66370614359172 * _microgrid_inverter_controller_single_phase_pll1_sum4__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum12
    _microgrid_inverter_controller_single_phase_pll1_sum12__out = _microgrid_inverter_controller_single_phase_pll1_w_to_f__out - _microgrid_inverter_controller_single_phase_pll1_integrator7__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain7
    _microgrid_inverter_controller_single_phase_pll1_gain7__out = 628.3185307179587 * _microgrid_inverter_controller_single_phase_pll1_sum9__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain8
    _microgrid_inverter_controller_single_phase_pll1_gain8__out = 62.83185307179586 * _microgrid_inverter_controller_single_phase_pll1_sum11__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain10
    _microgrid_inverter_controller_single_phase_pll1_gain10__out = 62.83185307179586 * _microgrid_inverter_controller_single_phase_pll1_sum13__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain11
    _microgrid_inverter_controller_single_phase_pll1_gain11__out = 62.83185307179586 * _microgrid_inverter_controller_single_phase_pll1_sum14__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain2
    _microgrid_inverter_controller_single_phase_pll1_gain2__out = 0.4 * _microgrid_inverter_controller_single_phase_pll1_sum1__out;
    // Generated from the component: Microgrid.Inverter.S
    HIL_OutAO(0x401a, (float)_microgrid_inverter_power_meas_gain6__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.calc S
    _microgrid_measurement_single_phase_power_meter1_calc_s__out = (_microgrid_measurement_single_phase_power_meter1_va_rms__out * _microgrid_measurement_single_phase_power_meter1_ia_rms__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Degree to radians
    _microgrid_measurement_single_phase_power_meter1_degree_to_radians__out = (_microgrid_measurement_single_phase_power_meter1_phi__phase_diff * _microgrid_measurement_single_phase_power_meter1_radian__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.C function2
    _microgrid_pv_solar_irradiance_c_function2__ETR = _microgrid_pv_solar_irradiance_c_function4__ETR;
    _microgrid_pv_solar_irradiance_c_function2__GHI = _microgrid_pv_solar_irradiance_c_function4__GHI;
    if (_microgrid_pv_solar_irradiance_c_function2__k <= 0.21)_microgrid_pv_solar_irradiance_c_function2__f = 0.995 - 0.081 * _microgrid_pv_solar_irradiance_c_function2__k;
    else if (_microgrid_pv_solar_irradiance_c_function2__k > 0.76)_microgrid_pv_solar_irradiance_c_function2__f = 0.18;
    else _microgrid_pv_solar_irradiance_c_function2__f = 0.724 + 2.738 * _microgrid_pv_solar_irradiance_c_function2__k - 8.321 * _microgrid_pv_solar_irradiance_c_function2__k * _microgrid_pv_solar_irradiance_c_function2__k + 4.967 * _microgrid_pv_solar_irradiance_c_function2__k * _microgrid_pv_solar_irradiance_c_function2__k * _microgrid_pv_solar_irradiance_c_function2__k;
    _microgrid_pv_solar_irradiance_c_function2__Gdh = _microgrid_pv_solar_irradiance_c_function2__f * _microgrid_pv_solar_irradiance_c_function2__GHI;
    // Generated from the component: Microgrid.PV.Solar irradiance.Gain5
    _microgrid_pv_solar_irradiance_gain5__out = 0.017453292519943295 * _microgrid_pv_solar_irradiance_c_function4__ang_z;
    // Generated from the component: Microgrid.PV.Solar irradiance.Gain1
    _microgrid_pv_solar_irradiance_gain1__out = 0.5 * _microgrid_pv_solar_irradiance_gain4__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Gain2
    _microgrid_pv_solar_irradiance_gain2__out = 0.5 * _microgrid_pv_solar_irradiance_gain4__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Sum7
    _microgrid_pv_solar_irradiance_sum7__out = _microgrid_pv_solar_irradiance_gain4__out - _microgrid_pv_solar_irradiance_rate_transition3_output__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function3
    _microgrid_pv_solar_irradiance_trigonometric_function3__out = cos(_microgrid_pv_solar_irradiance_gain4__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.cos
    _measurement_single_phase_power_meter1_cos__out = cos(_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.sin
    _measurement_single_phase_power_meter1_sin__out = sin(_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Limit1
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain5__out > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out = 1.0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain5__out < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out = -1.0;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_gain5__out;
    }
    // Generated from the component: Microgrid.PV.Rate Transition2.Input
    _microgrid_pv_rate_transition2_output__out = _microgrid_inverter_controller_gain33__out;
    // Generated from the component: Microgrid.Inverter.Controller.Trigonometric function1
    _microgrid_inverter_controller_trigonometric_function1__out = cos(_microgrid_inverter_controller_c_function4__out);
    // Generated from the component: Microgrid.Inverter.Controller.Trigonometric function2
    _microgrid_inverter_controller_trigonometric_function2__out = sin(_microgrid_inverter_controller_c_function4__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum7
    _microgrid_inverter_controller_single_phase_pll1_sum7__out = _microgrid_inverter_controller_single_phase_pll1_gain3__out - _microgrid_inverter_controller_single_phase_pll1_integrator3__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum6
    _microgrid_inverter_controller_single_phase_pll1_sum6__out = _microgrid_inverter_controller_single_phase_pll1_math_f1__out + _microgrid_inverter_controller_single_phase_pll1_math_f2__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain9
    _microgrid_inverter_controller_single_phase_pll1_gain9__out = 62.83185307179586 * _microgrid_inverter_controller_single_phase_pll1_sum12__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum2
    _microgrid_inverter_controller_single_phase_pll1_sum2__out = _microgrid_inverter_controller_single_phase_pll1_gain2__out - _microgrid_inverter_controller_single_phase_pll1_integrator2__out;
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.cos
    _microgrid_measurement_single_phase_power_meter1_cos__out = cos(_microgrid_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.sin
    _microgrid_measurement_single_phase_power_meter1_sin__out = sin(_microgrid_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Product4
    _microgrid_pv_solar_irradiance_product4__out = (_microgrid_pv_solar_irradiance_c_function2__f * _microgrid_pv_solar_irradiance_c_function2__f);
    // Generated from the component: Microgrid.PV.Solar irradiance.Sum3
    _microgrid_pv_solar_irradiance_sum3__out = _microgrid_pv_solar_irradiance_c_function4__GHI - _microgrid_pv_solar_irradiance_c_function2__Gdh;
    // Generated from the component: Microgrid.PV.Solar irradiance.Rate Transition3.Input
    _microgrid_pv_solar_irradiance_rate_transition3_output__out = _microgrid_pv_solar_irradiance_gain5__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function4
    _microgrid_pv_solar_irradiance_trigonometric_function4__out = cos(_microgrid_pv_solar_irradiance_gain1__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function5
    _microgrid_pv_solar_irradiance_trigonometric_function5__out = sin(_microgrid_pv_solar_irradiance_gain2__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function1
    _microgrid_pv_solar_irradiance_trigonometric_function1__out = cos(_microgrid_pv_solar_irradiance_sum7__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Trigonometric function6
    _microgrid_pv_solar_irradiance_trigonometric_function6__out = cos(_microgrid_pv_solar_irradiance_sum7__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Sum4
    _microgrid_pv_solar_irradiance_sum4__out = _microgrid_pv_solar_irradiance_constant15__out - _microgrid_pv_solar_irradiance_trigonometric_function3__out;
    // Generated from the component: Measurement.Single Phase Power Meter1.Pmult
    _measurement_single_phase_power_meter1_pmult__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out * _measurement_single_phase_power_meter1_cos__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.conjugate
    _measurement_single_phase_power_meter1_conjugate__out = -1.0 * _measurement_single_phase_power_meter1_sin__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.PID controller1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__pi_reg_out_int = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__integrator_state + 0.0001 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out;
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out = -1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__av_active = 1;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out = 1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__av_active = 1;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__pi_reg_out_int;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: Microgrid.Inverter.Controller.C function5
    _microgrid_inverter_controller_c_function5__Valpha = _microgrid_inverter_e_va1__out;
    _microgrid_inverter_controller_c_function5__Vbeta = _microgrid_inverter_controller_hilbert_transform__out;
    _microgrid_inverter_controller_c_function5__k1 = _microgrid_inverter_controller_trigonometric_function1__out;
    _microgrid_inverter_controller_c_function5__k2 = _microgrid_inverter_controller_trigonometric_function2__out;
    _microgrid_inverter_controller_c_function5__Vd = _microgrid_inverter_controller_c_function5__Valpha * _microgrid_inverter_controller_c_function5__k1 + _microgrid_inverter_controller_c_function5__Vbeta * _microgrid_inverter_controller_c_function5__k2;
    _microgrid_inverter_controller_c_function5__Vq = -_microgrid_inverter_controller_c_function5__Valpha * _microgrid_inverter_controller_c_function5__k2 + _microgrid_inverter_controller_c_function5__Vbeta * _microgrid_inverter_controller_c_function5__k1;
    // Generated from the component: Microgrid.Inverter.Controller.C function6
    _microgrid_inverter_controller_c_function6__k1 = _microgrid_inverter_controller_trigonometric_function1__out;
    _microgrid_inverter_controller_c_function6__k2 = _microgrid_inverter_controller_trigonometric_function2__out;
    _microgrid_inverter_controller_c_function6__xalpha = _microgrid_inverter_i_ia1__out;
    _microgrid_inverter_controller_c_function6__xbeta = _microgrid_inverter_controller_hilbert_transform1__out;
    _microgrid_inverter_controller_c_function6__yd = _microgrid_inverter_controller_c_function6__xalpha * _microgrid_inverter_controller_c_function6__k1 + _microgrid_inverter_controller_c_function6__xbeta * _microgrid_inverter_controller_c_function6__k2;
    _microgrid_inverter_controller_c_function6__yq = -_microgrid_inverter_controller_c_function6__xalpha * _microgrid_inverter_controller_c_function6__k2 + _microgrid_inverter_controller_c_function6__xbeta * _microgrid_inverter_controller_c_function6__k1;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain4
    _microgrid_inverter_controller_single_phase_pll1_gain4__out = 125.66370614359172 * _microgrid_inverter_controller_single_phase_pll1_sum7__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Math1
    _microgrid_inverter_controller_single_phase_pll1_math1__out = sqrt(_microgrid_inverter_controller_single_phase_pll1_sum6__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product1
    _microgrid_inverter_controller_single_phase_pll1_product1__out = (_microgrid_inverter_controller_single_phase_pll1_sum2__out * _microgrid_inverter_controller_single_phase_pll1_integrator5__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Pmult
    _microgrid_measurement_single_phase_power_meter1_pmult__out = (_microgrid_measurement_single_phase_power_meter1_va_rms__out * _microgrid_measurement_single_phase_power_meter1_ia_rms__out * _microgrid_measurement_single_phase_power_meter1_cos__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.conjugate
    _microgrid_measurement_single_phase_power_meter1_conjugate__out = -1.0 * _microgrid_measurement_single_phase_power_meter1_sin__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Sum5
    _microgrid_pv_solar_irradiance_sum5__out = _microgrid_pv_solar_irradiance_constant17__out - _microgrid_pv_solar_irradiance_product4__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Product2
    _microgrid_pv_solar_irradiance_product2__out = (_microgrid_pv_solar_irradiance_sum3__out * _microgrid_pv_solar_irradiance_trigonometric_function1__out) * 1.0 / (_microgrid_pv_solar_irradiance_trigonometric_function2__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Bus Join1
    _microgrid_pv_solar_irradiance_bus_join1__out[0] = _microgrid_pv_solar_irradiance_trigonometric_function4__out;
    _microgrid_pv_solar_irradiance_bus_join1__out[1] = _microgrid_pv_solar_irradiance_trigonometric_function5__out;
    _microgrid_pv_solar_irradiance_bus_join1__out[2] = _microgrid_pv_solar_irradiance_trigonometric_function6__out;
    _microgrid_pv_solar_irradiance_bus_join1__out[3] = _microgrid_pv_solar_irradiance_trigonometric_function7__out;
    // Generated from the component: Microgrid.PV.Solar irradiance.Product3
    _microgrid_pv_solar_irradiance_product3__out = (_microgrid_pv_solar_irradiance_sum4__out * _microgrid_pv_solar_irradiance_c_function4__GHI * _microgrid_pv_solar_irradiance_constant14__out);
    // Generated from the component: Measurement.P
    HIL_OutAO(0x4004, (float)_measurement_single_phase_power_meter1_pmult__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.Qmult
    _measurement_single_phase_power_meter1_qmult__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out * _measurement_single_phase_power_meter1_conjugate__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Pref
    HIL_OutAO(0x4010, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Gain28
    _microgrid_inverter_controller_gain28__out = 0.005892556509887896 * _microgrid_inverter_controller_c_function5__Vd;
    // Generated from the component: Microgrid.Inverter.Controller.Gain29
    _microgrid_inverter_controller_gain29__out = 0.005892556509887896 * _microgrid_inverter_controller_c_function5__Vq;
    // Generated from the component: Microgrid.Inverter.Controller.Gain30
    _microgrid_inverter_controller_gain30__out = 0.008485281374238571 * _microgrid_inverter_controller_c_function6__yd;
    // Generated from the component: Microgrid.Inverter.Controller.Gain31
    _microgrid_inverter_controller_gain31__out = 0.008485281374238571 * _microgrid_inverter_controller_c_function6__yq;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Limit1
    if (_microgrid_inverter_controller_single_phase_pll1_math1__out < 1e-05) {
        _microgrid_inverter_controller_single_phase_pll1_limit1__out = 1e-05;
    } else {
        _microgrid_inverter_controller_single_phase_pll1_limit1__out = _microgrid_inverter_controller_single_phase_pll1_math1__out;
    }
    // Generated from the component: Microgrid.Measurement.P
    HIL_OutAO(0x401e, (float)_microgrid_measurement_single_phase_power_meter1_pmult__out);
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Qmult
    _microgrid_measurement_single_phase_power_meter1_qmult__out = (_microgrid_measurement_single_phase_power_meter1_va_rms__out * _microgrid_measurement_single_phase_power_meter1_ia_rms__out * _microgrid_measurement_single_phase_power_meter1_conjugate__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.C function3
    _microgrid_pv_solar_irradiance_c_function3__Gdh = _microgrid_pv_solar_irradiance_c_function2__Gdh;
    _microgrid_pv_solar_irradiance_c_function3__fk = _microgrid_pv_solar_irradiance_sum5__out;
    _microgrid_pv_solar_irradiance_c_function3__x[0] = _microgrid_pv_solar_irradiance_bus_join1__out[0];
    _microgrid_pv_solar_irradiance_c_function3__x[1] = _microgrid_pv_solar_irradiance_bus_join1__out[1];
    _microgrid_pv_solar_irradiance_c_function3__x[2] = _microgrid_pv_solar_irradiance_bus_join1__out[2];
    _microgrid_pv_solar_irradiance_c_function3__x[3] = _microgrid_pv_solar_irradiance_bus_join1__out[3];
    _microgrid_pv_solar_irradiance_c_function3__Gd = _microgrid_pv_solar_irradiance_c_function3__Gdh * 0.5 * (1 + _microgrid_pv_solar_irradiance_c_function3__x[0]) * (1 + _microgrid_pv_solar_irradiance_c_function3__fk * _microgrid_pv_solar_irradiance_c_function3__x[1] * _microgrid_pv_solar_irradiance_c_function3__x[1] * _microgrid_pv_solar_irradiance_c_function3__x[1]) * (1 + _microgrid_pv_solar_irradiance_c_function3__fk * _microgrid_pv_solar_irradiance_c_function3__x[2] * _microgrid_pv_solar_irradiance_c_function3__x[2] * _microgrid_pv_solar_irradiance_c_function3__x[3] * _microgrid_pv_solar_irradiance_c_function3__x[3] * _microgrid_pv_solar_irradiance_c_function3__x[3]);
    // Generated from the component: Microgrid.PV.Solar irradiance.Gain3
    _microgrid_pv_solar_irradiance_gain3__out = 0.5 * _microgrid_pv_solar_irradiance_product3__out;
    // Generated from the component: Measurement.Q
    HIL_OutAO(0x4005, (float)_measurement_single_phase_power_meter1_qmult__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _microgrid_inverter_controller_gain28__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product4
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out = (_microgrid_inverter_controller_gain28__out * _microgrid_inverter_controller_gain21__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out * _microgrid_inverter_controller_gain28__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_microgrid_inverter_controller_gain28__out * _microgrid_inverter_controller_gain28__out);
    // Generated from the component: Microgrid.Inverter.Controller.Vd
    HIL_OutAO(0x4015, (float)_microgrid_inverter_controller_gain28__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _microgrid_inverter_controller_gain29__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product3
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out = (_microgrid_inverter_controller_gain29__out * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product6
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out = (_microgrid_inverter_controller_gain21__out * _microgrid_inverter_controller_gain29__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_microgrid_inverter_controller_gain29__out * _microgrid_inverter_controller_gain29__out);
    // Generated from the component: Microgrid.Inverter.Controller.Vq
    HIL_OutAO(0x4016, (float)_microgrid_inverter_controller_gain29__out);
    // Generated from the component: Microgrid.Inverter.Controller.Id
    HIL_OutAO(0x4006, (float)_microgrid_inverter_controller_gain30__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.023125 * _microgrid_inverter_controller_gain30__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _microgrid_inverter_power_meas_power_meas_dqpu_product1__out = (_microgrid_inverter_controller_gain28__out * _microgrid_inverter_controller_gain30__out);
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _microgrid_inverter_power_meas_power_meas_dqpu_product4__out = (_microgrid_inverter_controller_gain29__out * _microgrid_inverter_controller_gain30__out);
    // Generated from the component: Microgrid.Inverter.Controller.Iq
    HIL_OutAO(0x4007, (float)_microgrid_inverter_controller_gain31__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.023125 * _microgrid_inverter_controller_gain31__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _microgrid_inverter_power_meas_power_meas_dqpu_product2__out = (_microgrid_inverter_controller_gain29__out * _microgrid_inverter_controller_gain31__out);
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _microgrid_inverter_power_meas_power_meas_dqpu_product3__out = (_microgrid_inverter_controller_gain28__out * _microgrid_inverter_controller_gain31__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product8
    _microgrid_inverter_controller_single_phase_pll1_product8__out = (_microgrid_inverter_controller_single_phase_pll1_c_function1__vq) * 1.0 / (_microgrid_inverter_controller_single_phase_pll1_limit1__out);
    // Generated from the component: Microgrid.Measurement.Q
    HIL_OutAO(0x401f, (float)_microgrid_measurement_single_phase_power_meter1_qmult__out);
    // Generated from the component: Microgrid.PV.Solar irradiance.Sum6
    _microgrid_pv_solar_irradiance_sum6__out = _microgrid_pv_solar_irradiance_product2__out + _microgrid_pv_solar_irradiance_gain3__out + _microgrid_pv_solar_irradiance_c_function3__Gd;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum3
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product3__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product4__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Sum4
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product5__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product6__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_microgrid_inverter_controller_gain25__out * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_microgrid_inverter_controller_gain25__out * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _microgrid_inverter_power_meas_power_meas_dqpu_sum1__out = _microgrid_inverter_power_meas_power_meas_dqpu_product1__out + _microgrid_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _microgrid_inverter_power_meas_power_meas_dqpu_sum2__out = _microgrid_inverter_power_meas_power_meas_dqpu_product4__out - _microgrid_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Abs1
    _microgrid_inverter_controller_single_phase_pll1_abs1__out = fabs(_microgrid_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: Microgrid.PV.C function2
    _microgrid_pv_c_function2__Pref = _microgrid_pv_rate_transition2_output__out;
    _microgrid_pv_c_function2__SI = _microgrid_pv_solar_irradiance_sum6__out;
    _microgrid_pv_c_function2__Pmax = _microgrid_pv_c_function2__SI * 0.15 * 100;
    _microgrid_pv_c_function2__Vmax = 600;
    _microgrid_pv_c_function2__Y = 4 * _microgrid_pv_c_function2__Pmax / _microgrid_pv_c_function2__Vmax / _microgrid_pv_c_function2__Vmax;
    _microgrid_pv_c_function2__out1 = _microgrid_pv_c_function2__Y * _microgrid_pv_c_function2__Vmax;
    _microgrid_pv_c_function2__out2 = _microgrid_pv_c_function2__Y * _microgrid_pv_c_function2__Y * _microgrid_pv_c_function2__Vmax * _microgrid_pv_c_function2__Vmax - 4 * _microgrid_pv_c_function2__Pref * _microgrid_pv_c_function2__Y;
    // Generated from the component: Microgrid.PV.SI
    HIL_OutAO(0x4022, (float)_microgrid_pv_solar_irradiance_sum6__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4008, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = 1;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__states[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _microgrid_inverter_power_meas_power_meas_dqpu_sum1__out - _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__out = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__states[_microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _microgrid_inverter_power_meas_power_meas_dqpu_sum2__out - _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__out = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Kd_LUT
    if(_microgrid_inverter_controller_single_phase_pll1_abs1__out <= _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]) {
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0])
                / (_microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[1] - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]);
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
    }
    else if(_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99]) {
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr = 99 >> 1;
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__rightIndex = 99;
        while (1 < _microgrid_inverter_controller_single_phase_pll1_kd_lut__rightIndex - _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex) {
            if (_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr]) {
                _microgrid_inverter_controller_single_phase_pll1_kd_lut__rightIndex = _microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            else {
                _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex = _microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            _microgrid_inverter_controller_single_phase_pll1_kd_lut__curAddr = (_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex + _microgrid_inverter_controller_single_phase_pll1_kd_lut__rightIndex) >> 1;
        }
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
                / (_microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex]);
    }
    else {
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98])
                / (_microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99] - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98]);
        _microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 98;
    }
    _microgrid_inverter_controller_single_phase_pll1_kd_lut__value = (_microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
            * _microgrid_inverter_controller_single_phase_pll1_kd_lut__fraction + _microgrid_inverter_controller_single_phase_pll1_kd_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kd_lut__leftIndex];
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Ki_LUT
    if(_microgrid_inverter_controller_single_phase_pll1_abs1__out <= _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]) {
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0])
                / (_microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[1] - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]);
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
    }
    else if(_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99]) {
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr = 99 >> 1;
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__rightIndex = 99;
        while (1 < _microgrid_inverter_controller_single_phase_pll1_ki_lut__rightIndex - _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex) {
            if (_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr]) {
                _microgrid_inverter_controller_single_phase_pll1_ki_lut__rightIndex = _microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            else {
                _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex = _microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            _microgrid_inverter_controller_single_phase_pll1_ki_lut__curAddr = (_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex + _microgrid_inverter_controller_single_phase_pll1_ki_lut__rightIndex) >> 1;
        }
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
                / (_microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex]);
    }
    else {
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98])
                / (_microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99] - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98]);
        _microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 98;
    }
    _microgrid_inverter_controller_single_phase_pll1_ki_lut__value = (_microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
            * _microgrid_inverter_controller_single_phase_pll1_ki_lut__fraction + _microgrid_inverter_controller_single_phase_pll1_ki_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_ki_lut__leftIndex];
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Kp_LUT
    if(_microgrid_inverter_controller_single_phase_pll1_abs1__out <= _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]) {
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0])
                / (_microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[1] - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]);
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
    }
    else if(_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99]) {
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr = 99 >> 1;
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__rightIndex = 99;
        while (1 < _microgrid_inverter_controller_single_phase_pll1_kp_lut__rightIndex - _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex) {
            if (_microgrid_inverter_controller_single_phase_pll1_abs1__out < _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr]) {
                _microgrid_inverter_controller_single_phase_pll1_kp_lut__rightIndex = _microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            else {
                _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex = _microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            _microgrid_inverter_controller_single_phase_pll1_kp_lut__curAddr = (_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex + _microgrid_inverter_controller_single_phase_pll1_kp_lut__rightIndex) >> 1;
        }
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
                / (_microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex]);
    }
    else {
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__fraction = (_microgrid_inverter_controller_single_phase_pll1_abs1__out - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98])
                / (_microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99] - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98]);
        _microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 98;
    }
    _microgrid_inverter_controller_single_phase_pll1_kp_lut__value = (_microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
            * _microgrid_inverter_controller_single_phase_pll1_kp_lut__fraction + _microgrid_inverter_controller_single_phase_pll1_kp_lut__lut_table[_microgrid_inverter_controller_single_phase_pll1_kp_lut__leftIndex];
    // Generated from the component: Microgrid.PV.C function1
    _microgrid_pv_c_function1__Vdc = _microgrid_pv_lpf_dc__out;
    _microgrid_pv_c_function1__Vmax = _microgrid_pv_c_function2__Vmax;
    _microgrid_pv_c_function1__Y = _microgrid_pv_c_function2__Y;
    if (_microgrid_pv_c_function1__Vdc > _microgrid_pv_c_function1__Vmax)_microgrid_pv_c_function1__Ipv = 0;
    else _microgrid_pv_c_function1__Ipv = _microgrid_pv_c_function1__Y * (_microgrid_pv_c_function1__Vmax - _microgrid_pv_c_function1__Vdc);
    _microgrid_pv_c_function1__Ppv = _microgrid_pv_c_function1__Ipv * _microgrid_pv_c_function1__Vdc;
    // Generated from the component: Microgrid.PV.Mathematical function1
    _microgrid_pv_mathematical_function1__out = sqrt(_microgrid_pv_c_function2__out2);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Signal switch1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__out < 0.5f) ? _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_one__out : _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product6
    _microgrid_inverter_controller_single_phase_pll1_product6__out = (_microgrid_inverter_controller_single_phase_pll1_kd_lut__value * _microgrid_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product5
    _microgrid_inverter_controller_single_phase_pll1_product5__out = (_microgrid_inverter_controller_single_phase_pll1_ki_lut__value * _microgrid_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Product7
    _microgrid_inverter_controller_single_phase_pll1_product7__out = (_microgrid_inverter_controller_single_phase_pll1_kp_lut__value * _microgrid_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: Microgrid.PV.Idc.Is1
    HIL_OutFloat(141295616, (float) _microgrid_pv_c_function1__Ipv);
    // Generated from the component: Microgrid.PV.Ipv
    HIL_OutAO(0x4020, (float)_microgrid_pv_c_function1__Ipv);
    // Generated from the component: Microgrid.PV.P
    HIL_OutAO(0x4021, (float)_microgrid_pv_c_function1__Ppv);
    // Generated from the component: Microgrid.PV.C function3
    _microgrid_pv_c_function3__Y = _microgrid_pv_c_function2__Y;
    _microgrid_pv_c_function3__in = _microgrid_pv_c_function2__out1;
    _microgrid_pv_c_function3__in2 = _microgrid_pv_mathematical_function1__out;
    _microgrid_pv_c_function3__Vref = (_microgrid_pv_c_function3__in + _microgrid_pv_c_function3__in2) / 2 / _microgrid_pv_c_function3__Y;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Et_sqr_res
    HIL_OutAO(0x400f, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum3__out) * 1.0 / (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Product2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_sum4__out) * 1.0 / (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_signal_switch1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[_microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i + 1] * _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__i];
    }
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum += _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] * _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = _microgrid_inverter_controller_single_phase_pll1_product6__out - _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__out = _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Rate Transition1.Input
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_rate_transition1_output__out = _microgrid_pv_c_function3__Vref;
    // Generated from the component: Microgrid.Inverter.VREF
    HIL_OutAO(0x401c, (float)_microgrid_pv_c_function3__Vref);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x400a, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product1__out - _microgrid_inverter_controller_gain31__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4009, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_product2__out - _microgrid_inverter_controller_gain30__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum8
    _microgrid_inverter_controller_single_phase_pll1_sum8__out = _microgrid_inverter_controller_single_phase_pll1_product7__out + _microgrid_inverter_controller_single_phase_pll1_i__out + _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 4.221527777777777 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x400e, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 4.221527777777777 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x400d, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Limit2
    if (_microgrid_inverter_controller_single_phase_pll1_sum8__out > 62.83185307179586) {
        _microgrid_inverter_controller_single_phase_pll1_limit2__out = 62.83185307179586;
    } else if (_microgrid_inverter_controller_single_phase_pll1_sum8__out < -62.83185307179586) {
        _microgrid_inverter_controller_single_phase_pll1_limit2__out = -62.83185307179586;
    } else {
        _microgrid_inverter_controller_single_phase_pll1_limit2__out = _microgrid_inverter_controller_single_phase_pll1_sum8__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum5
    _microgrid_inverter_controller_single_phase_pll1_sum5__out = _microgrid_inverter_controller_single_phase_pll1_limit2__out + _microgrid_inverter_controller_single_phase_pll1_const__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Sum10
    _microgrid_inverter_controller_single_phase_pll1_sum10__out = _microgrid_inverter_controller_single_phase_pll1_sum5__out - _microgrid_inverter_controller_single_phase_pll1_integrator6__out;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__in = _microgrid_inverter_controller_single_phase_pll1_sum5__out;
    _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out = _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = 1.0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = -1.0;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out > 1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = 1.0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out < -1.0) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = -1.0;
    } else {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Gain6
    _microgrid_inverter_controller_single_phase_pll1_gain6__out = 628.3185307179587 * _microgrid_inverter_controller_single_phase_pll1_sum10__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 169.7056274847714 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4012, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 169.7056274847714 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4011, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x400c, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x400b, (float)_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = -sin(_microgrid_inverter_controller_c_function4__out);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = cos(_microgrid_inverter_controller_c_function4__out);
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: Microgrid.Inverter.Controller.Bus Join1
    _microgrid_inverter_controller_bus_join1__out[0] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _microgrid_inverter_controller_bus_join1__out[1] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: Microgrid.Inverter.Controller.Bus Split1
    _microgrid_inverter_controller_bus_split1__out = _microgrid_inverter_controller_bus_join1__out[0];
    _microgrid_inverter_controller_bus_split1__out1 = _microgrid_inverter_controller_bus_join1__out[1];
    // Generated from the component: Microgrid.Inverter.Controller.Gain20
    _microgrid_inverter_controller_gain20__out = -1.0 * _microgrid_inverter_controller_bus_split1__out;
    // Generated from the component: Microgrid.Inverter.Single Phase Inverter1.PWM_Modulator
    if (_microgrid_inverter_controller_bus_split1__out < -1.0)
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = -1.0;
    else if (_microgrid_inverter_controller_bus_split1__out > 1.0)
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = 1.0;
    else
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = _microgrid_inverter_controller_bus_split1__out;
    HIL_OutInt32(0x2000040 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_microgrid_inverter_controller_gain20__out < -1.0)
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = -1.0;
    else if (_microgrid_inverter_controller_gain20__out > 1.0)
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = 1.0;
    else
        _microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = _microgrid_inverter_controller_gain20__out;
    HIL_OutInt32(0x2000040 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_microgrid_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_microgrid_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _microgrid_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _microgrid_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.I
    if (!_microgrid_inverter_controller_single_phase_pll1_i__av_active) {
        _microgrid_inverter_controller_single_phase_pll1_i__integrator_state += 1.0 * _microgrid_inverter_controller_single_phase_pll1_product5__out * 2e-05;
    }
    else {
        _microgrid_inverter_controller_single_phase_pll1_i__integrator_state = _microgrid_inverter_controller_single_phase_pll1_i__out;
    }
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator1
    _microgrid_inverter_controller_single_phase_pll1_integrator1__state += _microgrid_inverter_controller_single_phase_pll1_product1__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator10
    _microgrid_inverter_controller_single_phase_pll1_integrator10__state += _microgrid_inverter_controller_single_phase_pll1_gain11__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator2
    _microgrid_inverter_controller_single_phase_pll1_integrator2__state += _microgrid_inverter_controller_single_phase_pll1_product2__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator3
    _microgrid_inverter_controller_single_phase_pll1_integrator3__state += _microgrid_inverter_controller_single_phase_pll1_gain4__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator4
    _microgrid_inverter_controller_single_phase_pll1_integrator4__state += _microgrid_inverter_controller_single_phase_pll1_gain5__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator5
    _microgrid_inverter_controller_single_phase_pll1_integrator5__state += _microgrid_inverter_controller_single_phase_pll1_gain7__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator6
    _microgrid_inverter_controller_single_phase_pll1_integrator6__state += _microgrid_inverter_controller_single_phase_pll1_gain6__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator7
    _microgrid_inverter_controller_single_phase_pll1_integrator7__state += _microgrid_inverter_controller_single_phase_pll1_gain9__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator8
    _microgrid_inverter_controller_single_phase_pll1_integrator8__state += _microgrid_inverter_controller_single_phase_pll1_gain8__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Integrator9
    _microgrid_inverter_controller_single_phase_pll1_integrator9__state += _microgrid_inverter_controller_single_phase_pll1_gain10__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: Microgrid.PV.Solar irradiance.Clock1
    _microgrid_pv_solar_irradiance_clock1__state += 2e-05;
    // Generated from the component: Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0;
    }
    _measurement_single_phase_power_meter1_ia_rms__square_sum += _measurement_ia_ia1__out * _measurement_ia_ia1__out;
    _measurement_single_phase_power_meter1_ia_rms__sample_cnt ++;
    // Generated from the component: Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _measurement_single_phase_power_meter1_va_rms__sample_cnt = 0;
    }
    _measurement_single_phase_power_meter1_va_rms__square_sum += _measurement_va_va1__out * _measurement_va_va1__out;
    _measurement_single_phase_power_meter1_va_rms__sample_cnt ++;
    // Generated from the component: Measurement.Single Phase Power Meter1.phi
    _measurement_single_phase_power_meter1_phi__sample_cnt_ref += 1;
    _measurement_single_phase_power_meter1_phi__sample_cnt_in += 1;
    _measurement_single_phase_power_meter1_phi__previous_filtered_ref = _measurement_single_phase_power_meter1_phi__filtered_ref;
    _measurement_single_phase_power_meter1_phi__filtered_ref = _measurement_single_phase_power_meter1_phi__previous_filtered_ref * 0.9391207700769353 + _measurement_va_va1__out * 0.06087922992306474;
    _measurement_single_phase_power_meter1_phi__previous_filtered_in = _measurement_single_phase_power_meter1_phi__filtered_in;
    _measurement_single_phase_power_meter1_phi__filtered_in = _measurement_single_phase_power_meter1_phi__previous_filtered_in * 0.9391207700769353 + _measurement_ia_ia1__out * 0.06087922992306474;
    if( _measurement_single_phase_power_meter1_phi__sample_cnt_ref >= 25000 ) {
        _measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
        _measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _measurement_single_phase_power_meter1_phi__previous_correction_ref = 0;
        _measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_measurement_single_phase_power_meter1_phi__filtered_ref >= 0) && (_measurement_single_phase_power_meter1_phi__previous_filtered_ref < 0) ) {
        _measurement_single_phase_power_meter1_phi__zc_flag_ref = 1;
    }
    else {
        _measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
    }
    if( _measurement_single_phase_power_meter1_phi__sample_cnt_in >= 25000 ) {
        _measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
        _measurement_single_phase_power_meter1_phi__no_zc_flag_in = 1;
        _measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _measurement_single_phase_power_meter1_phi__previous_correction_in = 0;
        _measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_measurement_single_phase_power_meter1_phi__filtered_in >= 0) && (_measurement_single_phase_power_meter1_phi__previous_filtered_in < 0) ) {
        _measurement_single_phase_power_meter1_phi__zc_flag_in = 1;
        _measurement_single_phase_power_meter1_phi__no_zc_flag_in = 0;
    }
    else {
        _measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
    }
    if( _measurement_single_phase_power_meter1_phi__zc_flag_ref ) {
        _measurement_single_phase_power_meter1_phi__correction_ref = - _measurement_single_phase_power_meter1_phi__previous_filtered_ref / ( _measurement_single_phase_power_meter1_phi__filtered_ref - _measurement_single_phase_power_meter1_phi__previous_filtered_ref );
        _measurement_single_phase_power_meter1_phi__sample_cnt_ref += _measurement_single_phase_power_meter1_phi__correction_ref - _measurement_single_phase_power_meter1_phi__previous_correction_ref;
        if( (_measurement_single_phase_power_meter1_phi__sample_cnt_ref > 1e-6) || (_measurement_single_phase_power_meter1_phi__sample_cnt_ref < -1e-6) ) {
            if( !_measurement_single_phase_power_meter1_phi__no_zc_flag_in ) {
                _measurement_single_phase_power_meter1_phi__phase_state = 360.0 * ( _measurement_single_phase_power_meter1_phi__sample_cnt_in + _measurement_single_phase_power_meter1_phi__correction_ref - _measurement_single_phase_power_meter1_phi__previous_correction_in ) / _measurement_single_phase_power_meter1_phi__sample_cnt_ref;
            }
        }
        if( (_measurement_single_phase_power_meter1_phi__phase_state > 360.0) || (_measurement_single_phase_power_meter1_phi__phase_state < -360.0) ) {
            _measurement_single_phase_power_meter1_phi__phase_state = fmod(_measurement_single_phase_power_meter1_phi__phase_state, 360.0);
        }
        if (_measurement_single_phase_power_meter1_phi__phase_state < -180.0) {
            _measurement_single_phase_power_meter1_phi__phase_state += 360.0;
        }
        else if (_measurement_single_phase_power_meter1_phi__phase_state > 180.0) {
            _measurement_single_phase_power_meter1_phi__phase_state -= 360.0;
        }
        _measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _measurement_single_phase_power_meter1_phi__previous_correction_ref = _measurement_single_phase_power_meter1_phi__correction_ref;
    }
    if( _measurement_single_phase_power_meter1_phi__zc_flag_in ) {
        _measurement_single_phase_power_meter1_phi__correction_in = - _measurement_single_phase_power_meter1_phi__previous_filtered_in / ( _measurement_single_phase_power_meter1_phi__filtered_in - _measurement_single_phase_power_meter1_phi__previous_filtered_in );
        _measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _measurement_single_phase_power_meter1_phi__previous_correction_in = _measurement_single_phase_power_meter1_phi__correction_in;
    }
    // Generated from the component: Microgrid.Inverter.Controller.C function2
    // Generated from the component: Microgrid.Inverter.Controller.C function1
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.C function1
    // Generated from the component: Microgrid.Inverter.Controller.Hilbert Transform
    _microgrid_inverter_controller_hilbert_transform__states[0] = _microgrid_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Controller.Hilbert Transform1
    _microgrid_inverter_controller_hilbert_transform1__states[0] = _microgrid_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.LPF_dc
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__states[0] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_lpf_dc__delay_line_in;
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0;
    }
    _microgrid_measurement_single_phase_power_meter1_ia_rms__square_sum += _microgrid_measurement_ia_ia1__out * _microgrid_measurement_ia_ia1__out;
    _microgrid_measurement_single_phase_power_meter1_ia_rms__sample_cnt ++;
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0;
    }
    _microgrid_measurement_single_phase_power_meter1_va_rms__square_sum += _microgrid_measurement_va_va1__out * _microgrid_measurement_va_va1__out;
    _microgrid_measurement_single_phase_power_meter1_va_rms__sample_cnt ++;
    // Generated from the component: Microgrid.Measurement.Single Phase Power Meter1.phi
    _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref += 1;
    _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in += 1;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref = _microgrid_measurement_single_phase_power_meter1_phi__filtered_ref;
    _microgrid_measurement_single_phase_power_meter1_phi__filtered_ref = _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref * 0.9391207700769353 + _microgrid_measurement_va_va1__out * 0.06087922992306474;
    _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in = _microgrid_measurement_single_phase_power_meter1_phi__filtered_in;
    _microgrid_measurement_single_phase_power_meter1_phi__filtered_in = _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in * 0.9391207700769353 + _microgrid_measurement_ia_ia1__out * 0.06087922992306474;
    if( _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref >= 25000 ) {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_microgrid_measurement_single_phase_power_meter1_phi__filtered_ref >= 0) && (_microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref < 0) ) {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_ref = 1;
    }
    else {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
    }
    if( _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in >= 25000 ) {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 1;
        _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_in = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_microgrid_measurement_single_phase_power_meter1_phi__filtered_in >= 0) && (_microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in < 0) ) {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_in = 1;
        _microgrid_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 0;
    }
    else {
        _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
    }
    if( _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_ref ) {
        _microgrid_measurement_single_phase_power_meter1_phi__correction_ref = - _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref / ( _microgrid_measurement_single_phase_power_meter1_phi__filtered_ref - _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_ref );
        _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref += _microgrid_measurement_single_phase_power_meter1_phi__correction_ref - _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_ref;
        if( (_microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref > 1e-6) || (_microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref < -1e-6) ) {
            if( !_microgrid_measurement_single_phase_power_meter1_phi__no_zc_flag_in ) {
                _microgrid_measurement_single_phase_power_meter1_phi__phase_state = 360.0 * ( _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in + _microgrid_measurement_single_phase_power_meter1_phi__correction_ref - _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_in ) / _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
            }
        }
        if( (_microgrid_measurement_single_phase_power_meter1_phi__phase_state > 360.0) || (_microgrid_measurement_single_phase_power_meter1_phi__phase_state < -360.0) ) {
            _microgrid_measurement_single_phase_power_meter1_phi__phase_state = fmod(_microgrid_measurement_single_phase_power_meter1_phi__phase_state, 360.0);
        }
        if (_microgrid_measurement_single_phase_power_meter1_phi__phase_state < -180.0) {
            _microgrid_measurement_single_phase_power_meter1_phi__phase_state += 360.0;
        }
        else if (_microgrid_measurement_single_phase_power_meter1_phi__phase_state > 180.0) {
            _microgrid_measurement_single_phase_power_meter1_phi__phase_state -= 360.0;
        }
        _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_ref = _microgrid_measurement_single_phase_power_meter1_phi__correction_ref;
    }
    if( _microgrid_measurement_single_phase_power_meter1_phi__zc_flag_in ) {
        _microgrid_measurement_single_phase_power_meter1_phi__correction_in = - _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in / ( _microgrid_measurement_single_phase_power_meter1_phi__filtered_in - _microgrid_measurement_single_phase_power_meter1_phi__previous_filtered_in );
        _microgrid_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _microgrid_measurement_single_phase_power_meter1_phi__previous_correction_in = _microgrid_measurement_single_phase_power_meter1_phi__correction_in;
    }
    // Generated from the component: Microgrid.PV.LPF_dc
    _microgrid_pv_lpf_dc__states[0] = _microgrid_pv_lpf_dc__delay_line_in;
    // Generated from the component: Microgrid.PV.Solar irradiance.C function4
    // Generated from the component: Microgrid.Inverter.Controller.C function4
    // Generated from the component: Microgrid.PV.Solar irradiance.C function2
    _microgrid_pv_solar_irradiance_c_function2__k = _microgrid_pv_solar_irradiance_c_function2__GHI / _microgrid_pv_solar_irradiance_c_function2__ETR;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.PID controller1
    if (!_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__av_active) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_pid_controller1__integrator_state += 0.0001 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit1__out * 2e-05;
    }
    // Generated from the component: Microgrid.Inverter.Controller.C function5
    // Generated from the component: Microgrid.Inverter.Controller.C function6
    // Generated from the component: Microgrid.PV.Solar irradiance.C function3
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: Microgrid.PV.C function2
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop.Comparator1
    if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 0;
    } else if (_microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_limit_zero__out) {
        _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop_comparator1__state = 1;
    }
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _microgrid_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: Microgrid.PV.C function1
    // Generated from the component: Microgrid.PV.C function3
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] = _microgrid_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 27.777777777777775 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 27.777777777777775 * _microgrid_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    // Generated from the component: Microgrid.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc += _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__in * 2e-05;
    if (_microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc > _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value)_microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc -= _microgrid_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Constant1
    // Generated from the component: Constant2
    // Generated from the component: Constant3
    // Generated from the component: Vs.Limit1
    if (_constant1__out < 0.0) {
        _vs_limit1__out = 0.0;
    } else {
        _vs_limit1__out = _constant1__out;
    }
    // Generated from the component: Vs.Limit2
    if (_constant2__out > 10000.0) {
        _vs_limit2__out = 10000.0;
    } else if (_constant2__out < 0.1) {
        _vs_limit2__out = 0.1;
    } else {
        _vs_limit2__out = _constant2__out;
    }
    // Generated from the component: Vs.tdf_sg_ctrl_sine1
    // calculate and write SG parameters
    // calculate amplitude
    _vs_tdf_sg_ctrl_sine1__gain = _vs_limit1__out * M_SQRT2;
    // calculate period
    _vs_tdf_sg_ctrl_sine1__period = 1.0f / _vs_limit2__out;
    // calculate sample_cnt increment value
    _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real = _vs_tdf_sg_ctrl_sine1__max_int40 / (_vs_tdf_sg_ctrl_sine1__period / 4e-06);
    _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo = (X_UnInt32)(fmod(_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real, _vs_tdf_sg_ctrl_sine1__max_int32));
    _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi = (X_UnInt32)(_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real / _vs_tdf_sg_ctrl_sine1__max_int32);
    _vs_tdf_sg_ctrl_sine1__sg_update_value = 0;
    for (_vs_tdf_sg_ctrl_sine1__i = 0; _vs_tdf_sg_ctrl_sine1__i < 1; _vs_tdf_sg_ctrl_sine1__i++) {
        //calculate offset for each channel
        _vs_tdf_sg_ctrl_sine1__shift = (double)(_vs_tdf_sg_ctrl_sine1__i) * 0.0;
        _vs_tdf_sg_ctrl_sine1__phase_pu = fmod((_constant3__out / 360.0f + _vs_tdf_sg_ctrl_sine1__shift / (2.0f * M_PI)), 1.0f);
        if (_vs_tdf_sg_ctrl_sine1__phase_pu < 0.0f) {
            _vs_tdf_sg_ctrl_sine1__phase_pu = _vs_tdf_sg_ctrl_sine1__phase_pu + 1.0f;
        }
        _vs_tdf_sg_ctrl_sine1__offset = (_vs_tdf_sg_ctrl_sine1__max_int32 * _vs_tdf_sg_ctrl_sine1__phase_pu);  // offset in SP
        _vs_tdf_sg_ctrl_sine1__offset_uint = (X_UnInt32)_vs_tdf_sg_ctrl_sine1__offset;  // offset in fp32
        // write parameters
        HIL_OutFloat(0x400200 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], (float) _vs_tdf_sg_ctrl_sine1__gain);
        HIL_OutInt32(0x400180 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], _vs_tdf_sg_ctrl_sine1__offset_uint); // offset in fp32
        HIL_OutInt32(0x400000 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo);
        HIL_OutInt32(0x400280 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], _vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi);
        HIL_OutFloat(0x400100 + _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i], (float) _vs_tdf_sg_ctrl_sine1__no_of_points);
        _vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _vs_tdf_sg_ctrl_sine1__channels[_vs_tdf_sg_ctrl_sine1__i];
    }
    HIL_OutInt32(0x400080, _vs_tdf_sg_ctrl_sine1__sg_update_value);  // update SG parameters for all channels
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    //@cmp.update.block.end
}
void TimerCounterHandler_2_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_2");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: Microgrid.Inverter.Controller.C function3
    if (_microgrid_inverter_controller_c_function3__k > 9)_microgrid_inverter_controller_c_function3__k = 0;
    if (_microgrid_inverter_controller_c_function3__t > 4)_microgrid_inverter_controller_c_function3__t = 0;
    if (_microgrid_inverter_controller_c_function3__k == 0) {
        _microgrid_inverter_controller_c_function3__Pref = 0;
        _microgrid_inverter_controller_c_function3__Qref = 0;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 1) {
        _microgrid_inverter_controller_c_function3__Pref = 2;
        _microgrid_inverter_controller_c_function3__Qref = 1.5;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 2) {
        _microgrid_inverter_controller_c_function3__Pref = 3;
        _microgrid_inverter_controller_c_function3__Qref = 1.2;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 3) {
        _microgrid_inverter_controller_c_function3__Pref = 1.5;
        _microgrid_inverter_controller_c_function3__Qref = 1;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 4) {
        _microgrid_inverter_controller_c_function3__Pref = 5;
        _microgrid_inverter_controller_c_function3__Qref = 2;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 5) {
        _microgrid_inverter_controller_c_function3__Pref = 4;
        _microgrid_inverter_controller_c_function3__Qref = 2.6;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 6) {
        _microgrid_inverter_controller_c_function3__Pref = 3.2;
        _microgrid_inverter_controller_c_function3__Qref = 1.4;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 7) {
        _microgrid_inverter_controller_c_function3__Pref = 1.4;
        _microgrid_inverter_controller_c_function3__Qref = 3;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 8) {
        _microgrid_inverter_controller_c_function3__Pref = 5.6;
        _microgrid_inverter_controller_c_function3__Qref = 2.6;
    }
    else if (_microgrid_inverter_controller_c_function3__k == 9) {
        _microgrid_inverter_controller_c_function3__Pref = 2.9;
        _microgrid_inverter_controller_c_function3__Qref = 1;
    }
    if (_microgrid_inverter_controller_c_function3__t >= 4)_microgrid_inverter_controller_c_function3__k += 1;
    _microgrid_inverter_controller_c_function3__t += 1;
    // Generated from the component: Microgrid.Inverter.Controller.Gain23
    _microgrid_inverter_controller_gain23__out = 1000.0 * _microgrid_inverter_controller_c_function3__Pref;
    // Generated from the component: Microgrid.Inverter.Controller.Gain24
    _microgrid_inverter_controller_gain24__out = 1000.0 * _microgrid_inverter_controller_c_function3__Qref;
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition10.Input
    _microgrid_inverter_controller_rate_transition10_output__out = _microgrid_inverter_controller_c_function3__Qref;
    // Generated from the component: Microgrid.Inverter.Controller.Rate Transition9.Input
    _microgrid_inverter_controller_rate_transition9_output__out = _microgrid_inverter_controller_c_function3__Pref;
    // Generated from the component: Microgrid.Inverter.Controller.Pref
    HIL_OutAO(0x4013, (float)_microgrid_inverter_controller_gain23__out);
    // Generated from the component: Microgrid.Inverter.Controller.Qref
    HIL_OutAO(0x4014, (float)_microgrid_inverter_controller_gain24__out);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: Microgrid.Inverter.Controller.C function3
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------