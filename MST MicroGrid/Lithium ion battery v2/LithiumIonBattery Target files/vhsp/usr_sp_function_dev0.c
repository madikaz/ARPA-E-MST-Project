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
double _constant1__out = 14400.0;
double _constant2__out = 60.0;
double _constant3__out = 0.0;
X_Int32 _ess_inverter_controller_c_function3__k;
double _ess_inverter_controller_c_function3__t;


double _ess_inverter_controller_c_function3__Pref;
double _ess_inverter_controller_c_function3__Qref;
double _ess_inverter_controller_constant2__out = 1.0;
double _ess_inverter_controller_constant3__out = 3.141592653589793;
double _ess_inverter_controller_constant4__out = 2e-05;
double _ess_inverter_controller_constant5__out = 0.0;
double _ess_inverter_controller_gain23__out;
double _ess_inverter_controller_gain24__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _ess_inverter_controller_single_phase_pll1_constant2__out = 2;
double _ess_inverter_controller_single_phase_pll1_i__out;
double _ess_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
double _ess_inverter_controller_single_phase_pll1_integrator1__out;
double _ess_inverter_controller_single_phase_pll1_integrator10__out;
double _ess_inverter_controller_single_phase_pll1_integrator2__out;
double _ess_inverter_controller_single_phase_pll1_integrator3__out;
double _ess_inverter_controller_single_phase_pll1_integrator4__out;
double _ess_inverter_controller_single_phase_pll1_integrator5__out;
double _ess_inverter_controller_single_phase_pll1_integrator6__out;
double _ess_inverter_controller_single_phase_pll1_integrator7__out;
double _ess_inverter_controller_single_phase_pll1_integrator8__out;
double _ess_inverter_controller_single_phase_pll1_integrator9__out;
double _ess_inverter_controller_single_phase_pll1_trigonometric_function1__out;
double _ess_inverter_controller_single_phase_pll1_const__out = 376.99111843077515;
X_Int32 _ess_inverter_controller_charge__out;
double _ess_inverter_e_va1__out;
double _ess_inverter_i_ia1__out;
double _ess_inverter_io_ia1__out;
double _ess_inverter_power_meas_gain4__out;
double _ess_inverter_power_meas_gain5__out;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ess_inverter_vdc_va1__out;
double _ess_li_battery_idc_ia1__out;
double _ess_li_battery_li_cells_series_1_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_1_idc_ia1__out;
double _ess_li_battery_li_cells_series_1_unit_delay1__out;
double _ess_li_battery_li_cells_series_1_unit_delay2__out;
double _ess_li_battery_li_cells_series_1_unit_delay3__out;
double _ess_li_battery_li_cells_series_1_unit_delay4__out;
double _ess_li_battery_li_cells_series_2_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_2_idc_ia1__out;
double _ess_li_battery_li_cells_series_2_unit_delay1__out;
double _ess_li_battery_li_cells_series_2_unit_delay2__out;
double _ess_li_battery_li_cells_series_2_unit_delay3__out;
double _ess_li_battery_li_cells_series_2_unit_delay4__out;
double _ess_li_battery_li_cells_series_3_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_3_idc_ia1__out;
double _ess_li_battery_li_cells_series_3_unit_delay1__out;
double _ess_li_battery_li_cells_series_3_unit_delay2__out;
double _ess_li_battery_li_cells_series_3_unit_delay3__out;
double _ess_li_battery_li_cells_series_3_unit_delay4__out;
double _ess_li_battery_li_cells_series_4_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_4_idc_ia1__out;
double _ess_li_battery_li_cells_series_4_unit_delay1__out;
double _ess_li_battery_li_cells_series_4_unit_delay2__out;
double _ess_li_battery_li_cells_series_4_unit_delay3__out;
double _ess_li_battery_li_cells_series_4_unit_delay4__out;
double _ess_li_battery_li_cells_series_5_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_5_idc_ia1__out;
double _ess_li_battery_li_cells_series_5_unit_delay1__out;
double _ess_li_battery_li_cells_series_5_unit_delay2__out;
double _ess_li_battery_li_cells_series_5_unit_delay3__out;
double _ess_li_battery_li_cells_series_5_unit_delay4__out;
double _ess_li_battery_li_cells_series_6_constant1__out = 303.15;
double _ess_li_battery_li_cells_series_6_idc_ia1__out;
double _ess_li_battery_li_cells_series_6_unit_delay1__out;
double _ess_li_battery_li_cells_series_6_unit_delay2__out;
double _ess_li_battery_li_cells_series_6_unit_delay3__out;
double _ess_li_battery_li_cells_series_6_unit_delay4__out;
double _ess_li_battery_product1__out;
double _ess_li_battery_vdc_va1__out;
double _ess_measurement_ia_ia1__out;
double _ess_measurement_single_phase_power_meter1_radian__out = 0.0174533;
double _ess_measurement_va_va1__out;
double _ev_charging_station_inverter_controller_constant2__out = 1.0;
double _ev_charging_station_inverter_controller_constant3__out = 3.141592653589793;
double _ev_charging_station_inverter_controller_constant4__out = 2e-05;
double _ev_charging_station_inverter_controller_constant5__out = 0.0;
double _ev_charging_station_inverter_controller_constant6__out = -10.0;
double _ev_charging_station_inverter_controller_constant7__out = -10.0;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_constant2__out = 2;
double _ev_charging_station_inverter_controller_single_phase_pll1_i__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_trigonometric_function1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_const__out = 376.99111843077515;
double _ev_charging_station_inverter_e_va1__out;
double _ev_charging_station_inverter_i_ia1__out;
double _ev_charging_station_inverter_io_ia1__out;
double _ev_charging_station_inverter_power_meas_gain4__out;
double _ev_charging_station_inverter_power_meas_gain5__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ev_charging_station_inverter_vdc_va1__out;
double _ev_charging_station_li_battery_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_1_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_1_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__out;
double _ev_charging_station_li_battery_li_cells_series_2_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_2_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__out;
double _ev_charging_station_li_battery_li_cells_series_3_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_3_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__out;
double _ev_charging_station_li_battery_li_cells_series_4_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_4_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__out;
double _ev_charging_station_li_battery_li_cells_series_5_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_5_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__out;
double _ev_charging_station_li_battery_li_cells_series_6_constant1__out = 303.15;
double _ev_charging_station_li_battery_li_cells_series_6_idc_ia1__out;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__out;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__out;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__out;
double _ev_charging_station_li_battery_product1__out;
double _ev_charging_station_li_battery_vdc_va1__out;
double _ev_charging_station_measurement_ia_ia1__out;
double _ev_charging_station_measurement_single_phase_power_meter1_radian__out = 0.0174533;
double _ev_charging_station_measurement_va_va1__out;
double _measurement_ia_ia1__out;
double _measurement_single_phase_power_meter1_radian__out = 0.0174533;
double _measurement_va_va1__out;
double _vs_limit1__out;
double _vs_limit2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _ess_inverter_controller_c_function2__charge;
double _ess_inverter_controller_c_function2__ref;


double _ess_inverter_controller_c_function2__out;
X_Int32 _ess_inverter_controller_c_function1__charge;
double _ess_inverter_controller_c_function1__ref;


double _ess_inverter_controller_c_function1__out;
double _ess_inverter_controller_gain25__out;
double _ess_inverter_controller_single_phase_pll1_c_function1__theta_dq;
double _ess_inverter_controller_single_phase_pll1_c_function1__va;
double _ess_inverter_controller_single_phase_pll1_c_function1__vb;


double _ess_inverter_controller_single_phase_pll1_c_function1__vd;
double _ess_inverter_controller_single_phase_pll1_c_function1__vq;
double _ess_inverter_controller_single_phase_pll1_sum4__out;
double _ess_inverter_controller_single_phase_pll1_product2__out;
double _ess_inverter_controller_single_phase_pll1_w_to_f__out;
double _ess_inverter_controller_single_phase_pll1_sum9__out;
double _ess_inverter_controller_single_phase_pll1_sum11__out;
double _ess_inverter_controller_single_phase_pll1_sum13__out;
double _ess_inverter_controller_single_phase_pll1_sum14__out;
double _ess_inverter_controller_hilbert_transform__out;
double _ess_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9924884953368251, 1.0};
double _ess_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9924884953368251};
double _ess_inverter_controller_hilbert_transform__a_sum;
double _ess_inverter_controller_hilbert_transform__b_sum;
double _ess_inverter_controller_hilbert_transform__delay_line_in;
X_UnInt32 _ess_inverter_controller_hilbert_transform__i;
double _ess_inverter_controller_single_phase_pll1_sum1__out;
double _ess_inverter_controller_hilbert_transform1__out;
double _ess_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9924884953368251, 1.0};
double _ess_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9924884953368251};
double _ess_inverter_controller_hilbert_transform1__a_sum;
double _ess_inverter_controller_hilbert_transform1__b_sum;
double _ess_inverter_controller_hilbert_transform1__delay_line_in;
X_UnInt32 _ess_inverter_controller_hilbert_transform1__i;
double _ess_inverter_power_meas_gain6__out;
double _ess_inverter_lpf_dc__out;
double _ess_inverter_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_lpf_dc__a_sum;
double _ess_inverter_lpf_dc__b_sum;
double _ess_inverter_lpf_dc__delay_line_in;
X_UnInt32 _ess_inverter_lpf_dc__i;
double _ess_li_battery_lpf_dc3__out;
double _ess_li_battery_lpf_dc3__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_li_battery_lpf_dc3__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_li_battery_lpf_dc3__a_sum;
double _ess_li_battery_lpf_dc3__b_sum;
double _ess_li_battery_lpf_dc3__delay_line_in;
X_UnInt32 _ess_li_battery_lpf_dc3__i;
double _ess_li_battery_li_cells_series_1_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_1_cq_lut__value;
double _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_1_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_1_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_1_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_1_cq_lut__fraction;

double _ess_li_battery_li_cells_series_1_lpf_dc1__out;
double _ess_li_battery_li_cells_series_1_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_1_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_1_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_1_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_1_lpf_dc1__i;
double _ess_li_battery_li_cells_series_1_c1_lut__value;
double _ess_li_battery_li_cells_series_1_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_1_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_1_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_1_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_1_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_1_c1_lut__down_x;
int _ess_li_battery_li_cells_series_1_c1_lut__down_y;
int _ess_li_battery_li_cells_series_1_c1_lut__up_x;
int _ess_li_battery_li_cells_series_1_c1_lut__up_y;

double _ess_li_battery_li_cells_series_1_c1_lut__data_00;
double _ess_li_battery_li_cells_series_1_c1_lut__data_01;
double _ess_li_battery_li_cells_series_1_c1_lut__data_10;
double _ess_li_battery_li_cells_series_1_c1_lut__data_11;

double _ess_li_battery_li_cells_series_1_c1_lut__data_0;
double _ess_li_battery_li_cells_series_1_c1_lut__data_1;

double _ess_li_battery_li_cells_series_1_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_1_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_1_em_lut__value;
double _ess_li_battery_li_cells_series_1_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_1_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_1_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_1_em_lut__x_addr;
double _ess_li_battery_li_cells_series_1_em_lut__y_addr;
int _ess_li_battery_li_cells_series_1_em_lut__down_x;
int _ess_li_battery_li_cells_series_1_em_lut__down_y;
int _ess_li_battery_li_cells_series_1_em_lut__up_x;
int _ess_li_battery_li_cells_series_1_em_lut__up_y;

double _ess_li_battery_li_cells_series_1_em_lut__data_00;
double _ess_li_battery_li_cells_series_1_em_lut__data_01;
double _ess_li_battery_li_cells_series_1_em_lut__data_10;
double _ess_li_battery_li_cells_series_1_em_lut__data_11;

double _ess_li_battery_li_cells_series_1_em_lut__data_0;
double _ess_li_battery_li_cells_series_1_em_lut__data_1;

double _ess_li_battery_li_cells_series_1_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_1_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_1_r0_lut__value;
double _ess_li_battery_li_cells_series_1_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_1_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_1_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_1_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_1_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_1_r0_lut__down_x;
int _ess_li_battery_li_cells_series_1_r0_lut__down_y;
int _ess_li_battery_li_cells_series_1_r0_lut__up_x;
int _ess_li_battery_li_cells_series_1_r0_lut__up_y;

double _ess_li_battery_li_cells_series_1_r0_lut__data_00;
double _ess_li_battery_li_cells_series_1_r0_lut__data_01;
double _ess_li_battery_li_cells_series_1_r0_lut__data_10;
double _ess_li_battery_li_cells_series_1_r0_lut__data_11;

double _ess_li_battery_li_cells_series_1_r0_lut__data_0;
double _ess_li_battery_li_cells_series_1_r0_lut__data_1;

double _ess_li_battery_li_cells_series_1_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_1_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_1_r1_lut__value;
double _ess_li_battery_li_cells_series_1_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_1_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_1_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_1_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_1_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_1_r1_lut__down_x;
int _ess_li_battery_li_cells_series_1_r1_lut__down_y;
int _ess_li_battery_li_cells_series_1_r1_lut__up_x;
int _ess_li_battery_li_cells_series_1_r1_lut__up_y;

double _ess_li_battery_li_cells_series_1_r1_lut__data_00;
double _ess_li_battery_li_cells_series_1_r1_lut__data_01;
double _ess_li_battery_li_cells_series_1_r1_lut__data_10;
double _ess_li_battery_li_cells_series_1_r1_lut__data_11;

double _ess_li_battery_li_cells_series_1_r1_lut__data_0;
double _ess_li_battery_li_cells_series_1_r1_lut__data_1;

double _ess_li_battery_li_cells_series_1_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_1_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_1_c1_reciprocal__out;
double _ess_li_battery_li_cells_series_2_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_2_cq_lut__value;
double _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_2_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_2_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_2_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_2_cq_lut__fraction;

double _ess_li_battery_li_cells_series_2_lpf_dc1__out;
double _ess_li_battery_li_cells_series_2_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_2_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_2_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_2_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_2_lpf_dc1__i;
double _ess_li_battery_li_cells_series_2_c1_lut__value;
double _ess_li_battery_li_cells_series_2_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_2_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_2_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_2_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_2_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_2_c1_lut__down_x;
int _ess_li_battery_li_cells_series_2_c1_lut__down_y;
int _ess_li_battery_li_cells_series_2_c1_lut__up_x;
int _ess_li_battery_li_cells_series_2_c1_lut__up_y;

double _ess_li_battery_li_cells_series_2_c1_lut__data_00;
double _ess_li_battery_li_cells_series_2_c1_lut__data_01;
double _ess_li_battery_li_cells_series_2_c1_lut__data_10;
double _ess_li_battery_li_cells_series_2_c1_lut__data_11;

double _ess_li_battery_li_cells_series_2_c1_lut__data_0;
double _ess_li_battery_li_cells_series_2_c1_lut__data_1;

double _ess_li_battery_li_cells_series_2_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_2_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_2_em_lut__value;
double _ess_li_battery_li_cells_series_2_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_2_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_2_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_2_em_lut__x_addr;
double _ess_li_battery_li_cells_series_2_em_lut__y_addr;
int _ess_li_battery_li_cells_series_2_em_lut__down_x;
int _ess_li_battery_li_cells_series_2_em_lut__down_y;
int _ess_li_battery_li_cells_series_2_em_lut__up_x;
int _ess_li_battery_li_cells_series_2_em_lut__up_y;

double _ess_li_battery_li_cells_series_2_em_lut__data_00;
double _ess_li_battery_li_cells_series_2_em_lut__data_01;
double _ess_li_battery_li_cells_series_2_em_lut__data_10;
double _ess_li_battery_li_cells_series_2_em_lut__data_11;

double _ess_li_battery_li_cells_series_2_em_lut__data_0;
double _ess_li_battery_li_cells_series_2_em_lut__data_1;

double _ess_li_battery_li_cells_series_2_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_2_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_2_r0_lut__value;
double _ess_li_battery_li_cells_series_2_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_2_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_2_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_2_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_2_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_2_r0_lut__down_x;
int _ess_li_battery_li_cells_series_2_r0_lut__down_y;
int _ess_li_battery_li_cells_series_2_r0_lut__up_x;
int _ess_li_battery_li_cells_series_2_r0_lut__up_y;

double _ess_li_battery_li_cells_series_2_r0_lut__data_00;
double _ess_li_battery_li_cells_series_2_r0_lut__data_01;
double _ess_li_battery_li_cells_series_2_r0_lut__data_10;
double _ess_li_battery_li_cells_series_2_r0_lut__data_11;

double _ess_li_battery_li_cells_series_2_r0_lut__data_0;
double _ess_li_battery_li_cells_series_2_r0_lut__data_1;

double _ess_li_battery_li_cells_series_2_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_2_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_2_r1_lut__value;
double _ess_li_battery_li_cells_series_2_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_2_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_2_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_2_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_2_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_2_r1_lut__down_x;
int _ess_li_battery_li_cells_series_2_r1_lut__down_y;
int _ess_li_battery_li_cells_series_2_r1_lut__up_x;
int _ess_li_battery_li_cells_series_2_r1_lut__up_y;

double _ess_li_battery_li_cells_series_2_r1_lut__data_00;
double _ess_li_battery_li_cells_series_2_r1_lut__data_01;
double _ess_li_battery_li_cells_series_2_r1_lut__data_10;
double _ess_li_battery_li_cells_series_2_r1_lut__data_11;

double _ess_li_battery_li_cells_series_2_r1_lut__data_0;
double _ess_li_battery_li_cells_series_2_r1_lut__data_1;

double _ess_li_battery_li_cells_series_2_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_2_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_2_c1_reciprocal__out;
double _ess_li_battery_li_cells_series_3_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_3_cq_lut__value;
double _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_3_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_3_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_3_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_3_cq_lut__fraction;

double _ess_li_battery_li_cells_series_3_lpf_dc1__out;
double _ess_li_battery_li_cells_series_3_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_3_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_3_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_3_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_3_lpf_dc1__i;
double _ess_li_battery_li_cells_series_3_c1_lut__value;
double _ess_li_battery_li_cells_series_3_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_3_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_3_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_3_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_3_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_3_c1_lut__down_x;
int _ess_li_battery_li_cells_series_3_c1_lut__down_y;
int _ess_li_battery_li_cells_series_3_c1_lut__up_x;
int _ess_li_battery_li_cells_series_3_c1_lut__up_y;

double _ess_li_battery_li_cells_series_3_c1_lut__data_00;
double _ess_li_battery_li_cells_series_3_c1_lut__data_01;
double _ess_li_battery_li_cells_series_3_c1_lut__data_10;
double _ess_li_battery_li_cells_series_3_c1_lut__data_11;

double _ess_li_battery_li_cells_series_3_c1_lut__data_0;
double _ess_li_battery_li_cells_series_3_c1_lut__data_1;

double _ess_li_battery_li_cells_series_3_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_3_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_3_em_lut__value;
double _ess_li_battery_li_cells_series_3_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_3_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_3_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_3_em_lut__x_addr;
double _ess_li_battery_li_cells_series_3_em_lut__y_addr;
int _ess_li_battery_li_cells_series_3_em_lut__down_x;
int _ess_li_battery_li_cells_series_3_em_lut__down_y;
int _ess_li_battery_li_cells_series_3_em_lut__up_x;
int _ess_li_battery_li_cells_series_3_em_lut__up_y;

double _ess_li_battery_li_cells_series_3_em_lut__data_00;
double _ess_li_battery_li_cells_series_3_em_lut__data_01;
double _ess_li_battery_li_cells_series_3_em_lut__data_10;
double _ess_li_battery_li_cells_series_3_em_lut__data_11;

double _ess_li_battery_li_cells_series_3_em_lut__data_0;
double _ess_li_battery_li_cells_series_3_em_lut__data_1;

double _ess_li_battery_li_cells_series_3_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_3_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_3_r0_lut__value;
double _ess_li_battery_li_cells_series_3_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_3_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_3_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_3_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_3_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_3_r0_lut__down_x;
int _ess_li_battery_li_cells_series_3_r0_lut__down_y;
int _ess_li_battery_li_cells_series_3_r0_lut__up_x;
int _ess_li_battery_li_cells_series_3_r0_lut__up_y;

double _ess_li_battery_li_cells_series_3_r0_lut__data_00;
double _ess_li_battery_li_cells_series_3_r0_lut__data_01;
double _ess_li_battery_li_cells_series_3_r0_lut__data_10;
double _ess_li_battery_li_cells_series_3_r0_lut__data_11;

double _ess_li_battery_li_cells_series_3_r0_lut__data_0;
double _ess_li_battery_li_cells_series_3_r0_lut__data_1;

double _ess_li_battery_li_cells_series_3_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_3_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_3_r1_lut__value;
double _ess_li_battery_li_cells_series_3_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_3_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_3_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_3_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_3_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_3_r1_lut__down_x;
int _ess_li_battery_li_cells_series_3_r1_lut__down_y;
int _ess_li_battery_li_cells_series_3_r1_lut__up_x;
int _ess_li_battery_li_cells_series_3_r1_lut__up_y;

double _ess_li_battery_li_cells_series_3_r1_lut__data_00;
double _ess_li_battery_li_cells_series_3_r1_lut__data_01;
double _ess_li_battery_li_cells_series_3_r1_lut__data_10;
double _ess_li_battery_li_cells_series_3_r1_lut__data_11;

double _ess_li_battery_li_cells_series_3_r1_lut__data_0;
double _ess_li_battery_li_cells_series_3_r1_lut__data_1;

double _ess_li_battery_li_cells_series_3_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_3_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_3_c1_reciprocal__out;
double _ess_li_battery_li_cells_series_4_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_4_cq_lut__value;
double _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_4_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_4_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_4_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_4_cq_lut__fraction;

double _ess_li_battery_li_cells_series_4_lpf_dc1__out;
double _ess_li_battery_li_cells_series_4_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_4_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_4_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_4_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_4_lpf_dc1__i;
double _ess_li_battery_li_cells_series_4_c1_lut__value;
double _ess_li_battery_li_cells_series_4_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_4_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_4_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_4_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_4_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_4_c1_lut__down_x;
int _ess_li_battery_li_cells_series_4_c1_lut__down_y;
int _ess_li_battery_li_cells_series_4_c1_lut__up_x;
int _ess_li_battery_li_cells_series_4_c1_lut__up_y;

double _ess_li_battery_li_cells_series_4_c1_lut__data_00;
double _ess_li_battery_li_cells_series_4_c1_lut__data_01;
double _ess_li_battery_li_cells_series_4_c1_lut__data_10;
double _ess_li_battery_li_cells_series_4_c1_lut__data_11;

double _ess_li_battery_li_cells_series_4_c1_lut__data_0;
double _ess_li_battery_li_cells_series_4_c1_lut__data_1;

double _ess_li_battery_li_cells_series_4_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_4_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_4_em_lut__value;
double _ess_li_battery_li_cells_series_4_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_4_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_4_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_4_em_lut__x_addr;
double _ess_li_battery_li_cells_series_4_em_lut__y_addr;
int _ess_li_battery_li_cells_series_4_em_lut__down_x;
int _ess_li_battery_li_cells_series_4_em_lut__down_y;
int _ess_li_battery_li_cells_series_4_em_lut__up_x;
int _ess_li_battery_li_cells_series_4_em_lut__up_y;

double _ess_li_battery_li_cells_series_4_em_lut__data_00;
double _ess_li_battery_li_cells_series_4_em_lut__data_01;
double _ess_li_battery_li_cells_series_4_em_lut__data_10;
double _ess_li_battery_li_cells_series_4_em_lut__data_11;

double _ess_li_battery_li_cells_series_4_em_lut__data_0;
double _ess_li_battery_li_cells_series_4_em_lut__data_1;

double _ess_li_battery_li_cells_series_4_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_4_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_4_r0_lut__value;
double _ess_li_battery_li_cells_series_4_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_4_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_4_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_4_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_4_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_4_r0_lut__down_x;
int _ess_li_battery_li_cells_series_4_r0_lut__down_y;
int _ess_li_battery_li_cells_series_4_r0_lut__up_x;
int _ess_li_battery_li_cells_series_4_r0_lut__up_y;

double _ess_li_battery_li_cells_series_4_r0_lut__data_00;
double _ess_li_battery_li_cells_series_4_r0_lut__data_01;
double _ess_li_battery_li_cells_series_4_r0_lut__data_10;
double _ess_li_battery_li_cells_series_4_r0_lut__data_11;

double _ess_li_battery_li_cells_series_4_r0_lut__data_0;
double _ess_li_battery_li_cells_series_4_r0_lut__data_1;

double _ess_li_battery_li_cells_series_4_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_4_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_4_r1_lut__value;
double _ess_li_battery_li_cells_series_4_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_4_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_4_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_4_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_4_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_4_r1_lut__down_x;
int _ess_li_battery_li_cells_series_4_r1_lut__down_y;
int _ess_li_battery_li_cells_series_4_r1_lut__up_x;
int _ess_li_battery_li_cells_series_4_r1_lut__up_y;

double _ess_li_battery_li_cells_series_4_r1_lut__data_00;
double _ess_li_battery_li_cells_series_4_r1_lut__data_01;
double _ess_li_battery_li_cells_series_4_r1_lut__data_10;
double _ess_li_battery_li_cells_series_4_r1_lut__data_11;

double _ess_li_battery_li_cells_series_4_r1_lut__data_0;
double _ess_li_battery_li_cells_series_4_r1_lut__data_1;

double _ess_li_battery_li_cells_series_4_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_4_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_4_c1_reciprocal__out;
double _ess_li_battery_li_cells_series_5_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_5_cq_lut__value;
double _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_5_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_5_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_5_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_5_cq_lut__fraction;

double _ess_li_battery_li_cells_series_5_lpf_dc1__out;
double _ess_li_battery_li_cells_series_5_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_5_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_5_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_5_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_5_lpf_dc1__i;
double _ess_li_battery_li_cells_series_5_c1_lut__value;
double _ess_li_battery_li_cells_series_5_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_5_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_5_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_5_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_5_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_5_c1_lut__down_x;
int _ess_li_battery_li_cells_series_5_c1_lut__down_y;
int _ess_li_battery_li_cells_series_5_c1_lut__up_x;
int _ess_li_battery_li_cells_series_5_c1_lut__up_y;

double _ess_li_battery_li_cells_series_5_c1_lut__data_00;
double _ess_li_battery_li_cells_series_5_c1_lut__data_01;
double _ess_li_battery_li_cells_series_5_c1_lut__data_10;
double _ess_li_battery_li_cells_series_5_c1_lut__data_11;

double _ess_li_battery_li_cells_series_5_c1_lut__data_0;
double _ess_li_battery_li_cells_series_5_c1_lut__data_1;

double _ess_li_battery_li_cells_series_5_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_5_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_5_em_lut__value;
double _ess_li_battery_li_cells_series_5_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_5_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_5_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_5_em_lut__x_addr;
double _ess_li_battery_li_cells_series_5_em_lut__y_addr;
int _ess_li_battery_li_cells_series_5_em_lut__down_x;
int _ess_li_battery_li_cells_series_5_em_lut__down_y;
int _ess_li_battery_li_cells_series_5_em_lut__up_x;
int _ess_li_battery_li_cells_series_5_em_lut__up_y;

double _ess_li_battery_li_cells_series_5_em_lut__data_00;
double _ess_li_battery_li_cells_series_5_em_lut__data_01;
double _ess_li_battery_li_cells_series_5_em_lut__data_10;
double _ess_li_battery_li_cells_series_5_em_lut__data_11;

double _ess_li_battery_li_cells_series_5_em_lut__data_0;
double _ess_li_battery_li_cells_series_5_em_lut__data_1;

double _ess_li_battery_li_cells_series_5_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_5_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_5_r0_lut__value;
double _ess_li_battery_li_cells_series_5_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_5_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_5_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_5_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_5_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_5_r0_lut__down_x;
int _ess_li_battery_li_cells_series_5_r0_lut__down_y;
int _ess_li_battery_li_cells_series_5_r0_lut__up_x;
int _ess_li_battery_li_cells_series_5_r0_lut__up_y;

double _ess_li_battery_li_cells_series_5_r0_lut__data_00;
double _ess_li_battery_li_cells_series_5_r0_lut__data_01;
double _ess_li_battery_li_cells_series_5_r0_lut__data_10;
double _ess_li_battery_li_cells_series_5_r0_lut__data_11;

double _ess_li_battery_li_cells_series_5_r0_lut__data_0;
double _ess_li_battery_li_cells_series_5_r0_lut__data_1;

double _ess_li_battery_li_cells_series_5_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_5_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_5_r1_lut__value;
double _ess_li_battery_li_cells_series_5_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_5_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_5_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_5_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_5_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_5_r1_lut__down_x;
int _ess_li_battery_li_cells_series_5_r1_lut__down_y;
int _ess_li_battery_li_cells_series_5_r1_lut__up_x;
int _ess_li_battery_li_cells_series_5_r1_lut__up_y;

double _ess_li_battery_li_cells_series_5_r1_lut__data_00;
double _ess_li_battery_li_cells_series_5_r1_lut__data_01;
double _ess_li_battery_li_cells_series_5_r1_lut__data_10;
double _ess_li_battery_li_cells_series_5_r1_lut__data_11;

double _ess_li_battery_li_cells_series_5_r1_lut__data_0;
double _ess_li_battery_li_cells_series_5_r1_lut__data_1;

double _ess_li_battery_li_cells_series_5_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_5_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_5_c1_reciprocal__out;
double _ess_li_battery_li_cells_series_6_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ess_li_battery_li_cells_series_6_cq_lut__value;
double _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ess_li_battery_li_cells_series_6_cq_lut__leftIndex;
X_Int32 _ess_li_battery_li_cells_series_6_cq_lut__rightIndex;
X_Int32 _ess_li_battery_li_cells_series_6_cq_lut__curAddr;
double _ess_li_battery_li_cells_series_6_cq_lut__fraction;

double _ess_li_battery_li_cells_series_6_lpf_dc1__out;
double _ess_li_battery_li_cells_series_6_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ess_li_battery_li_cells_series_6_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ess_li_battery_li_cells_series_6_lpf_dc1__a_sum;
double _ess_li_battery_li_cells_series_6_lpf_dc1__b_sum;
double _ess_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
X_UnInt32 _ess_li_battery_li_cells_series_6_lpf_dc1__i;
double _ess_li_battery_li_cells_series_6_c1_lut__value;
double _ess_li_battery_li_cells_series_6_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ess_li_battery_li_cells_series_6_c1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_6_c1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_6_c1_lut__x_addr;
double _ess_li_battery_li_cells_series_6_c1_lut__y_addr;
int _ess_li_battery_li_cells_series_6_c1_lut__down_x;
int _ess_li_battery_li_cells_series_6_c1_lut__down_y;
int _ess_li_battery_li_cells_series_6_c1_lut__up_x;
int _ess_li_battery_li_cells_series_6_c1_lut__up_y;

double _ess_li_battery_li_cells_series_6_c1_lut__data_00;
double _ess_li_battery_li_cells_series_6_c1_lut__data_01;
double _ess_li_battery_li_cells_series_6_c1_lut__data_10;
double _ess_li_battery_li_cells_series_6_c1_lut__data_11;

double _ess_li_battery_li_cells_series_6_c1_lut__data_0;
double _ess_li_battery_li_cells_series_6_c1_lut__data_1;

double _ess_li_battery_li_cells_series_6_c1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_6_c1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_6_em_lut__value;
double _ess_li_battery_li_cells_series_6_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ess_li_battery_li_cells_series_6_em_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_6_em_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_6_em_lut__x_addr;
double _ess_li_battery_li_cells_series_6_em_lut__y_addr;
int _ess_li_battery_li_cells_series_6_em_lut__down_x;
int _ess_li_battery_li_cells_series_6_em_lut__down_y;
int _ess_li_battery_li_cells_series_6_em_lut__up_x;
int _ess_li_battery_li_cells_series_6_em_lut__up_y;

double _ess_li_battery_li_cells_series_6_em_lut__data_00;
double _ess_li_battery_li_cells_series_6_em_lut__data_01;
double _ess_li_battery_li_cells_series_6_em_lut__data_10;
double _ess_li_battery_li_cells_series_6_em_lut__data_11;

double _ess_li_battery_li_cells_series_6_em_lut__data_0;
double _ess_li_battery_li_cells_series_6_em_lut__data_1;

double _ess_li_battery_li_cells_series_6_em_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_6_em_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_6_r0_lut__value;
double _ess_li_battery_li_cells_series_6_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ess_li_battery_li_cells_series_6_r0_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_6_r0_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_6_r0_lut__x_addr;
double _ess_li_battery_li_cells_series_6_r0_lut__y_addr;
int _ess_li_battery_li_cells_series_6_r0_lut__down_x;
int _ess_li_battery_li_cells_series_6_r0_lut__down_y;
int _ess_li_battery_li_cells_series_6_r0_lut__up_x;
int _ess_li_battery_li_cells_series_6_r0_lut__up_y;

double _ess_li_battery_li_cells_series_6_r0_lut__data_00;
double _ess_li_battery_li_cells_series_6_r0_lut__data_01;
double _ess_li_battery_li_cells_series_6_r0_lut__data_10;
double _ess_li_battery_li_cells_series_6_r0_lut__data_11;

double _ess_li_battery_li_cells_series_6_r0_lut__data_0;
double _ess_li_battery_li_cells_series_6_r0_lut__data_1;

double _ess_li_battery_li_cells_series_6_r0_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_6_r0_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_6_r1_lut__value;
double _ess_li_battery_li_cells_series_6_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ess_li_battery_li_cells_series_6_r1_lut__x_int_coeff;
double _ess_li_battery_li_cells_series_6_r1_lut__y_int_coeff;

double _ess_li_battery_li_cells_series_6_r1_lut__x_addr;
double _ess_li_battery_li_cells_series_6_r1_lut__y_addr;
int _ess_li_battery_li_cells_series_6_r1_lut__down_x;
int _ess_li_battery_li_cells_series_6_r1_lut__down_y;
int _ess_li_battery_li_cells_series_6_r1_lut__up_x;
int _ess_li_battery_li_cells_series_6_r1_lut__up_y;

double _ess_li_battery_li_cells_series_6_r1_lut__data_00;
double _ess_li_battery_li_cells_series_6_r1_lut__data_01;
double _ess_li_battery_li_cells_series_6_r1_lut__data_10;
double _ess_li_battery_li_cells_series_6_r1_lut__data_11;

double _ess_li_battery_li_cells_series_6_r1_lut__data_0;
double _ess_li_battery_li_cells_series_6_r1_lut__data_1;

double _ess_li_battery_li_cells_series_6_r1_lut__input_x_clipped;
double _ess_li_battery_li_cells_series_6_r1_lut__input_y_clipped;

double _ess_li_battery_li_cells_series_6_c1_reciprocal__out;
double _ess_li_battery_lpf_dc2__out;
double _ess_li_battery_lpf_dc2__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_li_battery_lpf_dc2__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_li_battery_lpf_dc2__a_sum;
double _ess_li_battery_lpf_dc2__b_sum;
double _ess_li_battery_lpf_dc2__delay_line_in;
X_UnInt32 _ess_li_battery_lpf_dc2__i;
double _ess_measurement_single_phase_power_meter1_ia_rms__out;
double _ess_measurement_single_phase_power_meter1_va_rms__out;

