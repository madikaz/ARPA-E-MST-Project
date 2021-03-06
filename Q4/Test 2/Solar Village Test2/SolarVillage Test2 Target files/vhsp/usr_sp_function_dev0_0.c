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
























































































































































































































































































































































#define _grid_vs_tdf_sg_ctrl_sine1__no_of_points 1000
#define _grid_vs_tdf_sg_ctrl_sine1__max_int40 (1099511627775)
#define _grid_vs_tdf_sg_ctrl_sine1__max_int32 (4294967295)














































































































































































































































































































































































































//@cmp.def.end


//-----------------------------------------------------------------------------------------
// generated using template: common_variables.template-------------------------------------
// true global variables


//@cmp.var.start
// variables
double _ess_dynamic_table1_clock1__out;
double _ess_inverter_bpf_hpf__out;
double _ess_inverter_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _ess_inverter_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _ess_inverter_bpf_hpf__a_sum;
double _ess_inverter_bpf_hpf__b_sum;
double _ess_inverter_bpf_hpf__delay_line_in;
double _ess_inverter_bpf1_hpf__out;
double _ess_inverter_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _ess_inverter_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _ess_inverter_bpf1_hpf__a_sum;
double _ess_inverter_bpf1_hpf__b_sum;
double _ess_inverter_bpf1_hpf__delay_line_in;


double _ess_inverter_controller_c_function3__Pref;
double _ess_inverter_controller_constant2__out = 1.0;
double _ess_inverter_controller_constant3__out = 3.141592653589793;
double _ess_inverter_controller_constant4__out = 0.0002;
double _ess_inverter_controller_constant5__out = 0.0;
double _ess_inverter_controller_constant6__out = 376.99111843077515;
double _ess_inverter_controller_gain23__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _ess_inverter_controller_charge__out;
double _ess_inverter_e_va1__out;
double _ess_inverter_i_ia1__out;
double _ess_inverter_power_meas_gain4__out;
double _ess_inverter_power_meas_gain5__out;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _ess_inverter_vdc_va1__out;
double _ess_modbus_bus_split1__out;
double _ess_modbus_bus_split1__out1;
double _ess_modbus_c_u11__out = 1.0;
double _ess_modbus_c_u12__out = 1.0;
double _ess_modbus_c_u13__out = 50.0;
double _grid_constant1__out = 240.0;
double _grid_constant2__out = 60.0;
double _grid_constant3__out = 0.0;
double _measurement_bpf_hpf__out;
double _measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _measurement_bpf_hpf__a_sum;
double _measurement_bpf_hpf__b_sum;
double _measurement_bpf_hpf__delay_line_in;
double _measurement_bpf1_hpf__out;
double _measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _measurement_bpf1_hpf__a_sum;
double _measurement_bpf1_hpf__b_sum;
double _measurement_bpf1_hpf__delay_line_in;
double _measurement_ia_ia1__out;
double _measurement_va_va1__out;
double _solarhouse1_inverter_bpf_hpf__out;
double _solarhouse1_inverter_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_inverter_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_inverter_bpf_hpf__a_sum;
double _solarhouse1_inverter_bpf_hpf__b_sum;
double _solarhouse1_inverter_bpf_hpf__delay_line_in;
double _solarhouse1_inverter_bpf1_hpf__out;
double _solarhouse1_inverter_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_inverter_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_inverter_bpf1_hpf__a_sum;
double _solarhouse1_inverter_bpf1_hpf__b_sum;
double _solarhouse1_inverter_bpf1_hpf__delay_line_in;


double _solarhouse1_inverter_controller_c_function3__Pref;
double _solarhouse1_inverter_controller_constant2__out = 1.0;
double _solarhouse1_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse1_inverter_controller_constant4__out = 0.0002;
double _solarhouse1_inverter_controller_constant5__out = 0.0;
double _solarhouse1_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse1_inverter_controller_gain23__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse1_inverter_controller_charge__out;
double _solarhouse1_inverter_e_va1__out;
double _solarhouse1_inverter_i_ia1__out;
double _solarhouse1_inverter_power_meas_gain4__out;
double _solarhouse1_inverter_power_meas_gain5__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse1_inverter_vdc_va1__out;
double _solarhouse1_measurement_bpf_hpf__out;
double _solarhouse1_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_measurement_bpf_hpf__a_sum;
double _solarhouse1_measurement_bpf_hpf__b_sum;
double _solarhouse1_measurement_bpf_hpf__delay_line_in;
double _solarhouse1_measurement_bpf1_hpf__out;
double _solarhouse1_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse1_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse1_measurement_bpf1_hpf__a_sum;
double _solarhouse1_measurement_bpf1_hpf__b_sum;
double _solarhouse1_measurement_bpf1_hpf__delay_line_in;
double _solarhouse1_measurement_ia_ia1__out;
double _solarhouse1_measurement_va_va1__out;
double _solarhouse1_modbus_bus_split1__out;
double _solarhouse1_modbus_bus_split1__out1;
double _solarhouse1_modbus_c_u11__out = 1.0;
double _solarhouse1_modbus_c_u12__out = 1.0;
double _solarhouse1_modbus_c_u13__out = 50.0;
double _solarhouse1_modbus_dynamic_table_clock1__out;
double _solarhouse2_inverter_bpf_hpf__out;
double _solarhouse2_inverter_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_inverter_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_inverter_bpf_hpf__a_sum;
double _solarhouse2_inverter_bpf_hpf__b_sum;
double _solarhouse2_inverter_bpf_hpf__delay_line_in;
double _solarhouse2_inverter_bpf1_hpf__out;
double _solarhouse2_inverter_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_inverter_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_inverter_bpf1_hpf__a_sum;
double _solarhouse2_inverter_bpf1_hpf__b_sum;
double _solarhouse2_inverter_bpf1_hpf__delay_line_in;


double _solarhouse2_inverter_controller_c_function3__Pref;
double _solarhouse2_inverter_controller_constant2__out = 1.0;
double _solarhouse2_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse2_inverter_controller_constant4__out = 0.0002;
double _solarhouse2_inverter_controller_constant5__out = 0.0;
double _solarhouse2_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse2_inverter_controller_gain23__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse2_inverter_controller_charge__out;
double _solarhouse2_inverter_e_va1__out;
double _solarhouse2_inverter_i_ia1__out;
double _solarhouse2_inverter_power_meas_gain4__out;
double _solarhouse2_inverter_power_meas_gain5__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse2_inverter_vdc_va1__out;
double _solarhouse2_measurement_bpf_hpf__out;
double _solarhouse2_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_measurement_bpf_hpf__a_sum;
double _solarhouse2_measurement_bpf_hpf__b_sum;
double _solarhouse2_measurement_bpf_hpf__delay_line_in;
double _solarhouse2_measurement_bpf1_hpf__out;
double _solarhouse2_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse2_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse2_measurement_bpf1_hpf__a_sum;
double _solarhouse2_measurement_bpf1_hpf__b_sum;
double _solarhouse2_measurement_bpf1_hpf__delay_line_in;
double _solarhouse2_measurement_ia_ia1__out;
double _solarhouse2_measurement_va_va1__out;
double _solarhouse2_modbus_bus_split1__out;
double _solarhouse2_modbus_bus_split1__out1;
double _solarhouse2_modbus_c_u11__out = 1.0;
double _solarhouse2_modbus_c_u12__out = 1.0;
double _solarhouse2_modbus_c_u13__out = 50.0;
double _solarhouse2_modbus_dynamic_table_clock1__out;
double _solarhouse3_inverter_bpf_hpf__out;
double _solarhouse3_inverter_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_inverter_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_inverter_bpf_hpf__a_sum;
double _solarhouse3_inverter_bpf_hpf__b_sum;
double _solarhouse3_inverter_bpf_hpf__delay_line_in;
double _solarhouse3_inverter_bpf1_hpf__out;
double _solarhouse3_inverter_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_inverter_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_inverter_bpf1_hpf__a_sum;
double _solarhouse3_inverter_bpf1_hpf__b_sum;
double _solarhouse3_inverter_bpf1_hpf__delay_line_in;


double _solarhouse3_inverter_controller_c_function3__Pref;
double _solarhouse3_inverter_controller_constant2__out = 1.0;
double _solarhouse3_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse3_inverter_controller_constant4__out = 0.0002;
double _solarhouse3_inverter_controller_constant5__out = 0.0;
double _solarhouse3_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse3_inverter_controller_gain23__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse3_inverter_controller_charge__out;
double _solarhouse3_inverter_e_va1__out;
double _solarhouse3_inverter_i_ia1__out;
double _solarhouse3_inverter_power_meas_gain4__out;
double _solarhouse3_inverter_power_meas_gain5__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse3_inverter_vdc_va1__out;
double _solarhouse3_measurement_bpf_hpf__out;
double _solarhouse3_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_measurement_bpf_hpf__a_sum;
double _solarhouse3_measurement_bpf_hpf__b_sum;
double _solarhouse3_measurement_bpf_hpf__delay_line_in;
double _solarhouse3_measurement_bpf1_hpf__out;
double _solarhouse3_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse3_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse3_measurement_bpf1_hpf__a_sum;
double _solarhouse3_measurement_bpf1_hpf__b_sum;
double _solarhouse3_measurement_bpf1_hpf__delay_line_in;
double _solarhouse3_measurement_ia_ia1__out;
double _solarhouse3_measurement_va_va1__out;
double _solarhouse3_modbus_bus_split1__out;
double _solarhouse3_modbus_bus_split1__out1;
double _solarhouse3_modbus_c_u11__out = 1.0;
double _solarhouse3_modbus_c_u12__out = 1.0;
double _solarhouse3_modbus_c_u13__out = 50.0;
double _solarhouse3_modbus_dynamic_table_clock1__out;
double _solarhouse4_inverter_bpf_hpf__out;
double _solarhouse4_inverter_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_inverter_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_inverter_bpf_hpf__a_sum;
double _solarhouse4_inverter_bpf_hpf__b_sum;
double _solarhouse4_inverter_bpf_hpf__delay_line_in;
double _solarhouse4_inverter_bpf1_hpf__out;
double _solarhouse4_inverter_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_inverter_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_inverter_bpf1_hpf__a_sum;
double _solarhouse4_inverter_bpf1_hpf__b_sum;
double _solarhouse4_inverter_bpf1_hpf__delay_line_in;


double _solarhouse4_inverter_controller_c_function3__Pref;
double _solarhouse4_inverter_controller_constant2__out = 1.0;
double _solarhouse4_inverter_controller_constant3__out = 3.141592653589793;
double _solarhouse4_inverter_controller_constant4__out = 0.0002;
double _solarhouse4_inverter_controller_constant5__out = 0.0;
double _solarhouse4_inverter_controller_constant6__out = 376.99111843077515;
double _solarhouse4_inverter_controller_gain23__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out = 0.1;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out = 1.0;
X_Int32 _solarhouse4_inverter_controller_charge__out;
double _solarhouse4_inverter_e_va1__out;
double _solarhouse4_inverter_i_ia1__out;
double _solarhouse4_inverter_power_meas_gain4__out;
double _solarhouse4_inverter_power_meas_gain5__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q;


double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf;
double _solarhouse4_inverter_vdc_va1__out;
double _solarhouse4_measurement_bpf_hpf__out;
double _solarhouse4_measurement_bpf_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_measurement_bpf_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_measurement_bpf_hpf__a_sum;
double _solarhouse4_measurement_bpf_hpf__b_sum;
double _solarhouse4_measurement_bpf_hpf__delay_line_in;
double _solarhouse4_measurement_bpf1_hpf__out;
double _solarhouse4_measurement_bpf1_hpf__b_coeff[2] = {0.9814991763877352, -0.9814991763877352};
double _solarhouse4_measurement_bpf1_hpf__a_coeff[2] = {1.0, -0.9629983527754703};
double _solarhouse4_measurement_bpf1_hpf__a_sum;
double _solarhouse4_measurement_bpf1_hpf__b_sum;
double _solarhouse4_measurement_bpf1_hpf__delay_line_in;
double _solarhouse4_measurement_ia_ia1__out;
double _solarhouse4_measurement_va_va1__out;
double _solarhouse4_modbus_bus_split1__out;
double _solarhouse4_modbus_bus_split1__out1;
double _solarhouse4_modbus_c_u11__out = 1.0;
double _solarhouse4_modbus_c_u12__out = 1.0;
double _solarhouse4_modbus_c_u13__out = 50.0;
double _solarhouse4_modbus_dynamic_table_clock1__out;
double _ess_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 25.0, 25.0, -17.0, -75.0, -173.0, -286.0, -399.0, -524.0, -654.0, -784.0, -914.0, -1044.0, -1174.0, -1304.0, -1397.0, -1477.0, -1556.0, -1607.0, -1647.0, -1687.0, -1727.0, -1737.0, -1737.0, -1736.0, -1698.0, -1645.0, -1592.0, -1540.0, -1487.0, -1434.0, -1381.0, -1308.0, -1228.0, -1147.0, -1066.0, -1044.0, -995.0, -929.0, -863.0, -796.0, -745.0, -699.0, -644.0, -586.0, -540.0, -500.0, -459.0, -418.0, -377.0, -314.0, -244.0, -173.0, -102.0, -32.0, 38.0, 108.0, 179.0, 263.0, 353.0, 443.0, 533.0, 626.0, 721.0, 816.0, 910.0, 974.0, 1026.0, 1078.0, 1129.0, 1171.0, 1208.0, 1246.0, 1283.0, 1320.0, 1380.0, 1449.0, 1517.0, 1586.0, 1684.0, 1793.0, 1902.0, 1980.0, 2062.0, 2176.0, 2288.0, 2399.0, 2509.0, 2642.0, 2784.0, 2925.0, 3067.0, 3209.0, 3312.0, 3401.0, 3490.0, 3563.0, 3630.0, 3697.0, 3764.0, 3831.0, 3898.0, 3965.0, 3983.0, 3982.0, 3981.0, 3981.0, 3980.0, 3979.0, 3979.0, 3978.0, 3977.0, 3977.0, 3976.0, 3975.0, 3975.0, 3974.0, 3973.0, 3973.0, 3944.0, 3904.0, 3865.0, 3805.0, 3737.0, 3670.0, 3602.0, 3535.0, 3467.0, 3399.0, 3332.0, 3264.0, 3197.0, 3131.0, 3064.0, 2998.0, 2931.0, 2865.0, 2798.0, 2732.0, 2666.0, 2599.0, 2533.0, 2465.0, 2396.0, 2328.0, 2260.0, 2191.0, 2123.0, 2076.0, 2038.0, 2001.0, 1963.0, 1925.0, 1887.0, 1864.0, 1846.0, 1829.0, 1812.0, 1794.0, 1777.0, 1760.0, 1742.0, 1742.0, 1749.0, 1756.0, 1763.0, 1770.0, 1777.0, 1784.0, 1786.0, 1787.0, 1787.0, 1787.0, 1787.0, 1788.0, 1788.0, 1788.0, 1789.0, 1816.0, 1854.0, 1891.0, 1928.0, 1977.0, 2029.0, 2081.0, 2133.0, 2186.0, 2213.0, 2232.0, 2250.0, 2269.0, 2288.0, 2306.0, 2325.0, 2343.0, 2362.0, 2363.0, 2358.0, 2353.0, 2322.0, 2282.0, 2242.0, 2184.0, 2119.0, 2054.0, 1989.0, 1924.0, 1859.0, 1794.0, 1729.0, 1688.0, 1655.0, 1621.0, 1598.0, 1577.0, 1557.0, 1537.0, 1511.0, 1484.0, 1456.0, 1429.0, 1427.0, 1434.0, 1489.0, 1563.0, 1637.0, 1728.0, 1827.0, 1925.0, 2024.0, 2122.0, 2220.0, 2319.0, 2417.0, 2514.0, 2610.0, 2706.0, 2802.0, 2899.0, 2995.0, 3091.0, 3161.0, 3221.0, 3281.0, 3341.0, 3401.0, 3461.0, 3521.0, 3581.0, 3641.0, 3670.0, 3688.0, 3706.0, 3685.0, 3650.0, 3615.0, 3555.0, 3487.0, 3419.0, 3350.0, 3254.0, 3147.0, 3040.0, 2932.0, 2816.0, 2697.0, 2578.0, 2458.0, 2339.0, 2220.0, 2124.0, 2037.0, 1950.0, 1899.0, 1863.0, 1858.0, 1867.0, 1964.0, 2094.0, 2224.0, 2260.0, 2380.0, 2546.0, 2735.0, 2931.0, 3211.0, 3368.0, 3466.0, 3565.0, 3630.0, 3683.0, 3736.0, 3789.0, 3818.0, 3838.0, 3858.0, 3879.0, 3899.0, 3919.0, 3939.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3993.0, 3961.0, 3917.0, 3833.0, 3734.0, 3636.0, 3517.0, 3392.0, 3266.0, 3140.0, 3015.0, 2914.0, 2823.0, 2732.0, 2647.0, 2565.0, 2484.0, 2402.0, 2307.0, 2208.0, 2109.0, 2041.0, 1985.0, 1929.0, 1886.0, 1848.0, 1810.0, 1772.0, 1705.0, 1627.0, 1550.0, 1433.0, 1301.0, 1169.0, 1024.0, 682.0, 341.0, 0.0, 0.0, -162.0, -324.0, -487.0, -649.0, -649.0, -829.0, -1010.0, -1176.0, -1336.0, -1496.0, -1657.0, -1817.0, -1952.0, -2076.0, -2200.0, -2324.0, -2444.0, -2561.0, -2678.0, -2800.0, -2924.0, -3049.0, -3173.0, -3263.0, -3339.0, -3415.0, -3461.0, -3496.0, -3471.0, -3422.0, -3353.0, -3274.0, -3196.0, -3118.0, -3040.0, -2961.0, -2883.0, -2805.0, -2726.0, -2648.0, -2596.0, -2554.0, -2512.0, -2470.0, -2428.0, -2386.0, -2356.0, -2331.0, -2306.0, -2322.0, -2353.0, -2419.0, -2497.0, -2601.0, -2715.0, -2829.0, -2944.0, -3058.0, -3172.0, -3286.0, -3383.0, -3472.0, -3562.0, -3651.0, -3741.0, -3819.0, -3893.0, -3966.0, -3987.0, -3987.0, -3986.0, -3986.0, -3985.0, -3985.0, -3984.0, -3984.0, -3984.0, -3983.0, -3983.0, -3982.0, -3982.0, -3981.0, -3981.0, -3980.0, -3980.0, -3979.0, -3979.0, -3978.0, -3978.0, -3977.0, -3977.0, -3976.0, -3976.0, -3975.0, -3975.0, -3974.0, -3974.0, -3973.0, -3973.0, -3972.0, -3972.0, -3971.0, -3971.0, -3971.0, -3970.0, -3970.0, -3969.0, -3969.0, -3968.0, -3968.0, -3967.0, -3943.0, -3909.0, -3876.0, -3842.0, -3809.0, -3775.0, -3742.0, -3708.0, -3689.0, -3675.0, -3661.0, -3647.0, -3633.0, -3619.0, -3605.0, -3602.0, -3603.0, -3604.0, -3605.0, -3573.0, -3528.0, -3482.0, -3436.0, -3353.0, -3255.0, -3156.0, -3058.0, -2996.0, -2948.0, -2900.0, -2860.0, -2823.0, -2786.0, -2749.0, -2712.0, -2675.0, -2638.0, -2593.0, -2546.0, -2526.0, -2518.0, -2509.0, -2541.0, -2589.0, -2666.0, -2755.0, -2867.0, -2987.0, -3108.0, -3229.0, -3349.0, -3464.0, -3577.0, -3690.0, -3802.0, -3915.0, -3985.0, -3999.0, -3999.0, -3999.0, -3998.0, -3998.0, -3998.0, -3997.0, -3997.0, -3997.0, -3996.0, -3996.0, -3996.0, -3920.0, -3814.0, -3531.0, -3293.0, -3103.0, -2913.0, -2722.0, -2532.0, -2342.0, -2151.0, -1961.0, -1797.0, -1643.0, -1489.0, -1372.0, -1270.0, -1202.0, -1147.0, -1134.0, -1138.0, -1177.0, -1230.0, -1283.0, -1366.0, -1462.0, -1558.0, -1654.0, -1743.0, -1829.0, -1915.0, -2001.0, -2068.0, -2128.0, -2188.0, -2248.0, -2308.0, -2367.0, -2406.0, -2437.0, -2468.0, -2498.0, -2529.0, -2560.0, -2590.0, -2589.0, -2574.0, -2559.0, -2519.0, -2469.0, -2419.0, -2368.0, -2318.0, -2268.0, -2226.0, -2188.0, -2149.0, -2111.0, -2073.0, -2034.0, -2037.0, -2056.0, -2074.0, -2093.0, -2117.0, -2142.0, -2168.0, -2193.0, -2219.0, -2277.0, -2296.0, -2427.0, -2561.0, -2676.0, -2791.0, -2906.0, -3057.0, -3223.0, -3388.0, -3554.0, -3720.0, -3885.0, -3981.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -3999.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -4000.0, -3973.0, -3901.0, -3766.0, -3731.0, -3435.0, -3171.0, -2944.0, -2681.0, -2408.0, -2097.0, -1776.0, -1434.0, -1087.0, -739.0, -392.0, -44.0, 302.0, 650.0, 997.0, 1312.0, 1616.0, 1685.0, 2091.0, 2393.0, 2625.0, 2939.0, 3133.0, 3282.0, 3398.0, 3503.0, 3473.0, 3555.0, 3618.0, 3661.0, 3705.0, 3748.0, 3792.0, 3835.0, 3858.0, 3873.0, 3889.0, 3905.0, 3921.0, 3937.0, 3953.0, 3959.0, 3962.0, 3925.0, 3875.0, 3797.0, 3710.0, 3624.0, 3537.0, 3451.0, 3431.0, 3261.0, 3100.0, 2956.0, 2813.0, 2669.0, 2526.0, 2382.0, 2239.0, 2095.0, 1952.0, 1830.0, 1714.0, 1599.0, 1523.0, 1459.0, 1395.0, 1330.0, 1266.0, 1202.0, 1104.0, 997.0, 889.0, 782.0, 661.0, 537.0, 413.0, 385.0, 197.0, 48.0, -70.0, -189.0, -308.0, -336.0, -481.0, -573.0, -636.0, -699.0, -762.0, -803.0, -837.0, -871.0, -905.0, -940.0, -961.0, -979.0, -997.0, -1015.0, -1033.0, -1050.0, -1032.0, -1001.0, -971.0, -896.0, -808.0, -720.0, -596.0, -562.0, -308.0, -86.0, -368.0, -390.0, -367.0, -345.0, -323.0, -300.0, -278.0, -256.0, -244.0, -270.0, -295.0, -321.0, -346.0, -372.0, -398.0, -421.0, -436.0, -452.0, -455.0, -418.0, -380.0, -343.0, -306.0, -268.0, -238.0, -233.0, -238.0, -278.0, -317.0, -356.0, -391.0, -407.0, -424.0, -445.0, -478.0, -511.0, -544.0, -577.0, -605.0, -613.0, -622.0, -630.0, -630.0, -600.0, -563.0, -497.0, -431.0, -365.0, -300.0, -237.0, -173.0, -110.0, -46.0, 16.0, 80.0, 133.0, 150.0, 166.0, 175.0, 157.0, 138.0, 120.0, 92.0, 31.0, -30.0, -90.0, -145.0, -199.0, -254.0, -308.0, -362.0, -417.0, -471.0, -517.0, -530.0, -543.0, -556.0, -570.0, -578.0, -568.0, -558.0, -548.0, -538.0, -528.0, -518.0, -508.0, -498.0, -489.0, -479.0, -478.0, -512.0, -545.0, -578.0, -617.0, -674.0, -731.0, -788.0, -846.0, -903.0, -960.0, -1017.0, -1074.0, -1145.0, -1236.0, -1252.0, -1326.0, -1407.0, -1488.0, -1570.0, -1651.0, -1732.0, -1813.0, -1894.0, -1966.0, -2007.0, -2048.0, -2075.0, -2055.0, -2023.0, -1946.0, -1854.0, -1709.0, -1548.0, -1331.0, -1115.0, -898.0, -674.0, -426.0, -178.0, 80.0, 375.0, 670.0, 1032.0, 1502.0, 1565.0, 1844.0, 2124.0, 2388.0, 2587.0, 2719.0, 2785.0, 2851.0, 2918.0, 2971.0, 2977.0, 2983.0, 2978.0, 2933.0, 2877.0, 2780.0, 2683.0, 2585.0, 2488.0, 2391.0, 2294.0, 2196.0, 2099.0, 2002.0, 1911.0, 1844.0, 1776.0, 1709.0, 1641.0, 1587.0, 1582.0, 1576.0, 1579.0, 1612.0, 1657.0, 1745.0, 1832.0, 1920.0, 2008.0, 2096.0, 2184.0, 2272.0, 2361.0, 2449.0, 2537.0, 2625.0, 2714.0, 2802.0, 2890.0, 2979.0, 3062.0, 3129.0, 3196.0, 3251.0, 3265.0, 3271.0, 3245.0, 3220.0, 3180.0, 3110.0, 3096.0, 3036.0, 2961.0, 2833.0, 2705.0, 2577.0, 2448.0, 2320.0, 2192.0, 2058.0, 1906.0, 1753.0, 1600.0, 1451.0, 1316.0, 1182.0, 1047.0, 919.0, 812.0, 705.0, 598.0, 491.0, 384.0, 277.0, 179.0, 112.0, 45.0, -8.0, -17.0, -27.0, -25.0, 11.0, 58.0, 139.0, 219.0, 310.0, 438.0, 565.0, 692.0, 817.0, 930.0, 1044.0, 1146.0, 1206.0, 1266.0, 1313.0, 1315.0, 1316.0, 1317.0, 1319.0, 1320.0, 1321.0, 1323.0, 1324.0, 1326.0, 1327.0, 1328.0, 1330.0, 1327.0, 1310.0, 1282.0, 1220.0, 1158.0, 1095.0, 1023.0, 889.0, 782.0, 661.0, 537.0, 413.0, 385.0, 197.0, 48.0, -70.0, -189.0, -308.0, -336.0, -481.0, -573.0, -636.0, -699.0, -762.0, -803.0, -837.0, -871.0, -905.0, -940.0, -961.0, -979.0, -997.0, -1015.0, -1033.0, -1050.0, -1032.0, -1001.0, -971.0, -896.0, -808.0, -720.0, -596.0, -562.0, -308.0, -86.0, 98.0, 283.0, 468.0, 653.0, 838.0, 1023.0, 1208.0, 1380.0, 1547.0, 1715.0, 1882.0, 2020.0, 2150.0, 2279.0, 2378.0, 2467.0, 2556.0, 2645.0, 2700.0, 2744.0, 2789.0, 2831.0, 2873.0, 2915.0, 2957.0, 3020.0, 3090.0, 3107.0, 3209.0, 3275.0, 3320.0, 3365.0, 3410.0, 3405.0, 3383.0, 3327.0, 3259.0, 3167.0, 3067.0, 2967.0, 2902.0, 2850.0, 2839.0, 2841.0, 2844.0, 2891.0, 2953.0, 3015.0, 3077.0, 3161.0, 3252.0, 3343.0, 3433.0, 3524.0, 3615.0 };
double _ess_dynamic_table1_1d_look_up_table1__value;
double _ess_dynamic_table1_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _ess_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _ess_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _ess_dynamic_table1_1d_look_up_table1__curAddr;
double _ess_dynamic_table1_1d_look_up_table1__fraction;

double _ess_inverter_bpf_gain__out;
double _ess_inverter_bpf1_gain__out;
double _ess_inverter_controller_c_function4__Ts;
double _ess_inverter_controller_c_function4__in;
double _ess_inverter_controller_c_function4__pi;


double _ess_inverter_controller_c_function4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _ess_inverter_controller_c_function1__charge;
double _ess_inverter_controller_c_function1__ref;


double _ess_inverter_controller_c_function1__out;
double _ess_inverter_bpf_lpf__out;
double _ess_inverter_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _ess_inverter_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _ess_inverter_bpf_lpf__a_sum;
double _ess_inverter_bpf_lpf__b_sum;
double _ess_inverter_bpf_lpf__delay_line_in;
double _ess_inverter_bpf1_lpf__out;
double _ess_inverter_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _ess_inverter_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _ess_inverter_bpf1_lpf__a_sum;
double _ess_inverter_bpf1_lpf__b_sum;
double _ess_inverter_bpf1_lpf__delay_line_in;
double _ess_inverter_power_meas_gain6__out;
double _ess_inverter_lpf_dc__out;
double _ess_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_lpf_dc__a_sum;
double _ess_inverter_lpf_dc__b_sum;
double _ess_inverter_lpf_dc__delay_line_in;
double _ess_sum1__out;
double _ess_modbus_modbus_device__config__comp_coil_in_out__out;
double _ess_modbus_modbus_device__config__comp_holding_in_out__out[2];
double _ess_modbus_bus_join1__out[2];
double _ess_inverter_controller_gain32__out;
double _ess_c_function3__RegD;


double _ess_c_function3__reg;
double _ess_c_function3__time;
double _grid_vs_limit1__out;
double _grid_vs_limit2__out;
double _measurement_bpf_gain__out;
double _measurement_bpf1_gain__out;
double _measurement_bpf_lpf__out;
double _measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _measurement_bpf_lpf__a_sum;
double _measurement_bpf_lpf__b_sum;
double _measurement_bpf_lpf__delay_line_in;
double _measurement_bpf1_lpf__out;
double _measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _measurement_bpf1_lpf__a_sum;
double _measurement_bpf1_lpf__b_sum;
double _measurement_bpf1_lpf__delay_line_in;
double _solarhouse1_inverter_bpf_gain__out;
double _solarhouse1_inverter_bpf1_gain__out;
double _solarhouse1_inverter_controller_c_function4__Ts;
double _solarhouse1_inverter_controller_c_function4__in;
double _solarhouse1_inverter_controller_c_function4__pi;


double _solarhouse1_inverter_controller_c_function4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse1_inverter_controller_c_function1__charge;
double _solarhouse1_inverter_controller_c_function1__ref;


double _solarhouse1_inverter_controller_c_function1__out;
double _solarhouse1_inverter_bpf_lpf__out;
double _solarhouse1_inverter_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_inverter_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_inverter_bpf_lpf__a_sum;
double _solarhouse1_inverter_bpf_lpf__b_sum;
double _solarhouse1_inverter_bpf_lpf__delay_line_in;
double _solarhouse1_inverter_bpf1_lpf__out;
double _solarhouse1_inverter_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_inverter_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_inverter_bpf1_lpf__a_sum;
double _solarhouse1_inverter_bpf1_lpf__b_sum;
double _solarhouse1_inverter_bpf1_lpf__delay_line_in;
double _solarhouse1_inverter_power_meas_gain6__out;
double _solarhouse1_inverter_lpf_dc__out;
double _solarhouse1_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_lpf_dc__a_sum;
double _solarhouse1_inverter_lpf_dc__b_sum;
double _solarhouse1_inverter_lpf_dc__delay_line_in;
double _solarhouse1_measurement_bpf_gain__out;
double _solarhouse1_measurement_bpf1_gain__out;
double _solarhouse1_measurement_bpf_lpf__out;
double _solarhouse1_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_measurement_bpf_lpf__a_sum;
double _solarhouse1_measurement_bpf_lpf__b_sum;
double _solarhouse1_measurement_bpf_lpf__delay_line_in;
double _solarhouse1_measurement_bpf1_lpf__out;
double _solarhouse1_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse1_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse1_measurement_bpf1_lpf__a_sum;
double _solarhouse1_measurement_bpf1_lpf__b_sum;
double _solarhouse1_measurement_bpf1_lpf__delay_line_in;
double _solarhouse1_sum1__out;
double _solarhouse1_modbus_modbus_device1__config1__comp_coil_in_out__out;
double _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[2];
double _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_table[1211] = { 6235.877575959929, 6235.877575959929, 6239.195840882765, 6232.566381941354, 6219.300925299671, 6109.9413368856685, 5864.8840112554335, 5811.933879925354, 5901.294097243253, 5897.980628589916, 6060.246580294778, 6192.786063716469, 6215.989936530523, 6176.191045559711, 6186.136682123104, 6215.9688475625035, 6225.908966704829, 6239.174750087261, 6235.856485423443, 6222.597895754777, 6232.538261572044, 6229.227108658306, 6232.538261572044, 6235.856485423443, 6229.227108658306, 6242.486025092966, 6232.538261572044, 6235.856485423443, 6239.174750087261, 6235.856485423443, 6232.538261572044, 6245.804370936686, 6235.856485423443, 6239.174750087261, 6245.804370936686, 6235.856485423443, 6235.856485423443, 6245.804370936686, 6235.856485423443, 6222.597895754777, 6239.174750087261, 6255.745589439051, 6239.174750087261, 6255.745589439051, 6249.11572671189, 6252.434153258014, 6242.486025092966, 6239.174750087261, 6229.227108658306, 6239.174750087261, 6222.597895754777, 6215.9688475625035, 6232.538261572044, 6232.538261572044, 6239.174750087261, 6242.486025092966, 6232.538261572044, 6229.227108658306, 6239.174750087261, 6252.434153258014, 6225.908966704829, 6219.279836068613, 6222.597895754777, 6225.908966704829, 6219.279836068613, 6212.650870846148, 6209.339965263032, 6215.9688475625035, 6215.9688475625035, 6212.650870846148, 6192.764976613422, 6242.486025092966, 6199.393440153968, 6215.9688475625035, 6196.082701861083, 6202.711249707748, 6229.227108658306, 6209.339965263032, 6209.339965263032, 6206.022071886672, 6199.393440153968, 6219.258746839228, 6206.000983715175, 6212.629782144175, 6222.5768062625475, 6215.947758596165, 6202.690161802355, 6202.690161802355, 6199.372352516017, 6199.372352516017, 6212.629782144175, 6209.318876825632, 6229.206018643248, 6225.887876951081, 6239.153659293398, 6222.5768062625475, 6232.524201388487, 6229.206018643248, 6222.5768062625475, 6232.524201388487, 6219.258746839228, 6229.206018643248, 6232.524201388487, 6202.690161802355, 6206.000983715175, 6196.061614490769, 6182.80502676262, 6206.000983715175, 6189.433235746853, 6215.947758596165, 6219.258746839228, 6199.372352516017, 6206.000983715175, 6229.206018643248, 6222.5768062625475, 6212.629782144175, 6202.690161802355, 6212.629782144175, 6215.947758596165, 6219.258746839228, 6212.629782144175, 6199.372352516017, 6206.000983715175, 6202.690161802355, 6199.372352516017, 6202.690161802355, 6215.947758596165, 6215.947758596165, 6222.5768062625475, 6209.318876825632, 6202.690161802355, 6189.433235746853, 6182.80502676262, 6172.8595192517905, 6176.169959813711, 6162.914399188147, 6172.8595192517905, 6172.8595192517905, 6169.542093218628, 6182.80502676262, 6189.433235746853, 6202.690161802355, 6206.000983715175, 6206.000983715175, 6212.629782144175, 6209.318876825632, 6212.629782144175, 6206.000983715175, 6212.629782144175, 6205.986924935115, 6192.729831445482, 6196.040527122162, 6179.473414509918, 6186.101537854682, 6182.7839404734395, 6192.729831445482, 6192.729831445482, 6196.040527122162, 6199.358294091658, 6186.101537854682, 6212.61572301046, 6196.040527122162, 6212.61572301046, 6196.040527122162, 6196.040527122162, 6169.528036420553, 6156.272822526702, 6152.955613882688, 6146.328356006349, 6143.018306833155, 6156.272822526702, 6136.391313220035, 6149.645476929414, 6146.328356006349, 6149.645476929414, 6146.328356006349, 6149.645476929414, 6149.645476929414, 6139.701274122314, 6152.955613882688, 6139.701274122314, 6136.391313220035, 6146.328356006349, 6152.955613882688, 6162.9003427571, 6172.845462270786, 6192.729831445482, 6189.412148916421, 6192.729831445482, 6196.040527122162, 6196.040527122162, 6202.66907389866, 6189.412148916421, 6186.101537854682, 6189.412148916421, 6179.473414509918, 6196.040527122162, 6186.101537854682, 6176.1559026506775, 6182.7839404734395, 6169.528036420553, 6166.217682110646, 6166.217682110646, 6176.1559026506775, 6166.217682110646, 6189.412148916421, 6172.845462270786, 6176.1559026506775, 6182.7839404734395, 6192.729831445482, 6182.7839404734395, 6192.729831445482, 6179.473414509918, 6182.7839404734395, 6192.729831445482, 6192.729831445482, 6205.986924935115, 6196.026468877374, 6199.344235668058, 6192.7157733796375, 6205.972866155809, 6202.655015297139, 6192.7157733796375, 6192.7157733796375, 6189.398091030419, 6199.344235668058, 6192.7157733796375, 6202.655015297139, 6205.972866155809, 6199.344235668058, 6205.972866155809, 6186.08748014865, 6186.08748014865, 6182.769882948278, 6176.141845488418, 6176.141845488418, 6176.141845488418, 6196.026468877374, 6209.283729433717, 6199.344235668058, 6212.601663877494, 6205.972866155809, 6222.548686942168, 6215.912610322655, 6225.8597572820045, 6212.601663877494, 6215.912610322655, 6212.601663877494, 6202.655015297139, 6222.548686942168, 6199.344235668058, 6209.283729433717, 6212.601663877494, 6222.548686942168, 6235.807274178051, 6235.807274178051, 6242.436812641836, 6219.230627869315, 6196.026468877374, 6205.972866155809, 6186.08748014865, 6196.026468877374, 6176.141845488418, 6166.1965971895825, 6149.631421239436, 6152.941558007059, 6146.31430050294, 6143.0042515164405, 6159.568990635527, 6176.141845488418, 6166.1965971895825, 6176.141845488418, 6186.08748014865, 6192.7157733796375, 6189.398091030419, 6199.344235668058, 6182.769882948278, 6176.141845488418, 6176.141845488418, 6172.824376800728, 6166.1965971895825, 6166.1965971895825, 6166.1965971895825, 6159.568990635527, 6156.258766465543, 6166.189568882952, 6176.127788326925, 6202.640956696373, 6189.384033145181, 6219.216568385473, 6219.216568385473, 6222.534627283091, 6225.845697448572, 6222.534627283091, 6225.845697448572, 6222.534627283091, 6219.216568385473, 6222.534627283091, 6225.845697448572, 6222.534627283091, 6232.474990751844, 6239.1044474474475, 6249.05245202094, 6242.4227519431515, 6259.000819225779, 6255.682313216035, 6245.7340665794445, 6262.3123343547095, 6252.363847193448, 6252.363847193448, 6245.7340665794445, 6265.630920119423, 6255.682313216035, 6259.000819225779, 6259.000819225779, 6255.682313216035, 6265.630920119423, 6285.522170791168, 6255.682313216035, 6285.522170791168, 6285.522170791168, 6302.09576938168, 6288.834000594202, 6282.203348605587, 6295.4648077960865, 6298.78378523599, 6272.261179642365, 6288.834000594202, 6275.572852996284, 6278.891596847973, 6282.203348605587, 6282.203348605587, 6268.9425145974255, 6268.9425145974255, 6268.9425145974255, 6292.152900642946, 6302.09576938168, 6305.414823742613, 6312.046015225396, 6312.046015225396, 6331.940498298148, 6331.940498298148, 6305.414823742613, 6312.046015225396, 6325.308853492605, 6302.09576938168, 6312.046015225396, 6331.940498298148, 6315.365184129161, 6325.308853492605, 6328.6281734304175, 6328.6281734304175, 6328.6281734304175, 6321.982538840184, 6318.663294232884, 6295.45777610524, 6298.76972169083, 6298.76972169083, 6285.50810790287, 6292.138837425218, 6268.928452541623, 6285.50810790287, 6308.7198523960315, 6282.196317244168, 6298.76972169083, 6265.61685823141, 6272.247117418921, 6258.98675767521, 6275.565821801079, 6295.45777610524, 6272.247117418921, 6302.088737527615, 6295.45777610524, 6288.826969067571, 6295.45777610524, 6282.196317244168, 6252.356816587984, 6258.98675767521, 6262.298272635346, 6255.668251835122, 6282.196317244168, 6278.877534291099, 6285.50810790287, 6305.400759872009, 6335.245827742387, 6341.877695829065, 6338.565259613115, 6358.46152759418, 6358.46152759418, 6391.624872741101, 6401.585119877903, 6404.8912038318595, 6414.809662610006, 6431.411458729798, 6444.7075775309395, 6441.401084836087, 6444.7075775309395, 6461.310891853364, 6467.92430638489, 6474.537850646918, 6491.142634139058, 6511.055353620987, 6507.748215732684, 6451.320662561364, 6235.779153470426, 5878.0307559417115, 5778.760611451165, 5878.0307559417115, 5815.154688919261, 5339.3560018714925, 5131.671486306303, 5448.263744661252, 5745.684405546302, 6040.274689997604, 6159.547906268326, 5864.792766178853, 5418.550976584816, 4737.103234832049, 4193.976795284722, 4177.679801143931, 4229.85414090954, 4229.847222434175, 5032.8893078188285, 5620.0295306520975, 5983.965274324653, 6368.399604142981, 6511.055353620987, 6530.969197109819, 6527.661874219171, 6537.58393380947, 6540.891347401233, 6527.661874219171, 6524.28421418695, 6507.748215732684, 6484.5287680613155, 6464.617582847459, 6451.320662561364, 6434.717850404521, 6428.105100715857, 6414.809662610006, 6401.585119877903, 6408.197322346969, 6398.2790705976295, 6404.8912038318595, 6398.2790705976295, 6404.8912038318595, 6398.2790705976295, 6418.186229757971, 6421.492486117931, 6414.809662610006, 6398.2790705976295, 6394.902715748813, 6381.66494330567, 6368.399604142981, 6358.45449439279, 6348.502678800091, 6355.134841626164, 6338.55119414536, 6338.55119414536, 6341.87066301667, 6325.287756240318, 6321.975506502592, 6312.02491893457, 6308.712820379915, 6295.443712724069, 6302.081705673722, 6321.975506502592, 6312.02491893457, 6312.02491893457, 6318.656261975377, 6312.02491893457, 6318.656261975377, 6305.393727936967, 6312.02491893457, 6305.393727936967, 6305.393727936967, 6308.712820379915, 6292.131805816615, 6288.812906014829, 6308.712820379915, 6308.712820379915, 6321.975506502592, 6318.656261975377, 6321.975506502592, 6331.919400569586, 6315.344087596602, 6308.712820379915, 6302.081705673722, 6292.131805816615, 6275.544728216526, 6288.80587448872, 6268.914390486533, 6265.602796344109, 6252.335724772674, 6232.446870392087, 6229.135718605029, 6222.506507967159, 6232.446870392087, 6215.877462053807, 6205.930689822405, 6199.302060401796, 6186.045307035151, 6152.906418321425, 6139.645053610672, 6129.708278822889, 6119.76487818604, 6129.708278822889, 6139.645053610672, 6152.906418321425, 6172.789234354501, 6189.355917376994, 6205.930689822405, 6225.8175777839315, 6232.446870392087, 6249.02432994078, 6249.02432994078, 6232.446870392087, 6225.8175777839315, 6225.8175777839315, 6212.559486483084, 6195.99132326872, 6189.355917376994, 6176.099674006258, 6159.533850024505, 6146.27916174788, 6152.906418321425, 6149.5892541742405, 6166.16145565837, 6186.045307035151, 6199.302060401796, 6219.188449420023, 6225.8175777839315, 6245.705944841631, 6229.135718605029, 6219.188449420023, 6215.877462053807, 6202.612839497103, 6189.355917376994, 6186.045307035151, 6186.045307035151, 6182.727710377398, 6199.302060401796, 6199.302060401796, 6205.930689822405, 6212.559486483084, 6222.506507967159, 6235.765093117716, 6245.705944841631, 6245.705944841631, 6258.972696125356, 6268.914390486533, 6285.4940450152735, 6305.386696002096, 6302.067641966455, 6312.017886837967, 6318.6492297180375, 6318.6492297180375, 6328.5930109461815, 6325.273691406309, 6328.5930109461815, 6315.330023242414, 6318.642197460868, 6308.691724332592, 6302.0606101130825, 6292.117742599931, 6282.168191800258, 6282.168191800258, 6292.117742599931, 6298.748626374389, 6295.429649343588, 6288.798842962786, 6295.429649343588, 6288.798842962786, 6282.168191800258, 6268.907359459254, 6245.6989144076315, 6229.128688602224, 6215.870432400599, 6199.295031191415, 6212.552456918003, 6205.923660434162, 6205.923660434162, 6229.128688602224, 6252.328694167934, 6265.595765400729, 6278.856440457114, 6298.748626374389, 6302.0606101130825, 6315.330023242414, 6305.379664067397, 6298.748626374389, 6305.379664067397, 6288.798842962786, 6312.010854741538, 6321.9614418279125, 6321.9614418279125, 6338.537128678271, 6341.856597392375, 6348.4886128632, 6325.273691406309, 6325.273691406309, 6315.330023242414, 6312.010854741538, 6315.330023242414, 6315.330023242414, 6315.330023242414, 6312.010854741538, 6328.5930109461815, 6348.4886128632, 6378.338004366872, 6371.705334898602, 6355.120775378626, 6371.705334898602, 6375.018134935405, 6381.650875835114, 6368.385537280034, 6375.018134935405, 6388.28375917745, 6371.705334898602, 6348.4886128632, 6381.650875835114, 6371.705334898602, 6375.018134935405, 6384.970816734478, 6371.705334898602, 6371.69830139097, 6375.011101351784, 6375.011101351784, 6375.011101351784, 6371.69830139097, 6371.69830139097, 6378.330970707341, 6365.06577577857, 6365.06577577857, 6368.378503848802, 6371.69830139097, 6361.746050509677, 6358.433394789606, 6355.113742255101, 6355.113742255101, 6358.433394789606, 6365.06577577857, 6361.746050509677, 6361.746050509677, 6361.746050509677, 6361.746050509677, 6338.530095944978, 6368.378503848802, 6351.801159232139, 6375.011101351784, 6375.011101351784, 6381.643842100077, 6394.902715748813, 6408.197322346969, 6414.809662610006, 6424.798776474582, 6418.1158842481545, 6434.717850404521, 6414.809662610006, 6418.1158842481545, 6408.197322346969, 6388.276725291967, 6375.011101351784, 6361.746050509677, 6348.481579895001, 6371.69830139097, 6365.06577577857, 6348.481579895001, 6368.378503848802, 6361.746050509677, 6378.330970707341, 6384.963782924013, 6394.902715748813, 6401.514778042433, 6384.963782924013, 6404.8912038318595, 6401.514778042433, 6384.963782924013, 6365.06577577857, 6351.801159232139, 6331.898302842532, 6321.954409490826, 6312.00382264528, 6278.849409179472, 6262.270149198765, 6252.328694167934, 6262.270149198765, 6258.958634576223, 6249.0102689017895, 6282.161160439718, 6288.791811437028, 6295.422617653609, 6295.422617653609, 6305.3656001985155, 6321.94737715391, 6295.422617653609, 6292.103679383947, 6265.581703514497, 6268.900328432153, 6232.43281021331, 6232.43281021331, 6212.54542735311, 6195.970235905805, 6182.7136528553065, 6189.341859494047, 6192.659541123869, 6182.7136528553065, 6179.396099126551, 6199.288001981222, 6195.970235905805, 6186.0242204809865, 6199.288001981222, 6189.341859494047, 6195.970235905805, 6205.916631046107, 6225.8035179527205, 6255.640129075457, 6242.373539503496, 6242.373539503496, 6242.373539503496, 6262.270149198765, 6245.691883973814, 6282.161160439718, 6255.640129075457, 6292.103679383947, 6298.73456283096, 6302.053578259879, 6295.422617653609, 6318.635165203868, 6335.21066446849, 6325.266658989553, 6315.3159588889075, 6335.21066446849, 6345.162037368516, 6335.21066446849, 6348.474546926966, 6348.474546926966, 6348.474546926966, 6348.474546926966, 6335.21066446849, 6341.842531768748, 6318.635165203868, 6331.898302842532, 6351.7941261862425, 6345.162037368516, 6341.842531768748, 6355.106709131741, 6368.371470417733, 6371.691267883504, 6375.0040677683255, 6365.058742423982, 6381.643842100077, 6368.371470417733, 6355.106709131741, 6371.691267883504, 6398.208729501125, 6414.809662610006, 6408.197322346969, 6421.422139883562, 6408.197322346969, 6414.809662610006, 6408.197322346969, 6401.514778042433, 6418.1158842481545, 6421.422139883562, 6414.809662610006, 6408.197322346969, 6421.422139883562, 6424.728429518048, 6434.717850404521, 6414.809662610006, 6434.717850404521, 6431.411458729798, 6447.9437514777455, 6438.024275628183, 6444.637226276342, 6441.330734289336, 6441.330734289336, 6454.627254559588, 6444.637226276342, 6441.330734289336, 6451.320662561364, 6444.637226276342, 6441.330734289336, 6461.2405370802135, 6464.5472273806945, 6457.933879436212, 6441.330734289336, 6454.627254559588, 6454.627254559588, 6438.024275628183, 6481.151523755383, 6464.5472273806945, 6464.5472273806945, 6461.2405370802135, 6457.933879436212, 6451.320662561364, 6418.1158842481545, 6414.809662610006, 6414.809662610006, 6414.809662610006, 6414.809662610006, 6391.589702938191, 6391.589702938191, 6401.514778042433, 6391.589702938191, 6401.514778042433, 6418.1158842481545, 6411.503475310509, 6408.197322346969, 6401.514778042433, 6401.514778042433, 6384.9567491137095, 6394.902715748813, 6381.636808365197, 6375.0040677683255, 6388.269691406639, 6401.514778042433, 6398.208729501125, 6398.208729501125, 6408.197322346969, 6414.809662610006, 6418.1158842481545, 6421.422139883562, 6418.1158842481545, 6411.503475310509, 6411.503475310509, 6401.514778042433, 6401.514778042433, 6384.9497153035645, 6381.636808365197, 6378.316903388761, 6388.269691406639, 6388.269691406639, 6388.269691406639, 6394.902715748813, 6391.582668978087, 6391.582668978087, 6388.269691406639, 6398.208729501125, 6404.820861259823, 6424.728429518048, 6447.9437514777455, 6447.9437514777455, 6457.933879436212, 6467.853950226867, 6484.458408467813, 6481.151523755383, 6481.151523755383, 6474.537850646918, 6447.9437514777455, 6467.853950226867, 6454.627254559588, 6444.637226276342, 6464.5472273806945, 6461.2405370802135, 6491.0722731936585, 6477.844671150561, 6494.449614720478, 6491.0722731936585, 6514.2921570067065, 6501.0636704191675, 6494.449614720478, 6504.370745317016, 6514.2921570067065, 6481.151523755383, 6497.756626850425, 6494.449614720478, 6501.0636704191675, 6494.449614720478, 6507.6778514343505, 6514.2921570067065, 6514.2921570067065, 6514.2921570067065, 6504.370745317016, 6534.206180809898, 6510.984988661928, 6510.984988661928, 6504.370745317016, 6501.0636704191675, 6497.756626850425, 6491.0722731936585, 6467.853950226867, 6464.5472273806945, 6454.627254559588, 6454.627254559588, 6444.637226276342, 6451.320662561364, 6441.330734289336, 6444.637226276342, 6438.024275628183, 6451.320662561364, 6461.2405370802135, 6457.933879436212, 6461.2405370802135, 6451.320662561364, 6457.933879436212, 6457.933879436212, 6461.2405370802135, 6457.933879436212, 6461.2405370802135, 6464.5472273806945, 6464.5472273806945, 6447.9437514777455, 6467.853950226867, 6477.844671150561, 6474.537850646918, 6474.537850646918, 6474.537850646918, 6487.765324945395, 6491.0722731936585, 6497.756626850425, 6510.984988661928, 6497.756626850425, 6491.0722731936585, 6481.151523755383, 6461.2405370802135, 6451.320662561364, 6474.537850646918, 6467.853950226867, 6457.933879436212, 6461.2405370802135, 6451.320662561364, 6451.320662561364, 6438.024275628183, 6434.717850404521, 6428.034753039538, 6424.728429518048, 6408.197322346969, 6398.208729501125, 6365.051709069555, 6371.684234376197, 6378.316903388761, 6374.997034185025, 6404.820861259823, 6404.820861259823, 6388.2626575214745, 6398.208729501125, 6404.820861259823, 6394.902715748813, 6374.997034185025, 6368.364436986827, 6345.14797158884, 6338.5160304788915, 6321.940344817163, 6338.5160304788915, 6338.5160304788915, 6365.051709069555, 6351.780060094938, 6341.835498957182, 6345.14797158884, 6338.5160304788915, 6325.252594156556, 6315.308926712412, 6318.6211006903795, 6318.6211006903795, 6338.5160304788915, 6355.099676008548, 6371.684234376197, 6394.902715748813, 6388.2626575214745, 6401.514778042433, 6428.034753039538, 6431.411458729798, 6431.411458729798, 6424.728429518048, 6431.411458729798, 6421.422139883562, 6408.126979040764, 6391.575635018137, 6401.514778042433, 6414.809662610006, 6408.126979040764, 6418.1158842481545, 6438.024275628183, 6424.728429518048, 6431.411458729798, 6431.411458729798, 6454.627254559588, 6447.9437514777455, 6444.637226276342, 6444.637226276342, 6447.9437514777455, 6457.933879436212, 6444.637226276342, 6444.637226276342, 6447.9437514777455, 6451.25030989815, 6424.728429518048, 6388.2626575214745, 6365.04467571529, 6321.933312480584, 6282.1470977191675, 6252.307602354795, 6212.531368223882, 6199.273943561405, 6169.443695648403, 6129.6801697022465, 6126.363316031831, 6086.606760595995, 6046.849837884171, 6007.106815956171, 5990.5528161598095, 5934.263196041097, 5868.0565584133055, 5815.1125864927035, 5725.792447709261, 5620.001492908669, 5497.753741292365, 5382.209343656677, 5303.027738250596, 5250.270080098342, 5260.157057486469, 5322.817164956042, 5382.209343656677, 5454.824597553893, 5530.781609273316, 5583.647529168205, 5600.1659705109105, 5620.001492908669, 5610.083436227055, 5580.339835958403, 5557.215896951508, 5524.175477662277, 5487.84325003432, 5471.3365268763155, 5474.634927205863, 5504.358754436777, 5553.908743950114, 5613.391726026851, 5656.3563357131825, 5682.810627671378, 5692.7258864985715, 5676.191418030225, 5669.579471316345, 5679.500991477794, 5676.191418030225, 5672.88891907945, 5689.4160631838795, 5682.803615664063, 5656.3563357131825, 5636.523543390692, 5603.474062712777, 5570.424166637455, 5550.601659210982, 5567.1237496805925, 5580.339835958403, 5596.864952972257, 5616.6930721508, 5616.6930721508, 5606.77521209291, 5580.339835958403, 5547.301649200598, 5484.5445640645585, 5438.314484580621, 5418.508974079665, 5398.706138938416, 5402.009924042587, 5405.306784615485, 5415.2118150033175, 5438.314484580621, 5474.634927205863, 5514.2632991060555, 5543.994701285888, 5553.908743950114, 5567.1237496805925, 5583.647529168205, 5583.647529168205, 5603.474062712777, 5613.384716868872, 5633.214797839468, 5646.436146155734, 5679.500991477794, 5719.1786458722645, 5775.407124293818, 5828.3402174744015, 5861.437783900778, 5904.467214767758, 5924.328388033774, 5947.505654987913, 5973.993041128783, 6000.483662767551, 6000.483662767551, 6026.977453838134, 6026.977453838134, 6030.292909585243, 6040.22551759432, 6020.353712513767, 6036.91694163874, 6030.292909585243, 6046.849837884171, 6063.414984620592, 6073.34901864774, 6093.232396747552, 6096.541770643482, 6089.916042501645, 6103.1676821028495, 6099.8582167158975, 6096.541770643482, 6116.420051317517, 6119.7367702060255, 6119.7367702060255, 6139.616943359631, 6139.616943359631, 6162.80897597432, 6179.38204178662, 6199.26691435178, 6215.842313789624, 6215.842313789624, 6225.789458122248, 6235.729942239141, 6235.729942239141, 6248.989177344656, 6258.937542253869, 6258.937542253869, 6272.197899642445, 6265.567641628983, 6278.828315347599, 6278.828315347599, 6262.249056623206, 6268.8792353519175, 6258.937542253869, 6268.8792353519175, 6258.937542253869, 6255.619037007596, 6252.307602354795, 6242.359478808092, 6239.0482053487485, 6235.729942239141, 6212.524338659549, 6222.4713588264185, 6215.842313789624, 6189.32780161186, 6195.95617766481, 6192.638454031094, 6192.638454031094, 6209.213434663948, 6172.754091913112, 6179.38204178662, 6169.443695648403, 6186.010162779164, 6205.895542883071, 6205.895542883071, 6202.584722300852, 6212.524338659549, 6222.4713588264185, 6225.789458122248, 6209.213434663948, 6209.213434663948, 6229.100568592835, 6222.4713588264185, 6248.989177344656, 6248.989177344656, 6255.619037007596, 6262.249056623206, 6258.937542253869, 6252.307602354795, 6242.359478808092, 6229.100568592835, 6199.26691435178, 6172.754091913112, 6156.181458143208, 6172.754091913112, 6176.071559688681, 6195.95617766481, 6199.26691435178, 6202.584722300852, 6199.26691435178, 6202.584722300852, 6202.584722300852, 6212.524338659549, 6212.524338659549, 6215.842313789624, 6219.153300717397, 6229.100568592835, 6222.4713588264185, 6235.729942239141, 6248.989177344656, 6258.937542253869, 6265.567641628983, 6288.7707168607985, 6302.032482701308, 6305.351536330321, 6315.301894536084, 6335.196599160104, 6321.933312480584, 6348.460480991392, 6371.677200869057, 6378.309869729713, 6404.820861259823, 6418.1158842481545, 6421.422139883562, 6441.330734289336, 6444.637226276342, 6434.717850404521, 6424.728429518048, 6451.25030989815, 6434.717850404521, 6421.422139883562, 6441.330734289336, 6424.728429518048, 6414.809662610006, 6414.809662610006, 6384.942681493581, 6391.575635018137, 6381.622740895924, 6381.622740895924, 6365.037642361188, 6361.724950677056, 6348.460480991392, 6331.877205116991 };
double _solarhouse1_modbus_dynamic_table_1d_look_up_table1__value;
double _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse1_modbus_dynamic_table_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr;
double _solarhouse1_modbus_dynamic_table_1d_look_up_table1__fraction;

double _solarhouse1_inverter_controller_gain32__out;
double _solarhouse2_inverter_bpf_gain__out;
double _solarhouse2_inverter_bpf1_gain__out;
double _solarhouse2_inverter_controller_c_function4__Ts;
double _solarhouse2_inverter_controller_c_function4__in;
double _solarhouse2_inverter_controller_c_function4__pi;


double _solarhouse2_inverter_controller_c_function4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse2_inverter_controller_c_function1__charge;
double _solarhouse2_inverter_controller_c_function1__ref;


double _solarhouse2_inverter_controller_c_function1__out;
double _solarhouse2_inverter_bpf_lpf__out;
double _solarhouse2_inverter_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_inverter_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_inverter_bpf_lpf__a_sum;
double _solarhouse2_inverter_bpf_lpf__b_sum;
double _solarhouse2_inverter_bpf_lpf__delay_line_in;
double _solarhouse2_inverter_bpf1_lpf__out;
double _solarhouse2_inverter_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_inverter_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_inverter_bpf1_lpf__a_sum;
double _solarhouse2_inverter_bpf1_lpf__b_sum;
double _solarhouse2_inverter_bpf1_lpf__delay_line_in;
double _solarhouse2_inverter_power_meas_gain6__out;
double _solarhouse2_inverter_lpf_dc__out;
double _solarhouse2_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_lpf_dc__a_sum;
double _solarhouse2_inverter_lpf_dc__b_sum;
double _solarhouse2_inverter_lpf_dc__delay_line_in;
double _solarhouse2_measurement_bpf_gain__out;
double _solarhouse2_measurement_bpf1_gain__out;
double _solarhouse2_measurement_bpf_lpf__out;
double _solarhouse2_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_measurement_bpf_lpf__a_sum;
double _solarhouse2_measurement_bpf_lpf__b_sum;
double _solarhouse2_measurement_bpf_lpf__delay_line_in;
double _solarhouse2_measurement_bpf1_lpf__out;
double _solarhouse2_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse2_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse2_measurement_bpf1_lpf__a_sum;
double _solarhouse2_measurement_bpf1_lpf__b_sum;
double _solarhouse2_measurement_bpf1_lpf__delay_line_in;
double _solarhouse2_sum1__out;
double _solarhouse2_modbus_modbus_device2__config2__comp_coil_in_out__out;
double _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[2];
double _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_table[1211] = { 4769.045981605385, 4766.909018531038, 4764.772082399541, 4773.314508806396, 4769.045981605385, 4769.045981605385, 4773.314508806396, 4773.314508806396, 4773.314508806396, 4783.994513272023, 4773.314508806396, 4779.725719498625, 4777.588622571555, 4777.588622571555, 4773.314508806396, 4775.4515523232285, 4792.537898062444, 4779.725719498625, 4786.1316899012845, 4771.182971569649, 4781.857363213701, 4792.537898062444, 4779.725719498625, 4781.857363213701, 4786.1316899012845, 4783.994513272023, 4786.1316899012845, 4783.994513272023, 4792.537898062444, 4783.994513272023, 4781.857363213701, 4788.263412907485, 4783.994513272023, 4786.1316899012845, 4794.6751801325045, 4786.1316899012845, 4781.857363213701, 4790.400642303346, 4794.6751801325045, 4781.857363213701, 4792.537898062444, 4790.400642303346, 4790.400642303346, 4788.263412907485, 4792.537898062444, 4783.994513272023, 4794.6751801325045, 4794.6751801325045, 4792.537898062444, 4794.6751801325045, 4792.537898062444, 4790.400642303346, 4788.263412907485, 4792.537898062444, 4792.537898062444, 4790.400642303346, 4792.537898062444, 4783.994513272023, 4794.6751801325045, 4786.1316899012845, 4794.6751801325045, 4788.263412907485, 4790.400642303346, 4792.537898062444, 4788.263412907485, 4790.400642303346, 4790.400642303346, 4790.400642303346, 4786.1316899012845, 4781.857363213701, 4783.994513272023, 4792.537898062444, 4790.400642303346, 4783.994513272023, 4796.807008149721, 4790.400642303346, 4790.400642303346, 4790.400642303346, 4783.994513272023, 4783.994513272023, 4788.263412907485, 4790.400642303346, 4790.400642303346, 4798.9443426171865, 4790.400642303346, 4788.263412907485, 4786.1316899012845, 4792.537898062444, 4792.537898062444, 4792.537898062444, 4781.857363213701, 4783.994513272023, 4790.400642303346, 4792.537898062444, 4790.400642303346, 4790.400642303346, 4781.857363213701, 4779.725719498625, 4792.537898062444, 4792.537898062444, 4788.263412907485, 4790.400642303346, 4801.081703238537, 4798.9443426171865, 4790.400642303346, 4786.1316899012845, 4798.9443426171865, 4788.263412907485, 4790.400642303346, 4792.537898062444, 4792.537898062444, 4771.182971569649, 4769.045981605385, 4779.725719498625, 4786.1316899012845, 4786.1316899012845, 4779.725719498625, 4777.588622571555, 4796.807008149721, 4781.857363213701, 4794.6751801325045, 4794.6751801325045, 4783.994513272023, 4794.6751801325045, 4788.263412907485, 4781.857363213701, 4783.994513272023, 4775.4515523232285, 4779.725719498625, 4773.314508806396, 4777.588622571555, 4764.772082399541, 4775.4515523232285, 4766.909018531038, 4773.314508806396, 4771.182971569649, 4771.182971569649, 4764.772082399541, 4764.772082399541, 4760.503770327372, 4760.503770327372, 4775.4515523232285, 4771.182971569649, 4764.772082399541, 4758.36691527295, 4754.0987655742965, 4749.825245889275, 4751.961992074599, 4758.36691527295, 4769.045981605385, 4754.0987655742965, 4760.503770327372, 4764.772082399541, 4760.503770327372, 4758.36691527295, 4754.0987655742965, 4743.420650343088, 4751.961992074599, 4754.0987655742965, 4764.772082399541, 4756.2355663351345, 4758.36691527295, 4760.503770327372, 4754.0987655742965, 4749.825245889275, 4751.961992074599, 4771.182971569649, 4749.825245889275, 4751.961992074599, 4758.36691527295, 4762.640652483595, 4751.961992074599, 4758.36691527295, 4760.503770327372, 4758.36691527295, 4773.314508806396, 4764.772082399541, 4766.909018531038, 4766.909018531038, 4773.314508806396, 4766.909018531038, 4773.314508806396, 4766.909018531038, 4766.909018531038, 4760.503770327372, 4775.4515523232285, 4781.857363213701, 4777.588622571555, 4783.994513272023, 4786.1316899012845, 4781.857363213701, 4773.314508806396, 4766.909018531038, 4749.825245889275, 4743.420650343088, 4734.879748491107, 4717.799278068897, 4715.668453564936, 4726.339289889522, 4722.071966862066, 4726.339289889522, 4734.879748491107, 4749.825245889275, 4754.0987655742965, 4754.0987655742965, 4760.503770327372, 4749.825245889275, 4751.961992074599, 4758.36691527295, 4762.640652483595, 4775.4515523232285, 4758.36691527295, 4754.0987655742965, 4777.588622571555, 4775.4515523232285, 4786.1316899012845, 4788.263412907485, 4805.351022154951, 4790.400642303346, 4792.537898062444, 4801.081703238537, 4790.400642303346, 4828.847822426128, 4792.537898062444, 4805.351022154951, 4805.351022154951, 4788.263412907485, 4786.1316899012845, 4801.081703238537, 4805.351022154951, 4801.081703238537, 4792.537898062444, 4786.1316899012845, 4786.1316899012845, 4790.400642303346, 4790.400642303346, 4773.314508806396, 4773.314508806396, 4769.045981605385, 4783.994513272023, 4777.588622571555, 4783.994513272023, 4786.1316899012845, 4788.263412907485, 4790.400642303346, 4783.994513272023, 4777.588622571555, 4783.994513272023, 4790.400642303346, 4801.081703238537, 4805.351022154951, 4796.807008149721, 4779.725719498625, 4786.1316899012845, 4813.8954516348995, 4809.625925505826, 4792.537898062444, 4796.807008149721, 4803.213609449375, 4794.6751801325045, 4788.263412907485, 4801.081703238537, 4788.263412907485, 4781.857363213701, 4788.263412907485, 4807.488460857832, 4792.537898062444, 4790.400642303346, 4786.1316899012845, 4796.807008149721, 4796.807008149721, 4788.263412907485, 4786.1316899012845, 4777.588622571555, 4771.182971569649, 4777.588622571555, 4786.1316899012845, 4786.1316899012845, 4777.588622571555, 4786.1316899012845, 4792.537898062444, 4783.994513272023, 4792.537898062444, 4792.537898062444, 4783.994513272023, 4788.263412907485, 4788.263412907485, 4783.994513272023, 4777.588622571555, 4777.588622571555, 4775.4515523232285, 4781.857363213701, 4775.4515523232285, 4783.994513272023, 4777.588622571555, 4777.588622571555, 4786.1316899012845, 4773.314508806396, 4775.4515523232285, 4771.182971569649, 4769.045981605385, 4771.182971569649, 4775.4515523232285, 4773.314508806396, 4771.182971569649, 4771.182971569649, 4773.314508806396, 4788.263412907485, 4783.994513272023, 4786.1316899012845, 4796.807008149721, 4794.6751801325045, 4781.857363213701, 4786.1316899012845, 4786.1316899012845, 4781.857363213701, 4779.725719498625, 4781.857363213701, 4777.588622571555, 4779.725719498625, 4775.4515523232285, 4771.182971569649, 4769.045981605385, 4766.909018531038, 4751.961992074599, 4749.825245889275, 4739.1528834431765, 4737.016302123048, 4734.879748491107, 4734.879748491107, 4734.879748491107, 4728.475732303839, 4722.071966862066, 4707.129004782431, 4702.8567119961435, 4662.308542784821, 4621.765564440146, 4628.165210081328, 4640.965321365521, 4702.8567119961435, 4743.420650343088, 4758.36691527295, 4764.772082399541, 4775.4515523232285, 4779.725719498625, 4781.857363213701, 4796.807008149721, 4803.213609449375, 4781.857363213701, 4773.314508806396, 4594.029670063626, 4376.627847669913, 4278.709318325436, 4434.142433488523, 4613.2313074350595, 4572.701753182525, 4538.579368094299, 4474.630937508838, 4463.9731141462, 4532.183717015092, 4583.368052876646, 4687.915542817033, 4707.129004782431, 4527.921938078604, 4444.79779606964, 4555.639524922355, 4728.475732303839, 4704.992844141118, 4417.097901027782, 4123.490970884436, 4212.76428408601, 4319.145970742805, 4342.562562696084, 4638.835543908499, 4833.123289890995, 4850.215204701766, 4848.077257268188, 4845.939334797592, 4835.255580135387, 4843.801437341164, 4843.801437341164, 4839.5311992540555, 4837.39337708475, 4830.98554347125, 4833.123289890995, 4835.255580135387, 4835.255580135387, 4835.255580135387, 4833.123289890995, 4826.710126807315, 4828.847822426128, 4833.123289890995, 4830.98554347125, 4828.847822426128, 4835.255580135387, 4833.123289890995, 4830.98554347125, 4835.255580135387, 4830.98554347125, 4833.123289890995, 4822.440293162924, 4826.710126807315, 4824.577937839409, 4824.577937839409, 4818.1705615824485, 4828.847822426128, 4837.39337708475, 4833.123289890995, 4839.5311992540555, 4837.39337708475, 4833.123289890995, 4839.5311992540555, 4837.39337708475, 4837.39337708475, 4843.801437341164, 4835.255580135387, 4841.669046642371, 4845.939334797592, 4841.669046642371, 4830.98554347125, 4843.801437341164, 4839.5311992540555, 4839.5311992540555, 4843.801437341164, 4837.39337708475, 4830.98554347125, 4826.710126807315, 4816.032993740141, 4818.1705615824485, 4820.3026740679325, 4820.3026740679325, 4824.577937839409, 4824.577937839409, 4833.123289890995, 4843.801437341164, 4830.98554347125, 4835.255580135387, 4824.577937839409, 4841.669046642371, 4839.5311992540555, 4843.801437341164, 4839.5311992540555, 4839.5311992540555, 4845.939334797592, 4841.669046642371, 4837.39337708475, 4837.39337708475, 4848.077257268188, 4833.123289890995, 4841.669046642371, 4841.669046642371, 4833.123289890995, 4850.215204701766, 4848.077257268188, 4833.123289890995, 4845.939334797592, 4839.5311992540555, 4833.123289890995, 4830.98554347125, 4828.847822426128, 4835.255580135387, 4820.3026740679325, 4807.488460857832, 4807.488460857832, 4786.1316899012845, 4794.6751801325045, 4792.537898062444, 4794.6751801325045, 4788.263412907485, 4777.588622571555, 4786.1316899012845, 4805.351022154951, 4792.537898062444, 4824.577937839409, 4826.710126807315, 4828.847822426128, 4813.8954516348995, 4820.3026740679325, 4813.8954516348995, 4809.625925505826, 4813.8954516348995, 4811.757935268792, 4818.1705615824485, 4820.3026740679325, 4820.3026740679325, 4809.625925505826, 4809.625925505826, 4794.6751801325045, 4790.400642303346, 4786.1316899012845, 4786.1316899012845, 4792.537898062444, 4798.9443426171865, 4803.213609449375, 4809.625925505826, 4790.400642303346, 4788.263412907485, 4790.400642303346, 4783.994513272023, 4775.4515523232285, 4773.314508806396, 4758.36691527295, 4758.36691527295, 4764.772082399541, 4769.045981605385, 4751.961992074599, 4751.961992074599, 4741.289492397842, 4724.208353381613, 4722.071966862066, 4707.129004782431, 4717.799278068897, 4734.879748491107, 4739.1528834431765, 4760.503770327372, 4754.0987655742965, 4766.909018531038, 4762.640652483595, 4758.36691527295, 4743.420650343088, 4743.420650343088, 4741.289492397842, 4747.694005802803, 4745.557314335814, 4751.961992074599, 4779.725719498625, 4773.314508806396, 4792.537898062444, 4781.857363213701, 4781.857363213701, 4773.314508806396, 4769.045981605385, 4764.772082399541, 4769.045981605385, 4758.36691527295, 4758.36691527295, 4739.1528834431765, 4743.420650343088, 4728.475732303839, 4747.694005802803, 4734.879748491107, 4766.909018531038, 4779.725719498625, 4801.081703238537, 4818.1705615824485, 4828.847822426128, 4820.3026740679325, 4816.032993740141, 4811.757935268792, 4818.1705615824485, 4816.032993740141, 4816.032993740141, 4820.3026740679325, 4824.577937839409, 4826.710126807315, 4820.3026740679325, 4822.440293162924, 4807.488460857832, 4811.757935268792, 4805.351022154951, 4803.213609449375, 4813.8954516348995, 4805.351022154951, 4811.757935268792, 4826.710126807315, 4824.577937839409, 4803.213609449375, 4820.3026740679325, 4801.081703238537, 4805.351022154951, 4824.577937839409, 4826.710126807315, 4820.3026740679325, 4809.625925505826, 4801.081703238537, 4794.6751801325045, 4796.807008149721, 4792.537898062444, 4794.6751801325045, 4788.263412907485, 4818.1705615824485, 4798.9443426171865, 4807.488460857832, 4809.625925505826, 4813.8954516348995, 4801.081703238537, 4809.625925505826, 4803.213609449375, 4801.081703238537, 4805.351022154951, 4813.8954516348995, 4813.8954516348995, 4816.032993740141, 4818.1705615824485, 4816.032993740141, 4807.488460857832, 4820.3026740679325, 4824.577937839409, 4837.39337708475, 4833.123289890995, 4848.077257268188, 4845.939334797592, 4854.485692176614, 4854.485692176614, 4730.612202670461, 4453.316163090619, 4400.055685993651, 4602.562811954215, 4626.03013953342, 4628.165210081328, 4751.961992074599, 4805.351022154951, 4790.400642303346, 4783.994513272023, 4781.857363213701, 4798.9443426171865, 4796.807008149721, 4792.537898062444, 4792.537898062444, 4788.263412907485, 4783.994513272023, 4777.588622571555, 4790.400642303346, 4792.537898062444, 4801.081703238537, 4807.488460857832, 4813.8954516348995, 4820.3026740679325, 4828.847822426128, 4833.123289890995, 4837.39337708475, 4837.39337708475, 4828.847822426128, 4830.98554347125, 4826.710126807315, 4820.3026740679325, 4824.577937839409, 4828.847822426128, 4835.255580135387, 4826.710126807315, 4826.710126807315, 4826.710126807315, 4826.710126807315, 4826.710126807315, 4822.440293162924, 4828.847822426128, 4837.39337708475, 4833.123289890995, 4835.255580135387, 4828.847822426128, 4835.255580135387, 4837.39337708475, 4837.39337708475, 4833.123289890995, 4839.5311992540555, 4835.255580135387, 4845.939334797592, 4841.669046642371, 4852.34769503477, 4856.623714127694, 4852.34769503477, 4860.894349986934, 4858.756278634166, 4867.303229321881, 4865.170566609265, 4871.579593040457, 4869.441398929496, 4852.34769503477, 4865.170566609265, 4852.34769503477, 4852.34769503477, 4852.34769503477, 4845.939334797592, 4835.255580135387, 4830.98554347125, 4837.39337708475, 4828.847822426128, 4822.440293162924, 4822.440293162924, 4822.440293162924, 4822.440293162924, 4830.98554347125, 4833.123289890995, 4830.98554347125, 4833.123289890995, 4841.669046642371, 4833.123289890995, 4845.939334797592, 4843.801437341164, 4856.623714127694, 4854.485692176614, 4858.756278634166, 4869.441398929496, 4863.032445995661, 4858.756278634166, 4850.215204701766, 4858.756278634166, 4848.077257268188, 4837.39337708475, 4845.939334797592, 4845.939334797592, 4848.077257268188, 4848.077257268188, 4850.215204701766, 4852.34769503477, 4869.441398929496, 4871.579593040457, 4873.717811501812, 4884.398302142163, 4884.398302142163, 4884.398302142163, 4877.988838657489, 4871.579593040457, 4858.756278634166, 4852.34769503477, 4830.98554347125, 4837.39337708475, 4830.98554347125, 4824.577937839409, 4826.710126807315, 4811.757935268792, 4805.351022154951, 4790.400642303346, 4783.994513272023, 4769.045981605385, 4762.640652483595, 4760.503770327372, 4758.36691527295, 4749.825245889275, 4762.640652483595, 4760.503770327372, 4781.857363213701, 4773.314508806396, 4788.263412907485, 4796.807008149721, 4807.488460857832, 4796.807008149721, 4803.213609449375, 4818.1705615824485, 4809.625925505826, 4803.213609449375, 4798.9443426171865, 4796.807008149721, 4801.081703238537, 4807.488460857832, 4816.032993740141, 4816.032993740141, 4828.847822426128, 4826.710126807315, 4839.5311992540555, 4837.39337708475, 4839.5311992540555, 4850.215204701766, 4858.756278634166, 4852.34769503477, 4852.34769503477, 4848.077257268188, 4854.485692176614, 4856.623714127694, 4843.801437341164, 4856.623714127694, 4869.441398929496, 4860.894349986934, 4867.303229321881, 4860.894349986934, 4873.717811501812, 4892.946417734397, 4886.536665820926, 4895.0848772343015, 4892.946417734397, 4901.494915208666, 4910.043791244874, 4916.454323840298, 4922.865066161907, 4920.731784824221, 4922.865066161907, 4929.276016916613, 4929.276016916613, 4927.142666386155, 4935.687174659371, 4935.687174659371, 4925.003854676579, 4920.731784824221, 4927.142666386155, 4920.731784824221, 4912.1824399721745, 4907.905166010416, 4914.315628337495, 4903.633469724086, 4903.633469724086, 4890.8079821294505, 4895.0848772343015, 4895.0848772343015, 4895.0848772343015, 4899.3563843867405, 4905.766564318966, 4905.766564318966, 4910.043791244874, 4910.043791244874, 4914.315628337495, 4918.593042685865, 4907.905166010416, 4907.905166010416, 4907.905166010416, 4912.1824399721745, 4912.1824399721745, 4922.865066161907, 4925.003854676579, 4920.731784824221, 4912.1824399721745, 4922.865066161907, 4914.315628337495, 4916.454323840298, 4914.315628337495, 4925.003854676579, 4903.633469724086, 4925.003854676579, 4916.454323840298, 4916.454323840298, 4925.003854676579, 4916.454323840298, 4903.633469724086, 4897.21787725765, 4892.946417734397, 4882.259962560387, 4875.850571608468, 4867.303229321881, 4852.34769503477, 4841.669046642371, 4843.801437341164, 4845.939334797592, 4839.5311992540555, 4848.077257268188, 4854.485692176614, 4848.077257268188, 4850.215204701766, 4850.215204701766, 4841.669046642371, 4850.215204701766, 4856.623714127694, 4865.170566609265, 4869.441398929496, 4880.127129955425, 4882.259962560387, 4880.127129955425, 4884.398302142163, 4877.988838657489, 4865.170566609265, 4867.303229321881, 4865.170566609265, 4856.623714127694, 4867.303229321881, 4873.717811501812, 4873.717811501812, 4865.170566609265, 4877.988838657489, 4875.850571608468, 4865.170566609265, 4867.303229321881, 4875.850571608468, 4877.988838657489, 4892.946417734397, 4895.0848772343015, 4897.21787725765, 4901.494915208666, 4901.494915208666, 4899.3563843867405, 4882.259962560387, 4901.494915208666, 4905.766564318966, 4897.21787725765, 4910.043791244874, 4897.21787725765, 4897.21787725765, 4895.0848772343015, 4892.946417734397, 4882.259962560387, 4903.633469724086, 4914.315628337495, 4912.1824399721745, 4922.865066161907, 4933.55375538276, 4925.003854676579, 4929.276016916613, 4942.104022675567, 4944.2375329408615, 4942.104022675567, 4952.788253902193, 4978.4425614103575, 4986.994701684726, 4978.4425614103575, 4972.030057181063, 4986.994701684726, 4991.290102697326, 4993.429607000103, 4995.569132871827, 4982.7213308326645, 4984.855262547896, 4989.134162536895, 4997.7086802639315, 4986.994701684726, 4982.7213308326645, 4982.7213308326645, 4982.7213308326645, 4986.994701684726, 4984.855262547896, 4984.855262547896, 4993.429607000103, 4989.134162536895, 4997.7086802639315, 4980.5819351646915, 4976.303209566277, 4974.169365114438, 4965.617751124768, 4961.339334440319, 4954.927361723254, 4961.339334440319, 4961.339334440319, 4965.617751124768, 4963.478531656056, 4972.030057181063, 4965.617751124768, 4974.169365114438, 4963.478531656056, 4954.927361723254, 4946.376550475766, 4933.55375538276, 4907.905166010416, 4892.946417734397, 4884.398302142163, 4871.579593040457, 4856.623714127694, 4858.756278634166, 4850.215204701766, 4848.077257268188, 4845.939334797592, 4839.5311992540555, 4858.756278634166, 4858.756278634166, 4865.170566609265, 4867.303229321881, 4867.303229321881, 4890.8079821294505, 4888.675053546077, 4899.3563843867405, 4903.633469724086, 4907.905166010416, 4895.0848772343015, 4895.0848772343015, 4880.127129955425, 4875.850571608468, 4854.485692176614, 4882.259962560387, 4880.127129955425, 4869.441398929496, 4854.485692176614, 4852.34769503477, 4867.303229321881, 4852.34769503477, 4869.441398929496, 4863.032445995661, 4856.623714127694, 4843.801437341164, 4809.625925505826, 4798.9443426171865, 4790.400642303346, 4790.400642303346, 4794.6751801325045, 4796.807008149721, 4801.081703238537, 4813.8954516348995, 4830.98554347125, 4826.710126807315, 4835.255580135387, 4850.215204701766, 4848.077257268188, 4845.939334797592, 4843.801437341164, 4828.847822426128, 4809.625925505826, 4794.6751801325045, 4775.4515523232285, 4760.503770327372, 4754.0987655742965, 4747.694005802803, 4745.557314335814, 4749.825245889275, 4754.0987655742965, 4758.36691527295, 4775.4515523232285, 4779.725719498625, 4794.6751801325045, 4803.213609449375, 4805.351022154951, 4805.351022154951, 4790.400642303346, 4749.825245889275, 4707.129004782431, 4653.771991530493, 4594.029670063626, 4542.846947167271, 4491.68306305226, 4449.05690908914, 4423.487964232506, 4421.361551294682, 4425.619879553933, 4440.533357466222, 4429.878351491873, 4410.708163609452, 4393.666825451876, 4383.02128417456, 4385.147039517725, 4380.890101353771, 4365.983797141252, 4331.916090410815, 4282.9625447125045, 4219.148540665502, 4182.997976703442, 4153.240143754564, 4136.23798611378, 4078.8838613387798, 4032.173104582435, 3989.7265196785493, 3987.6087896972795, 4006.702803994632, 4027.92484610633, 4036.416109126549, 4036.416109126549, 4030.048951208646, 4049.157167042575, 4070.3888011258678, 4114.992045350099, 4163.869294167823, 4231.907275631269, 4295.734105236201, 4368.109253815758, 4400.055685993651, 4434.142433488523, 4459.713509400434, 4468.238326556239, 4474.630937508838, 4468.238326556239, 4468.238326556239, 4457.581025503039, 4432.010374575134, 4417.097901027782, 4397.929672571839, 4374.5022411667715, 4365.983797141252, 4353.204531207659, 4342.562562696084, 4336.176748651537, 4325.530855711292, 4310.631517336897, 4308.501636784925, 4297.863748385242, 4295.734105236201, 4285.091948096332, 4278.709318325436, 4261.687109433612, 4244.6675116171145, 4227.6560155779935, 4212.76428408601, 4202.135616445967, 4193.630175553303, 4185.1254212406575, 4172.372313602437, 4163.869294167823, 4159.6153204596885, 4148.992064410022, 4136.23798611378, 4108.619690639164, 4074.633513199044, 4061.894491261998, 4051.2763040453638, 4044.908140683887, 4053.400936236565, 4068.2637909670034, 4091.6251237371443, 4110.745580357298, 4125.617178285968, 4129.864276336482, 4125.617178285968, 4129.864276336482, 4123.490970884436, 4121.364808691763, 4121.364808691763, 4106.493846615156, 4108.619690639164, 4119.2441433011, 4142.6175511970205, 4182.997976703442, 4231.907275631269, 4282.9625447125045, 4321.270585578037, 4365.983797141252, 4383.02128417456, 4410.708163609452, 4436.2745281714815, 4470.36551660445, 4493.810630836059, 4515.131926667221, 4542.846947167271, 4559.907624934908, 4596.1642770176395, 4615.3661940946995, 4636.700321605735, 4647.371259328293, 4651.636559153129, 4660.1729915719425, 4660.1729915719425, 4672.975789219192, 4685.78511708833, 4692.187434285977, 4702.8567119961435, 4702.8567119961435, 4711.395933820125, 4719.935608406526, 4728.475732303839, 4730.612202670461, 4734.879748491107, 4732.748700836773, 4739.1528834431765, 4741.289492397842, 4741.289492397842, 4737.016302123048, 4749.825245889275, 4762.640652483595, 4766.909018531038, 4762.640652483595, 4754.0987655742965, 4739.1528834431765, 4726.339289889522, 4713.532179552629, 4719.935608406526, 4719.935608406526, 4724.208353381613, 4734.879748491107, 4743.420650343088, 4756.2355663351345, 4758.36691527295, 4760.503770327372, 4779.725719498625, 4781.857363213701, 4783.994513272023, 4775.4515523232285, 4764.772082399541, 4762.640652483595, 4764.772082399541, 4758.36691527295, 4762.640652483595, 4758.36691527295, 4754.0987655742965, 4762.640652483595, 4766.909018531038, 4760.503770327372, 4762.640652483595, 4758.36691527295, 4758.36691527295, 4760.503770327372, 4760.503770327372, 4760.503770327372, 4775.4515523232285, 4786.1316899012845, 4777.588622571555, 4783.994513272023, 4796.807008149721, 4779.725719498625, 4805.351022154951, 4805.351022154951, 4824.577937839409, 4843.801437341164, 4848.077257268188, 4860.894349986934, 4867.303229321881, 4871.579593040457, 4873.717811501812, 4860.894349986934, 4852.34769503477, 4843.801437341164, 4830.98554347125, 4822.440293162924, 4813.8954516348995, 4813.8954516348995, 4801.081703238537, 4790.400642303346, 4788.263412907485, 4771.182971569649, 4775.4515523232285, 4781.857363213701, 4777.588622571555, 4779.725719498625, 4771.182971569649, 4762.640652483595, 4754.0987655742965, 4741.289492397842, 4728.475732303839, 4730.612202670461, 4734.879748491107, 4741.289492397842, 4749.825245889275, 4771.182971569649, 4796.807008149721, 4824.577937839409, 4845.939334797592, 4865.170566609265, 4882.259962560387, 4890.8079821294505, 4907.905166010416, 4916.454323840298, 4916.454323840298 };
double _solarhouse2_modbus_dynamic_table_1d_look_up_table1__value;
double _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse2_modbus_dynamic_table_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr;
double _solarhouse2_modbus_dynamic_table_1d_look_up_table1__fraction;

double _solarhouse2_inverter_controller_gain32__out;
double _solarhouse3_inverter_bpf_gain__out;
double _solarhouse3_inverter_bpf1_gain__out;
double _solarhouse3_inverter_controller_c_function4__Ts;
double _solarhouse3_inverter_controller_c_function4__in;
double _solarhouse3_inverter_controller_c_function4__pi;


double _solarhouse3_inverter_controller_c_function4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse3_inverter_controller_c_function1__charge;
double _solarhouse3_inverter_controller_c_function1__ref;


double _solarhouse3_inverter_controller_c_function1__out;
double _solarhouse3_inverter_bpf_lpf__out;
double _solarhouse3_inverter_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_inverter_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_inverter_bpf_lpf__a_sum;
double _solarhouse3_inverter_bpf_lpf__b_sum;
double _solarhouse3_inverter_bpf_lpf__delay_line_in;
double _solarhouse3_inverter_bpf1_lpf__out;
double _solarhouse3_inverter_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_inverter_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_inverter_bpf1_lpf__a_sum;
double _solarhouse3_inverter_bpf1_lpf__b_sum;
double _solarhouse3_inverter_bpf1_lpf__delay_line_in;
double _solarhouse3_inverter_power_meas_gain6__out;
double _solarhouse3_inverter_lpf_dc__out;
double _solarhouse3_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_lpf_dc__a_sum;
double _solarhouse3_inverter_lpf_dc__b_sum;
double _solarhouse3_inverter_lpf_dc__delay_line_in;
double _solarhouse3_measurement_bpf_gain__out;
double _solarhouse3_measurement_bpf1_gain__out;
double _solarhouse3_measurement_bpf_lpf__out;
double _solarhouse3_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_measurement_bpf_lpf__a_sum;
double _solarhouse3_measurement_bpf_lpf__b_sum;
double _solarhouse3_measurement_bpf_lpf__delay_line_in;
double _solarhouse3_measurement_bpf1_lpf__out;
double _solarhouse3_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse3_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse3_measurement_bpf1_lpf__a_sum;
double _solarhouse3_measurement_bpf1_lpf__b_sum;
double _solarhouse3_measurement_bpf1_lpf__delay_line_in;
double _solarhouse3_sum1__out;
double _solarhouse3_modbus_modbus_device3__config3__comp_coil_in_out__out;
double _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[2];
double _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_table[1211] = { 2338.010223550337, 2332.5149157114183, 2332.5149157114183, 2328.85187903676, 2330.6833470987617, 2330.6833470987617, 2327.020511667485, 2327.020511667485, 2332.5149157114183, 2334.346584750945, 2330.6833470987617, 2334.346584750945, 2334.346584750945, 2332.5149157114183, 2336.1783540757324, 2338.010223550337, 2334.346584750945, 2336.1783540757324, 2334.346584750945, 2334.346584750945, 2338.010223550337, 2336.1783540757324, 2339.842193039502, 2339.842193039502, 2339.842193039502, 2339.842193039502, 2338.010223550337, 2338.010223550337, 2343.5064315214427, 2339.842193039502, 2339.842193039502, 2343.5064315214427, 2343.5064315214427, 2345.3431802412365, 2339.842193039502, 2347.1710684432333, 2343.5064315214427, 2347.1710684432333, 2345.3431802412365, 2345.3431802412365, 2345.3431802412365, 2345.3431802412365, 2343.5064315214427, 2345.3431802412365, 2345.3431802412365, 2354.5060145170028, 2345.3431802412365, 2343.5064315214427, 2343.5064315214427, 2350.8405834544337, 2349.00801646533, 2347.1710684432333, 2352.673249516242, 2343.5064315214427, 2341.674262408164, 2341.674262408164, 2341.674262408164, 2345.3431802412365, 2345.3431802412365, 2343.5064315214427, 2343.5064315214427, 2345.3431802412365, 2347.1710684432333, 2354.5060145170028, 2345.3431802412365, 2345.3431802412365, 2345.3431802412365, 2338.010223550337, 2338.010223550337, 2350.8405834544337, 2349.00801646533, 2345.3431802412365, 2343.5064315214427, 2339.842193039502, 2345.3431802412365, 2336.1783540757324, 2345.3431802412365, 2350.8405834544337, 2347.1710684432333, 2352.673249516242, 2350.8405834544337, 2347.1710684432333, 2350.8405834544337, 2350.8405834544337, 2350.8405834544337, 2350.8405834544337, 2349.00801646533, 2347.1710684432333, 2345.3431802412365, 2338.010223550337, 2341.674262408164, 2343.5064315214427, 2347.1710684432333, 2350.8405834544337, 2343.5064315214427, 2347.1710684432333, 2349.00801646533, 2345.3431802412365, 2339.842193039502, 2354.5060145170028, 2352.673249516242, 2356.338878323132, 2356.338878323132, 2356.338878323132, 2361.8380612345604, 2356.338878323132, 2360.004901811987, 2356.338878323132, 2358.171840795176, 2356.338878323132, 2356.338878323132, 2358.171840795176, 2354.5060145170028, 2352.673249516242, 2349.00801646533, 2345.3431802412365, 2347.1710684432333, 2347.1710684432333, 2350.8405834544337, 2349.00801646533, 2352.673249516242, 2349.00801646533, 2350.8405834544337, 2345.3431802412365, 2347.1710684432333, 2345.3431802412365, 2345.3431802412365, 2349.00801646533, 2347.1710684432333, 2349.00801646533, 2347.1710684432333, 2349.00801646533, 2347.1710684432333, 2356.338878323132, 2352.673249516242, 2356.338878323132, 2356.338878323132, 2361.8380612345604, 2363.6713189300617, 2371.0053297910536, 2371.0053297910536, 2367.3381286094227, 2365.5046747658384, 2360.004901811987, 2356.338878323132, 2356.338878323132, 2354.5060145170028, 2350.8405834544337, 2358.171840795176, 2358.171840795176, 2360.004901811987, 2361.8380612345604, 2360.004901811987, 2361.8380612345604, 2365.5046747658384, 2360.004901811987, 2358.171840795176, 2363.6713189300617, 2363.6713189300617, 2358.171840795176, 2360.004901811987, 2365.5046747658384, 2363.6713189300617, 2356.338878323132, 2358.171840795176, 2356.338878323132, 2356.338878323132, 2360.004901811987, 2356.338878323132, 2358.171840795176, 2356.338878323132, 2356.338878323132, 2358.171840795176, 2352.673249516242, 2358.171840795176, 2354.5060145170028, 2352.673249516242, 2358.171840795176, 2361.8380612345604, 2367.3381286094227, 2376.506863320778, 2374.6729214188063, 2371.0053297910536, 2371.0053297910536, 2363.6713189300617, 2365.5046747658384, 2369.171680328529, 2358.171840795176, 2361.8380612345604, 2358.171840795176, 2350.8405834544337, 2352.673249516242, 2354.5060145170028, 2352.673249516242, 2363.6713189300617, 2363.6713189300617, 2365.5046747658384, 2371.0053297910536, 2369.171680328529, 2374.6729214188063, 2376.506863320778, 2372.83907686503, 2376.506863320778, 2380.179523203446, 2376.506863320778, 2378.340902439568, 2376.506863320778, 2380.179523203446, 2378.340902439568, 2376.506863320778, 2378.340902439568, 2378.340902439568, 2374.6729214188063, 2372.83907686503, 2376.506863320778, 2369.171680328529, 2371.0053297910536, 2374.6729214188063, 2380.179523203446, 2385.682513724684, 2382.0137565993577, 2385.682513724684, 2389.3516571054074, 2385.682513724684, 2389.3516571054074, 2387.5170371990434, 2385.682513724684, 2387.5170371990434, 2385.682513724684, 2391.186373313655, 2391.186373313655, 2389.3516571054074, 2385.682513724684, 2385.682513724684, 2383.848086812632, 2387.5170371990434, 2391.186373313655, 2393.021185693841, 2394.8560941161995, 2398.5261985692027, 2396.6910984511387, 2402.1966856381523, 2402.1966856381523, 2398.5261985692027, 2404.0320723310488, 2393.021185693841, 2394.8560941161995, 2387.5170371990434, 2378.340902439568, 2378.340902439568, 2376.506863320778, 2371.0053297910536, 2378.340902439568, 2378.340902439568, 2371.0053297910536, 2378.340902439568, 2369.171680328529, 2365.5046747658384, 2369.171680328529, 2365.5046747658384, 2367.3381286094227, 2371.0053297910536, 2374.6729214188063, 2382.0137565993577, 2387.5170371990434, 2387.5170371990434, 2385.682513724684, 2391.186373313655, 2389.3516571054074, 2391.186373313655, 2387.5170371990434, 2389.3516571054074, 2387.5170371990434, 2387.5170371990434, 2383.848086812632, 2385.682513724684, 2389.3516571054074, 2380.179523203446, 2378.340902439568, 2385.682513724684, 2387.5170371990434, 2391.186373313655, 2385.682513724684, 2396.6910984511387, 2389.3516571054074, 2398.5261985692027, 2393.021185693841, 2402.1966856381523, 2411.379059028782, 2416.8869287105367, 2415.050877609028, 2418.72307418292, 2420.559313898862, 2424.232075552959, 2420.559313898862, 2427.9052126578, 2424.232075552959, 2424.232075552959, 2418.72307418292, 2422.395647731215, 2415.050877609028, 2416.8869287105367, 2416.8869287105367, 2420.559313898862, 2431.578724200965, 2431.578724200965, 2435.2526091667155, 2437.0896913735355, 2433.4156200652924, 2431.578724200965, 2427.9052126578, 2424.232075552959, 2418.72307418292, 2420.559313898862, 2429.7419216877593, 2431.578724200965, 2440.764134601063, 2449.956356583326, 2455.470100702317, 2457.308199039109, 2455.470100702317, 2455.470100702317, 2459.146388978693, 2455.470100702317, 2460.984670409398, 2460.984670409398, 2457.308199039109, 2460.984670409398, 2459.146388978693, 2459.146388978693, 2462.823043201852, 2459.146388978693, 2468.3387085177287, 2460.984670409398, 2459.146388978693, 2462.823043201852, 2468.3387085177287, 2466.500062379053, 2466.500062379053, 2470.177445526017, 2468.3387085177287, 2466.500062379053, 2466.500062379053, 2464.661507232779, 2462.823043201852, 2470.177445526017, 2466.500062379053, 2475.6942005430647, 2477.537796491045, 2486.7346453329324, 2492.253831417292, 2492.253831417292, 2495.933735447252, 2494.093738848641, 2492.253831417292, 2492.253831417292, 2499.613995664872, 2497.7738210927496, 2499.613995664872, 2501.45425904365, 2497.7738210927496, 2501.45425904365, 2499.613995664872, 2495.933735447252, 2503.294611109141, 2499.613995664872, 2503.294611109141, 2494.093738848641, 2503.294611109141, 2503.294611109141, 2495.933735447252, 2497.7738210927496, 2495.933735447252, 2473.85968790496, 2483.055635999627, 2483.055635999627, 2451.794179350402, 2394.8560941161995, 2367.3381286094227, 2396.6910984511387, 2437.0896913735355, 2440.764134601063, 2464.661507232779, 2483.055635999627, 2483.055635999627, 2479.376986231792, 2483.055635999627, 2475.6942005430647, 2475.6942005430647, 2481.216266108537, 2470.177445526017, 2472.01627328129, 2470.177445526017, 2462.823043201852, 2464.661507232779, 2468.3387085177287, 2460.984670409398, 2464.661507232779, 2459.146388978693, 2464.661507232779, 2466.500062379053, 2470.177445526017, 2468.3387085177287, 2472.01627328129, 2475.6942005430647, 2479.376986231792, 2483.055635999627, 2468.3387085177287, 2468.3387085177287, 2460.984670409398, 2460.984670409398, 2459.146388978693, 2455.470100702317, 2451.794179350402, 2457.308199039109, 2460.984670409398, 2459.146388978693, 2455.470100702317, 2457.308199039109, 2457.308199039109, 2453.6320940981004, 2453.6320940981004, 2446.2809874883333, 2444.443441409419, 2440.764134601063, 2442.6014953710555, 2446.2809874883333, 2453.6320940981004, 2466.500062379053, 2470.177445526017, 2473.85968790496, 2475.6942005430647, 2481.216266108537, 2481.216266108537, 2483.055635999627, 2483.055635999627, 2486.7346453329324, 2483.055635999627, 2486.7346453329324, 2497.7738210927496, 2497.7738210927496, 2488.5742845386626, 2494.093738848641, 2492.253831417292, 2488.5742845386626, 2488.5742845386626, 2488.5742845386626, 2481.216266108537, 2479.376986231792, 2483.055635999627, 2481.216266108537, 2475.6942005430647, 2481.216266108537, 2475.6942005430647, 2479.376986231792, 2479.376986231792, 2484.8950957775514, 2483.055635999627, 2484.8950957775514, 2473.85968790496, 2473.85968790496, 2472.01627328129, 2473.85968790496, 2460.984670409398, 2453.6320940981004, 2448.1186259211872, 2448.1186259211872, 2451.794179350402, 2449.956356583326, 2453.6320940981004, 2459.146388978693, 2457.308199039109, 2455.470100702317, 2460.984670409398, 2460.984670409398, 2451.794179350402, 2444.443441409419, 2444.443441409419, 2438.9268665601307, 2438.9268665601307, 2446.2809874883333, 2448.1186259211872, 2453.6320940981004, 2457.308199039109, 2462.823043201852, 2464.661507232779, 2462.823043201852, 2462.823043201852, 2466.500062379053, 2466.500062379053, 2460.984670409398, 2466.500062379053, 2460.984670409398, 2453.6320940981004, 2448.1186259211872, 2444.443441409419, 2440.764134601063, 2446.2809874883333, 2440.764134601063, 2448.1186259211872, 2446.2809874883333, 2451.794179350402, 2449.956356583326, 2442.6014953710555, 2446.2809874883333, 2438.9268665601307, 2440.764134601063, 2438.9268665601307, 2433.4156200652924, 2440.764134601063, 2437.0896913735355, 2444.443441409419, 2438.9268665601307, 2442.6014953710555, 2446.2809874883333, 2442.6014953710555, 2442.6014953710555, 2433.4156200652924, 2427.9052126578, 2427.9052126578, 2409.538803493353, 2420.559313898862, 2418.72307418292, 2426.06859723738, 2431.578724200965, 2437.0896913735355, 2442.6014953710555, 2449.956356583326, 2453.6320940981004, 2460.984670409398, 2457.308199039109, 2460.984670409398, 2451.794179350402, 2453.6320940981004, 2449.956356583326, 2455.470100702317, 2455.470100702317, 2455.470100702317, 2459.146388978693, 2462.823043201852, 2470.177445526017, 2473.85968790496, 2475.6942005430647, 2481.216266108537, 2483.055635999627, 2484.8950957775514, 2486.7346453329324, 2484.8950957775514, 2483.055635999627, 2484.8950957775514, 2488.5742845386626, 2484.8950957775514, 2484.8950957775514, 2483.055635999627, 2483.055635999627, 2484.8950957775514, 2495.933735447252, 2503.294611109141, 2508.820698618512, 2521.7074851586044, 2518.0251074820594, 2521.7074851586044, 2516.184050006173, 2518.0251074820594, 2518.0251074820594, 2523.548805122733, 2521.7074851586044, 2525.3902123466305, 2519.86625257232, 2516.184050006173, 2523.548805122733, 2518.0251074820594, 2523.548805122733, 2534.5985532372947, 2532.7567114853146, 2532.7567114853146, 2540.129101392556, 2540.129101392556, 2538.282496300591, 2536.440481549997, 2532.7567114853146, 2530.914956399347, 2525.3902123466305, 2527.231706712511, 2529.073288102606, 2532.7567114853146, 2536.440481549997, 2541.971288879282, 2541.971288879282, 2540.129101392556, 2540.129101392556, 2536.440481549997, 2540.129101392556, 2529.073288102606, 2536.440481549997, 2536.440481549997, 2534.5985532372947, 2536.440481549997, 2540.129101392556, 2538.282496300591, 2541.971288879282, 2541.971288879282, 2543.8135624536435, 2549.3408985397523, 2549.3408985397523, 2545.655921999285, 2547.49836740001, 2543.8135624536435, 2538.282496300591, 2541.971288879282, 2540.129101392556, 2545.655921999285, 2541.971288879282, 2540.129101392556, 2541.971288879282, 2543.8135624536435, 2549.3408985397523, 2553.0262175727985, 2558.554836272387, 2562.241007487469, 2564.084220379335, 2569.614366804361, 2578.837471539058, 2580.6814428348985, 2584.3696363388003, 2588.058163631998, 2582.5254978058965, 2584.3696363388003, 2586.213858314539, 2591.747023823289, 2576.9935840317708, 2586.213858314539, 2597.280936313185, 2597.280936313185, 2597.280936313185, 2600.970624798855, 2597.280936313185, 2600.970624798855, 2600.970624798855, 2599.125739281486, 2610.200798536105, 2602.81559275357, 2602.81559275357, 2597.280936313185, 2600.970624798855, 2606.5102869553807, 2608.3555017531016, 2608.3555017531016, 2610.200798536105, 2610.200798536105, 2612.0461772049853, 2610.200798536105, 2604.660643033905, 2606.5102869553807, 2602.81559275357, 2615.7371797391893, 2612.0461772049853, 2615.7371797391893, 2613.891637642956, 2608.3555017531016, 2599.125739281486, 2599.125739281486, 2600.970624798855, 2593.591578471913, 2595.4362160059604, 2595.4362160059604, 2593.591578471913, 2586.213858314539, 2575.1497804265773, 2578.837471539058, 2599.125739281486, 2599.125739281486, 2606.5102869553807, 2606.5102869553807, 2606.5102869553807, 2602.81559275357, 2604.660643033905, 2591.747023823289, 2584.3696363388003, 2584.3696363388003, 2571.462425377415, 2565.9275179724586, 2562.241007487469, 2562.241007487469, 2554.8690052347897, 2556.7118781730883, 2554.8690052347897, 2560.397879411573, 2553.0262175727985, 2553.0262175727985, 2553.0262175727985, 2554.8690052347897, 2551.18351530257, 2543.8135624536435, 2532.7567114853146, 2540.129101392556, 2529.073288102606, 2530.914956399347, 2529.073288102606, 2521.7074851586044, 2518.0251074820594, 2518.0251074820594, 2525.3902123466305, 2527.231706712511, 2534.5985532372947, 2541.971288879282, 2547.49836740001, 2554.8690052347897, 2556.7118781730883, 2567.770900152274, 2576.9935840317708, 2584.3696363388003, 2588.058163631998, 2595.4362160059604, 2597.280936313185, 2600.970624798855, 2600.970624798855, 2599.125739281486, 2599.125739281486, 2599.125739281486, 2591.747023823289, 2595.4362160059604, 2593.591578471913, 2593.591578471913, 2595.4362160059604, 2597.280936313185, 2602.81559275357, 2600.970624798855, 2604.660643033905, 2606.5102869553807, 2602.81559275357, 2600.970624798855, 2599.125739281486, 2597.280936313185, 2602.81559275357, 2602.81559275357, 2602.81559275357, 2610.200798536105, 2613.891637642956, 2610.200798536105, 2610.200798536105, 2610.200798536105, 2613.891637642956, 2610.200798536105, 2608.3555017531016, 2608.3555017531016, 2610.200798536105, 2612.0461772049853, 2613.891637642956, 2608.3555017531016, 2613.891637642956, 2613.891637642956, 2617.5828033829957, 2617.5828033829957, 2617.5828033829957, 2626.8121409512273, 2636.0480152843993, 2639.7411227095363, 2643.434550618705, 2643.434550618705, 2643.434550618705, 2650.822364413317, 2648.975291488583, 2645.2813844829984, 2643.434550618705, 2645.2813844829984, 2639.7411227095363, 2634.1970676232754, 2650.822364413317, 2647.128298142407, 2648.975291488583, 2647.128298142407, 2648.975291488583, 2647.128298142407, 2647.128298142407, 2647.128298142407, 2650.822364413317, 2661.906467062567, 2669.2974467646445, 2667.449583976479, 2665.601799692142, 2672.997925906521, 2671.1499062394946, 2672.997925906521, 2669.2974467646445, 2665.601799692142, 2663.754094018503, 2661.906467062567, 2661.906467062567, 2656.3640595787074, 2656.3640595787074, 2661.906467062567, 2654.516748566229, 2648.975291488583, 2650.822364413317, 2652.66951680848, 2665.601799692142, 2669.2974467646445, 2667.449583976479, 2676.6941996854284, 2676.6941996854284, 2682.239194872962, 2684.0876820499802, 2682.239194872962, 2674.846023757297, 2680.3907853492983, 2674.846023757297, 2680.3907853492983, 2674.846023757297, 2685.9362467746687, 2684.0876820499802, 2684.0876820499802, 2682.239194872962, 2676.6941996854284, 2669.2974467646445, 2669.2974467646445, 2665.601799692142, 2660.058918937304, 2669.2974467646445, 2676.6941996854284, 2676.6941996854284, 2680.3907853492983, 2674.846023757297, 2682.239194872962, 2680.3907853492983, 2671.1499062394946, 2676.6941996854284, 2685.9362467746687, 2687.7848889355546, 2684.0876820499802, 2689.633608438964, 2685.9362467746687, 2689.633608438964, 2685.9362467746687, 2689.633608438964, 2684.0876820499802, 2687.7848889355546, 2687.7848889355546, 2685.9362467746687, 2693.3312790347914, 2693.3312790347914, 2698.878362325518, 2698.878362325518, 2704.430657672401, 2704.430657672401, 2704.430657672401, 2706.2800686698924, 2709.979119428753, 2708.1295559566784, 2709.979119428753, 2708.1295559566784, 2711.828758976392, 2708.1295559566784, 2702.5813230683384, 2700.732064962017, 2702.5813230683384, 2709.979119428753, 2706.2800686698924, 2704.430657672401, 2711.828758976392, 2708.1295559566784, 2706.2800686698924, 2717.378133088164, 2713.678474507456, 2708.1295559566784, 2706.2800686698924, 2708.1295559566784, 2695.180229917009, 2697.02925771551, 2706.2800686698924, 2702.5813230683384, 2708.1295559566784, 2704.430657672401, 2708.1295559566784, 2704.430657672401, 2700.732064962017, 2702.5813230683384, 2700.732064962017, 2700.732064962017, 2695.180229917009, 2695.180229917009, 2697.02925771551, 2698.878362325518, 2704.430657672401, 2708.1295559566784, 2704.430657672401, 2708.1295559566784, 2717.378133088164, 2708.1295559566784, 2709.979119428753, 2711.828758976392, 2702.5813230683384, 2700.732064962017, 2700.732064962017, 2695.180229917009, 2697.02925771551, 2708.1295559566784, 2708.1295559566784, 2708.1295559566784, 2719.22807593094, 2719.22807593094, 2722.9281882051027, 2726.628601910229, 2724.778357430373, 2717.378133088164, 2709.979119428753, 2711.828758976392, 2706.2800686698924, 2708.1295559566784, 2708.1295559566784, 2708.1295559566784, 2717.378133088164, 2719.22807593094, 2728.478921542905, 2726.628601910229, 2726.628601910229, 2728.478921542905, 2713.678474507456, 2704.430657672401, 2689.633608438964, 2678.542453584805, 2667.449583976479, 2669.2974467646445, 2667.449583976479, 2672.997925906521, 2682.239194872962, 2687.7848889355546, 2687.7848889355546, 2689.633608438964, 2691.482405173764, 2691.482405173764, 2697.02925771551, 2700.732064962017, 2698.878362325518, 2695.180229917009, 2689.633608438964, 2687.7848889355546, 2684.0876820499802, 2685.9362467746687, 2687.7848889355546, 2685.9362467746687, 2691.482405173764, 2697.02925771551, 2697.02925771551, 2698.878362325518, 2698.878362325518, 2697.02925771551, 2700.732064962017, 2704.430657672401, 2711.828758976392, 2721.078094337626, 2722.9281882051027, 2728.478921542905, 2724.778357430373, 2728.478921542905, 2730.3338405091176, 2724.778357430373, 2724.778357430373, 2728.478921542905, 2724.778357430373, 2724.778357430373, 2724.778357430373, 2728.478921542905, 2728.478921542905, 2724.778357430373, 2715.528265912546, 2728.478921542905, 2724.778357430373, 2721.078094337626, 2717.378133088164, 2711.828758976392, 2706.2800686698924, 2702.5813230683384, 2693.3312790347914, 2684.0876820499802, 2669.2974467646445, 2654.516748566229, 2645.2813844829984, 2647.128298142407, 2643.434550618705, 2639.7411227095363, 2634.1970676232754, 2628.658251563808, 2613.891637642956, 2593.591578471913, 2580.6814428348985, 2565.9275179724586, 2547.49836740001, 2536.440481549997, 2543.8135624536435, 2540.129101392556, 2538.282496300591, 2532.7567114853146, 2514.343080263149, 2466.500062379053, 2411.379059028782, 2347.1710684432333, 2288.580827561033, 2231.918210271395, 2202.713551443185, 2179.004750223407, 2177.1821228303615, 2175.3596081248675, 2177.1821228303615, 2184.4733069898684, 2199.0655046850056, 2200.88947270805, 2228.2666584254102, 2253.841035432302, 2273.946337099339, 2286.7517104863564, 2301.387543799691, 2303.217486831093, 2301.387543799691, 2314.1992951307325, 2323.3580795521248, 2332.5149157114183, 2334.346584750945, 2341.674262408164, 2338.010223550337, 2338.010223550337, 2327.020511667485, 2332.5149157114183, 2319.696051844649, 2306.877680601392, 2305.0475324799177, 2294.0688006294918, 2295.898331800135, 2292.239372772796, 2295.898331800135, 2295.898331800135, 2301.387543799691, 2303.217486831093, 2305.0475324799177, 2314.1992951307325, 2328.85187903676, 2338.010223550337, 2347.1710684432333, 2371.0053297910536, 2391.186373313655, 2420.559313898862, 2444.443441409419, 2462.823043201852, 2470.177445526017, 2481.216266108537, 2481.216266108537, 2472.01627328129, 2459.146388978693, 2440.764134601063, 2435.2526091667155, 2444.443441409419, 2431.578724200965, 2422.395647731215, 2416.8869287105367, 2415.050877609028, 2433.4156200652924, 2442.6014953710555, 2455.470100702317, 2470.177445526017, 2479.376986231792, 2490.414013273732, 2505.1350517416017, 2516.184050006173, 2521.7074851586044, 2529.073288102606, 2534.5985532372947, 2543.8135624536435, 2545.655921999285, 2560.397879411573, 2571.462425377415, 2569.614366804361, 2578.837471539058, 2573.3060608372093, 2571.462425377415, 2578.837471539058, 2588.058163631998, 2591.747023823289, 2595.4362160059604, 2599.125739281486, 2602.81559275357, 2608.3555017531016, 2615.7371797391893, 2626.8121409512273, 2632.350715009345, 2641.587796658012, 2643.434550618705, 2643.434550618705, 2647.128298142407, 2656.3640595787074, 2654.516748566229, 2661.906467062567, 2661.906467062567, 2671.1499062394946, 2671.1499062394946, 2674.846023757297, 2669.2974467646445, 2669.2974467646445, 2661.906467062567, 2665.601799692142, 2663.754094018503, 2658.211449738248, 2665.601799692142, 2663.754094018503, 2660.058918937304, 2658.211449738248, 2654.516748566229, 2656.3640595787074, 2656.3640595787074, 2661.906467062567, 2658.211449738248, 2660.058918937304, 2663.754094018503, 2669.2974467646445, 2667.449583976479, 2672.997925906521, 2672.997925906521, 2671.1499062394946, 2672.997925906521, 2671.1499062394946, 2665.601799692142, 2669.2974467646445, 2672.997925906521, 2671.1499062394946, 2671.1499062394946, 2672.997925906521, 2676.6941996854284, 2684.0876820499802, 2680.3907853492983, 2678.542453584805, 2676.6941996854284, 2674.846023757297, 2667.449583976479, 2667.449583976479, 2669.2974467646445, 2667.449583976479, 2667.449583976479, 2672.997925906521, 2671.1499062394946, 2671.1499062394946, 2674.846023757297, 2669.2974467646445, 2665.601799692142, 2665.601799692142, 2658.211449738248, 2656.3640595787074, 2656.3640595787074, 2647.128298142407, 2636.0480152843993, 2621.27429487127, 2610.200798536105, 2602.81559275357, 2591.747023823289, 2602.81559275357, 2608.3555017531016, 2623.1201624950572, 2628.658251563808, 2634.1970676232754, 2626.8121409512273, 2632.350715009345, 2630.5044429530444, 2634.1970676232754, 2634.1970676232754, 2637.8945288820346, 2647.128298142407, 2658.211449738248, 2658.211449738248, 2660.058918937304, 2656.3640595787074, 2661.906467062567, 2661.906467062567, 2660.058918937304, 2665.601799692142, 2665.601799692142, 2672.997925906521, 2685.9362467746687, 2682.239194872962, 2687.7848889355546, 2693.3312790347914, 2697.02925771551, 2702.5813230683384, 2702.5813230683384, 2700.732064962017, 2706.2800686698924, 2704.430657672401, 2700.732064962017, 2695.180229917009, 2700.732064962017, 2708.1295559566784, 2717.378133088164, 2711.828758976392, 2719.22807593094, 2728.478921542905, 2732.1797858538725, 2732.1797858538725, 2724.778357430373, 2709.979119428753, 2695.180229917009, 2680.3907853492983, 2663.754094018503, 2656.3640595787074, 2656.3640595787074, 2658.211449738248, 2656.3640595787074, 2660.058918937304, 2671.1499062394946, 2678.542453584805, 2687.7848889355546, 2700.732064962017, 2706.2800686698924, 2715.528265912546, 2728.478921542905 };
double _solarhouse3_modbus_dynamic_table_1d_look_up_table1__value;
double _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse3_modbus_dynamic_table_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr;
double _solarhouse3_modbus_dynamic_table_1d_look_up_table1__fraction;

double _solarhouse3_inverter_controller_gain32__out;
double _solarhouse4_inverter_bpf_gain__out;
double _solarhouse4_inverter_bpf1_gain__out;
double _solarhouse4_inverter_controller_c_function4__Ts;
double _solarhouse4_inverter_controller_c_function4__in;
double _solarhouse4_inverter_controller_c_function4__pi;


double _solarhouse4_inverter_controller_c_function4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out;
X_Int32 _solarhouse4_inverter_controller_c_function1__charge;
double _solarhouse4_inverter_controller_c_function1__ref;


double _solarhouse4_inverter_controller_c_function1__out;
double _solarhouse4_inverter_bpf_lpf__out;
double _solarhouse4_inverter_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_inverter_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_inverter_bpf_lpf__a_sum;
double _solarhouse4_inverter_bpf_lpf__b_sum;
double _solarhouse4_inverter_bpf_lpf__delay_line_in;
double _solarhouse4_inverter_bpf1_lpf__out;
double _solarhouse4_inverter_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_inverter_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_inverter_bpf1_lpf__a_sum;
double _solarhouse4_inverter_bpf1_lpf__b_sum;
double _solarhouse4_inverter_bpf1_lpf__delay_line_in;
double _solarhouse4_inverter_power_meas_gain6__out;
double _solarhouse4_inverter_lpf_dc__out;
double _solarhouse4_inverter_lpf_dc__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_lpf_dc__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_lpf_dc__a_sum;
double _solarhouse4_inverter_lpf_dc__b_sum;
double _solarhouse4_inverter_lpf_dc__delay_line_in;
double _solarhouse4_measurement_bpf_gain__out;
double _solarhouse4_measurement_bpf1_gain__out;
double _solarhouse4_measurement_bpf_lpf__out;
double _solarhouse4_measurement_bpf_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_measurement_bpf_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_measurement_bpf_lpf__a_sum;
double _solarhouse4_measurement_bpf_lpf__b_sum;
double _solarhouse4_measurement_bpf_lpf__delay_line_in;
double _solarhouse4_measurement_bpf1_lpf__out;
double _solarhouse4_measurement_bpf1_lpf__b_coeff[2] = {0.0701119101979838, 0.0701119101979838};
double _solarhouse4_measurement_bpf1_lpf__a_coeff[2] = {1.0, -0.8597761796040324};
double _solarhouse4_measurement_bpf1_lpf__a_sum;
double _solarhouse4_measurement_bpf1_lpf__b_sum;
double _solarhouse4_measurement_bpf1_lpf__delay_line_in;
double _solarhouse4_sum1__out;
double _solarhouse4_modbus_modbus_device4__config4__comp_coil_in_out__out;
double _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[2];
double _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_table[1211] = { 2295.3839055127514, 2295.3839055127514, 2295.3839055127514, 2292.1320256949853, 2300.2645733975714, 2298.6361114365545, 2300.2645733975714, 2301.8931168150025, 2298.6361114365545, 2303.517267235586, 2303.517267235586, 2305.145973048822, 2301.8931168150025, 2308.3991530374037, 2300.2645733975714, 2300.2645733975714, 2301.8931168150025, 2303.517267235586, 2311.652656015391, 2306.774760019022, 2297.0122044908217, 2311.652656015391, 2308.3991530374037, 2303.517267235586, 2308.3991530374037, 2305.145973048822, 2308.3991530374037, 2305.145973048822, 2311.652656015391, 2314.910957110873, 2305.145973048822, 2305.145973048822, 2308.3991530374037, 2306.774760019022, 2310.0281018244877, 2316.5357524455994, 2313.281766224858, 2308.3991530374037, 2314.910957110873, 2313.281766224858, 2310.0281018244877, 2311.652656015391, 2313.281766224858, 2316.5357524455994, 2319.7945362859905, 2310.0281018244877, 2319.7945362859905, 2316.5357524455994, 2318.1651041727578, 2316.5357524455994, 2316.5357524455994, 2313.281766224858, 2314.910957110873, 2314.910957110873, 2314.910957110873, 2316.5357524455994, 2314.910957110873, 2313.281766224858, 2316.5357524455994, 2319.7945362859905, 2314.910957110873, 2314.910957110873, 2316.5357524455994, 2311.652656015391, 2319.7945362859905, 2319.7945362859905, 2318.1651041727578, 2311.652656015391, 2314.910957110873, 2316.5357524455994, 2316.5357524455994, 2316.5357524455994, 2318.1651041727578, 2316.5357524455994, 2318.1651041727578, 2321.419571896306, 2324.674359511767, 2314.910957110873, 2318.1651041727578, 2318.1651041727578, 2321.419571896306, 2319.7945362859905, 2323.049164271576, 2321.419571896306, 2316.5357524455994, 2323.049164271576, 2323.049164271576, 2324.674359511767, 2323.049164271576, 2321.419571896306, 2319.7945362859905, 2324.674359511767, 2326.3041117645002, 2323.049164271576, 2324.674359511767, 2324.674359511767, 2324.674359511767, 2321.419571896306, 2323.049164271576, 2329.55937799787, 2323.049164271576, 2326.3041117645002, 2332.8149622006868, 2327.933943921677, 2327.933943921677, 2326.3041117645002, 2326.3041117645002, 2331.189369456996, 2327.933943921677, 2327.933943921677, 2326.3041117645002, 2324.674359511767, 2323.049164271576, 2324.674359511767, 2332.8149622006868, 2326.3041117645002, 2326.3041117645002, 2327.933943921677, 2331.189369456996, 2329.55937799787, 2336.0753423839387, 2334.4451125794053, 2332.8149622006868, 2332.8149622006868, 2331.189369456996, 2332.8149622006868, 2329.55937799787, 2329.55937799787, 2329.55937799787, 2327.933943921677, 2332.8149622006868, 2326.3041117645002, 2324.674359511767, 2327.933943921677, 2326.3041117645002, 2331.189369456996, 2326.3041117645002, 2327.933943921677, 2331.189369456996, 2326.3041117645002, 2331.189369456996, 2334.4451125794053, 2327.933943921677, 2329.55937799787, 2329.55937799787, 2326.3041117645002, 2324.674359511767, 2327.933943921677, 2329.55937799787, 2331.189369456996, 2334.4451125794053, 2339.3315606912797, 2331.189369456996, 2329.55937799787, 2331.189369456996, 2329.55937799787, 2326.3041117645002, 2327.933943921677, 2329.55937799787, 2327.933943921677, 2334.4451125794053, 2334.4451125794053, 2334.4451125794053, 2336.0753423839387, 2334.4451125794053, 2332.8149622006868, 2336.0753423839387, 2334.4451125794053, 2334.4451125794053, 2337.701172538976, 2334.4451125794053, 2337.701172538976, 2340.962027983585, 2339.3315606912797, 2340.962027983585, 2345.8449436217497, 2344.2187197599733, 2345.8449436217497, 2344.2187197599733, 2344.2187197599733, 2345.8449436217497, 2345.8449436217497, 2347.475726091496, 2349.106587227375, 2344.2187197599733, 2350.733046223672, 2353.9906794037547, 2353.9906794037547, 2360.511363898182, 2357.253106445134, 2350.733046223672, 2355.621853829909, 2349.106587227375, 2339.3315606912797, 2345.8449436217497, 2339.3315606912797, 2334.4451125794053, 2339.3315606912797, 2339.3315606912797, 2327.933943921677, 2337.701172538976, 2340.962027983585, 2350.733046223672, 2345.8449436217497, 2349.106587227375, 2347.475726091496, 2352.364064192774, 2353.9906794037547, 2353.9906794037547, 2352.364064192774, 2353.9906794037547, 2357.253106445134, 2350.733046223672, 2362.1428503274583, 2362.1428503274583, 2365.4015739139145, 2373.551977965439, 2375.1840837095237, 2371.9199493903416, 2375.1840837095237, 2383.3367967819136, 2380.071893936205, 2378.444041998255, 2384.964877998867, 2380.071893936205, 2380.071893936205, 2383.3367967819136, 2378.444041998255, 2380.071893936205, 2381.7043070085347, 2380.071893936205, 2381.7043070085347, 2381.7043070085347, 2375.1840837095237, 2375.1840837095237, 2375.1840837095237, 2368.660607182405, 2370.292481353759, 2370.292481353759, 2371.9199493903416, 2373.551977965439, 2380.071893936205, 2376.8117824056217, 2386.5975207060565, 2383.3367967819136, 2386.5975207060565, 2386.5975207060565, 2386.5975207060565, 2384.964877998867, 2386.5975207060565, 2391.491421032676, 2384.964877998867, 2384.964877998867, 2384.964877998867, 2398.01469405014, 2388.230239844547, 2389.858549516195, 2389.858549516195, 2393.119882481444, 2393.119882481444, 2384.964877998867, 2391.491421032676, 2388.230239844547, 2388.230239844547, 2389.858549516195, 2388.230239844547, 2391.491421032676, 2393.119882481444, 2393.119882481444, 2394.752906010632, 2398.01469405014, 2389.858549516195, 2384.964877998867, 2386.5975207060565, 2388.230239844547, 2386.5975207060565, 2386.5975207060565, 2386.5975207060565, 2396.386005513769, 2391.491421032676, 2393.119882481444, 2393.119882481444, 2394.752906010632, 2399.6479450194724, 2396.386005513769, 2393.119882481444, 2396.386005513769, 2393.119882481444, 2396.386005513769, 2393.119882481444, 2394.752906010632, 2394.752906010632, 2393.119882481444, 2396.386005513769, 2396.386005513769, 2398.01469405014, 2401.27678442482, 2394.752906010632, 2398.01469405014, 2394.752906010632, 2396.386005513769, 2396.386005513769, 2398.01469405014, 2393.119882481444, 2398.01469405014, 2396.386005513769, 2399.6479450194724, 2401.27678442482, 2401.27678442482, 2401.27678442482, 2404.543664089093, 2406.172729223313, 2398.01469405014, 2407.806357369041, 2404.543664089093, 2404.543664089093, 2401.27678442482, 2398.01469405014, 2402.9101864972777, 2401.27678442482, 2402.9101864972777, 2404.543664089093, 2394.752906010632, 2396.386005513769, 2394.752906010632, 2391.491421032676, 2384.964877998867, 2388.230239844547, 2386.5975207060565, 2386.5975207060565, 2388.230239844547, 2388.230239844547, 2383.3367967819136, 2378.444041998255, 2373.551977965439, 2355.621853829909, 2336.0753423839387, 2336.0753423839387, 2342.5880946896746, 2375.1840837095237, 2391.491421032676, 2398.01469405014, 2404.543664089093, 2409.4400607685743, 2412.7032042383125, 2415.966646794273, 2420.864614715646, 2422.498916240483, 2414.332643716981, 2409.4400607685743, 2327.933943921677, 2220.652472277268, 2175.2482111284257, 2243.375636270348, 2327.933943921677, 2308.3991530374037, 2298.6361114365545, 2270.9961053830293, 2259.622400640345, 2293.7601612977373, 2326.3041117645002, 2380.071893936205, 2381.7043070085347, 2297.0122044908217, 2266.119883322653, 2313.281766224858, 2394.752906010632, 2378.444041998255, 2246.626993656477, 2113.746830742009, 2157.4345995505537, 2194.7000268992733, 2215.7841365911263, 2355.621853829909, 2442.093853425437, 2450.261905088501, 2451.897531529811, 2451.897531529811, 2448.626351583093, 2451.897531529811, 2451.897531529811, 2453.528737040356, 2456.800353415414, 2446.995364079455, 2450.261905088501, 2450.261905088501, 2450.261905088501, 2448.626351583093, 2450.261905088501, 2450.261905088501, 2451.897531529811, 2450.261905088501, 2450.261905088501, 2451.897531529811, 2451.897531529811, 2453.528737040356, 2453.528737040356, 2450.261905088501, 2450.261905088501, 2448.626351583093, 2448.626351583093, 2451.897531529811, 2450.261905088501, 2451.897531529811, 2448.626351583093, 2450.261905088501, 2456.800353415414, 2456.800353415414, 2453.528737040356, 2456.800353415414, 2456.800353415414, 2456.800353415414, 2458.4317761430952, 2455.1645088910395, 2458.4317761430952, 2460.0677655540026, 2458.4317761430952, 2463.3354665530633, 2458.4317761430952, 2460.0677655540026, 2458.4317761430952, 2458.4317761430952, 2460.0677655540026, 2456.800353415414, 2458.4317761430952, 2455.1645088910395, 2455.1645088910395, 2450.261905088501, 2451.897531529811, 2451.897531529811, 2451.897531529811, 2453.528737040356, 2455.1645088910395, 2456.800353415414, 2458.4317761430952, 2458.4317761430952, 2461.699332602871, 2460.0677655540026, 2458.4317761430952, 2463.3354665530633, 2468.2398059228667, 2468.2398059228667, 2466.60345571424, 2466.60345571424, 2466.60345571424, 2464.971672742085, 2464.971672742085, 2464.971672742085, 2468.2398059228667, 2469.876228110584, 2468.2398059228667, 2468.2398059228667, 2469.876228110584, 2466.60345571424, 2469.876228110584, 2469.876228110584, 2468.2398059228667, 2464.971672742085, 2468.2398059228667, 2463.3354665530633, 2466.60345571424, 2458.4317761430952, 2460.0677655540026, 2451.897531529811, 2445.359956508053, 2450.261905088501, 2453.528737040356, 2451.897531529811, 2448.626351583093, 2445.359956508053, 2450.261905088501, 2451.897531529811, 2453.528737040356, 2466.60345571424, 2468.2398059228667, 2468.2398059228667, 2461.699332602871, 2463.3354665530633, 2456.800353415414, 2461.699332602871, 2461.699332602871, 2461.699332602871, 2466.60345571424, 2468.2398059228667, 2468.2398059228667, 2464.971672742085, 2460.0677655540026, 2456.800353415414, 2456.800353415414, 2451.897531529811, 2455.1645088910395, 2456.800353415414, 2464.971672742085, 2458.4317761430952, 2458.4317761430952, 2461.699332602871, 2456.800353415414, 2456.800353415414, 2451.897531529811, 2450.261905088501, 2448.626351583093, 2448.626351583093, 2443.729114712195, 2445.359956508053, 2430.662556746764, 2438.828043036855, 2442.093853425437, 2440.4586655136027, 2430.662556746764, 2427.393285986255, 2422.498916240483, 2424.128802058816, 2429.027884325069, 2438.828043036855, 2440.4586655136027, 2450.261905088501, 2451.897531529811, 2453.528737040356, 2448.626351583093, 2445.359956508053, 2443.729114712195, 2437.1930019374327, 2442.093853425437, 2445.359956508053, 2446.995364079455, 2461.699332602871, 2460.0677655540026, 2461.699332602871, 2464.971672742085, 2461.699332602871, 2460.0677655540026, 2458.4317761430952, 2460.0677655540026, 2458.4317761430952, 2456.800353415414, 2453.528737040356, 2448.626351583093, 2445.359956508053, 2445.359956508053, 2443.729114712195, 2451.897531529811, 2458.4317761430952, 2469.876228110584, 2481.3197001696785, 2489.4963867797933, 2491.1337358926353, 2489.4963867797933, 2486.226398957223, 2484.5892624978223, 2486.226398957223, 2484.5892624978223, 2489.4963867797933, 2491.1337358926353, 2494.40414767348, 2494.40414767348, 2496.0372097843024, 2489.4963867797933, 2492.7666572814624, 2489.4963867797933, 2484.5892624978223, 2487.8591085312496, 2487.8591085312496, 2487.8591085312496, 2492.7666572814624, 2499.312542889052, 2494.40414767348, 2487.8591085312496, 2492.7666572814624, 2496.0372097843024, 2491.1337358926353, 2487.8591085312496, 2494.40414767348, 2494.40414767348, 2491.1337358926353, 2487.8591085312496, 2492.7666572814624, 2482.9566944991857, 2482.9566944991857, 2484.5892624978223, 2486.226398957223, 2496.0372097843024, 2492.7666572814624, 2496.0372097843024, 2504.221570144863, 2500.9458155466227, 2502.58365775241, 2494.40414767348, 2494.40414767348, 2494.40414767348, 2497.674841116669, 2499.312542889052, 2505.855052591771, 2494.40414767348, 2509.126726729573, 2505.855052591771, 2502.58365775241, 2504.221570144863, 2509.126726729573, 2510.7649186425697, 2515.675411447691, 2518.947919871481, 2520.5865287460506, 2527.1326510101776, 2527.1326510101776, 2456.800353415414, 2334.4451125794053, 2316.5357524455994, 2404.543664089093, 2419.230387719589, 2420.864614715646, 2479.682777131201, 2504.221570144863, 2504.221570144863, 2497.674841116669, 2496.0372097843024, 2499.312542889052, 2507.493104912368, 2502.58365775241, 2504.221570144863, 2504.221570144863, 2500.9458155466227, 2497.674841116669, 2504.221570144863, 2505.855052591771, 2510.7649186425697, 2515.675411447691, 2520.5865287460506, 2520.5865287460506, 2525.498268290173, 2528.771605000255, 2527.1326510101776, 2530.410627840549, 2530.410627840549, 2528.771605000255, 2527.1326510101776, 2527.1326510101776, 2525.498268290173, 2530.410627840549, 2532.045216355217, 2528.771605000255, 2530.410627840549, 2527.1326510101776, 2528.771605000255, 2528.771605000255, 2528.771605000255, 2535.319101689849, 2533.6843764590803, 2533.6843764590803, 2533.6843764590803, 2533.6843764590803, 2536.9583987277115, 2538.59776420324, 2536.9583987277115, 2538.59776420324, 2538.59776420324, 2538.59776420324, 2541.8721959180084, 2543.511766025788, 2546.786605706409, 2548.4218747428768, 2551.701625886637, 2553.33709752624, 2550.061716423501, 2556.612748365151, 2556.612748365151, 2556.612748365151, 2558.252927773055, 2553.33709752624, 2559.893174551066, 2554.9771421240584, 2554.9771421240584, 2550.061716423501, 2553.33709752624, 2541.8721959180084, 2543.511766025788, 2545.146899648944, 2541.8721959180084, 2540.232694001457, 2541.8721959180084, 2541.8721959180084, 2536.9583987277115, 2543.511766025788, 2543.511766025788, 2548.4218747428768, 2546.786605706409, 2545.146899648944, 2546.786605706409, 2553.33709752624, 2553.33709752624, 2558.252927773055, 2559.893174551066, 2563.169363288648, 2564.809811530135, 2563.169363288648, 2561.5289821804213, 2559.893174551066, 2558.252927773055, 2556.612748365151, 2558.252927773055, 2551.701625886637, 2553.33709752624, 2556.612748365151, 2554.9771421240584, 2561.5289821804213, 2563.169363288648, 2568.086401903909, 2568.086401903909, 2573.004041439405, 2574.6403825024536, 2577.922279728953, 2581.19993394776, 2569.7225435080345, 2576.281297870696, 2568.086401903909, 2561.5289821804213, 2553.33709752624, 2554.9771421240584, 2551.701625886637, 2550.061716423501, 2548.4218747428768, 2545.146899648944, 2538.59776420324, 2533.6843764590803, 2532.045216355217, 2523.859452059613, 2520.5865287460506, 2522.2207049279473, 2517.3138817325885, 2515.675411447691, 2520.5865287460506, 2523.859452059613, 2530.410627840549, 2532.045216355217, 2532.045216355217, 2535.319101689849, 2546.786605706409, 2543.511766025788, 2546.786605706409, 2545.146899648944, 2550.061716423501, 2545.146899648944, 2546.786605706409, 2541.8721959180084, 2543.511766025788, 2546.786605706409, 2550.061716423501, 2554.9771421240584, 2558.252927773055, 2558.252927773055, 2564.809811530135, 2568.086401903909, 2573.004041439405, 2573.004041439405, 2573.004041439405, 2576.281297870696, 2571.3632591084493, 2573.004041439405, 2569.7225435080345, 2576.281297870696, 2577.922279728953, 2576.281297870696, 2579.558819531835, 2581.19993394776, 2582.836605785123, 2581.19993394776, 2587.7560345641323, 2587.7560345641323, 2592.6760556508266, 2589.397479071829, 2599.2385049773497, 2602.517866189871, 2605.7974875695277, 2609.077368490077, 2612.362020383005, 2612.362020383005, 2613.9999312575087, 2613.9999312575087, 2617.280458476961, 2620.565756004282, 2618.923075021018, 2620.565756004282, 2618.923075021018, 2617.280458476961, 2615.64241886708, 2613.9999312575087, 2612.362020383005, 2609.077368490077, 2609.077368490077, 2607.4396513903985, 2607.4396513903985, 2597.596666902599, 2602.517866189871, 2602.517866189871, 2604.1553888124845, 2605.7974875695277, 2607.4396513903985, 2610.7196620191658, 2612.362020383005, 2613.9999312575087, 2615.64241886708, 2613.9999312575087, 2612.362020383005, 2612.362020383005, 2613.9999312575087, 2615.64241886708, 2617.280458476961, 2620.565756004282, 2620.565756004282, 2618.923075021018, 2617.280458476961, 2617.280458476961, 2618.923075021018, 2622.203988224232, 2618.923075021018, 2622.203988224232, 2610.7196620191658, 2620.565756004282, 2618.923075021018, 2625.4896713345747, 2620.565756004282, 2618.923075021018, 2612.362020383005, 2612.362020383005, 2607.4396513903985, 2602.517866189871, 2599.2385049773497, 2589.397479071829, 2587.7560345641323, 2584.47785243999, 2577.922279728953, 2581.19993394776, 2584.47785243999, 2586.1191651798044, 2582.836605785123, 2589.397479071829, 2587.7560345641323, 2584.47785243999, 2586.1191651798044, 2582.836605785123, 2592.6760556508266, 2597.596666902599, 2600.875897616937, 2604.1553888124845, 2605.7974875695277, 2602.517866189871, 2604.1553888124845, 2604.1553888124845, 2600.875897616937, 2599.2385049773497, 2592.6760556508266, 2597.596666902599, 2607.4396513903985, 2599.2385049773497, 2602.517866189871, 2599.2385049773497, 2599.2385049773497, 2604.1553888124845, 2602.517866189871, 2599.2385049773497, 2604.1553888124845, 2612.362020383005, 2615.64241886708, 2615.64241886708, 2613.9999312575087, 2623.846797676207, 2620.565756004282, 2622.203988224232, 2617.280458476961, 2622.203988224232, 2620.565756004282, 2618.923075021018, 2623.846797676207, 2627.128095468655, 2620.565756004282, 2618.923075021018, 2617.280458476961, 2618.923075021018, 2622.203988224232, 2625.4896713345747, 2628.771097131524, 2630.4096487646066, 2640.2603505686907, 2633.695971302591, 2646.830257780553, 2646.830257780553, 2651.752705081901, 2659.9685763087905, 2653.396657252539, 2658.3243734615226, 2658.3243734615226, 2673.1108880804845, 2661.608324374881, 2666.536976541115, 2671.4661876740092, 2678.03632252136, 2669.821549263367, 2671.4661876740092, 2676.3959557484227, 2673.1108880804845, 2673.1108880804845, 2674.7511317451763, 2674.7511317451763, 2671.4661876740092, 2669.821549263367, 2673.1108880804845, 2674.7511317451763, 2673.1108880804845, 2678.03632252136, 2681.3262787460512, 2678.03632252136, 2673.1108880804845, 2671.4661876740092, 2668.1814909054588, 2664.892524398031, 2663.252652020696, 2659.9685763087905, 2666.536976541115, 2663.252652020696, 2664.892524398031, 2668.1814909054588, 2671.4661876740092, 2668.1814909054588, 2666.536976541115, 2669.821549263367, 2663.252652020696, 2656.680233212809, 2653.396657252539, 2638.6169032275925, 2630.4096487646066, 2627.128095468655, 2620.565756004282, 2615.64241886708, 2613.9999312575087, 2612.362020383005, 2610.7196620191658, 2609.077368490077, 2613.9999312575087, 2617.280458476961, 2617.280458476961, 2618.923075021018, 2625.4896713345747, 2627.128095468655, 2632.0527781235137, 2638.6169032275925, 2641.903861345891, 2641.903861345891, 2641.903861345891, 2638.6169032275925, 2632.0527781235137, 2630.4096487646066, 2623.846797676207, 2627.128095468655, 2628.771097131524, 2628.771097131524, 2630.4096487646066, 2622.203988224232, 2615.64241886708, 2615.64241886708, 2622.203988224232, 2625.4896713345747, 2623.846797676207, 2617.280458476961, 2610.7196620191658, 2595.954894284901, 2591.038989432036, 2587.7560345641323, 2587.7560345641323, 2591.038989432036, 2589.397479071829, 2595.954894284901, 2602.517866189871, 2612.362020383005, 2612.362020383005, 2613.9999312575087, 2615.64241886708, 2620.565756004282, 2620.565756004282, 2613.9999312575087, 2612.362020383005, 2600.875897616937, 2594.3176972977, 2584.47785243999, 2574.6403825024536, 2573.004041439405, 2569.7225435080345, 2568.086401903909, 2573.004041439405, 2573.004041439405, 2576.281297870696, 2584.47785243999, 2589.397479071829, 2595.954894284901, 2599.2385049773497, 2604.1553888124845, 2602.517866189871, 2589.397479071829, 2571.3632591084493, 2548.4218747428768, 2523.859452059613, 2494.40414767348, 2464.971672742085, 2438.828043036855, 2417.6007246692247, 2406.172729223313, 2404.543664089093, 2407.806357369041, 2412.7032042383125, 2407.806357369041, 2401.27678442482, 2393.119882481444, 2383.3367967819136, 2386.5975207060565, 2391.491421032676, 2376.8117824056217, 2357.253106445134, 2332.8149622006868, 2300.2645733975714, 2282.3738793077882, 2272.623169068415, 2253.121790082501, 2228.7666007930256, 2207.6734633698306, 2189.8358786344697, 2184.972524656564, 2196.3186129745363, 2206.049805289671, 2214.160043793569, 2210.916579983997, 2210.916579983997, 2220.652472277268, 2230.387005587836, 2256.369693414252, 2282.3738793077882, 2318.1651041727578, 2350.733046223672, 2388.230239844547, 2407.806357369041, 2420.864614715646, 2429.027884325069, 2437.1930019374327, 2440.4586655136027, 2437.1930019374327, 2435.5625260455404, 2432.29281199952, 2420.864614715646, 2412.7032042383125, 2402.9101864972777, 2389.858549516195, 2386.5975207060565, 2380.071893936205, 2376.8117824056217, 2370.292481353759, 2367.0288104585047, 2358.879955382741, 2355.621853829909, 2353.9906794037547, 2352.364064192774, 2347.475726091496, 2344.2187197599733, 2337.701172538976, 2326.3041117645002, 2318.1651041727578, 2310.0281018244877, 2305.145973048822, 2300.2645733975714, 2297.0122044908217, 2290.5039720400227, 2285.629247520897, 2285.629247520897, 2280.750790176519, 2272.623169068415, 2256.369693414252, 2241.754550653788, 2233.637000040919, 2228.7666007930256, 2227.1418178449776, 2233.637000040919, 2241.754550653788, 2251.495731004432, 2264.49315297065, 2269.3691249376448, 2272.623169068415, 2270.9961053830293, 2270.9961053830293, 2267.7466972159946, 2269.3691249376448, 2267.7466972159946, 2264.49315297065, 2264.49315297065, 2272.623169068415, 2287.252583079807, 2305.145973048822, 2331.189369456996, 2358.879955382741, 2380.071893936205, 2401.27678442482, 2415.966646794273, 2427.393285986255, 2440.4586655136027, 2455.1645088910395, 2468.2398059228667, 2479.682777131201, 2497.674841116669, 2505.855052591771, 2520.5865287460506, 2527.1326510101776, 2541.8721959180084, 2548.4218747428768, 2551.701625886637, 2550.061716423501, 2559.893174551066, 2563.169363288648, 2569.7225435080345, 2571.3632591084493, 2581.19993394776, 2581.19993394776, 2586.1191651798044, 2587.7560345641323, 2591.038989432036, 2595.954894284901, 2595.954894284901, 2595.954894284901, 2597.596666902599, 2600.875897616937, 2599.2385049773497, 2599.2385049773497, 2604.1553888124845, 2607.4396513903985, 2615.64241886708, 2615.64241886708, 2605.7974875695277, 2599.2385049773497, 2592.6760556508266, 2586.1191651798044, 2589.397479071829, 2589.397479071829, 2594.3176972977, 2599.2385049773497, 2604.1553888124845, 2612.362020383005, 2612.362020383005, 2613.9999312575087, 2620.565756004282, 2617.280458476961, 2623.846797676207, 2622.203988224232, 2617.280458476961, 2615.64241886708, 2612.362020383005, 2613.9999312575087, 2615.64241886708, 2613.9999312575087, 2613.9999312575087, 2617.280458476961, 2612.362020383005, 2618.923075021018, 2615.64241886708, 2615.64241886708, 2612.362020383005, 2612.362020383005, 2617.280458476961, 2620.565756004282, 2620.565756004282, 2625.4896713345747, 2628.771097131524, 2628.771097131524, 2628.771097131524, 2630.4096487646066, 2635.3347136954285, 2643.542920082269, 2650.1133319064184, 2658.3243734615226, 2666.536976541115, 2669.821549263367, 2673.1108880804845, 2673.1108880804845, 2671.4661876740092, 2668.1814909054588, 2664.892524398031, 2661.608324374881, 2658.3243734615226, 2650.1133319064184, 2645.1865573280884, 2643.542920082269, 2640.2603505686907, 2635.3347136954285, 2628.771097131524, 2628.771097131524, 2627.128095468655, 2633.695971302591, 2630.4096487646066, 2628.771097131524, 2627.128095468655, 2617.280458476961, 2613.9999312575087, 2607.4396513903985, 2604.1553888124845, 2602.517866189871, 2605.7974875695277, 2610.7196620191658, 2618.923075021018, 2625.4896713345747, 2641.903861345891, 2656.680233212809, 2668.1814909054588, 2678.03632252136, 2687.8978891321412, 2694.4749975181844, 2701.048558474045, 2704.335702200531, 2704.335702200531 };
double _solarhouse4_modbus_dynamic_table_1d_look_up_table1__value;
double _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse4_modbus_dynamic_table_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr;
double _solarhouse4_modbus_dynamic_table_1d_look_up_table1__fraction;

double _solarhouse4_inverter_controller_gain32__out;
double _ess_inverter_controller_hilbert_transform__out;
double _ess_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _ess_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _ess_inverter_controller_hilbert_transform__a_sum;
double _ess_inverter_controller_hilbert_transform__b_sum;
double _ess_inverter_controller_hilbert_transform__delay_line_in;
double _ess_inverter_controller_hilbert_transform1__out;
double _ess_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _ess_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _ess_inverter_controller_hilbert_transform1__a_sum;
double _ess_inverter_controller_hilbert_transform1__b_sum;
double _ess_inverter_controller_hilbert_transform1__delay_line_in;
double _ess_inverter_controller_gain22__out;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__channels[1] = {0};
double _grid_vs_tdf_sg_ctrl_sine1__gain;
double _grid_vs_tdf_sg_ctrl_sine1__period;
double _grid_vs_tdf_sg_ctrl_sine1__shift;
double _grid_vs_tdf_sg_ctrl_sine1__phase_pu;
double _grid_vs_tdf_sg_ctrl_sine1__offset;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__offset_uint;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi;
double _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real;
X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__sg_update_value;
double _grid_vs_tdf_sg_ctrl_sine1__xn;
double _grid_vs_tdf_sg_ctrl_sine1__xn_1;
double _grid_vs_tdf_sg_ctrl_sine1__yn;
double _grid_vs_tdf_sg_ctrl_sine1__yn_1;
double _grid_vs_tdf_sg_ctrl_sine1__k;
double _measurement_hilbert_transform1__out;
double _measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _measurement_hilbert_transform1__a_sum;
double _measurement_hilbert_transform1__b_sum;
double _measurement_hilbert_transform1__delay_line_in;
double _measurement_hilbert_transform__out;
double _measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _measurement_hilbert_transform__a_sum;
double _measurement_hilbert_transform__b_sum;
double _measurement_hilbert_transform__delay_line_in;
double _measurement_product1__out;
double _solarhouse1_inverter_controller_hilbert_transform__out;
double _solarhouse1_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_inverter_controller_hilbert_transform__a_sum;
double _solarhouse1_inverter_controller_hilbert_transform__b_sum;
double _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse1_inverter_controller_hilbert_transform1__out;
double _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse1_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse1_inverter_controller_gain22__out;
double _solarhouse1_measurement_hilbert_transform1__out;
double _solarhouse1_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_measurement_hilbert_transform1__a_sum;
double _solarhouse1_measurement_hilbert_transform1__b_sum;
double _solarhouse1_measurement_hilbert_transform1__delay_line_in;
double _solarhouse1_measurement_hilbert_transform__out;
double _solarhouse1_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse1_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse1_measurement_hilbert_transform__a_sum;
double _solarhouse1_measurement_hilbert_transform__b_sum;
double _solarhouse1_measurement_hilbert_transform__delay_line_in;
double _solarhouse1_measurement_product1__out;
double _solarhouse1_modbus_bus_join1__out[2];
double _solarhouse2_inverter_controller_hilbert_transform__out;
double _solarhouse2_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_inverter_controller_hilbert_transform__a_sum;
double _solarhouse2_inverter_controller_hilbert_transform__b_sum;
double _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse2_inverter_controller_hilbert_transform1__out;
double _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse2_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse2_inverter_controller_gain22__out;
double _solarhouse2_measurement_hilbert_transform1__out;
double _solarhouse2_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_measurement_hilbert_transform1__a_sum;
double _solarhouse2_measurement_hilbert_transform1__b_sum;
double _solarhouse2_measurement_hilbert_transform1__delay_line_in;
double _solarhouse2_measurement_hilbert_transform__out;
double _solarhouse2_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse2_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse2_measurement_hilbert_transform__a_sum;
double _solarhouse2_measurement_hilbert_transform__b_sum;
double _solarhouse2_measurement_hilbert_transform__delay_line_in;
double _solarhouse2_measurement_product1__out;
double _solarhouse2_modbus_bus_join1__out[2];
double _solarhouse3_inverter_controller_hilbert_transform__out;
double _solarhouse3_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_inverter_controller_hilbert_transform__a_sum;
double _solarhouse3_inverter_controller_hilbert_transform__b_sum;
double _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse3_inverter_controller_hilbert_transform1__out;
double _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse3_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse3_inverter_controller_gain22__out;
double _solarhouse3_measurement_hilbert_transform1__out;
double _solarhouse3_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_measurement_hilbert_transform1__a_sum;
double _solarhouse3_measurement_hilbert_transform1__b_sum;
double _solarhouse3_measurement_hilbert_transform1__delay_line_in;
double _solarhouse3_measurement_hilbert_transform__out;
double _solarhouse3_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse3_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse3_measurement_hilbert_transform__a_sum;
double _solarhouse3_measurement_hilbert_transform__b_sum;
double _solarhouse3_measurement_hilbert_transform__delay_line_in;
double _solarhouse3_measurement_product1__out;
double _solarhouse3_modbus_bus_join1__out[2];
double _solarhouse4_inverter_controller_hilbert_transform__out;
double _solarhouse4_inverter_controller_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_inverter_controller_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_inverter_controller_hilbert_transform__a_sum;
double _solarhouse4_inverter_controller_hilbert_transform__b_sum;
double _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
double _solarhouse4_inverter_controller_hilbert_transform1__out;
double _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_inverter_controller_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_inverter_controller_hilbert_transform1__a_sum;
double _solarhouse4_inverter_controller_hilbert_transform1__b_sum;
double _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
double _solarhouse4_inverter_controller_gain22__out;
double _solarhouse4_measurement_hilbert_transform1__out;
double _solarhouse4_measurement_hilbert_transform1__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_measurement_hilbert_transform1__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_measurement_hilbert_transform1__a_sum;
double _solarhouse4_measurement_hilbert_transform1__b_sum;
double _solarhouse4_measurement_hilbert_transform1__delay_line_in;
double _solarhouse4_measurement_hilbert_transform__out;
double _solarhouse4_measurement_hilbert_transform__b_coeff[2] = { -0.9273409576767984, 1.0};
double _solarhouse4_measurement_hilbert_transform__a_coeff[2] = {1.0, -0.9273409576767981};
double _solarhouse4_measurement_hilbert_transform__a_sum;
double _solarhouse4_measurement_hilbert_transform__b_sum;
double _solarhouse4_measurement_hilbert_transform__delay_line_in;
double _solarhouse4_measurement_product1__out;
double _solarhouse4_modbus_bus_join1__out[2];
double _ess_inverter_controller_alpha_beta_to_dq1__d;
double _ess_inverter_controller_alpha_beta_to_dq1__q;
double _ess_inverter_controller_alpha_beta_to_dq1__k1;
double _ess_inverter_controller_alpha_beta_to_dq1__k2;
double _ess_inverter_controller_alpha_beta_to_dq2__d;
double _ess_inverter_controller_alpha_beta_to_dq2__q;
double _ess_inverter_controller_alpha_beta_to_dq2__k1;
double _ess_inverter_controller_alpha_beta_to_dq2__k2;
double _measurement_product2__out;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse1_measurement_product2__out;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse2_measurement_product2__out;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse3_measurement_product2__out;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__d;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__q;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1;
double _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__d;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__q;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1;
double _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2;
double _solarhouse4_measurement_product2__out;
double _ess_inverter_controller_gain28__out;
double _ess_inverter_controller_gain29__out;
double _ess_inverter_controller_gain30__out;
double _ess_inverter_controller_gain31__out;
double _measurement_sum1__out;
double _solarhouse1_inverter_controller_gain28__out;
double _solarhouse1_inverter_controller_gain29__out;
double _solarhouse1_inverter_controller_gain30__out;
double _solarhouse1_inverter_controller_gain31__out;
double _solarhouse1_measurement_sum1__out;
double _solarhouse2_inverter_controller_gain28__out;
double _solarhouse2_inverter_controller_gain29__out;
double _solarhouse2_inverter_controller_gain30__out;
double _solarhouse2_inverter_controller_gain31__out;
double _solarhouse2_measurement_sum1__out;
double _solarhouse3_inverter_controller_gain28__out;
double _solarhouse3_inverter_controller_gain29__out;
double _solarhouse3_inverter_controller_gain30__out;
double _solarhouse3_inverter_controller_gain31__out;
double _solarhouse3_measurement_sum1__out;
double _solarhouse4_inverter_controller_gain28__out;
double _solarhouse4_inverter_controller_gain29__out;
double _solarhouse4_inverter_controller_gain30__out;
double _solarhouse4_inverter_controller_gain31__out;
double _solarhouse4_measurement_sum1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _ess_inverter_power_meas_power_meas_dqpu_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_product4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _ess_inverter_power_meas_power_meas_dqpu_product2__out;
double _ess_inverter_power_meas_power_meas_dqpu_product3__out;
double _measurement_gain1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse1_measurement_gain1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse2_measurement_gain1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse3_measurement_gain1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out;
double _solarhouse4_measurement_gain1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum1__out;
double _ess_inverter_power_meas_power_meas_dqpu_sum2__out;
double _measurement_lpf_p__out;
double _measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _measurement_lpf_p__a_sum;
double _measurement_lpf_p__b_sum;
double _measurement_lpf_p__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse1_measurement_lpf_p__out;
double _solarhouse1_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_measurement_lpf_p__a_sum;
double _solarhouse1_measurement_lpf_p__b_sum;
double _solarhouse1_measurement_lpf_p__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse2_measurement_lpf_p__out;
double _solarhouse2_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_measurement_lpf_p__a_sum;
double _solarhouse2_measurement_lpf_p__b_sum;
double _solarhouse2_measurement_lpf_p__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse3_measurement_lpf_p__out;
double _solarhouse3_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_measurement_lpf_p__a_sum;
double _solarhouse3_measurement_lpf_p__b_sum;
double _solarhouse3_measurement_lpf_p__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out;
double _solarhouse4_measurement_lpf_p__out;
double _solarhouse4_measurement_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_measurement_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_measurement_lpf_p__a_sum;
double _solarhouse4_measurement_lpf_p__b_sum;
double _solarhouse4_measurement_lpf_p__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[2] = {0.0006279239944363413, 0.0006279239944364523};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[2] = {1.0, -0.9987441520111273};
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2;
double _ess_inverter_controller_bus_join1__out[2];
double _solarhouse1_inverter_controller_bus_join1__out[2];
double _solarhouse2_inverter_controller_bus_join1__out[2];
double _solarhouse3_inverter_controller_bus_join1__out[2];
double _solarhouse4_inverter_controller_bus_join1__out[2];
double _ess_inverter_controller_bus_split1__out;
double _ess_inverter_controller_bus_split1__out1;
double _solarhouse1_inverter_controller_bus_split1__out;
double _solarhouse1_inverter_controller_bus_split1__out1;
double _solarhouse2_inverter_controller_bus_split1__out;
double _solarhouse2_inverter_controller_bus_split1__out1;
double _solarhouse3_inverter_controller_bus_split1__out;
double _solarhouse3_inverter_controller_bus_split1__out1;
double _solarhouse4_inverter_controller_bus_split1__out;
double _solarhouse4_inverter_controller_bus_split1__out1;
double _ess_inverter_controller_gain20__out;
double _solarhouse1_inverter_controller_gain20__out;
double _solarhouse2_inverter_controller_gain20__out;
double _solarhouse3_inverter_controller_gain20__out;
double _solarhouse4_inverter_controller_gain20__out;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {0, 1};
double _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _ess_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {2, 3};
double _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {4, 5};
double _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {6, 7};
double _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[2] = {8, 9};
double _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[2];
X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask;
X_UnInt32 _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__sig_dir[2];

//@cmp.var.end

//@cmp.svar.start
// state variables
double _ess_dynamic_table1_clock1__state;
double _ess_inverter_bpf_hpf__states[1];
double _ess_inverter_bpf1_hpf__states[1];
X_Int32 _ess_inverter_controller_c_function3__k;
double _ess_inverter_controller_c_function3__t;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _ess_inverter_controller_rate_transition9_output__out =  0.0;
double _ess_modbus_rate_transition2_output__out =  0.0;
double _ess_modbus_rate_transition3_output__out =  0.0;
double _ess_rate_transition1_output__out =  0.0;
double _ess_rate_transition2_output__out =  0.0;
double _measurement_bpf_hpf__states[1];
double _measurement_bpf1_hpf__states[1];
double _solarhouse1_inverter_bpf_hpf__states[1];
double _solarhouse1_inverter_bpf1_hpf__states[1];
X_Int32 _solarhouse1_inverter_controller_c_function3__k;
double _solarhouse1_inverter_controller_c_function3__t;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse1_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse1_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse1_measurement_bpf_hpf__states[1];
double _solarhouse1_measurement_bpf1_hpf__states[1];
double _solarhouse1_modbus_dynamic_table_clock1__state;
double _solarhouse1_modbus_rate_transition1_output__out =  0.0;
double _solarhouse1_rate_transition1_output__out =  0.0;
double _solarhouse2_inverter_bpf_hpf__states[1];
double _solarhouse2_inverter_bpf1_hpf__states[1];
X_Int32 _solarhouse2_inverter_controller_c_function3__k;
double _solarhouse2_inverter_controller_c_function3__t;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse2_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse2_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse2_measurement_bpf_hpf__states[1];
double _solarhouse2_measurement_bpf1_hpf__states[1];
double _solarhouse2_modbus_dynamic_table_clock1__state;
double _solarhouse2_modbus_rate_transition1_output__out =  0.0;
double _solarhouse2_rate_transition1_output__out =  0.0;
double _solarhouse3_inverter_bpf_hpf__states[1];
double _solarhouse3_inverter_bpf1_hpf__states[1];
X_Int32 _solarhouse3_inverter_controller_c_function3__k;
double _solarhouse3_inverter_controller_c_function3__t;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse3_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse3_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse3_measurement_bpf_hpf__states[1];
double _solarhouse3_measurement_bpf1_hpf__states[1];
double _solarhouse3_modbus_dynamic_table_clock1__state;
double _solarhouse3_modbus_rate_transition1_output__out =  0.0;
double _solarhouse3_rate_transition1_output__out =  0.0;
double _solarhouse4_inverter_bpf_hpf__states[1];
double _solarhouse4_inverter_bpf1_hpf__states[1];
X_Int32 _solarhouse4_inverter_controller_c_function3__k;
double _solarhouse4_inverter_controller_c_function3__t;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[1];
X_Int32 _solarhouse4_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
double _solarhouse4_inverter_controller_rate_transition9_output__out =  0.0;
double _solarhouse4_measurement_bpf_hpf__states[1];
double _solarhouse4_measurement_bpf1_hpf__states[1];
double _solarhouse4_modbus_dynamic_table_clock1__state;
double _solarhouse4_modbus_rate_transition1_output__out =  0.0;
double _solarhouse4_rate_transition1_output__out =  0.0;
double _ess_inverter_bpf_lpf__states[1];
double _ess_inverter_bpf1_lpf__states[1];
double _ess_inverter_lpf_dc__states[1];
X_Int32 _ess_c_function3__t;
double _measurement_bpf_lpf__states[1];
double _measurement_bpf1_lpf__states[1];
double _solarhouse1_inverter_bpf_lpf__states[1];
double _solarhouse1_inverter_bpf1_lpf__states[1];
double _solarhouse1_inverter_lpf_dc__states[1];
double _solarhouse1_measurement_bpf_lpf__states[1];
double _solarhouse1_measurement_bpf1_lpf__states[1];
double _solarhouse2_inverter_bpf_lpf__states[1];
double _solarhouse2_inverter_bpf1_lpf__states[1];
double _solarhouse2_inverter_lpf_dc__states[1];
double _solarhouse2_measurement_bpf_lpf__states[1];
double _solarhouse2_measurement_bpf1_lpf__states[1];
double _solarhouse3_inverter_bpf_lpf__states[1];
double _solarhouse3_inverter_bpf1_lpf__states[1];
double _solarhouse3_inverter_lpf_dc__states[1];
double _solarhouse3_measurement_bpf_lpf__states[1];
double _solarhouse3_measurement_bpf1_lpf__states[1];
double _solarhouse4_inverter_bpf_lpf__states[1];
double _solarhouse4_inverter_bpf1_lpf__states[1];
double _solarhouse4_inverter_lpf_dc__states[1];
double _solarhouse4_measurement_bpf_lpf__states[1];
double _solarhouse4_measurement_bpf1_lpf__states[1];
double _ess_inverter_controller_hilbert_transform__states[1];
double _ess_inverter_controller_hilbert_transform1__states[1];
double _measurement_hilbert_transform1__states[1];
double _measurement_hilbert_transform__states[1];
double _solarhouse1_inverter_controller_hilbert_transform__states[1];
double _solarhouse1_inverter_controller_hilbert_transform1__states[1];
double _solarhouse1_measurement_hilbert_transform1__states[1];
double _solarhouse1_measurement_hilbert_transform__states[1];
double _solarhouse2_inverter_controller_hilbert_transform__states[1];
double _solarhouse2_inverter_controller_hilbert_transform1__states[1];
double _solarhouse2_measurement_hilbert_transform1__states[1];
double _solarhouse2_measurement_hilbert_transform__states[1];
double _solarhouse3_inverter_controller_hilbert_transform__states[1];
double _solarhouse3_inverter_controller_hilbert_transform1__states[1];
double _solarhouse3_measurement_hilbert_transform1__states[1];
double _solarhouse3_measurement_hilbert_transform__states[1];
double _solarhouse4_inverter_controller_hilbert_transform__states[1];
double _solarhouse4_inverter_controller_hilbert_transform1__states[1];
double _solarhouse4_measurement_hilbert_transform1__states[1];
double _solarhouse4_measurement_hilbert_transform__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[1];
double _measurement_lpf_p__states[1];
double _solarhouse1_measurement_lpf_p__states[1];
double _solarhouse2_measurement_lpf_p__states[1];
double _solarhouse3_measurement_lpf_p__states[1];
double _solarhouse4_measurement_lpf_p__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[1];
double _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[1];
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state;
X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state;
X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active;
double _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state;//@cmp.svar.end





// generated using template: virtual_hil/custom_functions.template---------------------------------
void ReInit_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rReInitTimer");
#endif
    //@cmp.init.block.start
    _ess_dynamic_table1_clock1__state = 0.0f;
    X_UnInt32 _ess_inverter_bpf_hpf__i;
    for (_ess_inverter_bpf_hpf__i = 0; _ess_inverter_bpf_hpf__i < 1; _ess_inverter_bpf_hpf__i++) {
        _ess_inverter_bpf_hpf__states[_ess_inverter_bpf_hpf__i] = 0;
    }
    X_UnInt32 _ess_inverter_bpf1_hpf__i;
    for (_ess_inverter_bpf1_hpf__i = 0; _ess_inverter_bpf1_hpf__i < 1; _ess_inverter_bpf1_hpf__i++) {
        _ess_inverter_bpf1_hpf__states[_ess_inverter_bpf1_hpf__i] = 0;
    }
    _ess_inverter_controller_c_function3__k = 0;
    _ess_inverter_controller_c_function3__t = 1;
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _ess_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _ess_inverter_controller_rate_transition9_output__out =  0.0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    _ess_modbus_rate_transition2_output__out =  0.0;
    _ess_modbus_rate_transition3_output__out =  0.0;
    _ess_rate_transition1_output__out =  0.0;
    _ess_rate_transition2_output__out =  0.0;
    X_UnInt32 _measurement_bpf_hpf__i;
    for (_measurement_bpf_hpf__i = 0; _measurement_bpf_hpf__i < 1; _measurement_bpf_hpf__i++) {
        _measurement_bpf_hpf__states[_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _measurement_bpf1_hpf__i;
    for (_measurement_bpf1_hpf__i = 0; _measurement_bpf1_hpf__i < 1; _measurement_bpf1_hpf__i++) {
        _measurement_bpf1_hpf__states[_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x401e, 0.0f);
    X_UnInt32 _solarhouse1_inverter_bpf_hpf__i;
    for (_solarhouse1_inverter_bpf_hpf__i = 0; _solarhouse1_inverter_bpf_hpf__i < 1; _solarhouse1_inverter_bpf_hpf__i++) {
        _solarhouse1_inverter_bpf_hpf__states[_solarhouse1_inverter_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_inverter_bpf1_hpf__i;
    for (_solarhouse1_inverter_bpf1_hpf__i = 0; _solarhouse1_inverter_bpf1_hpf__i < 1; _solarhouse1_inverter_bpf1_hpf__i++) {
        _solarhouse1_inverter_bpf1_hpf__states[_solarhouse1_inverter_bpf1_hpf__i] = 0;
    }
    _solarhouse1_inverter_controller_c_function3__k = 0;
    _solarhouse1_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse1_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse1_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse1_measurement_bpf_hpf__i;
    for (_solarhouse1_measurement_bpf_hpf__i = 0; _solarhouse1_measurement_bpf_hpf__i < 1; _solarhouse1_measurement_bpf_hpf__i++) {
        _solarhouse1_measurement_bpf_hpf__states[_solarhouse1_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf1_hpf__i;
    for (_solarhouse1_measurement_bpf1_hpf__i = 0; _solarhouse1_measurement_bpf1_hpf__i < 1; _solarhouse1_measurement_bpf1_hpf__i++) {
        _solarhouse1_measurement_bpf1_hpf__states[_solarhouse1_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x4034, 0.0f);
    _solarhouse1_modbus_dynamic_table_clock1__state = 0.0f;
    HIL_OutAO(0x4035, 0.0f);
    _solarhouse1_modbus_rate_transition1_output__out =  0.0;
    _solarhouse1_rate_transition1_output__out =  0.0;
    X_UnInt32 _solarhouse2_inverter_bpf_hpf__i;
    for (_solarhouse2_inverter_bpf_hpf__i = 0; _solarhouse2_inverter_bpf_hpf__i < 1; _solarhouse2_inverter_bpf_hpf__i++) {
        _solarhouse2_inverter_bpf_hpf__states[_solarhouse2_inverter_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_inverter_bpf1_hpf__i;
    for (_solarhouse2_inverter_bpf1_hpf__i = 0; _solarhouse2_inverter_bpf1_hpf__i < 1; _solarhouse2_inverter_bpf1_hpf__i++) {
        _solarhouse2_inverter_bpf1_hpf__states[_solarhouse2_inverter_bpf1_hpf__i] = 0;
    }
    _solarhouse2_inverter_controller_c_function3__k = 0;
    _solarhouse2_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse2_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse2_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse2_measurement_bpf_hpf__i;
    for (_solarhouse2_measurement_bpf_hpf__i = 0; _solarhouse2_measurement_bpf_hpf__i < 1; _solarhouse2_measurement_bpf_hpf__i++) {
        _solarhouse2_measurement_bpf_hpf__states[_solarhouse2_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf1_hpf__i;
    for (_solarhouse2_measurement_bpf1_hpf__i = 0; _solarhouse2_measurement_bpf1_hpf__i < 1; _solarhouse2_measurement_bpf1_hpf__i++) {
        _solarhouse2_measurement_bpf1_hpf__states[_solarhouse2_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x404d, 0.0f);
    _solarhouse2_modbus_dynamic_table_clock1__state = 0.0f;
    HIL_OutAO(0x404e, 0.0f);
    _solarhouse2_modbus_rate_transition1_output__out =  0.0;
    _solarhouse2_rate_transition1_output__out =  0.0;
    X_UnInt32 _solarhouse3_inverter_bpf_hpf__i;
    for (_solarhouse3_inverter_bpf_hpf__i = 0; _solarhouse3_inverter_bpf_hpf__i < 1; _solarhouse3_inverter_bpf_hpf__i++) {
        _solarhouse3_inverter_bpf_hpf__states[_solarhouse3_inverter_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_inverter_bpf1_hpf__i;
    for (_solarhouse3_inverter_bpf1_hpf__i = 0; _solarhouse3_inverter_bpf1_hpf__i < 1; _solarhouse3_inverter_bpf1_hpf__i++) {
        _solarhouse3_inverter_bpf1_hpf__states[_solarhouse3_inverter_bpf1_hpf__i] = 0;
    }
    _solarhouse3_inverter_controller_c_function3__k = 0;
    _solarhouse3_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse3_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse3_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse3_measurement_bpf_hpf__i;
    for (_solarhouse3_measurement_bpf_hpf__i = 0; _solarhouse3_measurement_bpf_hpf__i < 1; _solarhouse3_measurement_bpf_hpf__i++) {
        _solarhouse3_measurement_bpf_hpf__states[_solarhouse3_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf1_hpf__i;
    for (_solarhouse3_measurement_bpf1_hpf__i = 0; _solarhouse3_measurement_bpf1_hpf__i < 1; _solarhouse3_measurement_bpf1_hpf__i++) {
        _solarhouse3_measurement_bpf1_hpf__states[_solarhouse3_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x4066, 0.0f);
    _solarhouse3_modbus_dynamic_table_clock1__state = 0.0f;
    HIL_OutAO(0x4067, 0.0f);
    _solarhouse3_modbus_rate_transition1_output__out =  0.0;
    _solarhouse3_rate_transition1_output__out =  0.0;
    X_UnInt32 _solarhouse4_inverter_bpf_hpf__i;
    for (_solarhouse4_inverter_bpf_hpf__i = 0; _solarhouse4_inverter_bpf_hpf__i < 1; _solarhouse4_inverter_bpf_hpf__i++) {
        _solarhouse4_inverter_bpf_hpf__states[_solarhouse4_inverter_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_inverter_bpf1_hpf__i;
    for (_solarhouse4_inverter_bpf1_hpf__i = 0; _solarhouse4_inverter_bpf1_hpf__i < 1; _solarhouse4_inverter_bpf1_hpf__i++) {
        _solarhouse4_inverter_bpf1_hpf__states[_solarhouse4_inverter_bpf1_hpf__i] = 0;
    }
    _solarhouse4_inverter_controller_c_function3__k = 0;
    _solarhouse4_inverter_controller_c_function3__t = 1;
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i] = 0;
    }
    _solarhouse4_inverter_controller_rate_transition8_output__out = (X_Int32) 0.0;
    _solarhouse4_inverter_controller_rate_transition9_output__out =  0.0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S = 0;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    X_UnInt32 _solarhouse4_measurement_bpf_hpf__i;
    for (_solarhouse4_measurement_bpf_hpf__i = 0; _solarhouse4_measurement_bpf_hpf__i < 1; _solarhouse4_measurement_bpf_hpf__i++) {
        _solarhouse4_measurement_bpf_hpf__states[_solarhouse4_measurement_bpf_hpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf1_hpf__i;
    for (_solarhouse4_measurement_bpf1_hpf__i = 0; _solarhouse4_measurement_bpf1_hpf__i < 1; _solarhouse4_measurement_bpf1_hpf__i++) {
        _solarhouse4_measurement_bpf1_hpf__states[_solarhouse4_measurement_bpf1_hpf__i] = 0;
    }
    HIL_OutAO(0x407f, 0.0f);
    _solarhouse4_modbus_dynamic_table_clock1__state = 0.0f;
    HIL_OutAO(0x4080, 0.0f);
    _solarhouse4_modbus_rate_transition1_output__out =  0.0;
    _solarhouse4_rate_transition1_output__out =  0.0;
    HIL_OutAO(0x4011, 0.0f);
    X_UnInt32 _ess_inverter_bpf_lpf__i;
    for (_ess_inverter_bpf_lpf__i = 0; _ess_inverter_bpf_lpf__i < 1; _ess_inverter_bpf_lpf__i++) {
        _ess_inverter_bpf_lpf__states[_ess_inverter_bpf_lpf__i] = 0;
    }
    X_UnInt32 _ess_inverter_bpf1_lpf__i;
    for (_ess_inverter_bpf1_lpf__i = 0; _ess_inverter_bpf1_lpf__i < 1; _ess_inverter_bpf1_lpf__i++) {
        _ess_inverter_bpf1_lpf__states[_ess_inverter_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4014, 0.0f);
    HIL_OutAO(0x4016, 0.0f);
    HIL_OutAO(0x4019, 0.0f);
    X_UnInt32 _ess_inverter_lpf_dc__i;
    for (_ess_inverter_lpf_dc__i = 0; _ess_inverter_lpf_dc__i < 1; _ess_inverter_lpf_dc__i++) {
        _ess_inverter_lpf_dc__states[_ess_inverter_lpf_dc__i] = 0;
    }
    HIL_OutAO(0x401c, 0.0f);
    HIL_OutAO(0x401d, 0.0f);
    HIL_OutAO(0x401a, 0.0f);
    HIL_OutAO(0x401b, 0.0f);
    HIL_OutAO(0x4015, 0.0f);
    _ess_c_function3__t = 0;
    _ess_c_function3__time = 1;
    _ess_c_function3__reg = _ess_c_function3__RegD;
    X_UnInt32 _measurement_bpf_lpf__i;
    for (_measurement_bpf_lpf__i = 0; _measurement_bpf_lpf__i < 1; _measurement_bpf_lpf__i++) {
        _measurement_bpf_lpf__states[_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _measurement_bpf1_lpf__i;
    for (_measurement_bpf1_lpf__i = 0; _measurement_bpf1_lpf__i < 1; _measurement_bpf1_lpf__i++) {
        _measurement_bpf1_lpf__states[_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x402b, 0.0f);
    X_UnInt32 _solarhouse1_inverter_bpf_lpf__i;
    for (_solarhouse1_inverter_bpf_lpf__i = 0; _solarhouse1_inverter_bpf_lpf__i < 1; _solarhouse1_inverter_bpf_lpf__i++) {
        _solarhouse1_inverter_bpf_lpf__states[_solarhouse1_inverter_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_inverter_bpf1_lpf__i;
    for (_solarhouse1_inverter_bpf1_lpf__i = 0; _solarhouse1_inverter_bpf1_lpf__i < 1; _solarhouse1_inverter_bpf1_lpf__i++) {
        _solarhouse1_inverter_bpf1_lpf__states[_solarhouse1_inverter_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x402e, 0.0f);
    HIL_OutAO(0x4030, 0.0f);
    HIL_OutAO(0x4033, 0.0f);
    X_UnInt32 _solarhouse1_inverter_lpf_dc__i;
    for (_solarhouse1_inverter_lpf_dc__i = 0; _solarhouse1_inverter_lpf_dc__i < 1; _solarhouse1_inverter_lpf_dc__i++) {
        _solarhouse1_inverter_lpf_dc__states[_solarhouse1_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf_lpf__i;
    for (_solarhouse1_measurement_bpf_lpf__i = 0; _solarhouse1_measurement_bpf_lpf__i < 1; _solarhouse1_measurement_bpf_lpf__i++) {
        _solarhouse1_measurement_bpf_lpf__states[_solarhouse1_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_bpf1_lpf__i;
    for (_solarhouse1_measurement_bpf1_lpf__i = 0; _solarhouse1_measurement_bpf1_lpf__i < 1; _solarhouse1_measurement_bpf1_lpf__i++) {
        _solarhouse1_measurement_bpf1_lpf__states[_solarhouse1_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4036, 0.0f);
    HIL_OutAO(0x4037, 0.0f);
    HIL_OutAO(0x402f, 0.0f);
    HIL_OutAO(0x4044, 0.0f);
    X_UnInt32 _solarhouse2_inverter_bpf_lpf__i;
    for (_solarhouse2_inverter_bpf_lpf__i = 0; _solarhouse2_inverter_bpf_lpf__i < 1; _solarhouse2_inverter_bpf_lpf__i++) {
        _solarhouse2_inverter_bpf_lpf__states[_solarhouse2_inverter_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_inverter_bpf1_lpf__i;
    for (_solarhouse2_inverter_bpf1_lpf__i = 0; _solarhouse2_inverter_bpf1_lpf__i < 1; _solarhouse2_inverter_bpf1_lpf__i++) {
        _solarhouse2_inverter_bpf1_lpf__states[_solarhouse2_inverter_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4047, 0.0f);
    HIL_OutAO(0x4049, 0.0f);
    HIL_OutAO(0x404c, 0.0f);
    X_UnInt32 _solarhouse2_inverter_lpf_dc__i;
    for (_solarhouse2_inverter_lpf_dc__i = 0; _solarhouse2_inverter_lpf_dc__i < 1; _solarhouse2_inverter_lpf_dc__i++) {
        _solarhouse2_inverter_lpf_dc__states[_solarhouse2_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf_lpf__i;
    for (_solarhouse2_measurement_bpf_lpf__i = 0; _solarhouse2_measurement_bpf_lpf__i < 1; _solarhouse2_measurement_bpf_lpf__i++) {
        _solarhouse2_measurement_bpf_lpf__states[_solarhouse2_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_bpf1_lpf__i;
    for (_solarhouse2_measurement_bpf1_lpf__i = 0; _solarhouse2_measurement_bpf1_lpf__i < 1; _solarhouse2_measurement_bpf1_lpf__i++) {
        _solarhouse2_measurement_bpf1_lpf__states[_solarhouse2_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x404f, 0.0f);
    HIL_OutAO(0x4050, 0.0f);
    HIL_OutAO(0x4048, 0.0f);
    HIL_OutAO(0x405d, 0.0f);
    X_UnInt32 _solarhouse3_inverter_bpf_lpf__i;
    for (_solarhouse3_inverter_bpf_lpf__i = 0; _solarhouse3_inverter_bpf_lpf__i < 1; _solarhouse3_inverter_bpf_lpf__i++) {
        _solarhouse3_inverter_bpf_lpf__states[_solarhouse3_inverter_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_inverter_bpf1_lpf__i;
    for (_solarhouse3_inverter_bpf1_lpf__i = 0; _solarhouse3_inverter_bpf1_lpf__i < 1; _solarhouse3_inverter_bpf1_lpf__i++) {
        _solarhouse3_inverter_bpf1_lpf__states[_solarhouse3_inverter_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4060, 0.0f);
    HIL_OutAO(0x4062, 0.0f);
    HIL_OutAO(0x4065, 0.0f);
    X_UnInt32 _solarhouse3_inverter_lpf_dc__i;
    for (_solarhouse3_inverter_lpf_dc__i = 0; _solarhouse3_inverter_lpf_dc__i < 1; _solarhouse3_inverter_lpf_dc__i++) {
        _solarhouse3_inverter_lpf_dc__states[_solarhouse3_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf_lpf__i;
    for (_solarhouse3_measurement_bpf_lpf__i = 0; _solarhouse3_measurement_bpf_lpf__i < 1; _solarhouse3_measurement_bpf_lpf__i++) {
        _solarhouse3_measurement_bpf_lpf__states[_solarhouse3_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_bpf1_lpf__i;
    for (_solarhouse3_measurement_bpf1_lpf__i = 0; _solarhouse3_measurement_bpf1_lpf__i < 1; _solarhouse3_measurement_bpf1_lpf__i++) {
        _solarhouse3_measurement_bpf1_lpf__states[_solarhouse3_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4068, 0.0f);
    HIL_OutAO(0x4069, 0.0f);
    HIL_OutAO(0x4061, 0.0f);
    HIL_OutAO(0x4076, 0.0f);
    X_UnInt32 _solarhouse4_inverter_bpf_lpf__i;
    for (_solarhouse4_inverter_bpf_lpf__i = 0; _solarhouse4_inverter_bpf_lpf__i < 1; _solarhouse4_inverter_bpf_lpf__i++) {
        _solarhouse4_inverter_bpf_lpf__states[_solarhouse4_inverter_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_inverter_bpf1_lpf__i;
    for (_solarhouse4_inverter_bpf1_lpf__i = 0; _solarhouse4_inverter_bpf1_lpf__i < 1; _solarhouse4_inverter_bpf1_lpf__i++) {
        _solarhouse4_inverter_bpf1_lpf__states[_solarhouse4_inverter_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4079, 0.0f);
    HIL_OutAO(0x407b, 0.0f);
    HIL_OutAO(0x407e, 0.0f);
    X_UnInt32 _solarhouse4_inverter_lpf_dc__i;
    for (_solarhouse4_inverter_lpf_dc__i = 0; _solarhouse4_inverter_lpf_dc__i < 1; _solarhouse4_inverter_lpf_dc__i++) {
        _solarhouse4_inverter_lpf_dc__states[_solarhouse4_inverter_lpf_dc__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf_lpf__i;
    for (_solarhouse4_measurement_bpf_lpf__i = 0; _solarhouse4_measurement_bpf_lpf__i < 1; _solarhouse4_measurement_bpf_lpf__i++) {
        _solarhouse4_measurement_bpf_lpf__states[_solarhouse4_measurement_bpf_lpf__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_bpf1_lpf__i;
    for (_solarhouse4_measurement_bpf1_lpf__i = 0; _solarhouse4_measurement_bpf1_lpf__i < 1; _solarhouse4_measurement_bpf1_lpf__i++) {
        _solarhouse4_measurement_bpf1_lpf__states[_solarhouse4_measurement_bpf1_lpf__i] = 0;
    }
    HIL_OutAO(0x4081, 0.0f);
    HIL_OutAO(0x4082, 0.0f);
    HIL_OutAO(0x407a, 0.0f);
    X_UnInt32 _ess_inverter_controller_hilbert_transform__i;
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4018, 0.0f);
    X_UnInt32 _ess_inverter_controller_hilbert_transform1__i;
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4017, 0.0f);
    // write initial SG parameters
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__i;
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__j;
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < 1; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        HIL_OutFloat(0x400200 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0.0f);  // set gain to 0 (initial value)
        HIL_OutInt32(0x400180 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0);      // set offset to 0 (initial value)
        HIL_OutInt32(0x400000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 1);
        HIL_OutInt32(0x400280 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 0);
        HIL_OutFloat(0x400100 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 2.0f);
        HIL_OutInt32(0x400300 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], 1);   // enable wave update
        _grid_vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i];
    }
    // calculate and write waveform data
    _grid_vs_tdf_sg_ctrl_sine1__k = 2.0f * M_PI / _grid_vs_tdf_sg_ctrl_sine1__no_of_points;
    // oscillator based sine implementation
    // oscillator init
    _grid_vs_tdf_sg_ctrl_sine1__xn_1 = sin(0.0f);
    _grid_vs_tdf_sg_ctrl_sine1__yn_1 = cos(0.0f);
    // oscillator
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < _grid_vs_tdf_sg_ctrl_sine1__no_of_points; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        _grid_vs_tdf_sg_ctrl_sine1__xn = _grid_vs_tdf_sg_ctrl_sine1__xn_1 + _grid_vs_tdf_sg_ctrl_sine1__k * _grid_vs_tdf_sg_ctrl_sine1__yn_1;
        _grid_vs_tdf_sg_ctrl_sine1__yn = _grid_vs_tdf_sg_ctrl_sine1__yn_1 - _grid_vs_tdf_sg_ctrl_sine1__k * _grid_vs_tdf_sg_ctrl_sine1__xn;
        // write the same data to all the channels
        for (_grid_vs_tdf_sg_ctrl_sine1__j = 0; _grid_vs_tdf_sg_ctrl_sine1__j < 1; _grid_vs_tdf_sg_ctrl_sine1__j++) {
            HIL_OutFloat(0x600000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__j] * 0x800 + _grid_vs_tdf_sg_ctrl_sine1__i, (float) _grid_vs_tdf_sg_ctrl_sine1__xn_1);
        }
        _grid_vs_tdf_sg_ctrl_sine1__xn_1 = _grid_vs_tdf_sg_ctrl_sine1__xn;
        _grid_vs_tdf_sg_ctrl_sine1__yn_1 = _grid_vs_tdf_sg_ctrl_sine1__yn;
    }
    HIL_OutInt32(0x400080, _grid_vs_tdf_sg_ctrl_sine1__sg_update_value);  // update both parameters and waveforms on all channels
    X_UnInt32 _measurement_hilbert_transform1__i;
    for (_measurement_hilbert_transform1__i = 0; _measurement_hilbert_transform1__i < 1; _measurement_hilbert_transform1__i++) {
        _measurement_hilbert_transform1__states[_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _measurement_hilbert_transform__i;
    for (_measurement_hilbert_transform__i = 0; _measurement_hilbert_transform__i < 1; _measurement_hilbert_transform__i++) {
        _measurement_hilbert_transform__states[_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform__i;
    for (_solarhouse1_inverter_controller_hilbert_transform__i = 0; _solarhouse1_inverter_controller_hilbert_transform__i < 1; _solarhouse1_inverter_controller_hilbert_transform__i++) {
        _solarhouse1_inverter_controller_hilbert_transform__states[_solarhouse1_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4032, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform1__i;
    for (_solarhouse1_inverter_controller_hilbert_transform1__i = 0; _solarhouse1_inverter_controller_hilbert_transform1__i < 1; _solarhouse1_inverter_controller_hilbert_transform1__i++) {
        _solarhouse1_inverter_controller_hilbert_transform1__states[_solarhouse1_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4031, 0.0f);
    X_UnInt32 _solarhouse1_measurement_hilbert_transform1__i;
    for (_solarhouse1_measurement_hilbert_transform1__i = 0; _solarhouse1_measurement_hilbert_transform1__i < 1; _solarhouse1_measurement_hilbert_transform1__i++) {
        _solarhouse1_measurement_hilbert_transform1__states[_solarhouse1_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_hilbert_transform__i;
    for (_solarhouse1_measurement_hilbert_transform__i = 0; _solarhouse1_measurement_hilbert_transform__i < 1; _solarhouse1_measurement_hilbert_transform__i++) {
        _solarhouse1_measurement_hilbert_transform__states[_solarhouse1_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform__i;
    for (_solarhouse2_inverter_controller_hilbert_transform__i = 0; _solarhouse2_inverter_controller_hilbert_transform__i < 1; _solarhouse2_inverter_controller_hilbert_transform__i++) {
        _solarhouse2_inverter_controller_hilbert_transform__states[_solarhouse2_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x404b, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform1__i;
    for (_solarhouse2_inverter_controller_hilbert_transform1__i = 0; _solarhouse2_inverter_controller_hilbert_transform1__i < 1; _solarhouse2_inverter_controller_hilbert_transform1__i++) {
        _solarhouse2_inverter_controller_hilbert_transform1__states[_solarhouse2_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x404a, 0.0f);
    X_UnInt32 _solarhouse2_measurement_hilbert_transform1__i;
    for (_solarhouse2_measurement_hilbert_transform1__i = 0; _solarhouse2_measurement_hilbert_transform1__i < 1; _solarhouse2_measurement_hilbert_transform1__i++) {
        _solarhouse2_measurement_hilbert_transform1__states[_solarhouse2_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_hilbert_transform__i;
    for (_solarhouse2_measurement_hilbert_transform__i = 0; _solarhouse2_measurement_hilbert_transform__i < 1; _solarhouse2_measurement_hilbert_transform__i++) {
        _solarhouse2_measurement_hilbert_transform__states[_solarhouse2_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform__i;
    for (_solarhouse3_inverter_controller_hilbert_transform__i = 0; _solarhouse3_inverter_controller_hilbert_transform__i < 1; _solarhouse3_inverter_controller_hilbert_transform__i++) {
        _solarhouse3_inverter_controller_hilbert_transform__states[_solarhouse3_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x4064, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform1__i;
    for (_solarhouse3_inverter_controller_hilbert_transform1__i = 0; _solarhouse3_inverter_controller_hilbert_transform1__i < 1; _solarhouse3_inverter_controller_hilbert_transform1__i++) {
        _solarhouse3_inverter_controller_hilbert_transform1__states[_solarhouse3_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x4063, 0.0f);
    X_UnInt32 _solarhouse3_measurement_hilbert_transform1__i;
    for (_solarhouse3_measurement_hilbert_transform1__i = 0; _solarhouse3_measurement_hilbert_transform1__i < 1; _solarhouse3_measurement_hilbert_transform1__i++) {
        _solarhouse3_measurement_hilbert_transform1__states[_solarhouse3_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_hilbert_transform__i;
    for (_solarhouse3_measurement_hilbert_transform__i = 0; _solarhouse3_measurement_hilbert_transform__i < 1; _solarhouse3_measurement_hilbert_transform__i++) {
        _solarhouse3_measurement_hilbert_transform__states[_solarhouse3_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform__i;
    for (_solarhouse4_inverter_controller_hilbert_transform__i = 0; _solarhouse4_inverter_controller_hilbert_transform__i < 1; _solarhouse4_inverter_controller_hilbert_transform__i++) {
        _solarhouse4_inverter_controller_hilbert_transform__states[_solarhouse4_inverter_controller_hilbert_transform__i] = 0;
    }
    HIL_OutAO(0x407d, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform1__i;
    for (_solarhouse4_inverter_controller_hilbert_transform1__i = 0; _solarhouse4_inverter_controller_hilbert_transform1__i < 1; _solarhouse4_inverter_controller_hilbert_transform1__i++) {
        _solarhouse4_inverter_controller_hilbert_transform1__states[_solarhouse4_inverter_controller_hilbert_transform1__i] = 0;
    }
    HIL_OutAO(0x407c, 0.0f);
    X_UnInt32 _solarhouse4_measurement_hilbert_transform1__i;
    for (_solarhouse4_measurement_hilbert_transform1__i = 0; _solarhouse4_measurement_hilbert_transform1__i < 1; _solarhouse4_measurement_hilbert_transform1__i++) {
        _solarhouse4_measurement_hilbert_transform1__states[_solarhouse4_measurement_hilbert_transform1__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_hilbert_transform__i;
    for (_solarhouse4_measurement_hilbert_transform__i = 0; _solarhouse4_measurement_hilbert_transform__i < 1; _solarhouse4_measurement_hilbert_transform__i++) {
        _solarhouse4_measurement_hilbert_transform__states[_solarhouse4_measurement_hilbert_transform__i] = 0;
    }
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4012, 0.0f);
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4013, 0.0f);
    HIL_OutAO(0x4005, 0.0f);
    HIL_OutAO(0x4006, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x402c, 0.0f);
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x402d, 0.0f);
    HIL_OutAO(0x401f, 0.0f);
    HIL_OutAO(0x4020, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4045, 0.0f);
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4046, 0.0f);
    HIL_OutAO(0x4038, 0.0f);
    HIL_OutAO(0x4039, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x405e, 0.0f);
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x405f, 0.0f);
    HIL_OutAO(0x4051, 0.0f);
    HIL_OutAO(0x4052, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i] = 0;
    }
    HIL_OutAO(0x4077, 0.0f);
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i] = 0;
    }
    HIL_OutAO(0x4078, 0.0f);
    HIL_OutAO(0x406a, 0.0f);
    HIL_OutAO(0x406b, 0.0f);
    X_UnInt32 _measurement_lpf_p__i;
    for (_measurement_lpf_p__i = 0; _measurement_lpf_p__i < 1; _measurement_lpf_p__i++) {
        _measurement_lpf_p__states[_measurement_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse1_measurement_lpf_p__i;
    for (_solarhouse1_measurement_lpf_p__i = 0; _solarhouse1_measurement_lpf_p__i < 1; _solarhouse1_measurement_lpf_p__i++) {
        _solarhouse1_measurement_lpf_p__states[_solarhouse1_measurement_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse2_measurement_lpf_p__i;
    for (_solarhouse2_measurement_lpf_p__i = 0; _solarhouse2_measurement_lpf_p__i < 1; _solarhouse2_measurement_lpf_p__i++) {
        _solarhouse2_measurement_lpf_p__states[_solarhouse2_measurement_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse3_measurement_lpf_p__i;
    for (_solarhouse3_measurement_lpf_p__i = 0; _solarhouse3_measurement_lpf_p__i < 1; _solarhouse3_measurement_lpf_p__i++) {
        _solarhouse3_measurement_lpf_p__states[_solarhouse3_measurement_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse4_measurement_lpf_p__i;
    for (_solarhouse4_measurement_lpf_p__i = 0; _solarhouse4_measurement_lpf_p__i < 1; _solarhouse4_measurement_lpf_p__i++) {
        _solarhouse4_measurement_lpf_p__states[_solarhouse4_measurement_lpf_p__i] = 0;
    }
    HIL_OutAO(0x4007, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_p__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _ess_inverter_power_meas_power_meas_dqpu_lpf_q__states[_ess_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    HIL_OutAO(0x4021, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    HIL_OutAO(0x403a, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    HIL_OutAO(0x4053, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    HIL_OutAO(0x406c, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0.0f;
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i] = 0;
    }
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i] = 0;
    }
    HIL_OutAO(0x400e, 0.0f);
    HIL_OutAO(0x4028, 0.0f);
    HIL_OutAO(0x4041, 0.0f);
    HIL_OutAO(0x405a, 0.0f);
    HIL_OutAO(0x4073, 0.0f);
    HIL_OutAO(0x4009, 0.0f);
    HIL_OutAO(0x4008, 0.0f);
    HIL_OutAO(0x4023, 0.0f);
    HIL_OutAO(0x4022, 0.0f);
    HIL_OutAO(0x403c, 0.0f);
    HIL_OutAO(0x403b, 0.0f);
    HIL_OutAO(0x4055, 0.0f);
    HIL_OutAO(0x4054, 0.0f);
    HIL_OutAO(0x406e, 0.0f);
    HIL_OutAO(0x406d, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x400d, 0.0f);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x400c, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4027, 0.0f);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4026, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4040, 0.0f);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x403f, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4059, 0.0f);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4058, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state =  0.0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__filter_state =  0.0;
    HIL_OutAO(0x4072, 0.0f);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state =  0.0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__filter_state =  0.0;
    HIL_OutAO(0x4071, 0.0f);
    HIL_OutAO(0x4010, 0.0f);
    HIL_OutAO(0x400f, 0.0f);
    HIL_OutAO(0x402a, 0.0f);
    HIL_OutAO(0x4029, 0.0f);
    HIL_OutAO(0x4043, 0.0f);
    HIL_OutAO(0x4042, 0.0f);
    HIL_OutAO(0x405c, 0.0f);
    HIL_OutAO(0x405b, 0.0f);
    HIL_OutAO(0x4075, 0.0f);
    HIL_OutAO(0x4074, 0.0f);
    HIL_OutAO(0x400b, 0.0f);
    HIL_OutAO(0x400a, 0.0f);
    HIL_OutAO(0x4025, 0.0f);
    HIL_OutAO(0x4024, 0.0f);
    HIL_OutAO(0x403e, 0.0f);
    HIL_OutAO(0x403d, 0.0f);
    HIL_OutAO(0x4057, 0.0f);
    HIL_OutAO(0x4056, 0.0f);
    HIL_OutAO(0x4070, 0.0f);
    HIL_OutAO(0x406f, 0.0f);
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
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask = 12;
    HIL_OutInt32(0x2000080 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask = 48;
    HIL_OutInt32(0x2000080 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask = 192;
    HIL_OutInt32(0x2000080 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask = 768;
    HIL_OutInt32(0x2000080 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 250);
    HIL_OutInt32(0x2000080 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);// divide by 2 is already implemented in hw
    HIL_OutInt32(0x20000c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 250);
    HIL_OutInt32(0x20001c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000200 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x20001c0 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 2500);
    HIL_OutInt32(0x2000200 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000240 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0);
    HIL_OutInt32(0x2000240 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0);
    HIL_OutInt32(0x2000300 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 1);
    HIL_OutInt32(0x2000300 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 1);
    HIL_OutInt32(0x2000140, _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.init.block.end
}

void ReInit_sp_scope_user_sp_cpu0_dev0() {
    // initialise SP Scope buffer pointer
}

void load_fmi_libraries_user_sp_cpu0_dev0(void) {
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

void TimerCounterHandler_0_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_0");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Dynamic Table1.Clock1
    _ess_dynamic_table1_clock1__out = _ess_dynamic_table1_clock1__state;
    // Generated from the component: ESS.Modbus.Bus Split1
    _ess_modbus_bus_split1__out = _ess_modbus_modbus_device__config__comp_holding_in_out__out[0];
    _ess_modbus_bus_split1__out1 = _ess_modbus_modbus_device__config__comp_holding_in_out__out[1];
    // Generated from the component: ESS.Modbus.C_u11
    // Generated from the component: ESS.Modbus.C_u12
    // Generated from the component: ESS.Modbus.C_u13
    // Generated from the component: ESS.Modbus.Termination1
    // Generated from the component: Grid.Constant1
    // Generated from the component: Grid.Constant2
    // Generated from the component: Grid.Constant3
    // Generated from the component: SolarHouse1.Modbus.Bus Split1
    _solarhouse1_modbus_bus_split1__out = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[0];
    _solarhouse1_modbus_bus_split1__out1 = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse1.Modbus.C_u11
    // Generated from the component: SolarHouse1.Modbus.C_u12
    // Generated from the component: SolarHouse1.Modbus.C_u13
    // Generated from the component: SolarHouse1.Modbus.Dynamic Table.Clock1
    _solarhouse1_modbus_dynamic_table_clock1__out = _solarhouse1_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse1.Modbus.Termination1
    // Generated from the component: SolarHouse2.Modbus.Bus Split1
    _solarhouse2_modbus_bus_split1__out = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[0];
    _solarhouse2_modbus_bus_split1__out1 = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse2.Modbus.C_u11
    // Generated from the component: SolarHouse2.Modbus.C_u12
    // Generated from the component: SolarHouse2.Modbus.C_u13
    // Generated from the component: SolarHouse2.Modbus.Dynamic Table.Clock1
    _solarhouse2_modbus_dynamic_table_clock1__out = _solarhouse2_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse2.Modbus.Termination1
    // Generated from the component: SolarHouse3.Modbus.Bus Split1
    _solarhouse3_modbus_bus_split1__out = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[0];
    _solarhouse3_modbus_bus_split1__out1 = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse3.Modbus.C_u11
    // Generated from the component: SolarHouse3.Modbus.C_u12
    // Generated from the component: SolarHouse3.Modbus.C_u13
    // Generated from the component: SolarHouse3.Modbus.Dynamic Table.Clock1
    _solarhouse3_modbus_dynamic_table_clock1__out = _solarhouse3_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse3.Modbus.Termination1
    // Generated from the component: SolarHouse4.Modbus.Bus Split1
    _solarhouse4_modbus_bus_split1__out = _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[0];
    _solarhouse4_modbus_bus_split1__out1 = _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse4.Modbus.C_u11
    // Generated from the component: SolarHouse4.Modbus.C_u12
    // Generated from the component: SolarHouse4.Modbus.C_u13
    // Generated from the component: SolarHouse4.Modbus.Dynamic Table.Clock1
    _solarhouse4_modbus_dynamic_table_clock1__out = _solarhouse4_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse4.Modbus.Termination1
    // Generated from the component: ESS.Dynamic Table1.1D look-up table1
    if(_ess_dynamic_table1_clock1__out <= _ess_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _ess_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_ess_dynamic_table1_clock1__out < _ess_dynamic_table1_1d_look_up_table1__lut_addrs[1210]) {
        _ess_dynamic_table1_1d_look_up_table1__curAddr = 1210 >> 1;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _ess_dynamic_table1_1d_look_up_table1__rightIndex = 1210;
        while (1 < _ess_dynamic_table1_1d_look_up_table1__rightIndex - _ess_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_ess_dynamic_table1_clock1__out < _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__curAddr]) {
                _ess_dynamic_table1_1d_look_up_table1__rightIndex = _ess_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _ess_dynamic_table1_1d_look_up_table1__leftIndex = _ess_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _ess_dynamic_table1_1d_look_up_table1__curAddr = (_ess_dynamic_table1_1d_look_up_table1__leftIndex + _ess_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _ess_dynamic_table1_1d_look_up_table1__fraction = (_ess_dynamic_table1_clock1__out - _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _ess_dynamic_table1_1d_look_up_table1__lut_addrs[_ess_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _ess_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _ess_dynamic_table1_1d_look_up_table1__leftIndex = 1209;
    }
    _ess_dynamic_table1_1d_look_up_table1__value = (_ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex])
            * _ess_dynamic_table1_1d_look_up_table1__fraction + _ess_dynamic_table1_1d_look_up_table1__lut_table[_ess_dynamic_table1_1d_look_up_table1__leftIndex];
    // Generated from the component: ESS.Pref_ed
    HIL_OutAO(0x401c, (float)_ess_modbus_bus_split1__out);
    // Generated from the component: ESS.Pref_reg
    HIL_OutAO(0x401d, (float)_ess_modbus_bus_split1__out1);
    // Generated from the component: ESS.Sum1
    _ess_sum1__out = _ess_modbus_bus_split1__out1 + _ess_modbus_bus_split1__out;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _ess_modbus_modbus_device__config__comp_coil_in_out__out = 0;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _ess_modbus_modbus_device__config__comp_holding_in_out__out[0] = 0;
    _ess_modbus_modbus_device__config__comp_holding_in_out__out[1] = 0;
    // Generated from the component: ESS.Modbus.RegD_probe
    HIL_OutAO(0x401a, (float)_ess_modbus_rate_transition2_output__out);
    // Generated from the component: ESS.Modbus.Bus Join1
    _ess_modbus_bus_join1__out[0] = _ess_modbus_rate_transition2_output__out;
    _ess_modbus_bus_join1__out[1] = _ess_modbus_rate_transition3_output__out;
    // Generated from the component: ESS.Modbus.Time_probe
    HIL_OutAO(0x401b, (float)_ess_modbus_rate_transition3_output__out);
    // Generated from the component: Grid.Vs.Limit1
    _grid_vs_limit1__out = MAX(_grid_constant1__out, 0.0);
    // Generated from the component: Grid.Vs.Limit2
    _grid_vs_limit2__out = MIN(MAX(_grid_constant2__out, 0.1), 10000.0);
    // Generated from the component: SolarHouse1.Pref_ed
    HIL_OutAO(0x4036, (float)_solarhouse1_modbus_bus_split1__out);
    // Generated from the component: SolarHouse1.Pref_reg
    HIL_OutAO(0x4037, (float)_solarhouse1_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse1.Sum1
    _solarhouse1_sum1__out = _solarhouse1_modbus_bus_split1__out1 + _solarhouse1_modbus_bus_split1__out;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse1_modbus_modbus_device1__config1__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[0] = 0;
    _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse1.Modbus.Dynamic Table.1D look-up table1
    if(_solarhouse1_modbus_dynamic_table_clock1__out <= _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__fraction = 0.0;
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse1_modbus_dynamic_table_clock1__out < _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse1_modbus_dynamic_table_1d_look_up_table1__rightIndex - _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex) {
            if (_solarhouse1_modbus_dynamic_table_clock1__out < _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr]) {
                _solarhouse1_modbus_dynamic_table_1d_look_up_table1__rightIndex = _solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex = _solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            _solarhouse1_modbus_dynamic_table_1d_look_up_table1__curAddr = (_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex + _solarhouse1_modbus_dynamic_table_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__fraction = (_solarhouse1_modbus_dynamic_table_clock1__out - _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex])
                / (_solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__fraction = 1.0;
        _solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse1_modbus_dynamic_table_1d_look_up_table1__value = (_solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex])
            * _solarhouse1_modbus_dynamic_table_1d_look_up_table1__fraction + _solarhouse1_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse1_modbus_dynamic_table_1d_look_up_table1__leftIndex];
    // Generated from the component: SolarHouse2.Pref_ed
    HIL_OutAO(0x404f, (float)_solarhouse2_modbus_bus_split1__out);
    // Generated from the component: SolarHouse2.Pref_reg
    HIL_OutAO(0x4050, (float)_solarhouse2_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse2.Sum1
    _solarhouse2_sum1__out = _solarhouse2_modbus_bus_split1__out1 + _solarhouse2_modbus_bus_split1__out;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse2_modbus_modbus_device2__config2__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[0] = 0;
    _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse2.Modbus.Dynamic Table.1D look-up table1
    if(_solarhouse2_modbus_dynamic_table_clock1__out <= _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__fraction = 0.0;
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse2_modbus_dynamic_table_clock1__out < _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse2_modbus_dynamic_table_1d_look_up_table1__rightIndex - _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex) {
            if (_solarhouse2_modbus_dynamic_table_clock1__out < _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr]) {
                _solarhouse2_modbus_dynamic_table_1d_look_up_table1__rightIndex = _solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex = _solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            _solarhouse2_modbus_dynamic_table_1d_look_up_table1__curAddr = (_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex + _solarhouse2_modbus_dynamic_table_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__fraction = (_solarhouse2_modbus_dynamic_table_clock1__out - _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex])
                / (_solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__fraction = 1.0;
        _solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse2_modbus_dynamic_table_1d_look_up_table1__value = (_solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex])
            * _solarhouse2_modbus_dynamic_table_1d_look_up_table1__fraction + _solarhouse2_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse2_modbus_dynamic_table_1d_look_up_table1__leftIndex];
    // Generated from the component: SolarHouse3.Pref_ed
    HIL_OutAO(0x4068, (float)_solarhouse3_modbus_bus_split1__out);
    // Generated from the component: SolarHouse3.Pref_reg
    HIL_OutAO(0x4069, (float)_solarhouse3_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse3.Sum1
    _solarhouse3_sum1__out = _solarhouse3_modbus_bus_split1__out1 + _solarhouse3_modbus_bus_split1__out;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse3_modbus_modbus_device3__config3__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[0] = 0;
    _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse3.Modbus.Dynamic Table.1D look-up table1
    if(_solarhouse3_modbus_dynamic_table_clock1__out <= _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__fraction = 0.0;
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse3_modbus_dynamic_table_clock1__out < _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse3_modbus_dynamic_table_1d_look_up_table1__rightIndex - _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex) {
            if (_solarhouse3_modbus_dynamic_table_clock1__out < _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr]) {
                _solarhouse3_modbus_dynamic_table_1d_look_up_table1__rightIndex = _solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex = _solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            _solarhouse3_modbus_dynamic_table_1d_look_up_table1__curAddr = (_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex + _solarhouse3_modbus_dynamic_table_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__fraction = (_solarhouse3_modbus_dynamic_table_clock1__out - _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex])
                / (_solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__fraction = 1.0;
        _solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse3_modbus_dynamic_table_1d_look_up_table1__value = (_solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex])
            * _solarhouse3_modbus_dynamic_table_1d_look_up_table1__fraction + _solarhouse3_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse3_modbus_dynamic_table_1d_look_up_table1__leftIndex];
    // Generated from the component: SolarHouse4.Pref_ed
    HIL_OutAO(0x4081, (float)_solarhouse4_modbus_bus_split1__out);
    // Generated from the component: SolarHouse4.Pref_reg
    HIL_OutAO(0x4082, (float)_solarhouse4_modbus_bus_split1__out1);
    // Generated from the component: SolarHouse4.Sum1
    _solarhouse4_sum1__out = _solarhouse4_modbus_bus_split1__out1 + _solarhouse4_modbus_bus_split1__out;
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_coil_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse4_modbus_modbus_device4__config4__comp_coil_in_out__out = 0;
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_discrete_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_holding_in_out
    // Component not supported for this platform. Outputs are zeroed.
    _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[0] = 0;
    _solarhouse4_modbus_modbus_device4__config4__comp_holding_in_out__out[1] = 0;
    // Generated from the component: SolarHouse4.Modbus.Dynamic Table.1D look-up table1
    if(_solarhouse4_modbus_dynamic_table_clock1__out <= _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__fraction = 0.0;
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse4_modbus_dynamic_table_clock1__out < _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex = 0;
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse4_modbus_dynamic_table_1d_look_up_table1__rightIndex - _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex) {
            if (_solarhouse4_modbus_dynamic_table_clock1__out < _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr]) {
                _solarhouse4_modbus_dynamic_table_1d_look_up_table1__rightIndex = _solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex = _solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr;
            }
            _solarhouse4_modbus_dynamic_table_1d_look_up_table1__curAddr = (_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex + _solarhouse4_modbus_dynamic_table_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__fraction = (_solarhouse4_modbus_dynamic_table_clock1__out - _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex])
                / (_solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_addrs[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__fraction = 1.0;
        _solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse4_modbus_dynamic_table_1d_look_up_table1__value = (_solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex + 1] - _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex])
            * _solarhouse4_modbus_dynamic_table_1d_look_up_table1__fraction + _solarhouse4_modbus_dynamic_table_1d_look_up_table1__lut_table[_solarhouse4_modbus_dynamic_table_1d_look_up_table1__leftIndex];
    // Generated from the component: ESS.Rate Transition2.Input
    _ess_rate_transition2_output__out = _ess_dynamic_table1_1d_look_up_table1__value;
    // Generated from the component: ESS.Rate Transition1.Input
    _ess_rate_transition1_output__out = _ess_sum1__out;
    // Generated from the component: ESS.Modbus.ModBus Device (config).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: Grid.Vs.tdf_sg_ctrl_sine1
    // calculate and write SG parameters
    // calculate amplitude
    _grid_vs_tdf_sg_ctrl_sine1__gain = _grid_vs_limit1__out * M_SQRT2;
    // calculate period
    _grid_vs_tdf_sg_ctrl_sine1__period = 1.0f / _grid_vs_limit2__out;
    // calculate sample_cnt increment value
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real = _grid_vs_tdf_sg_ctrl_sine1__max_int40 / (_grid_vs_tdf_sg_ctrl_sine1__period / 4e-06);
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo = (X_UnInt32)(fmod(_grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real, _grid_vs_tdf_sg_ctrl_sine1__max_int32));
    _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi = (X_UnInt32)(_grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_real / _grid_vs_tdf_sg_ctrl_sine1__max_int32);
    _grid_vs_tdf_sg_ctrl_sine1__sg_update_value = 0;
    X_UnInt32 _grid_vs_tdf_sg_ctrl_sine1__i;
    for (_grid_vs_tdf_sg_ctrl_sine1__i = 0; _grid_vs_tdf_sg_ctrl_sine1__i < 1; _grid_vs_tdf_sg_ctrl_sine1__i++) {
        //calculate offset for each channel
        _grid_vs_tdf_sg_ctrl_sine1__shift = (double)(_grid_vs_tdf_sg_ctrl_sine1__i) * 0.0;
        _grid_vs_tdf_sg_ctrl_sine1__phase_pu = fmod((_grid_constant3__out / 360.0f + _grid_vs_tdf_sg_ctrl_sine1__shift / (2.0f * M_PI)), 1.0f);
        if (_grid_vs_tdf_sg_ctrl_sine1__phase_pu < 0.0f) {
            _grid_vs_tdf_sg_ctrl_sine1__phase_pu = _grid_vs_tdf_sg_ctrl_sine1__phase_pu + 1.0f;
        }
        _grid_vs_tdf_sg_ctrl_sine1__offset = (_grid_vs_tdf_sg_ctrl_sine1__max_int32 * _grid_vs_tdf_sg_ctrl_sine1__phase_pu);  // offset in SP
        _grid_vs_tdf_sg_ctrl_sine1__offset_uint = (X_UnInt32)_grid_vs_tdf_sg_ctrl_sine1__offset;  // offset in fp32
        // write parameters
        HIL_OutFloat(0x400200 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], (float) _grid_vs_tdf_sg_ctrl_sine1__gain);
        HIL_OutInt32(0x400180 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__offset_uint); // offset in fp32
        HIL_OutInt32(0x400000 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_lo);
        HIL_OutInt32(0x400280 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], _grid_vs_tdf_sg_ctrl_sine1__sample_cnt_inc_hi);
        HIL_OutFloat(0x400100 + _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i], (float) _grid_vs_tdf_sg_ctrl_sine1__no_of_points);
        _grid_vs_tdf_sg_ctrl_sine1__sg_update_value += 1 << _grid_vs_tdf_sg_ctrl_sine1__channels[_grid_vs_tdf_sg_ctrl_sine1__i];
    }
    HIL_OutInt32(0x400080, _grid_vs_tdf_sg_ctrl_sine1__sg_update_value);  // update SG parameters for all channels
    // Generated from the component: SolarHouse1.Rate Transition1.Input
    _solarhouse1_rate_transition1_output__out = _solarhouse1_sum1__out;
    // Generated from the component: SolarHouse1.Modbus.Bus Join1
    _solarhouse1_modbus_bus_join1__out[0] = _solarhouse1_modbus_rate_transition1_output__out;
    _solarhouse1_modbus_bus_join1__out[1] = _solarhouse1_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse2.Rate Transition1.Input
    _solarhouse2_rate_transition1_output__out = _solarhouse2_sum1__out;
    // Generated from the component: SolarHouse2.Modbus.Bus Join1
    _solarhouse2_modbus_bus_join1__out[0] = _solarhouse2_modbus_rate_transition1_output__out;
    _solarhouse2_modbus_bus_join1__out[1] = _solarhouse2_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse3.Rate Transition1.Input
    _solarhouse3_rate_transition1_output__out = _solarhouse3_sum1__out;
    // Generated from the component: SolarHouse3.Modbus.Bus Join1
    _solarhouse3_modbus_bus_join1__out[0] = _solarhouse3_modbus_rate_transition1_output__out;
    _solarhouse3_modbus_bus_join1__out[1] = _solarhouse3_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse4.Rate Transition1.Input
    _solarhouse4_rate_transition1_output__out = _solarhouse4_sum1__out;
    // Generated from the component: SolarHouse4.Modbus.Bus Join1
    _solarhouse4_modbus_bus_join1__out[0] = _solarhouse4_modbus_rate_transition1_output__out;
    _solarhouse4_modbus_bus_join1__out[1] = _solarhouse4_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse4.Modbus.ModBus Device4 (config4).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Dynamic Table1.Clock1
    _ess_dynamic_table1_clock1__state += 0.0001;
    if (_ess_dynamic_table1_clock1__state >= 4840.0)
        _ess_dynamic_table1_clock1__state = 0.0f;
    // Generated from the component: SolarHouse1.Modbus.Dynamic Table.Clock1
    _solarhouse1_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse1_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse1_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse2.Modbus.Dynamic Table.Clock1
    _solarhouse2_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse2_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse2_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse3.Modbus.Dynamic Table.Clock1
    _solarhouse3_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse3_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse3_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse4.Modbus.Dynamic Table.Clock1
    _solarhouse4_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse4_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse4_modbus_dynamic_table_clock1__state = 0.0f;
    //@cmp.update.block.end
}
void TimerCounterHandler_1_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_1");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.BPF.HPF
    X_UnInt32 _ess_inverter_bpf_hpf__i;
    _ess_inverter_bpf_hpf__a_sum = 0.0f;
    _ess_inverter_bpf_hpf__b_sum = 0.0f;
    _ess_inverter_bpf_hpf__delay_line_in = 0.0f;
    for (_ess_inverter_bpf_hpf__i = 0; _ess_inverter_bpf_hpf__i < 1; _ess_inverter_bpf_hpf__i++) {
        _ess_inverter_bpf_hpf__b_sum += _ess_inverter_bpf_hpf__b_coeff[_ess_inverter_bpf_hpf__i + 1] * _ess_inverter_bpf_hpf__states[_ess_inverter_bpf_hpf__i];
    }
    _ess_inverter_bpf_hpf__a_sum += _ess_inverter_bpf_hpf__states[0] * _ess_inverter_bpf_hpf__a_coeff[1];
    _ess_inverter_bpf_hpf__delay_line_in = _ess_inverter_bpf_lpf__out - _ess_inverter_bpf_hpf__a_sum;
    _ess_inverter_bpf_hpf__b_sum += _ess_inverter_bpf_hpf__b_coeff[0] * _ess_inverter_bpf_hpf__delay_line_in;
    _ess_inverter_bpf_hpf__out = _ess_inverter_bpf_hpf__b_sum;
    // Generated from the component: ESS.Inverter.BPF1.HPF
    X_UnInt32 _ess_inverter_bpf1_hpf__i;
    _ess_inverter_bpf1_hpf__a_sum = 0.0f;
    _ess_inverter_bpf1_hpf__b_sum = 0.0f;
    _ess_inverter_bpf1_hpf__delay_line_in = 0.0f;
    for (_ess_inverter_bpf1_hpf__i = 0; _ess_inverter_bpf1_hpf__i < 1; _ess_inverter_bpf1_hpf__i++) {
        _ess_inverter_bpf1_hpf__b_sum += _ess_inverter_bpf1_hpf__b_coeff[_ess_inverter_bpf1_hpf__i + 1] * _ess_inverter_bpf1_hpf__states[_ess_inverter_bpf1_hpf__i];
    }
    _ess_inverter_bpf1_hpf__a_sum += _ess_inverter_bpf1_hpf__states[0] * _ess_inverter_bpf1_hpf__a_coeff[1];
    _ess_inverter_bpf1_hpf__delay_line_in = _ess_inverter_bpf1_lpf__out - _ess_inverter_bpf1_hpf__a_sum;
    _ess_inverter_bpf1_hpf__b_sum += _ess_inverter_bpf1_hpf__b_coeff[0] * _ess_inverter_bpf1_hpf__delay_line_in;
    _ess_inverter_bpf1_hpf__out = _ess_inverter_bpf1_hpf__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Constant2
    // Generated from the component: ESS.Inverter.Controller.Constant3
    // Generated from the component: ESS.Inverter.Controller.Constant4
    // Generated from the component: ESS.Inverter.Controller.Constant5
    // Generated from the component: ESS.Inverter.Controller.Constant6
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
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
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: ESS.Inverter.Controller.charge
    _ess_inverter_controller_charge__out = XIo_InInt32(0x55000128);
    // Generated from the component: ESS.Inverter.E.Va1
    _ess_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x202));
    // Generated from the component: ESS.Inverter.I.Ia1
    _ess_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x205));
    // Generated from the component: ESS.Inverter.Power_Meas.Gain4
    _ess_inverter_power_meas_gain4__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Gain5
    _ess_inverter_power_meas_gain5__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_lpf_q__out;
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
    _ess_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x203));
    // Generated from the component: Measurement.BPF.HPF
    X_UnInt32 _measurement_bpf_hpf__i;
    _measurement_bpf_hpf__a_sum = 0.0f;
    _measurement_bpf_hpf__b_sum = 0.0f;
    _measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_measurement_bpf_hpf__i = 0; _measurement_bpf_hpf__i < 1; _measurement_bpf_hpf__i++) {
        _measurement_bpf_hpf__b_sum += _measurement_bpf_hpf__b_coeff[_measurement_bpf_hpf__i + 1] * _measurement_bpf_hpf__states[_measurement_bpf_hpf__i];
    }
    _measurement_bpf_hpf__a_sum += _measurement_bpf_hpf__states[0] * _measurement_bpf_hpf__a_coeff[1];
    _measurement_bpf_hpf__delay_line_in = _measurement_bpf_lpf__out - _measurement_bpf_hpf__a_sum;
    _measurement_bpf_hpf__b_sum += _measurement_bpf_hpf__b_coeff[0] * _measurement_bpf_hpf__delay_line_in;
    _measurement_bpf_hpf__out = _measurement_bpf_hpf__b_sum;
    // Generated from the component: Measurement.BPF1.HPF
    X_UnInt32 _measurement_bpf1_hpf__i;
    _measurement_bpf1_hpf__a_sum = 0.0f;
    _measurement_bpf1_hpf__b_sum = 0.0f;
    _measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_measurement_bpf1_hpf__i = 0; _measurement_bpf1_hpf__i < 1; _measurement_bpf1_hpf__i++) {
        _measurement_bpf1_hpf__b_sum += _measurement_bpf1_hpf__b_coeff[_measurement_bpf1_hpf__i + 1] * _measurement_bpf1_hpf__states[_measurement_bpf1_hpf__i];
    }
    _measurement_bpf1_hpf__a_sum += _measurement_bpf1_hpf__states[0] * _measurement_bpf1_hpf__a_coeff[1];
    _measurement_bpf1_hpf__delay_line_in = _measurement_bpf1_lpf__out - _measurement_bpf1_hpf__a_sum;
    _measurement_bpf1_hpf__b_sum += _measurement_bpf1_hpf__b_coeff[0] * _measurement_bpf1_hpf__delay_line_in;
    _measurement_bpf1_hpf__out = _measurement_bpf1_hpf__b_sum;
    // Generated from the component: Measurement.Ia.Ia1
    _measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x6));
    // Generated from the component: Measurement.P
    HIL_OutAO(0x401e, (float)_measurement_lpf_p__out);
    // Generated from the component: Measurement.Va.Va1
    _measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x5));
    // Generated from the component: SolarHouse1.Inverter.BPF.HPF
    X_UnInt32 _solarhouse1_inverter_bpf_hpf__i;
    _solarhouse1_inverter_bpf_hpf__a_sum = 0.0f;
    _solarhouse1_inverter_bpf_hpf__b_sum = 0.0f;
    _solarhouse1_inverter_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_bpf_hpf__i = 0; _solarhouse1_inverter_bpf_hpf__i < 1; _solarhouse1_inverter_bpf_hpf__i++) {
        _solarhouse1_inverter_bpf_hpf__b_sum += _solarhouse1_inverter_bpf_hpf__b_coeff[_solarhouse1_inverter_bpf_hpf__i + 1] * _solarhouse1_inverter_bpf_hpf__states[_solarhouse1_inverter_bpf_hpf__i];
    }
    _solarhouse1_inverter_bpf_hpf__a_sum += _solarhouse1_inverter_bpf_hpf__states[0] * _solarhouse1_inverter_bpf_hpf__a_coeff[1];
    _solarhouse1_inverter_bpf_hpf__delay_line_in = _solarhouse1_inverter_bpf_lpf__out - _solarhouse1_inverter_bpf_hpf__a_sum;
    _solarhouse1_inverter_bpf_hpf__b_sum += _solarhouse1_inverter_bpf_hpf__b_coeff[0] * _solarhouse1_inverter_bpf_hpf__delay_line_in;
    _solarhouse1_inverter_bpf_hpf__out = _solarhouse1_inverter_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.BPF1.HPF
    X_UnInt32 _solarhouse1_inverter_bpf1_hpf__i;
    _solarhouse1_inverter_bpf1_hpf__a_sum = 0.0f;
    _solarhouse1_inverter_bpf1_hpf__b_sum = 0.0f;
    _solarhouse1_inverter_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_bpf1_hpf__i = 0; _solarhouse1_inverter_bpf1_hpf__i < 1; _solarhouse1_inverter_bpf1_hpf__i++) {
        _solarhouse1_inverter_bpf1_hpf__b_sum += _solarhouse1_inverter_bpf1_hpf__b_coeff[_solarhouse1_inverter_bpf1_hpf__i + 1] * _solarhouse1_inverter_bpf1_hpf__states[_solarhouse1_inverter_bpf1_hpf__i];
    }
    _solarhouse1_inverter_bpf1_hpf__a_sum += _solarhouse1_inverter_bpf1_hpf__states[0] * _solarhouse1_inverter_bpf1_hpf__a_coeff[1];
    _solarhouse1_inverter_bpf1_hpf__delay_line_in = _solarhouse1_inverter_bpf1_lpf__out - _solarhouse1_inverter_bpf1_hpf__a_sum;
    _solarhouse1_inverter_bpf1_hpf__b_sum += _solarhouse1_inverter_bpf1_hpf__b_coeff[0] * _solarhouse1_inverter_bpf1_hpf__delay_line_in;
    _solarhouse1_inverter_bpf1_hpf__out = _solarhouse1_inverter_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse1_inverter_lpf_dc__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse1.Inverter.Controller.charge
    _solarhouse1_inverter_controller_charge__out = XIo_InInt32(0x5500012c);
    // Generated from the component: SolarHouse1.Inverter.E.Va1
    _solarhouse1_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x404));
    // Generated from the component: SolarHouse1.Inverter.I.Ia1
    _solarhouse1_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x408));
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain4
    _solarhouse1_inverter_power_meas_gain4__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain5
    _solarhouse1_inverter_power_meas_gain5__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse1.Inverter.VDC.Va1
    _solarhouse1_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x405));
    // Generated from the component: SolarHouse1.Measurement.BPF.HPF
    X_UnInt32 _solarhouse1_measurement_bpf_hpf__i;
    _solarhouse1_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf_hpf__i = 0; _solarhouse1_measurement_bpf_hpf__i < 1; _solarhouse1_measurement_bpf_hpf__i++) {
        _solarhouse1_measurement_bpf_hpf__b_sum += _solarhouse1_measurement_bpf_hpf__b_coeff[_solarhouse1_measurement_bpf_hpf__i + 1] * _solarhouse1_measurement_bpf_hpf__states[_solarhouse1_measurement_bpf_hpf__i];
    }
    _solarhouse1_measurement_bpf_hpf__a_sum += _solarhouse1_measurement_bpf_hpf__states[0] * _solarhouse1_measurement_bpf_hpf__a_coeff[1];
    _solarhouse1_measurement_bpf_hpf__delay_line_in = _solarhouse1_measurement_bpf_lpf__out - _solarhouse1_measurement_bpf_hpf__a_sum;
    _solarhouse1_measurement_bpf_hpf__b_sum += _solarhouse1_measurement_bpf_hpf__b_coeff[0] * _solarhouse1_measurement_bpf_hpf__delay_line_in;
    _solarhouse1_measurement_bpf_hpf__out = _solarhouse1_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse1_measurement_bpf1_hpf__i;
    _solarhouse1_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf1_hpf__i = 0; _solarhouse1_measurement_bpf1_hpf__i < 1; _solarhouse1_measurement_bpf1_hpf__i++) {
        _solarhouse1_measurement_bpf1_hpf__b_sum += _solarhouse1_measurement_bpf1_hpf__b_coeff[_solarhouse1_measurement_bpf1_hpf__i + 1] * _solarhouse1_measurement_bpf1_hpf__states[_solarhouse1_measurement_bpf1_hpf__i];
    }
    _solarhouse1_measurement_bpf1_hpf__a_sum += _solarhouse1_measurement_bpf1_hpf__states[0] * _solarhouse1_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse1_measurement_bpf1_hpf__delay_line_in = _solarhouse1_measurement_bpf1_lpf__out - _solarhouse1_measurement_bpf1_hpf__a_sum;
    _solarhouse1_measurement_bpf1_hpf__b_sum += _solarhouse1_measurement_bpf1_hpf__b_coeff[0] * _solarhouse1_measurement_bpf1_hpf__delay_line_in;
    _solarhouse1_measurement_bpf1_hpf__out = _solarhouse1_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Ia.Ia1
    _solarhouse1_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x409));
    // Generated from the component: SolarHouse1.Measurement.P
    HIL_OutAO(0x4034, (float)_solarhouse1_measurement_lpf_p__out);
    // Generated from the component: SolarHouse1.Measurement.Va.Va1
    _solarhouse1_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x407));
    // Generated from the component: SolarHouse1.Modbus.P_probe
    HIL_OutAO(0x4035, (float)_solarhouse1_measurement_lpf_p__out);
    // Generated from the component: SolarHouse1.Modbus.Rate Transition1.Input
    _solarhouse1_modbus_rate_transition1_output__out = _solarhouse1_measurement_lpf_p__out;
    // Generated from the component: SolarHouse2.Inverter.BPF.HPF
    X_UnInt32 _solarhouse2_inverter_bpf_hpf__i;
    _solarhouse2_inverter_bpf_hpf__a_sum = 0.0f;
    _solarhouse2_inverter_bpf_hpf__b_sum = 0.0f;
    _solarhouse2_inverter_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_bpf_hpf__i = 0; _solarhouse2_inverter_bpf_hpf__i < 1; _solarhouse2_inverter_bpf_hpf__i++) {
        _solarhouse2_inverter_bpf_hpf__b_sum += _solarhouse2_inverter_bpf_hpf__b_coeff[_solarhouse2_inverter_bpf_hpf__i + 1] * _solarhouse2_inverter_bpf_hpf__states[_solarhouse2_inverter_bpf_hpf__i];
    }
    _solarhouse2_inverter_bpf_hpf__a_sum += _solarhouse2_inverter_bpf_hpf__states[0] * _solarhouse2_inverter_bpf_hpf__a_coeff[1];
    _solarhouse2_inverter_bpf_hpf__delay_line_in = _solarhouse2_inverter_bpf_lpf__out - _solarhouse2_inverter_bpf_hpf__a_sum;
    _solarhouse2_inverter_bpf_hpf__b_sum += _solarhouse2_inverter_bpf_hpf__b_coeff[0] * _solarhouse2_inverter_bpf_hpf__delay_line_in;
    _solarhouse2_inverter_bpf_hpf__out = _solarhouse2_inverter_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.BPF1.HPF
    X_UnInt32 _solarhouse2_inverter_bpf1_hpf__i;
    _solarhouse2_inverter_bpf1_hpf__a_sum = 0.0f;
    _solarhouse2_inverter_bpf1_hpf__b_sum = 0.0f;
    _solarhouse2_inverter_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_bpf1_hpf__i = 0; _solarhouse2_inverter_bpf1_hpf__i < 1; _solarhouse2_inverter_bpf1_hpf__i++) {
        _solarhouse2_inverter_bpf1_hpf__b_sum += _solarhouse2_inverter_bpf1_hpf__b_coeff[_solarhouse2_inverter_bpf1_hpf__i + 1] * _solarhouse2_inverter_bpf1_hpf__states[_solarhouse2_inverter_bpf1_hpf__i];
    }
    _solarhouse2_inverter_bpf1_hpf__a_sum += _solarhouse2_inverter_bpf1_hpf__states[0] * _solarhouse2_inverter_bpf1_hpf__a_coeff[1];
    _solarhouse2_inverter_bpf1_hpf__delay_line_in = _solarhouse2_inverter_bpf1_lpf__out - _solarhouse2_inverter_bpf1_hpf__a_sum;
    _solarhouse2_inverter_bpf1_hpf__b_sum += _solarhouse2_inverter_bpf1_hpf__b_coeff[0] * _solarhouse2_inverter_bpf1_hpf__delay_line_in;
    _solarhouse2_inverter_bpf1_hpf__out = _solarhouse2_inverter_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse2_inverter_lpf_dc__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse2.Inverter.Controller.charge
    _solarhouse2_inverter_controller_charge__out = XIo_InInt32(0x55000130);
    // Generated from the component: SolarHouse2.Inverter.E.Va1
    _solarhouse2_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x604));
    // Generated from the component: SolarHouse2.Inverter.I.Ia1
    _solarhouse2_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x608));
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain4
    _solarhouse2_inverter_power_meas_gain4__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain5
    _solarhouse2_inverter_power_meas_gain5__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse2.Inverter.VDC.Va1
    _solarhouse2_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x605));
    // Generated from the component: SolarHouse2.Measurement.BPF.HPF
    X_UnInt32 _solarhouse2_measurement_bpf_hpf__i;
    _solarhouse2_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf_hpf__i = 0; _solarhouse2_measurement_bpf_hpf__i < 1; _solarhouse2_measurement_bpf_hpf__i++) {
        _solarhouse2_measurement_bpf_hpf__b_sum += _solarhouse2_measurement_bpf_hpf__b_coeff[_solarhouse2_measurement_bpf_hpf__i + 1] * _solarhouse2_measurement_bpf_hpf__states[_solarhouse2_measurement_bpf_hpf__i];
    }
    _solarhouse2_measurement_bpf_hpf__a_sum += _solarhouse2_measurement_bpf_hpf__states[0] * _solarhouse2_measurement_bpf_hpf__a_coeff[1];
    _solarhouse2_measurement_bpf_hpf__delay_line_in = _solarhouse2_measurement_bpf_lpf__out - _solarhouse2_measurement_bpf_hpf__a_sum;
    _solarhouse2_measurement_bpf_hpf__b_sum += _solarhouse2_measurement_bpf_hpf__b_coeff[0] * _solarhouse2_measurement_bpf_hpf__delay_line_in;
    _solarhouse2_measurement_bpf_hpf__out = _solarhouse2_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse2_measurement_bpf1_hpf__i;
    _solarhouse2_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf1_hpf__i = 0; _solarhouse2_measurement_bpf1_hpf__i < 1; _solarhouse2_measurement_bpf1_hpf__i++) {
        _solarhouse2_measurement_bpf1_hpf__b_sum += _solarhouse2_measurement_bpf1_hpf__b_coeff[_solarhouse2_measurement_bpf1_hpf__i + 1] * _solarhouse2_measurement_bpf1_hpf__states[_solarhouse2_measurement_bpf1_hpf__i];
    }
    _solarhouse2_measurement_bpf1_hpf__a_sum += _solarhouse2_measurement_bpf1_hpf__states[0] * _solarhouse2_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse2_measurement_bpf1_hpf__delay_line_in = _solarhouse2_measurement_bpf1_lpf__out - _solarhouse2_measurement_bpf1_hpf__a_sum;
    _solarhouse2_measurement_bpf1_hpf__b_sum += _solarhouse2_measurement_bpf1_hpf__b_coeff[0] * _solarhouse2_measurement_bpf1_hpf__delay_line_in;
    _solarhouse2_measurement_bpf1_hpf__out = _solarhouse2_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Ia.Ia1
    _solarhouse2_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x609));
    // Generated from the component: SolarHouse2.Measurement.P
    HIL_OutAO(0x404d, (float)_solarhouse2_measurement_lpf_p__out);
    // Generated from the component: SolarHouse2.Measurement.Va.Va1
    _solarhouse2_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x607));
    // Generated from the component: SolarHouse2.Modbus.P_probe
    HIL_OutAO(0x404e, (float)_solarhouse2_measurement_lpf_p__out);
    // Generated from the component: SolarHouse2.Modbus.Rate Transition1.Input
    _solarhouse2_modbus_rate_transition1_output__out = _solarhouse2_measurement_lpf_p__out;
    // Generated from the component: SolarHouse3.Inverter.BPF.HPF
    X_UnInt32 _solarhouse3_inverter_bpf_hpf__i;
    _solarhouse3_inverter_bpf_hpf__a_sum = 0.0f;
    _solarhouse3_inverter_bpf_hpf__b_sum = 0.0f;
    _solarhouse3_inverter_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_bpf_hpf__i = 0; _solarhouse3_inverter_bpf_hpf__i < 1; _solarhouse3_inverter_bpf_hpf__i++) {
        _solarhouse3_inverter_bpf_hpf__b_sum += _solarhouse3_inverter_bpf_hpf__b_coeff[_solarhouse3_inverter_bpf_hpf__i + 1] * _solarhouse3_inverter_bpf_hpf__states[_solarhouse3_inverter_bpf_hpf__i];
    }
    _solarhouse3_inverter_bpf_hpf__a_sum += _solarhouse3_inverter_bpf_hpf__states[0] * _solarhouse3_inverter_bpf_hpf__a_coeff[1];
    _solarhouse3_inverter_bpf_hpf__delay_line_in = _solarhouse3_inverter_bpf_lpf__out - _solarhouse3_inverter_bpf_hpf__a_sum;
    _solarhouse3_inverter_bpf_hpf__b_sum += _solarhouse3_inverter_bpf_hpf__b_coeff[0] * _solarhouse3_inverter_bpf_hpf__delay_line_in;
    _solarhouse3_inverter_bpf_hpf__out = _solarhouse3_inverter_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.BPF1.HPF
    X_UnInt32 _solarhouse3_inverter_bpf1_hpf__i;
    _solarhouse3_inverter_bpf1_hpf__a_sum = 0.0f;
    _solarhouse3_inverter_bpf1_hpf__b_sum = 0.0f;
    _solarhouse3_inverter_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_bpf1_hpf__i = 0; _solarhouse3_inverter_bpf1_hpf__i < 1; _solarhouse3_inverter_bpf1_hpf__i++) {
        _solarhouse3_inverter_bpf1_hpf__b_sum += _solarhouse3_inverter_bpf1_hpf__b_coeff[_solarhouse3_inverter_bpf1_hpf__i + 1] * _solarhouse3_inverter_bpf1_hpf__states[_solarhouse3_inverter_bpf1_hpf__i];
    }
    _solarhouse3_inverter_bpf1_hpf__a_sum += _solarhouse3_inverter_bpf1_hpf__states[0] * _solarhouse3_inverter_bpf1_hpf__a_coeff[1];
    _solarhouse3_inverter_bpf1_hpf__delay_line_in = _solarhouse3_inverter_bpf1_lpf__out - _solarhouse3_inverter_bpf1_hpf__a_sum;
    _solarhouse3_inverter_bpf1_hpf__b_sum += _solarhouse3_inverter_bpf1_hpf__b_coeff[0] * _solarhouse3_inverter_bpf1_hpf__delay_line_in;
    _solarhouse3_inverter_bpf1_hpf__out = _solarhouse3_inverter_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse3_inverter_lpf_dc__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse3.Inverter.Controller.charge
    _solarhouse3_inverter_controller_charge__out = XIo_InInt32(0x55000134);
    // Generated from the component: SolarHouse3.Inverter.E.Va1
    _solarhouse3_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0x804));
    // Generated from the component: SolarHouse3.Inverter.I.Ia1
    _solarhouse3_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0x808));
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain4
    _solarhouse3_inverter_power_meas_gain4__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain5
    _solarhouse3_inverter_power_meas_gain5__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse3.Inverter.VDC.Va1
    _solarhouse3_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0x805));
    // Generated from the component: SolarHouse3.Measurement.BPF.HPF
    X_UnInt32 _solarhouse3_measurement_bpf_hpf__i;
    _solarhouse3_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf_hpf__i = 0; _solarhouse3_measurement_bpf_hpf__i < 1; _solarhouse3_measurement_bpf_hpf__i++) {
        _solarhouse3_measurement_bpf_hpf__b_sum += _solarhouse3_measurement_bpf_hpf__b_coeff[_solarhouse3_measurement_bpf_hpf__i + 1] * _solarhouse3_measurement_bpf_hpf__states[_solarhouse3_measurement_bpf_hpf__i];
    }
    _solarhouse3_measurement_bpf_hpf__a_sum += _solarhouse3_measurement_bpf_hpf__states[0] * _solarhouse3_measurement_bpf_hpf__a_coeff[1];
    _solarhouse3_measurement_bpf_hpf__delay_line_in = _solarhouse3_measurement_bpf_lpf__out - _solarhouse3_measurement_bpf_hpf__a_sum;
    _solarhouse3_measurement_bpf_hpf__b_sum += _solarhouse3_measurement_bpf_hpf__b_coeff[0] * _solarhouse3_measurement_bpf_hpf__delay_line_in;
    _solarhouse3_measurement_bpf_hpf__out = _solarhouse3_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse3_measurement_bpf1_hpf__i;
    _solarhouse3_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf1_hpf__i = 0; _solarhouse3_measurement_bpf1_hpf__i < 1; _solarhouse3_measurement_bpf1_hpf__i++) {
        _solarhouse3_measurement_bpf1_hpf__b_sum += _solarhouse3_measurement_bpf1_hpf__b_coeff[_solarhouse3_measurement_bpf1_hpf__i + 1] * _solarhouse3_measurement_bpf1_hpf__states[_solarhouse3_measurement_bpf1_hpf__i];
    }
    _solarhouse3_measurement_bpf1_hpf__a_sum += _solarhouse3_measurement_bpf1_hpf__states[0] * _solarhouse3_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse3_measurement_bpf1_hpf__delay_line_in = _solarhouse3_measurement_bpf1_lpf__out - _solarhouse3_measurement_bpf1_hpf__a_sum;
    _solarhouse3_measurement_bpf1_hpf__b_sum += _solarhouse3_measurement_bpf1_hpf__b_coeff[0] * _solarhouse3_measurement_bpf1_hpf__delay_line_in;
    _solarhouse3_measurement_bpf1_hpf__out = _solarhouse3_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Ia.Ia1
    _solarhouse3_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x809));
    // Generated from the component: SolarHouse3.Measurement.P
    HIL_OutAO(0x4066, (float)_solarhouse3_measurement_lpf_p__out);
    // Generated from the component: SolarHouse3.Measurement.Va.Va1
    _solarhouse3_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0x807));
    // Generated from the component: SolarHouse3.Modbus.P_probe
    HIL_OutAO(0x4067, (float)_solarhouse3_measurement_lpf_p__out);
    // Generated from the component: SolarHouse3.Modbus.Rate Transition1.Input
    _solarhouse3_modbus_rate_transition1_output__out = _solarhouse3_measurement_lpf_p__out;
    // Generated from the component: SolarHouse4.Inverter.BPF.HPF
    X_UnInt32 _solarhouse4_inverter_bpf_hpf__i;
    _solarhouse4_inverter_bpf_hpf__a_sum = 0.0f;
    _solarhouse4_inverter_bpf_hpf__b_sum = 0.0f;
    _solarhouse4_inverter_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_bpf_hpf__i = 0; _solarhouse4_inverter_bpf_hpf__i < 1; _solarhouse4_inverter_bpf_hpf__i++) {
        _solarhouse4_inverter_bpf_hpf__b_sum += _solarhouse4_inverter_bpf_hpf__b_coeff[_solarhouse4_inverter_bpf_hpf__i + 1] * _solarhouse4_inverter_bpf_hpf__states[_solarhouse4_inverter_bpf_hpf__i];
    }
    _solarhouse4_inverter_bpf_hpf__a_sum += _solarhouse4_inverter_bpf_hpf__states[0] * _solarhouse4_inverter_bpf_hpf__a_coeff[1];
    _solarhouse4_inverter_bpf_hpf__delay_line_in = _solarhouse4_inverter_bpf_lpf__out - _solarhouse4_inverter_bpf_hpf__a_sum;
    _solarhouse4_inverter_bpf_hpf__b_sum += _solarhouse4_inverter_bpf_hpf__b_coeff[0] * _solarhouse4_inverter_bpf_hpf__delay_line_in;
    _solarhouse4_inverter_bpf_hpf__out = _solarhouse4_inverter_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.BPF1.HPF
    X_UnInt32 _solarhouse4_inverter_bpf1_hpf__i;
    _solarhouse4_inverter_bpf1_hpf__a_sum = 0.0f;
    _solarhouse4_inverter_bpf1_hpf__b_sum = 0.0f;
    _solarhouse4_inverter_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_bpf1_hpf__i = 0; _solarhouse4_inverter_bpf1_hpf__i < 1; _solarhouse4_inverter_bpf1_hpf__i++) {
        _solarhouse4_inverter_bpf1_hpf__b_sum += _solarhouse4_inverter_bpf1_hpf__b_coeff[_solarhouse4_inverter_bpf1_hpf__i + 1] * _solarhouse4_inverter_bpf1_hpf__states[_solarhouse4_inverter_bpf1_hpf__i];
    }
    _solarhouse4_inverter_bpf1_hpf__a_sum += _solarhouse4_inverter_bpf1_hpf__states[0] * _solarhouse4_inverter_bpf1_hpf__a_coeff[1];
    _solarhouse4_inverter_bpf1_hpf__delay_line_in = _solarhouse4_inverter_bpf1_lpf__out - _solarhouse4_inverter_bpf1_hpf__a_sum;
    _solarhouse4_inverter_bpf1_hpf__b_sum += _solarhouse4_inverter_bpf1_hpf__b_coeff[0] * _solarhouse4_inverter_bpf1_hpf__delay_line_in;
    _solarhouse4_inverter_bpf1_hpf__out = _solarhouse4_inverter_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in = _solarhouse4_inverter_lpf_dc__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out = MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__out, 10.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse4.Inverter.Controller.charge
    _solarhouse4_inverter_controller_charge__out = XIo_InInt32(0x55000138);
    // Generated from the component: SolarHouse4.Inverter.E.Va1
    _solarhouse4_inverter_e_va1__out = (HIL_InFloat(0xc80000 + 0xa04));
    // Generated from the component: SolarHouse4.Inverter.I.Ia1
    _solarhouse4_inverter_i_ia1__out = (HIL_InFloat(0xc80000 + 0xa08));
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain4
    _solarhouse4_inverter_power_meas_gain4__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain5
    _solarhouse4_inverter_power_meas_gain5__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S = sqrt(_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P + _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__Q);
    if (_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S > 0) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__P / _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    }
    else {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf = 0;
    }
    // Generated from the component: SolarHouse4.Inverter.VDC.Va1
    _solarhouse4_inverter_vdc_va1__out = (HIL_InFloat(0xc80000 + 0xa05));
    // Generated from the component: SolarHouse4.Measurement.BPF.HPF
    X_UnInt32 _solarhouse4_measurement_bpf_hpf__i;
    _solarhouse4_measurement_bpf_hpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf_hpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf_hpf__i = 0; _solarhouse4_measurement_bpf_hpf__i < 1; _solarhouse4_measurement_bpf_hpf__i++) {
        _solarhouse4_measurement_bpf_hpf__b_sum += _solarhouse4_measurement_bpf_hpf__b_coeff[_solarhouse4_measurement_bpf_hpf__i + 1] * _solarhouse4_measurement_bpf_hpf__states[_solarhouse4_measurement_bpf_hpf__i];
    }
    _solarhouse4_measurement_bpf_hpf__a_sum += _solarhouse4_measurement_bpf_hpf__states[0] * _solarhouse4_measurement_bpf_hpf__a_coeff[1];
    _solarhouse4_measurement_bpf_hpf__delay_line_in = _solarhouse4_measurement_bpf_lpf__out - _solarhouse4_measurement_bpf_hpf__a_sum;
    _solarhouse4_measurement_bpf_hpf__b_sum += _solarhouse4_measurement_bpf_hpf__b_coeff[0] * _solarhouse4_measurement_bpf_hpf__delay_line_in;
    _solarhouse4_measurement_bpf_hpf__out = _solarhouse4_measurement_bpf_hpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF1.HPF
    X_UnInt32 _solarhouse4_measurement_bpf1_hpf__i;
    _solarhouse4_measurement_bpf1_hpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf1_hpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf1_hpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf1_hpf__i = 0; _solarhouse4_measurement_bpf1_hpf__i < 1; _solarhouse4_measurement_bpf1_hpf__i++) {
        _solarhouse4_measurement_bpf1_hpf__b_sum += _solarhouse4_measurement_bpf1_hpf__b_coeff[_solarhouse4_measurement_bpf1_hpf__i + 1] * _solarhouse4_measurement_bpf1_hpf__states[_solarhouse4_measurement_bpf1_hpf__i];
    }
    _solarhouse4_measurement_bpf1_hpf__a_sum += _solarhouse4_measurement_bpf1_hpf__states[0] * _solarhouse4_measurement_bpf1_hpf__a_coeff[1];
    _solarhouse4_measurement_bpf1_hpf__delay_line_in = _solarhouse4_measurement_bpf1_lpf__out - _solarhouse4_measurement_bpf1_hpf__a_sum;
    _solarhouse4_measurement_bpf1_hpf__b_sum += _solarhouse4_measurement_bpf1_hpf__b_coeff[0] * _solarhouse4_measurement_bpf1_hpf__delay_line_in;
    _solarhouse4_measurement_bpf1_hpf__out = _solarhouse4_measurement_bpf1_hpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Ia.Ia1
    _solarhouse4_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xa09));
    // Generated from the component: SolarHouse4.Measurement.P
    HIL_OutAO(0x407f, (float)_solarhouse4_measurement_lpf_p__out);
    // Generated from the component: SolarHouse4.Measurement.Va.Va1
    _solarhouse4_measurement_va_va1__out = (HIL_InFloat(0xc80000 + 0xa07));
    // Generated from the component: SolarHouse4.Modbus.P_probe
    HIL_OutAO(0x4080, (float)_solarhouse4_measurement_lpf_p__out);
    // Generated from the component: SolarHouse4.Modbus.Rate Transition1.Input
    _solarhouse4_modbus_rate_transition1_output__out = _solarhouse4_measurement_lpf_p__out;
    // Generated from the component: ESS.Inverter.BPF.Gain
    _ess_inverter_bpf_gain__out = 1.2500000000000002 * _ess_inverter_bpf_hpf__out;
    // Generated from the component: ESS.Inverter.BPF1.Gain
    _ess_inverter_bpf1_gain__out = 1.2500000000000002 * _ess_inverter_bpf1_hpf__out;
    // Generated from the component: ESS.Inverter.Controller.C function4
    _ess_inverter_controller_c_function4__Ts = _ess_inverter_controller_constant4__out;
    _ess_inverter_controller_c_function4__in = _ess_inverter_controller_constant6__out;
    _ess_inverter_controller_c_function4__pi = _ess_inverter_controller_constant3__out;
    _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out + _ess_inverter_controller_c_function4__in * _ess_inverter_controller_c_function4__Ts;
    if (_ess_inverter_controller_c_function4__out >= 2 * _ess_inverter_controller_c_function4__pi) {
        _ess_inverter_controller_c_function4__out = _ess_inverter_controller_c_function4__out - 2 * _ess_inverter_controller_c_function4__pi;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: ESS.Inverter.Controller.C function1
    _ess_inverter_controller_c_function1__charge = _ess_inverter_controller_rate_transition8_output__out;
    _ess_inverter_controller_c_function1__ref = _ess_inverter_controller_rate_transition9_output__out;
    if (_ess_inverter_controller_c_function1__charge > 0)_ess_inverter_controller_c_function1__out = -1;
    else _ess_inverter_controller_c_function1__out = _ess_inverter_controller_c_function1__ref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition8.Input
    _ess_inverter_controller_rate_transition8_output__out = _ess_inverter_controller_charge__out;
    // Generated from the component: ESS.Inverter.BPF.LPF
    X_UnInt32 _ess_inverter_bpf_lpf__i;
    _ess_inverter_bpf_lpf__a_sum = 0.0f;
    _ess_inverter_bpf_lpf__b_sum = 0.0f;
    _ess_inverter_bpf_lpf__delay_line_in = 0.0f;
    for (_ess_inverter_bpf_lpf__i = 0; _ess_inverter_bpf_lpf__i < 1; _ess_inverter_bpf_lpf__i++) {
        _ess_inverter_bpf_lpf__b_sum += _ess_inverter_bpf_lpf__b_coeff[_ess_inverter_bpf_lpf__i + 1] * _ess_inverter_bpf_lpf__states[_ess_inverter_bpf_lpf__i];
    }
    _ess_inverter_bpf_lpf__a_sum += _ess_inverter_bpf_lpf__states[0] * _ess_inverter_bpf_lpf__a_coeff[1];
    _ess_inverter_bpf_lpf__delay_line_in = _ess_inverter_e_va1__out - _ess_inverter_bpf_lpf__a_sum;
    _ess_inverter_bpf_lpf__b_sum += _ess_inverter_bpf_lpf__b_coeff[0] * _ess_inverter_bpf_lpf__delay_line_in;
    _ess_inverter_bpf_lpf__out = _ess_inverter_bpf_lpf__b_sum;
    // Generated from the component: ESS.Inverter.BPF1.LPF
    X_UnInt32 _ess_inverter_bpf1_lpf__i;
    _ess_inverter_bpf1_lpf__a_sum = 0.0f;
    _ess_inverter_bpf1_lpf__b_sum = 0.0f;
    _ess_inverter_bpf1_lpf__delay_line_in = 0.0f;
    for (_ess_inverter_bpf1_lpf__i = 0; _ess_inverter_bpf1_lpf__i < 1; _ess_inverter_bpf1_lpf__i++) {
        _ess_inverter_bpf1_lpf__b_sum += _ess_inverter_bpf1_lpf__b_coeff[_ess_inverter_bpf1_lpf__i + 1] * _ess_inverter_bpf1_lpf__states[_ess_inverter_bpf1_lpf__i];
    }
    _ess_inverter_bpf1_lpf__a_sum += _ess_inverter_bpf1_lpf__states[0] * _ess_inverter_bpf1_lpf__a_coeff[1];
    _ess_inverter_bpf1_lpf__delay_line_in = _ess_inverter_i_ia1__out - _ess_inverter_bpf1_lpf__a_sum;
    _ess_inverter_bpf1_lpf__b_sum += _ess_inverter_bpf1_lpf__b_coeff[0] * _ess_inverter_bpf1_lpf__delay_line_in;
    _ess_inverter_bpf1_lpf__out = _ess_inverter_bpf1_lpf__b_sum;
    // Generated from the component: ESS.Inverter.P
    HIL_OutAO(0x4014, (float)_ess_inverter_power_meas_gain4__out);
    // Generated from the component: ESS.Inverter.Q
    HIL_OutAO(0x4016, (float)_ess_inverter_power_meas_gain5__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Gain6
    _ess_inverter_power_meas_gain6__out = 50000.0 * _ess_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: ESS.Inverter.pf
    HIL_OutAO(0x4019, (float)_ess_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: ESS.Inverter.LPF_dc
    X_UnInt32 _ess_inverter_lpf_dc__i;
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
    // Generated from the component: ESS.Inverter.Controller.Gain32
    _ess_inverter_controller_gain32__out = 2e-05 * _ess_rate_transition1_output__out;
    // Generated from the component: ESS.Inverter.Pref_probe
    HIL_OutAO(0x4015, (float)_ess_rate_transition1_output__out);
    // Generated from the component: Measurement.BPF.Gain
    _measurement_bpf_gain__out = 1.2500000000000002 * _measurement_bpf_hpf__out;
    // Generated from the component: Measurement.BPF1.Gain
    _measurement_bpf1_gain__out = 1.2500000000000002 * _measurement_bpf1_hpf__out;
    // Generated from the component: Measurement.BPF.LPF
    X_UnInt32 _measurement_bpf_lpf__i;
    _measurement_bpf_lpf__a_sum = 0.0f;
    _measurement_bpf_lpf__b_sum = 0.0f;
    _measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_measurement_bpf_lpf__i = 0; _measurement_bpf_lpf__i < 1; _measurement_bpf_lpf__i++) {
        _measurement_bpf_lpf__b_sum += _measurement_bpf_lpf__b_coeff[_measurement_bpf_lpf__i + 1] * _measurement_bpf_lpf__states[_measurement_bpf_lpf__i];
    }
    _measurement_bpf_lpf__a_sum += _measurement_bpf_lpf__states[0] * _measurement_bpf_lpf__a_coeff[1];
    _measurement_bpf_lpf__delay_line_in = _measurement_ia_ia1__out - _measurement_bpf_lpf__a_sum;
    _measurement_bpf_lpf__b_sum += _measurement_bpf_lpf__b_coeff[0] * _measurement_bpf_lpf__delay_line_in;
    _measurement_bpf_lpf__out = _measurement_bpf_lpf__b_sum;
    // Generated from the component: Measurement.BPF1.LPF
    X_UnInt32 _measurement_bpf1_lpf__i;
    _measurement_bpf1_lpf__a_sum = 0.0f;
    _measurement_bpf1_lpf__b_sum = 0.0f;
    _measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_measurement_bpf1_lpf__i = 0; _measurement_bpf1_lpf__i < 1; _measurement_bpf1_lpf__i++) {
        _measurement_bpf1_lpf__b_sum += _measurement_bpf1_lpf__b_coeff[_measurement_bpf1_lpf__i + 1] * _measurement_bpf1_lpf__states[_measurement_bpf1_lpf__i];
    }
    _measurement_bpf1_lpf__a_sum += _measurement_bpf1_lpf__states[0] * _measurement_bpf1_lpf__a_coeff[1];
    _measurement_bpf1_lpf__delay_line_in = _measurement_va_va1__out - _measurement_bpf1_lpf__a_sum;
    _measurement_bpf1_lpf__b_sum += _measurement_bpf1_lpf__b_coeff[0] * _measurement_bpf1_lpf__delay_line_in;
    _measurement_bpf1_lpf__out = _measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.BPF.Gain
    _solarhouse1_inverter_bpf_gain__out = 1.2500000000000002 * _solarhouse1_inverter_bpf_hpf__out;
    // Generated from the component: SolarHouse1.Inverter.BPF1.Gain
    _solarhouse1_inverter_bpf1_gain__out = 1.2500000000000002 * _solarhouse1_inverter_bpf1_hpf__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function4
    _solarhouse1_inverter_controller_c_function4__Ts = _solarhouse1_inverter_controller_constant4__out;
    _solarhouse1_inverter_controller_c_function4__in = _solarhouse1_inverter_controller_constant6__out;
    _solarhouse1_inverter_controller_c_function4__pi = _solarhouse1_inverter_controller_constant3__out;
    _solarhouse1_inverter_controller_c_function4__out = _solarhouse1_inverter_controller_c_function4__out + _solarhouse1_inverter_controller_c_function4__in * _solarhouse1_inverter_controller_c_function4__Ts;
    if (_solarhouse1_inverter_controller_c_function4__out >= 2 * _solarhouse1_inverter_controller_c_function4__pi) {
        _solarhouse1_inverter_controller_c_function4__out = _solarhouse1_inverter_controller_c_function4__out - 2 * _solarhouse1_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function1
    _solarhouse1_inverter_controller_c_function1__charge = _solarhouse1_inverter_controller_rate_transition8_output__out;
    _solarhouse1_inverter_controller_c_function1__ref = _solarhouse1_inverter_controller_rate_transition9_output__out;
    if (_solarhouse1_inverter_controller_c_function1__charge > 0)_solarhouse1_inverter_controller_c_function1__out = -1;
    else _solarhouse1_inverter_controller_c_function1__out = _solarhouse1_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse1.Inverter.Controller.Rate Transition8.Input
    _solarhouse1_inverter_controller_rate_transition8_output__out = _solarhouse1_inverter_controller_charge__out;
    // Generated from the component: SolarHouse1.Inverter.BPF.LPF
    X_UnInt32 _solarhouse1_inverter_bpf_lpf__i;
    _solarhouse1_inverter_bpf_lpf__a_sum = 0.0f;
    _solarhouse1_inverter_bpf_lpf__b_sum = 0.0f;
    _solarhouse1_inverter_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_bpf_lpf__i = 0; _solarhouse1_inverter_bpf_lpf__i < 1; _solarhouse1_inverter_bpf_lpf__i++) {
        _solarhouse1_inverter_bpf_lpf__b_sum += _solarhouse1_inverter_bpf_lpf__b_coeff[_solarhouse1_inverter_bpf_lpf__i + 1] * _solarhouse1_inverter_bpf_lpf__states[_solarhouse1_inverter_bpf_lpf__i];
    }
    _solarhouse1_inverter_bpf_lpf__a_sum += _solarhouse1_inverter_bpf_lpf__states[0] * _solarhouse1_inverter_bpf_lpf__a_coeff[1];
    _solarhouse1_inverter_bpf_lpf__delay_line_in = _solarhouse1_inverter_e_va1__out - _solarhouse1_inverter_bpf_lpf__a_sum;
    _solarhouse1_inverter_bpf_lpf__b_sum += _solarhouse1_inverter_bpf_lpf__b_coeff[0] * _solarhouse1_inverter_bpf_lpf__delay_line_in;
    _solarhouse1_inverter_bpf_lpf__out = _solarhouse1_inverter_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.BPF1.LPF
    X_UnInt32 _solarhouse1_inverter_bpf1_lpf__i;
    _solarhouse1_inverter_bpf1_lpf__a_sum = 0.0f;
    _solarhouse1_inverter_bpf1_lpf__b_sum = 0.0f;
    _solarhouse1_inverter_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_bpf1_lpf__i = 0; _solarhouse1_inverter_bpf1_lpf__i < 1; _solarhouse1_inverter_bpf1_lpf__i++) {
        _solarhouse1_inverter_bpf1_lpf__b_sum += _solarhouse1_inverter_bpf1_lpf__b_coeff[_solarhouse1_inverter_bpf1_lpf__i + 1] * _solarhouse1_inverter_bpf1_lpf__states[_solarhouse1_inverter_bpf1_lpf__i];
    }
    _solarhouse1_inverter_bpf1_lpf__a_sum += _solarhouse1_inverter_bpf1_lpf__states[0] * _solarhouse1_inverter_bpf1_lpf__a_coeff[1];
    _solarhouse1_inverter_bpf1_lpf__delay_line_in = _solarhouse1_inverter_i_ia1__out - _solarhouse1_inverter_bpf1_lpf__a_sum;
    _solarhouse1_inverter_bpf1_lpf__b_sum += _solarhouse1_inverter_bpf1_lpf__b_coeff[0] * _solarhouse1_inverter_bpf1_lpf__delay_line_in;
    _solarhouse1_inverter_bpf1_lpf__out = _solarhouse1_inverter_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.P
    HIL_OutAO(0x402e, (float)_solarhouse1_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse1.Inverter.Q
    HIL_OutAO(0x4030, (float)_solarhouse1_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Gain6
    _solarhouse1_inverter_power_meas_gain6__out = 50000.0 * _solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse1.Inverter.pf
    HIL_OutAO(0x4033, (float)_solarhouse1_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse1.Inverter.LPF_dc
    X_UnInt32 _solarhouse1_inverter_lpf_dc__i;
    _solarhouse1_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse1_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse1_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_lpf_dc__i = 0; _solarhouse1_inverter_lpf_dc__i < 1; _solarhouse1_inverter_lpf_dc__i++) {
        _solarhouse1_inverter_lpf_dc__b_sum += _solarhouse1_inverter_lpf_dc__b_coeff[_solarhouse1_inverter_lpf_dc__i + 1] * _solarhouse1_inverter_lpf_dc__states[_solarhouse1_inverter_lpf_dc__i];
    }
    _solarhouse1_inverter_lpf_dc__a_sum += _solarhouse1_inverter_lpf_dc__states[0] * _solarhouse1_inverter_lpf_dc__a_coeff[1];
    _solarhouse1_inverter_lpf_dc__delay_line_in = _solarhouse1_inverter_vdc_va1__out - _solarhouse1_inverter_lpf_dc__a_sum;
    _solarhouse1_inverter_lpf_dc__b_sum += _solarhouse1_inverter_lpf_dc__b_coeff[0] * _solarhouse1_inverter_lpf_dc__delay_line_in;
    _solarhouse1_inverter_lpf_dc__out = _solarhouse1_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF.Gain
    _solarhouse1_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse1_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse1.Measurement.BPF1.Gain
    _solarhouse1_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse1_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse1.Measurement.BPF.LPF
    X_UnInt32 _solarhouse1_measurement_bpf_lpf__i;
    _solarhouse1_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf_lpf__i = 0; _solarhouse1_measurement_bpf_lpf__i < 1; _solarhouse1_measurement_bpf_lpf__i++) {
        _solarhouse1_measurement_bpf_lpf__b_sum += _solarhouse1_measurement_bpf_lpf__b_coeff[_solarhouse1_measurement_bpf_lpf__i + 1] * _solarhouse1_measurement_bpf_lpf__states[_solarhouse1_measurement_bpf_lpf__i];
    }
    _solarhouse1_measurement_bpf_lpf__a_sum += _solarhouse1_measurement_bpf_lpf__states[0] * _solarhouse1_measurement_bpf_lpf__a_coeff[1];
    _solarhouse1_measurement_bpf_lpf__delay_line_in = _solarhouse1_measurement_ia_ia1__out - _solarhouse1_measurement_bpf_lpf__a_sum;
    _solarhouse1_measurement_bpf_lpf__b_sum += _solarhouse1_measurement_bpf_lpf__b_coeff[0] * _solarhouse1_measurement_bpf_lpf__delay_line_in;
    _solarhouse1_measurement_bpf_lpf__out = _solarhouse1_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse1.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse1_measurement_bpf1_lpf__i;
    _solarhouse1_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse1_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse1_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_bpf1_lpf__i = 0; _solarhouse1_measurement_bpf1_lpf__i < 1; _solarhouse1_measurement_bpf1_lpf__i++) {
        _solarhouse1_measurement_bpf1_lpf__b_sum += _solarhouse1_measurement_bpf1_lpf__b_coeff[_solarhouse1_measurement_bpf1_lpf__i + 1] * _solarhouse1_measurement_bpf1_lpf__states[_solarhouse1_measurement_bpf1_lpf__i];
    }
    _solarhouse1_measurement_bpf1_lpf__a_sum += _solarhouse1_measurement_bpf1_lpf__states[0] * _solarhouse1_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse1_measurement_bpf1_lpf__delay_line_in = _solarhouse1_measurement_va_va1__out - _solarhouse1_measurement_bpf1_lpf__a_sum;
    _solarhouse1_measurement_bpf1_lpf__b_sum += _solarhouse1_measurement_bpf1_lpf__b_coeff[0] * _solarhouse1_measurement_bpf1_lpf__delay_line_in;
    _solarhouse1_measurement_bpf1_lpf__out = _solarhouse1_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain32
    _solarhouse1_inverter_controller_gain32__out = 2e-05 * _solarhouse1_rate_transition1_output__out;
    // Generated from the component: SolarHouse1.Inverter.Pref_probe
    HIL_OutAO(0x402f, (float)_solarhouse1_rate_transition1_output__out);
    // Generated from the component: SolarHouse2.Inverter.BPF.Gain
    _solarhouse2_inverter_bpf_gain__out = 1.2500000000000002 * _solarhouse2_inverter_bpf_hpf__out;
    // Generated from the component: SolarHouse2.Inverter.BPF1.Gain
    _solarhouse2_inverter_bpf1_gain__out = 1.2500000000000002 * _solarhouse2_inverter_bpf1_hpf__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function4
    _solarhouse2_inverter_controller_c_function4__Ts = _solarhouse2_inverter_controller_constant4__out;
    _solarhouse2_inverter_controller_c_function4__in = _solarhouse2_inverter_controller_constant6__out;
    _solarhouse2_inverter_controller_c_function4__pi = _solarhouse2_inverter_controller_constant3__out;
    _solarhouse2_inverter_controller_c_function4__out = _solarhouse2_inverter_controller_c_function4__out + _solarhouse2_inverter_controller_c_function4__in * _solarhouse2_inverter_controller_c_function4__Ts;
    if (_solarhouse2_inverter_controller_c_function4__out >= 2 * _solarhouse2_inverter_controller_c_function4__pi) {
        _solarhouse2_inverter_controller_c_function4__out = _solarhouse2_inverter_controller_c_function4__out - 2 * _solarhouse2_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function1
    _solarhouse2_inverter_controller_c_function1__charge = _solarhouse2_inverter_controller_rate_transition8_output__out;
    _solarhouse2_inverter_controller_c_function1__ref = _solarhouse2_inverter_controller_rate_transition9_output__out;
    if (_solarhouse2_inverter_controller_c_function1__charge > 0)_solarhouse2_inverter_controller_c_function1__out = -1;
    else _solarhouse2_inverter_controller_c_function1__out = _solarhouse2_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse2.Inverter.Controller.Rate Transition8.Input
    _solarhouse2_inverter_controller_rate_transition8_output__out = _solarhouse2_inverter_controller_charge__out;
    // Generated from the component: SolarHouse2.Inverter.BPF.LPF
    X_UnInt32 _solarhouse2_inverter_bpf_lpf__i;
    _solarhouse2_inverter_bpf_lpf__a_sum = 0.0f;
    _solarhouse2_inverter_bpf_lpf__b_sum = 0.0f;
    _solarhouse2_inverter_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_bpf_lpf__i = 0; _solarhouse2_inverter_bpf_lpf__i < 1; _solarhouse2_inverter_bpf_lpf__i++) {
        _solarhouse2_inverter_bpf_lpf__b_sum += _solarhouse2_inverter_bpf_lpf__b_coeff[_solarhouse2_inverter_bpf_lpf__i + 1] * _solarhouse2_inverter_bpf_lpf__states[_solarhouse2_inverter_bpf_lpf__i];
    }
    _solarhouse2_inverter_bpf_lpf__a_sum += _solarhouse2_inverter_bpf_lpf__states[0] * _solarhouse2_inverter_bpf_lpf__a_coeff[1];
    _solarhouse2_inverter_bpf_lpf__delay_line_in = _solarhouse2_inverter_e_va1__out - _solarhouse2_inverter_bpf_lpf__a_sum;
    _solarhouse2_inverter_bpf_lpf__b_sum += _solarhouse2_inverter_bpf_lpf__b_coeff[0] * _solarhouse2_inverter_bpf_lpf__delay_line_in;
    _solarhouse2_inverter_bpf_lpf__out = _solarhouse2_inverter_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.BPF1.LPF
    X_UnInt32 _solarhouse2_inverter_bpf1_lpf__i;
    _solarhouse2_inverter_bpf1_lpf__a_sum = 0.0f;
    _solarhouse2_inverter_bpf1_lpf__b_sum = 0.0f;
    _solarhouse2_inverter_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_bpf1_lpf__i = 0; _solarhouse2_inverter_bpf1_lpf__i < 1; _solarhouse2_inverter_bpf1_lpf__i++) {
        _solarhouse2_inverter_bpf1_lpf__b_sum += _solarhouse2_inverter_bpf1_lpf__b_coeff[_solarhouse2_inverter_bpf1_lpf__i + 1] * _solarhouse2_inverter_bpf1_lpf__states[_solarhouse2_inverter_bpf1_lpf__i];
    }
    _solarhouse2_inverter_bpf1_lpf__a_sum += _solarhouse2_inverter_bpf1_lpf__states[0] * _solarhouse2_inverter_bpf1_lpf__a_coeff[1];
    _solarhouse2_inverter_bpf1_lpf__delay_line_in = _solarhouse2_inverter_i_ia1__out - _solarhouse2_inverter_bpf1_lpf__a_sum;
    _solarhouse2_inverter_bpf1_lpf__b_sum += _solarhouse2_inverter_bpf1_lpf__b_coeff[0] * _solarhouse2_inverter_bpf1_lpf__delay_line_in;
    _solarhouse2_inverter_bpf1_lpf__out = _solarhouse2_inverter_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.P
    HIL_OutAO(0x4047, (float)_solarhouse2_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse2.Inverter.Q
    HIL_OutAO(0x4049, (float)_solarhouse2_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Gain6
    _solarhouse2_inverter_power_meas_gain6__out = 50000.0 * _solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse2.Inverter.pf
    HIL_OutAO(0x404c, (float)_solarhouse2_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse2.Inverter.LPF_dc
    X_UnInt32 _solarhouse2_inverter_lpf_dc__i;
    _solarhouse2_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse2_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse2_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_lpf_dc__i = 0; _solarhouse2_inverter_lpf_dc__i < 1; _solarhouse2_inverter_lpf_dc__i++) {
        _solarhouse2_inverter_lpf_dc__b_sum += _solarhouse2_inverter_lpf_dc__b_coeff[_solarhouse2_inverter_lpf_dc__i + 1] * _solarhouse2_inverter_lpf_dc__states[_solarhouse2_inverter_lpf_dc__i];
    }
    _solarhouse2_inverter_lpf_dc__a_sum += _solarhouse2_inverter_lpf_dc__states[0] * _solarhouse2_inverter_lpf_dc__a_coeff[1];
    _solarhouse2_inverter_lpf_dc__delay_line_in = _solarhouse2_inverter_vdc_va1__out - _solarhouse2_inverter_lpf_dc__a_sum;
    _solarhouse2_inverter_lpf_dc__b_sum += _solarhouse2_inverter_lpf_dc__b_coeff[0] * _solarhouse2_inverter_lpf_dc__delay_line_in;
    _solarhouse2_inverter_lpf_dc__out = _solarhouse2_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF.Gain
    _solarhouse2_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse2_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse2.Measurement.BPF1.Gain
    _solarhouse2_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse2_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse2.Measurement.BPF.LPF
    X_UnInt32 _solarhouse2_measurement_bpf_lpf__i;
    _solarhouse2_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf_lpf__i = 0; _solarhouse2_measurement_bpf_lpf__i < 1; _solarhouse2_measurement_bpf_lpf__i++) {
        _solarhouse2_measurement_bpf_lpf__b_sum += _solarhouse2_measurement_bpf_lpf__b_coeff[_solarhouse2_measurement_bpf_lpf__i + 1] * _solarhouse2_measurement_bpf_lpf__states[_solarhouse2_measurement_bpf_lpf__i];
    }
    _solarhouse2_measurement_bpf_lpf__a_sum += _solarhouse2_measurement_bpf_lpf__states[0] * _solarhouse2_measurement_bpf_lpf__a_coeff[1];
    _solarhouse2_measurement_bpf_lpf__delay_line_in = _solarhouse2_measurement_ia_ia1__out - _solarhouse2_measurement_bpf_lpf__a_sum;
    _solarhouse2_measurement_bpf_lpf__b_sum += _solarhouse2_measurement_bpf_lpf__b_coeff[0] * _solarhouse2_measurement_bpf_lpf__delay_line_in;
    _solarhouse2_measurement_bpf_lpf__out = _solarhouse2_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse2.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse2_measurement_bpf1_lpf__i;
    _solarhouse2_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse2_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse2_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_bpf1_lpf__i = 0; _solarhouse2_measurement_bpf1_lpf__i < 1; _solarhouse2_measurement_bpf1_lpf__i++) {
        _solarhouse2_measurement_bpf1_lpf__b_sum += _solarhouse2_measurement_bpf1_lpf__b_coeff[_solarhouse2_measurement_bpf1_lpf__i + 1] * _solarhouse2_measurement_bpf1_lpf__states[_solarhouse2_measurement_bpf1_lpf__i];
    }
    _solarhouse2_measurement_bpf1_lpf__a_sum += _solarhouse2_measurement_bpf1_lpf__states[0] * _solarhouse2_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse2_measurement_bpf1_lpf__delay_line_in = _solarhouse2_measurement_va_va1__out - _solarhouse2_measurement_bpf1_lpf__a_sum;
    _solarhouse2_measurement_bpf1_lpf__b_sum += _solarhouse2_measurement_bpf1_lpf__b_coeff[0] * _solarhouse2_measurement_bpf1_lpf__delay_line_in;
    _solarhouse2_measurement_bpf1_lpf__out = _solarhouse2_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain32
    _solarhouse2_inverter_controller_gain32__out = 2e-05 * _solarhouse2_rate_transition1_output__out;
    // Generated from the component: SolarHouse2.Inverter.Pref_probe
    HIL_OutAO(0x4048, (float)_solarhouse2_rate_transition1_output__out);
    // Generated from the component: SolarHouse3.Inverter.BPF.Gain
    _solarhouse3_inverter_bpf_gain__out = 1.2500000000000002 * _solarhouse3_inverter_bpf_hpf__out;
    // Generated from the component: SolarHouse3.Inverter.BPF1.Gain
    _solarhouse3_inverter_bpf1_gain__out = 1.2500000000000002 * _solarhouse3_inverter_bpf1_hpf__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function4
    _solarhouse3_inverter_controller_c_function4__Ts = _solarhouse3_inverter_controller_constant4__out;
    _solarhouse3_inverter_controller_c_function4__in = _solarhouse3_inverter_controller_constant6__out;
    _solarhouse3_inverter_controller_c_function4__pi = _solarhouse3_inverter_controller_constant3__out;
    _solarhouse3_inverter_controller_c_function4__out = _solarhouse3_inverter_controller_c_function4__out + _solarhouse3_inverter_controller_c_function4__in * _solarhouse3_inverter_controller_c_function4__Ts;
    if (_solarhouse3_inverter_controller_c_function4__out >= 2 * _solarhouse3_inverter_controller_c_function4__pi) {
        _solarhouse3_inverter_controller_c_function4__out = _solarhouse3_inverter_controller_c_function4__out - 2 * _solarhouse3_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function1
    _solarhouse3_inverter_controller_c_function1__charge = _solarhouse3_inverter_controller_rate_transition8_output__out;
    _solarhouse3_inverter_controller_c_function1__ref = _solarhouse3_inverter_controller_rate_transition9_output__out;
    if (_solarhouse3_inverter_controller_c_function1__charge > 0)_solarhouse3_inverter_controller_c_function1__out = -1;
    else _solarhouse3_inverter_controller_c_function1__out = _solarhouse3_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse3.Inverter.Controller.Rate Transition8.Input
    _solarhouse3_inverter_controller_rate_transition8_output__out = _solarhouse3_inverter_controller_charge__out;
    // Generated from the component: SolarHouse3.Inverter.BPF.LPF
    X_UnInt32 _solarhouse3_inverter_bpf_lpf__i;
    _solarhouse3_inverter_bpf_lpf__a_sum = 0.0f;
    _solarhouse3_inverter_bpf_lpf__b_sum = 0.0f;
    _solarhouse3_inverter_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_bpf_lpf__i = 0; _solarhouse3_inverter_bpf_lpf__i < 1; _solarhouse3_inverter_bpf_lpf__i++) {
        _solarhouse3_inverter_bpf_lpf__b_sum += _solarhouse3_inverter_bpf_lpf__b_coeff[_solarhouse3_inverter_bpf_lpf__i + 1] * _solarhouse3_inverter_bpf_lpf__states[_solarhouse3_inverter_bpf_lpf__i];
    }
    _solarhouse3_inverter_bpf_lpf__a_sum += _solarhouse3_inverter_bpf_lpf__states[0] * _solarhouse3_inverter_bpf_lpf__a_coeff[1];
    _solarhouse3_inverter_bpf_lpf__delay_line_in = _solarhouse3_inverter_e_va1__out - _solarhouse3_inverter_bpf_lpf__a_sum;
    _solarhouse3_inverter_bpf_lpf__b_sum += _solarhouse3_inverter_bpf_lpf__b_coeff[0] * _solarhouse3_inverter_bpf_lpf__delay_line_in;
    _solarhouse3_inverter_bpf_lpf__out = _solarhouse3_inverter_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.BPF1.LPF
    X_UnInt32 _solarhouse3_inverter_bpf1_lpf__i;
    _solarhouse3_inverter_bpf1_lpf__a_sum = 0.0f;
    _solarhouse3_inverter_bpf1_lpf__b_sum = 0.0f;
    _solarhouse3_inverter_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_bpf1_lpf__i = 0; _solarhouse3_inverter_bpf1_lpf__i < 1; _solarhouse3_inverter_bpf1_lpf__i++) {
        _solarhouse3_inverter_bpf1_lpf__b_sum += _solarhouse3_inverter_bpf1_lpf__b_coeff[_solarhouse3_inverter_bpf1_lpf__i + 1] * _solarhouse3_inverter_bpf1_lpf__states[_solarhouse3_inverter_bpf1_lpf__i];
    }
    _solarhouse3_inverter_bpf1_lpf__a_sum += _solarhouse3_inverter_bpf1_lpf__states[0] * _solarhouse3_inverter_bpf1_lpf__a_coeff[1];
    _solarhouse3_inverter_bpf1_lpf__delay_line_in = _solarhouse3_inverter_i_ia1__out - _solarhouse3_inverter_bpf1_lpf__a_sum;
    _solarhouse3_inverter_bpf1_lpf__b_sum += _solarhouse3_inverter_bpf1_lpf__b_coeff[0] * _solarhouse3_inverter_bpf1_lpf__delay_line_in;
    _solarhouse3_inverter_bpf1_lpf__out = _solarhouse3_inverter_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.P
    HIL_OutAO(0x4060, (float)_solarhouse3_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse3.Inverter.Q
    HIL_OutAO(0x4062, (float)_solarhouse3_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Gain6
    _solarhouse3_inverter_power_meas_gain6__out = 50000.0 * _solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse3.Inverter.pf
    HIL_OutAO(0x4065, (float)_solarhouse3_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse3.Inverter.LPF_dc
    X_UnInt32 _solarhouse3_inverter_lpf_dc__i;
    _solarhouse3_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse3_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse3_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_lpf_dc__i = 0; _solarhouse3_inverter_lpf_dc__i < 1; _solarhouse3_inverter_lpf_dc__i++) {
        _solarhouse3_inverter_lpf_dc__b_sum += _solarhouse3_inverter_lpf_dc__b_coeff[_solarhouse3_inverter_lpf_dc__i + 1] * _solarhouse3_inverter_lpf_dc__states[_solarhouse3_inverter_lpf_dc__i];
    }
    _solarhouse3_inverter_lpf_dc__a_sum += _solarhouse3_inverter_lpf_dc__states[0] * _solarhouse3_inverter_lpf_dc__a_coeff[1];
    _solarhouse3_inverter_lpf_dc__delay_line_in = _solarhouse3_inverter_vdc_va1__out - _solarhouse3_inverter_lpf_dc__a_sum;
    _solarhouse3_inverter_lpf_dc__b_sum += _solarhouse3_inverter_lpf_dc__b_coeff[0] * _solarhouse3_inverter_lpf_dc__delay_line_in;
    _solarhouse3_inverter_lpf_dc__out = _solarhouse3_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF.Gain
    _solarhouse3_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse3_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse3.Measurement.BPF1.Gain
    _solarhouse3_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse3_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse3.Measurement.BPF.LPF
    X_UnInt32 _solarhouse3_measurement_bpf_lpf__i;
    _solarhouse3_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf_lpf__i = 0; _solarhouse3_measurement_bpf_lpf__i < 1; _solarhouse3_measurement_bpf_lpf__i++) {
        _solarhouse3_measurement_bpf_lpf__b_sum += _solarhouse3_measurement_bpf_lpf__b_coeff[_solarhouse3_measurement_bpf_lpf__i + 1] * _solarhouse3_measurement_bpf_lpf__states[_solarhouse3_measurement_bpf_lpf__i];
    }
    _solarhouse3_measurement_bpf_lpf__a_sum += _solarhouse3_measurement_bpf_lpf__states[0] * _solarhouse3_measurement_bpf_lpf__a_coeff[1];
    _solarhouse3_measurement_bpf_lpf__delay_line_in = _solarhouse3_measurement_ia_ia1__out - _solarhouse3_measurement_bpf_lpf__a_sum;
    _solarhouse3_measurement_bpf_lpf__b_sum += _solarhouse3_measurement_bpf_lpf__b_coeff[0] * _solarhouse3_measurement_bpf_lpf__delay_line_in;
    _solarhouse3_measurement_bpf_lpf__out = _solarhouse3_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse3.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse3_measurement_bpf1_lpf__i;
    _solarhouse3_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse3_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse3_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_bpf1_lpf__i = 0; _solarhouse3_measurement_bpf1_lpf__i < 1; _solarhouse3_measurement_bpf1_lpf__i++) {
        _solarhouse3_measurement_bpf1_lpf__b_sum += _solarhouse3_measurement_bpf1_lpf__b_coeff[_solarhouse3_measurement_bpf1_lpf__i + 1] * _solarhouse3_measurement_bpf1_lpf__states[_solarhouse3_measurement_bpf1_lpf__i];
    }
    _solarhouse3_measurement_bpf1_lpf__a_sum += _solarhouse3_measurement_bpf1_lpf__states[0] * _solarhouse3_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse3_measurement_bpf1_lpf__delay_line_in = _solarhouse3_measurement_va_va1__out - _solarhouse3_measurement_bpf1_lpf__a_sum;
    _solarhouse3_measurement_bpf1_lpf__b_sum += _solarhouse3_measurement_bpf1_lpf__b_coeff[0] * _solarhouse3_measurement_bpf1_lpf__delay_line_in;
    _solarhouse3_measurement_bpf1_lpf__out = _solarhouse3_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain32
    _solarhouse3_inverter_controller_gain32__out = 2e-05 * _solarhouse3_rate_transition1_output__out;
    // Generated from the component: SolarHouse3.Inverter.Pref_probe
    HIL_OutAO(0x4061, (float)_solarhouse3_rate_transition1_output__out);
    // Generated from the component: SolarHouse4.Inverter.BPF.Gain
    _solarhouse4_inverter_bpf_gain__out = 1.2500000000000002 * _solarhouse4_inverter_bpf_hpf__out;
    // Generated from the component: SolarHouse4.Inverter.BPF1.Gain
    _solarhouse4_inverter_bpf1_gain__out = 1.2500000000000002 * _solarhouse4_inverter_bpf1_hpf__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function4
    _solarhouse4_inverter_controller_c_function4__Ts = _solarhouse4_inverter_controller_constant4__out;
    _solarhouse4_inverter_controller_c_function4__in = _solarhouse4_inverter_controller_constant6__out;
    _solarhouse4_inverter_controller_c_function4__pi = _solarhouse4_inverter_controller_constant3__out;
    _solarhouse4_inverter_controller_c_function4__out = _solarhouse4_inverter_controller_c_function4__out + _solarhouse4_inverter_controller_c_function4__in * _solarhouse4_inverter_controller_c_function4__Ts;
    if (_solarhouse4_inverter_controller_c_function4__out >= 2 * _solarhouse4_inverter_controller_c_function4__pi) {
        _solarhouse4_inverter_controller_c_function4__out = _solarhouse4_inverter_controller_c_function4__out - 2 * _solarhouse4_inverter_controller_c_function4__pi;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out = 1.0 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit3__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function1
    _solarhouse4_inverter_controller_c_function1__charge = _solarhouse4_inverter_controller_rate_transition8_output__out;
    _solarhouse4_inverter_controller_c_function1__ref = _solarhouse4_inverter_controller_rate_transition9_output__out;
    if (_solarhouse4_inverter_controller_c_function1__charge > 0)_solarhouse4_inverter_controller_c_function1__out = -1;
    else _solarhouse4_inverter_controller_c_function1__out = _solarhouse4_inverter_controller_c_function1__ref;
    // Generated from the component: SolarHouse4.Inverter.Controller.Rate Transition8.Input
    _solarhouse4_inverter_controller_rate_transition8_output__out = _solarhouse4_inverter_controller_charge__out;
    // Generated from the component: SolarHouse4.Inverter.BPF.LPF
    X_UnInt32 _solarhouse4_inverter_bpf_lpf__i;
    _solarhouse4_inverter_bpf_lpf__a_sum = 0.0f;
    _solarhouse4_inverter_bpf_lpf__b_sum = 0.0f;
    _solarhouse4_inverter_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_bpf_lpf__i = 0; _solarhouse4_inverter_bpf_lpf__i < 1; _solarhouse4_inverter_bpf_lpf__i++) {
        _solarhouse4_inverter_bpf_lpf__b_sum += _solarhouse4_inverter_bpf_lpf__b_coeff[_solarhouse4_inverter_bpf_lpf__i + 1] * _solarhouse4_inverter_bpf_lpf__states[_solarhouse4_inverter_bpf_lpf__i];
    }
    _solarhouse4_inverter_bpf_lpf__a_sum += _solarhouse4_inverter_bpf_lpf__states[0] * _solarhouse4_inverter_bpf_lpf__a_coeff[1];
    _solarhouse4_inverter_bpf_lpf__delay_line_in = _solarhouse4_inverter_e_va1__out - _solarhouse4_inverter_bpf_lpf__a_sum;
    _solarhouse4_inverter_bpf_lpf__b_sum += _solarhouse4_inverter_bpf_lpf__b_coeff[0] * _solarhouse4_inverter_bpf_lpf__delay_line_in;
    _solarhouse4_inverter_bpf_lpf__out = _solarhouse4_inverter_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.BPF1.LPF
    X_UnInt32 _solarhouse4_inverter_bpf1_lpf__i;
    _solarhouse4_inverter_bpf1_lpf__a_sum = 0.0f;
    _solarhouse4_inverter_bpf1_lpf__b_sum = 0.0f;
    _solarhouse4_inverter_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_bpf1_lpf__i = 0; _solarhouse4_inverter_bpf1_lpf__i < 1; _solarhouse4_inverter_bpf1_lpf__i++) {
        _solarhouse4_inverter_bpf1_lpf__b_sum += _solarhouse4_inverter_bpf1_lpf__b_coeff[_solarhouse4_inverter_bpf1_lpf__i + 1] * _solarhouse4_inverter_bpf1_lpf__states[_solarhouse4_inverter_bpf1_lpf__i];
    }
    _solarhouse4_inverter_bpf1_lpf__a_sum += _solarhouse4_inverter_bpf1_lpf__states[0] * _solarhouse4_inverter_bpf1_lpf__a_coeff[1];
    _solarhouse4_inverter_bpf1_lpf__delay_line_in = _solarhouse4_inverter_i_ia1__out - _solarhouse4_inverter_bpf1_lpf__a_sum;
    _solarhouse4_inverter_bpf1_lpf__b_sum += _solarhouse4_inverter_bpf1_lpf__b_coeff[0] * _solarhouse4_inverter_bpf1_lpf__delay_line_in;
    _solarhouse4_inverter_bpf1_lpf__out = _solarhouse4_inverter_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.P
    HIL_OutAO(0x4079, (float)_solarhouse4_inverter_power_meas_gain4__out);
    // Generated from the component: SolarHouse4.Inverter.Q
    HIL_OutAO(0x407b, (float)_solarhouse4_inverter_power_meas_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Gain6
    _solarhouse4_inverter_power_meas_gain6__out = 50000.0 * _solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__S;
    // Generated from the component: SolarHouse4.Inverter.pf
    HIL_OutAO(0x407e, (float)_solarhouse4_inverter_power_meas_power_meas_dqpu_s_and_pf__pf);
    // Generated from the component: SolarHouse4.Inverter.LPF_dc
    X_UnInt32 _solarhouse4_inverter_lpf_dc__i;
    _solarhouse4_inverter_lpf_dc__a_sum = 0.0f;
    _solarhouse4_inverter_lpf_dc__b_sum = 0.0f;
    _solarhouse4_inverter_lpf_dc__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_lpf_dc__i = 0; _solarhouse4_inverter_lpf_dc__i < 1; _solarhouse4_inverter_lpf_dc__i++) {
        _solarhouse4_inverter_lpf_dc__b_sum += _solarhouse4_inverter_lpf_dc__b_coeff[_solarhouse4_inverter_lpf_dc__i + 1] * _solarhouse4_inverter_lpf_dc__states[_solarhouse4_inverter_lpf_dc__i];
    }
    _solarhouse4_inverter_lpf_dc__a_sum += _solarhouse4_inverter_lpf_dc__states[0] * _solarhouse4_inverter_lpf_dc__a_coeff[1];
    _solarhouse4_inverter_lpf_dc__delay_line_in = _solarhouse4_inverter_vdc_va1__out - _solarhouse4_inverter_lpf_dc__a_sum;
    _solarhouse4_inverter_lpf_dc__b_sum += _solarhouse4_inverter_lpf_dc__b_coeff[0] * _solarhouse4_inverter_lpf_dc__delay_line_in;
    _solarhouse4_inverter_lpf_dc__out = _solarhouse4_inverter_lpf_dc__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF.Gain
    _solarhouse4_measurement_bpf_gain__out = 1.2500000000000002 * _solarhouse4_measurement_bpf_hpf__out;
    // Generated from the component: SolarHouse4.Measurement.BPF1.Gain
    _solarhouse4_measurement_bpf1_gain__out = 1.2500000000000002 * _solarhouse4_measurement_bpf1_hpf__out;
    // Generated from the component: SolarHouse4.Measurement.BPF.LPF
    X_UnInt32 _solarhouse4_measurement_bpf_lpf__i;
    _solarhouse4_measurement_bpf_lpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf_lpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf_lpf__i = 0; _solarhouse4_measurement_bpf_lpf__i < 1; _solarhouse4_measurement_bpf_lpf__i++) {
        _solarhouse4_measurement_bpf_lpf__b_sum += _solarhouse4_measurement_bpf_lpf__b_coeff[_solarhouse4_measurement_bpf_lpf__i + 1] * _solarhouse4_measurement_bpf_lpf__states[_solarhouse4_measurement_bpf_lpf__i];
    }
    _solarhouse4_measurement_bpf_lpf__a_sum += _solarhouse4_measurement_bpf_lpf__states[0] * _solarhouse4_measurement_bpf_lpf__a_coeff[1];
    _solarhouse4_measurement_bpf_lpf__delay_line_in = _solarhouse4_measurement_ia_ia1__out - _solarhouse4_measurement_bpf_lpf__a_sum;
    _solarhouse4_measurement_bpf_lpf__b_sum += _solarhouse4_measurement_bpf_lpf__b_coeff[0] * _solarhouse4_measurement_bpf_lpf__delay_line_in;
    _solarhouse4_measurement_bpf_lpf__out = _solarhouse4_measurement_bpf_lpf__b_sum;
    // Generated from the component: SolarHouse4.Measurement.BPF1.LPF
    X_UnInt32 _solarhouse4_measurement_bpf1_lpf__i;
    _solarhouse4_measurement_bpf1_lpf__a_sum = 0.0f;
    _solarhouse4_measurement_bpf1_lpf__b_sum = 0.0f;
    _solarhouse4_measurement_bpf1_lpf__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_bpf1_lpf__i = 0; _solarhouse4_measurement_bpf1_lpf__i < 1; _solarhouse4_measurement_bpf1_lpf__i++) {
        _solarhouse4_measurement_bpf1_lpf__b_sum += _solarhouse4_measurement_bpf1_lpf__b_coeff[_solarhouse4_measurement_bpf1_lpf__i + 1] * _solarhouse4_measurement_bpf1_lpf__states[_solarhouse4_measurement_bpf1_lpf__i];
    }
    _solarhouse4_measurement_bpf1_lpf__a_sum += _solarhouse4_measurement_bpf1_lpf__states[0] * _solarhouse4_measurement_bpf1_lpf__a_coeff[1];
    _solarhouse4_measurement_bpf1_lpf__delay_line_in = _solarhouse4_measurement_va_va1__out - _solarhouse4_measurement_bpf1_lpf__a_sum;
    _solarhouse4_measurement_bpf1_lpf__b_sum += _solarhouse4_measurement_bpf1_lpf__b_coeff[0] * _solarhouse4_measurement_bpf1_lpf__delay_line_in;
    _solarhouse4_measurement_bpf1_lpf__out = _solarhouse4_measurement_bpf1_lpf__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain32
    _solarhouse4_inverter_controller_gain32__out = 2e-05 * _solarhouse4_rate_transition1_output__out;
    // Generated from the component: SolarHouse4.Inverter.Pref_probe
    HIL_OutAO(0x407a, (float)_solarhouse4_rate_transition1_output__out);
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    X_UnInt32 _ess_inverter_controller_hilbert_transform__i;
    _ess_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform__i = 0; _ess_inverter_controller_hilbert_transform__i < 1; _ess_inverter_controller_hilbert_transform__i++) {
        _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[_ess_inverter_controller_hilbert_transform__i + 1] * _ess_inverter_controller_hilbert_transform__states[_ess_inverter_controller_hilbert_transform__i];
    }
    _ess_inverter_controller_hilbert_transform__a_sum += _ess_inverter_controller_hilbert_transform__states[0] * _ess_inverter_controller_hilbert_transform__a_coeff[1];
    _ess_inverter_controller_hilbert_transform__delay_line_in = _ess_inverter_bpf_gain__out - _ess_inverter_controller_hilbert_transform__a_sum;
    _ess_inverter_controller_hilbert_transform__b_sum += _ess_inverter_controller_hilbert_transform__b_coeff[0] * _ess_inverter_controller_hilbert_transform__delay_line_in;
    _ess_inverter_controller_hilbert_transform__out = _ess_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: ESS.Inverter.V
    HIL_OutAO(0x4018, (float)_ess_inverter_bpf_gain__out);
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _ess_inverter_controller_hilbert_transform1__i;
    _ess_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _ess_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_ess_inverter_controller_hilbert_transform1__i = 0; _ess_inverter_controller_hilbert_transform1__i < 1; _ess_inverter_controller_hilbert_transform1__i++) {
        _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[_ess_inverter_controller_hilbert_transform1__i + 1] * _ess_inverter_controller_hilbert_transform1__states[_ess_inverter_controller_hilbert_transform1__i];
    }
    _ess_inverter_controller_hilbert_transform1__a_sum += _ess_inverter_controller_hilbert_transform1__states[0] * _ess_inverter_controller_hilbert_transform1__a_coeff[1];
    _ess_inverter_controller_hilbert_transform1__delay_line_in = _ess_inverter_bpf1_gain__out - _ess_inverter_controller_hilbert_transform1__a_sum;
    _ess_inverter_controller_hilbert_transform1__b_sum += _ess_inverter_controller_hilbert_transform1__b_coeff[0] * _ess_inverter_controller_hilbert_transform1__delay_line_in;
    _ess_inverter_controller_hilbert_transform1__out = _ess_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Gain22
    _ess_inverter_controller_gain22__out = 0.02 * _ess_inverter_controller_c_function1__out;
    // Generated from the component: ESS.Inverter.S
    HIL_OutAO(0x4017, (float)_ess_inverter_power_meas_gain6__out);
    // Generated from the component: Measurement.Hilbert Transform1
    X_UnInt32 _measurement_hilbert_transform1__i;
    _measurement_hilbert_transform1__a_sum = 0.0f;
    _measurement_hilbert_transform1__b_sum = 0.0f;
    _measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_measurement_hilbert_transform1__i = 0; _measurement_hilbert_transform1__i < 1; _measurement_hilbert_transform1__i++) {
        _measurement_hilbert_transform1__b_sum += _measurement_hilbert_transform1__b_coeff[_measurement_hilbert_transform1__i + 1] * _measurement_hilbert_transform1__states[_measurement_hilbert_transform1__i];
    }
    _measurement_hilbert_transform1__a_sum += _measurement_hilbert_transform1__states[0] * _measurement_hilbert_transform1__a_coeff[1];
    _measurement_hilbert_transform1__delay_line_in = _measurement_bpf_gain__out - _measurement_hilbert_transform1__a_sum;
    _measurement_hilbert_transform1__b_sum += _measurement_hilbert_transform1__b_coeff[0] * _measurement_hilbert_transform1__delay_line_in;
    _measurement_hilbert_transform1__out = _measurement_hilbert_transform1__b_sum;
    // Generated from the component: Measurement.Hilbert Transform
    X_UnInt32 _measurement_hilbert_transform__i;
    _measurement_hilbert_transform__a_sum = 0.0f;
    _measurement_hilbert_transform__b_sum = 0.0f;
    _measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_measurement_hilbert_transform__i = 0; _measurement_hilbert_transform__i < 1; _measurement_hilbert_transform__i++) {
        _measurement_hilbert_transform__b_sum += _measurement_hilbert_transform__b_coeff[_measurement_hilbert_transform__i + 1] * _measurement_hilbert_transform__states[_measurement_hilbert_transform__i];
    }
    _measurement_hilbert_transform__a_sum += _measurement_hilbert_transform__states[0] * _measurement_hilbert_transform__a_coeff[1];
    _measurement_hilbert_transform__delay_line_in = _measurement_bpf1_gain__out - _measurement_hilbert_transform__a_sum;
    _measurement_hilbert_transform__b_sum += _measurement_hilbert_transform__b_coeff[0] * _measurement_hilbert_transform__delay_line_in;
    _measurement_hilbert_transform__out = _measurement_hilbert_transform__b_sum;
    // Generated from the component: Measurement.Product1
    _measurement_product1__out = (_measurement_bpf1_gain__out * _measurement_bpf_gain__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform__i;
    _solarhouse1_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_hilbert_transform__i = 0; _solarhouse1_inverter_controller_hilbert_transform__i < 1; _solarhouse1_inverter_controller_hilbert_transform__i++) {
        _solarhouse1_inverter_controller_hilbert_transform__b_sum += _solarhouse1_inverter_controller_hilbert_transform__b_coeff[_solarhouse1_inverter_controller_hilbert_transform__i + 1] * _solarhouse1_inverter_controller_hilbert_transform__states[_solarhouse1_inverter_controller_hilbert_transform__i];
    }
    _solarhouse1_inverter_controller_hilbert_transform__a_sum += _solarhouse1_inverter_controller_hilbert_transform__states[0] * _solarhouse1_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse1_inverter_controller_hilbert_transform__delay_line_in = _solarhouse1_inverter_bpf_gain__out - _solarhouse1_inverter_controller_hilbert_transform__a_sum;
    _solarhouse1_inverter_controller_hilbert_transform__b_sum += _solarhouse1_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse1_inverter_controller_hilbert_transform__out = _solarhouse1_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse1.Inverter.V
    HIL_OutAO(0x4032, (float)_solarhouse1_inverter_bpf_gain__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse1_inverter_controller_hilbert_transform1__i;
    _solarhouse1_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_hilbert_transform1__i = 0; _solarhouse1_inverter_controller_hilbert_transform1__i < 1; _solarhouse1_inverter_controller_hilbert_transform1__i++) {
        _solarhouse1_inverter_controller_hilbert_transform1__b_sum += _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[_solarhouse1_inverter_controller_hilbert_transform1__i + 1] * _solarhouse1_inverter_controller_hilbert_transform1__states[_solarhouse1_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse1_inverter_controller_hilbert_transform1__a_sum += _solarhouse1_inverter_controller_hilbert_transform1__states[0] * _solarhouse1_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse1_inverter_bpf1_gain__out - _solarhouse1_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse1_inverter_controller_hilbert_transform1__b_sum += _solarhouse1_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse1_inverter_controller_hilbert_transform1__out = _solarhouse1_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain22
    _solarhouse1_inverter_controller_gain22__out = 0.02 * _solarhouse1_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse1.Inverter.S
    HIL_OutAO(0x4031, (float)_solarhouse1_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse1_measurement_hilbert_transform1__i;
    _solarhouse1_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_hilbert_transform1__i = 0; _solarhouse1_measurement_hilbert_transform1__i < 1; _solarhouse1_measurement_hilbert_transform1__i++) {
        _solarhouse1_measurement_hilbert_transform1__b_sum += _solarhouse1_measurement_hilbert_transform1__b_coeff[_solarhouse1_measurement_hilbert_transform1__i + 1] * _solarhouse1_measurement_hilbert_transform1__states[_solarhouse1_measurement_hilbert_transform1__i];
    }
    _solarhouse1_measurement_hilbert_transform1__a_sum += _solarhouse1_measurement_hilbert_transform1__states[0] * _solarhouse1_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse1_measurement_hilbert_transform1__delay_line_in = _solarhouse1_measurement_bpf_gain__out - _solarhouse1_measurement_hilbert_transform1__a_sum;
    _solarhouse1_measurement_hilbert_transform1__b_sum += _solarhouse1_measurement_hilbert_transform1__b_coeff[0] * _solarhouse1_measurement_hilbert_transform1__delay_line_in;
    _solarhouse1_measurement_hilbert_transform1__out = _solarhouse1_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse1_measurement_hilbert_transform__i;
    _solarhouse1_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse1_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_hilbert_transform__i = 0; _solarhouse1_measurement_hilbert_transform__i < 1; _solarhouse1_measurement_hilbert_transform__i++) {
        _solarhouse1_measurement_hilbert_transform__b_sum += _solarhouse1_measurement_hilbert_transform__b_coeff[_solarhouse1_measurement_hilbert_transform__i + 1] * _solarhouse1_measurement_hilbert_transform__states[_solarhouse1_measurement_hilbert_transform__i];
    }
    _solarhouse1_measurement_hilbert_transform__a_sum += _solarhouse1_measurement_hilbert_transform__states[0] * _solarhouse1_measurement_hilbert_transform__a_coeff[1];
    _solarhouse1_measurement_hilbert_transform__delay_line_in = _solarhouse1_measurement_bpf1_gain__out - _solarhouse1_measurement_hilbert_transform__a_sum;
    _solarhouse1_measurement_hilbert_transform__b_sum += _solarhouse1_measurement_hilbert_transform__b_coeff[0] * _solarhouse1_measurement_hilbert_transform__delay_line_in;
    _solarhouse1_measurement_hilbert_transform__out = _solarhouse1_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse1.Measurement.Product1
    _solarhouse1_measurement_product1__out = (_solarhouse1_measurement_bpf1_gain__out * _solarhouse1_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform__i;
    _solarhouse2_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_hilbert_transform__i = 0; _solarhouse2_inverter_controller_hilbert_transform__i < 1; _solarhouse2_inverter_controller_hilbert_transform__i++) {
        _solarhouse2_inverter_controller_hilbert_transform__b_sum += _solarhouse2_inverter_controller_hilbert_transform__b_coeff[_solarhouse2_inverter_controller_hilbert_transform__i + 1] * _solarhouse2_inverter_controller_hilbert_transform__states[_solarhouse2_inverter_controller_hilbert_transform__i];
    }
    _solarhouse2_inverter_controller_hilbert_transform__a_sum += _solarhouse2_inverter_controller_hilbert_transform__states[0] * _solarhouse2_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse2_inverter_controller_hilbert_transform__delay_line_in = _solarhouse2_inverter_bpf_gain__out - _solarhouse2_inverter_controller_hilbert_transform__a_sum;
    _solarhouse2_inverter_controller_hilbert_transform__b_sum += _solarhouse2_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse2_inverter_controller_hilbert_transform__out = _solarhouse2_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse2.Inverter.V
    HIL_OutAO(0x404b, (float)_solarhouse2_inverter_bpf_gain__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse2_inverter_controller_hilbert_transform1__i;
    _solarhouse2_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_hilbert_transform1__i = 0; _solarhouse2_inverter_controller_hilbert_transform1__i < 1; _solarhouse2_inverter_controller_hilbert_transform1__i++) {
        _solarhouse2_inverter_controller_hilbert_transform1__b_sum += _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[_solarhouse2_inverter_controller_hilbert_transform1__i + 1] * _solarhouse2_inverter_controller_hilbert_transform1__states[_solarhouse2_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse2_inverter_controller_hilbert_transform1__a_sum += _solarhouse2_inverter_controller_hilbert_transform1__states[0] * _solarhouse2_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse2_inverter_bpf1_gain__out - _solarhouse2_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse2_inverter_controller_hilbert_transform1__b_sum += _solarhouse2_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse2_inverter_controller_hilbert_transform1__out = _solarhouse2_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain22
    _solarhouse2_inverter_controller_gain22__out = 0.02 * _solarhouse2_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse2.Inverter.S
    HIL_OutAO(0x404a, (float)_solarhouse2_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse2_measurement_hilbert_transform1__i;
    _solarhouse2_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_hilbert_transform1__i = 0; _solarhouse2_measurement_hilbert_transform1__i < 1; _solarhouse2_measurement_hilbert_transform1__i++) {
        _solarhouse2_measurement_hilbert_transform1__b_sum += _solarhouse2_measurement_hilbert_transform1__b_coeff[_solarhouse2_measurement_hilbert_transform1__i + 1] * _solarhouse2_measurement_hilbert_transform1__states[_solarhouse2_measurement_hilbert_transform1__i];
    }
    _solarhouse2_measurement_hilbert_transform1__a_sum += _solarhouse2_measurement_hilbert_transform1__states[0] * _solarhouse2_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse2_measurement_hilbert_transform1__delay_line_in = _solarhouse2_measurement_bpf_gain__out - _solarhouse2_measurement_hilbert_transform1__a_sum;
    _solarhouse2_measurement_hilbert_transform1__b_sum += _solarhouse2_measurement_hilbert_transform1__b_coeff[0] * _solarhouse2_measurement_hilbert_transform1__delay_line_in;
    _solarhouse2_measurement_hilbert_transform1__out = _solarhouse2_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse2_measurement_hilbert_transform__i;
    _solarhouse2_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse2_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_hilbert_transform__i = 0; _solarhouse2_measurement_hilbert_transform__i < 1; _solarhouse2_measurement_hilbert_transform__i++) {
        _solarhouse2_measurement_hilbert_transform__b_sum += _solarhouse2_measurement_hilbert_transform__b_coeff[_solarhouse2_measurement_hilbert_transform__i + 1] * _solarhouse2_measurement_hilbert_transform__states[_solarhouse2_measurement_hilbert_transform__i];
    }
    _solarhouse2_measurement_hilbert_transform__a_sum += _solarhouse2_measurement_hilbert_transform__states[0] * _solarhouse2_measurement_hilbert_transform__a_coeff[1];
    _solarhouse2_measurement_hilbert_transform__delay_line_in = _solarhouse2_measurement_bpf1_gain__out - _solarhouse2_measurement_hilbert_transform__a_sum;
    _solarhouse2_measurement_hilbert_transform__b_sum += _solarhouse2_measurement_hilbert_transform__b_coeff[0] * _solarhouse2_measurement_hilbert_transform__delay_line_in;
    _solarhouse2_measurement_hilbert_transform__out = _solarhouse2_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse2.Measurement.Product1
    _solarhouse2_measurement_product1__out = (_solarhouse2_measurement_bpf1_gain__out * _solarhouse2_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform__i;
    _solarhouse3_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_hilbert_transform__i = 0; _solarhouse3_inverter_controller_hilbert_transform__i < 1; _solarhouse3_inverter_controller_hilbert_transform__i++) {
        _solarhouse3_inverter_controller_hilbert_transform__b_sum += _solarhouse3_inverter_controller_hilbert_transform__b_coeff[_solarhouse3_inverter_controller_hilbert_transform__i + 1] * _solarhouse3_inverter_controller_hilbert_transform__states[_solarhouse3_inverter_controller_hilbert_transform__i];
    }
    _solarhouse3_inverter_controller_hilbert_transform__a_sum += _solarhouse3_inverter_controller_hilbert_transform__states[0] * _solarhouse3_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse3_inverter_controller_hilbert_transform__delay_line_in = _solarhouse3_inverter_bpf_gain__out - _solarhouse3_inverter_controller_hilbert_transform__a_sum;
    _solarhouse3_inverter_controller_hilbert_transform__b_sum += _solarhouse3_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse3_inverter_controller_hilbert_transform__out = _solarhouse3_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse3.Inverter.V
    HIL_OutAO(0x4064, (float)_solarhouse3_inverter_bpf_gain__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse3_inverter_controller_hilbert_transform1__i;
    _solarhouse3_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_hilbert_transform1__i = 0; _solarhouse3_inverter_controller_hilbert_transform1__i < 1; _solarhouse3_inverter_controller_hilbert_transform1__i++) {
        _solarhouse3_inverter_controller_hilbert_transform1__b_sum += _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[_solarhouse3_inverter_controller_hilbert_transform1__i + 1] * _solarhouse3_inverter_controller_hilbert_transform1__states[_solarhouse3_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse3_inverter_controller_hilbert_transform1__a_sum += _solarhouse3_inverter_controller_hilbert_transform1__states[0] * _solarhouse3_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse3_inverter_bpf1_gain__out - _solarhouse3_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse3_inverter_controller_hilbert_transform1__b_sum += _solarhouse3_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse3_inverter_controller_hilbert_transform1__out = _solarhouse3_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain22
    _solarhouse3_inverter_controller_gain22__out = 0.02 * _solarhouse3_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse3.Inverter.S
    HIL_OutAO(0x4063, (float)_solarhouse3_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse3_measurement_hilbert_transform1__i;
    _solarhouse3_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_hilbert_transform1__i = 0; _solarhouse3_measurement_hilbert_transform1__i < 1; _solarhouse3_measurement_hilbert_transform1__i++) {
        _solarhouse3_measurement_hilbert_transform1__b_sum += _solarhouse3_measurement_hilbert_transform1__b_coeff[_solarhouse3_measurement_hilbert_transform1__i + 1] * _solarhouse3_measurement_hilbert_transform1__states[_solarhouse3_measurement_hilbert_transform1__i];
    }
    _solarhouse3_measurement_hilbert_transform1__a_sum += _solarhouse3_measurement_hilbert_transform1__states[0] * _solarhouse3_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse3_measurement_hilbert_transform1__delay_line_in = _solarhouse3_measurement_bpf_gain__out - _solarhouse3_measurement_hilbert_transform1__a_sum;
    _solarhouse3_measurement_hilbert_transform1__b_sum += _solarhouse3_measurement_hilbert_transform1__b_coeff[0] * _solarhouse3_measurement_hilbert_transform1__delay_line_in;
    _solarhouse3_measurement_hilbert_transform1__out = _solarhouse3_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse3_measurement_hilbert_transform__i;
    _solarhouse3_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse3_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_hilbert_transform__i = 0; _solarhouse3_measurement_hilbert_transform__i < 1; _solarhouse3_measurement_hilbert_transform__i++) {
        _solarhouse3_measurement_hilbert_transform__b_sum += _solarhouse3_measurement_hilbert_transform__b_coeff[_solarhouse3_measurement_hilbert_transform__i + 1] * _solarhouse3_measurement_hilbert_transform__states[_solarhouse3_measurement_hilbert_transform__i];
    }
    _solarhouse3_measurement_hilbert_transform__a_sum += _solarhouse3_measurement_hilbert_transform__states[0] * _solarhouse3_measurement_hilbert_transform__a_coeff[1];
    _solarhouse3_measurement_hilbert_transform__delay_line_in = _solarhouse3_measurement_bpf1_gain__out - _solarhouse3_measurement_hilbert_transform__a_sum;
    _solarhouse3_measurement_hilbert_transform__b_sum += _solarhouse3_measurement_hilbert_transform__b_coeff[0] * _solarhouse3_measurement_hilbert_transform__delay_line_in;
    _solarhouse3_measurement_hilbert_transform__out = _solarhouse3_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse3.Measurement.Product1
    _solarhouse3_measurement_product1__out = (_solarhouse3_measurement_bpf1_gain__out * _solarhouse3_measurement_bpf_gain__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform__i;
    _solarhouse4_inverter_controller_hilbert_transform__a_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform__b_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_hilbert_transform__i = 0; _solarhouse4_inverter_controller_hilbert_transform__i < 1; _solarhouse4_inverter_controller_hilbert_transform__i++) {
        _solarhouse4_inverter_controller_hilbert_transform__b_sum += _solarhouse4_inverter_controller_hilbert_transform__b_coeff[_solarhouse4_inverter_controller_hilbert_transform__i + 1] * _solarhouse4_inverter_controller_hilbert_transform__states[_solarhouse4_inverter_controller_hilbert_transform__i];
    }
    _solarhouse4_inverter_controller_hilbert_transform__a_sum += _solarhouse4_inverter_controller_hilbert_transform__states[0] * _solarhouse4_inverter_controller_hilbert_transform__a_coeff[1];
    _solarhouse4_inverter_controller_hilbert_transform__delay_line_in = _solarhouse4_inverter_bpf_gain__out - _solarhouse4_inverter_controller_hilbert_transform__a_sum;
    _solarhouse4_inverter_controller_hilbert_transform__b_sum += _solarhouse4_inverter_controller_hilbert_transform__b_coeff[0] * _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
    _solarhouse4_inverter_controller_hilbert_transform__out = _solarhouse4_inverter_controller_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse4.Inverter.V
    HIL_OutAO(0x407d, (float)_solarhouse4_inverter_bpf_gain__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform1
    X_UnInt32 _solarhouse4_inverter_controller_hilbert_transform1__i;
    _solarhouse4_inverter_controller_hilbert_transform1__a_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform1__b_sum = 0.0f;
    _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_hilbert_transform1__i = 0; _solarhouse4_inverter_controller_hilbert_transform1__i < 1; _solarhouse4_inverter_controller_hilbert_transform1__i++) {
        _solarhouse4_inverter_controller_hilbert_transform1__b_sum += _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[_solarhouse4_inverter_controller_hilbert_transform1__i + 1] * _solarhouse4_inverter_controller_hilbert_transform1__states[_solarhouse4_inverter_controller_hilbert_transform1__i];
    }
    _solarhouse4_inverter_controller_hilbert_transform1__a_sum += _solarhouse4_inverter_controller_hilbert_transform1__states[0] * _solarhouse4_inverter_controller_hilbert_transform1__a_coeff[1];
    _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in = _solarhouse4_inverter_bpf1_gain__out - _solarhouse4_inverter_controller_hilbert_transform1__a_sum;
    _solarhouse4_inverter_controller_hilbert_transform1__b_sum += _solarhouse4_inverter_controller_hilbert_transform1__b_coeff[0] * _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
    _solarhouse4_inverter_controller_hilbert_transform1__out = _solarhouse4_inverter_controller_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain22
    _solarhouse4_inverter_controller_gain22__out = 0.02 * _solarhouse4_inverter_controller_c_function1__out;
    // Generated from the component: SolarHouse4.Inverter.S
    HIL_OutAO(0x407c, (float)_solarhouse4_inverter_power_meas_gain6__out);
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform1
    X_UnInt32 _solarhouse4_measurement_hilbert_transform1__i;
    _solarhouse4_measurement_hilbert_transform1__a_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform1__b_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform1__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_hilbert_transform1__i = 0; _solarhouse4_measurement_hilbert_transform1__i < 1; _solarhouse4_measurement_hilbert_transform1__i++) {
        _solarhouse4_measurement_hilbert_transform1__b_sum += _solarhouse4_measurement_hilbert_transform1__b_coeff[_solarhouse4_measurement_hilbert_transform1__i + 1] * _solarhouse4_measurement_hilbert_transform1__states[_solarhouse4_measurement_hilbert_transform1__i];
    }
    _solarhouse4_measurement_hilbert_transform1__a_sum += _solarhouse4_measurement_hilbert_transform1__states[0] * _solarhouse4_measurement_hilbert_transform1__a_coeff[1];
    _solarhouse4_measurement_hilbert_transform1__delay_line_in = _solarhouse4_measurement_bpf_gain__out - _solarhouse4_measurement_hilbert_transform1__a_sum;
    _solarhouse4_measurement_hilbert_transform1__b_sum += _solarhouse4_measurement_hilbert_transform1__b_coeff[0] * _solarhouse4_measurement_hilbert_transform1__delay_line_in;
    _solarhouse4_measurement_hilbert_transform1__out = _solarhouse4_measurement_hilbert_transform1__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform
    X_UnInt32 _solarhouse4_measurement_hilbert_transform__i;
    _solarhouse4_measurement_hilbert_transform__a_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform__b_sum = 0.0f;
    _solarhouse4_measurement_hilbert_transform__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_hilbert_transform__i = 0; _solarhouse4_measurement_hilbert_transform__i < 1; _solarhouse4_measurement_hilbert_transform__i++) {
        _solarhouse4_measurement_hilbert_transform__b_sum += _solarhouse4_measurement_hilbert_transform__b_coeff[_solarhouse4_measurement_hilbert_transform__i + 1] * _solarhouse4_measurement_hilbert_transform__states[_solarhouse4_measurement_hilbert_transform__i];
    }
    _solarhouse4_measurement_hilbert_transform__a_sum += _solarhouse4_measurement_hilbert_transform__states[0] * _solarhouse4_measurement_hilbert_transform__a_coeff[1];
    _solarhouse4_measurement_hilbert_transform__delay_line_in = _solarhouse4_measurement_bpf1_gain__out - _solarhouse4_measurement_hilbert_transform__a_sum;
    _solarhouse4_measurement_hilbert_transform__b_sum += _solarhouse4_measurement_hilbert_transform__b_coeff[0] * _solarhouse4_measurement_hilbert_transform__delay_line_in;
    _solarhouse4_measurement_hilbert_transform__out = _solarhouse4_measurement_hilbert_transform__b_sum;
    // Generated from the component: SolarHouse4.Measurement.Product1
    _solarhouse4_measurement_product1__out = (_solarhouse4_measurement_bpf1_gain__out * _solarhouse4_measurement_bpf_gain__out);
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq1
    _ess_inverter_controller_alpha_beta_to_dq1__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq1__d = _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_bpf_gain__out - _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_controller_hilbert_transform__out;
    _ess_inverter_controller_alpha_beta_to_dq1__q = _ess_inverter_controller_alpha_beta_to_dq1__k1 * _ess_inverter_bpf_gain__out + _ess_inverter_controller_alpha_beta_to_dq1__k2 * _ess_inverter_controller_hilbert_transform__out;
    // Generated from the component: ESS.Inverter.Controller.alpha beta to dq2
    _ess_inverter_controller_alpha_beta_to_dq2__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_alpha_beta_to_dq2__d = _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_bpf1_gain__out - _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_controller_hilbert_transform1__out;
    _ess_inverter_controller_alpha_beta_to_dq2__q = _ess_inverter_controller_alpha_beta_to_dq2__k1 * _ess_inverter_bpf1_gain__out + _ess_inverter_controller_alpha_beta_to_dq2__k2 * _ess_inverter_controller_hilbert_transform1__out;
    // Generated from the component: Measurement.Product2
    _measurement_product2__out = (_measurement_hilbert_transform__out * _measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.alpha beta to dq1
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__d = _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse1_inverter_bpf_gain__out - _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse1_inverter_controller_hilbert_transform__out;
    _solarhouse1_inverter_controller_alpha_beta_to_dq1__q = _solarhouse1_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse1_inverter_bpf_gain__out + _solarhouse1_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse1_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.alpha beta to dq2
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__d = _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse1_inverter_bpf1_gain__out - _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse1_inverter_controller_hilbert_transform1__out;
    _solarhouse1_inverter_controller_alpha_beta_to_dq2__q = _solarhouse1_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse1_inverter_bpf1_gain__out + _solarhouse1_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse1_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse1.Measurement.Product2
    _solarhouse1_measurement_product2__out = (_solarhouse1_measurement_hilbert_transform__out * _solarhouse1_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.alpha beta to dq1
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__d = _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse2_inverter_bpf_gain__out - _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse2_inverter_controller_hilbert_transform__out;
    _solarhouse2_inverter_controller_alpha_beta_to_dq1__q = _solarhouse2_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse2_inverter_bpf_gain__out + _solarhouse2_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse2_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.alpha beta to dq2
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__d = _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse2_inverter_bpf1_gain__out - _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse2_inverter_controller_hilbert_transform1__out;
    _solarhouse2_inverter_controller_alpha_beta_to_dq2__q = _solarhouse2_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse2_inverter_bpf1_gain__out + _solarhouse2_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse2_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse2.Measurement.Product2
    _solarhouse2_measurement_product2__out = (_solarhouse2_measurement_hilbert_transform__out * _solarhouse2_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.alpha beta to dq1
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__d = _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse3_inverter_bpf_gain__out - _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse3_inverter_controller_hilbert_transform__out;
    _solarhouse3_inverter_controller_alpha_beta_to_dq1__q = _solarhouse3_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse3_inverter_bpf_gain__out + _solarhouse3_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse3_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.alpha beta to dq2
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__d = _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse3_inverter_bpf1_gain__out - _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse3_inverter_controller_hilbert_transform1__out;
    _solarhouse3_inverter_controller_alpha_beta_to_dq2__q = _solarhouse3_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse3_inverter_bpf1_gain__out + _solarhouse3_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse3_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse3.Measurement.Product2
    _solarhouse3_measurement_product2__out = (_solarhouse3_measurement_hilbert_transform__out * _solarhouse3_measurement_hilbert_transform1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.alpha beta to dq1
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__d = _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse4_inverter_bpf_gain__out - _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse4_inverter_controller_hilbert_transform__out;
    _solarhouse4_inverter_controller_alpha_beta_to_dq1__q = _solarhouse4_inverter_controller_alpha_beta_to_dq1__k1 * _solarhouse4_inverter_bpf_gain__out + _solarhouse4_inverter_controller_alpha_beta_to_dq1__k2 * _solarhouse4_inverter_controller_hilbert_transform__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.alpha beta to dq2
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__d = _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse4_inverter_bpf1_gain__out - _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse4_inverter_controller_hilbert_transform1__out;
    _solarhouse4_inverter_controller_alpha_beta_to_dq2__q = _solarhouse4_inverter_controller_alpha_beta_to_dq2__k1 * _solarhouse4_inverter_bpf1_gain__out + _solarhouse4_inverter_controller_alpha_beta_to_dq2__k2 * _solarhouse4_inverter_controller_hilbert_transform1__out;
    // Generated from the component: SolarHouse4.Measurement.Product2
    _solarhouse4_measurement_product2__out = (_solarhouse4_measurement_hilbert_transform__out * _solarhouse4_measurement_hilbert_transform1__out);
    // Generated from the component: ESS.Inverter.Controller.Gain28
    _ess_inverter_controller_gain28__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: ESS.Inverter.Controller.Gain29
    _ess_inverter_controller_gain29__out = 0.002946278254943948 * _ess_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: ESS.Inverter.Controller.Gain30
    _ess_inverter_controller_gain30__out = 0.003394112549695428 * _ess_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: ESS.Inverter.Controller.Gain31
    _ess_inverter_controller_gain31__out = 0.003394112549695428 * _ess_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: Measurement.Sum1
    _measurement_sum1__out = _measurement_product1__out + _measurement_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain28
    _solarhouse1_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse1_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain29
    _solarhouse1_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse1_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain30
    _solarhouse1_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse1_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain31
    _solarhouse1_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse1_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse1.Measurement.Sum1
    _solarhouse1_measurement_sum1__out = _solarhouse1_measurement_product1__out + _solarhouse1_measurement_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain28
    _solarhouse2_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse2_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain29
    _solarhouse2_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse2_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain30
    _solarhouse2_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse2_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain31
    _solarhouse2_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse2_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse2.Measurement.Sum1
    _solarhouse2_measurement_sum1__out = _solarhouse2_measurement_product1__out + _solarhouse2_measurement_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain28
    _solarhouse3_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse3_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain29
    _solarhouse3_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse3_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain30
    _solarhouse3_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse3_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain31
    _solarhouse3_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse3_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse3.Measurement.Sum1
    _solarhouse3_measurement_sum1__out = _solarhouse3_measurement_product1__out + _solarhouse3_measurement_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain28
    _solarhouse4_inverter_controller_gain28__out = 0.002946278254943948 * _solarhouse4_inverter_controller_alpha_beta_to_dq1__d;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain29
    _solarhouse4_inverter_controller_gain29__out = 0.002946278254943948 * _solarhouse4_inverter_controller_alpha_beta_to_dq1__q;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain30
    _solarhouse4_inverter_controller_gain30__out = 0.003394112549695428 * _solarhouse4_inverter_controller_alpha_beta_to_dq2__d;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain31
    _solarhouse4_inverter_controller_gain31__out = 0.003394112549695428 * _solarhouse4_inverter_controller_alpha_beta_to_dq2__q;
    // Generated from the component: SolarHouse4.Measurement.Sum1
    _solarhouse4_measurement_sum1__out = _solarhouse4_measurement_product1__out + _solarhouse4_measurement_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
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
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_ess_inverter_controller_gain32__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Vd
    HIL_OutAO(0x4012, (float)_ess_inverter_controller_gain28__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
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
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain32__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_ess_inverter_controller_constant5__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Vq
    HIL_OutAO(0x4013, (float)_ess_inverter_controller_gain29__out);
    // Generated from the component: ESS.Inverter.Controller.Id
    HIL_OutAO(0x4005, (float)_ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _ess_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _ess_inverter_power_meas_power_meas_dqpu_product1__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _ess_inverter_power_meas_power_meas_dqpu_product4__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain30__out);
    // Generated from the component: ESS.Inverter.Controller.Iq
    HIL_OutAO(0x4006, (float)_ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _ess_inverter_power_meas_power_meas_dqpu_product2__out = (_ess_inverter_controller_gain29__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _ess_inverter_power_meas_power_meas_dqpu_product3__out = (_ess_inverter_controller_gain28__out * _ess_inverter_controller_gain31__out);
    // Generated from the component: Measurement.Gain1
    _measurement_gain1__out = 0.5 * _measurement_sum1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse1_inverter_controller_gain28__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse1_inverter_controller_gain32__out * _solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Vd
    HIL_OutAO(0x402c, (float)_solarhouse1_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse1_inverter_controller_gain29__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse1_inverter_controller_constant5__out * _solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Vq
    HIL_OutAO(0x402d, (float)_solarhouse1_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Id
    HIL_OutAO(0x401f, (float)_solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse1_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Iq
    HIL_OutAO(0x4020, (float)_solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse1_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse1_inverter_controller_gain29__out * _solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse1_inverter_controller_gain28__out * _solarhouse1_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse1.Measurement.Gain1
    _solarhouse1_measurement_gain1__out = 0.5 * _solarhouse1_measurement_sum1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse2_inverter_controller_gain28__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse2_inverter_controller_gain32__out * _solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Vd
    HIL_OutAO(0x4045, (float)_solarhouse2_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse2_inverter_controller_gain29__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse2_inverter_controller_constant5__out * _solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Vq
    HIL_OutAO(0x4046, (float)_solarhouse2_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Id
    HIL_OutAO(0x4038, (float)_solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse2_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Iq
    HIL_OutAO(0x4039, (float)_solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse2_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse2_inverter_controller_gain29__out * _solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse2_inverter_controller_gain28__out * _solarhouse2_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse2.Measurement.Gain1
    _solarhouse2_measurement_gain1__out = 0.5 * _solarhouse2_measurement_sum1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse3_inverter_controller_gain28__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse3_inverter_controller_gain32__out * _solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Vd
    HIL_OutAO(0x405e, (float)_solarhouse3_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse3_inverter_controller_gain29__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse3_inverter_controller_constant5__out * _solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Vq
    HIL_OutAO(0x405f, (float)_solarhouse3_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Id
    HIL_OutAO(0x4051, (float)_solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse3_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Iq
    HIL_OutAO(0x4052, (float)_solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse3_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse3_inverter_controller_gain29__out * _solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse3_inverter_controller_gain28__out * _solarhouse3_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse3.Measurement.Gain1
    _solarhouse3_measurement_gain1__out = 0.5 * _solarhouse3_measurement_sum1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in = _solarhouse4_inverter_controller_gain28__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product4
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_constant5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out = (_solarhouse4_inverter_controller_gain32__out * _solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Vd
    HIL_OutAO(0x4077, (float)_solarhouse4_inverter_controller_gain28__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    X_UnInt32 _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum = 0.0f;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i = 0; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i < 1; _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i++) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i + 1] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__i];
    }
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_coeff[1];
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in = _solarhouse4_inverter_controller_gain29__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__a_sum;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum += _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_coeff[0] * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain32__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out = (_solarhouse4_inverter_controller_constant5__out * _solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Vq
    HIL_OutAO(0x4078, (float)_solarhouse4_inverter_controller_gain29__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Id
    HIL_OutAO(0x406a, (float)_solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain7
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out = 0.005772569444444445 * _solarhouse4_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product1
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product4
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain30__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Iq
    HIL_OutAO(0x406b, (float)_solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Gain6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out = 0.005772569444444445 * _solarhouse4_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product2
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out = (_solarhouse4_inverter_controller_gain29__out * _solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Product3
    _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out = (_solarhouse4_inverter_controller_gain28__out * _solarhouse4_inverter_controller_gain31__out);
    // Generated from the component: SolarHouse4.Measurement.Gain1
    _solarhouse4_measurement_gain1__out = 0.5 * _solarhouse4_measurement_sum1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_ess_inverter_controller_constant6__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_ess_inverter_controller_constant6__out * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _ess_inverter_power_meas_power_meas_dqpu_sum1__out = _ess_inverter_power_meas_power_meas_dqpu_product1__out + _ess_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _ess_inverter_power_meas_power_meas_dqpu_sum2__out = _ess_inverter_power_meas_power_meas_dqpu_product4__out - _ess_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: Measurement.LPF_P
    X_UnInt32 _measurement_lpf_p__i;
    _measurement_lpf_p__a_sum = 0.0f;
    _measurement_lpf_p__b_sum = 0.0f;
    _measurement_lpf_p__delay_line_in = 0.0f;
    for (_measurement_lpf_p__i = 0; _measurement_lpf_p__i < 1; _measurement_lpf_p__i++) {
        _measurement_lpf_p__b_sum += _measurement_lpf_p__b_coeff[_measurement_lpf_p__i + 1] * _measurement_lpf_p__states[_measurement_lpf_p__i];
    }
    _measurement_lpf_p__a_sum += _measurement_lpf_p__states[0] * _measurement_lpf_p__a_coeff[1];
    _measurement_lpf_p__delay_line_in = _measurement_gain1__out - _measurement_lpf_p__a_sum;
    _measurement_lpf_p__b_sum += _measurement_lpf_p__b_coeff[0] * _measurement_lpf_p__delay_line_in;
    _measurement_lpf_p__out = _measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse1_inverter_controller_constant6__out * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse1_inverter_controller_constant6__out * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse1_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse1.Measurement.LPF_P
    X_UnInt32 _solarhouse1_measurement_lpf_p__i;
    _solarhouse1_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse1_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse1_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse1_measurement_lpf_p__i = 0; _solarhouse1_measurement_lpf_p__i < 1; _solarhouse1_measurement_lpf_p__i++) {
        _solarhouse1_measurement_lpf_p__b_sum += _solarhouse1_measurement_lpf_p__b_coeff[_solarhouse1_measurement_lpf_p__i + 1] * _solarhouse1_measurement_lpf_p__states[_solarhouse1_measurement_lpf_p__i];
    }
    _solarhouse1_measurement_lpf_p__a_sum += _solarhouse1_measurement_lpf_p__states[0] * _solarhouse1_measurement_lpf_p__a_coeff[1];
    _solarhouse1_measurement_lpf_p__delay_line_in = _solarhouse1_measurement_gain1__out - _solarhouse1_measurement_lpf_p__a_sum;
    _solarhouse1_measurement_lpf_p__b_sum += _solarhouse1_measurement_lpf_p__b_coeff[0] * _solarhouse1_measurement_lpf_p__delay_line_in;
    _solarhouse1_measurement_lpf_p__out = _solarhouse1_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse2_inverter_controller_constant6__out * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse2_inverter_controller_constant6__out * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse2_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse2.Measurement.LPF_P
    X_UnInt32 _solarhouse2_measurement_lpf_p__i;
    _solarhouse2_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse2_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse2_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse2_measurement_lpf_p__i = 0; _solarhouse2_measurement_lpf_p__i < 1; _solarhouse2_measurement_lpf_p__i++) {
        _solarhouse2_measurement_lpf_p__b_sum += _solarhouse2_measurement_lpf_p__b_coeff[_solarhouse2_measurement_lpf_p__i + 1] * _solarhouse2_measurement_lpf_p__states[_solarhouse2_measurement_lpf_p__i];
    }
    _solarhouse2_measurement_lpf_p__a_sum += _solarhouse2_measurement_lpf_p__states[0] * _solarhouse2_measurement_lpf_p__a_coeff[1];
    _solarhouse2_measurement_lpf_p__delay_line_in = _solarhouse2_measurement_gain1__out - _solarhouse2_measurement_lpf_p__a_sum;
    _solarhouse2_measurement_lpf_p__b_sum += _solarhouse2_measurement_lpf_p__b_coeff[0] * _solarhouse2_measurement_lpf_p__delay_line_in;
    _solarhouse2_measurement_lpf_p__out = _solarhouse2_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse3_inverter_controller_constant6__out * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse3_inverter_controller_constant6__out * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse3_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse3.Measurement.LPF_P
    X_UnInt32 _solarhouse3_measurement_lpf_p__i;
    _solarhouse3_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse3_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse3_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse3_measurement_lpf_p__i = 0; _solarhouse3_measurement_lpf_p__i < 1; _solarhouse3_measurement_lpf_p__i++) {
        _solarhouse3_measurement_lpf_p__b_sum += _solarhouse3_measurement_lpf_p__b_coeff[_solarhouse3_measurement_lpf_p__i + 1] * _solarhouse3_measurement_lpf_p__states[_solarhouse3_measurement_lpf_p__i];
    }
    _solarhouse3_measurement_lpf_p__a_sum += _solarhouse3_measurement_lpf_p__states[0] * _solarhouse3_measurement_lpf_p__a_coeff[1];
    _solarhouse3_measurement_lpf_p__delay_line_in = _solarhouse3_measurement_gain1__out - _solarhouse3_measurement_lpf_p__a_sum;
    _solarhouse3_measurement_lpf_p__b_sum += _solarhouse3_measurement_lpf_p__b_coeff[0] * _solarhouse3_measurement_lpf_p__delay_line_in;
    _solarhouse3_measurement_lpf_p__out = _solarhouse3_measurement_lpf_p__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product3__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product4__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Sum4
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product5__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product6__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.squared_Vt2.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out = (_solarhouse4_inverter_controller_constant6__out * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain7__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out = (_solarhouse4_inverter_controller_constant6__out * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain6__out);
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Sum1
    _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_product1__out + _solarhouse4_inverter_power_meas_power_meas_dqpu_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.Sum2
    _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_product4__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_product3__out;
    // Generated from the component: SolarHouse4.Measurement.LPF_P
    X_UnInt32 _solarhouse4_measurement_lpf_p__i;
    _solarhouse4_measurement_lpf_p__a_sum = 0.0f;
    _solarhouse4_measurement_lpf_p__b_sum = 0.0f;
    _solarhouse4_measurement_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse4_measurement_lpf_p__i = 0; _solarhouse4_measurement_lpf_p__i < 1; _solarhouse4_measurement_lpf_p__i++) {
        _solarhouse4_measurement_lpf_p__b_sum += _solarhouse4_measurement_lpf_p__b_coeff[_solarhouse4_measurement_lpf_p__i + 1] * _solarhouse4_measurement_lpf_p__states[_solarhouse4_measurement_lpf_p__i];
    }
    _solarhouse4_measurement_lpf_p__a_sum += _solarhouse4_measurement_lpf_p__states[0] * _solarhouse4_measurement_lpf_p__a_coeff[1];
    _solarhouse4_measurement_lpf_p__delay_line_in = _solarhouse4_measurement_gain1__out - _solarhouse4_measurement_lpf_p__a_sum;
    _solarhouse4_measurement_lpf_p__b_sum += _solarhouse4_measurement_lpf_p__b_coeff[0] * _solarhouse4_measurement_lpf_p__delay_line_in;
    _solarhouse4_measurement_lpf_p__out = _solarhouse4_measurement_lpf_p__b_sum;
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
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_p__i;
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
    X_UnInt32 _ess_inverter_power_meas_power_meas_dqpu_lpf_q__i;
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
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4021, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse1_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse1_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x403a, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse2_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse2_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x4053, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse3_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse3_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Edq_sq
    HIL_OutAO(0x406c, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 0;
    } else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = 1;
    } else {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product1__out;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i + 1] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__i];
    }
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_coeff[1];
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in = _solarhouse4_inverter_power_meas_power_meas_dqpu_sum1__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__a_sum;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_coeff[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__b_sum;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    X_UnInt32 _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum = 0.0f;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = 0.0f;
    for (_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i = 0; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i < 1; _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i++) {
        _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i + 1] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[_solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__i];
    }
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_coeff[1];
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in = _solarhouse4_inverter_power_meas_power_meas_dqpu_sum2__out - _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__a_sum;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum += _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_coeff[0] * _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__out = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__b_sum;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _ess_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Signal switch1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__out < 0.5f) ? _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_one__out : _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x400e, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4028, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4041, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x405a, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Et_sqr_res
    HIL_OutAO(0x4073, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum3__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Product2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_sum4__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_signal_switch1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4009, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _ess_inverter_controller_gain31__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4008, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _ess_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4023, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse1_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4022, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse1_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x403c, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse2_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x403b, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse2_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x4055, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse3_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x4054, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse3_inverter_controller_gain30__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Iq_ref
    HIL_OutAO(0x406e, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum9
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product1__out - _solarhouse4_inverter_controller_gain31__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Id_ref
    HIL_OutAO(0x406d, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum8
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_product2__out - _solarhouse4_inverter_controller_gain30__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x400d, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x400c, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4027, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4026, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4040, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x403f, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4059, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4058, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state + 1.3194444444444446 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out;
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int < -1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int > 1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 1;
    else
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active = 0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.iq_err
    HIL_OutAO(0x4072, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state + 1.3194444444444446 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out;
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int < -1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int > 1.0)
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 1;
    else
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active = 0;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__pi_reg_out_int, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.id_err
    HIL_OutAO(0x4071, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum7
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum6__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Sum3
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum5__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum7__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Product5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out = (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum3__out) * 1.0 / (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product6__out, -1.0), 1.0);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.Limit1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out = MIN(MAX(_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_product5__out, -1.0), 1.0);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4010, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x400f, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x402a, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4029, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4043, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4042, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x405c, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x405b, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain6
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out = 339.4112549695428 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.uq
    HIL_OutAO(0x4075, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit2__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Gain5
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out = 339.4112549695428 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.ud
    HIL_OutAO(0x4074, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_limit1__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x400b, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x400a, (float)_ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_ess_inverter_controller_c_function4__out);
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4025, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4024, (float)_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse1_inverter_controller_c_function4__out);
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x403e, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x403d, (float)_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse2_inverter_controller_c_function4__out);
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4057, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x4056, (float)_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse3_inverter_controller_c_function4__out);
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Uq
    HIL_OutAO(0x4070, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.Ud
    HIL_OutAO(0x406f, (float)_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.dq to alpha beta
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 = cos(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 = sin(_solarhouse4_inverter_controller_c_function4__out);
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out + _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out;
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k2 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain6__out - _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__k1 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_gain5__out;
    // Generated from the component: ESS.Inverter.Controller.Bus Join1
    _ess_inverter_controller_bus_join1__out[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _ess_inverter_controller_bus_join1__out[1] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse1.Inverter.Controller.Bus Join1
    _solarhouse1_inverter_controller_bus_join1__out[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse1_inverter_controller_bus_join1__out[1] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse2.Inverter.Controller.Bus Join1
    _solarhouse2_inverter_controller_bus_join1__out[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse2_inverter_controller_bus_join1__out[1] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse3.Inverter.Controller.Bus Join1
    _solarhouse3_inverter_controller_bus_join1__out[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse3_inverter_controller_bus_join1__out[1] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: SolarHouse4.Inverter.Controller.Bus Join1
    _solarhouse4_inverter_controller_bus_join1__out[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__alpha;
    _solarhouse4_inverter_controller_bus_join1__out[1] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_dq_to_alpha_beta__beta;
    // Generated from the component: ESS.Inverter.Controller.Bus Split1
    _ess_inverter_controller_bus_split1__out = _ess_inverter_controller_bus_join1__out[0];
    _ess_inverter_controller_bus_split1__out1 = _ess_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse1.Inverter.Controller.Bus Split1
    _solarhouse1_inverter_controller_bus_split1__out = _solarhouse1_inverter_controller_bus_join1__out[0];
    _solarhouse1_inverter_controller_bus_split1__out1 = _solarhouse1_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse2.Inverter.Controller.Bus Split1
    _solarhouse2_inverter_controller_bus_split1__out = _solarhouse2_inverter_controller_bus_join1__out[0];
    _solarhouse2_inverter_controller_bus_split1__out1 = _solarhouse2_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse3.Inverter.Controller.Bus Split1
    _solarhouse3_inverter_controller_bus_split1__out = _solarhouse3_inverter_controller_bus_join1__out[0];
    _solarhouse3_inverter_controller_bus_split1__out1 = _solarhouse3_inverter_controller_bus_join1__out[1];
    // Generated from the component: SolarHouse4.Inverter.Controller.Bus Split1
    _solarhouse4_inverter_controller_bus_split1__out = _solarhouse4_inverter_controller_bus_join1__out[0];
    _solarhouse4_inverter_controller_bus_split1__out1 = _solarhouse4_inverter_controller_bus_join1__out[1];
    // Generated from the component: ESS.Inverter.Controller.Gain20
    _ess_inverter_controller_gain20__out = -1.0 * _ess_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain20
    _solarhouse1_inverter_controller_gain20__out = -1.0 * _solarhouse1_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain20
    _solarhouse2_inverter_controller_gain20__out = -1.0 * _solarhouse2_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain20
    _solarhouse3_inverter_controller_gain20__out = -1.0 * _solarhouse3_inverter_controller_bus_split1__out;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain20
    _solarhouse4_inverter_controller_gain20__out = -1.0 * _solarhouse4_inverter_controller_bus_split1__out;
    // Generated from the component: ESS.Inverter.Single Phase Inverter1.PWM_Modulator
    _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_ess_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _ess_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _ess_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_ess_inverter_controller_gain20__out, -1.0), 1.0);
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
    // Generated from the component: SolarHouse1.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse1_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse1_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse1_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse1_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse1_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse2.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse2_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse2_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse2_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse2_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse2_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse3.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse3_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse3_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse3_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse3_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse3_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    // Generated from the component: SolarHouse4.Inverter.Single Phase Inverter1.PWM_Modulator
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] = MIN(MAX(_solarhouse4_inverter_controller_bus_split1__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], ((unsigned)((_solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[0] - (-1.0)) * 1250.0)));
    _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] = MIN(MAX(_solarhouse4_inverter_controller_gain20__out, -1.0), 1.0);
    HIL_OutInt32(0x2000040 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], ((unsigned)((_solarhouse4_inverter_single_phase_inverter1_pwm_modulator__limited_in[1] - (-1.0)) * 1250.0)));
    if (_solarhouse4_inverter_controller_constant2__out == 0x0) {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x0);
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x0);
    }
    else {
        // pwm_modulator_en
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[0], 0x1);
        HIL_OutInt32(0x2000000 + _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__channels[1], 0x1);
    }
    HIL_OutInt32(0x2000140, _solarhouse4_inverter_single_phase_inverter1_pwm_modulator__update_mask);
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.BPF.HPF
    _ess_inverter_bpf_hpf__states[0] = _ess_inverter_bpf_hpf__delay_line_in;
    // Generated from the component: ESS.Inverter.BPF1.HPF
    _ess_inverter_bpf1_hpf__states[0] = _ess_inverter_bpf1_hpf__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: ESS.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: Measurement.BPF.HPF
    _measurement_bpf_hpf__states[0] = _measurement_bpf_hpf__delay_line_in;
    // Generated from the component: Measurement.BPF1.HPF
    _measurement_bpf1_hpf__states[0] = _measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.BPF.HPF
    _solarhouse1_inverter_bpf_hpf__states[0] = _solarhouse1_inverter_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.BPF1.HPF
    _solarhouse1_inverter_bpf1_hpf__states[0] = _solarhouse1_inverter_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse1.Measurement.BPF.HPF
    _solarhouse1_measurement_bpf_hpf__states[0] = _solarhouse1_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF1.HPF
    _solarhouse1_measurement_bpf1_hpf__states[0] = _solarhouse1_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.BPF.HPF
    _solarhouse2_inverter_bpf_hpf__states[0] = _solarhouse2_inverter_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.BPF1.HPF
    _solarhouse2_inverter_bpf1_hpf__states[0] = _solarhouse2_inverter_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse2.Measurement.BPF.HPF
    _solarhouse2_measurement_bpf_hpf__states[0] = _solarhouse2_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF1.HPF
    _solarhouse2_measurement_bpf1_hpf__states[0] = _solarhouse2_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.BPF.HPF
    _solarhouse3_inverter_bpf_hpf__states[0] = _solarhouse3_inverter_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.BPF1.HPF
    _solarhouse3_inverter_bpf1_hpf__states[0] = _solarhouse3_inverter_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse3.Measurement.BPF.HPF
    _solarhouse3_measurement_bpf_hpf__states[0] = _solarhouse3_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF1.HPF
    _solarhouse3_measurement_bpf1_hpf__states[0] = _solarhouse3_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.BPF.HPF
    _solarhouse4_inverter_bpf_hpf__states[0] = _solarhouse4_inverter_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.BPF1.HPF
    _solarhouse4_inverter_bpf1_hpf__states[0] = _solarhouse4_inverter_bpf1_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.S_and_pf
    // Generated from the component: SolarHouse4.Measurement.BPF.HPF
    _solarhouse4_measurement_bpf_hpf__states[0] = _solarhouse4_measurement_bpf_hpf__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF1.HPF
    _solarhouse4_measurement_bpf1_hpf__states[0] = _solarhouse4_measurement_bpf1_hpf__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.C function4
    // Generated from the component: ESS.Inverter.Controller.C function1
    // Generated from the component: ESS.Inverter.BPF.LPF
    _ess_inverter_bpf_lpf__states[0] = _ess_inverter_bpf_lpf__delay_line_in;
    // Generated from the component: ESS.Inverter.BPF1.LPF
    _ess_inverter_bpf1_lpf__states[0] = _ess_inverter_bpf1_lpf__delay_line_in;
    // Generated from the component: ESS.Inverter.LPF_dc
    _ess_inverter_lpf_dc__states[0] = _ess_inverter_lpf_dc__delay_line_in;
    // Generated from the component: Measurement.BPF.LPF
    _measurement_bpf_lpf__states[0] = _measurement_bpf_lpf__delay_line_in;
    // Generated from the component: Measurement.BPF1.LPF
    _measurement_bpf1_lpf__states[0] = _measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function4
    // Generated from the component: SolarHouse1.Inverter.Controller.C function1
    // Generated from the component: SolarHouse1.Inverter.BPF.LPF
    _solarhouse1_inverter_bpf_lpf__states[0] = _solarhouse1_inverter_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.BPF1.LPF
    _solarhouse1_inverter_bpf1_lpf__states[0] = _solarhouse1_inverter_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.LPF_dc
    _solarhouse1_inverter_lpf_dc__states[0] = _solarhouse1_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF.LPF
    _solarhouse1_measurement_bpf_lpf__states[0] = _solarhouse1_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.BPF1.LPF
    _solarhouse1_measurement_bpf1_lpf__states[0] = _solarhouse1_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function4
    // Generated from the component: SolarHouse2.Inverter.Controller.C function1
    // Generated from the component: SolarHouse2.Inverter.BPF.LPF
    _solarhouse2_inverter_bpf_lpf__states[0] = _solarhouse2_inverter_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.BPF1.LPF
    _solarhouse2_inverter_bpf1_lpf__states[0] = _solarhouse2_inverter_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.LPF_dc
    _solarhouse2_inverter_lpf_dc__states[0] = _solarhouse2_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF.LPF
    _solarhouse2_measurement_bpf_lpf__states[0] = _solarhouse2_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.BPF1.LPF
    _solarhouse2_measurement_bpf1_lpf__states[0] = _solarhouse2_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function4
    // Generated from the component: SolarHouse3.Inverter.Controller.C function1
    // Generated from the component: SolarHouse3.Inverter.BPF.LPF
    _solarhouse3_inverter_bpf_lpf__states[0] = _solarhouse3_inverter_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.BPF1.LPF
    _solarhouse3_inverter_bpf1_lpf__states[0] = _solarhouse3_inverter_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.LPF_dc
    _solarhouse3_inverter_lpf_dc__states[0] = _solarhouse3_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF.LPF
    _solarhouse3_measurement_bpf_lpf__states[0] = _solarhouse3_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.BPF1.LPF
    _solarhouse3_measurement_bpf1_lpf__states[0] = _solarhouse3_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function4
    // Generated from the component: SolarHouse4.Inverter.Controller.C function1
    // Generated from the component: SolarHouse4.Inverter.BPF.LPF
    _solarhouse4_inverter_bpf_lpf__states[0] = _solarhouse4_inverter_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.BPF1.LPF
    _solarhouse4_inverter_bpf1_lpf__states[0] = _solarhouse4_inverter_bpf1_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.LPF_dc
    _solarhouse4_inverter_lpf_dc__states[0] = _solarhouse4_inverter_lpf_dc__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF.LPF
    _solarhouse4_measurement_bpf_lpf__states[0] = _solarhouse4_measurement_bpf_lpf__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.BPF1.LPF
    _solarhouse4_measurement_bpf1_lpf__states[0] = _solarhouse4_measurement_bpf1_lpf__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform
    _ess_inverter_controller_hilbert_transform__states[0] = _ess_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Hilbert Transform1
    _ess_inverter_controller_hilbert_transform1__states[0] = _ess_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: Measurement.Hilbert Transform1
    _measurement_hilbert_transform1__states[0] = _measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: Measurement.Hilbert Transform
    _measurement_hilbert_transform__states[0] = _measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform
    _solarhouse1_inverter_controller_hilbert_transform__states[0] = _solarhouse1_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Hilbert Transform1
    _solarhouse1_inverter_controller_hilbert_transform1__states[0] = _solarhouse1_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform1
    _solarhouse1_measurement_hilbert_transform1__states[0] = _solarhouse1_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.Hilbert Transform
    _solarhouse1_measurement_hilbert_transform__states[0] = _solarhouse1_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform
    _solarhouse2_inverter_controller_hilbert_transform__states[0] = _solarhouse2_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Hilbert Transform1
    _solarhouse2_inverter_controller_hilbert_transform1__states[0] = _solarhouse2_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform1
    _solarhouse2_measurement_hilbert_transform1__states[0] = _solarhouse2_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.Hilbert Transform
    _solarhouse2_measurement_hilbert_transform__states[0] = _solarhouse2_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform
    _solarhouse3_inverter_controller_hilbert_transform__states[0] = _solarhouse3_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Hilbert Transform1
    _solarhouse3_inverter_controller_hilbert_transform1__states[0] = _solarhouse3_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform1
    _solarhouse3_measurement_hilbert_transform1__states[0] = _solarhouse3_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.Hilbert Transform
    _solarhouse3_measurement_hilbert_transform__states[0] = _solarhouse3_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform
    _solarhouse4_inverter_controller_hilbert_transform__states[0] = _solarhouse4_inverter_controller_hilbert_transform__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Hilbert Transform1
    _solarhouse4_inverter_controller_hilbert_transform1__states[0] = _solarhouse4_inverter_controller_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform1
    _solarhouse4_measurement_hilbert_transform1__states[0] = _solarhouse4_measurement_hilbert_transform1__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.Hilbert Transform
    _solarhouse4_measurement_hilbert_transform__states[0] = _solarhouse4_measurement_hilbert_transform__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc2
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc2__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.LPF_dc1
    _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__states[0] = _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_lpf_dc1__delay_line_in;
    // Generated from the component: Measurement.LPF_P
    _measurement_lpf_p__states[0] = _measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse1.Measurement.LPF_P
    _solarhouse1_measurement_lpf_p__states[0] = _solarhouse1_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse2.Measurement.LPF_P
    _solarhouse2_measurement_lpf_p__states[0] = _solarhouse2_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse3.Measurement.LPF_P
    _solarhouse3_measurement_lpf_p__states[0] = _solarhouse3_measurement_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse4.Measurement.LPF_P
    _solarhouse4_measurement_lpf_p__states[0] = _solarhouse4_measurement_lpf_p__delay_line_in;
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
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse1.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse1_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse2.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse2_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse3.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse3_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Comparator1
    if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out < _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 0;
    } else if (_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_squared_vt2_sum3__out > _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_limit_zero__out) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_outer_power_loop1_comparator1__state = 1;
    }
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_P
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__states[0] = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_p__delay_line_in;
    // Generated from the component: SolarHouse4.Inverter.Power_Meas.Power_Meas_DQpu.LPF_Q
    _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__states[0] = _solarhouse4_inverter_power_meas_power_meas_dqpu_lpf_q__delay_line_in;
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _ess_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse1_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse2_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse3_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller2
    if (!_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__av_active) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller2__integrator_state += 69.44444444444444 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum9__out * 0.0002;
    }
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.inner current control loop.PID controller1
    if (!_solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__av_active) {
        _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_pid_controller1__integrator_state += 69.44444444444444 * _solarhouse4_inverter_controller_outer_voltage_loop___inner_current_loop_inner_current_control_loop_sum8__out * 0.0002;
    }
    //@cmp.update.block.end
}
void TimerCounterHandler_2_user_sp_cpu0_dev0() {
#if DEBUG_MODE
    printf("\n\rTimerCounterHandler_2");
#endif
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Inverter.Controller.C function3
    _ess_inverter_controller_c_function3__Pref = 0.2;
    if (_ess_inverter_controller_c_function3__k > 12)_ess_inverter_controller_c_function3__k = 0;
    if (_ess_inverter_controller_c_function3__t > 3)_ess_inverter_controller_c_function3__t = 0;
    if (_ess_inverter_controller_c_function3__k == 0) {
        _ess_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_ess_inverter_controller_c_function3__k == 1) {
        _ess_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_ess_inverter_controller_c_function3__k == 2) {
        _ess_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_ess_inverter_controller_c_function3__k == 3) {
        _ess_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_ess_inverter_controller_c_function3__k == 4) {
        _ess_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_ess_inverter_controller_c_function3__k == 5) {
        _ess_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_ess_inverter_controller_c_function3__k == 6) {
        _ess_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_ess_inverter_controller_c_function3__k == 7) {
        _ess_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_ess_inverter_controller_c_function3__k == 8) {
        _ess_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_ess_inverter_controller_c_function3__k == 9) {
        _ess_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_ess_inverter_controller_c_function3__k == 10) {
        _ess_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_ess_inverter_controller_c_function3__k == 11) {
        _ess_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_ess_inverter_controller_c_function3__k == 12) {
        _ess_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_ess_inverter_controller_c_function3__t >= 3)_ess_inverter_controller_c_function3__k += 1;
    _ess_inverter_controller_c_function3__t += 1;
    // Generated from the component: ESS.Inverter.Controller.Gain23
    _ess_inverter_controller_gain23__out = 1000.0 * _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: ESS.Inverter.Controller.Rate Transition9.Input
    _ess_inverter_controller_rate_transition9_output__out = _ess_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse1.Inverter.Controller.C function3
    _solarhouse1_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse1_inverter_controller_c_function3__k > 12)_solarhouse1_inverter_controller_c_function3__k = 0;
    if (_solarhouse1_inverter_controller_c_function3__t > 3)_solarhouse1_inverter_controller_c_function3__t = 0;
    if (_solarhouse1_inverter_controller_c_function3__k == 0) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 1) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 2) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 3) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 4) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 5) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 6) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 7) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 8) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 9) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 10) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 11) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse1_inverter_controller_c_function3__k == 12) {
        _solarhouse1_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse1_inverter_controller_c_function3__t >= 3)_solarhouse1_inverter_controller_c_function3__k += 1;
    _solarhouse1_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse1.Inverter.Controller.Gain23
    _solarhouse1_inverter_controller_gain23__out = 1000.0 * _solarhouse1_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse1.Inverter.Controller.Rate Transition9.Input
    _solarhouse1_inverter_controller_rate_transition9_output__out = _solarhouse1_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse2.Inverter.Controller.C function3
    _solarhouse2_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse2_inverter_controller_c_function3__k > 12)_solarhouse2_inverter_controller_c_function3__k = 0;
    if (_solarhouse2_inverter_controller_c_function3__t > 3)_solarhouse2_inverter_controller_c_function3__t = 0;
    if (_solarhouse2_inverter_controller_c_function3__k == 0) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 1) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 2) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 3) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 4) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 5) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 6) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 7) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 8) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 9) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 10) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 11) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse2_inverter_controller_c_function3__k == 12) {
        _solarhouse2_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse2_inverter_controller_c_function3__t >= 3)_solarhouse2_inverter_controller_c_function3__k += 1;
    _solarhouse2_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse2.Inverter.Controller.Gain23
    _solarhouse2_inverter_controller_gain23__out = 1000.0 * _solarhouse2_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse2.Inverter.Controller.Rate Transition9.Input
    _solarhouse2_inverter_controller_rate_transition9_output__out = _solarhouse2_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse3.Inverter.Controller.C function3
    _solarhouse3_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse3_inverter_controller_c_function3__k > 12)_solarhouse3_inverter_controller_c_function3__k = 0;
    if (_solarhouse3_inverter_controller_c_function3__t > 3)_solarhouse3_inverter_controller_c_function3__t = 0;
    if (_solarhouse3_inverter_controller_c_function3__k == 0) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 1) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 2) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 3) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 4) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 5) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 6) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 7) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 8) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 9) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 10) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 11) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse3_inverter_controller_c_function3__k == 12) {
        _solarhouse3_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse3_inverter_controller_c_function3__t >= 3)_solarhouse3_inverter_controller_c_function3__k += 1;
    _solarhouse3_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse3.Inverter.Controller.Gain23
    _solarhouse3_inverter_controller_gain23__out = 1000.0 * _solarhouse3_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse3.Inverter.Controller.Rate Transition9.Input
    _solarhouse3_inverter_controller_rate_transition9_output__out = _solarhouse3_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse4.Inverter.Controller.C function3
    _solarhouse4_inverter_controller_c_function3__Pref = 0.2;
    if (_solarhouse4_inverter_controller_c_function3__k > 12)_solarhouse4_inverter_controller_c_function3__k = 0;
    if (_solarhouse4_inverter_controller_c_function3__t > 3)_solarhouse4_inverter_controller_c_function3__t = 0;
    if (_solarhouse4_inverter_controller_c_function3__k == 0) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 1) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 2) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.6;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 3) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 4) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.2;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 5) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.8;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 6) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.7;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 7) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.5;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 8) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.66;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 9) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.75;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 10) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.54;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 11) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.30;
    }
    else if (_solarhouse4_inverter_controller_c_function3__k == 12) {
        _solarhouse4_inverter_controller_c_function3__Pref = 0.45;
    }
    if (_solarhouse4_inverter_controller_c_function3__t >= 3)_solarhouse4_inverter_controller_c_function3__k += 1;
    _solarhouse4_inverter_controller_c_function3__t += 1;
    // Generated from the component: SolarHouse4.Inverter.Controller.Gain23
    _solarhouse4_inverter_controller_gain23__out = 1000.0 * _solarhouse4_inverter_controller_c_function3__Pref;
    // Generated from the component: SolarHouse4.Inverter.Controller.Rate Transition9.Input
    _solarhouse4_inverter_controller_rate_transition9_output__out = _solarhouse4_inverter_controller_c_function3__Pref;
    // Generated from the component: ESS.Inverter.Controller.Pref
    HIL_OutAO(0x4011, (float)_ess_inverter_controller_gain23__out);
    // Generated from the component: ESS.C function3
    _ess_c_function3__RegD = _ess_rate_transition2_output__out;
    if (_ess_c_function3__t > 3) {
        _ess_c_function3__t = 0;
        _ess_c_function3__time += 1;
        _ess_c_function3__reg = _ess_c_function3__RegD;
    }
    _ess_c_function3__t += 1;
    // Generated from the component: SolarHouse1.Inverter.Controller.Pref
    HIL_OutAO(0x402b, (float)_solarhouse1_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse2.Inverter.Controller.Pref
    HIL_OutAO(0x4044, (float)_solarhouse2_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse3.Inverter.Controller.Pref
    HIL_OutAO(0x405d, (float)_solarhouse3_inverter_controller_gain23__out);
    // Generated from the component: SolarHouse4.Inverter.Controller.Pref
    HIL_OutAO(0x4076, (float)_solarhouse4_inverter_controller_gain23__out);
    // Generated from the component: ESS.Modbus.Rate Transition2.Input
    _ess_modbus_rate_transition2_output__out = _ess_c_function3__reg;
    // Generated from the component: ESS.Modbus.Rate Transition3.Input
    _ess_modbus_rate_transition3_output__out = _ess_c_function3__time;
    //@cmp.out.block.end
    //////////////////////////////////////////////////////////////////////////
    // Update block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.update.block.start
    // Generated from the component: ESS.Inverter.Controller.C function3
    // Generated from the component: SolarHouse1.Inverter.Controller.C function3
    // Generated from the component: SolarHouse2.Inverter.Controller.C function3
    // Generated from the component: SolarHouse3.Inverter.Controller.C function3
    // Generated from the component: SolarHouse4.Inverter.Controller.C function3
    // Generated from the component: ESS.C function3
    //@cmp.update.block.end
}
// ----------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------