double _ess_measurement_single_phase_power_meter1_phi__phase_diff;
double _ess_measurement_single_phase_power_meter1_phi__correction_ref;
double _ess_measurement_single_phase_power_meter1_phi__correction_in;
X_UnInt32 _ess_measurement_single_phase_power_meter1_phi__zc_flag_ref;
X_UnInt32 _ess_measurement_single_phase_power_meter1_phi__zc_flag_in;
X_UnInt32 _ess_measurement_single_phase_power_meter1_phi__no_zc_flag_in;
double _ess_measurement_single_phase_power_meter1_phi__filtered_ref;
double _ess_measurement_single_phase_power_meter1_phi__filtered_in;

X_Int32 _ev_charging_station_inverter_controller_c_function1__k;
double _ev_charging_station_inverter_controller_c_function1__Pref;


double _ev_charging_station_inverter_controller_c_function1__out;
double _ev_charging_station_inverter_controller_gain33__out;
double _ev_charging_station_inverter_controller_gain34__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
double _ev_charging_station_inverter_controller_gain22__out;
double _ev_charging_station_inverter_controller_gain32__out;
double _ev_charging_station_inverter_controller_gain25__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq;
double _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__va;
double _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vb;


double _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vd;
double _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vq;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum4__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product2__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_w_to_f__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum9__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum11__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum13__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum14__out;
double _ev_charging_station_inverter_controller_hilbert_transform__out;
double _ev_charging_station_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9924884953368251, 1.0};
double _ev_charging_station_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9924884953368251};
double _ev_charging_station_inverter_controller_hilbert_transform__a_sum;
double _ev_charging_station_inverter_controller_hilbert_transform__b_sum;
double _ev_charging_station_inverter_controller_hilbert_transform__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_hilbert_transform__i;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum1__out;
double _ev_charging_station_inverter_controller_hilbert_transform1__out;
double _ev_charging_station_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9924884953368251, 1.0};
double _ev_charging_station_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9924884953368251};
double _ev_charging_station_inverter_controller_hilbert_transform1__a_sum;
double _ev_charging_station_inverter_controller_hilbert_transform1__b_sum;
double _ev_charging_station_inverter_controller_hilbert_transform1__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_hilbert_transform1__i;
double _ev_charging_station_inverter_power_meas_gain6__out;
double _ev_charging_station_inverter_lpf_dc__out;
double _ev_charging_station_inverter_lpf_dc__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_lpf_dc__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_lpf_dc__a_sum;
double _ev_charging_station_inverter_lpf_dc__b_sum;
double _ev_charging_station_inverter_lpf_dc__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_lpf_dc__i;
double _ev_charging_station_li_battery_lpf_dc3__out;
double _ev_charging_station_li_battery_lpf_dc3__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_li_battery_lpf_dc3__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_li_battery_lpf_dc3__a_sum;
double _ev_charging_station_li_battery_lpf_dc3__b_sum;
double _ev_charging_station_li_battery_lpf_dc3__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_lpf_dc3__i;
double _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_1_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_1_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_1_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_1_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_1_c1_reciprocal__out;
double _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_2_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_2_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_2_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_2_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_2_c1_reciprocal__out;
double _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_3_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_3_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_3_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_3_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_3_c1_reciprocal__out;
double _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_4_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_4_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_4_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_4_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_4_c1_reciprocal__out;
double _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_5_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_5_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_5_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_5_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_5_c1_reciprocal__out;
double _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_table[5] = { 28.0081, 27.81655, 27.625, 27.630325, 27.63565 };
double _ev_charging_station_li_battery_li_cells_series_6_cq_lut__value;
double _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[5] = { 278.15, 285.65, 293.15, 300.65, 308.15 };
X_Int32 _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_6_cq_lut__rightIndex;
X_Int32 _ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr;
double _ev_charging_station_li_battery_li_cells_series_6_cq_lut__fraction;

double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__out;
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_coeff[2] = {0.003131753958361405, 0.003131753958361294};
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_coeff[2] = {1.0, -0.9937364920832772};
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_sum;
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_sum;
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__2d_table[21][5] = {{1913.6, 7180.3, 12447.0, 19257.75, 26068.5}, {3269.6499999999996, 9464.575, 15659.5, 21712.9375, 27766.375}, {4625.7, 11748.849999999999, 18872.0, 24168.125, 29464.25}, {10852.466666666664, 18510.899999999998, 26169.33333333333, 30546.458333333332, 34923.58333333333}, {17079.23333333333, 25272.949999999997, 33466.666666666664, 36924.79166666666, 40382.916666666664}, {23305.999999999993, 32034.999999999993, 40763.99999999999, 43303.12499999999, 45842.24999999999}, {20792.000000000004, 28573.700000000004, 36355.40000000001, 38957.000000000015, 41558.600000000006}, {18278.000000000004, 25112.400000000005, 31946.800000000007, 34610.87500000001, 37274.950000000004}, {15764.000000000004, 21651.100000000006, 27538.200000000008, 30264.750000000007, 32991.30000000001}, {13250.000000000004, 18189.800000000007, 23129.60000000001, 25918.625000000007, 28707.65000000001}, {10736.000000000005, 14728.500000000007, 18721.00000000001, 21572.500000000015, 24424.00000000001}, {12195.999999999996, 16949.39999999999, 21702.79999999999, 25082.29999999999, 28461.79999999999}, {13655.999999999996, 19170.299999999996, 24684.59999999999, 28592.09999999999, 32499.599999999988}, {15115.999999999996, 21391.199999999997, 27666.399999999994, 32101.899999999994, 36537.399999999994}, {16575.999999999996, 23612.09999999999, 30648.19999999999, 35611.69999999999, 40575.19999999998}, {18035.999999999996, 25832.999999999993, 33629.999999999985, 39121.499999999985, 44612.999999999985}, {16107.666666666675, 22323.833333333347, 28540.000000000022, 33260.87500000002, 37981.75000000003}, {14179.33333333334, 18814.66666666668, 23450.000000000015, 27400.250000000022, 31350.500000000022}, {12251.00000000001, 15305.500000000016, 18360.000000000025, 21539.62500000003, 24719.25000000003}, {10636.950000000008, 15756.974999999997, 20876.999999999985, 23819.062499999985, 26761.12499999999}, {9022.900000000007, 16208.449999999997, 23393.99999999999, 26098.49999999999, 28802.999999999993}};
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_6_em_lut__value;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__2d_table[21][5] = {{3.4966, 3.50115, 3.5057, 3.5091125, 3.512525}, {3.5242500000000003, 3.53005, 3.5358500000000004, 3.5374250000000007, 3.5390000000000006}, {3.5519, 3.55895, 3.566, 3.5657375, 3.565475}, {3.5740333333333334, 3.5813, 3.588566666666667, 3.5892041666666668, 3.5898416666666666}, {3.596166666666667, 3.6036500000000005, 3.6111333333333335, 3.6126708333333335, 3.614208333333334}, {3.6183, 3.6260000000000003, 3.6337, 3.6361375000000002, 3.6385750000000003}, {3.6359600000000003, 3.6427300000000002, 3.6495, 3.6520950000000005, 3.65469}, {3.65362, 3.65946, 3.6653000000000002, 3.6680525, 3.670805}, {3.67128, 3.67619, 3.6811, 3.68401, 3.68692}, {3.68894, 3.69292, 3.6969000000000003, 3.6999674999999996, 3.703035}, {3.7066, 3.70965, 3.7127, 3.715925, 3.71915}, {3.7478999999999996, 3.7516199999999995, 3.75534, 3.7587974999999996, 3.7622549999999997}, {3.7891999999999997, 3.7935899999999996, 3.79798, 3.8016699999999997, 3.8053599999999994}, {3.8305, 3.8355599999999996, 3.84062, 3.8445425, 3.8484650000000005}, {3.8718, 3.87753, 3.88326, 3.887415, 3.89157}, {3.9130999999999996, 3.9194999999999998, 3.9258999999999995, 3.9302874999999995, 3.934675}, {3.9669999999999996, 3.97175, 3.9764999999999997, 3.9799749999999996, 3.98345}, {4.0209, 4.024, 4.0271, 4.0296625, 4.032225}, {4.0748, 4.07625, 4.0777, 4.07935, 4.0809999999999995}, {4.13355, 4.134399999999999, 4.135249999999999, 4.136112499999999, 4.136975}, {4.1923, 4.192550000000001, 4.1928, 4.192875, 4.19295}};
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__value;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__2d_table[21][5] = {{0.0117, 0.010100000000000001, 0.0085, 0.0086875, 0.008875}, {0.011350000000000002, 0.009925000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011000000000000001, 0.009750000000000002, 0.0085, 0.0086875, 0.008875000000000001}, {0.011133333333333334, 0.00985, 0.008566666666666667, 0.008754166666666667, 0.008941666666666667}, {0.011266666666666668, 0.00995, 0.008633333333333333, 0.008820833333333333, 0.009008333333333333}, {0.0114, 0.01005, 0.0087, 0.0088875, 0.009075}, {0.01126, 0.00993, 0.0086, 0.008794999999999999, 0.00899}, {0.011120000000000001, 0.009810000000000001, 0.0085, 0.008702499999999998, 0.008905}, {0.01098, 0.00969, 0.008400000000000001, 0.008610000000000001, 0.008820000000000001}, {0.010839999999999999, 0.00957, 0.0083, 0.0085175, 0.008735}, {0.0107, 0.00945, 0.0082, 0.008425000000000002, 0.008650000000000001}, {0.0107, 0.00946, 0.008220000000000002, 0.00846, 0.008700000000000001}, {0.0107, 0.00947, 0.00824, 0.008495, 0.00875}, {0.0107, 0.00948, 0.00826, 0.008530000000000001, 0.0088}, {0.0107, 0.009489999999999998, 0.00828, 0.008565, 0.00885}, {0.0107, 0.009500000000000001, 0.0083, 0.0086, 0.0089}, {0.0109, 0.009633333333333332, 0.008366666666666668, 0.008616666666666667, 0.008866666666666669}, {0.011099999999999999, 0.009766666666666667, 0.008433333333333334, 0.008633333333333333, 0.008833333333333334}, {0.0113, 0.009899999999999999, 0.0085, 0.008650000000000001, 0.0088}, {0.011449999999999998, 0.009975, 0.0085, 0.008650000000000001, 0.0088}, {0.011599999999999997, 0.01005, 0.0085, 0.00865, 0.0088}};
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__value;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__2d_table[21][5] = {{0.0109, 0.0069, 0.0029, 0.0023, 0.0017}, {0.008900000000000002, 0.005775000000000001, 0.0026500000000000004, 0.002125, 0.0016}, {0.006900000000000001, 0.0046500000000000005, 0.0024000000000000002, 0.0019500000000000001, 0.0015}, {0.0061666666666666675, 0.0043166666666666674, 0.0024666666666666665, 0.0020041666666666662, 0.0015416666666666664}, {0.005433333333333334, 0.003983333333333334, 0.002533333333333333, 0.0020583333333333335, 0.0015833333333333333}, {0.004700000000000001, 0.0036500000000000005, 0.0026, 0.0021125, 0.001625}, {0.00444, 0.0034200000000000003, 0.0024000000000000002, 0.001965, 0.0015300000000000001}, {0.0041800000000000006, 0.003190000000000001, 0.0022000000000000006, 0.0018175000000000003, 0.0014350000000000003}, {0.003920000000000001, 0.00296, 0.002, 0.0016700000000000003, 0.00134}, {0.0036600000000000005, 0.0027300000000000007, 0.0018000000000000004, 0.0015225000000000004, 0.0012450000000000002}, {0.0034000000000000007, 0.0025000000000000005, 0.0016000000000000005, 0.0013750000000000004, 0.0011500000000000002}, {0.00338, 0.0025599999999999998, 0.0017399999999999996, 0.0014924999999999997, 0.0012449999999999996}, {0.00336, 0.00262, 0.0018799999999999997, 0.0016099999999999999, 0.0013399999999999996}, {0.00334, 0.00268, 0.0020199999999999997, 0.0017274999999999999, 0.0014349999999999996}, {0.00332, 0.00274, 0.0021599999999999996, 0.0018449999999999996, 0.0015299999999999997}, {0.0033, 0.0027999999999999995, 0.002299999999999999, 0.0019624999999999994, 0.0016249999999999995}, {0.0033000000000000004, 0.0027166666666666676, 0.002133333333333334, 0.001820833333333334, 0.001508333333333334}, {0.0033000000000000004, 0.002633333333333334, 0.0019666666666666673, 0.0016791666666666671, 0.0013916666666666671}, {0.0033, 0.00255, 0.0018000000000000008, 0.0015375000000000007, 0.0012750000000000005}, {0.0030500000000000015, 0.0024000000000000007, 0.0017500000000000003, 0.0015062500000000002, 0.0012625000000000002}, {0.0028000000000000013, 0.0022500000000000007, 0.0017000000000000001, 0.0014750000000000002, 0.0012500000000000002}};
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_int_coeff;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_int_coeff;

double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_addr;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_addr;
int _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x;
int _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y;
int _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_x;
int _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_y;

double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_00;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_01;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_10;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_11;

double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_0;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_1;

double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_x_clipped;
double _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_y_clipped;

double _ev_charging_station_li_battery_li_cells_series_6_c1_reciprocal__out;
double _ev_charging_station_li_battery_lpf_dc2__out;
double _ev_charging_station_li_battery_lpf_dc2__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_li_battery_lpf_dc2__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_li_battery_lpf_dc2__a_sum;
double _ev_charging_station_li_battery_lpf_dc2__b_sum;
double _ev_charging_station_li_battery_lpf_dc2__delay_line_in;
X_UnInt32 _ev_charging_station_li_battery_lpf_dc2__i;
double _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__out;
double _ev_charging_station_measurement_single_phase_power_meter1_va_rms__out;

double _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_diff;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_ref;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_in;
X_UnInt32 _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_ref;
X_UnInt32 _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_in;
X_UnInt32 _ev_charging_station_measurement_single_phase_power_meter1_phi__no_zc_flag_in;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_ref;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_in;

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
double _ess_inverter_controller_gain21__out;
double _ess_inverter_controller_gain22__out;
double _ess_inverter_controller_gain33__out;
double _ess_inverter_controller_c_function4__Ts;
double _ess_inverter_controller_c_function4__in;
double _ess_inverter_controller_c_function4__pi;


double _ess_inverter_controller_c_function4__out;
double _ess_inverter_controller_single_phase_pll1_gain3__out;
double _ess_inverter_controller_single_phase_pll1_math_f1__out;
double _ess_inverter_controller_single_phase_pll1_math_f2__out;
double _ess_inverter_controller_single_phase_pll1_gain5__out;
double _ess_inverter_controller_single_phase_pll1_sum12__out;
double _ess_inverter_controller_single_phase_pll1_gain7__out;
double _ess_inverter_controller_single_phase_pll1_gain8__out;
double _ess_inverter_controller_single_phase_pll1_gain10__out;
double _ess_inverter_controller_single_phase_pll1_gain11__out;
double _ess_inverter_controller_single_phase_pll1_gain2__out;
double _ess_li_battery_li_cells_series_1_c_function__C1_cell;
double _ess_li_battery_li_cells_series_1_c_function__Cq;
double _ess_li_battery_li_cells_series_1_c_function__Em_cell;
double _ess_li_battery_li_cells_series_1_c_function__Idc;
double _ess_li_battery_li_cells_series_1_c_function__R0_cell;
double _ess_li_battery_li_cells_series_1_c_function__R1_cell;


double _ess_li_battery_li_cells_series_1_c_function__C1;
double _ess_li_battery_li_cells_series_1_c_function__R0;
double _ess_li_battery_li_cells_series_1_c_function__R1;
double _ess_li_battery_li_cells_series_1_c_function__SOC;
double _ess_li_battery_li_cells_series_1_c_function__Vdc;
double _ess_li_battery_li_cells_series_2_c_function__C1_cell;
double _ess_li_battery_li_cells_series_2_c_function__Cq;
double _ess_li_battery_li_cells_series_2_c_function__Em_cell;
double _ess_li_battery_li_cells_series_2_c_function__Idc;
double _ess_li_battery_li_cells_series_2_c_function__R0_cell;
double _ess_li_battery_li_cells_series_2_c_function__R1_cell;


double _ess_li_battery_li_cells_series_2_c_function__C1;
double _ess_li_battery_li_cells_series_2_c_function__R0;
double _ess_li_battery_li_cells_series_2_c_function__R1;
double _ess_li_battery_li_cells_series_2_c_function__SOC;
double _ess_li_battery_li_cells_series_2_c_function__Vdc;
double _ess_li_battery_li_cells_series_3_c_function__C1_cell;
double _ess_li_battery_li_cells_series_3_c_function__Cq;
double _ess_li_battery_li_cells_series_3_c_function__Em_cell;
double _ess_li_battery_li_cells_series_3_c_function__Idc;
double _ess_li_battery_li_cells_series_3_c_function__R0_cell;
double _ess_li_battery_li_cells_series_3_c_function__R1_cell;


double _ess_li_battery_li_cells_series_3_c_function__C1;
double _ess_li_battery_li_cells_series_3_c_function__R0;
double _ess_li_battery_li_cells_series_3_c_function__R1;
double _ess_li_battery_li_cells_series_3_c_function__SOC;
double _ess_li_battery_li_cells_series_3_c_function__Vdc;
double _ess_li_battery_li_cells_series_4_c_function__C1_cell;
double _ess_li_battery_li_cells_series_4_c_function__Cq;
double _ess_li_battery_li_cells_series_4_c_function__Em_cell;
double _ess_li_battery_li_cells_series_4_c_function__Idc;
double _ess_li_battery_li_cells_series_4_c_function__R0_cell;
double _ess_li_battery_li_cells_series_4_c_function__R1_cell;


double _ess_li_battery_li_cells_series_4_c_function__C1;
double _ess_li_battery_li_cells_series_4_c_function__R0;
double _ess_li_battery_li_cells_series_4_c_function__R1;
double _ess_li_battery_li_cells_series_4_c_function__SOC;
double _ess_li_battery_li_cells_series_4_c_function__Vdc;
double _ess_li_battery_li_cells_series_5_c_function__C1_cell;
double _ess_li_battery_li_cells_series_5_c_function__Cq;
double _ess_li_battery_li_cells_series_5_c_function__Em_cell;
double _ess_li_battery_li_cells_series_5_c_function__Idc;
double _ess_li_battery_li_cells_series_5_c_function__R0_cell;
double _ess_li_battery_li_cells_series_5_c_function__R1_cell;


double _ess_li_battery_li_cells_series_5_c_function__C1;
double _ess_li_battery_li_cells_series_5_c_function__R0;
double _ess_li_battery_li_cells_series_5_c_function__R1;
double _ess_li_battery_li_cells_series_5_c_function__SOC;
double _ess_li_battery_li_cells_series_5_c_function__Vdc;
double _ess_li_battery_li_cells_series_6_c_function__C1_cell;
double _ess_li_battery_li_cells_series_6_c_function__Cq;
double _ess_li_battery_li_cells_series_6_c_function__Em_cell;
double _ess_li_battery_li_cells_series_6_c_function__Idc;
double _ess_li_battery_li_cells_series_6_c_function__R0_cell;
double _ess_li_battery_li_cells_series_6_c_function__R1_cell;


double _ess_li_battery_li_cells_series_6_c_function__C1;
double _ess_li_battery_li_cells_series_6_c_function__R0;
double _ess_li_battery_li_cells_series_6_c_function__R1;
double _ess_li_battery_li_cells_series_6_c_function__SOC;
double _ess_li_battery_li_cells_series_6_c_function__Vdc;
double _ess_measurement_single_phase_power_meter1_calc_s__out;
double _ess_measurement_single_phase_power_meter1_degree_to_radians__out;
double _ev_charging_station_inverter_controller_c_function4__Ts;
double _ev_charging_station_inverter_controller_c_function4__in;
double _ev_charging_station_inverter_controller_c_function4__pi;


double _ev_charging_station_inverter_controller_c_function4__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain3__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_math_f1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_math_f2__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain5__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum12__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain7__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain8__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain10__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain11__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain2__out;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_1_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_1_c_function__Vdc;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_2_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_2_c_function__Vdc;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_3_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_3_c_function__Vdc;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_4_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_4_c_function__Vdc;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_5_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_5_c_function__Vdc;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__C1_cell;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__Cq;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__Em_cell;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__Idc;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__R0_cell;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__R1_cell;


double _ev_charging_station_li_battery_li_cells_series_6_c_function__C1;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__R0;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__R1;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__SOC;
double _ev_charging_station_li_battery_li_cells_series_6_c_function__Vdc;
double _ev_charging_station_measurement_single_phase_power_meter1_calc_s__out;
double _ev_charging_station_measurement_single_phase_power_meter1_degree_to_radians__out;
double _measurement_single_phase_power_meter1_calc_s__out;
double _measurement_single_phase_power_meter1_degree_to_radians__out;
double _ess_inverter_controller_alpha_beta_to_dq1__d;
double _ess_inverter_controller_alpha_beta_to_dq1__q;
double _ess_inverter_controller_alpha_beta_to_dq1__k1;
double _ess_inverter_controller_alpha_beta_to_dq1__k2;
double _ess_inverter_controller_alpha_beta_to_dq2__d;
double _ess_inverter_controller_alpha_beta_to_dq2__q;
double _ess_inverter_controller_alpha_beta_to_dq2__k1;
double _ess_inverter_controller_alpha_beta_to_dq2__k2;
double _ess_inverter_controller_single_phase_pll1_sum7__out;
double _ess_inverter_controller_single_phase_pll1_sum6__out;
double _ess_inverter_controller_single_phase_pll1_gain9__out;
double _ess_inverter_controller_single_phase_pll1_sum2__out;
double _ess_measurement_single_phase_power_meter1_cos__out;
double _ess_measurement_single_phase_power_meter1_sin__out;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq1__d;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq1__q;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k1;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k2;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq2__d;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq2__q;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k1;
double _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k2;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum7__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum6__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain9__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum2__out;
double _ev_charging_station_measurement_single_phase_power_meter1_cos__out;
double _ev_charging_station_measurement_single_phase_power_meter1_sin__out;
double _measurement_single_phase_power_meter1_cos__out;
double _measurement_single_phase_power_meter1_sin__out;
double _ess_inverter_controller_gain28__out;
double _ess_inverter_controller_gain29__out;
double _ess_inverter_controller_gain30__out;
double _ess_inverter_controller_gain31__out;
double _ess_inverter_controller_single_phase_pll1_gain4__out;
double _ess_inverter_controller_single_phase_pll1_math1__out;
double _ess_inverter_controller_single_phase_pll1_product1__out;
double _ess_measurement_single_phase_power_meter1_pmult__out;
double _ess_measurement_single_phase_power_meter1_conjugate__out;
double _ev_charging_station_inverter_controller_gain28__out;
double _ev_charging_station_inverter_controller_gain29__out;
double _ev_charging_station_inverter_controller_gain30__out;
double _ev_charging_station_inverter_controller_gain31__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain4__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_math1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product1__out;
double _ev_charging_station_measurement_single_phase_power_meter1_pmult__out;
double _ev_charging_station_measurement_single_phase_power_meter1_conjugate__out;
double _measurement_single_phase_power_meter1_pmult__out;
double _measurement_single_phase_power_meter1_conjugate__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ess_inverter_power_meas_power_meas_dqpu_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _ess_inverter_power_meas_power_meas_dqpu_product2__out;
double _ess_inverter_power_meas_power_meas_dqpu_product3__out;
double _ess_inverter_controller_single_phase_pll1_limit1__out;
double _ess_measurement_single_phase_power_meter1_qmult__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_product1__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_product4__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_product2__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_product3__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_limit1__out;
double _ev_charging_station_measurement_single_phase_power_meter1_qmult__out;
double _measurement_single_phase_power_meter1_qmult__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum2__out;
double _ess_inverter_controller_single_phase_pll1_product8__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum1__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum2__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product8__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i;
double _ess_inverter_controller_single_phase_pll1_abs1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {6.282790547806893e-05, 6.282790547806893e-05};
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.999874344189044};
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i;
double _ev_charging_station_inverter_controller_single_phase_pll1_abs1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _ess_inverter_controller_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
double _ess_inverter_controller_single_phase_pll1_kd_lut__value;
double _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_kd_lut__rightIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_kd_lut__curAddr;
double _ess_inverter_controller_single_phase_pll1_kd_lut__fraction;

double _ess_inverter_controller_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
double _ess_inverter_controller_single_phase_pll1_ki_lut__value;
double _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_ki_lut__rightIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_ki_lut__curAddr;
double _ess_inverter_controller_single_phase_pll1_ki_lut__fraction;

double _ess_inverter_controller_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
double _ess_inverter_controller_single_phase_pll1_kp_lut__value;
double _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_kp_lut__rightIndex;
X_Int32 _ess_inverter_controller_single_phase_pll1_kp_lut__curAddr;
double _ess_inverter_controller_single_phase_pll1_kp_lut__fraction;

double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_table[100] = { -5.19, -5.142818181818182, -5.095636363636364, -5.048454545454546, -5.0012727272727275, -4.954090909090909, -4.9069090909090916, -4.859727272727273, -4.812545454545455, -4.765363636363636, -4.718181818181819, -4.671, -4.623818181818182, -4.576636363636364, -4.529454545454546, -4.482272727272727, -4.43509090909091, -4.387909090909091, -4.340727272727273, -4.2935454545454546, -4.246363636363637, -4.199181818181819, -4.152, -4.104818181818182, -4.057636363636364, -4.010454545454546, -3.9632727272727273, -3.9160909090909093, -3.8689090909090913, -3.821727272727273, -3.774545454545455, -3.727363636363637, -3.6801818181818184, -3.633, -3.585818181818182, -3.538636363636364, -3.4914545454545456, -3.4442727272727276, -3.3970909090909096, -3.349909090909091, -3.3027272727272727, -3.2555454545454547, -3.2083636363636368, -3.1611818181818183, -3.1140000000000003, -3.066818181818182, -3.019636363636364, -2.9724545454545455, -2.9252727272727275, -2.8780909090909095, -2.830909090909091, -2.783727272727273, -2.7365454545454546, -2.6893636363636366, -2.642181818181818, -2.595, -2.547818181818182, -2.5006363636363638, -2.4534545454545458, -2.4062727272727273, -2.3590909090909093, -2.311909090909091, -2.264727272727273, -2.2175454545454545, -2.1703636363636365, -2.1231818181818185, -2.076, -2.028818181818182, -1.9816363636363636, -1.9344545454545456, -1.8872727272727272, -1.8400909090909092, -1.7929090909090908, -1.7457272727272728, -1.6985454545454548, -1.6513636363636364, -1.6041818181818184, -1.557, -1.509818181818182, -1.4626363636363635, -1.4154545454545455, -1.3682727272727275, -1.321090909090909, -1.273909090909091, -1.2267272727272727, -1.1795454545454547, -1.1323636363636362, -1.0851818181818178, -1.0380000000000003, -0.9908181818181818, -0.9436363636363634, -0.8964545454545458, -0.8492727272727274, -0.802090909090909, -0.7549090909090905, -0.707727272727273, -0.6605454545454545, -0.6133636363636361, -0.5661818181818186, -0.519 };
double _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__value;
double _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__rightIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr;
double _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__fraction;

double _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_table[100] = { 18400.0, 18236.565656565657, 18073.131313131315, 17909.696969696968, 17746.262626262625, 17582.828282828283, 17419.39393939394, 17255.959595959597, 17092.52525252525, 16929.090909090908, 16765.656565656565, 16602.222222222223, 16438.78787878788, 16275.353535353535, 16111.91919191919, 15948.484848484848, 15785.050505050505, 15621.61616161616, 15458.181818181818, 15294.747474747473, 15131.31313131313, 14967.878787878788, 14804.444444444445, 14641.0101010101, 14477.575757575756, 14314.141414141413, 14150.70707070707, 13987.272727272728, 13823.838383838383, 13660.404040404039, 13496.969696969696, 13333.535353535353, 13170.10101010101, 13006.666666666666, 12843.232323232322, 12679.797979797979, 12516.363636363636, 12352.929292929293, 12189.494949494949, 12026.060606060606, 11862.626262626261, 11699.191919191919, 11535.757575757576, 11372.323232323231, 11208.888888888889, 11045.454545454544, 10882.020202020201, 10718.585858585859, 10555.151515151514, 10391.717171717171, 10228.282828282827, 10064.848484848484, 9901.414141414141, 9737.979797979797, 9574.545454545454, 9411.111111111111, 9247.676767676767, 9084.242424242424, 8920.80808080808, 8757.373737373737, 8593.939393939394, 8430.50505050505, 8267.070707070707, 8103.636363636362, 7940.202020202019, 7776.767676767677, 7613.333333333332, 7449.898989898989, 7286.464646464645, 7123.030303030302, 6959.595959595959, 6796.161616161615, 6632.727272727272, 6469.2929292929275, 6305.858585858585, 6142.424242424242, 5978.9898989898975, 5815.555555555555, 5652.121212121212, 5488.6868686868675, 5325.252525252525, 5161.81818181818, 4998.383838383837, 4834.949494949495, 4671.51515151515, 4508.080808080807, 4344.646464646463, 4181.21212121212, 4017.7777777777774, 3854.343434343433, 3690.90909090909, 3527.4747474747455, 3364.040404040403, 3200.60606060606, 3037.1717171717155, 2873.7373737373728, 2710.303030303028, 2546.8686868686855, 2383.4343434343427, 2220.0 };
double _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__value;
double _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__rightIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr;
double _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__fraction;

double _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_table[100] = { 4810.0, 4766.737373737374, 4723.474747474747, 4680.212121212121, 4636.949494949495, 4593.686868686868, 4550.424242424242, 4507.161616161617, 4463.89898989899, 4420.636363636364, 4377.373737373738, 4334.111111111111, 4290.848484848485, 4247.585858585859, 4204.323232323232, 4161.060606060606, 4117.79797979798, 4074.5353535353534, 4031.272727272727, 3988.010101010101, 3944.747474747475, 3901.4848484848485, 3858.222222222222, 3814.959595959596, 3771.69696969697, 3728.4343434343436, 3685.1717171717173, 3641.909090909091, 3598.6464646464647, 3555.3838383838383, 3512.121212121212, 3468.8585858585857, 3425.5959595959594, 3382.333333333333, 3339.070707070707, 3295.808080808081, 3252.5454545454545, 3209.282828282828, 3166.0202020202023, 3122.757575757576, 3079.4949494949497, 3036.2323232323233, 2992.969696969697, 2949.7070707070707, 2906.4444444444443, 2863.181818181818, 2819.9191919191917, 2776.6565656565654, 2733.3939393939395, 2690.131313131313, 2646.868686868687, 2603.6060606060605, 2560.343434343434, 2517.080808080808, 2473.818181818182, 2430.5555555555557, 2387.2929292929293, 2344.030303030303, 2300.7676767676767, 2257.5050505050503, 2214.242424242424, 2170.979797979798, 2127.717171717172, 2084.4545454545455, 2041.1919191919192, 1997.9292929292928, 1954.6666666666665, 1911.4040404040402, 1868.1414141414143, 1824.878787878788, 1781.6161616161617, 1738.3535353535353, 1695.090909090909, 1651.8282828282827, 1608.5656565656564, 1565.3030303030305, 1522.0404040404042, 1478.7777777777778, 1435.5151515151515, 1392.2525252525252, 1348.9898989898988, 1305.7272727272725, 1262.4646464646466, 1219.2020202020203, 1175.939393939394, 1132.6767676767677, 1089.4141414141413, 1046.151515151515, 1002.8888888888887, 959.6262626262628, 916.3636363636365, 873.1010101010102, 829.8383838383838, 786.5757575757575, 743.3131313131312, 700.0505050505053, 656.787878787879, 613.5252525252527, 570.2626262626263, 527.0 };
double _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__value;
double _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[100] = { 0.0, 0.010101010101010102, 0.020202020202020204, 0.030303030303030304, 0.04040404040404041, 0.05050505050505051, 0.06060606060606061, 0.07070707070707072, 0.08080808080808081, 0.09090909090909091, 0.10101010101010102, 0.11111111111111112, 0.12121212121212122, 0.13131313131313133, 0.14141414141414144, 0.15151515151515152, 0.16161616161616163, 0.17171717171717174, 0.18181818181818182, 0.19191919191919193, 0.20202020202020204, 0.21212121212121213, 0.22222222222222224, 0.23232323232323235, 0.24242424242424243, 0.25252525252525254, 0.26262626262626265, 0.27272727272727276, 0.2828282828282829, 0.29292929292929293, 0.30303030303030304, 0.31313131313131315, 0.32323232323232326, 0.33333333333333337, 0.3434343434343435, 0.3535353535353536, 0.36363636363636365, 0.37373737373737376, 0.38383838383838387, 0.393939393939394, 0.4040404040404041, 0.4141414141414142, 0.42424242424242425, 0.43434343434343436, 0.4444444444444445, 0.4545454545454546, 0.4646464646464647, 0.4747474747474748, 0.48484848484848486, 0.494949494949495, 0.5050505050505051, 0.5151515151515152, 0.5252525252525253, 0.5353535353535354, 0.5454545454545455, 0.5555555555555556, 0.5656565656565657, 0.5757575757575758, 0.5858585858585859, 0.595959595959596, 0.6060606060606061, 0.6161616161616162, 0.6262626262626263, 0.6363636363636365, 0.6464646464646465, 0.6565656565656566, 0.6666666666666667, 0.6767676767676768, 0.686868686868687, 0.696969696969697, 0.7070707070707072, 0.7171717171717172, 0.7272727272727273, 0.7373737373737375, 0.7474747474747475, 0.7575757575757577, 0.7676767676767677, 0.7777777777777778, 0.787878787878788, 0.797979797979798, 0.8080808080808082, 0.8181818181818182, 0.8282828282828284, 0.8383838383838385, 0.8484848484848485, 0.8585858585858587, 0.8686868686868687, 0.8787878787878789, 0.888888888888889, 0.8989898989898991, 0.9090909090909092, 0.9191919191919192, 0.9292929292929294, 0.9393939393939394, 0.9494949494949496, 0.9595959595959597, 0.9696969696969697, 0.9797979797979799, 0.98989898989899, 1.0 };
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__rightIndex;
X_Int32 _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr;
double _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__fraction;

double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _ess_inverter_controller_single_phase_pll1_product6__out;
double _ess_inverter_controller_single_phase_pll1_product5__out;
double _ess_inverter_controller_single_phase_pll1_product7__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product6__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product5__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_product7__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.890158908367555};
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
X_UnInt32 _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[2] = {1.0, -1.0};
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[2] = {1.0, -0.890158908367555};
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
X_UnInt32 _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ess_inverter_controller_single_phase_pll1_sum8__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum8__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ess_inverter_controller_single_phase_pll1_limit2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_limit2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ess_inverter_controller_single_phase_pll1_sum5__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ess_inverter_controller_single_phase_pll1_sum10__out;
double _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
double _ess_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
double _ess_inverter_controller_single_phase_pll1_integrator_with_reset__in;


double _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_sum10__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__in;


double _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ess_inverter_controller_single_phase_pll1_gain6__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ev_charging_station_inverter_controller_single_phase_pll1_gain6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _ess_inverter_controller_bus_join1__out[2];
double _ev_charging_station_inverter_controller_bus_join1__out[2];
double _ess_inverter_controller_bus_split1__out;
double _ess_inverter_controller_bus_split1__out1;
double _ev_charging_station_inverter_controller_bus_split1__out;
double _ev_charging_station_inverter_controller_bus_split1__out1;
double _ess_inverter_controller_gain20__out;
double _ev_charging_station_inverter_controller_gain20__out;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {0, 1};
double _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {2, 3};
double _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
double _ess_inverter_controller_rate_transition10_output__out =  0.0;

X_Int32 _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;

double _ess_inverter_controller_rate_transition9_output__out =  0.0;

double _ess_inverter_controller_single_phase_pll1_i__integrator_state;
X_UnInt32 _ess_inverter_controller_single_phase_pll1_i__av_active;
double _ess_inverter_controller_single_phase_pll1_i__filter_state;
double _ess_inverter_controller_single_phase_pll1_integrator1__state;
double _ess_inverter_controller_single_phase_pll1_integrator10__state;
double _ess_inverter_controller_single_phase_pll1_integrator2__state;
double _ess_inverter_controller_single_phase_pll1_integrator3__state;
double _ess_inverter_controller_single_phase_pll1_integrator4__state;
double _ess_inverter_controller_single_phase_pll1_integrator5__state;
double _ess_inverter_controller_single_phase_pll1_integrator6__state;
double _ess_inverter_controller_single_phase_pll1_integrator7__state;
double _ess_inverter_controller_single_phase_pll1_integrator8__state;
double _ess_inverter_controller_single_phase_pll1_integrator9__state;
double _ess_li_battery_li_cells_series_1_unit_delay1__state;
double _ess_li_battery_li_cells_series_1_unit_delay2__state;
double _ess_li_battery_li_cells_series_1_unit_delay3__state;
double _ess_li_battery_li_cells_series_1_unit_delay4__state;
double _ess_li_battery_li_cells_series_2_unit_delay1__state;
double _ess_li_battery_li_cells_series_2_unit_delay2__state;
double _ess_li_battery_li_cells_series_2_unit_delay3__state;
double _ess_li_battery_li_cells_series_2_unit_delay4__state;
double _ess_li_battery_li_cells_series_3_unit_delay1__state;
double _ess_li_battery_li_cells_series_3_unit_delay2__state;
double _ess_li_battery_li_cells_series_3_unit_delay3__state;
double _ess_li_battery_li_cells_series_3_unit_delay4__state;
double _ess_li_battery_li_cells_series_4_unit_delay1__state;
double _ess_li_battery_li_cells_series_4_unit_delay2__state;
double _ess_li_battery_li_cells_series_4_unit_delay3__state;
double _ess_li_battery_li_cells_series_4_unit_delay4__state;
double _ess_li_battery_li_cells_series_5_unit_delay1__state;
double _ess_li_battery_li_cells_series_5_unit_delay2__state;
double _ess_li_battery_li_cells_series_5_unit_delay3__state;
double _ess_li_battery_li_cells_series_5_unit_delay4__state;
double _ess_li_battery_li_cells_series_6_unit_delay1__state;
double _ess_li_battery_li_cells_series_6_unit_delay2__state;
double _ess_li_battery_li_cells_series_6_unit_delay3__state;
double _ess_li_battery_li_cells_series_6_unit_delay4__state;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
double _ev_charging_station_inverter_controller_rate_transition1_output__out =  0.0;

double _ev_charging_station_inverter_controller_single_phase_pll1_i__integrator_state;
X_UnInt32 _ev_charging_station_inverter_controller_single_phase_pll1_i__av_active;
double _ev_charging_station_inverter_controller_single_phase_pll1_i__filter_state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__state;
double _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__state;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__state;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__state;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__state;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__state;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__state;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__state;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__state;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__state;
double _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__state;
double _ess_inverter_controller_hilbert_transform__states[1];
double _ess_inverter_controller_hilbert_transform1__states[1];
double _ess_inverter_lpf_dc__states[1];
double _ess_li_battery_lpf_dc3__states[1];
double _ess_li_battery_li_cells_series_1_lpf_dc1__states[1];
double _ess_li_battery_li_cells_series_2_lpf_dc1__states[1];
double _ess_li_battery_li_cells_series_3_lpf_dc1__states[1];
double _ess_li_battery_li_cells_series_4_lpf_dc1__states[1];
double _ess_li_battery_li_cells_series_5_lpf_dc1__states[1];
double _ess_li_battery_li_cells_series_6_lpf_dc1__states[1];
double _ess_li_battery_lpf_dc2__states[1];
double _ess_measurement_single_phase_power_meter1_ia_rms__square_sum;
double _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt;
double _ess_measurement_single_phase_power_meter1_va_rms__square_sum;
double _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt;

double _ess_measurement_single_phase_power_meter1_phi__phase_state;
double _ess_measurement_single_phase_power_meter1_phi__previous_correction_ref;
double _ess_measurement_single_phase_power_meter1_phi__previous_correction_in;
double _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
double _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in;
double _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref;
double _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in;

double _ev_charging_station_inverter_controller_hilbert_transform__states[1];
double _ev_charging_station_inverter_controller_hilbert_transform1__states[1];
double _ev_charging_station_inverter_lpf_dc__states[1];
double _ev_charging_station_li_battery_lpf_dc3__states[1];
double _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__states[1];
double _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__states[1];
double _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__states[1];
double _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__states[1];
double _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__states[1];
double _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__states[1];
double _ev_charging_station_li_battery_lpf_dc2__states[1];
double _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__square_sum;
double _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt;
double _ev_charging_station_measurement_single_phase_power_meter1_va_rms__square_sum;
double _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt;

double _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_ref;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_in;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref;
double _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in;

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

double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[1];
double _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
//@cmp.svar.end



// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_inverter_controller_c_function3__k = 0;
    _ess_inverter_controller_c_function3__t = 1;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0.0;
    }
    _ess_inverter_controller_rate_transition10_output__out =  0.0;
    _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _ess_inverter_controller_rate_transition9_output__out =  0.0;
    _ess_inverter_controller_single_phase_pll1_i__integrator_state =  0.0;
    _ess_inverter_controller_single_phase_pll1_i__filter_state =  0.0;
    _ess_inverter_controller_single_phase_pll1_integrator1__state = 0.0;
    _ess_inverter_controller_single_phase_pll1_integrator10__state = 60.0;
    _ess_inverter_controller_single_phase_pll1_integrator2__state = -339.4112549695428;
    _ess_inverter_controller_single_phase_pll1_integrator3__state = 339.4112549695428;
    _ess_inverter_controller_single_phase_pll1_integrator4__state = 339.4112549695428;
    _ess_inverter_controller_single_phase_pll1_integrator5__state = 376.99111843077515;
    _ess_inverter_controller_single_phase_pll1_integrator6__state = 376.99111843077515;
    _ess_inverter_controller_single_phase_pll1_integrator7__state = 60.0;
    _ess_inverter_controller_single_phase_pll1_integrator8__state = 60.0;
    _ess_inverter_controller_single_phase_pll1_integrator9__state = 60.0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    HIL_OutAO(0x401b, 0.0f);
    _ess_li_battery_li_cells_series_1_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_1_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_1_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_1_unit_delay4__state = 0.5;
    _ess_li_battery_li_cells_series_2_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_2_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_2_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_2_unit_delay4__state = 0.5;
    _ess_li_battery_li_cells_series_3_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_3_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_3_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_3_unit_delay4__state = 0.5;
    _ess_li_battery_li_cells_series_4_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_4_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_4_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_4_unit_delay4__state = 0.5;
    _ess_li_battery_li_cells_series_5_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_5_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_5_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_5_unit_delay4__state = 0.5;
    _ess_li_battery_li_cells_series_6_unit_delay1__state = 0.5;
    _ess_li_battery_li_cells_series_6_unit_delay2__state = 0.5;
    _ess_li_battery_li_cells_series_6_unit_delay3__state = 0.5;
    _ess_li_battery_li_cells_series_6_unit_delay4__state = 0.5;
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0.0;
    }
    _ev_charging_station_inverter_controller_rate_transition1_output__out =  0.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_i__integrator_state =  0.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_i__filter_state =  0.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__state = 0.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__state = 60.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__state = -339.4112549695428;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__state = 339.4112549695428;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__state = 339.4112549695428;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__state = 376.99111843077515;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__state = 376.99111843077515;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__state = 60.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__state = 60.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__state = 60.0;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    HIL_OutAO(0x403b, 0.0f);
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__state = 0.5;
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__state = 0.5;
    HIL_OutAO(0x4011, 0.0f);
    HIL_OutAO(0x4012, 0.0f);
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i] = 0.0;
    }
    HIL_OutAO(0x4019, 0.0f);
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i] = 0.0;
    }
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4017, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    for (_ess_inverter_lpf_dc__i = 0; _ess_inverter_lpf_dc__i < 1; _ess_inverter_lpf_dc__i++) {
        _ess_inverter_lpf_dc__states[_ess_inverter_lpf_dc__i] = 0.0;
    }
    for (_ess_li_battery_lpf_dc3__i = 0; _ess_li_battery_lpf_dc3__i < 1; _ess_li_battery_lpf_dc3__i++) {
        _ess_li_battery_lpf_dc3__states[_ess_li_battery_lpf_dc3__i] = 0.0;
    }
    for (_ess_li_battery_li_cells_series_1_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_1_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_1_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_1_lpf_dc1__states[_ess_li_battery_li_cells_series_1_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutFloat(141557761, 0.0);
    HIL_OutFloat(141557762, 0.0);
    for (_ess_li_battery_li_cells_series_2_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_2_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_2_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_2_lpf_dc1__states[_ess_li_battery_li_cells_series_2_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutFloat(141557764, 0.0);
    HIL_OutFloat(141557765, 0.0);
    for (_ess_li_battery_li_cells_series_3_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_3_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_3_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_3_lpf_dc1__states[_ess_li_battery_li_cells_series_3_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x401e, 0.0f);
    HIL_OutFloat(141557767, 0.0);
    HIL_OutFloat(141557768, 0.0);
    for (_ess_li_battery_li_cells_series_4_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_4_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_4_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_4_lpf_dc1__states[_ess_li_battery_li_cells_series_4_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutFloat(145752065, 0.0);
    HIL_OutFloat(145752066, 0.0);
    for (_ess_li_battery_li_cells_series_5_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_5_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_5_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_5_lpf_dc1__states[_ess_li_battery_li_cells_series_5_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4020, 0.0f);
    HIL_OutFloat(145752068, 0.0);
    HIL_OutFloat(145752069, 0.0);
    for (_ess_li_battery_li_cells_series_6_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_6_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_6_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_6_lpf_dc1__states[_ess_li_battery_li_cells_series_6_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4021, 0.0f);
    HIL_OutFloat(145752071, 0.0);
    HIL_OutFloat(145752072, 0.0);
    HIL_OutAO(0x4022, 0.0f);
    for (_ess_li_battery_lpf_dc2__i = 0; _ess_li_battery_lpf_dc2__i < 1; _ess_li_battery_lpf_dc2__i++) {
        _ess_li_battery_lpf_dc2__states[_ess_li_battery_lpf_dc2__i] = 0.0;
    }
    HIL_OutAO(0x4023, 0.0f);
    _ess_measurement_single_phase_power_meter1_ia_rms__square_sum = 0x0;
    _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0x0;
    _ess_measurement_single_phase_power_meter1_va_rms__square_sum = 0x0;
    _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__phase_state = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__previous_correction_in = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref = 0x0;
    _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in = 0x0;
    _ev_charging_station_inverter_controller_c_function1__out = 0;
    _ev_charging_station_inverter_controller_c_function1__k = 0;
    for (_ev_charging_station_inverter_controller_hilbert_transform__i = 0; _ev_charging_station_inverter_controller_hilbert_transform__i < 1; _ev_charging_station_inverter_controller_hilbert_transform__i++) {
        _ev_charging_station_inverter_controller_hilbert_transform__states[_ev_charging_station_inverter_controller_hilbert_transform__i] = 0.0;
    }
    HIL_OutAO(0x4039, 0.0f);
    for (_ev_charging_station_inverter_controller_hilbert_transform1__i = 0; _ev_charging_station_inverter_controller_hilbert_transform1__i < 1; _ev_charging_station_inverter_controller_hilbert_transform1__i++) {
        _ev_charging_station_inverter_controller_hilbert_transform1__states[_ev_charging_station_inverter_controller_hilbert_transform1__i] = 0.0;
    }
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x403a, 0.0f);
    for (_ev_charging_station_inverter_lpf_dc__i = 0; _ev_charging_station_inverter_lpf_dc__i < 1; _ev_charging_station_inverter_lpf_dc__i++) {
        _ev_charging_station_inverter_lpf_dc__states[_ev_charging_station_inverter_lpf_dc__i] = 0.0;
    }
    for (_ev_charging_station_li_battery_lpf_dc3__i = 0; _ev_charging_station_li_battery_lpf_dc3__i < 1; _ev_charging_station_li_battery_lpf_dc3__i++) {
        _ev_charging_station_li_battery_lpf_dc3__states[_ev_charging_station_li_battery_lpf_dc3__i] = 0.0;
    }
    for (_ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutFloat(149946369, 0.0);
    HIL_OutFloat(149946370, 0.0);
    for (_ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutFloat(149946372, 0.0);
    HIL_OutFloat(149946373, 0.0);
    for (_ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutFloat(149946375, 0.0);
    HIL_OutFloat(149946376, 0.0);
    for (_ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x403f, 0.0f);
    HIL_OutFloat(154140673, 0.0);
    HIL_OutFloat(154140674, 0.0);
    for (_ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4040, 0.0f);
    HIL_OutFloat(154140676, 0.0);
    HIL_OutFloat(154140677, 0.0);
    for (_ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutFloat(154140679, 0.0);
    HIL_OutFloat(154140680, 0.0);
    HIL_OutAO(0x4042, 0.0f);
    for (_ev_charging_station_li_battery_lpf_dc2__i = 0; _ev_charging_station_li_battery_lpf_dc2__i < 1; _ev_charging_station_li_battery_lpf_dc2__i++) {
        _ev_charging_station_li_battery_lpf_dc2__states[_ev_charging_station_li_battery_lpf_dc2__i] = 0.0;
    }
    HIL_OutAO(0x4043, 0.0f);
    _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__square_sum = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_va_rms__square_sum = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_in = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref = 0x0;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in = 0x0;
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
    HIL_OutAO(0x4015, 0.0f);
    HIL_OutAO(0x4018, 0.0f);
    _ess_li_battery_li_cells_series_1_c_function__SOC = 0.5;
    HIL_OutFloat(141557760, 0.0);
    _ess_li_battery_li_cells_series_2_c_function__SOC = 0.5;
    HIL_OutFloat(141557763, 0.0);
    _ess_li_battery_li_cells_series_3_c_function__SOC = 0.5;
    HIL_OutFloat(141557766, 0.0);
    _ess_li_battery_li_cells_series_4_c_function__SOC = 0.5;
    HIL_OutFloat(145752064, 0.0);
    _ess_li_battery_li_cells_series_5_c_function__SOC = 0.5;
    HIL_OutFloat(145752067, 0.0);
    _ess_li_battery_li_cells_series_6_c_function__SOC = 0.5;
    HIL_OutFloat(145752070, 0.0);
    HIL_OutAO(0x4032, 0.0f);
    HIL_OutAO(0x4035, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    _ev_charging_station_li_battery_li_cells_series_1_c_function__SOC = 0.5;
    HIL_OutFloat(149946368, 0.0);
    _ev_charging_station_li_battery_li_cells_series_2_c_function__SOC = 0.5;
    HIL_OutFloat(149946371, 0.0);
    _ev_charging_station_li_battery_li_cells_series_3_c_function__SOC = 0.5;
    HIL_OutFloat(149946374, 0.0);
    _ev_charging_station_li_battery_li_cells_series_4_c_function__SOC = 0.5;
    HIL_OutFloat(154140672, 0.0);
    _ev_charging_station_li_battery_li_cells_series_5_c_function__SOC = 0.5;
    HIL_OutFloat(154140675, 0.0);
    _ev_charging_station_li_battery_li_cells_series_6_c_function__SOC = 0.5;
    HIL_OutFloat(154140678, 0.0);
    HIL_OutFloat(141295616, 0.0);
    HIL_OutFloat(141295617, 0.0);
    HIL_OutFloat(141295618, 0.0);
    HIL_OutFloat(145489920, 0.0);
    HIL_OutFloat(145489921, 0.0);
    HIL_OutFloat(145489922, 0.0);
    HIL_OutFloat(149684224, 0.0);
    HIL_OutFloat(149684225, 0.0);
    HIL_OutFloat(149684226, 0.0);
    HIL_OutFloat(153878528, 0.0);
    HIL_OutFloat(153878529, 0.0);
    HIL_OutFloat(153878530, 0.0);
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0.0;
    }
    HIL_OutAO(0x4013, 0.0f);
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0.0;
    }
    HIL_OutAO(0x4033, 0.0f);
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0.0;
    }
    HIL_OutAO(0x4034, 0.0f);
    HIL_OutAO(0x4026, 0.0f);
    HIL_OutAO(0x4027, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4045, 0.0f);
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x4007, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x4028, 0.0f);
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    for (_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0.0;
    }
    for (_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0.0;
    }
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    for (_ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i] = 0.0;
    }
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    for (_ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i] = 0.0;
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x400d, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x400c, 0.0f);
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x402e, 0.0f);
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x402d, 0.0f);
    _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc = 0.0;
    _ess_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc = 0.0;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value = 2 * M_PI;
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x4031, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x402c, 0.0f);
    HIL_OutAO(0x402b, 0.0f);
    _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask = 3;
    HIL_OutInt32(0x2000080 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__update_mask);
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
    // Generated from the component: ESS.Inverter.Controller.Constant2
    // Generated from the component: ESS.Inverter.Controller.Constant3
    // Generated from the component: ESS.Inverter.Controller.Constant4
    // Generated from the component: ESS.Inverter.Controller.Constant5
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _ess_inverter_lpf_dc__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out < 10.0) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = 10.0;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: ESS.Inverter.Controller.Rate Transition10.Output
    // Generated from the component: ESS.Inverter.Controller.Rate Transition8.Output
    // Generated from the component: ESS.Inverter.Controller.Rate Transition9.Output
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Constant2
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.I
    _ess_inverter_controller_single_phase_pll1_i__pi_reg_out_int = _ess_inverter_controller_single_phase_pll1_i__integrator_state;
    if (_ess_inverter_controller_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586) {
        _ess_inverter_controller_single_phase_pll1_i__out = -62.83185307179586;
        _ess_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else if (_ess_inverter_controller_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586) {
        _ess_inverter_controller_single_phase_pll1_i__out = 62.83185307179586;
        _ess_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else {
        _ess_inverter_controller_single_phase_pll1_i__out = _ess_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
        _ess_inverter_controller_single_phase_pll1_i__av_active = 0;
    }
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator1
    _ess_inverter_controller_single_phase_pll1_integrator1__out = _ess_inverter_controller_single_phase_pll1_integrator1__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator10
    _ess_inverter_controller_single_phase_pll1_integrator10__out = _ess_inverter_controller_single_phase_pll1_integrator10__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator2
    _ess_inverter_controller_single_phase_pll1_integrator2__out = _ess_inverter_controller_single_phase_pll1_integrator2__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator3
    _ess_inverter_controller_single_phase_pll1_integrator3__out = _ess_inverter_controller_single_phase_pll1_integrator3__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator4
    _ess_inverter_controller_single_phase_pll1_integrator4__out = _ess_inverter_controller_single_phase_pll1_integrator4__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator5
    _ess_inverter_controller_single_phase_pll1_integrator5__out = _ess_inverter_controller_single_phase_pll1_integrator5__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator6
    _ess_inverter_controller_single_phase_pll1_integrator6__out = _ess_inverter_controller_single_phase_pll1_integrator6__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator7
    _ess_inverter_controller_single_phase_pll1_integrator7__out = _ess_inverter_controller_single_phase_pll1_integrator7__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator8
    _ess_inverter_controller_single_phase_pll1_integrator8__out = _ess_inverter_controller_single_phase_pll1_integrator8__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator9
    _ess_inverter_controller_single_phase_pll1_integrator9__out = _ess_inverter_controller_single_phase_pll1_integrator9__state;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Trigonometric function1
    _ess_inverter_controller_single_phase_pll1_trigonometric_function1__out = sin(_ess_inverter_controller_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.const
    // Generated from the component: ESS.Inverter.Controller.charge
    _ess_inverter_controller_charge__out = XIo_InInt32(0x55000100);
    // Generated from the component: ESS.Inverter.E.Va1
    _ess_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x20c));
    // Generated from the component: ESS.Inverter.I.Ia1
    _ess_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x211));
    // Generated from the component: ESS.Inverter.Io.Ia1
    _ess_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x212));
    // Generated from the component: ESS.Inverter.Power_Meas.Gain4
    _ess_inverter_power_meas_gain4__out = 10000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Gain5
    _ess_inverter_power_meas_gain5__out = 10000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: ESS.Inverter.VDC.Va1
    _ess_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x20d));
    // Generated from the component: ESS.Li Battery.IDC
    HIL_OutAO(0x401b, (float)_ess_li_battery_lpf_dc3__out);
    // Generated from the component: ESS.Li Battery.Idc.Ia1
    _ess_li_battery_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x213));
    // Generated from the component: ESS.Li Battery.Product1
    _ess_li_battery_product1__out = (_ess_li_battery_lpf_dc2__out * _ess_li_battery_lpf_dc3__out);
    // Generated from the component: ESS.Li Battery.Vdc.Va1
    _ess_li_battery_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x409));
    // Generated from the component: ESS.Measurement.Ia.Ia1
    _ess_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x21a));
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Radian
    // Generated from the component: ESS.Measurement.Va.Va1
    _ess_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x20f));
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant2
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant3
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant4
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant5
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant7
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _ev_charging_station_inverter_lpf_dc__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out < 10.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = 10.0;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: EV Charging Station.Inverter.Controller.Rate Transition1.Output
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Constant2
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.I
    _ev_charging_station_inverter_controller_single_phase_pll1_i__pi_reg_out_int = _ev_charging_station_inverter_controller_single_phase_pll1_i__integrator_state;
    if (_ev_charging_station_inverter_controller_single_phase_pll1_i__pi_reg_out_int < -62.83185307179586) {
        _ev_charging_station_inverter_controller_single_phase_pll1_i__out = -62.83185307179586;
        _ev_charging_station_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else if (_ev_charging_station_inverter_controller_single_phase_pll1_i__pi_reg_out_int > 62.83185307179586) {
        _ev_charging_station_inverter_controller_single_phase_pll1_i__out = 62.83185307179586;
        _ev_charging_station_inverter_controller_single_phase_pll1_i__av_active = 1;
    } else {
        _ev_charging_station_inverter_controller_single_phase_pll1_i__out = _ev_charging_station_inverter_controller_single_phase_pll1_i__pi_reg_out_int;
        _ev_charging_station_inverter_controller_single_phase_pll1_i__av_active = 0;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator1
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator10
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator2
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator3
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator4
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator5
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator6
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator7
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator8
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator9
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Trigonometric function1
    _ev_charging_station_inverter_controller_single_phase_pll1_trigonometric_function1__out = sin(_ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.const
    // Generated from the component: EV Charging Station.Inverter.E.Va1
    _ev_charging_station_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x60c));
    // Generated from the component: EV Charging Station.Inverter.I.Ia1
    _ev_charging_station_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x611));
    // Generated from the component: EV Charging Station.Inverter.Io.Ia1
    _ev_charging_station_inverter_io_ia1__out = (HIL_InFloat(0xc80000 + 0x612));
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Gain4
    _ev_charging_station_inverter_power_meas_gain4__out = 50000.0 * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Gain5
    _ev_charging_station_inverter_power_meas_gain5__out = 50000.0 * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: EV Charging Station.Inverter.VDC.Va1
    _ev_charging_station_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x60d));
    // Generated from the component: EV Charging Station.Li Battery.IDC
    HIL_OutAO(0x403b, (float)_ev_charging_station_li_battery_lpf_dc3__out);
    // Generated from the component: EV Charging Station.Li Battery.Idc.Ia1
    _ev_charging_station_li_battery_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x613));
    // Generated from the component: EV Charging Station.Li Battery.Product1
    _ev_charging_station_li_battery_product1__out = (_ev_charging_station_li_battery_lpf_dc2__out * _ev_charging_station_li_battery_lpf_dc3__out);
    // Generated from the component: EV Charging Station.Li Battery.Vdc.Va1
    _ev_charging_station_li_battery_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x809));
    // Generated from the component: EV Charging Station.Measurement.Ia.Ia1
    _ev_charging_station_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x61a));
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Radian
    // Generated from the component: EV Charging Station.Measurement.Va.Va1
    _ev_charging_station_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x60f));
    // Generated from the component: Measurement.Ia.Ia1
    _measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Measurement.Single Phase Power Meter1.Radian
    // Generated from the component: Measurement.Va.Va1
    _measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x4));
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: ESS.Inverter.Controller.C function2
    _ess_inverter_controller_c_function2__charge = _ess_inverter_controller_rate_transition8_output__out;
    _ess_inverter_controller_c_function2__ref = _ess_inverter_controller_rate_transition10_output__out;
    if (_ess_inverter_controller_c_function2__charge > 0)_ess_inverter_controller_c_function2__out = 0;
    else _ess_inverter_controller_c_function2__out = _ess_inverter_controller_c_function2__ref;
    // Generated from the component: ESS.Inverter.Controller.C function1
    _ess_inverter_controller_c_function1__charge = _ess_inverter_controller_rate_transition8_output__out;
    _ess_inverter_controller_c_function1__ref = _ess_inverter_controller_rate_transition9_output__out;
    if (_ess_inverter_controller_c_function1__charge > 0)_ess_inverter_controller_c_function1__out = -1;
    else _ess_inverter_controller_c_function1__out = _ess_inverter_controller_c_function1__ref;
    // Generated from the component: ESS.Inverter.Controller.Gain25
    _ess_inverter_controller_gain25__out = 6.283185307179586 * _ess_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.C function1
    _ess_inverter_controller_single_phase_pll1_c_function1__theta_dq = _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out;
    _ess_inverter_controller_single_phase_pll1_c_function1__va = _ess_inverter_controller_single_phase_pll1_integrator1__out;
    _ess_inverter_controller_single_phase_pll1_c_function1__vb = _ess_inverter_controller_single_phase_pll1_integrator2__out;
    _ess_inverter_controller_single_phase_pll1_c_function1__vq = cos(_ess_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ess_inverter_controller_single_phase_pll1_c_function1__va + sin(_ess_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ess_inverter_controller_single_phase_pll1_c_function1__vb;
    _ess_inverter_controller_single_phase_pll1_c_function1__vd = -sin(_ess_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ess_inverter_controller_single_phase_pll1_c_function1__va + cos(_ess_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ess_inverter_controller_single_phase_pll1_c_function1__vb;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum4
    _ess_inverter_controller_single_phase_pll1_sum4__out = _ess_inverter_controller_single_phase_pll1_integrator3__out - _ess_inverter_controller_single_phase_pll1_integrator4__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product2
    _ess_inverter_controller_single_phase_pll1_product2__out = (_ess_inverter_controller_single_phase_pll1_integrator5__out * _ess_inverter_controller_single_phase_pll1_integrator1__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.w_to_f
    _ess_inverter_controller_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _ess_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum9
    _ess_inverter_controller_single_phase_pll1_sum9__out = _ess_inverter_controller_single_phase_pll1_integrator6__out - _ess_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum11
    _ess_inverter_controller_single_phase_pll1_sum11__out = _ess_inverter_controller_single_phase_pll1_integrator7__out - _ess_inverter_controller_single_phase_pll1_integrator8__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum13
    _ess_inverter_controller_single_phase_pll1_sum13__out = _ess_inverter_controller_single_phase_pll1_integrator8__out - _ess_inverter_controller_single_phase_pll1_integrator9__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum14
    _ess_inverter_controller_single_phase_pll1_sum14__out = _ess_inverter_controller_single_phase_pll1_integrator9__out - _ess_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition8.Input
    _ess_inverter_controller_rate_transition8_output__out = _ess_inverter_controller_charge__out;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    _ess_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[_ess_inverter_controller_hilbert_transform__i + 1] * _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i];
    }
    _ess_inverter_controller_hilbert_transform__a_sum += _ess_inverter_controller_hilbert_transform__states[0] * _ess_inverter_controller_hilbert_transform__a_coeff[1];
    _ess_inverter_controller_hilbert_transform__delay_line_in = _ess_inverter_e_va1__out - _ess_inverter_controller_hilbert_transform__a_sum;
    _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[0] * _ess_inverter_controller_hilbert_transform__delay_line_in;
    _ess_inverter_controller_hilbert_transform__out = _ess_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum1
    _ess_inverter_controller_single_phase_pll1_sum1__out =  - _ess_inverter_controller_single_phase_pll1_integrator1__out + _ess_inverter_e_va1__out;
    // Generated from the component: ESS.Inverter.V
    HIL_OutAO(0x4019, (float)_ess_inverter_e_va1__out);
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    _ess_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[_ess_inverter_controller_hilbert_transform1__i + 1] * _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i];
    }
    _ess_inverter_controller_hilbert_transform1__a_sum += _ess_inverter_controller_hilbert_transform1__states[0] * _ess_inverter_controller_hilbert_transform1__a_coeff[1];
    _ess_inverter_controller_hilbert_transform1__delay_line_in = _ess_inverter_i_ia1__out - _ess_inverter_controller_hilbert_transform1__a_sum;
    _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[0] * _ess_inverter_controller_hilbert_transform1__delay_line_in;
    _ess_inverter_controller_hilbert_transform1__out = _ess_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: ESS.Inverter.P
    HIL_OutAO(0x4016, (float)_ess_inverter_power_meas_gain4__out);
    // Generated from the component: ESS.Inverter.Q
    HIL_OutAO(0x4017, (float)_ess_inverter_power_meas_gain5__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Gain6
    _ess_inverter_power_meas_gain6__out = 10000.0 * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: ESS.Inverter.pf
    HIL_OutAO(0x401a, (float)_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: ESS.Inverter.LPF_dc
    _ess_inverter_lpf_dc__a_sum = 0.0f;
    _ess_inverter_lpf_dc__b_sum = 0.0f;
    _ess_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_ess_inverter_lpf_dc__i = 0; _ess_inverter_lpf_dc__i < 1; _ess_inverter_lpf_dc__i++) {
        _ess_inverter_lpf_dc__b_sum += _ess_inverter_lpf_dc__b_coeff[_ess_inverter_lpf_dc__i + 1] * _ess_inverter_lpf_dc__states[_ess_inverter_lpf_dc__i];
    }
    _ess_inverter_lpf_dc__a_sum += _ess_inverter_lpf_dc__states[0] * _ess_inverter_lpf_dc__a_coeff[1];
    _ess_inverter_lpf_dc__delay_line_in = _ess_inverter_vdc_va1__out - _ess_inverter_lpf_dc__a_sum;
    _ess_inverter_lpf_dc__b_sum += _ess_inverter_lpf_dc__b_coeff[0] * _ess_inverter_lpf_dc__delay_line_in;
    _ess_inverter_lpf_dc__out = _ess_inverter_lpf_dc__b_sum;
    // Generated from the component: ESS.Li Battery.LPF_dc3
    _ess_li_battery_lpf_dc3__a_sum = 0.0f;
    _ess_li_battery_lpf_dc3__b_sum = 0.0f;
    _ess_li_battery_lpf_dc3__delay_line_in = 0.0f;
    for (_ess_li_battery_lpf_dc3__i = 0; _ess_li_battery_lpf_dc3__i < 1; _ess_li_battery_lpf_dc3__i++) {
        _ess_li_battery_lpf_dc3__b_sum += _ess_li_battery_lpf_dc3__b_coeff[_ess_li_battery_lpf_dc3__i + 1] * _ess_li_battery_lpf_dc3__states[_ess_li_battery_lpf_dc3__i];
    }
    _ess_li_battery_lpf_dc3__a_sum += _ess_li_battery_lpf_dc3__states[0] * _ess_li_battery_lpf_dc3__a_coeff[1];
    _ess_li_battery_lpf_dc3__delay_line_in = _ess_li_battery_idc_ia1__out - _ess_li_battery_lpf_dc3__a_sum;
    _ess_li_battery_lpf_dc3__b_sum += _ess_li_battery_lpf_dc3__b_coeff[0] * _ess_li_battery_lpf_dc3__delay_line_in;
    _ess_li_battery_lpf_dc3__out = _ess_li_battery_lpf_dc3__b_sum;
    // Generated from the component: ESS.Li Battery.P
    HIL_OutAO(0x4022, (float)_ess_li_battery_product1__out);
    // Generated from the component: ESS.Li Battery.LPF_dc2
    _ess_li_battery_lpf_dc2__a_sum = 0.0f;
    _ess_li_battery_lpf_dc2__b_sum = 0.0f;
    _ess_li_battery_lpf_dc2__delay_line_in = 0.0f;
    for (_ess_li_battery_lpf_dc2__i = 0; _ess_li_battery_lpf_dc2__i < 1; _ess_li_battery_lpf_dc2__i++) {
        _ess_li_battery_lpf_dc2__b_sum += _ess_li_battery_lpf_dc2__b_coeff[_ess_li_battery_lpf_dc2__i + 1] * _ess_li_battery_lpf_dc2__states[_ess_li_battery_lpf_dc2__i];
    }
    _ess_li_battery_lpf_dc2__a_sum += _ess_li_battery_lpf_dc2__states[0] * _ess_li_battery_lpf_dc2__a_coeff[1];
    _ess_li_battery_lpf_dc2__delay_line_in = _ess_li_battery_vdc_va1__out - _ess_li_battery_lpf_dc2__a_sum;
    _ess_li_battery_lpf_dc2__b_sum += _ess_li_battery_lpf_dc2__b_coeff[0] * _ess_li_battery_lpf_dc2__delay_line_in;
    _ess_li_battery_lpf_dc2__out = _ess_li_battery_lpf_dc2__b_sum;
    // Generated from the component: ESS.Li Battery.VDC
    HIL_OutAO(0x4023, (float)_ess_li_battery_vdc_va1__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _ess_measurement_single_phase_power_meter1_ia_rms__out = sqrt(_ess_measurement_single_phase_power_meter1_ia_rms__square_sum / _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt);
        _ess_measurement_single_phase_power_meter1_ia_rms__square_sum = 0.0f;
    }
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _ess_measurement_single_phase_power_meter1_va_rms__out = sqrt(_ess_measurement_single_phase_power_meter1_va_rms__square_sum / _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt);
        _ess_measurement_single_phase_power_meter1_va_rms__square_sum = 0.0f;
    }
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.phi
    _ess_measurement_single_phase_power_meter1_phi__phase_diff = _ess_measurement_single_phase_power_meter1_phi__phase_state;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain33
    _ev_charging_station_inverter_controller_gain33__out = 0.02 * _ev_charging_station_inverter_controller_constant7__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain34
    _ev_charging_station_inverter_controller_gain34__out = 1000.0 * _ev_charging_station_inverter_controller_constant7__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain22
    _ev_charging_station_inverter_controller_gain22__out = 0.02 * _ev_charging_station_inverter_controller_rate_transition1_output__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain32
    _ev_charging_station_inverter_controller_gain32__out = 1000.0 * _ev_charging_station_inverter_controller_rate_transition1_output__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain25
    _ev_charging_station_inverter_controller_gain25__out = 6.283185307179586 * _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.C function1
    _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq = _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out;
    _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__va = _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__out;
    _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vb = _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__out;
    _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vq = cos(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__va + sin(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vb;
    _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vd = -sin(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__va + cos(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__theta_dq) * _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vb;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum4
    _ev_charging_station_inverter_controller_single_phase_pll1_sum4__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product2
    _ev_charging_station_inverter_controller_single_phase_pll1_product2__out = (_ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out * _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.w_to_f
    _ev_charging_station_inverter_controller_single_phase_pll1_w_to_f__out = 0.15915494309189535 * _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum9
    _ev_charging_station_inverter_controller_single_phase_pll1_sum9__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum11
    _ev_charging_station_inverter_controller_single_phase_pll1_sum11__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum13
    _ev_charging_station_inverter_controller_single_phase_pll1_sum13__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum14
    _ev_charging_station_inverter_controller_single_phase_pll1_sum14__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Hilbert Transform
    _ev_charging_station_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_hilbert_transform__i = 0; _ev_charging_station_inverter_controller_hilbert_transform__i < 1; _ev_charging_station_inverter_controller_hilbert_transform__i++) {
        _ev_charging_station_inverter_controller_hilbert_transform__b_sum += _ev_charging_station_inverter_controller_hilbert_transform__b_coeff[_ev_charging_station_inverter_controller_hilbert_transform__i + 1] * _ev_charging_station_inverter_controller_hilbert_transform__states[_ev_charging_station_inverter_controller_hilbert_transform__i];
    }
    _ev_charging_station_inverter_controller_hilbert_transform__a_sum += _ev_charging_station_inverter_controller_hilbert_transform__states[0] * _ev_charging_station_inverter_controller_hilbert_transform__a_coeff[1];
    _ev_charging_station_inverter_controller_hilbert_transform__delay_line_in = _ev_charging_station_inverter_e_va1__out - _ev_charging_station_inverter_controller_hilbert_transform__a_sum;
    _ev_charging_station_inverter_controller_hilbert_transform__b_sum += _ev_charging_station_inverter_controller_hilbert_transform__b_coeff[0] * _ev_charging_station_inverter_controller_hilbert_transform__delay_line_in;
    _ev_charging_station_inverter_controller_hilbert_transform__out = _ev_charging_station_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum1
    _ev_charging_station_inverter_controller_single_phase_pll1_sum1__out =  - _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__out + _ev_charging_station_inverter_e_va1__out;
    // Generated from the component: EV Charging Station.Inverter.V
    HIL_OutAO(0x4039, (float)_ev_charging_station_inverter_e_va1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Hilbert Transform1
    _ev_charging_station_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_hilbert_transform1__i = 0; _ev_charging_station_inverter_controller_hilbert_transform1__i < 1; _ev_charging_station_inverter_controller_hilbert_transform1__i++) {
        _ev_charging_station_inverter_controller_hilbert_transform1__b_sum += _ev_charging_station_inverter_controller_hilbert_transform1__b_coeff[_ev_charging_station_inverter_controller_hilbert_transform1__i + 1] * _ev_charging_station_inverter_controller_hilbert_transform1__states[_ev_charging_station_inverter_controller_hilbert_transform1__i];
    }
    _ev_charging_station_inverter_controller_hilbert_transform1__a_sum += _ev_charging_station_inverter_controller_hilbert_transform1__states[0] * _ev_charging_station_inverter_controller_hilbert_transform1__a_coeff[1];
    _ev_charging_station_inverter_controller_hilbert_transform1__delay_line_in = _ev_charging_station_inverter_i_ia1__out - _ev_charging_station_inverter_controller_hilbert_transform1__a_sum;
    _ev_charging_station_inverter_controller_hilbert_transform1__b_sum += _ev_charging_station_inverter_controller_hilbert_transform1__b_coeff[0] * _ev_charging_station_inverter_controller_hilbert_transform1__delay_line_in;
    _ev_charging_station_inverter_controller_hilbert_transform1__out = _ev_charging_station_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: EV Charging Station.Inverter.P
    HIL_OutAO(0x4036, (float)_ev_charging_station_inverter_power_meas_gain4__out);
    // Generated from the component: EV Charging Station.Inverter.Q
    HIL_OutAO(0x4037, (float)_ev_charging_station_inverter_power_meas_gain5__out);
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Gain6
    _ev_charging_station_inverter_power_meas_gain6__out = 50000.0 * _ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: EV Charging Station.Inverter.pf
    HIL_OutAO(0x403a, (float)_ev_charging_station_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: EV Charging Station.Inverter.LPF_dc
    _ev_charging_station_inverter_lpf_dc__a_sum = 0.0f;
    _ev_charging_station_inverter_lpf_dc__b_sum = 0.0f;
    _ev_charging_station_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_lpf_dc__i = 0; _ev_charging_station_inverter_lpf_dc__i < 1; _ev_charging_station_inverter_lpf_dc__i++) {
        _ev_charging_station_inverter_lpf_dc__b_sum += _ev_charging_station_inverter_lpf_dc__b_coeff[_ev_charging_station_inverter_lpf_dc__i + 1] * _ev_charging_station_inverter_lpf_dc__states[_ev_charging_station_inverter_lpf_dc__i];
    }
    _ev_charging_station_inverter_lpf_dc__a_sum += _ev_charging_station_inverter_lpf_dc__states[0] * _ev_charging_station_inverter_lpf_dc__a_coeff[1];
    _ev_charging_station_inverter_lpf_dc__delay_line_in = _ev_charging_station_inverter_vdc_va1__out - _ev_charging_station_inverter_lpf_dc__a_sum;
    _ev_charging_station_inverter_lpf_dc__b_sum += _ev_charging_station_inverter_lpf_dc__b_coeff[0] * _ev_charging_station_inverter_lpf_dc__delay_line_in;
    _ev_charging_station_inverter_lpf_dc__out = _ev_charging_station_inverter_lpf_dc__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.LPF_dc3
    _ev_charging_station_li_battery_lpf_dc3__a_sum = 0.0f;
    _ev_charging_station_li_battery_lpf_dc3__b_sum = 0.0f;
    _ev_charging_station_li_battery_lpf_dc3__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_lpf_dc3__i = 0; _ev_charging_station_li_battery_lpf_dc3__i < 1; _ev_charging_station_li_battery_lpf_dc3__i++) {
        _ev_charging_station_li_battery_lpf_dc3__b_sum += _ev_charging_station_li_battery_lpf_dc3__b_coeff[_ev_charging_station_li_battery_lpf_dc3__i + 1] * _ev_charging_station_li_battery_lpf_dc3__states[_ev_charging_station_li_battery_lpf_dc3__i];
    }
    _ev_charging_station_li_battery_lpf_dc3__a_sum += _ev_charging_station_li_battery_lpf_dc3__states[0] * _ev_charging_station_li_battery_lpf_dc3__a_coeff[1];
    _ev_charging_station_li_battery_lpf_dc3__delay_line_in = _ev_charging_station_li_battery_idc_ia1__out - _ev_charging_station_li_battery_lpf_dc3__a_sum;
    _ev_charging_station_li_battery_lpf_dc3__b_sum += _ev_charging_station_li_battery_lpf_dc3__b_coeff[0] * _ev_charging_station_li_battery_lpf_dc3__delay_line_in;
    _ev_charging_station_li_battery_lpf_dc3__out = _ev_charging_station_li_battery_lpf_dc3__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.P
    HIL_OutAO(0x4042, (float)_ev_charging_station_li_battery_product1__out);
    // Generated from the component: EV Charging Station.Li Battery.LPF_dc2
    _ev_charging_station_li_battery_lpf_dc2__a_sum = 0.0f;
    _ev_charging_station_li_battery_lpf_dc2__b_sum = 0.0f;
    _ev_charging_station_li_battery_lpf_dc2__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_lpf_dc2__i = 0; _ev_charging_station_li_battery_lpf_dc2__i < 1; _ev_charging_station_li_battery_lpf_dc2__i++) {
        _ev_charging_station_li_battery_lpf_dc2__b_sum += _ev_charging_station_li_battery_lpf_dc2__b_coeff[_ev_charging_station_li_battery_lpf_dc2__i + 1] * _ev_charging_station_li_battery_lpf_dc2__states[_ev_charging_station_li_battery_lpf_dc2__i];
    }
    _ev_charging_station_li_battery_lpf_dc2__a_sum += _ev_charging_station_li_battery_lpf_dc2__states[0] * _ev_charging_station_li_battery_lpf_dc2__a_coeff[1];
    _ev_charging_station_li_battery_lpf_dc2__delay_line_in = _ev_charging_station_li_battery_vdc_va1__out - _ev_charging_station_li_battery_lpf_dc2__a_sum;
    _ev_charging_station_li_battery_lpf_dc2__b_sum += _ev_charging_station_li_battery_lpf_dc2__b_coeff[0] * _ev_charging_station_li_battery_lpf_dc2__delay_line_in;
    _ev_charging_station_li_battery_lpf_dc2__out = _ev_charging_station_li_battery_lpf_dc2__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.VDC
    HIL_OutAO(0x4043, (float)_ev_charging_station_li_battery_vdc_va1__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__out = sqrt(_ev_charging_station_measurement_single_phase_power_meter1_ia_rms__square_sum / _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt);
        _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__square_sum = 0.0f;
    }
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _ev_charging_station_measurement_single_phase_power_meter1_va_rms__out = sqrt(_ev_charging_station_measurement_single_phase_power_meter1_va_rms__square_sum / _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt);
        _ev_charging_station_measurement_single_phase_power_meter1_va_rms__square_sum = 0.0f;
    }
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.phi
    _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_diff = _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state;
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
    // Generated from the component: ESS.Inverter.Controller.Gain21
    _ess_inverter_controller_gain21__out = 0.1 * _ess_inverter_controller_c_function2__out;
    // Generated from the component: ESS.Inverter.Controller.Gain22
    _ess_inverter_controller_gain22__out = 0.1 * _ess_inverter_controller_c_function1__out;
    // Generated from the component: ESS.Inverter.Controller.Gain33
    _ess_inverter_controller_gain33__out = 1000.0 * _ess_inverter_controller_c_function1__out;
    // Generated from the component: ESS.Inverter.Controller.C function4
    _ess_inverter_controller_c_function4__Ts = _ess_inverter_controller_constant4__out;
    _ess_inverter_controller_c_function4__in = _ess_inverter_controller_gain25__out;
    _ess_inverter_controller_c_function4__pi = _ess_inverter_controller_constant3__out;
    _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out + _ess_inverter_controller_c_function4__in * _ess_inverter_controller_c_function4__Ts;
    if (_ess_inverter_controller_c_function4__out >= 2 * _ess_inverter_controller_c_function4__pi) {
        _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out - 2 * _ess_inverter_controller_c_function4__pi;
    }
    // Generated from the component: ESS.Inverter.Controller.w
    HIL_OutAO(0x4015, (float)_ess_inverter_controller_gain25__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain3
    _ess_inverter_controller_single_phase_pll1_gain3__out = -1.0 * _ess_inverter_controller_single_phase_pll1_c_function1__vd;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Math_f1
    _ess_inverter_controller_single_phase_pll1_math_f1__out = pow(_ess_inverter_controller_single_phase_pll1_c_function1__vq, _ess_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Math_f2
    _ess_inverter_controller_single_phase_pll1_math_f2__out = pow(_ess_inverter_controller_single_phase_pll1_c_function1__vd, _ess_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain5
    _ess_inverter_controller_single_phase_pll1_gain5__out = 125.66370614359172 * _ess_inverter_controller_single_phase_pll1_sum4__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum12
    _ess_inverter_controller_single_phase_pll1_sum12__out = _ess_inverter_controller_single_phase_pll1_w_to_f__out - _ess_inverter_controller_single_phase_pll1_integrator7__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain7
    _ess_inverter_controller_single_phase_pll1_gain7__out = 628.3185307179587 * _ess_inverter_controller_single_phase_pll1_sum9__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain8
    _ess_inverter_controller_single_phase_pll1_gain8__out = 62.83185307179586 * _ess_inverter_controller_single_phase_pll1_sum11__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain10
    _ess_inverter_controller_single_phase_pll1_gain10__out = 62.83185307179586 * _ess_inverter_controller_single_phase_pll1_sum13__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain11
    _ess_inverter_controller_single_phase_pll1_gain11__out = 62.83185307179586 * _ess_inverter_controller_single_phase_pll1_sum14__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain2
    _ess_inverter_controller_single_phase_pll1_gain2__out = 0.4 * _ess_inverter_controller_single_phase_pll1_sum1__out;
    // Generated from the component: ESS.Inverter.S
    HIL_OutAO(0x4018, (float)_ess_inverter_power_meas_gain6__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.calc S
    _ess_measurement_single_phase_power_meter1_calc_s__out = (_ess_measurement_single_phase_power_meter1_va_rms__out * _ess_measurement_single_phase_power_meter1_ia_rms__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Degree to radians
    _ess_measurement_single_phase_power_meter1_degree_to_radians__out = (_ess_measurement_single_phase_power_meter1_phi__phase_diff * _ess_measurement_single_phase_power_meter1_radian__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Pref
    HIL_OutAO(0x4032, (float)_ev_charging_station_inverter_controller_gain34__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.C function4
    _ev_charging_station_inverter_controller_c_function4__Ts = _ev_charging_station_inverter_controller_constant4__out;
    _ev_charging_station_inverter_controller_c_function4__in = _ev_charging_station_inverter_controller_gain25__out;
    _ev_charging_station_inverter_controller_c_function4__pi = _ev_charging_station_inverter_controller_constant3__out;
    _ev_charging_station_inverter_controller_c_function4__out = _ev_charging_station_inverter_controller_c_function4__out + _ev_charging_station_inverter_controller_c_function4__in * _ev_charging_station_inverter_controller_c_function4__Ts;
    if (_ev_charging_station_inverter_controller_c_function4__out >= 2 * _ev_charging_station_inverter_controller_c_function4__pi) {
        _ev_charging_station_inverter_controller_c_function4__out = _ev_charging_station_inverter_controller_c_function4__out - 2 * _ev_charging_station_inverter_controller_c_function4__pi;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.w
    HIL_OutAO(0x4035, (float)_ev_charging_station_inverter_controller_gain25__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain3
    _ev_charging_station_inverter_controller_single_phase_pll1_gain3__out = -1.0 * _ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vd;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Math_f1
    _ev_charging_station_inverter_controller_single_phase_pll1_math_f1__out = pow(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vq, _ev_charging_station_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Math_f2
    _ev_charging_station_inverter_controller_single_phase_pll1_math_f2__out = pow(_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vd, _ev_charging_station_inverter_controller_single_phase_pll1_constant2__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain5
    _ev_charging_station_inverter_controller_single_phase_pll1_gain5__out = 125.66370614359172 * _ev_charging_station_inverter_controller_single_phase_pll1_sum4__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum12
    _ev_charging_station_inverter_controller_single_phase_pll1_sum12__out = _ev_charging_station_inverter_controller_single_phase_pll1_w_to_f__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain7
    _ev_charging_station_inverter_controller_single_phase_pll1_gain7__out = 628.3185307179587 * _ev_charging_station_inverter_controller_single_phase_pll1_sum9__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain8
    _ev_charging_station_inverter_controller_single_phase_pll1_gain8__out = 62.83185307179586 * _ev_charging_station_inverter_controller_single_phase_pll1_sum11__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain10
    _ev_charging_station_inverter_controller_single_phase_pll1_gain10__out = 62.83185307179586 * _ev_charging_station_inverter_controller_single_phase_pll1_sum13__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain11
    _ev_charging_station_inverter_controller_single_phase_pll1_gain11__out = 62.83185307179586 * _ev_charging_station_inverter_controller_single_phase_pll1_sum14__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain2
    _ev_charging_station_inverter_controller_single_phase_pll1_gain2__out = 0.4 * _ev_charging_station_inverter_controller_single_phase_pll1_sum1__out;
    // Generated from the component: EV Charging Station.Inverter.S
    HIL_OutAO(0x4038, (float)_ev_charging_station_inverter_power_meas_gain6__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.calc S
    _ev_charging_station_measurement_single_phase_power_meter1_calc_s__out = (_ev_charging_station_measurement_single_phase_power_meter1_va_rms__out * _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Degree to radians
    _ev_charging_station_measurement_single_phase_power_meter1_degree_to_radians__out = (_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_diff * _ev_charging_station_measurement_single_phase_power_meter1_radian__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.calc S
    _measurement_single_phase_power_meter1_calc_s__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.Degree to radians
    _measurement_single_phase_power_meter1_degree_to_radians__out = (_measurement_single_phase_power_meter1_phi__phase_diff * _measurement_single_phase_power_meter1_radian__out);
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq1
    _ess_inverter_controller_alpha_beta_to_dq1__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__d = _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_e_va1__out - _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_controller_hilbert_transform__out;
    _ess_inverter_controller_alpha_beta_to_dq1__q = _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_e_va1__out + _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_controller_hilbert_transform__out;
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq2
    _ess_inverter_controller_alpha_beta_to_dq2__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__d = _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_i_ia1__out - _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_controller_hilbert_transform1__out;
    _ess_inverter_controller_alpha_beta_to_dq2__q = _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_i_ia1__out + _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_controller_hilbert_transform1__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum7
    _ess_inverter_controller_single_phase_pll1_sum7__out = _ess_inverter_controller_single_phase_pll1_gain3__out - _ess_inverter_controller_single_phase_pll1_integrator3__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum6
    _ess_inverter_controller_single_phase_pll1_sum6__out = _ess_inverter_controller_single_phase_pll1_math_f1__out + _ess_inverter_controller_single_phase_pll1_math_f2__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain9
    _ess_inverter_controller_single_phase_pll1_gain9__out = 62.83185307179586 * _ess_inverter_controller_single_phase_pll1_sum12__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum2
    _ess_inverter_controller_single_phase_pll1_sum2__out = _ess_inverter_controller_single_phase_pll1_gain2__out - _ess_inverter_controller_single_phase_pll1_integrator2__out;
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.cos
    _ess_measurement_single_phase_power_meter1_cos__out = cos(_ess_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.sin
    _ess_measurement_single_phase_power_meter1_sin__out = sin(_ess_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.alpha beta to dq1
    _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k1 = cos(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k2 = sin(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_alpha_beta_to_dq1__d = _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k2 * _ev_charging_station_inverter_e_va1__out - _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k1 * _ev_charging_station_inverter_controller_hilbert_transform__out;
    _ev_charging_station_inverter_controller_alpha_beta_to_dq1__q = _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k1 * _ev_charging_station_inverter_e_va1__out + _ev_charging_station_inverter_controller_alpha_beta_to_dq1__k2 * _ev_charging_station_inverter_controller_hilbert_transform__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.alpha beta to dq2
    _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k1 = cos(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k2 = sin(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_alpha_beta_to_dq2__d = _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k2 * _ev_charging_station_inverter_i_ia1__out - _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k1 * _ev_charging_station_inverter_controller_hilbert_transform1__out;
    _ev_charging_station_inverter_controller_alpha_beta_to_dq2__q = _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k1 * _ev_charging_station_inverter_i_ia1__out + _ev_charging_station_inverter_controller_alpha_beta_to_dq2__k2 * _ev_charging_station_inverter_controller_hilbert_transform1__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum7
    _ev_charging_station_inverter_controller_single_phase_pll1_sum7__out = _ev_charging_station_inverter_controller_single_phase_pll1_gain3__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum6
    _ev_charging_station_inverter_controller_single_phase_pll1_sum6__out = _ev_charging_station_inverter_controller_single_phase_pll1_math_f1__out + _ev_charging_station_inverter_controller_single_phase_pll1_math_f2__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain9
    _ev_charging_station_inverter_controller_single_phase_pll1_gain9__out = 62.83185307179586 * _ev_charging_station_inverter_controller_single_phase_pll1_sum12__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum2
    _ev_charging_station_inverter_controller_single_phase_pll1_sum2__out = _ev_charging_station_inverter_controller_single_phase_pll1_gain2__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__out;
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.cos
    _ev_charging_station_measurement_single_phase_power_meter1_cos__out = cos(_ev_charging_station_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.sin
    _ev_charging_station_measurement_single_phase_power_meter1_sin__out = sin(_ev_charging_station_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.cos
    _measurement_single_phase_power_meter1_cos__out = cos(_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.sin
    _measurement_single_phase_power_meter1_sin__out = sin(_measurement_single_phase_power_meter1_degree_to_radians__out);
    // Generated from the component: ESS.Inverter.Controller.Gain28
    _ess_inverter_controller_gain28__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: ESS.Inverter.Controller.Gain29
    _ess_inverter_controller_gain29__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: ESS.Inverter.Controller.Gain30
    _ess_inverter_controller_gain30__out = 0.016970562748477143 * _ess_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: ESS.Inverter.Controller.Gain31
    _ess_inverter_controller_gain31__out = 0.016970562748477143 * _ess_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain4
    _ess_inverter_controller_single_phase_pll1_gain4__out = 125.66370614359172 * _ess_inverter_controller_single_phase_pll1_sum7__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Math1
    _ess_inverter_controller_single_phase_pll1_math1__out = sqrt(_ess_inverter_controller_single_phase_pll1_sum6__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product1
    _ess_inverter_controller_single_phase_pll1_product1__out = (_ess_inverter_controller_single_phase_pll1_sum2__out * _ess_inverter_controller_single_phase_pll1_integrator5__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Pmult
    _ess_measurement_single_phase_power_meter1_pmult__out = (_ess_measurement_single_phase_power_meter1_va_rms__out * _ess_measurement_single_phase_power_meter1_ia_rms__out * _ess_measurement_single_phase_power_meter1_cos__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.conjugate
    _ess_measurement_single_phase_power_meter1_conjugate__out = -1.0 * _ess_measurement_single_phase_power_meter1_sin__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain28
    _ev_charging_station_inverter_controller_gain28__out = 0.002946278254943948 * _ev_charging_station_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain29
    _ev_charging_station_inverter_controller_gain29__out = 0.002946278254943948 * _ev_charging_station_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain30
    _ev_charging_station_inverter_controller_gain30__out = 0.003394112549695428 * _ev_charging_station_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain31
    _ev_charging_station_inverter_controller_gain31__out = 0.003394112549695428 * _ev_charging_station_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain4
    _ev_charging_station_inverter_controller_single_phase_pll1_gain4__out = 125.66370614359172 * _ev_charging_station_inverter_controller_single_phase_pll1_sum7__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Math1
    _ev_charging_station_inverter_controller_single_phase_pll1_math1__out = sqrt(_ev_charging_station_inverter_controller_single_phase_pll1_sum6__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product1
    _ev_charging_station_inverter_controller_single_phase_pll1_product1__out = (_ev_charging_station_inverter_controller_single_phase_pll1_sum2__out * _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Pmult
    _ev_charging_station_measurement_single_phase_power_meter1_pmult__out = (_ev_charging_station_measurement_single_phase_power_meter1_va_rms__out * _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__out * _ev_charging_station_measurement_single_phase_power_meter1_cos__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.conjugate
    _ev_charging_station_measurement_single_phase_power_meter1_conjugate__out = -1.0 * _ev_charging_station_measurement_single_phase_power_meter1_sin__out;
    // Generated from the component: Measurement.Single Phase Power Meter1.Pmult
    _measurement_single_phase_power_meter1_pmult__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out * _measurement_single_phase_power_meter1_cos__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.conjugate
    _measurement_single_phase_power_meter1_conjugate__out = -1.0 * _measurement_single_phase_power_meter1_sin__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _ess_inverter_controller_gain28__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_constant5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_ess_inverter_controller_gain22__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Vd
    HIL_OutAO(0x4013, (float)_ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _ess_inverter_controller_gain29__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain22__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_ess_inverter_controller_constant5__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Vq
    HIL_OutAO(0x4014, (float)_ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Id
    HIL_OutAO(0x4005, (float)_ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.002864583333333333 * _ess_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _ess_inverter_power_meas_power_meas_dqpu_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _ess_inverter_power_meas_power_meas_dqpu_product4__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Iq
    HIL_OutAO(0x4006, (float)_ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.002864583333333333 * _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _ess_inverter_power_meas_power_meas_dqpu_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _ess_inverter_power_meas_power_meas_dqpu_product3__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Limit1
    if (_ess_inverter_controller_single_phase_pll1_math1__out < 1e-05) {
        _ess_inverter_controller_single_phase_pll1_limit1__out = 1e-05;
    } else {
        _ess_inverter_controller_single_phase_pll1_limit1__out = _ess_inverter_controller_single_phase_pll1_math1__out;
    }
    // Generated from the component: ESS.Measurement.P
    HIL_OutAO(0x4024, (float)_ess_measurement_single_phase_power_meter1_pmult__out);
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Qmult
    _ess_measurement_single_phase_power_meter1_qmult__out = (_ess_measurement_single_phase_power_meter1_va_rms__out * _ess_measurement_single_phase_power_meter1_ia_rms__out * _ess_measurement_single_phase_power_meter1_conjugate__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _ev_charging_station_inverter_controller_gain28__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_ev_charging_station_inverter_controller_gain28__out * _ev_charging_station_inverter_controller_constant5__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_ev_charging_station_inverter_controller_gain33__out * _ev_charging_station_inverter_controller_gain28__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ev_charging_station_inverter_controller_gain28__out * _ev_charging_station_inverter_controller_gain28__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Vd
    HIL_OutAO(0x4033, (float)_ev_charging_station_inverter_controller_gain28__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _ev_charging_station_inverter_controller_gain29__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_ev_charging_station_inverter_controller_gain29__out * _ev_charging_station_inverter_controller_gain33__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_ev_charging_station_inverter_controller_constant5__out * _ev_charging_station_inverter_controller_gain29__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ev_charging_station_inverter_controller_gain29__out * _ev_charging_station_inverter_controller_gain29__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Vq
    HIL_OutAO(0x4034, (float)_ev_charging_station_inverter_controller_gain29__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Id
    HIL_OutAO(0x4026, (float)_ev_charging_station_inverter_controller_gain30__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _ev_charging_station_inverter_controller_gain30__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_product1__out = (_ev_charging_station_inverter_controller_gain28__out * _ev_charging_station_inverter_controller_gain30__out);
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_product4__out = (_ev_charging_station_inverter_controller_gain29__out * _ev_charging_station_inverter_controller_gain30__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Iq
    HIL_OutAO(0x4027, (float)_ev_charging_station_inverter_controller_gain31__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _ev_charging_station_inverter_controller_gain31__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_product2__out = (_ev_charging_station_inverter_controller_gain29__out * _ev_charging_station_inverter_controller_gain31__out);
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_product3__out = (_ev_charging_station_inverter_controller_gain28__out * _ev_charging_station_inverter_controller_gain31__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Limit1
    if (_ev_charging_station_inverter_controller_single_phase_pll1_math1__out < 1e-05) {
        _ev_charging_station_inverter_controller_single_phase_pll1_limit1__out = 1e-05;
    } else {
        _ev_charging_station_inverter_controller_single_phase_pll1_limit1__out = _ev_charging_station_inverter_controller_single_phase_pll1_math1__out;
    }
    // Generated from the component: EV Charging Station.Measurement.P
    HIL_OutAO(0x4044, (float)_ev_charging_station_measurement_single_phase_power_meter1_pmult__out);
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Qmult
    _ev_charging_station_measurement_single_phase_power_meter1_qmult__out = (_ev_charging_station_measurement_single_phase_power_meter1_va_rms__out * _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__out * _ev_charging_station_measurement_single_phase_power_meter1_conjugate__out);
    // Generated from the component: Measurement.P
    HIL_OutAO(0x4046, (float)_measurement_single_phase_power_meter1_pmult__out);
    // Generated from the component: Measurement.Single Phase Power Meter1.Qmult
    _measurement_single_phase_power_meter1_qmult__out = (_measurement_single_phase_power_meter1_va_rms__out * _measurement_single_phase_power_meter1_ia_rms__out * _measurement_single_phase_power_meter1_conjugate__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ess_inverter_controller_gain25__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ess_inverter_controller_gain25__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _ess_inverter_power_meas_power_meas_dqpu_sum1__out = _ess_inverter_power_meas_power_meas_dqpu_product1__out + _ess_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _ess_inverter_power_meas_power_meas_dqpu_sum2__out = _ess_inverter_power_meas_power_meas_dqpu_product4__out - _ess_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product8
    _ess_inverter_controller_single_phase_pll1_product8__out = (_ess_inverter_controller_single_phase_pll1_c_function1__vq) * 1.0 / (_ess_inverter_controller_single_phase_pll1_limit1__out);
    // Generated from the component: ESS.Measurement.Q
    HIL_OutAO(0x4025, (float)_ess_measurement_single_phase_power_meter1_qmult__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ev_charging_station_inverter_controller_gain25__out * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ev_charging_station_inverter_controller_gain25__out * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum1__out = _ev_charging_station_inverter_power_meas_power_meas_dqpu_product1__out + _ev_charging_station_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum2__out = _ev_charging_station_inverter_power_meas_power_meas_dqpu_product4__out - _ev_charging_station_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product8
    _ev_charging_station_inverter_controller_single_phase_pll1_product8__out = (_ev_charging_station_inverter_controller_single_phase_pll1_c_function1__vq) * 1.0 / (_ev_charging_station_inverter_controller_single_phase_pll1_limit1__out);
    // Generated from the component: EV Charging Station.Measurement.Q
    HIL_OutAO(0x4045, (float)_ev_charging_station_measurement_single_phase_power_meter1_qmult__out);
    // Generated from the component: Measurement.Q
    HIL_OutAO(0x4047, (float)_measurement_single_phase_power_meter1_qmult__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4007, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _ess_inverter_power_meas_power_meas_dqpu_sum1__out - _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _ess_inverter_power_meas_power_meas_dqpu_sum2__out - _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Abs1
    _ess_inverter_controller_single_phase_pll1_abs1__out = fabs(_ess_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4028, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum1__out - _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__out = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _ev_charging_station_inverter_power_meas_power_meas_dqpu_sum2__out - _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__out = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Abs1
    _ev_charging_station_inverter_controller_single_phase_pll1_abs1__out = fabs(_ev_charging_station_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Kd_LUT
    if(_ess_inverter_controller_single_phase_pll1_abs1__out <= _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]) {
        _ess_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0])
                / (_ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[1] - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]);
        _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
    }
    else if(_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99]) {
        _ess_inverter_controller_single_phase_pll1_kd_lut__curAddr = 99 >> 1;
        _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
        _ess_inverter_controller_single_phase_pll1_kd_lut__rightIndex = 99;
        while (1 < _ess_inverter_controller_single_phase_pll1_kd_lut__rightIndex - _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex) {
            if (_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kd_lut__curAddr]) {
                _ess_inverter_controller_single_phase_pll1_kd_lut__rightIndex = _ess_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            else {
                _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex = _ess_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            _ess_inverter_controller_single_phase_pll1_kd_lut__curAddr = (_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex + _ess_inverter_controller_single_phase_pll1_kd_lut__rightIndex) >> 1;
        }
        _ess_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
                / (_ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex]);
    }
    else {
        _ess_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98])
                / (_ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99] - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98]);
        _ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 98;
    }
    _ess_inverter_controller_single_phase_pll1_kd_lut__value = (_ess_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
            * _ess_inverter_controller_single_phase_pll1_kd_lut__fraction + _ess_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kd_lut__leftIndex];
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Ki_LUT
    if(_ess_inverter_controller_single_phase_pll1_abs1__out <= _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]) {
        _ess_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0])
                / (_ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[1] - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]);
        _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
    }
    else if(_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99]) {
        _ess_inverter_controller_single_phase_pll1_ki_lut__curAddr = 99 >> 1;
        _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
        _ess_inverter_controller_single_phase_pll1_ki_lut__rightIndex = 99;
        while (1 < _ess_inverter_controller_single_phase_pll1_ki_lut__rightIndex - _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex) {
            if (_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_ki_lut__curAddr]) {
                _ess_inverter_controller_single_phase_pll1_ki_lut__rightIndex = _ess_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            else {
                _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex = _ess_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            _ess_inverter_controller_single_phase_pll1_ki_lut__curAddr = (_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex + _ess_inverter_controller_single_phase_pll1_ki_lut__rightIndex) >> 1;
        }
        _ess_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
                / (_ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex]);
    }
    else {
        _ess_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98])
                / (_ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99] - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98]);
        _ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 98;
    }
    _ess_inverter_controller_single_phase_pll1_ki_lut__value = (_ess_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
            * _ess_inverter_controller_single_phase_pll1_ki_lut__fraction + _ess_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ess_inverter_controller_single_phase_pll1_ki_lut__leftIndex];
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Kp_LUT
    if(_ess_inverter_controller_single_phase_pll1_abs1__out <= _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]) {
        _ess_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0])
                / (_ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[1] - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]);
        _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
    }
    else if(_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99]) {
        _ess_inverter_controller_single_phase_pll1_kp_lut__curAddr = 99 >> 1;
        _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
        _ess_inverter_controller_single_phase_pll1_kp_lut__rightIndex = 99;
        while (1 < _ess_inverter_controller_single_phase_pll1_kp_lut__rightIndex - _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex) {
            if (_ess_inverter_controller_single_phase_pll1_abs1__out < _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kp_lut__curAddr]) {
                _ess_inverter_controller_single_phase_pll1_kp_lut__rightIndex = _ess_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            else {
                _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex = _ess_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            _ess_inverter_controller_single_phase_pll1_kp_lut__curAddr = (_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex + _ess_inverter_controller_single_phase_pll1_kp_lut__rightIndex) >> 1;
        }
        _ess_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
                / (_ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex]);
    }
    else {
        _ess_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ess_inverter_controller_single_phase_pll1_abs1__out - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98])
                / (_ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99] - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98]);
        _ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 98;
    }
    _ess_inverter_controller_single_phase_pll1_kp_lut__value = (_ess_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _ess_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
            * _ess_inverter_controller_single_phase_pll1_kp_lut__fraction + _ess_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ess_inverter_controller_single_phase_pll1_kp_lut__leftIndex];
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Kd_LUT
    if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out <= _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[1] - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[0]);
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr = 99 >> 1;
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 0;
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__rightIndex = 99;
        while (1 < _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__rightIndex - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex) {
            if (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr]) {
                _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__rightIndex = _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            else {
                _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex = _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr;
            }
            _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__curAddr = (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex + _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__rightIndex) >> 1;
        }
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex]);
    }
    else {
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[99] - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_addrs[98]);
        _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex = 98;
    }
    _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__value = (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex])
            * _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__fraction + _ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__leftIndex];
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Ki_LUT
    if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out <= _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[1] - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[0]);
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr = 99 >> 1;
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 0;
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__rightIndex = 99;
        while (1 < _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__rightIndex - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex) {
            if (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr]) {
                _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__rightIndex = _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            else {
                _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex = _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr;
            }
            _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__curAddr = (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex + _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__rightIndex) >> 1;
        }
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex]);
    }
    else {
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[99] - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_addrs[98]);
        _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex = 98;
    }
    _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__value = (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex])
            * _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__fraction + _ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__leftIndex];
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Kp_LUT
    if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out <= _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[1] - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[0]);
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99]) {
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr = 99 >> 1;
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 0;
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__rightIndex = 99;
        while (1 < _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__rightIndex - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex) {
            if (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out < _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr]) {
                _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__rightIndex = _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            else {
                _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex = _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr;
            }
            _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__curAddr = (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex + _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__rightIndex) >> 1;
        }
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex]);
    }
    else {
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__fraction = (_ev_charging_station_inverter_controller_single_phase_pll1_abs1__out - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98])
                / (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[99] - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_addrs[98]);
        _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex = 98;
    }
    _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__value = (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex + 1] - _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex])
            * _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__fraction + _ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__lut_table[_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__leftIndex];
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x400e, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product6
    _ess_inverter_controller_single_phase_pll1_product6__out = (_ess_inverter_controller_single_phase_pll1_kd_lut__value * _ess_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product5
    _ess_inverter_controller_single_phase_pll1_product5__out = (_ess_inverter_controller_single_phase_pll1_ki_lut__value * _ess_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Product7
    _ess_inverter_controller_single_phase_pll1_product7__out = (_ess_inverter_controller_single_phase_pll1_kp_lut__value * _ess_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x402f, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product6
    _ev_charging_station_inverter_controller_single_phase_pll1_product6__out = (_ev_charging_station_inverter_controller_single_phase_pll1_kd_lut__value * _ev_charging_station_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product5
    _ev_charging_station_inverter_controller_single_phase_pll1_product5__out = (_ev_charging_station_inverter_controller_single_phase_pll1_ki_lut__value * _ev_charging_station_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Product7
    _ev_charging_station_inverter_controller_single_phase_pll1_product7__out = (_ev_charging_station_inverter_controller_single_phase_pll1_kp_lut__value * _ev_charging_station_inverter_controller_single_phase_pll1_product8__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4009, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4008, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _ess_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[_ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i + 1] * _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__i];
    }
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum += _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] * _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = _ess_inverter_controller_single_phase_pll1_product6__out - _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__out = _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x402a, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _ev_charging_station_inverter_controller_gain31__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4029, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _ev_charging_station_inverter_controller_gain30__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum = 0.0f;
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum = 0.0f;
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = 0.0f;
    for (_ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i = 0; _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i < 1; _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i++) {
        _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[_ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i + 1] * _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[_ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__i];
    }
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum += _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] * _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_coeff[1];
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in = _ev_charging_station_inverter_controller_single_phase_pll1_product6__out - _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__a_sum;
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum += _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_coeff[0] * _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__out = _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 3.1661458333333328 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.5) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.5;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.5) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.5;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x400d, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 3.1661458333333328 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.5) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.5;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.5) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.5;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x400c, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum8
    _ess_inverter_controller_single_phase_pll1_sum8__out = _ess_inverter_controller_single_phase_pll1_product7__out + _ess_inverter_controller_single_phase_pll1_i__out + _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = -1.0;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = 1.0;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x402e, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = -1.0;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = 1.0;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x402d, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum8
    _ev_charging_station_inverter_controller_single_phase_pll1_sum8__out = _ev_charging_station_inverter_controller_single_phase_pll1_product7__out + _ev_charging_station_inverter_controller_single_phase_pll1_i__out + _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Limit2
    if (_ess_inverter_controller_single_phase_pll1_sum8__out > 62.83185307179586) {
        _ess_inverter_controller_single_phase_pll1_limit2__out = 62.83185307179586;
    } else if (_ess_inverter_controller_single_phase_pll1_sum8__out < -62.83185307179586) {
        _ess_inverter_controller_single_phase_pll1_limit2__out = -62.83185307179586;
    } else {
        _ess_inverter_controller_single_phase_pll1_limit2__out = _ess_inverter_controller_single_phase_pll1_sum8__out;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Limit2
    if (_ev_charging_station_inverter_controller_single_phase_pll1_sum8__out > 62.83185307179586) {
        _ev_charging_station_inverter_controller_single_phase_pll1_limit2__out = 62.83185307179586;
    } else if (_ev_charging_station_inverter_controller_single_phase_pll1_sum8__out < -62.83185307179586) {
        _ev_charging_station_inverter_controller_single_phase_pll1_limit2__out = -62.83185307179586;
    } else {
        _ev_charging_station_inverter_controller_single_phase_pll1_limit2__out = _ev_charging_station_inverter_controller_single_phase_pll1_sum8__out;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum5
    _ess_inverter_controller_single_phase_pll1_sum5__out = _ess_inverter_controller_single_phase_pll1_limit2__out + _ess_inverter_controller_single_phase_pll1_const__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum5
    _ev_charging_station_inverter_controller_single_phase_pll1_sum5__out = _ev_charging_station_inverter_controller_single_phase_pll1_limit2__out + _ev_charging_station_inverter_controller_single_phase_pll1_const__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out > 1.0) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = 1.0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out < -1.0) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = -1.0;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out > 1.0) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = 1.0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out < -1.0) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = -1.0;
    } else {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
    }
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Sum10
    _ess_inverter_controller_single_phase_pll1_sum10__out = _ess_inverter_controller_single_phase_pll1_sum5__out - _ess_inverter_controller_single_phase_pll1_integrator6__out;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _ess_inverter_controller_single_phase_pll1_integrator_with_reset__in = _ess_inverter_controller_single_phase_pll1_sum5__out;
    _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out = _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out > 1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = 1.0;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out < -1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = -1.0;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out > 1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = 1.0;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out < -1.0) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = -1.0;
    } else {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Sum10
    _ev_charging_station_inverter_controller_single_phase_pll1_sum10__out = _ev_charging_station_inverter_controller_single_phase_pll1_sum5__out - _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__in = _ev_charging_station_inverter_controller_single_phase_pll1_sum5__out;
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out = _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4010, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x400f, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Gain6
    _ess_inverter_controller_single_phase_pll1_gain6__out = 628.3185307179587 * _ess_inverter_controller_single_phase_pll1_sum10__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4031, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4030, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Gain6
    _ev_charging_station_inverter_controller_single_phase_pll1_gain6__out = 628.3185307179587 * _ev_charging_station_inverter_controller_single_phase_pll1_sum10__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x400b, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x400a, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x402c, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x402b, (float)_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_ev_charging_station_inverter_controller_c_function4__out);
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: ESS.Inverter.Controller.Bus Join1
    _ess_inverter_controller_bus_join1__out[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _ess_inverter_controller_bus_join1__out[1] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: EV Charging Station.Inverter.Controller.Bus Join1
    _ev_charging_station_inverter_controller_bus_join1__out[0] = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _ev_charging_station_inverter_controller_bus_join1__out[1] = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: ESS.Inverter.Controller.Bus Split1
    _ess_inverter_controller_bus_split1__out = _ess_inverter_controller_bus_join1__out[0];
    _ess_inverter_controller_bus_split1__out1 = _ess_inverter_controller_bus_join1__out[1];
    // Generated from the component: EV Charging Station.Inverter.Controller.Bus Split1
    _ev_charging_station_inverter_controller_bus_split1__out = _ev_charging_station_inverter_controller_bus_join1__out[0];
    _ev_charging_station_inverter_controller_bus_split1__out1 = _ev_charging_station_inverter_controller_bus_join1__out[1];
    // Generated from the component: ESS.Inverter.Controller.Gain20
    _ess_inverter_controller_gain20__out = -1.0 * _ess_inverter_controller_bus_split1__out;
    // Generated from the component: EV Charging Station.Inverter.Controller.Gain20
    _ev_charging_station_inverter_controller_gain20__out = -1.0 * _ev_charging_station_inverter_controller_bus_split1__out;
    // Generated from the component: ESS.Inverter.Single Phase Inverter1.PWM_Modulator
    if (_ess_inverter_controller_bus_split1__out < -1.0)
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = -1.0;
    else if (_ess_inverter_controller_bus_split1__out > 1.0)
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = 1.0;
    else
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = _ess_inverter_controller_bus_split1__out;
    HIL_OutInt32(0x2000040 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ess_inverter_controller_gain20__out < -1.0)
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = -1.0;
    else if (_ess_inverter_controller_gain20__out > 1.0)
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = 1.0;
    else
        _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = _ess_inverter_controller_gain20__out;
    HIL_OutInt32(0x2000040 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_ess_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: EV Charging Station.Inverter.Single Phase Inverter1.PWM_Modulator
    if (_ev_charging_station_inverter_controller_bus_split1__out < -1.0)
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = -1.0;
    else if (_ev_charging_station_inverter_controller_bus_split1__out > 1.0)
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = 1.0;
    else
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = _ev_charging_station_inverter_controller_bus_split1__out;
    HIL_OutInt32(0x2000040 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    if (_ev_charging_station_inverter_controller_gain20__out < -1.0)
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = -1.0;
    else if (_ev_charging_station_inverter_controller_gain20__out > 1.0)
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = 1.0;
    else
        _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = _ev_charging_station_inverter_controller_gain20__out;
    HIL_OutInt32(0x2000040 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_ev_charging_station_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _ev_charging_station_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.I
    if (!_ess_inverter_controller_single_phase_pll1_i__av_active) {
        _ess_inverter_controller_single_phase_pll1_i__integrator_state += 1.0 * _ess_inverter_controller_single_phase_pll1_product5__out * 2e-05;
    }
    else {
        _ess_inverter_controller_single_phase_pll1_i__integrator_state = _ess_inverter_controller_single_phase_pll1_i__out;
    }
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator1
    _ess_inverter_controller_single_phase_pll1_integrator1__state += _ess_inverter_controller_single_phase_pll1_product1__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator10
    _ess_inverter_controller_single_phase_pll1_integrator10__state += _ess_inverter_controller_single_phase_pll1_gain11__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator2
    _ess_inverter_controller_single_phase_pll1_integrator2__state += _ess_inverter_controller_single_phase_pll1_product2__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator3
    _ess_inverter_controller_single_phase_pll1_integrator3__state += _ess_inverter_controller_single_phase_pll1_gain4__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator4
    _ess_inverter_controller_single_phase_pll1_integrator4__state += _ess_inverter_controller_single_phase_pll1_gain5__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator5
    _ess_inverter_controller_single_phase_pll1_integrator5__state += _ess_inverter_controller_single_phase_pll1_gain7__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator6
    _ess_inverter_controller_single_phase_pll1_integrator6__state += _ess_inverter_controller_single_phase_pll1_gain6__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator7
    _ess_inverter_controller_single_phase_pll1_integrator7__state += _ess_inverter_controller_single_phase_pll1_gain9__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator8
    _ess_inverter_controller_single_phase_pll1_integrator8__state += _ess_inverter_controller_single_phase_pll1_gain8__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Integrator9
    _ess_inverter_controller_single_phase_pll1_integrator9__state += _ess_inverter_controller_single_phase_pll1_gain10__out * 2e-05;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.I
    if (!_ev_charging_station_inverter_controller_single_phase_pll1_i__av_active) {
        _ev_charging_station_inverter_controller_single_phase_pll1_i__integrator_state += 1.0 * _ev_charging_station_inverter_controller_single_phase_pll1_product5__out * 2e-05;
    }
    else {
        _ev_charging_station_inverter_controller_single_phase_pll1_i__integrator_state = _ev_charging_station_inverter_controller_single_phase_pll1_i__out;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator1
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator1__state += _ev_charging_station_inverter_controller_single_phase_pll1_product1__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator10
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator10__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain11__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator2
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator2__state += _ev_charging_station_inverter_controller_single_phase_pll1_product2__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator3
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator3__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain4__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator4
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator4__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain5__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator5
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator5__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain7__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator6
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator6__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain6__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator7
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator7__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain9__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator8
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator8__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain8__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Integrator9
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator9__state += _ev_charging_station_inverter_controller_single_phase_pll1_gain10__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: ESS.Inverter.Controller.C function2
    // Generated from the component: ESS.Inverter.Controller.C function1
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.C function1
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    _ess_inverter_controller_hilbert_transform__states[0] = _ess_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    _ess_inverter_controller_hilbert_transform1__states[0] = _ess_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: ESS.Inverter.LPF_dc
    _ess_inverter_lpf_dc__states[0] = _ess_inverter_lpf_dc__delay_line_in;
    // Generated from the component: ESS.Li Battery.LPF_dc3
    _ess_li_battery_lpf_dc3__states[0] = _ess_li_battery_lpf_dc3__delay_line_in;
    // Generated from the component: ESS.Li Battery.LPF_dc2
    _ess_li_battery_lpf_dc2__states[0] = _ess_li_battery_lpf_dc2__delay_line_in;
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0;
    }
    _ess_measurement_single_phase_power_meter1_ia_rms__square_sum += _ess_measurement_ia_ia1__out * _ess_measurement_ia_ia1__out;
    _ess_measurement_single_phase_power_meter1_ia_rms__sample_cnt ++;
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0;
    }
    _ess_measurement_single_phase_power_meter1_va_rms__square_sum += _ess_measurement_va_va1__out * _ess_measurement_va_va1__out;
    _ess_measurement_single_phase_power_meter1_va_rms__sample_cnt ++;
    // Generated from the component: ESS.Measurement.Single Phase Power Meter1.phi
    _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref += 1;
    _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in += 1;
    _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref = _ess_measurement_single_phase_power_meter1_phi__filtered_ref;
    _ess_measurement_single_phase_power_meter1_phi__filtered_ref = _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref * 0.9391207700769353 + _ess_measurement_va_va1__out * 0.06087922992306474;
    _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in = _ess_measurement_single_phase_power_meter1_phi__filtered_in;
    _ess_measurement_single_phase_power_meter1_phi__filtered_in = _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in * 0.9391207700769353 + _ess_measurement_ia_ia1__out * 0.06087922992306474;
    if( _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref >= 25000 ) {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
        _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _ess_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0;
        _ess_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_ess_measurement_single_phase_power_meter1_phi__filtered_ref >= 0) && (_ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref < 0) ) {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_ref = 1;
    }
    else {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
    }
    if( _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in >= 25000 ) {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
        _ess_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 1;
        _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _ess_measurement_single_phase_power_meter1_phi__previous_correction_in = 0;
        _ess_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_ess_measurement_single_phase_power_meter1_phi__filtered_in >= 0) && (_ess_measurement_single_phase_power_meter1_phi__previous_filtered_in < 0) ) {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_in = 1;
        _ess_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 0;
    }
    else {
        _ess_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
    }
    if( _ess_measurement_single_phase_power_meter1_phi__zc_flag_ref ) {
        _ess_measurement_single_phase_power_meter1_phi__correction_ref = - _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref / ( _ess_measurement_single_phase_power_meter1_phi__filtered_ref - _ess_measurement_single_phase_power_meter1_phi__previous_filtered_ref );
        _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref += _ess_measurement_single_phase_power_meter1_phi__correction_ref - _ess_measurement_single_phase_power_meter1_phi__previous_correction_ref;
        if( (_ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref > 1e-6) || (_ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref < -1e-6) ) {
            if( !_ess_measurement_single_phase_power_meter1_phi__no_zc_flag_in ) {
                _ess_measurement_single_phase_power_meter1_phi__phase_state = 360.0 * ( _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in + _ess_measurement_single_phase_power_meter1_phi__correction_ref - _ess_measurement_single_phase_power_meter1_phi__previous_correction_in ) / _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
            }
        }
        if( (_ess_measurement_single_phase_power_meter1_phi__phase_state > 360.0) || (_ess_measurement_single_phase_power_meter1_phi__phase_state < -360.0) ) {
            _ess_measurement_single_phase_power_meter1_phi__phase_state = fmod(_ess_measurement_single_phase_power_meter1_phi__phase_state, 360.0);
        }
        if (_ess_measurement_single_phase_power_meter1_phi__phase_state < -180.0) {
            _ess_measurement_single_phase_power_meter1_phi__phase_state += 360.0;
        }
        else if (_ess_measurement_single_phase_power_meter1_phi__phase_state > 180.0) {
            _ess_measurement_single_phase_power_meter1_phi__phase_state -= 360.0;
        }
        _ess_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _ess_measurement_single_phase_power_meter1_phi__previous_correction_ref = _ess_measurement_single_phase_power_meter1_phi__correction_ref;
    }
    if( _ess_measurement_single_phase_power_meter1_phi__zc_flag_in ) {
        _ess_measurement_single_phase_power_meter1_phi__correction_in = - _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in / ( _ess_measurement_single_phase_power_meter1_phi__filtered_in - _ess_measurement_single_phase_power_meter1_phi__previous_filtered_in );
        _ess_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _ess_measurement_single_phase_power_meter1_phi__previous_correction_in = _ess_measurement_single_phase_power_meter1_phi__correction_in;
    }
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.C function1
    // Generated from the component: EV Charging Station.Inverter.Controller.Hilbert Transform
    _ev_charging_station_inverter_controller_hilbert_transform__states[0] = _ev_charging_station_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Hilbert Transform1
    _ev_charging_station_inverter_controller_hilbert_transform1__states[0] = _ev_charging_station_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.LPF_dc
    _ev_charging_station_inverter_lpf_dc__states[0] = _ev_charging_station_inverter_lpf_dc__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.LPF_dc3
    _ev_charging_station_li_battery_lpf_dc3__states[0] = _ev_charging_station_li_battery_lpf_dc3__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.LPF_dc2
    _ev_charging_station_li_battery_lpf_dc2__states[0] = _ev_charging_station_li_battery_lpf_dc2__delay_line_in;
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Ia RMS
    if (833 == _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt) {
        _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt = 0;
    }
    _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__square_sum += _ev_charging_station_measurement_ia_ia1__out * _ev_charging_station_measurement_ia_ia1__out;
    _ev_charging_station_measurement_single_phase_power_meter1_ia_rms__sample_cnt ++;
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.Va RMS
    if (833 == _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt) {
        _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt = 0;
    }
    _ev_charging_station_measurement_single_phase_power_meter1_va_rms__square_sum += _ev_charging_station_measurement_va_va1__out * _ev_charging_station_measurement_va_va1__out;
    _ev_charging_station_measurement_single_phase_power_meter1_va_rms__sample_cnt ++;
    // Generated from the component: EV Charging Station.Measurement.Single Phase Power Meter1.phi
    _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref += 1;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in += 1;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref = _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_ref;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_ref = _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref * 0.9391207700769353 + _ev_charging_station_measurement_va_va1__out * 0.06087922992306474;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in = _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_in;
    _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_in = _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in * 0.9391207700769353 + _ev_charging_station_measurement_ia_ia1__out * 0.06087922992306474;
    if( _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref >= 25000 ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_ref = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_ref >= 0) && (_ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref < 0) ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_ref = 1;
    }
    else {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_ref = 0;
    }
    if( _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in >= 25000 ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 1;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_in = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state = 0;
    }
    else if( (_ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_in >= 0) && (_ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in < 0) ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_in = 1;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__no_zc_flag_in = 0;
    }
    else {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_in = 0;
    }
    if( _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_ref ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_ref = - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref / ( _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_ref - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_ref );
        _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref += _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_ref - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_ref;
        if( (_ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref > 1e-6) || (_ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref < -1e-6) ) {
            if( !_ev_charging_station_measurement_single_phase_power_meter1_phi__no_zc_flag_in ) {
                _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state = 360.0 * ( _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in + _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_ref - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_in ) / _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref;
            }
        }
        if( (_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state > 360.0) || (_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state < -360.0) ) {
            _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state = fmod(_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state, 360.0);
        }
        if (_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state < -180.0) {
            _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state += 360.0;
        }
        else if (_ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state > 180.0) {
            _ev_charging_station_measurement_single_phase_power_meter1_phi__phase_state -= 360.0;
        }
        _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_ref = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_ref = _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_ref;
    }
    if( _ev_charging_station_measurement_single_phase_power_meter1_phi__zc_flag_in ) {
        _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_in = - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in / ( _ev_charging_station_measurement_single_phase_power_meter1_phi__filtered_in - _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_filtered_in );
        _ev_charging_station_measurement_single_phase_power_meter1_phi__sample_cnt_in = 0;
        _ev_charging_station_measurement_single_phase_power_meter1_phi__previous_correction_in = _ev_charging_station_measurement_single_phase_power_meter1_phi__correction_in;
    }
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
    // Generated from the component: ESS.Inverter.Controller.C function4
    // Generated from the component: EV Charging Station.Inverter.Controller.C function4
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _ev_charging_station_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] = _ess_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.Discrete Transfer Function1
    _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__states[0] = _ev_charging_station_inverter_controller_single_phase_pll1_discrete_transfer_function1__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 20.833333333333332 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 20.833333333333332 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 2e-05;
    // Generated from the component: EV Charging Station.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _ev_charging_station_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 2e-05;
    // Generated from the component: ESS.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc += _ess_inverter_controller_single_phase_pll1_integrator_with_reset__in * 2e-05;
    if (_ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc > _ess_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value)_ess_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc -= _ess_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
    // Generated from the component: EV Charging Station.Inverter.Controller.Single phase PLL1.integrator_with_reset
    _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc += _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__in * 2e-05;
    if (_ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc > _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value)_ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__out_calc -= _ev_charging_station_inverter_controller_single_phase_pll1_integrator_with_reset__reset_value;
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
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Idc.Ia1
    _ess_li_battery_li_cells_series_1_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x215));
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay1
    _ess_li_battery_li_cells_series_1_unit_delay1__out = _ess_li_battery_li_cells_series_1_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay2
    _ess_li_battery_li_cells_series_1_unit_delay2__out = _ess_li_battery_li_cells_series_1_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay3
    _ess_li_battery_li_cells_series_1_unit_delay3__out = _ess_li_battery_li_cells_series_1_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay4
    _ess_li_battery_li_cells_series_1_unit_delay4__out = _ess_li_battery_li_cells_series_1_unit_delay4__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Idc.Ia1
    _ess_li_battery_li_cells_series_2_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x217));
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay1
    _ess_li_battery_li_cells_series_2_unit_delay1__out = _ess_li_battery_li_cells_series_2_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay2
    _ess_li_battery_li_cells_series_2_unit_delay2__out = _ess_li_battery_li_cells_series_2_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay3
    _ess_li_battery_li_cells_series_2_unit_delay3__out = _ess_li_battery_li_cells_series_2_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay4
    _ess_li_battery_li_cells_series_2_unit_delay4__out = _ess_li_battery_li_cells_series_2_unit_delay4__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Idc.Ia1
    _ess_li_battery_li_cells_series_3_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x219));
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay1
    _ess_li_battery_li_cells_series_3_unit_delay1__out = _ess_li_battery_li_cells_series_3_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay2
    _ess_li_battery_li_cells_series_3_unit_delay2__out = _ess_li_battery_li_cells_series_3_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay3
    _ess_li_battery_li_cells_series_3_unit_delay3__out = _ess_li_battery_li_cells_series_3_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay4
    _ess_li_battery_li_cells_series_3_unit_delay4__out = _ess_li_battery_li_cells_series_3_unit_delay4__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Idc.Ia1
    _ess_li_battery_li_cells_series_4_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x40b));
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay1
    _ess_li_battery_li_cells_series_4_unit_delay1__out = _ess_li_battery_li_cells_series_4_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay2
    _ess_li_battery_li_cells_series_4_unit_delay2__out = _ess_li_battery_li_cells_series_4_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay3
    _ess_li_battery_li_cells_series_4_unit_delay3__out = _ess_li_battery_li_cells_series_4_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay4
    _ess_li_battery_li_cells_series_4_unit_delay4__out = _ess_li_battery_li_cells_series_4_unit_delay4__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Idc.Ia1
    _ess_li_battery_li_cells_series_5_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x40d));
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay1
    _ess_li_battery_li_cells_series_5_unit_delay1__out = _ess_li_battery_li_cells_series_5_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay2
    _ess_li_battery_li_cells_series_5_unit_delay2__out = _ess_li_battery_li_cells_series_5_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay3
    _ess_li_battery_li_cells_series_5_unit_delay3__out = _ess_li_battery_li_cells_series_5_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay4
    _ess_li_battery_li_cells_series_5_unit_delay4__out = _ess_li_battery_li_cells_series_5_unit_delay4__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Constant1
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Idc.Ia1
    _ess_li_battery_li_cells_series_6_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x40f));
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay1
    _ess_li_battery_li_cells_series_6_unit_delay1__out = _ess_li_battery_li_cells_series_6_unit_delay1__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay2
    _ess_li_battery_li_cells_series_6_unit_delay2__out = _ess_li_battery_li_cells_series_6_unit_delay2__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay3
    _ess_li_battery_li_cells_series_6_unit_delay3__out = _ess_li_battery_li_cells_series_6_unit_delay3__state;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay4
    _ess_li_battery_li_cells_series_6_unit_delay4__out = _ess_li_battery_li_cells_series_6_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_1_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x615));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_2_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x617));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_3_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x619));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_4_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x80b));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_5_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x80d));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Constant1
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Idc.Ia1
    _ev_charging_station_li_battery_li_cells_series_6_idc_ia1__out = (HIL_InFloat(0xc80000 + 0x80f));
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out = _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__out = _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__out = _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__state;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__out = _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__state;
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
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Cq_LUT
    if(_ess_li_battery_li_cells_series_1_constant1__out <= _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_1_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_1_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_1_constant1__out < _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_1_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_1_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_1_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_1_cq_lut__rightIndex - _ess_li_battery_li_cells_series_1_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_1_constant1__out < _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_1_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_1_cq_lut__rightIndex = _ess_li_battery_li_cells_series_1_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_1_cq_lut__leftIndex = _ess_li_battery_li_cells_series_1_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_1_cq_lut__curAddr = (_ess_li_battery_li_cells_series_1_cq_lut__leftIndex + _ess_li_battery_li_cells_series_1_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_1_cq_lut__fraction = (_ess_li_battery_li_cells_series_1_constant1__out - _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_1_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_1_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_1_cq_lut__value = (_ess_li_battery_li_cells_series_1_cq_lut__lut_table[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_1_cq_lut__lut_table[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_1_cq_lut__fraction + _ess_li_battery_li_cells_series_1_cq_lut__lut_table[_ess_li_battery_li_cells_series_1_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.LPF_dc1
    _ess_li_battery_li_cells_series_1_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_1_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_1_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_1_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_1_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_1_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_1_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_1_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_1_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_1_lpf_dc1__states[_ess_li_battery_li_cells_series_1_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_1_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_1_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_1_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_1_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_1_idc_ia1__out - _ess_li_battery_li_cells_series_1_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_1_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_1_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_1_lpf_dc1__out = _ess_li_battery_li_cells_series_1_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.C1_LUT
    if (_ess_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_1_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_1_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_1_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_1_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_1_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_1_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_1_constant1__out;
    _ess_li_battery_li_cells_series_1_c1_lut__x_addr = (_ess_li_battery_li_cells_series_1_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_1_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_1_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_1_c1_lut__y_addr = (_ess_li_battery_li_cells_series_1_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_1_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_1_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_1_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_1_c1_lut__x_addr - _ess_li_battery_li_cells_series_1_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_1_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_1_c1_lut__up_x = _ess_li_battery_li_cells_series_1_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_1_c1_lut__up_x = _ess_li_battery_li_cells_series_1_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_1_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_1_c1_lut__y_addr - _ess_li_battery_li_cells_series_1_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_1_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_1_c1_lut__up_y = _ess_li_battery_li_cells_series_1_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_1_c1_lut__up_y = _ess_li_battery_li_cells_series_1_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_1_c1_lut__data_00 = _ess_li_battery_li_cells_series_1_c1_lut__2d_table[_ess_li_battery_li_cells_series_1_c1_lut__down_x][_ess_li_battery_li_cells_series_1_c1_lut__down_y];
    _ess_li_battery_li_cells_series_1_c1_lut__data_01 = _ess_li_battery_li_cells_series_1_c1_lut__2d_table[_ess_li_battery_li_cells_series_1_c1_lut__down_x][_ess_li_battery_li_cells_series_1_c1_lut__up_y];
    _ess_li_battery_li_cells_series_1_c1_lut__data_10 = _ess_li_battery_li_cells_series_1_c1_lut__2d_table[_ess_li_battery_li_cells_series_1_c1_lut__up_x][_ess_li_battery_li_cells_series_1_c1_lut__down_y];
    _ess_li_battery_li_cells_series_1_c1_lut__data_11 = _ess_li_battery_li_cells_series_1_c1_lut__2d_table[_ess_li_battery_li_cells_series_1_c1_lut__up_x][_ess_li_battery_li_cells_series_1_c1_lut__up_y];
    _ess_li_battery_li_cells_series_1_c1_lut__data_0 = _ess_li_battery_li_cells_series_1_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_1_c1_lut__data_01 - _ess_li_battery_li_cells_series_1_c1_lut__data_00) * _ess_li_battery_li_cells_series_1_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_c1_lut__data_1 = _ess_li_battery_li_cells_series_1_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_1_c1_lut__data_11 - _ess_li_battery_li_cells_series_1_c1_lut__data_10) * _ess_li_battery_li_cells_series_1_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_c1_lut__value = _ess_li_battery_li_cells_series_1_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_1_c1_lut__data_1 - _ess_li_battery_li_cells_series_1_c1_lut__data_0) * _ess_li_battery_li_cells_series_1_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Em_LUT
    if (_ess_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_1_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_1_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_1_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_1_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_1_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_1_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_1_constant1__out;
    _ess_li_battery_li_cells_series_1_em_lut__x_addr = (_ess_li_battery_li_cells_series_1_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_1_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_1_em_lut__x_addr);
    _ess_li_battery_li_cells_series_1_em_lut__y_addr = (_ess_li_battery_li_cells_series_1_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_1_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_1_em_lut__y_addr);
    _ess_li_battery_li_cells_series_1_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_1_em_lut__x_addr - _ess_li_battery_li_cells_series_1_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_1_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_1_em_lut__up_x = _ess_li_battery_li_cells_series_1_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_1_em_lut__up_x = _ess_li_battery_li_cells_series_1_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_1_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_1_em_lut__y_addr - _ess_li_battery_li_cells_series_1_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_1_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_1_em_lut__up_y = _ess_li_battery_li_cells_series_1_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_1_em_lut__up_y = _ess_li_battery_li_cells_series_1_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_1_em_lut__data_00 = _ess_li_battery_li_cells_series_1_em_lut__2d_table[_ess_li_battery_li_cells_series_1_em_lut__down_x][_ess_li_battery_li_cells_series_1_em_lut__down_y];
    _ess_li_battery_li_cells_series_1_em_lut__data_01 = _ess_li_battery_li_cells_series_1_em_lut__2d_table[_ess_li_battery_li_cells_series_1_em_lut__down_x][_ess_li_battery_li_cells_series_1_em_lut__up_y];
    _ess_li_battery_li_cells_series_1_em_lut__data_10 = _ess_li_battery_li_cells_series_1_em_lut__2d_table[_ess_li_battery_li_cells_series_1_em_lut__up_x][_ess_li_battery_li_cells_series_1_em_lut__down_y];
    _ess_li_battery_li_cells_series_1_em_lut__data_11 = _ess_li_battery_li_cells_series_1_em_lut__2d_table[_ess_li_battery_li_cells_series_1_em_lut__up_x][_ess_li_battery_li_cells_series_1_em_lut__up_y];
    _ess_li_battery_li_cells_series_1_em_lut__data_0 = _ess_li_battery_li_cells_series_1_em_lut__data_00 + ((_ess_li_battery_li_cells_series_1_em_lut__data_01 - _ess_li_battery_li_cells_series_1_em_lut__data_00) * _ess_li_battery_li_cells_series_1_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_em_lut__data_1 = _ess_li_battery_li_cells_series_1_em_lut__data_10 + ((_ess_li_battery_li_cells_series_1_em_lut__data_11 - _ess_li_battery_li_cells_series_1_em_lut__data_10) * _ess_li_battery_li_cells_series_1_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_em_lut__value = _ess_li_battery_li_cells_series_1_em_lut__data_0 + ((_ess_li_battery_li_cells_series_1_em_lut__data_1 - _ess_li_battery_li_cells_series_1_em_lut__data_0) * _ess_li_battery_li_cells_series_1_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.R0_LUT
    if (_ess_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_1_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_1_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_1_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_1_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_1_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_1_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_1_constant1__out;
    _ess_li_battery_li_cells_series_1_r0_lut__x_addr = (_ess_li_battery_li_cells_series_1_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_1_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_1_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_1_r0_lut__y_addr = (_ess_li_battery_li_cells_series_1_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_1_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_1_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_1_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_1_r0_lut__x_addr - _ess_li_battery_li_cells_series_1_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_1_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_1_r0_lut__up_x = _ess_li_battery_li_cells_series_1_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_1_r0_lut__up_x = _ess_li_battery_li_cells_series_1_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_1_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_1_r0_lut__y_addr - _ess_li_battery_li_cells_series_1_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_1_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_1_r0_lut__up_y = _ess_li_battery_li_cells_series_1_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_1_r0_lut__up_y = _ess_li_battery_li_cells_series_1_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_1_r0_lut__data_00 = _ess_li_battery_li_cells_series_1_r0_lut__2d_table[_ess_li_battery_li_cells_series_1_r0_lut__down_x][_ess_li_battery_li_cells_series_1_r0_lut__down_y];
    _ess_li_battery_li_cells_series_1_r0_lut__data_01 = _ess_li_battery_li_cells_series_1_r0_lut__2d_table[_ess_li_battery_li_cells_series_1_r0_lut__down_x][_ess_li_battery_li_cells_series_1_r0_lut__up_y];
    _ess_li_battery_li_cells_series_1_r0_lut__data_10 = _ess_li_battery_li_cells_series_1_r0_lut__2d_table[_ess_li_battery_li_cells_series_1_r0_lut__up_x][_ess_li_battery_li_cells_series_1_r0_lut__down_y];
    _ess_li_battery_li_cells_series_1_r0_lut__data_11 = _ess_li_battery_li_cells_series_1_r0_lut__2d_table[_ess_li_battery_li_cells_series_1_r0_lut__up_x][_ess_li_battery_li_cells_series_1_r0_lut__up_y];
    _ess_li_battery_li_cells_series_1_r0_lut__data_0 = _ess_li_battery_li_cells_series_1_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_1_r0_lut__data_01 - _ess_li_battery_li_cells_series_1_r0_lut__data_00) * _ess_li_battery_li_cells_series_1_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_r0_lut__data_1 = _ess_li_battery_li_cells_series_1_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_1_r0_lut__data_11 - _ess_li_battery_li_cells_series_1_r0_lut__data_10) * _ess_li_battery_li_cells_series_1_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_r0_lut__value = _ess_li_battery_li_cells_series_1_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_1_r0_lut__data_1 - _ess_li_battery_li_cells_series_1_r0_lut__data_0) * _ess_li_battery_li_cells_series_1_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.R1_LUT
    if (_ess_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_1_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_1_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_1_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_1_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_1_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_1_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_1_constant1__out;
    _ess_li_battery_li_cells_series_1_r1_lut__x_addr = (_ess_li_battery_li_cells_series_1_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_1_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_1_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_1_r1_lut__y_addr = (_ess_li_battery_li_cells_series_1_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_1_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_1_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_1_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_1_r1_lut__x_addr - _ess_li_battery_li_cells_series_1_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_1_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_1_r1_lut__up_x = _ess_li_battery_li_cells_series_1_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_1_r1_lut__up_x = _ess_li_battery_li_cells_series_1_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_1_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_1_r1_lut__y_addr - _ess_li_battery_li_cells_series_1_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_1_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_1_r1_lut__up_y = _ess_li_battery_li_cells_series_1_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_1_r1_lut__up_y = _ess_li_battery_li_cells_series_1_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_1_r1_lut__data_00 = _ess_li_battery_li_cells_series_1_r1_lut__2d_table[_ess_li_battery_li_cells_series_1_r1_lut__down_x][_ess_li_battery_li_cells_series_1_r1_lut__down_y];
    _ess_li_battery_li_cells_series_1_r1_lut__data_01 = _ess_li_battery_li_cells_series_1_r1_lut__2d_table[_ess_li_battery_li_cells_series_1_r1_lut__down_x][_ess_li_battery_li_cells_series_1_r1_lut__up_y];
    _ess_li_battery_li_cells_series_1_r1_lut__data_10 = _ess_li_battery_li_cells_series_1_r1_lut__2d_table[_ess_li_battery_li_cells_series_1_r1_lut__up_x][_ess_li_battery_li_cells_series_1_r1_lut__down_y];
    _ess_li_battery_li_cells_series_1_r1_lut__data_11 = _ess_li_battery_li_cells_series_1_r1_lut__2d_table[_ess_li_battery_li_cells_series_1_r1_lut__up_x][_ess_li_battery_li_cells_series_1_r1_lut__up_y];
    _ess_li_battery_li_cells_series_1_r1_lut__data_0 = _ess_li_battery_li_cells_series_1_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_1_r1_lut__data_01 - _ess_li_battery_li_cells_series_1_r1_lut__data_00) * _ess_li_battery_li_cells_series_1_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_r1_lut__data_1 = _ess_li_battery_li_cells_series_1_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_1_r1_lut__data_11 - _ess_li_battery_li_cells_series_1_r1_lut__data_10) * _ess_li_battery_li_cells_series_1_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_1_r1_lut__value = _ess_li_battery_li_cells_series_1_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_1_r1_lut__data_1 - _ess_li_battery_li_cells_series_1_r1_lut__data_0) * _ess_li_battery_li_cells_series_1_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.SOC
    HIL_OutAO(0x401c, (float)_ess_li_battery_li_cells_series_1_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.R0.Vs
    HIL_OutFloat(141557761, (float) _ess_li_battery_li_cells_series_1_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.R1.Vs
    HIL_OutFloat(141557762, (float) _ess_li_battery_li_cells_series_1_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.C1.reciprocal
    _ess_li_battery_li_cells_series_1_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_1_unit_delay4__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Cq_LUT
    if(_ess_li_battery_li_cells_series_2_constant1__out <= _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_2_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_2_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_2_constant1__out < _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_2_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_2_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_2_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_2_cq_lut__rightIndex - _ess_li_battery_li_cells_series_2_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_2_constant1__out < _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_2_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_2_cq_lut__rightIndex = _ess_li_battery_li_cells_series_2_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_2_cq_lut__leftIndex = _ess_li_battery_li_cells_series_2_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_2_cq_lut__curAddr = (_ess_li_battery_li_cells_series_2_cq_lut__leftIndex + _ess_li_battery_li_cells_series_2_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_2_cq_lut__fraction = (_ess_li_battery_li_cells_series_2_constant1__out - _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_2_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_2_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_2_cq_lut__value = (_ess_li_battery_li_cells_series_2_cq_lut__lut_table[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_2_cq_lut__lut_table[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_2_cq_lut__fraction + _ess_li_battery_li_cells_series_2_cq_lut__lut_table[_ess_li_battery_li_cells_series_2_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.LPF_dc1
    _ess_li_battery_li_cells_series_2_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_2_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_2_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_2_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_2_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_2_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_2_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_2_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_2_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_2_lpf_dc1__states[_ess_li_battery_li_cells_series_2_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_2_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_2_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_2_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_2_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_2_idc_ia1__out - _ess_li_battery_li_cells_series_2_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_2_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_2_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_2_lpf_dc1__out = _ess_li_battery_li_cells_series_2_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.C1_LUT
    if (_ess_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_2_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_2_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_2_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_2_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_2_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_2_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_2_constant1__out;
    _ess_li_battery_li_cells_series_2_c1_lut__x_addr = (_ess_li_battery_li_cells_series_2_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_2_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_2_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_2_c1_lut__y_addr = (_ess_li_battery_li_cells_series_2_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_2_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_2_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_2_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_2_c1_lut__x_addr - _ess_li_battery_li_cells_series_2_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_2_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_2_c1_lut__up_x = _ess_li_battery_li_cells_series_2_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_2_c1_lut__up_x = _ess_li_battery_li_cells_series_2_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_2_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_2_c1_lut__y_addr - _ess_li_battery_li_cells_series_2_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_2_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_2_c1_lut__up_y = _ess_li_battery_li_cells_series_2_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_2_c1_lut__up_y = _ess_li_battery_li_cells_series_2_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_2_c1_lut__data_00 = _ess_li_battery_li_cells_series_2_c1_lut__2d_table[_ess_li_battery_li_cells_series_2_c1_lut__down_x][_ess_li_battery_li_cells_series_2_c1_lut__down_y];
    _ess_li_battery_li_cells_series_2_c1_lut__data_01 = _ess_li_battery_li_cells_series_2_c1_lut__2d_table[_ess_li_battery_li_cells_series_2_c1_lut__down_x][_ess_li_battery_li_cells_series_2_c1_lut__up_y];
    _ess_li_battery_li_cells_series_2_c1_lut__data_10 = _ess_li_battery_li_cells_series_2_c1_lut__2d_table[_ess_li_battery_li_cells_series_2_c1_lut__up_x][_ess_li_battery_li_cells_series_2_c1_lut__down_y];
    _ess_li_battery_li_cells_series_2_c1_lut__data_11 = _ess_li_battery_li_cells_series_2_c1_lut__2d_table[_ess_li_battery_li_cells_series_2_c1_lut__up_x][_ess_li_battery_li_cells_series_2_c1_lut__up_y];
    _ess_li_battery_li_cells_series_2_c1_lut__data_0 = _ess_li_battery_li_cells_series_2_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_2_c1_lut__data_01 - _ess_li_battery_li_cells_series_2_c1_lut__data_00) * _ess_li_battery_li_cells_series_2_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_c1_lut__data_1 = _ess_li_battery_li_cells_series_2_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_2_c1_lut__data_11 - _ess_li_battery_li_cells_series_2_c1_lut__data_10) * _ess_li_battery_li_cells_series_2_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_c1_lut__value = _ess_li_battery_li_cells_series_2_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_2_c1_lut__data_1 - _ess_li_battery_li_cells_series_2_c1_lut__data_0) * _ess_li_battery_li_cells_series_2_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Em_LUT
    if (_ess_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_2_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_2_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_2_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_2_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_2_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_2_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_2_constant1__out;
    _ess_li_battery_li_cells_series_2_em_lut__x_addr = (_ess_li_battery_li_cells_series_2_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_2_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_2_em_lut__x_addr);
    _ess_li_battery_li_cells_series_2_em_lut__y_addr = (_ess_li_battery_li_cells_series_2_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_2_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_2_em_lut__y_addr);
    _ess_li_battery_li_cells_series_2_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_2_em_lut__x_addr - _ess_li_battery_li_cells_series_2_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_2_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_2_em_lut__up_x = _ess_li_battery_li_cells_series_2_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_2_em_lut__up_x = _ess_li_battery_li_cells_series_2_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_2_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_2_em_lut__y_addr - _ess_li_battery_li_cells_series_2_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_2_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_2_em_lut__up_y = _ess_li_battery_li_cells_series_2_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_2_em_lut__up_y = _ess_li_battery_li_cells_series_2_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_2_em_lut__data_00 = _ess_li_battery_li_cells_series_2_em_lut__2d_table[_ess_li_battery_li_cells_series_2_em_lut__down_x][_ess_li_battery_li_cells_series_2_em_lut__down_y];
    _ess_li_battery_li_cells_series_2_em_lut__data_01 = _ess_li_battery_li_cells_series_2_em_lut__2d_table[_ess_li_battery_li_cells_series_2_em_lut__down_x][_ess_li_battery_li_cells_series_2_em_lut__up_y];
    _ess_li_battery_li_cells_series_2_em_lut__data_10 = _ess_li_battery_li_cells_series_2_em_lut__2d_table[_ess_li_battery_li_cells_series_2_em_lut__up_x][_ess_li_battery_li_cells_series_2_em_lut__down_y];
    _ess_li_battery_li_cells_series_2_em_lut__data_11 = _ess_li_battery_li_cells_series_2_em_lut__2d_table[_ess_li_battery_li_cells_series_2_em_lut__up_x][_ess_li_battery_li_cells_series_2_em_lut__up_y];
    _ess_li_battery_li_cells_series_2_em_lut__data_0 = _ess_li_battery_li_cells_series_2_em_lut__data_00 + ((_ess_li_battery_li_cells_series_2_em_lut__data_01 - _ess_li_battery_li_cells_series_2_em_lut__data_00) * _ess_li_battery_li_cells_series_2_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_em_lut__data_1 = _ess_li_battery_li_cells_series_2_em_lut__data_10 + ((_ess_li_battery_li_cells_series_2_em_lut__data_11 - _ess_li_battery_li_cells_series_2_em_lut__data_10) * _ess_li_battery_li_cells_series_2_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_em_lut__value = _ess_li_battery_li_cells_series_2_em_lut__data_0 + ((_ess_li_battery_li_cells_series_2_em_lut__data_1 - _ess_li_battery_li_cells_series_2_em_lut__data_0) * _ess_li_battery_li_cells_series_2_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.R0_LUT
    if (_ess_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_2_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_2_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_2_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_2_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_2_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_2_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_2_constant1__out;
    _ess_li_battery_li_cells_series_2_r0_lut__x_addr = (_ess_li_battery_li_cells_series_2_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_2_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_2_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_2_r0_lut__y_addr = (_ess_li_battery_li_cells_series_2_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_2_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_2_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_2_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_2_r0_lut__x_addr - _ess_li_battery_li_cells_series_2_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_2_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_2_r0_lut__up_x = _ess_li_battery_li_cells_series_2_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_2_r0_lut__up_x = _ess_li_battery_li_cells_series_2_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_2_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_2_r0_lut__y_addr - _ess_li_battery_li_cells_series_2_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_2_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_2_r0_lut__up_y = _ess_li_battery_li_cells_series_2_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_2_r0_lut__up_y = _ess_li_battery_li_cells_series_2_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_2_r0_lut__data_00 = _ess_li_battery_li_cells_series_2_r0_lut__2d_table[_ess_li_battery_li_cells_series_2_r0_lut__down_x][_ess_li_battery_li_cells_series_2_r0_lut__down_y];
    _ess_li_battery_li_cells_series_2_r0_lut__data_01 = _ess_li_battery_li_cells_series_2_r0_lut__2d_table[_ess_li_battery_li_cells_series_2_r0_lut__down_x][_ess_li_battery_li_cells_series_2_r0_lut__up_y];
    _ess_li_battery_li_cells_series_2_r0_lut__data_10 = _ess_li_battery_li_cells_series_2_r0_lut__2d_table[_ess_li_battery_li_cells_series_2_r0_lut__up_x][_ess_li_battery_li_cells_series_2_r0_lut__down_y];
    _ess_li_battery_li_cells_series_2_r0_lut__data_11 = _ess_li_battery_li_cells_series_2_r0_lut__2d_table[_ess_li_battery_li_cells_series_2_r0_lut__up_x][_ess_li_battery_li_cells_series_2_r0_lut__up_y];
    _ess_li_battery_li_cells_series_2_r0_lut__data_0 = _ess_li_battery_li_cells_series_2_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_2_r0_lut__data_01 - _ess_li_battery_li_cells_series_2_r0_lut__data_00) * _ess_li_battery_li_cells_series_2_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_r0_lut__data_1 = _ess_li_battery_li_cells_series_2_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_2_r0_lut__data_11 - _ess_li_battery_li_cells_series_2_r0_lut__data_10) * _ess_li_battery_li_cells_series_2_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_r0_lut__value = _ess_li_battery_li_cells_series_2_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_2_r0_lut__data_1 - _ess_li_battery_li_cells_series_2_r0_lut__data_0) * _ess_li_battery_li_cells_series_2_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.R1_LUT
    if (_ess_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_2_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_2_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_2_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_2_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_2_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_2_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_2_constant1__out;
    _ess_li_battery_li_cells_series_2_r1_lut__x_addr = (_ess_li_battery_li_cells_series_2_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_2_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_2_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_2_r1_lut__y_addr = (_ess_li_battery_li_cells_series_2_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_2_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_2_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_2_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_2_r1_lut__x_addr - _ess_li_battery_li_cells_series_2_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_2_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_2_r1_lut__up_x = _ess_li_battery_li_cells_series_2_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_2_r1_lut__up_x = _ess_li_battery_li_cells_series_2_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_2_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_2_r1_lut__y_addr - _ess_li_battery_li_cells_series_2_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_2_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_2_r1_lut__up_y = _ess_li_battery_li_cells_series_2_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_2_r1_lut__up_y = _ess_li_battery_li_cells_series_2_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_2_r1_lut__data_00 = _ess_li_battery_li_cells_series_2_r1_lut__2d_table[_ess_li_battery_li_cells_series_2_r1_lut__down_x][_ess_li_battery_li_cells_series_2_r1_lut__down_y];
    _ess_li_battery_li_cells_series_2_r1_lut__data_01 = _ess_li_battery_li_cells_series_2_r1_lut__2d_table[_ess_li_battery_li_cells_series_2_r1_lut__down_x][_ess_li_battery_li_cells_series_2_r1_lut__up_y];
    _ess_li_battery_li_cells_series_2_r1_lut__data_10 = _ess_li_battery_li_cells_series_2_r1_lut__2d_table[_ess_li_battery_li_cells_series_2_r1_lut__up_x][_ess_li_battery_li_cells_series_2_r1_lut__down_y];
    _ess_li_battery_li_cells_series_2_r1_lut__data_11 = _ess_li_battery_li_cells_series_2_r1_lut__2d_table[_ess_li_battery_li_cells_series_2_r1_lut__up_x][_ess_li_battery_li_cells_series_2_r1_lut__up_y];
    _ess_li_battery_li_cells_series_2_r1_lut__data_0 = _ess_li_battery_li_cells_series_2_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_2_r1_lut__data_01 - _ess_li_battery_li_cells_series_2_r1_lut__data_00) * _ess_li_battery_li_cells_series_2_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_r1_lut__data_1 = _ess_li_battery_li_cells_series_2_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_2_r1_lut__data_11 - _ess_li_battery_li_cells_series_2_r1_lut__data_10) * _ess_li_battery_li_cells_series_2_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_2_r1_lut__value = _ess_li_battery_li_cells_series_2_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_2_r1_lut__data_1 - _ess_li_battery_li_cells_series_2_r1_lut__data_0) * _ess_li_battery_li_cells_series_2_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.SOC
    HIL_OutAO(0x401d, (float)_ess_li_battery_li_cells_series_2_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.R0.Vs
    HIL_OutFloat(141557764, (float) _ess_li_battery_li_cells_series_2_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.R1.Vs
    HIL_OutFloat(141557765, (float) _ess_li_battery_li_cells_series_2_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.C1.reciprocal
    _ess_li_battery_li_cells_series_2_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_2_unit_delay4__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Cq_LUT
    if(_ess_li_battery_li_cells_series_3_constant1__out <= _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_3_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_3_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_3_constant1__out < _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_3_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_3_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_3_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_3_cq_lut__rightIndex - _ess_li_battery_li_cells_series_3_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_3_constant1__out < _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_3_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_3_cq_lut__rightIndex = _ess_li_battery_li_cells_series_3_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_3_cq_lut__leftIndex = _ess_li_battery_li_cells_series_3_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_3_cq_lut__curAddr = (_ess_li_battery_li_cells_series_3_cq_lut__leftIndex + _ess_li_battery_li_cells_series_3_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_3_cq_lut__fraction = (_ess_li_battery_li_cells_series_3_constant1__out - _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_3_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_3_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_3_cq_lut__value = (_ess_li_battery_li_cells_series_3_cq_lut__lut_table[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_3_cq_lut__lut_table[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_3_cq_lut__fraction + _ess_li_battery_li_cells_series_3_cq_lut__lut_table[_ess_li_battery_li_cells_series_3_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.LPF_dc1
    _ess_li_battery_li_cells_series_3_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_3_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_3_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_3_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_3_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_3_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_3_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_3_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_3_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_3_lpf_dc1__states[_ess_li_battery_li_cells_series_3_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_3_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_3_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_3_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_3_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_3_idc_ia1__out - _ess_li_battery_li_cells_series_3_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_3_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_3_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_3_lpf_dc1__out = _ess_li_battery_li_cells_series_3_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.C1_LUT
    if (_ess_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_3_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_3_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_3_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_3_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_3_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_3_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_3_constant1__out;
    _ess_li_battery_li_cells_series_3_c1_lut__x_addr = (_ess_li_battery_li_cells_series_3_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_3_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_3_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_3_c1_lut__y_addr = (_ess_li_battery_li_cells_series_3_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_3_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_3_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_3_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_3_c1_lut__x_addr - _ess_li_battery_li_cells_series_3_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_3_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_3_c1_lut__up_x = _ess_li_battery_li_cells_series_3_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_3_c1_lut__up_x = _ess_li_battery_li_cells_series_3_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_3_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_3_c1_lut__y_addr - _ess_li_battery_li_cells_series_3_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_3_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_3_c1_lut__up_y = _ess_li_battery_li_cells_series_3_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_3_c1_lut__up_y = _ess_li_battery_li_cells_series_3_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_3_c1_lut__data_00 = _ess_li_battery_li_cells_series_3_c1_lut__2d_table[_ess_li_battery_li_cells_series_3_c1_lut__down_x][_ess_li_battery_li_cells_series_3_c1_lut__down_y];
    _ess_li_battery_li_cells_series_3_c1_lut__data_01 = _ess_li_battery_li_cells_series_3_c1_lut__2d_table[_ess_li_battery_li_cells_series_3_c1_lut__down_x][_ess_li_battery_li_cells_series_3_c1_lut__up_y];
    _ess_li_battery_li_cells_series_3_c1_lut__data_10 = _ess_li_battery_li_cells_series_3_c1_lut__2d_table[_ess_li_battery_li_cells_series_3_c1_lut__up_x][_ess_li_battery_li_cells_series_3_c1_lut__down_y];
    _ess_li_battery_li_cells_series_3_c1_lut__data_11 = _ess_li_battery_li_cells_series_3_c1_lut__2d_table[_ess_li_battery_li_cells_series_3_c1_lut__up_x][_ess_li_battery_li_cells_series_3_c1_lut__up_y];
    _ess_li_battery_li_cells_series_3_c1_lut__data_0 = _ess_li_battery_li_cells_series_3_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_3_c1_lut__data_01 - _ess_li_battery_li_cells_series_3_c1_lut__data_00) * _ess_li_battery_li_cells_series_3_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_c1_lut__data_1 = _ess_li_battery_li_cells_series_3_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_3_c1_lut__data_11 - _ess_li_battery_li_cells_series_3_c1_lut__data_10) * _ess_li_battery_li_cells_series_3_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_c1_lut__value = _ess_li_battery_li_cells_series_3_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_3_c1_lut__data_1 - _ess_li_battery_li_cells_series_3_c1_lut__data_0) * _ess_li_battery_li_cells_series_3_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Em_LUT
    if (_ess_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_3_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_3_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_3_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_3_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_3_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_3_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_3_constant1__out;
    _ess_li_battery_li_cells_series_3_em_lut__x_addr = (_ess_li_battery_li_cells_series_3_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_3_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_3_em_lut__x_addr);
    _ess_li_battery_li_cells_series_3_em_lut__y_addr = (_ess_li_battery_li_cells_series_3_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_3_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_3_em_lut__y_addr);
    _ess_li_battery_li_cells_series_3_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_3_em_lut__x_addr - _ess_li_battery_li_cells_series_3_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_3_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_3_em_lut__up_x = _ess_li_battery_li_cells_series_3_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_3_em_lut__up_x = _ess_li_battery_li_cells_series_3_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_3_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_3_em_lut__y_addr - _ess_li_battery_li_cells_series_3_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_3_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_3_em_lut__up_y = _ess_li_battery_li_cells_series_3_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_3_em_lut__up_y = _ess_li_battery_li_cells_series_3_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_3_em_lut__data_00 = _ess_li_battery_li_cells_series_3_em_lut__2d_table[_ess_li_battery_li_cells_series_3_em_lut__down_x][_ess_li_battery_li_cells_series_3_em_lut__down_y];
    _ess_li_battery_li_cells_series_3_em_lut__data_01 = _ess_li_battery_li_cells_series_3_em_lut__2d_table[_ess_li_battery_li_cells_series_3_em_lut__down_x][_ess_li_battery_li_cells_series_3_em_lut__up_y];
    _ess_li_battery_li_cells_series_3_em_lut__data_10 = _ess_li_battery_li_cells_series_3_em_lut__2d_table[_ess_li_battery_li_cells_series_3_em_lut__up_x][_ess_li_battery_li_cells_series_3_em_lut__down_y];
    _ess_li_battery_li_cells_series_3_em_lut__data_11 = _ess_li_battery_li_cells_series_3_em_lut__2d_table[_ess_li_battery_li_cells_series_3_em_lut__up_x][_ess_li_battery_li_cells_series_3_em_lut__up_y];
    _ess_li_battery_li_cells_series_3_em_lut__data_0 = _ess_li_battery_li_cells_series_3_em_lut__data_00 + ((_ess_li_battery_li_cells_series_3_em_lut__data_01 - _ess_li_battery_li_cells_series_3_em_lut__data_00) * _ess_li_battery_li_cells_series_3_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_em_lut__data_1 = _ess_li_battery_li_cells_series_3_em_lut__data_10 + ((_ess_li_battery_li_cells_series_3_em_lut__data_11 - _ess_li_battery_li_cells_series_3_em_lut__data_10) * _ess_li_battery_li_cells_series_3_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_em_lut__value = _ess_li_battery_li_cells_series_3_em_lut__data_0 + ((_ess_li_battery_li_cells_series_3_em_lut__data_1 - _ess_li_battery_li_cells_series_3_em_lut__data_0) * _ess_li_battery_li_cells_series_3_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.R0_LUT
    if (_ess_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_3_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_3_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_3_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_3_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_3_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_3_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_3_constant1__out;
    _ess_li_battery_li_cells_series_3_r0_lut__x_addr = (_ess_li_battery_li_cells_series_3_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_3_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_3_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_3_r0_lut__y_addr = (_ess_li_battery_li_cells_series_3_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_3_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_3_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_3_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_3_r0_lut__x_addr - _ess_li_battery_li_cells_series_3_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_3_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_3_r0_lut__up_x = _ess_li_battery_li_cells_series_3_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_3_r0_lut__up_x = _ess_li_battery_li_cells_series_3_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_3_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_3_r0_lut__y_addr - _ess_li_battery_li_cells_series_3_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_3_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_3_r0_lut__up_y = _ess_li_battery_li_cells_series_3_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_3_r0_lut__up_y = _ess_li_battery_li_cells_series_3_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_3_r0_lut__data_00 = _ess_li_battery_li_cells_series_3_r0_lut__2d_table[_ess_li_battery_li_cells_series_3_r0_lut__down_x][_ess_li_battery_li_cells_series_3_r0_lut__down_y];
    _ess_li_battery_li_cells_series_3_r0_lut__data_01 = _ess_li_battery_li_cells_series_3_r0_lut__2d_table[_ess_li_battery_li_cells_series_3_r0_lut__down_x][_ess_li_battery_li_cells_series_3_r0_lut__up_y];
    _ess_li_battery_li_cells_series_3_r0_lut__data_10 = _ess_li_battery_li_cells_series_3_r0_lut__2d_table[_ess_li_battery_li_cells_series_3_r0_lut__up_x][_ess_li_battery_li_cells_series_3_r0_lut__down_y];
    _ess_li_battery_li_cells_series_3_r0_lut__data_11 = _ess_li_battery_li_cells_series_3_r0_lut__2d_table[_ess_li_battery_li_cells_series_3_r0_lut__up_x][_ess_li_battery_li_cells_series_3_r0_lut__up_y];
    _ess_li_battery_li_cells_series_3_r0_lut__data_0 = _ess_li_battery_li_cells_series_3_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_3_r0_lut__data_01 - _ess_li_battery_li_cells_series_3_r0_lut__data_00) * _ess_li_battery_li_cells_series_3_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_r0_lut__data_1 = _ess_li_battery_li_cells_series_3_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_3_r0_lut__data_11 - _ess_li_battery_li_cells_series_3_r0_lut__data_10) * _ess_li_battery_li_cells_series_3_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_r0_lut__value = _ess_li_battery_li_cells_series_3_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_3_r0_lut__data_1 - _ess_li_battery_li_cells_series_3_r0_lut__data_0) * _ess_li_battery_li_cells_series_3_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.R1_LUT
    if (_ess_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_3_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_3_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_3_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_3_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_3_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_3_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_3_constant1__out;
    _ess_li_battery_li_cells_series_3_r1_lut__x_addr = (_ess_li_battery_li_cells_series_3_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_3_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_3_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_3_r1_lut__y_addr = (_ess_li_battery_li_cells_series_3_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_3_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_3_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_3_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_3_r1_lut__x_addr - _ess_li_battery_li_cells_series_3_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_3_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_3_r1_lut__up_x = _ess_li_battery_li_cells_series_3_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_3_r1_lut__up_x = _ess_li_battery_li_cells_series_3_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_3_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_3_r1_lut__y_addr - _ess_li_battery_li_cells_series_3_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_3_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_3_r1_lut__up_y = _ess_li_battery_li_cells_series_3_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_3_r1_lut__up_y = _ess_li_battery_li_cells_series_3_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_3_r1_lut__data_00 = _ess_li_battery_li_cells_series_3_r1_lut__2d_table[_ess_li_battery_li_cells_series_3_r1_lut__down_x][_ess_li_battery_li_cells_series_3_r1_lut__down_y];
    _ess_li_battery_li_cells_series_3_r1_lut__data_01 = _ess_li_battery_li_cells_series_3_r1_lut__2d_table[_ess_li_battery_li_cells_series_3_r1_lut__down_x][_ess_li_battery_li_cells_series_3_r1_lut__up_y];
    _ess_li_battery_li_cells_series_3_r1_lut__data_10 = _ess_li_battery_li_cells_series_3_r1_lut__2d_table[_ess_li_battery_li_cells_series_3_r1_lut__up_x][_ess_li_battery_li_cells_series_3_r1_lut__down_y];
    _ess_li_battery_li_cells_series_3_r1_lut__data_11 = _ess_li_battery_li_cells_series_3_r1_lut__2d_table[_ess_li_battery_li_cells_series_3_r1_lut__up_x][_ess_li_battery_li_cells_series_3_r1_lut__up_y];
    _ess_li_battery_li_cells_series_3_r1_lut__data_0 = _ess_li_battery_li_cells_series_3_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_3_r1_lut__data_01 - _ess_li_battery_li_cells_series_3_r1_lut__data_00) * _ess_li_battery_li_cells_series_3_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_r1_lut__data_1 = _ess_li_battery_li_cells_series_3_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_3_r1_lut__data_11 - _ess_li_battery_li_cells_series_3_r1_lut__data_10) * _ess_li_battery_li_cells_series_3_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_3_r1_lut__value = _ess_li_battery_li_cells_series_3_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_3_r1_lut__data_1 - _ess_li_battery_li_cells_series_3_r1_lut__data_0) * _ess_li_battery_li_cells_series_3_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.SOC
    HIL_OutAO(0x401e, (float)_ess_li_battery_li_cells_series_3_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.R0.Vs
    HIL_OutFloat(141557767, (float) _ess_li_battery_li_cells_series_3_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.R1.Vs
    HIL_OutFloat(141557768, (float) _ess_li_battery_li_cells_series_3_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.C1.reciprocal
    _ess_li_battery_li_cells_series_3_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_3_unit_delay4__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Cq_LUT
    if(_ess_li_battery_li_cells_series_4_constant1__out <= _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_4_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_4_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_4_constant1__out < _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_4_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_4_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_4_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_4_cq_lut__rightIndex - _ess_li_battery_li_cells_series_4_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_4_constant1__out < _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_4_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_4_cq_lut__rightIndex = _ess_li_battery_li_cells_series_4_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_4_cq_lut__leftIndex = _ess_li_battery_li_cells_series_4_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_4_cq_lut__curAddr = (_ess_li_battery_li_cells_series_4_cq_lut__leftIndex + _ess_li_battery_li_cells_series_4_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_4_cq_lut__fraction = (_ess_li_battery_li_cells_series_4_constant1__out - _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_4_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_4_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_4_cq_lut__value = (_ess_li_battery_li_cells_series_4_cq_lut__lut_table[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_4_cq_lut__lut_table[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_4_cq_lut__fraction + _ess_li_battery_li_cells_series_4_cq_lut__lut_table[_ess_li_battery_li_cells_series_4_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.LPF_dc1
    _ess_li_battery_li_cells_series_4_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_4_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_4_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_4_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_4_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_4_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_4_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_4_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_4_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_4_lpf_dc1__states[_ess_li_battery_li_cells_series_4_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_4_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_4_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_4_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_4_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_4_idc_ia1__out - _ess_li_battery_li_cells_series_4_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_4_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_4_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_4_lpf_dc1__out = _ess_li_battery_li_cells_series_4_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.C1_LUT
    if (_ess_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_4_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_4_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_4_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_4_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_4_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_4_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_4_constant1__out;
    _ess_li_battery_li_cells_series_4_c1_lut__x_addr = (_ess_li_battery_li_cells_series_4_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_4_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_4_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_4_c1_lut__y_addr = (_ess_li_battery_li_cells_series_4_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_4_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_4_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_4_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_4_c1_lut__x_addr - _ess_li_battery_li_cells_series_4_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_4_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_4_c1_lut__up_x = _ess_li_battery_li_cells_series_4_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_4_c1_lut__up_x = _ess_li_battery_li_cells_series_4_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_4_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_4_c1_lut__y_addr - _ess_li_battery_li_cells_series_4_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_4_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_4_c1_lut__up_y = _ess_li_battery_li_cells_series_4_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_4_c1_lut__up_y = _ess_li_battery_li_cells_series_4_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_4_c1_lut__data_00 = _ess_li_battery_li_cells_series_4_c1_lut__2d_table[_ess_li_battery_li_cells_series_4_c1_lut__down_x][_ess_li_battery_li_cells_series_4_c1_lut__down_y];
    _ess_li_battery_li_cells_series_4_c1_lut__data_01 = _ess_li_battery_li_cells_series_4_c1_lut__2d_table[_ess_li_battery_li_cells_series_4_c1_lut__down_x][_ess_li_battery_li_cells_series_4_c1_lut__up_y];
    _ess_li_battery_li_cells_series_4_c1_lut__data_10 = _ess_li_battery_li_cells_series_4_c1_lut__2d_table[_ess_li_battery_li_cells_series_4_c1_lut__up_x][_ess_li_battery_li_cells_series_4_c1_lut__down_y];
    _ess_li_battery_li_cells_series_4_c1_lut__data_11 = _ess_li_battery_li_cells_series_4_c1_lut__2d_table[_ess_li_battery_li_cells_series_4_c1_lut__up_x][_ess_li_battery_li_cells_series_4_c1_lut__up_y];
    _ess_li_battery_li_cells_series_4_c1_lut__data_0 = _ess_li_battery_li_cells_series_4_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_4_c1_lut__data_01 - _ess_li_battery_li_cells_series_4_c1_lut__data_00) * _ess_li_battery_li_cells_series_4_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_c1_lut__data_1 = _ess_li_battery_li_cells_series_4_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_4_c1_lut__data_11 - _ess_li_battery_li_cells_series_4_c1_lut__data_10) * _ess_li_battery_li_cells_series_4_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_c1_lut__value = _ess_li_battery_li_cells_series_4_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_4_c1_lut__data_1 - _ess_li_battery_li_cells_series_4_c1_lut__data_0) * _ess_li_battery_li_cells_series_4_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Em_LUT
    if (_ess_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_4_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_4_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_4_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_4_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_4_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_4_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_4_constant1__out;
    _ess_li_battery_li_cells_series_4_em_lut__x_addr = (_ess_li_battery_li_cells_series_4_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_4_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_4_em_lut__x_addr);
    _ess_li_battery_li_cells_series_4_em_lut__y_addr = (_ess_li_battery_li_cells_series_4_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_4_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_4_em_lut__y_addr);
    _ess_li_battery_li_cells_series_4_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_4_em_lut__x_addr - _ess_li_battery_li_cells_series_4_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_4_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_4_em_lut__up_x = _ess_li_battery_li_cells_series_4_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_4_em_lut__up_x = _ess_li_battery_li_cells_series_4_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_4_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_4_em_lut__y_addr - _ess_li_battery_li_cells_series_4_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_4_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_4_em_lut__up_y = _ess_li_battery_li_cells_series_4_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_4_em_lut__up_y = _ess_li_battery_li_cells_series_4_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_4_em_lut__data_00 = _ess_li_battery_li_cells_series_4_em_lut__2d_table[_ess_li_battery_li_cells_series_4_em_lut__down_x][_ess_li_battery_li_cells_series_4_em_lut__down_y];
    _ess_li_battery_li_cells_series_4_em_lut__data_01 = _ess_li_battery_li_cells_series_4_em_lut__2d_table[_ess_li_battery_li_cells_series_4_em_lut__down_x][_ess_li_battery_li_cells_series_4_em_lut__up_y];
    _ess_li_battery_li_cells_series_4_em_lut__data_10 = _ess_li_battery_li_cells_series_4_em_lut__2d_table[_ess_li_battery_li_cells_series_4_em_lut__up_x][_ess_li_battery_li_cells_series_4_em_lut__down_y];
    _ess_li_battery_li_cells_series_4_em_lut__data_11 = _ess_li_battery_li_cells_series_4_em_lut__2d_table[_ess_li_battery_li_cells_series_4_em_lut__up_x][_ess_li_battery_li_cells_series_4_em_lut__up_y];
    _ess_li_battery_li_cells_series_4_em_lut__data_0 = _ess_li_battery_li_cells_series_4_em_lut__data_00 + ((_ess_li_battery_li_cells_series_4_em_lut__data_01 - _ess_li_battery_li_cells_series_4_em_lut__data_00) * _ess_li_battery_li_cells_series_4_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_em_lut__data_1 = _ess_li_battery_li_cells_series_4_em_lut__data_10 + ((_ess_li_battery_li_cells_series_4_em_lut__data_11 - _ess_li_battery_li_cells_series_4_em_lut__data_10) * _ess_li_battery_li_cells_series_4_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_em_lut__value = _ess_li_battery_li_cells_series_4_em_lut__data_0 + ((_ess_li_battery_li_cells_series_4_em_lut__data_1 - _ess_li_battery_li_cells_series_4_em_lut__data_0) * _ess_li_battery_li_cells_series_4_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.R0_LUT
    if (_ess_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_4_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_4_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_4_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_4_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_4_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_4_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_4_constant1__out;
    _ess_li_battery_li_cells_series_4_r0_lut__x_addr = (_ess_li_battery_li_cells_series_4_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_4_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_4_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_4_r0_lut__y_addr = (_ess_li_battery_li_cells_series_4_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_4_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_4_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_4_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_4_r0_lut__x_addr - _ess_li_battery_li_cells_series_4_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_4_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_4_r0_lut__up_x = _ess_li_battery_li_cells_series_4_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_4_r0_lut__up_x = _ess_li_battery_li_cells_series_4_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_4_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_4_r0_lut__y_addr - _ess_li_battery_li_cells_series_4_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_4_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_4_r0_lut__up_y = _ess_li_battery_li_cells_series_4_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_4_r0_lut__up_y = _ess_li_battery_li_cells_series_4_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_4_r0_lut__data_00 = _ess_li_battery_li_cells_series_4_r0_lut__2d_table[_ess_li_battery_li_cells_series_4_r0_lut__down_x][_ess_li_battery_li_cells_series_4_r0_lut__down_y];
    _ess_li_battery_li_cells_series_4_r0_lut__data_01 = _ess_li_battery_li_cells_series_4_r0_lut__2d_table[_ess_li_battery_li_cells_series_4_r0_lut__down_x][_ess_li_battery_li_cells_series_4_r0_lut__up_y];
    _ess_li_battery_li_cells_series_4_r0_lut__data_10 = _ess_li_battery_li_cells_series_4_r0_lut__2d_table[_ess_li_battery_li_cells_series_4_r0_lut__up_x][_ess_li_battery_li_cells_series_4_r0_lut__down_y];
    _ess_li_battery_li_cells_series_4_r0_lut__data_11 = _ess_li_battery_li_cells_series_4_r0_lut__2d_table[_ess_li_battery_li_cells_series_4_r0_lut__up_x][_ess_li_battery_li_cells_series_4_r0_lut__up_y];
    _ess_li_battery_li_cells_series_4_r0_lut__data_0 = _ess_li_battery_li_cells_series_4_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_4_r0_lut__data_01 - _ess_li_battery_li_cells_series_4_r0_lut__data_00) * _ess_li_battery_li_cells_series_4_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_r0_lut__data_1 = _ess_li_battery_li_cells_series_4_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_4_r0_lut__data_11 - _ess_li_battery_li_cells_series_4_r0_lut__data_10) * _ess_li_battery_li_cells_series_4_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_r0_lut__value = _ess_li_battery_li_cells_series_4_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_4_r0_lut__data_1 - _ess_li_battery_li_cells_series_4_r0_lut__data_0) * _ess_li_battery_li_cells_series_4_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.R1_LUT
    if (_ess_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_4_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_4_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_4_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_4_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_4_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_4_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_4_constant1__out;
    _ess_li_battery_li_cells_series_4_r1_lut__x_addr = (_ess_li_battery_li_cells_series_4_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_4_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_4_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_4_r1_lut__y_addr = (_ess_li_battery_li_cells_series_4_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_4_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_4_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_4_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_4_r1_lut__x_addr - _ess_li_battery_li_cells_series_4_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_4_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_4_r1_lut__up_x = _ess_li_battery_li_cells_series_4_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_4_r1_lut__up_x = _ess_li_battery_li_cells_series_4_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_4_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_4_r1_lut__y_addr - _ess_li_battery_li_cells_series_4_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_4_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_4_r1_lut__up_y = _ess_li_battery_li_cells_series_4_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_4_r1_lut__up_y = _ess_li_battery_li_cells_series_4_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_4_r1_lut__data_00 = _ess_li_battery_li_cells_series_4_r1_lut__2d_table[_ess_li_battery_li_cells_series_4_r1_lut__down_x][_ess_li_battery_li_cells_series_4_r1_lut__down_y];
    _ess_li_battery_li_cells_series_4_r1_lut__data_01 = _ess_li_battery_li_cells_series_4_r1_lut__2d_table[_ess_li_battery_li_cells_series_4_r1_lut__down_x][_ess_li_battery_li_cells_series_4_r1_lut__up_y];
    _ess_li_battery_li_cells_series_4_r1_lut__data_10 = _ess_li_battery_li_cells_series_4_r1_lut__2d_table[_ess_li_battery_li_cells_series_4_r1_lut__up_x][_ess_li_battery_li_cells_series_4_r1_lut__down_y];
    _ess_li_battery_li_cells_series_4_r1_lut__data_11 = _ess_li_battery_li_cells_series_4_r1_lut__2d_table[_ess_li_battery_li_cells_series_4_r1_lut__up_x][_ess_li_battery_li_cells_series_4_r1_lut__up_y];
    _ess_li_battery_li_cells_series_4_r1_lut__data_0 = _ess_li_battery_li_cells_series_4_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_4_r1_lut__data_01 - _ess_li_battery_li_cells_series_4_r1_lut__data_00) * _ess_li_battery_li_cells_series_4_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_r1_lut__data_1 = _ess_li_battery_li_cells_series_4_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_4_r1_lut__data_11 - _ess_li_battery_li_cells_series_4_r1_lut__data_10) * _ess_li_battery_li_cells_series_4_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_4_r1_lut__value = _ess_li_battery_li_cells_series_4_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_4_r1_lut__data_1 - _ess_li_battery_li_cells_series_4_r1_lut__data_0) * _ess_li_battery_li_cells_series_4_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.SOC
    HIL_OutAO(0x401f, (float)_ess_li_battery_li_cells_series_4_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.R0.Vs
    HIL_OutFloat(145752065, (float) _ess_li_battery_li_cells_series_4_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.R1.Vs
    HIL_OutFloat(145752066, (float) _ess_li_battery_li_cells_series_4_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.C1.reciprocal
    _ess_li_battery_li_cells_series_4_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_4_unit_delay4__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Cq_LUT
    if(_ess_li_battery_li_cells_series_5_constant1__out <= _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_5_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_5_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_5_constant1__out < _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_5_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_5_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_5_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_5_cq_lut__rightIndex - _ess_li_battery_li_cells_series_5_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_5_constant1__out < _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_5_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_5_cq_lut__rightIndex = _ess_li_battery_li_cells_series_5_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_5_cq_lut__leftIndex = _ess_li_battery_li_cells_series_5_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_5_cq_lut__curAddr = (_ess_li_battery_li_cells_series_5_cq_lut__leftIndex + _ess_li_battery_li_cells_series_5_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_5_cq_lut__fraction = (_ess_li_battery_li_cells_series_5_constant1__out - _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_5_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_5_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_5_cq_lut__value = (_ess_li_battery_li_cells_series_5_cq_lut__lut_table[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_5_cq_lut__lut_table[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_5_cq_lut__fraction + _ess_li_battery_li_cells_series_5_cq_lut__lut_table[_ess_li_battery_li_cells_series_5_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.LPF_dc1
    _ess_li_battery_li_cells_series_5_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_5_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_5_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_5_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_5_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_5_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_5_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_5_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_5_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_5_lpf_dc1__states[_ess_li_battery_li_cells_series_5_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_5_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_5_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_5_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_5_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_5_idc_ia1__out - _ess_li_battery_li_cells_series_5_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_5_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_5_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_5_lpf_dc1__out = _ess_li_battery_li_cells_series_5_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.C1_LUT
    if (_ess_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_5_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_5_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_5_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_5_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_5_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_5_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_5_constant1__out;
    _ess_li_battery_li_cells_series_5_c1_lut__x_addr = (_ess_li_battery_li_cells_series_5_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_5_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_5_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_5_c1_lut__y_addr = (_ess_li_battery_li_cells_series_5_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_5_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_5_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_5_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_5_c1_lut__x_addr - _ess_li_battery_li_cells_series_5_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_5_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_5_c1_lut__up_x = _ess_li_battery_li_cells_series_5_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_5_c1_lut__up_x = _ess_li_battery_li_cells_series_5_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_5_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_5_c1_lut__y_addr - _ess_li_battery_li_cells_series_5_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_5_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_5_c1_lut__up_y = _ess_li_battery_li_cells_series_5_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_5_c1_lut__up_y = _ess_li_battery_li_cells_series_5_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_5_c1_lut__data_00 = _ess_li_battery_li_cells_series_5_c1_lut__2d_table[_ess_li_battery_li_cells_series_5_c1_lut__down_x][_ess_li_battery_li_cells_series_5_c1_lut__down_y];
    _ess_li_battery_li_cells_series_5_c1_lut__data_01 = _ess_li_battery_li_cells_series_5_c1_lut__2d_table[_ess_li_battery_li_cells_series_5_c1_lut__down_x][_ess_li_battery_li_cells_series_5_c1_lut__up_y];
    _ess_li_battery_li_cells_series_5_c1_lut__data_10 = _ess_li_battery_li_cells_series_5_c1_lut__2d_table[_ess_li_battery_li_cells_series_5_c1_lut__up_x][_ess_li_battery_li_cells_series_5_c1_lut__down_y];
    _ess_li_battery_li_cells_series_5_c1_lut__data_11 = _ess_li_battery_li_cells_series_5_c1_lut__2d_table[_ess_li_battery_li_cells_series_5_c1_lut__up_x][_ess_li_battery_li_cells_series_5_c1_lut__up_y];
    _ess_li_battery_li_cells_series_5_c1_lut__data_0 = _ess_li_battery_li_cells_series_5_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_5_c1_lut__data_01 - _ess_li_battery_li_cells_series_5_c1_lut__data_00) * _ess_li_battery_li_cells_series_5_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_c1_lut__data_1 = _ess_li_battery_li_cells_series_5_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_5_c1_lut__data_11 - _ess_li_battery_li_cells_series_5_c1_lut__data_10) * _ess_li_battery_li_cells_series_5_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_c1_lut__value = _ess_li_battery_li_cells_series_5_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_5_c1_lut__data_1 - _ess_li_battery_li_cells_series_5_c1_lut__data_0) * _ess_li_battery_li_cells_series_5_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Em_LUT
    if (_ess_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_5_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_5_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_5_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_5_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_5_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_5_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_5_constant1__out;
    _ess_li_battery_li_cells_series_5_em_lut__x_addr = (_ess_li_battery_li_cells_series_5_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_5_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_5_em_lut__x_addr);
    _ess_li_battery_li_cells_series_5_em_lut__y_addr = (_ess_li_battery_li_cells_series_5_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_5_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_5_em_lut__y_addr);
    _ess_li_battery_li_cells_series_5_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_5_em_lut__x_addr - _ess_li_battery_li_cells_series_5_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_5_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_5_em_lut__up_x = _ess_li_battery_li_cells_series_5_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_5_em_lut__up_x = _ess_li_battery_li_cells_series_5_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_5_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_5_em_lut__y_addr - _ess_li_battery_li_cells_series_5_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_5_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_5_em_lut__up_y = _ess_li_battery_li_cells_series_5_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_5_em_lut__up_y = _ess_li_battery_li_cells_series_5_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_5_em_lut__data_00 = _ess_li_battery_li_cells_series_5_em_lut__2d_table[_ess_li_battery_li_cells_series_5_em_lut__down_x][_ess_li_battery_li_cells_series_5_em_lut__down_y];
    _ess_li_battery_li_cells_series_5_em_lut__data_01 = _ess_li_battery_li_cells_series_5_em_lut__2d_table[_ess_li_battery_li_cells_series_5_em_lut__down_x][_ess_li_battery_li_cells_series_5_em_lut__up_y];
    _ess_li_battery_li_cells_series_5_em_lut__data_10 = _ess_li_battery_li_cells_series_5_em_lut__2d_table[_ess_li_battery_li_cells_series_5_em_lut__up_x][_ess_li_battery_li_cells_series_5_em_lut__down_y];
    _ess_li_battery_li_cells_series_5_em_lut__data_11 = _ess_li_battery_li_cells_series_5_em_lut__2d_table[_ess_li_battery_li_cells_series_5_em_lut__up_x][_ess_li_battery_li_cells_series_5_em_lut__up_y];
    _ess_li_battery_li_cells_series_5_em_lut__data_0 = _ess_li_battery_li_cells_series_5_em_lut__data_00 + ((_ess_li_battery_li_cells_series_5_em_lut__data_01 - _ess_li_battery_li_cells_series_5_em_lut__data_00) * _ess_li_battery_li_cells_series_5_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_em_lut__data_1 = _ess_li_battery_li_cells_series_5_em_lut__data_10 + ((_ess_li_battery_li_cells_series_5_em_lut__data_11 - _ess_li_battery_li_cells_series_5_em_lut__data_10) * _ess_li_battery_li_cells_series_5_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_em_lut__value = _ess_li_battery_li_cells_series_5_em_lut__data_0 + ((_ess_li_battery_li_cells_series_5_em_lut__data_1 - _ess_li_battery_li_cells_series_5_em_lut__data_0) * _ess_li_battery_li_cells_series_5_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.R0_LUT
    if (_ess_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_5_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_5_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_5_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_5_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_5_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_5_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_5_constant1__out;
    _ess_li_battery_li_cells_series_5_r0_lut__x_addr = (_ess_li_battery_li_cells_series_5_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_5_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_5_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_5_r0_lut__y_addr = (_ess_li_battery_li_cells_series_5_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_5_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_5_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_5_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_5_r0_lut__x_addr - _ess_li_battery_li_cells_series_5_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_5_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_5_r0_lut__up_x = _ess_li_battery_li_cells_series_5_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_5_r0_lut__up_x = _ess_li_battery_li_cells_series_5_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_5_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_5_r0_lut__y_addr - _ess_li_battery_li_cells_series_5_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_5_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_5_r0_lut__up_y = _ess_li_battery_li_cells_series_5_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_5_r0_lut__up_y = _ess_li_battery_li_cells_series_5_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_5_r0_lut__data_00 = _ess_li_battery_li_cells_series_5_r0_lut__2d_table[_ess_li_battery_li_cells_series_5_r0_lut__down_x][_ess_li_battery_li_cells_series_5_r0_lut__down_y];
    _ess_li_battery_li_cells_series_5_r0_lut__data_01 = _ess_li_battery_li_cells_series_5_r0_lut__2d_table[_ess_li_battery_li_cells_series_5_r0_lut__down_x][_ess_li_battery_li_cells_series_5_r0_lut__up_y];
    _ess_li_battery_li_cells_series_5_r0_lut__data_10 = _ess_li_battery_li_cells_series_5_r0_lut__2d_table[_ess_li_battery_li_cells_series_5_r0_lut__up_x][_ess_li_battery_li_cells_series_5_r0_lut__down_y];
    _ess_li_battery_li_cells_series_5_r0_lut__data_11 = _ess_li_battery_li_cells_series_5_r0_lut__2d_table[_ess_li_battery_li_cells_series_5_r0_lut__up_x][_ess_li_battery_li_cells_series_5_r0_lut__up_y];
    _ess_li_battery_li_cells_series_5_r0_lut__data_0 = _ess_li_battery_li_cells_series_5_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_5_r0_lut__data_01 - _ess_li_battery_li_cells_series_5_r0_lut__data_00) * _ess_li_battery_li_cells_series_5_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_r0_lut__data_1 = _ess_li_battery_li_cells_series_5_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_5_r0_lut__data_11 - _ess_li_battery_li_cells_series_5_r0_lut__data_10) * _ess_li_battery_li_cells_series_5_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_r0_lut__value = _ess_li_battery_li_cells_series_5_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_5_r0_lut__data_1 - _ess_li_battery_li_cells_series_5_r0_lut__data_0) * _ess_li_battery_li_cells_series_5_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.R1_LUT
    if (_ess_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_5_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_5_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_5_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_5_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_5_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_5_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_5_constant1__out;
    _ess_li_battery_li_cells_series_5_r1_lut__x_addr = (_ess_li_battery_li_cells_series_5_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_5_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_5_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_5_r1_lut__y_addr = (_ess_li_battery_li_cells_series_5_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_5_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_5_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_5_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_5_r1_lut__x_addr - _ess_li_battery_li_cells_series_5_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_5_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_5_r1_lut__up_x = _ess_li_battery_li_cells_series_5_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_5_r1_lut__up_x = _ess_li_battery_li_cells_series_5_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_5_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_5_r1_lut__y_addr - _ess_li_battery_li_cells_series_5_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_5_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_5_r1_lut__up_y = _ess_li_battery_li_cells_series_5_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_5_r1_lut__up_y = _ess_li_battery_li_cells_series_5_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_5_r1_lut__data_00 = _ess_li_battery_li_cells_series_5_r1_lut__2d_table[_ess_li_battery_li_cells_series_5_r1_lut__down_x][_ess_li_battery_li_cells_series_5_r1_lut__down_y];
    _ess_li_battery_li_cells_series_5_r1_lut__data_01 = _ess_li_battery_li_cells_series_5_r1_lut__2d_table[_ess_li_battery_li_cells_series_5_r1_lut__down_x][_ess_li_battery_li_cells_series_5_r1_lut__up_y];
    _ess_li_battery_li_cells_series_5_r1_lut__data_10 = _ess_li_battery_li_cells_series_5_r1_lut__2d_table[_ess_li_battery_li_cells_series_5_r1_lut__up_x][_ess_li_battery_li_cells_series_5_r1_lut__down_y];
    _ess_li_battery_li_cells_series_5_r1_lut__data_11 = _ess_li_battery_li_cells_series_5_r1_lut__2d_table[_ess_li_battery_li_cells_series_5_r1_lut__up_x][_ess_li_battery_li_cells_series_5_r1_lut__up_y];
    _ess_li_battery_li_cells_series_5_r1_lut__data_0 = _ess_li_battery_li_cells_series_5_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_5_r1_lut__data_01 - _ess_li_battery_li_cells_series_5_r1_lut__data_00) * _ess_li_battery_li_cells_series_5_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_r1_lut__data_1 = _ess_li_battery_li_cells_series_5_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_5_r1_lut__data_11 - _ess_li_battery_li_cells_series_5_r1_lut__data_10) * _ess_li_battery_li_cells_series_5_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_5_r1_lut__value = _ess_li_battery_li_cells_series_5_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_5_r1_lut__data_1 - _ess_li_battery_li_cells_series_5_r1_lut__data_0) * _ess_li_battery_li_cells_series_5_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.SOC
    HIL_OutAO(0x4020, (float)_ess_li_battery_li_cells_series_5_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.R0.Vs
    HIL_OutFloat(145752068, (float) _ess_li_battery_li_cells_series_5_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.R1.Vs
    HIL_OutFloat(145752069, (float) _ess_li_battery_li_cells_series_5_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.C1.reciprocal
    _ess_li_battery_li_cells_series_5_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_5_unit_delay4__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Cq_LUT
    if(_ess_li_battery_li_cells_series_6_constant1__out <= _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[0]) {
        _ess_li_battery_li_cells_series_6_cq_lut__fraction = 0.0;
        _ess_li_battery_li_cells_series_6_cq_lut__leftIndex = 0;
    }
    else if(_ess_li_battery_li_cells_series_6_constant1__out < _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[4]) {
        _ess_li_battery_li_cells_series_6_cq_lut__curAddr = 4 >> 1;
        _ess_li_battery_li_cells_series_6_cq_lut__leftIndex = 0;
        _ess_li_battery_li_cells_series_6_cq_lut__rightIndex = 4;
        while (1 < _ess_li_battery_li_cells_series_6_cq_lut__rightIndex - _ess_li_battery_li_cells_series_6_cq_lut__leftIndex) {
            if (_ess_li_battery_li_cells_series_6_constant1__out < _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_6_cq_lut__curAddr]) {
                _ess_li_battery_li_cells_series_6_cq_lut__rightIndex = _ess_li_battery_li_cells_series_6_cq_lut__curAddr;
            }
            else {
                _ess_li_battery_li_cells_series_6_cq_lut__leftIndex = _ess_li_battery_li_cells_series_6_cq_lut__curAddr;
            }
            _ess_li_battery_li_cells_series_6_cq_lut__curAddr = (_ess_li_battery_li_cells_series_6_cq_lut__leftIndex + _ess_li_battery_li_cells_series_6_cq_lut__rightIndex) >> 1;
        }
        _ess_li_battery_li_cells_series_6_cq_lut__fraction = (_ess_li_battery_li_cells_series_6_constant1__out - _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex])
                / (_ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex]);
    }
    else {
        _ess_li_battery_li_cells_series_6_cq_lut__fraction = 1.0;
        _ess_li_battery_li_cells_series_6_cq_lut__leftIndex = 3;
    }
    _ess_li_battery_li_cells_series_6_cq_lut__value = (_ess_li_battery_li_cells_series_6_cq_lut__lut_table[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex + 1] - _ess_li_battery_li_cells_series_6_cq_lut__lut_table[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex])
            * _ess_li_battery_li_cells_series_6_cq_lut__fraction + _ess_li_battery_li_cells_series_6_cq_lut__lut_table[_ess_li_battery_li_cells_series_6_cq_lut__leftIndex];
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.LPF_dc1
    _ess_li_battery_li_cells_series_6_lpf_dc1__a_sum = 0.0f;
    _ess_li_battery_li_cells_series_6_lpf_dc1__b_sum = 0.0f;
    _ess_li_battery_li_cells_series_6_lpf_dc1__delay_line_in = 0.0f;
    for (_ess_li_battery_li_cells_series_6_lpf_dc1__i = 0; _ess_li_battery_li_cells_series_6_lpf_dc1__i < 1; _ess_li_battery_li_cells_series_6_lpf_dc1__i++) {
        _ess_li_battery_li_cells_series_6_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_6_lpf_dc1__b_coeff[_ess_li_battery_li_cells_series_6_lpf_dc1__i + 1] * _ess_li_battery_li_cells_series_6_lpf_dc1__states[_ess_li_battery_li_cells_series_6_lpf_dc1__i];
    }
    _ess_li_battery_li_cells_series_6_lpf_dc1__a_sum += _ess_li_battery_li_cells_series_6_lpf_dc1__states[0] * _ess_li_battery_li_cells_series_6_lpf_dc1__a_coeff[1];
    _ess_li_battery_li_cells_series_6_lpf_dc1__delay_line_in = _ess_li_battery_li_cells_series_6_idc_ia1__out - _ess_li_battery_li_cells_series_6_lpf_dc1__a_sum;
    _ess_li_battery_li_cells_series_6_lpf_dc1__b_sum += _ess_li_battery_li_cells_series_6_lpf_dc1__b_coeff[0] * _ess_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
    _ess_li_battery_li_cells_series_6_lpf_dc1__out = _ess_li_battery_li_cells_series_6_lpf_dc1__b_sum;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.C1_LUT
    if (_ess_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_6_c1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_6_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_6_c1_lut__input_x_clipped = _ess_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_6_c1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_6_c1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_6_c1_lut__input_y_clipped = _ess_li_battery_li_cells_series_6_constant1__out;
    _ess_li_battery_li_cells_series_6_c1_lut__x_addr = (_ess_li_battery_li_cells_series_6_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_6_c1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_6_c1_lut__x_addr);
    _ess_li_battery_li_cells_series_6_c1_lut__y_addr = (_ess_li_battery_li_cells_series_6_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_6_c1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_6_c1_lut__y_addr);
    _ess_li_battery_li_cells_series_6_c1_lut__x_int_coeff = _ess_li_battery_li_cells_series_6_c1_lut__x_addr - _ess_li_battery_li_cells_series_6_c1_lut__down_x;
    if (_ess_li_battery_li_cells_series_6_c1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_6_c1_lut__up_x = _ess_li_battery_li_cells_series_6_c1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_6_c1_lut__up_x = _ess_li_battery_li_cells_series_6_c1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_6_c1_lut__y_int_coeff = _ess_li_battery_li_cells_series_6_c1_lut__y_addr - _ess_li_battery_li_cells_series_6_c1_lut__down_y;
    if (_ess_li_battery_li_cells_series_6_c1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_6_c1_lut__up_y = _ess_li_battery_li_cells_series_6_c1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_6_c1_lut__up_y = _ess_li_battery_li_cells_series_6_c1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_6_c1_lut__data_00 = _ess_li_battery_li_cells_series_6_c1_lut__2d_table[_ess_li_battery_li_cells_series_6_c1_lut__down_x][_ess_li_battery_li_cells_series_6_c1_lut__down_y];
    _ess_li_battery_li_cells_series_6_c1_lut__data_01 = _ess_li_battery_li_cells_series_6_c1_lut__2d_table[_ess_li_battery_li_cells_series_6_c1_lut__down_x][_ess_li_battery_li_cells_series_6_c1_lut__up_y];
    _ess_li_battery_li_cells_series_6_c1_lut__data_10 = _ess_li_battery_li_cells_series_6_c1_lut__2d_table[_ess_li_battery_li_cells_series_6_c1_lut__up_x][_ess_li_battery_li_cells_series_6_c1_lut__down_y];
    _ess_li_battery_li_cells_series_6_c1_lut__data_11 = _ess_li_battery_li_cells_series_6_c1_lut__2d_table[_ess_li_battery_li_cells_series_6_c1_lut__up_x][_ess_li_battery_li_cells_series_6_c1_lut__up_y];
    _ess_li_battery_li_cells_series_6_c1_lut__data_0 = _ess_li_battery_li_cells_series_6_c1_lut__data_00 + ((_ess_li_battery_li_cells_series_6_c1_lut__data_01 - _ess_li_battery_li_cells_series_6_c1_lut__data_00) * _ess_li_battery_li_cells_series_6_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_c1_lut__data_1 = _ess_li_battery_li_cells_series_6_c1_lut__data_10 + ((_ess_li_battery_li_cells_series_6_c1_lut__data_11 - _ess_li_battery_li_cells_series_6_c1_lut__data_10) * _ess_li_battery_li_cells_series_6_c1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_c1_lut__value = _ess_li_battery_li_cells_series_6_c1_lut__data_0 + ((_ess_li_battery_li_cells_series_6_c1_lut__data_1 - _ess_li_battery_li_cells_series_6_c1_lut__data_0) * _ess_li_battery_li_cells_series_6_c1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Em_LUT
    if (_ess_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_6_em_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_6_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_6_em_lut__input_x_clipped = _ess_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_6_em_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_6_em_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_6_em_lut__input_y_clipped = _ess_li_battery_li_cells_series_6_constant1__out;
    _ess_li_battery_li_cells_series_6_em_lut__x_addr = (_ess_li_battery_li_cells_series_6_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_6_em_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_6_em_lut__x_addr);
    _ess_li_battery_li_cells_series_6_em_lut__y_addr = (_ess_li_battery_li_cells_series_6_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_6_em_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_6_em_lut__y_addr);
    _ess_li_battery_li_cells_series_6_em_lut__x_int_coeff = _ess_li_battery_li_cells_series_6_em_lut__x_addr - _ess_li_battery_li_cells_series_6_em_lut__down_x;
    if (_ess_li_battery_li_cells_series_6_em_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_6_em_lut__up_x = _ess_li_battery_li_cells_series_6_em_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_6_em_lut__up_x = _ess_li_battery_li_cells_series_6_em_lut__down_x;
    }
    _ess_li_battery_li_cells_series_6_em_lut__y_int_coeff = _ess_li_battery_li_cells_series_6_em_lut__y_addr - _ess_li_battery_li_cells_series_6_em_lut__down_y;
    if (_ess_li_battery_li_cells_series_6_em_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_6_em_lut__up_y = _ess_li_battery_li_cells_series_6_em_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_6_em_lut__up_y = _ess_li_battery_li_cells_series_6_em_lut__down_y;
    }
    _ess_li_battery_li_cells_series_6_em_lut__data_00 = _ess_li_battery_li_cells_series_6_em_lut__2d_table[_ess_li_battery_li_cells_series_6_em_lut__down_x][_ess_li_battery_li_cells_series_6_em_lut__down_y];
    _ess_li_battery_li_cells_series_6_em_lut__data_01 = _ess_li_battery_li_cells_series_6_em_lut__2d_table[_ess_li_battery_li_cells_series_6_em_lut__down_x][_ess_li_battery_li_cells_series_6_em_lut__up_y];
    _ess_li_battery_li_cells_series_6_em_lut__data_10 = _ess_li_battery_li_cells_series_6_em_lut__2d_table[_ess_li_battery_li_cells_series_6_em_lut__up_x][_ess_li_battery_li_cells_series_6_em_lut__down_y];
    _ess_li_battery_li_cells_series_6_em_lut__data_11 = _ess_li_battery_li_cells_series_6_em_lut__2d_table[_ess_li_battery_li_cells_series_6_em_lut__up_x][_ess_li_battery_li_cells_series_6_em_lut__up_y];
    _ess_li_battery_li_cells_series_6_em_lut__data_0 = _ess_li_battery_li_cells_series_6_em_lut__data_00 + ((_ess_li_battery_li_cells_series_6_em_lut__data_01 - _ess_li_battery_li_cells_series_6_em_lut__data_00) * _ess_li_battery_li_cells_series_6_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_em_lut__data_1 = _ess_li_battery_li_cells_series_6_em_lut__data_10 + ((_ess_li_battery_li_cells_series_6_em_lut__data_11 - _ess_li_battery_li_cells_series_6_em_lut__data_10) * _ess_li_battery_li_cells_series_6_em_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_em_lut__value = _ess_li_battery_li_cells_series_6_em_lut__data_0 + ((_ess_li_battery_li_cells_series_6_em_lut__data_1 - _ess_li_battery_li_cells_series_6_em_lut__data_0) * _ess_li_battery_li_cells_series_6_em_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.R0_LUT
    if (_ess_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_6_r0_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_6_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_6_r0_lut__input_x_clipped = _ess_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_6_r0_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_6_r0_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_6_r0_lut__input_y_clipped = _ess_li_battery_li_cells_series_6_constant1__out;
    _ess_li_battery_li_cells_series_6_r0_lut__x_addr = (_ess_li_battery_li_cells_series_6_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_6_r0_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_6_r0_lut__x_addr);
    _ess_li_battery_li_cells_series_6_r0_lut__y_addr = (_ess_li_battery_li_cells_series_6_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_6_r0_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_6_r0_lut__y_addr);
    _ess_li_battery_li_cells_series_6_r0_lut__x_int_coeff = _ess_li_battery_li_cells_series_6_r0_lut__x_addr - _ess_li_battery_li_cells_series_6_r0_lut__down_x;
    if (_ess_li_battery_li_cells_series_6_r0_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_6_r0_lut__up_x = _ess_li_battery_li_cells_series_6_r0_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_6_r0_lut__up_x = _ess_li_battery_li_cells_series_6_r0_lut__down_x;
    }
    _ess_li_battery_li_cells_series_6_r0_lut__y_int_coeff = _ess_li_battery_li_cells_series_6_r0_lut__y_addr - _ess_li_battery_li_cells_series_6_r0_lut__down_y;
    if (_ess_li_battery_li_cells_series_6_r0_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_6_r0_lut__up_y = _ess_li_battery_li_cells_series_6_r0_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_6_r0_lut__up_y = _ess_li_battery_li_cells_series_6_r0_lut__down_y;
    }
    _ess_li_battery_li_cells_series_6_r0_lut__data_00 = _ess_li_battery_li_cells_series_6_r0_lut__2d_table[_ess_li_battery_li_cells_series_6_r0_lut__down_x][_ess_li_battery_li_cells_series_6_r0_lut__down_y];
    _ess_li_battery_li_cells_series_6_r0_lut__data_01 = _ess_li_battery_li_cells_series_6_r0_lut__2d_table[_ess_li_battery_li_cells_series_6_r0_lut__down_x][_ess_li_battery_li_cells_series_6_r0_lut__up_y];
    _ess_li_battery_li_cells_series_6_r0_lut__data_10 = _ess_li_battery_li_cells_series_6_r0_lut__2d_table[_ess_li_battery_li_cells_series_6_r0_lut__up_x][_ess_li_battery_li_cells_series_6_r0_lut__down_y];
    _ess_li_battery_li_cells_series_6_r0_lut__data_11 = _ess_li_battery_li_cells_series_6_r0_lut__2d_table[_ess_li_battery_li_cells_series_6_r0_lut__up_x][_ess_li_battery_li_cells_series_6_r0_lut__up_y];
    _ess_li_battery_li_cells_series_6_r0_lut__data_0 = _ess_li_battery_li_cells_series_6_r0_lut__data_00 + ((_ess_li_battery_li_cells_series_6_r0_lut__data_01 - _ess_li_battery_li_cells_series_6_r0_lut__data_00) * _ess_li_battery_li_cells_series_6_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_r0_lut__data_1 = _ess_li_battery_li_cells_series_6_r0_lut__data_10 + ((_ess_li_battery_li_cells_series_6_r0_lut__data_11 - _ess_li_battery_li_cells_series_6_r0_lut__data_10) * _ess_li_battery_li_cells_series_6_r0_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_r0_lut__value = _ess_li_battery_li_cells_series_6_r0_lut__data_0 + ((_ess_li_battery_li_cells_series_6_r0_lut__data_1 - _ess_li_battery_li_cells_series_6_r0_lut__data_0) * _ess_li_battery_li_cells_series_6_r0_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.R1_LUT
    if (_ess_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ess_li_battery_li_cells_series_6_r1_lut__input_x_clipped = 0.0;
    else if (_ess_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ess_li_battery_li_cells_series_6_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ess_li_battery_li_cells_series_6_r1_lut__input_x_clipped = _ess_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ess_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ess_li_battery_li_cells_series_6_r1_lut__input_y_clipped = 278.15;
    else if (_ess_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ess_li_battery_li_cells_series_6_r1_lut__input_y_clipped = 308.15;
    else
        _ess_li_battery_li_cells_series_6_r1_lut__input_y_clipped = _ess_li_battery_li_cells_series_6_constant1__out;
    _ess_li_battery_li_cells_series_6_r1_lut__x_addr = (_ess_li_battery_li_cells_series_6_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ess_li_battery_li_cells_series_6_r1_lut__down_x = (int)trunc(_ess_li_battery_li_cells_series_6_r1_lut__x_addr);
    _ess_li_battery_li_cells_series_6_r1_lut__y_addr = (_ess_li_battery_li_cells_series_6_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ess_li_battery_li_cells_series_6_r1_lut__down_y = (int)trunc(_ess_li_battery_li_cells_series_6_r1_lut__y_addr);
    _ess_li_battery_li_cells_series_6_r1_lut__x_int_coeff = _ess_li_battery_li_cells_series_6_r1_lut__x_addr - _ess_li_battery_li_cells_series_6_r1_lut__down_x;
    if (_ess_li_battery_li_cells_series_6_r1_lut__x_int_coeff) {
        _ess_li_battery_li_cells_series_6_r1_lut__up_x = _ess_li_battery_li_cells_series_6_r1_lut__down_x + 1;
    } else {
        _ess_li_battery_li_cells_series_6_r1_lut__up_x = _ess_li_battery_li_cells_series_6_r1_lut__down_x;
    }
    _ess_li_battery_li_cells_series_6_r1_lut__y_int_coeff = _ess_li_battery_li_cells_series_6_r1_lut__y_addr - _ess_li_battery_li_cells_series_6_r1_lut__down_y;
    if (_ess_li_battery_li_cells_series_6_r1_lut__y_int_coeff) {
        _ess_li_battery_li_cells_series_6_r1_lut__up_y = _ess_li_battery_li_cells_series_6_r1_lut__down_y + 1;
    } else {
        _ess_li_battery_li_cells_series_6_r1_lut__up_y = _ess_li_battery_li_cells_series_6_r1_lut__down_y;
    }
    _ess_li_battery_li_cells_series_6_r1_lut__data_00 = _ess_li_battery_li_cells_series_6_r1_lut__2d_table[_ess_li_battery_li_cells_series_6_r1_lut__down_x][_ess_li_battery_li_cells_series_6_r1_lut__down_y];
    _ess_li_battery_li_cells_series_6_r1_lut__data_01 = _ess_li_battery_li_cells_series_6_r1_lut__2d_table[_ess_li_battery_li_cells_series_6_r1_lut__down_x][_ess_li_battery_li_cells_series_6_r1_lut__up_y];
    _ess_li_battery_li_cells_series_6_r1_lut__data_10 = _ess_li_battery_li_cells_series_6_r1_lut__2d_table[_ess_li_battery_li_cells_series_6_r1_lut__up_x][_ess_li_battery_li_cells_series_6_r1_lut__down_y];
    _ess_li_battery_li_cells_series_6_r1_lut__data_11 = _ess_li_battery_li_cells_series_6_r1_lut__2d_table[_ess_li_battery_li_cells_series_6_r1_lut__up_x][_ess_li_battery_li_cells_series_6_r1_lut__up_y];
    _ess_li_battery_li_cells_series_6_r1_lut__data_0 = _ess_li_battery_li_cells_series_6_r1_lut__data_00 + ((_ess_li_battery_li_cells_series_6_r1_lut__data_01 - _ess_li_battery_li_cells_series_6_r1_lut__data_00) * _ess_li_battery_li_cells_series_6_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_r1_lut__data_1 = _ess_li_battery_li_cells_series_6_r1_lut__data_10 + ((_ess_li_battery_li_cells_series_6_r1_lut__data_11 - _ess_li_battery_li_cells_series_6_r1_lut__data_10) * _ess_li_battery_li_cells_series_6_r1_lut__y_int_coeff);
    _ess_li_battery_li_cells_series_6_r1_lut__value = _ess_li_battery_li_cells_series_6_r1_lut__data_0 + ((_ess_li_battery_li_cells_series_6_r1_lut__data_1 - _ess_li_battery_li_cells_series_6_r1_lut__data_0) * _ess_li_battery_li_cells_series_6_r1_lut__x_int_coeff);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.SOC
    HIL_OutAO(0x4021, (float)_ess_li_battery_li_cells_series_6_unit_delay1__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.R0.Vs
    HIL_OutFloat(145752071, (float) _ess_li_battery_li_cells_series_6_unit_delay2__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.R1.Vs
    HIL_OutFloat(145752072, (float) _ess_li_battery_li_cells_series_6_unit_delay3__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.C1.reciprocal
    _ess_li_battery_li_cells_series_6_c1_reciprocal__out = 1.0 / (_ess_li_battery_li_cells_series_6_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_1_constant1__out <= _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_1_constant1__out < _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_1_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out < _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_1_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_1_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_1_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_1_constant1__out - _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_1_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_1_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_1_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_1_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_1_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_1_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_1_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_1_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_1_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_1_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_1_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_1_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_1_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_1_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_1_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_1_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_1_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_1_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_em_lut__value = _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_1_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_1_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_1_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_1_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_1_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_1_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_1_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_1_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_1_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_1_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_1_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_1_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_1_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_1_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_1_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_1_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.SOC
    HIL_OutAO(0x403c, (float)_ev_charging_station_li_battery_li_cells_series_1_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.R0.Vs
    HIL_OutFloat(149946369, (float) _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.R1.Vs
    HIL_OutFloat(149946370, (float) _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_1_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_1_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_2_constant1__out <= _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_2_constant1__out < _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_2_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out < _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_2_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_2_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_2_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_2_constant1__out - _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_2_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_2_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_2_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_2_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_2_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_2_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_2_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_2_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_2_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_2_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_2_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_2_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_2_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_2_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_2_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_2_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_2_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_2_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_em_lut__value = _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_2_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_2_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_2_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_2_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_2_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_2_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_2_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_2_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_2_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_2_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_2_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_2_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_2_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_2_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_2_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_2_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.SOC
    HIL_OutAO(0x403d, (float)_ev_charging_station_li_battery_li_cells_series_2_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.R0.Vs
    HIL_OutFloat(149946372, (float) _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.R1.Vs
    HIL_OutFloat(149946373, (float) _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_2_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_2_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_3_constant1__out <= _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_3_constant1__out < _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_3_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out < _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_3_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_3_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_3_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_3_constant1__out - _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_3_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_3_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_3_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_3_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_3_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_3_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_3_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_3_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_3_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_3_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_3_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_3_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_3_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_3_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_3_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_3_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_3_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_3_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_em_lut__value = _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_3_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_3_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_3_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_3_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_3_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_3_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_3_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_3_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_3_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_3_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_3_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_3_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_3_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_3_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_3_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_3_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.SOC
    HIL_OutAO(0x403e, (float)_ev_charging_station_li_battery_li_cells_series_3_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.R0.Vs
    HIL_OutFloat(149946375, (float) _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.R1.Vs
    HIL_OutFloat(149946376, (float) _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_3_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_3_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_4_constant1__out <= _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_4_constant1__out < _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_4_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out < _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_4_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_4_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_4_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_4_constant1__out - _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_4_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_4_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_4_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_4_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_4_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_4_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_4_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_4_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_4_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_4_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_4_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_4_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_4_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_4_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_4_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_4_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_4_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_4_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_em_lut__value = _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_4_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_4_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_4_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_4_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_4_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_4_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_4_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_4_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_4_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_4_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_4_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_4_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_4_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_4_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_4_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_4_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.SOC
    HIL_OutAO(0x403f, (float)_ev_charging_station_li_battery_li_cells_series_4_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.R0.Vs
    HIL_OutFloat(154140673, (float) _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.R1.Vs
    HIL_OutFloat(154140674, (float) _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_4_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_4_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_5_constant1__out <= _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_5_constant1__out < _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_5_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out < _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_5_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_5_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_5_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_5_constant1__out - _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_5_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_5_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_5_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_5_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_5_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_5_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_5_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_5_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_5_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_5_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_5_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_5_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_5_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_5_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_5_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_5_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_5_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_5_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_em_lut__value = _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_5_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_5_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_5_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_5_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_5_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_5_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_5_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_5_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_5_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_5_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_5_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_5_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_5_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_5_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_5_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_5_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.SOC
    HIL_OutAO(0x4040, (float)_ev_charging_station_li_battery_li_cells_series_5_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.R0.Vs
    HIL_OutFloat(154140676, (float) _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.R1.Vs
    HIL_OutFloat(154140677, (float) _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_5_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_5_unit_delay4__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Cq_LUT
    if(_ev_charging_station_li_battery_li_cells_series_6_constant1__out <= _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[0]) {
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__fraction = 0.0;
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex = 0;
    }
    else if(_ev_charging_station_li_battery_li_cells_series_6_constant1__out < _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[4]) {
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr = 4 >> 1;
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex = 0;
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__rightIndex = 4;
        while (1 < _ev_charging_station_li_battery_li_cells_series_6_cq_lut__rightIndex - _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex) {
            if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out < _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr]) {
                _ev_charging_station_li_battery_li_cells_series_6_cq_lut__rightIndex = _ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr;
            }
            else {
                _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex = _ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr;
            }
            _ev_charging_station_li_battery_li_cells_series_6_cq_lut__curAddr = (_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex + _ev_charging_station_li_battery_li_cells_series_6_cq_lut__rightIndex) >> 1;
        }
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__fraction = (_ev_charging_station_li_battery_li_cells_series_6_constant1__out - _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex])
                / (_ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_addrs[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex]);
    }
    else {
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__fraction = 1.0;
        _ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex = 3;
    }
    _ev_charging_station_li_battery_li_cells_series_6_cq_lut__value = (_ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex + 1] - _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex])
            * _ev_charging_station_li_battery_li_cells_series_6_cq_lut__fraction + _ev_charging_station_li_battery_li_cells_series_6_cq_lut__lut_table[_ev_charging_station_li_battery_li_cells_series_6_cq_lut__leftIndex];
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_sum = 0.0f;
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__delay_line_in = 0.0f;
    for (_ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i = 0; _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i < 1; _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i++) {
        _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_coeff[_ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i + 1] * _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__states[_ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__i];
    }
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_sum += _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__states[0] * _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_coeff[1];
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__delay_line_in = _ev_charging_station_li_battery_li_cells_series_6_idc_ia1__out - _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__a_sum;
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_sum += _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_coeff[0] * _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__out = _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__b_sum;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.C1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_6_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_6_c1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_c1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_c1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_6_c1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_c1_lut__value = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_6_c1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_6_c1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Em_LUT
    if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_6_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_6_em_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_em_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_6_em_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_em_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_6_em_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_6_em_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_em_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_em_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_em_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_em_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_em_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_6_em_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_6_em_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_6_em_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_em_lut__value = _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_6_em_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_6_em_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_6_em_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.R0_LUT
    if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_6_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_6_r0_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_r0_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_r0_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_6_r0_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_r0_lut__value = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_6_r0_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_6_r0_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.R1_LUT
    if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out < 0.0)
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_x_clipped = 0.0;
    else if (_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out > 0.9999999999999998)
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_x_clipped = 0.9999999999999998;
    else
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_x_clipped = _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out;
    if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out < 278.15)
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_y_clipped = 278.15;
    else if (_ev_charging_station_li_battery_li_cells_series_6_constant1__out > 308.15)
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_y_clipped = 308.15;
    else
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_y_clipped = _ev_charging_station_li_battery_li_cells_series_6_constant1__out;
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_addr = (_ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_x_clipped + (-0.0)) * 20.000000000000004;
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_addr);
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_addr = (_ev_charging_station_li_battery_li_cells_series_6_r1_lut__input_y_clipped + (-278.15)) * 0.13333333333333333;
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y = (int)trunc(_ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_addr);
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_addr - _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x;
    if (_ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_x = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x;
    }
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_int_coeff = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_addr - _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y;
    if (_ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_int_coeff) {
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y + 1;
    } else {
        _ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_y = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y;
    }
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_00 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_01 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_x][_ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_10 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_r1_lut__down_y];
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_11 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__2d_table[_ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_x][_ev_charging_station_li_battery_li_cells_series_6_r1_lut__up_y];
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_0 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_00 + ((_ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_01 - _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_00) * _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_1 = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_10 + ((_ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_11 - _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_10) * _ev_charging_station_li_battery_li_cells_series_6_r1_lut__y_int_coeff);
    _ev_charging_station_li_battery_li_cells_series_6_r1_lut__value = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_0 + ((_ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_1 - _ev_charging_station_li_battery_li_cells_series_6_r1_lut__data_0) * _ev_charging_station_li_battery_li_cells_series_6_r1_lut__x_int_coeff);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.SOC
    HIL_OutAO(0x4041, (float)_ev_charging_station_li_battery_li_cells_series_6_unit_delay1__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.R0.Vs
    HIL_OutFloat(154140679, (float) _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.R1.Vs
    HIL_OutFloat(154140680, (float) _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.C1.reciprocal
    _ev_charging_station_li_battery_li_cells_series_6_c1_reciprocal__out = 1.0 / (_ev_charging_station_li_battery_li_cells_series_6_unit_delay4__out);
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
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.C function
    _ess_li_battery_li_cells_series_1_c_function__C1_cell = _ess_li_battery_li_cells_series_1_c1_lut__value;
    _ess_li_battery_li_cells_series_1_c_function__Cq = _ess_li_battery_li_cells_series_1_cq_lut__value;
    _ess_li_battery_li_cells_series_1_c_function__Em_cell = _ess_li_battery_li_cells_series_1_em_lut__value;
    _ess_li_battery_li_cells_series_1_c_function__Idc = _ess_li_battery_li_cells_series_1_lpf_dc1__out;
    _ess_li_battery_li_cells_series_1_c_function__R0_cell = _ess_li_battery_li_cells_series_1_r0_lut__value;
    _ess_li_battery_li_cells_series_1_c_function__R1_cell = _ess_li_battery_li_cells_series_1_r1_lut__value;
    _ess_li_battery_li_cells_series_1_c_function__Vdc = _ess_li_battery_li_cells_series_1_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_1_c_function__SOC = _ess_li_battery_li_cells_series_1_c_function__SOC + (_ess_li_battery_li_cells_series_1_c_function__Idc / _ess_li_battery_li_cells_series_1_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_1_c_function__R0 = _ess_li_battery_li_cells_series_1_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_1_c_function__R1 = _ess_li_battery_li_cells_series_1_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_1_c_function__C1 = _ess_li_battery_li_cells_series_1_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.C1.Vs
    HIL_OutFloat(141557760, (float) _ess_li_battery_li_cells_series_1_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.C function
    _ess_li_battery_li_cells_series_2_c_function__C1_cell = _ess_li_battery_li_cells_series_2_c1_lut__value;
    _ess_li_battery_li_cells_series_2_c_function__Cq = _ess_li_battery_li_cells_series_2_cq_lut__value;
    _ess_li_battery_li_cells_series_2_c_function__Em_cell = _ess_li_battery_li_cells_series_2_em_lut__value;
    _ess_li_battery_li_cells_series_2_c_function__Idc = _ess_li_battery_li_cells_series_2_lpf_dc1__out;
    _ess_li_battery_li_cells_series_2_c_function__R0_cell = _ess_li_battery_li_cells_series_2_r0_lut__value;
    _ess_li_battery_li_cells_series_2_c_function__R1_cell = _ess_li_battery_li_cells_series_2_r1_lut__value;
    _ess_li_battery_li_cells_series_2_c_function__Vdc = _ess_li_battery_li_cells_series_2_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_2_c_function__SOC = _ess_li_battery_li_cells_series_2_c_function__SOC + (_ess_li_battery_li_cells_series_2_c_function__Idc / _ess_li_battery_li_cells_series_2_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_2_c_function__R0 = _ess_li_battery_li_cells_series_2_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_2_c_function__R1 = _ess_li_battery_li_cells_series_2_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_2_c_function__C1 = _ess_li_battery_li_cells_series_2_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.C1.Vs
    HIL_OutFloat(141557763, (float) _ess_li_battery_li_cells_series_2_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.C function
    _ess_li_battery_li_cells_series_3_c_function__C1_cell = _ess_li_battery_li_cells_series_3_c1_lut__value;
    _ess_li_battery_li_cells_series_3_c_function__Cq = _ess_li_battery_li_cells_series_3_cq_lut__value;
    _ess_li_battery_li_cells_series_3_c_function__Em_cell = _ess_li_battery_li_cells_series_3_em_lut__value;
    _ess_li_battery_li_cells_series_3_c_function__Idc = _ess_li_battery_li_cells_series_3_lpf_dc1__out;
    _ess_li_battery_li_cells_series_3_c_function__R0_cell = _ess_li_battery_li_cells_series_3_r0_lut__value;
    _ess_li_battery_li_cells_series_3_c_function__R1_cell = _ess_li_battery_li_cells_series_3_r1_lut__value;
    _ess_li_battery_li_cells_series_3_c_function__Vdc = _ess_li_battery_li_cells_series_3_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_3_c_function__SOC = _ess_li_battery_li_cells_series_3_c_function__SOC + (_ess_li_battery_li_cells_series_3_c_function__Idc / _ess_li_battery_li_cells_series_3_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_3_c_function__R0 = _ess_li_battery_li_cells_series_3_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_3_c_function__R1 = _ess_li_battery_li_cells_series_3_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_3_c_function__C1 = _ess_li_battery_li_cells_series_3_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.C1.Vs
    HIL_OutFloat(141557766, (float) _ess_li_battery_li_cells_series_3_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.C function
    _ess_li_battery_li_cells_series_4_c_function__C1_cell = _ess_li_battery_li_cells_series_4_c1_lut__value;
    _ess_li_battery_li_cells_series_4_c_function__Cq = _ess_li_battery_li_cells_series_4_cq_lut__value;
    _ess_li_battery_li_cells_series_4_c_function__Em_cell = _ess_li_battery_li_cells_series_4_em_lut__value;
    _ess_li_battery_li_cells_series_4_c_function__Idc = _ess_li_battery_li_cells_series_4_lpf_dc1__out;
    _ess_li_battery_li_cells_series_4_c_function__R0_cell = _ess_li_battery_li_cells_series_4_r0_lut__value;
    _ess_li_battery_li_cells_series_4_c_function__R1_cell = _ess_li_battery_li_cells_series_4_r1_lut__value;
    _ess_li_battery_li_cells_series_4_c_function__Vdc = _ess_li_battery_li_cells_series_4_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_4_c_function__SOC = _ess_li_battery_li_cells_series_4_c_function__SOC + (_ess_li_battery_li_cells_series_4_c_function__Idc / _ess_li_battery_li_cells_series_4_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_4_c_function__R0 = _ess_li_battery_li_cells_series_4_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_4_c_function__R1 = _ess_li_battery_li_cells_series_4_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_4_c_function__C1 = _ess_li_battery_li_cells_series_4_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.C1.Vs
    HIL_OutFloat(145752064, (float) _ess_li_battery_li_cells_series_4_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.C function
    _ess_li_battery_li_cells_series_5_c_function__C1_cell = _ess_li_battery_li_cells_series_5_c1_lut__value;
    _ess_li_battery_li_cells_series_5_c_function__Cq = _ess_li_battery_li_cells_series_5_cq_lut__value;
    _ess_li_battery_li_cells_series_5_c_function__Em_cell = _ess_li_battery_li_cells_series_5_em_lut__value;
    _ess_li_battery_li_cells_series_5_c_function__Idc = _ess_li_battery_li_cells_series_5_lpf_dc1__out;
    _ess_li_battery_li_cells_series_5_c_function__R0_cell = _ess_li_battery_li_cells_series_5_r0_lut__value;
    _ess_li_battery_li_cells_series_5_c_function__R1_cell = _ess_li_battery_li_cells_series_5_r1_lut__value;
    _ess_li_battery_li_cells_series_5_c_function__Vdc = _ess_li_battery_li_cells_series_5_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_5_c_function__SOC = _ess_li_battery_li_cells_series_5_c_function__SOC + (_ess_li_battery_li_cells_series_5_c_function__Idc / _ess_li_battery_li_cells_series_5_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_5_c_function__R0 = _ess_li_battery_li_cells_series_5_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_5_c_function__R1 = _ess_li_battery_li_cells_series_5_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_5_c_function__C1 = _ess_li_battery_li_cells_series_5_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.C1.Vs
    HIL_OutFloat(145752067, (float) _ess_li_battery_li_cells_series_5_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.C function
    _ess_li_battery_li_cells_series_6_c_function__C1_cell = _ess_li_battery_li_cells_series_6_c1_lut__value;
    _ess_li_battery_li_cells_series_6_c_function__Cq = _ess_li_battery_li_cells_series_6_cq_lut__value;
    _ess_li_battery_li_cells_series_6_c_function__Em_cell = _ess_li_battery_li_cells_series_6_em_lut__value;
    _ess_li_battery_li_cells_series_6_c_function__Idc = _ess_li_battery_li_cells_series_6_lpf_dc1__out;
    _ess_li_battery_li_cells_series_6_c_function__R0_cell = _ess_li_battery_li_cells_series_6_r0_lut__value;
    _ess_li_battery_li_cells_series_6_c_function__R1_cell = _ess_li_battery_li_cells_series_6_r1_lut__value;
    _ess_li_battery_li_cells_series_6_c_function__Vdc = _ess_li_battery_li_cells_series_6_c_function__Em_cell * 100.0;
    _ess_li_battery_li_cells_series_6_c_function__SOC = _ess_li_battery_li_cells_series_6_c_function__SOC + (_ess_li_battery_li_cells_series_6_c_function__Idc / _ess_li_battery_li_cells_series_6_c_function__Cq) * 0.001 / 3600.0;
    _ess_li_battery_li_cells_series_6_c_function__R0 = _ess_li_battery_li_cells_series_6_c_function__R0_cell * 100.0;
    _ess_li_battery_li_cells_series_6_c_function__R1 = _ess_li_battery_li_cells_series_6_c_function__R1_cell * 100.0;
    _ess_li_battery_li_cells_series_6_c_function__C1 = _ess_li_battery_li_cells_series_6_c_function__C1_cell / 100.0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.C1.Vs
    HIL_OutFloat(145752070, (float) _ess_li_battery_li_cells_series_6_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.C function
    _ev_charging_station_li_battery_li_cells_series_1_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_1_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_1_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_1_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_1_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_1_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_1_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_1_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_1_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_1_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_1_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_1_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_1_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_1_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.C1.Vs
    HIL_OutFloat(149946368, (float) _ev_charging_station_li_battery_li_cells_series_1_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.C function
    _ev_charging_station_li_battery_li_cells_series_2_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_2_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_2_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_2_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_2_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_2_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_2_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_2_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_2_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_2_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_2_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_2_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_2_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_2_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.C1.Vs
    HIL_OutFloat(149946371, (float) _ev_charging_station_li_battery_li_cells_series_2_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.C function
    _ev_charging_station_li_battery_li_cells_series_3_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_3_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_3_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_3_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_3_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_3_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_3_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_3_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_3_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_3_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_3_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_3_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_3_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_3_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.C1.Vs
    HIL_OutFloat(149946374, (float) _ev_charging_station_li_battery_li_cells_series_3_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.C function
    _ev_charging_station_li_battery_li_cells_series_4_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_4_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_4_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_4_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_4_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_4_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_4_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_4_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_4_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_4_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_4_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_4_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_4_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_4_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.C1.Vs
    HIL_OutFloat(154140672, (float) _ev_charging_station_li_battery_li_cells_series_4_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.C function
    _ev_charging_station_li_battery_li_cells_series_5_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_5_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_5_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_5_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_5_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_5_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_5_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_5_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_5_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_5_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_5_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_5_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_5_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_5_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.C1.Vs
    HIL_OutFloat(154140675, (float) _ev_charging_station_li_battery_li_cells_series_5_c1_reciprocal__out);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.C function
    _ev_charging_station_li_battery_li_cells_series_6_c_function__C1_cell = _ev_charging_station_li_battery_li_cells_series_6_c1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__Cq = _ev_charging_station_li_battery_li_cells_series_6_cq_lut__value;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__Em_cell = _ev_charging_station_li_battery_li_cells_series_6_em_lut__value;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__Idc = _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__out;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__R0_cell = _ev_charging_station_li_battery_li_cells_series_6_r0_lut__value;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__R1_cell = _ev_charging_station_li_battery_li_cells_series_6_r1_lut__value;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__Vdc = _ev_charging_station_li_battery_li_cells_series_6_c_function__Em_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__SOC = _ev_charging_station_li_battery_li_cells_series_6_c_function__SOC + (_ev_charging_station_li_battery_li_cells_series_6_c_function__Idc / _ev_charging_station_li_battery_li_cells_series_6_c_function__Cq) * 0.001 / 3600.0;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__R0 = _ev_charging_station_li_battery_li_cells_series_6_c_function__R0_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__R1 = _ev_charging_station_li_battery_li_cells_series_6_c_function__R1_cell * 100.0;
    _ev_charging_station_li_battery_li_cells_series_6_c_function__C1 = _ev_charging_station_li_battery_li_cells_series_6_c_function__C1_cell / 100.0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.C1.Vs
    HIL_OutFloat(154140678, (float) _ev_charging_station_li_battery_li_cells_series_6_c1_reciprocal__out);
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Vess.Vs1
    HIL_OutFloat(141295616, (float) _ess_li_battery_li_cells_series_1_c_function__Vdc);
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Vess.Vs1
    HIL_OutFloat(141295617, (float) _ess_li_battery_li_cells_series_2_c_function__Vdc);
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Vess.Vs1
    HIL_OutFloat(141295618, (float) _ess_li_battery_li_cells_series_3_c_function__Vdc);
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Vess.Vs1
    HIL_OutFloat(145489920, (float) _ess_li_battery_li_cells_series_4_c_function__Vdc);
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Vess.Vs1
    HIL_OutFloat(145489921, (float) _ess_li_battery_li_cells_series_5_c_function__Vdc);
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Vess.Vs1
    HIL_OutFloat(145489922, (float) _ess_li_battery_li_cells_series_6_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Vess.Vs1
    HIL_OutFloat(149684224, (float) _ev_charging_station_li_battery_li_cells_series_1_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Vess.Vs1
    HIL_OutFloat(149684225, (float) _ev_charging_station_li_battery_li_cells_series_2_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Vess.Vs1
    HIL_OutFloat(149684226, (float) _ev_charging_station_li_battery_li_cells_series_3_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Vess.Vs1
    HIL_OutFloat(153878528, (float) _ev_charging_station_li_battery_li_cells_series_4_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Vess.Vs1
    HIL_OutFloat(153878529, (float) _ev_charging_station_li_battery_li_cells_series_5_c_function__Vdc);
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Vess.Vs1
    HIL_OutFloat(153878530, (float) _ev_charging_station_li_battery_li_cells_series_6_c_function__Vdc);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay1
    _ess_li_battery_li_cells_series_1_unit_delay1__state = _ess_li_battery_li_cells_series_1_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay2
    _ess_li_battery_li_cells_series_1_unit_delay2__state = _ess_li_battery_li_cells_series_1_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay3
    _ess_li_battery_li_cells_series_1_unit_delay3__state = _ess_li_battery_li_cells_series_1_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.Unit Delay4
    _ess_li_battery_li_cells_series_1_unit_delay4__state = _ess_li_battery_li_cells_series_1_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay1
    _ess_li_battery_li_cells_series_2_unit_delay1__state = _ess_li_battery_li_cells_series_2_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay2
    _ess_li_battery_li_cells_series_2_unit_delay2__state = _ess_li_battery_li_cells_series_2_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay3
    _ess_li_battery_li_cells_series_2_unit_delay3__state = _ess_li_battery_li_cells_series_2_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.Unit Delay4
    _ess_li_battery_li_cells_series_2_unit_delay4__state = _ess_li_battery_li_cells_series_2_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay1
    _ess_li_battery_li_cells_series_3_unit_delay1__state = _ess_li_battery_li_cells_series_3_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay2
    _ess_li_battery_li_cells_series_3_unit_delay2__state = _ess_li_battery_li_cells_series_3_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay3
    _ess_li_battery_li_cells_series_3_unit_delay3__state = _ess_li_battery_li_cells_series_3_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.Unit Delay4
    _ess_li_battery_li_cells_series_3_unit_delay4__state = _ess_li_battery_li_cells_series_3_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay1
    _ess_li_battery_li_cells_series_4_unit_delay1__state = _ess_li_battery_li_cells_series_4_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay2
    _ess_li_battery_li_cells_series_4_unit_delay2__state = _ess_li_battery_li_cells_series_4_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay3
    _ess_li_battery_li_cells_series_4_unit_delay3__state = _ess_li_battery_li_cells_series_4_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.Unit Delay4
    _ess_li_battery_li_cells_series_4_unit_delay4__state = _ess_li_battery_li_cells_series_4_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay1
    _ess_li_battery_li_cells_series_5_unit_delay1__state = _ess_li_battery_li_cells_series_5_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay2
    _ess_li_battery_li_cells_series_5_unit_delay2__state = _ess_li_battery_li_cells_series_5_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay3
    _ess_li_battery_li_cells_series_5_unit_delay3__state = _ess_li_battery_li_cells_series_5_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.Unit Delay4
    _ess_li_battery_li_cells_series_5_unit_delay4__state = _ess_li_battery_li_cells_series_5_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay1
    _ess_li_battery_li_cells_series_6_unit_delay1__state = _ess_li_battery_li_cells_series_6_c_function__SOC;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay2
    _ess_li_battery_li_cells_series_6_unit_delay2__state = _ess_li_battery_li_cells_series_6_c_function__R0;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay3
    _ess_li_battery_li_cells_series_6_unit_delay3__state = _ess_li_battery_li_cells_series_6_c_function__R1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.Unit Delay4
    _ess_li_battery_li_cells_series_6_unit_delay4__state = _ess_li_battery_li_cells_series_6_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_1_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_1_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_1_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_1_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_1_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_2_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_2_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_2_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_2_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_2_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_3_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_3_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_3_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_3_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_3_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_4_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_4_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_4_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_4_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_4_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_5_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_5_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_5_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_5_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_5_c_function__C1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay1
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay1__state = _ev_charging_station_li_battery_li_cells_series_6_c_function__SOC;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay2
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay2__state = _ev_charging_station_li_battery_li_cells_series_6_c_function__R0;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay3
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay3__state = _ev_charging_station_li_battery_li_cells_series_6_c_function__R1;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.Unit Delay4
    _ev_charging_station_li_battery_li_cells_series_6_unit_delay4__state = _ev_charging_station_li_battery_li_cells_series_6_c_function__C1;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.LPF_dc1
    _ess_li_battery_li_cells_series_1_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.LPF_dc1
    _ess_li_battery_li_cells_series_2_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.LPF_dc1
    _ess_li_battery_li_cells_series_3_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.LPF_dc1
    _ess_li_battery_li_cells_series_4_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.LPF_dc1
    _ess_li_battery_li_cells_series_5_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.LPF_dc1
    _ess_li_battery_li_cells_series_6_lpf_dc1__states[0] = _ess_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_1_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_2_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_3_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_4_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_5_lpf_dc1__delay_line_in;
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.LPF_dc1
    _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__states[0] = _ev_charging_station_li_battery_li_cells_series_6_lpf_dc1__delay_line_in;
    // Generated from the component: ESS.Li Battery.Li Cells Series 1.C function
    // Generated from the component: ESS.Li Battery.Li Cells Series 2.C function
    // Generated from the component: ESS.Li Battery.Li Cells Series 3.C function
    // Generated from the component: ESS.Li Battery.Li Cells Series 4.C function
    // Generated from the component: ESS.Li Battery.Li Cells Series 5.C function
    // Generated from the component: ESS.Li Battery.Li Cells Series 6.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 1.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 2.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 3.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 4.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 5.C function
    // Generated from the component: EV Charging Station.Li Battery.Li Cells Series 6.C function
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
    // Generated from the component: ESS.Inverter.Controller.C function3
    _ess_inverter_controller_c_function3__Pref = 2;
    _ess_inverter_controller_c_function3__Qref = 1.5;
    if (_ess_inverter_controller_c_function3__k > 12)_ess_inverter_controller_c_function3__k = 0;
    if (_ess_inverter_controller_c_function3__t > 4)_ess_inverter_controller_c_function3__t = 0;
    if (_ess_inverter_controller_c_function3__k == 0) {
        _ess_inverter_controller_c_function3__Pref = 1;
        _ess_inverter_controller_c_function3__Qref = 0.5;
    }
    else if (_ess_inverter_controller_c_function3__k == 1) {
        _ess_inverter_controller_c_function3__Pref = 2;
        _ess_inverter_controller_c_function3__Qref = 1.3;
    }
    else if (_ess_inverter_controller_c_function3__k == 2) {
        _ess_inverter_controller_c_function3__Pref = 2.64;
        _ess_inverter_controller_c_function3__Qref = 1.2;
    }
    else if (_ess_inverter_controller_c_function3__k == 3) {
        _ess_inverter_controller_c_function3__Pref = 1.93;
        _ess_inverter_controller_c_function3__Qref = 1;
    }
    else if (_ess_inverter_controller_c_function3__k == 4) {
        _ess_inverter_controller_c_function3__Pref = 2.4;
        _ess_inverter_controller_c_function3__Qref = 2;
    }
    else if (_ess_inverter_controller_c_function3__k == 5) {
        _ess_inverter_controller_c_function3__Pref = 2.72;
        _ess_inverter_controller_c_function3__Qref = 1.6;
    }
    else if (_ess_inverter_controller_c_function3__k == 6) {
        _ess_inverter_controller_c_function3__Pref = 3.2;
        _ess_inverter_controller_c_function3__Qref = 1.4;
    }
    else if (_ess_inverter_controller_c_function3__k == 7) {
        _ess_inverter_controller_c_function3__Pref = 2.69;
        _ess_inverter_controller_c_function3__Qref = 1.9;
    }
    else if (_ess_inverter_controller_c_function3__k == 8) {
        _ess_inverter_controller_c_function3__Pref = 3.04;
        _ess_inverter_controller_c_function3__Qref = 2.3;
    }
    else if (_ess_inverter_controller_c_function3__k == 9) {
        _ess_inverter_controller_c_function3__Pref = 2.9;
        _ess_inverter_controller_c_function3__Qref = 1.9;
    }
    else if (_ess_inverter_controller_c_function3__k == 10) {
        _ess_inverter_controller_c_function3__Pref = 1.9;
        _ess_inverter_controller_c_function3__Qref = 1.3;
    }
    else if (_ess_inverter_controller_c_function3__k == 11) {
        _ess_inverter_controller_c_function3__Pref = 2.2;
        _ess_inverter_controller_c_function3__Qref = 1.6;
    }
    else if (_ess_inverter_controller_c_function3__k == 12) {
        _ess_inverter_controller_c_function3__Pref = 1.5;
        _ess_inverter_controller_c_function3__Qref = 1;
    }
    if (_ess_inverter_controller_c_function3__t >= 4)_ess_inverter_controller_c_function3__k += 1;
    _ess_inverter_controller_c_function3__t += 1;
    // Generated from the component: ESS.Inverter.Controller.Gain23
    _ess_inverter_controller_gain23__out = 1000.0 * _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: ESS.Inverter.Controller.Gain24
    _ess_inverter_controller_gain24__out = 1000.0 * _ess_inverter_controller_c_function3__Qref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition10.Input
    _ess_inverter_controller_rate_transition10_output__out = _ess_inverter_controller_c_function3__Qref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition9.Input
    _ess_inverter_controller_rate_transition9_output__out = _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: EV Charging Station.Inverter.Controller.Constant6
    // Generated from the component: ESS.Inverter.Controller.Pref
    HIL_OutAO(0x4011, (float)_ess_inverter_controller_gain23__out);
    // Generated from the component: ESS.Inverter.Controller.Qref
    HIL_OutAO(0x4012, (float)_ess_inverter_controller_gain24__out);
    // Generated from the component: EV Charging Station.Inverter.Controller.C function1
    _ev_charging_station_inverter_controller_c_function1__Pref = _ev_charging_station_inverter_controller_constant6__out;
    if (_ev_charging_station_inverter_controller_c_function1__k > 3)_ev_charging_station_inverter_controller_c_function1__k = 0;
    if (_ev_charging_station_inverter_controller_c_function1__k == 1)_ev_charging_station_inverter_controller_c_function1__out = _ev_charging_station_inverter_controller_c_function1__out + 0.1 * (_ev_charging_station_inverter_controller_c_function1__Pref - _ev_charging_station_inverter_controller_c_function1__out);
    _ev_charging_station_inverter_controller_c_function1__k += 1;
    // Generated from the component: EV Charging Station.Inverter.Controller.Rate Transition1.Input
    _ev_charging_station_inverter_controller_rate_transition1_output__out = _ev_charging_station_inverter_controller_c_function1__out;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Controller.C function3
    // Generated from the component: EV Charging Station.Inverter.Controller.C function1
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------  //-----------------------------------------------------------------------------------------