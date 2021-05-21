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
double _ess_constant1__out = 5000.0;
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
double _solarhouse1_load_dynamic_table1_clock1__out;
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
double _solarhouse2_load_dynamic_table1_clock1__out;
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
double _solarhouse3_load_dynamic_table1_clock1__out;
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
double _solarhouse4_load_dynamic_table1_clock1__out;
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
double _ess_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 31.0, 31.0, -21.0, -94.0, -216.0, -357.0, -498.0, -655.0, -818.0, -980.0, -1143.0, -1305.0, -1468.0, -1631.0, -1747.0, -1846.0, -1945.0, -2009.0, -2059.0, -2109.0, -2158.0, -2171.0, -2171.0, -2170.0, -2122.0, -2056.0, -1990.0, -1925.0, -1859.0, -1793.0, -1727.0, -1636.0, -1535.0, -1434.0, -1333.0, -1305.0, -1244.0, -1161.0, -1078.0, -995.0, -931.0, -874.0, -805.0, -733.0, -676.0, -625.0, -573.0, -522.0, -471.0, -393.0, -305.0, -216.0, -128.0, -40.0, 47.0, 135.0, 224.0, 329.0, 442.0, 554.0, 666.0, 783.0, 901.0, 1020.0, 1138.0, 1218.0, 1282.0, 1347.0, 1412.0, 1464.0, 1510.0, 1557.0, 1604.0, 1650.0, 1726.0, 1811.0, 1897.0, 1983.0, 2105.0, 2241.0, 2377.0, 2475.0, 2578.0, 2720.0, 2860.0, 2998.0, 3137.0, 3303.0, 3480.0, 3657.0, 3834.0, 4011.0, 4140.0, 4252.0, 4363.0, 4454.0, 4538.0, 4622.0, 4705.0, 4789.0, 4872.0, 4956.0, 4978.0, 4978.0, 4977.0, 4976.0, 4975.0, 4974.0, 4973.0, 4973.0, 4972.0, 4971.0, 4970.0, 4969.0, 4968.0, 4968.0, 4967.0, 4966.0, 4930.0, 4881.0, 4832.0, 4757.0, 4672.0, 4587.0, 4503.0, 4418.0, 4334.0, 4249.0, 4165.0, 4080.0, 3997.0, 3913.0, 3830.0, 3747.0, 3664.0, 3581.0, 3498.0, 3415.0, 3332.0, 3249.0, 3166.0, 3081.0, 2996.0, 2910.0, 2825.0, 2739.0, 2654.0, 2596.0, 2548.0, 2501.0, 2453.0, 2406.0, 2359.0, 2330.0, 2308.0, 2286.0, 2265.0, 2243.0, 2221.0, 2200.0, 2178.0, 2178.0, 2187.0, 2196.0, 2204.0, 2213.0, 2222.0, 2230.0, 2233.0, 2233.0, 2234.0, 2234.0, 2234.0, 2235.0, 2235.0, 2236.0, 2236.0, 2270.0, 2317.0, 2364.0, 2411.0, 2471.0, 2536.0, 2602.0, 2667.0, 2732.0, 2767.0, 2790.0, 2813.0, 2836.0, 2860.0, 2883.0, 2906.0, 2929.0, 2952.0, 2954.0, 2948.0, 2941.0, 2903.0, 2853.0, 2802.0, 2730.0, 2649.0, 2567.0, 2486.0, 2405.0, 2324.0, 2243.0, 2162.0, 2110.0, 2068.0, 2027.0, 1997.0, 1972.0, 1946.0, 1921.0, 1889.0, 1855.0, 1820.0, 1786.0, 1784.0, 1793.0, 1862.0, 1954.0, 2046.0, 2160.0, 2283.0, 2406.0, 2530.0, 2653.0, 2776.0, 2899.0, 3022.0, 3142.0, 3263.0, 3383.0, 3503.0, 3623.0, 3743.0, 3864.0, 3951.0, 4026.0, 4101.0, 4176.0, 4251.0, 4326.0, 4401.0, 4476.0, 4551.0, 4588.0, 4610.0, 4633.0, 4607.0, 4563.0, 4518.0, 4444.0, 4359.0, 4274.0, 4188.0, 4068.0, 3934.0, 3800.0, 3666.0, 3520.0, 3371.0, 3222.0, 3073.0, 2924.0, 2775.0, 2655.0, 2546.0, 2437.0, 2374.0, 2328.0, 2323.0, 2333.0, 2455.0, 2617.0, 2780.0, 2825.0, 2975.0, 3183.0, 3418.0, 3664.0, 4013.0, 4210.0, 4333.0, 4456.0, 4538.0, 4604.0, 4670.0, 4736.0, 4772.0, 4798.0, 4823.0, 4848.0, 4874.0, 4899.0, 4924.0, 4935.0, 4940.0, 4945.0, 4950.0, 4955.0, 4960.0, 4965.0, 4970.0, 4975.0, 4980.0, 4985.0, 4990.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4992.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4991.0, 4951.0, 4896.0, 4791.0, 4668.0, 4545.0, 4397.0, 4240.0, 4083.0, 3925.0, 3768.0, 3642.0, 3529.0, 3415.0, 3309.0, 3207.0, 3105.0, 3002.0, 2884.0, 2760.0, 2637.0, 2552.0, 2482.0, 2412.0, 2358.0, 2310.0, 2262.0, 2215.0, 2131.0, 2034.0, 1938.0, 1792.0, 1626.0, 1461.0, 1280.0, 853.0, 426.0, 0.0, 0.0, -202.0, -405.0, -608.0, -811.0, -811.0, -1037.0, -1262.0, -1470.0, -1670.0, -1871.0, -2071.0, -2272.0, -2440.0, -2595.0, -2750.0, -2906.0, -3055.0, -3201.0, -3347.0, -3500.0, -3656.0, -3811.0, -3966.0, -4079.0, -4174.0, -4269.0, -4327.0, -4370.0, -4339.0, -4278.0, -4191.0, -4093.0, -3995.0, -3897.0, -3800.0, -3702.0, -3604.0, -3506.0, -3408.0, -3310.0, -3245.0, -3192.0, -3140.0, -3087.0, -3035.0, -2982.0, -2945.0, -2914.0, -2882.0, -2902.0, -2942.0, -3024.0, -3121.0, -3251.0, -3394.0, -3537.0, -3680.0, -3823.0, -3965.0, -4108.0, -4229.0, -4341.0, -4452.0, -4564.0, -4676.0, -4774.0, -4866.0, -4958.0, -4984.0, -4984.0, -4983.0, -4983.0, -4982.0, -4981.0, -4981.0, -4980.0, -4980.0, -4979.0, -4978.0, -4978.0, -4977.0, -4977.0, -4976.0, -4975.0, -4975.0, -4974.0, -4973.0, -4973.0, -4972.0, -4972.0, -4971.0, -4970.0, -4970.0, -4969.0, -4969.0, -4968.0, -4967.0, -4967.0, -4966.0, -4966.0, -4965.0, -4964.0, -4964.0, -4963.0, -4963.0, -4962.0, -4961.0, -4961.0, -4960.0, -4960.0, -4959.0, -4929.0, -4887.0, -4845.0, -4803.0, -4761.0, -4719.0, -4677.0, -4635.0, -4611.0, -4593.0, -4576.0, -4559.0, -4541.0, -4524.0, -4507.0, -4503.0, -4504.0, -4506.0, -4507.0, -4467.0, -4410.0, -4353.0, -4296.0, -4191.0, -4069.0, -3946.0, -3823.0, -3745.0, -3685.0, -3625.0, -3575.0, -3529.0, -3483.0, -3437.0, -3390.0, -3344.0, -3298.0, -3242.0, -3182.0, -3158.0, -3147.0, -3137.0, -3176.0, -3236.0, -3333.0, -3444.0, -3583.0, -3734.0, -3885.0, -4036.0, -4187.0, -4330.0, -4471.0, -4612.0, -4753.0, -4894.0, -4981.0, -4999.0, -4999.0, -4998.0, -4998.0, -4998.0, -4997.0, -4997.0, -4996.0, -4996.0, -4995.0, -4995.0, -4995.0, -4900.0, -4768.0, -4414.0, -4117.0, -3879.0, -3641.0, -3403.0, -3165.0, -2927.0, -2689.0, -2451.0, -2246.0, -2054.0, -1862.0, -1716.0, -1588.0, -1502.0, -1434.0, -1418.0, -1422.0, -1471.0, -1537.0, -1603.0, -1708.0, -1828.0, -1948.0, -2068.0, -2179.0, -2286.0, -2394.0, -2501.0, -2585.0, -2660.0, -2735.0, -2810.0, -2885.0, -2959.0, -3008.0, -3046.0, -3085.0, -3123.0, -3161.0, -3200.0, -3238.0, -3236.0, -3218.0, -3199.0, -3149.0, -3086.0, -3023.0, -2960.0, -2898.0, -2835.0, -2782.0, -2735.0, -2687.0, -2639.0, -2591.0, -2543.0, -2546.0, -2570.0, -2593.0, -2617.0, -2646.0, -2678.0, -2710.0, -2742.0, -2774.0, -2846.0, -2871.0, -3033.0, -3201.0, -3345.0, -3489.0, -3632.0, -3821.0, -4028.0, -4235.0, -4442.0, -4650.0, -4857.0, -4976.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -4999.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -5000.0, -4966.0, -4876.0, -4708.0, -4664.0, -4294.0, -3964.0, -3680.0, -3352.0, -3010.0, -2621.0, -2220.0, -1793.0, -1358.0, -924.0, -490.0, -55.0, 378.0, 812.0, 1247.0, 1640.0, 2020.0, 2106.0, 2614.0, 2991.0, 3282.0, 3673.0, 3916.0, 4103.0, 4247.0, 4378.0, 4342.0, 4443.0, 4522.0, 4577.0, 4631.0, 4685.0, 4740.0, 4794.0, 4822.0, 4842.0, 4862.0, 4882.0, 4901.0, 4921.0, 4941.0, 4949.0, 4953.0, 4906.0, 4844.0, 4746.0, 4638.0, 4530.0, 4422.0, 4313.0, 4288.0, 4077.0, 3875.0, 3695.0, 3516.0, 3337.0, 3157.0, 2978.0, 2798.0, 2619.0, 2440.0, 2287.0, 2143.0, 1999.0, 1904.0, 1824.0, 1743.0, 1663.0, 1583.0, 1503.0, 1381.0, 1246.0, 1112.0, 977.0, 827.0, 671.0, 516.0, 481.0, 246.0, 60.0, -88.0, -237.0, -386.0, -420.0, -601.0, -716.0, -795.0, -874.0, -952.0, -1003.0, -1046.0, -1089.0, -1132.0, -1175.0, -1202.0, -1224.0, -1246.0, -1269.0, -1291.0, -1313.0, -1290.0, -1252.0, -1214.0, -1121.0, -1010.0, -900.0, -745.0, -703.0, -385.0, -108.0, -460.0, -487.0, -459.0, -431.0, -403.0, -375.0, -347.0, -320.0, -305.0, -337.0, -369.0, -401.0, -433.0, -465.0, -497.0, -526.0, -546.0, -565.0, -569.0, -522.0, -476.0, -429.0, -382.0, -335.0, -298.0, -292.0, -298.0, -347.0, -396.0, -445.0, -488.0, -509.0, -531.0, -556.0, -598.0, -639.0, -680.0, -722.0, -757.0, -767.0, -777.0, -788.0, -787.0, -751.0, -704.0, -621.0, -539.0, -457.0, -375.0, -296.0, -217.0, -137.0, -58.0, 21.0, 100.0, 166.0, 187.0, 208.0, 219.0, 196.0, 173.0, 150.0, 115.0, 38.0, -38.0, -113.0, -181.0, -249.0, -317.0, -385.0, -453.0, -521.0, -589.0, -646.0, -662.0, -679.0, -696.0, -712.0, -722.0, -710.0, -697.0, -685.0, -673.0, -660.0, -648.0, -636.0, -623.0, -611.0, -598.0, -598.0, -640.0, -681.0, -723.0, -771.0, -843.0, -914.0, -986.0, -1057.0, -1128.0, -1200.0, -1271.0, -1343.0, -1431.0, -1545.0, -1566.0, -1658.0, -1759.0, -1861.0, -1962.0, -2063.0, -2165.0, -2266.0, -2368.0, -2458.0, -2509.0, -2560.0, -2594.0, -2569.0, -2529.0, -2433.0, -2317.0, -2136.0, -1935.0, -1664.0, -1394.0, -1123.0, -843.0, -533.0, -222.0, 100.0, 469.0, 837.0, 1291.0, 1878.0, 1956.0, 2306.0, 2655.0, 2986.0, 3234.0, 3399.0, 3482.0, 3564.0, 3647.0, 3714.0, 3721.0, 3729.0, 3723.0, 3667.0, 3597.0, 3475.0, 3354.0, 3232.0, 3110.0, 2989.0, 2867.0, 2746.0, 2624.0, 2503.0, 2389.0, 2305.0, 2221.0, 2136.0, 2052.0, 1984.0, 1977.0, 1970.0, 1973.0, 2015.0, 2071.0, 2181.0, 2291.0, 2400.0, 2510.0, 2620.0, 2730.0, 2841.0, 2951.0, 3061.0, 3172.0, 3282.0, 3392.0, 3503.0, 3613.0, 3723.0, 3828.0, 3911.0, 3995.0, 4063.0, 4082.0, 4089.0, 4057.0, 4025.0, 3975.0, 3887.0, 3870.0, 3795.0, 3701.0, 3541.0, 3381.0, 3221.0, 3061.0, 2900.0, 2740.0, 2573.0, 2382.0, 2191.0, 2000.0, 1814.0, 1645.0, 1477.0, 1309.0, 1148.0, 1015.0, 881.0, 747.0, 614.0, 480.0, 346.0, 224.0, 140.0, 57.0, -10.0, -22.0, -33.0, -32.0, 14.0, 73.0, 174.0, 274.0, 388.0, 547.0, 706.0, 865.0, 1021.0, 1163.0, 1305.0, 1432.0, 1508.0, 1583.0, 1642.0, 1643.0, 1645.0, 1647.0, 1649.0, 1650.0, 1652.0, 1654.0, 1655.0, 1657.0, 1659.0, 1661.0, 1662.0, 1659.0, 1637.0, 1603.0, 1525.0, 1447.0, 1369.0, 1279.0, 1112.0, 977.0, 827.0, 671.0, 516.0, 481.0, 246.0, 60.0, -88.0, -237.0, -386.0, -420.0, -601.0, -716.0, -795.0, -874.0, -952.0, -1003.0, -1046.0, -1089.0, -1132.0, -1175.0, -1202.0, -1224.0, -1246.0, -1269.0, -1291.0, -1313.0, -1290.0, -1252.0, -1214.0, -1121.0, -1010.0, -900.0, -745.0, -703.0, -385.0, -108.0, 123.0, 354.0, 585.0, 817.0, 1048.0, 1279.0, 1511.0, 1725.0, 1934.0, 2143.0, 2353.0, 2526.0, 2687.0, 2849.0, 2972.0, 3084.0, 3195.0, 3306.0, 3375.0, 3431.0, 3486.0, 3539.0, 3591.0, 3644.0, 3696.0, 3775.0, 3863.0, 3884.0, 4011.0, 4094.0, 4150.0, 4206.0, 4262.0, 4256.0, 4229.0, 4159.0, 4074.0, 3959.0, 3834.0, 3708.0, 3628.0, 3562.0, 3548.0, 3552.0, 3555.0, 3614.0, 3692.0, 3769.0, 3847.0, 3951.0, 4065.0, 4178.0, 4292.0, 4405.0, 4519.0 };
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
double _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 18.597497160976, 18.776360008319035, 18.745181640970284, 18.745292496441504, 18.7925910795905, 18.761358231436148, 18.769301075816763, 18.76410465086621, 18.89702586813113, 19.02558640965436, 18.89918114317672, 18.867295792665907, 18.934937119241354, 19.075421075843547, 19.12509249114467, 19.127729968429627, 19.02836683643677, 18.999316519101914, 18.81409544464062, 18.80099022890593, 18.708813129584623, 18.49491526423281, 18.63647670063924, 18.72802741049405, 18.759881960400637, 18.688931747003025, 18.70113636072549, 18.56514632650362, 18.55198510630606, 18.58922265839137, 18.56677399157144, 18.72979379960582, 18.736778577082422, 18.722542692812226, 18.889349522345224, 18.864816955641388, 18.76212650446148, 18.648742671030575, 18.646566465810245, 18.463756302266024, 18.47850127939217, 18.36993821906211, 18.30370767841873, 18.14082654062496, 18.086036389229925, 17.9595507908227, 18.043585185050926, 18.04812082570009, 17.918263720866637, 18.057851765264573, 18.034713440526332, 18.044435606645546, 18.10292739772994, 18.042035293111613, 18.15449429918109, 18.195089129637708, 18.247984522873608, 18.32755569635913, 18.422434893972053, 18.571993818137262, 18.483715903209227, 18.473125195451093, 18.669226298424046, 18.48095172020599, 18.41277359230121, 18.509742076025464, 18.55655359691602, 18.588231942655327, 18.570362407129444, 18.340924183571122, 18.311041518579408, 18.324526065326328, 18.221374603790245, 18.164237642433022, 18.36058014412949, 18.391581166842887, 18.51871263786259, 18.560506978948116, 18.642386140872787, 18.72536047056473, 18.667127737158946, 18.73041536374293, 18.817770534862596, 18.96053192302141, 18.95938207402652, 18.808040887826785, 18.832449090539825, 18.82574457118651, 18.753627665298595, 18.794394596090697, 18.88958349210696, 18.97455827680104, 18.97533487315103, 18.954204010877653, 18.82234701219193, 18.938858157663176, 19.114011869918933, 19.1430151930072, 19.057546871050274, 19.08367462725086, 18.935157590977205, 18.851001587199626, 18.839066584748643, 18.89861187439486, 18.858506849695896, 18.711181878209164, 18.53438910232894, 18.551641049222965, 18.55391561148227, 18.72547778338982, 18.5901224068206, 18.761840836068522, 18.85473093564474, 18.74728879340436, 18.756103605742812, 18.9030284286942, 18.82851366562587, 18.72064833457045, 18.744490438289304, 18.64885829423863, 18.71938682939181, 18.750837726236863, 18.734794055849232, 18.60278867778116, 18.547921316466148, 18.5428157687542, 18.48537938381729, 18.34323843753997, 18.273554540548496, 18.13997224048761, 18.15468907499957, 18.11795253662127, 18.02531966152385, 18.17489671104984, 18.171524610420338, 18.06564182913737, 18.193523700367923, 18.229998418256354, 18.23760310057768, 18.245261558556823, 18.196722473320577, 18.224731794143892, 18.201173764770342, 18.059502792812022, 18.07819051554552, 17.989677797015055, 17.950396684045984, 17.942262081609066, 17.978006074050864, 17.902304550110973, 17.961279734899364, 17.966916780737442, 17.90010393068964, 17.9762427092897, 18.044543451428712, 18.08514050528285, 18.095731523502703, 17.920964764882704, 18.025265510392536, 18.04064516732118, 18.003170362674357, 18.119425268830472, 18.103276404609037, 18.248903823278606, 18.45502659760364, 18.46750587292661, 18.641952873476342, 18.64839372780684, 18.593255694735745, 18.547603874081872, 18.476691678625194, 18.404728423170788, 18.464413735691206, 18.618568287145624, 18.657345984140466, 18.590814147229626, 18.495844922423693, 18.391475663226302, 18.44909488254055, 18.44357853507643, 18.448242547161218, 18.39664839971802, 18.390094531503998, 18.376605599177992, 18.361166744501904, 18.375989464708425, 18.350898813103907, 18.3231894228655, 18.24561777886031, 18.26694439040144, 18.365508865421752, 18.494236693782987, 18.56519776969901, 18.646524772181397, 18.65241471194873, 18.747094346513947, 18.725224180663318, 18.66663316493013, 18.7246498771441, 18.7496549630998, 18.754182818693614, 18.981633968035744, 19.058509327256047, 19.01288585435366, 19.01154814790646, 18.92824111286293, 19.039722542989114, 18.93923093779955, 18.881351202420756, 18.833167659317585, 18.83182527721982, 18.77441635337605, 18.700601157407675, 18.85395142305732, 18.679315008243105, 18.73568953352953, 18.665881894708022, 18.780634157313003, 18.946835712069515, 18.923385546881565, 18.821418993648876, 18.60107501527713, 18.683493823608888, 18.852145020817357, 18.90555979423732, 19.15138750776678, 19.424032392258987, 19.461476374274344, 19.407008605309986, 19.42656867501084, 19.55535756157428, 19.59678131097227, 19.632499134961094, 19.65235855615111, 19.60471012859624, 19.680156328054988, 19.635454461632463, 19.830754140717552, 19.619899152700764, 19.74864261265012, 19.90986654546872, 19.90496833209113, 19.888810054630877, 20.033410601059106, 19.838361561941067, 19.830276253622635, 19.703246005262933, 19.798169510469037, 19.752737291612032, 19.565816511980422, 19.57310300987513, 19.47968852770043, 19.5233671074028, 19.697482546665285, 19.605720049342466, 19.344229390373567, 19.49590623460548, 19.386893573046105, 19.42271349082272, 19.375892611430864, 19.451293855281886, 19.39375331052073, 19.313822573386506, 19.20301143312511, 19.195742293087847, 19.175359470288182, 19.08529711565416, 18.89820217602898, 18.829315554135203, 18.805644237898512, 18.81861358878876, 18.990569496301056, 18.913266986145178, 18.98218628437705, 18.91771204711843, 19.00740466419866, 18.853214211040694, 18.701085452536983, 18.575097401296727, 18.55292092625311, 18.429276466765334, 18.34956231195654, 18.337440432565426, 18.144157957493032, 18.172524260356454, 18.224444399554773, 17.938417109480348, 18.02387210548946, 18.03230260794287, 18.0169021410582, 18.23902918157773, 18.33728251938487, 18.27203130654634, 18.383352234154522, 18.33510649958818, 18.342243071158126, 18.32462298378447, 18.099653582997, 18.16862254503826, 18.236258579783314, 18.057302499557853, 18.164236444708653, 18.30169959899912, 18.22488598539961, 18.203490959079886, 18.264795719871305, 18.301310365030123, 18.3109394650073, 18.5047762628526, 18.408221073121933, 18.411233534815842, 18.376294073004978, 18.335421511782005, 18.335449299779953, 18.38607319685397, 18.53683251981153, 18.46124165511048, 18.401894821663227, 18.401498378679047, 18.3881317551488, 18.335209050338644, 18.43960040546748, 18.318461156496195, 18.230618308140613, 18.044174722102724, 18.07503954036511, 18.04967542970748, 17.808451086164773, 17.868087073369452, 17.699494367031807, 17.682710637117893, 17.61501070581349, 17.553747899628707, 17.566463684027678, 17.55519238093829, 17.49949613907156, 17.565739303338024, 17.450318385183337, 17.52626166367707, 17.73597651693289, 17.67095866726102, 17.693506871624074, 17.793392748804354, 17.783429921272475, 17.94700074031405, 17.621681571830177, 17.71441762176307, 17.719405474297503, 17.691863883836934, 17.658868017723364, 17.636440894432003, 17.554016430975526, 17.420378024207526, 17.496168257288787, 17.323763163289662, 17.323980253714346, 17.271293363388615, 17.298184631013935, 17.27331590679302, 17.38428536045609, 17.548410463607553, 17.555846523100787, 17.582378517922333, 17.410086452012383, 17.44678364062941, 17.241050545096808, 17.066382919320915, 17.089052568861945, 16.889847018250904, 16.998865382932745, 17.00856709622801, 16.910868196924515, 16.869865732823406, 16.845504704673356, 16.737929886003066, 16.779412277632748, 16.852923365707422, 16.791876381137687, 16.791350866188704, 16.72303047144902, 16.813970610609687, 16.641517538101073, 16.806792746923232, 16.842141216379357, 16.89794620006447, 16.8665418432714, 17.033994441108163, 16.927869028547665, 17.071056289219133, 16.963956394515797, 16.990407120204313, 17.172167089966873, 17.106825731842626, 17.25993442980403, 17.187042669083787, 17.159204725366447, 17.21142184097445, 17.261525820049606, 17.334554473118335, 17.141911788643462, 17.194113951557462, 17.22444453594168, 17.253089761548644, 17.285661095277025, 17.359396302588564, 17.247989925846323, 17.352256817178002, 17.493274608392294, 17.563269505882662, 17.5907459386605, 17.50833021135331, 17.570882151372974, 17.561506302960645, 17.72871720899936, 17.768826220433574, 17.851955385601286, 17.852929103281287, 17.681245706107152, 17.777516309041104, 17.943031875894007, 17.782978653757244, 17.779144792052247, 17.909827914207078, 17.84208460654645, 17.73693683841542, 17.669795162212708, 17.65447514150061, 17.615648664919288, 17.688435300646674, 17.62622767313121, 17.54056290019756, 17.54227536791971, 17.526169136821412, 17.728876541000048, 17.76990522073991, 17.628188637872967, 17.678991940458946, 17.620740026551932, 17.70298914231682, 17.637246173901502, 17.680567401953805, 17.616825649308897, 17.571649937171788, 17.562304493073217, 17.719116511811357, 17.613830148606898, 17.644169720357272, 17.746884651725246, 17.583089664773844, 17.666375709846314, 17.65694745007194, 17.702006297602523, 17.751884481936386, 17.69988364535199, 17.750964258517822, 17.74062412152529, 17.681072092739292, 17.587805014561635, 17.620109603065547, 17.65733865873782, 17.56918812828642, 17.559611605368072, 17.666707537494343, 17.610157515841415, 17.452321505796746, 17.694584882839898, 17.897419090431637, 17.75095880043466, 17.83841026544245, 18.121779415955977, 18.22574472945909, 18.117785697535275, 18.11063223095404, 18.04344766153043, 18.193693056730254, 18.051059447930797, 17.94349691367003, 17.876729255041546, 17.822148816180054, 18.096153802363453, 18.053794223353126, 18.10066823453045, 18.160664270165274, 18.145133409524004, 18.016092044059093, 18.05917829039659, 17.93705245816295, 17.897968563285424, 18.00913111454562, 17.978988412216093, 18.06170171643249, 18.017877062282924, 17.928437687108726, 17.91385562278381, 17.97304452866861, 17.900468102192157, 17.821921715838407, 17.888837347917587, 17.828995651946475, 17.636576539964658, 17.562950502047524, 17.650774918932747, 17.557278428255188, 17.547454467807327, 17.631603919409535, 17.636299957230577, 17.669581758345114, 17.475954533850537, 17.461245067405624, 17.583019266904778, 17.695530439868325, 17.65776360280665, 17.546468691437834, 17.573472743795953, 17.517835156515368, 17.683045113166614, 17.640085907813308, 17.636420138706633, 17.66202436679212, 17.753991086487094, 17.78226801670657, 17.73915132575543, 17.653568189545744, 17.7857369018648, 17.67311130953915, 17.755272529914958, 17.796739307832556, 17.792691606420604, 17.805754643266702, 17.70673485948447, 17.7084821642958, 17.838681924952645, 17.852627209082698, 17.767697614657823, 17.698042000047128, 17.727240037659413, 17.827766223864593, 17.706587209234268, 17.743220503779874, 17.95733718385878, 18.0907833762437, 18.043447044984422, 18.077268768144286, 18.080998747756354, 18.182153753268608, 17.997604988133144, 17.793550585287, 17.896910429753184, 17.722070236284548, 17.93577947532652, 17.966348759252924, 17.94339599548962, 17.898652330861264, 17.92115034267898, 17.821745174894602, 17.878177044776265, 17.78223125615493, 17.766608566380686, 17.786611691133846, 17.77039615899608, 17.77551521553114, 17.907794997053045, 17.7650261503962, 17.712329862914114, 17.77324363988391, 17.778365520272093, 17.69842592832451, 17.452752851163215, 17.443402002722607, 17.456776606672626, 17.328687358656445, 17.20740706727484, 17.23087286664927, 17.373875343393713, 17.453274093995873, 17.248411470162704, 17.184803376840993, 17.025137351170542, 17.05957878201045, 17.244498873883426, 17.222173159470383, 17.18438785528144, 16.977733795555142, 16.839827688552784, 16.792917833147225, 16.843899502660047, 16.79186267775436, 16.861247113640633, 16.83245947072115, 16.99530064487267, 16.900633594910094, 16.910887369474832, 16.912083628294518, 16.9083513752482, 17.037317045065432, 17.03711549044461, 17.074356489848128, 16.97837995821427, 17.094440840636725, 17.072820540536554, 17.109178507732167, 17.08806792394494, 16.905088073696266, 16.93312020612977, 16.898305583979973, 16.86630962579371, 16.9348675107619, 17.024376457662125, 17.12824594008649, 17.08076961827265, 17.078423665291638, 16.99479046623537, 16.918736310790425, 17.062502008884948, 17.044467079436973, 17.082555847771946, 17.083671865672354, 17.2732515638998, 17.257145845902368, 17.248177045619446, 17.206828539051518, 17.262381931525226, 17.17959747548576, 17.110821296817537, 16.945238897841374, 16.878902938667164, 16.845577667613128, 17.004913345699944, 17.05910944582977, 17.082282498160442, 17.09264011021811, 17.091569901460588, 17.2589135415438, 17.21473850436654, 17.21457593887999, 17.105896179751948, 17.21155227743888, 17.310932184955366, 17.295666036448825, 17.25483171290336, 17.111428564623324, 16.924566293313706, 16.859087347015436, 16.731570125672075, 16.62096910484788, 16.443808284482767, 16.16245687437639, 16.170776680493027, 16.12300892777464, 16.066133147016963, 16.005797165384976, 16.035789892747385, 16.04036364324476, 16.202515822485772, 16.30767475877889, 16.33599738117933, 16.524056734341162, 16.582340326156086, 16.531295284640983, 16.503860933683768, 16.429878197737757, 16.404992323484773, 16.32729441997523, 16.300922614121347, 16.277406285705695, 16.153342950099525, 16.307277358193453, 16.189622343919414, 16.319428311056853, 16.186687466802304, 16.176117098582075, 16.20407154995981, 16.23355695907684, 16.21178906270281, 16.211736272794212, 16.202497255060205, 16.088518050639536, 16.240289172049913, 16.236801802494558, 16.295259622885713, 16.30824043665791, 16.281563252517888, 16.3030698618949, 16.302578480826078, 16.37159377853591, 16.294160490809713, 16.276670770269607, 16.357943873274536, 16.478632471653786, 16.54609762299971, 16.66256109670457, 16.955019564534812, 16.895400520085836, 16.91838314548033, 17.06332083892091, 17.070116707687507, 17.148088172330212, 17.068942477167408, 17.01910297507407, 17.14876969318039, 17.123460815368322, 17.048291336458124, 17.191061080042566, 17.256420557825788, 17.46344197247324, 17.602390859057255, 17.711650557412245, 17.816198870908718, 17.810699547597693, 17.69981166142389, 17.7559899444795, 17.764489373778886, 17.742878078456076, 17.7027184445219, 17.638583760499913, 17.655473230732433, 17.689385200408488, 17.676925846737735, 17.679869276379353, 17.6883670941629, 17.460457837291866, 17.4492974179617, 17.525848483039862, 17.5719439001381, 17.466444607409553, 17.395955294184667, 17.498458311852247, 17.569812497490133, 17.53912233160511, 17.60885213949171, 17.5408942475197, 17.54102233744218, 17.516438268272942, 17.323097387507268, 17.23849982375079, 17.08774051569273, 17.292580286970253, 17.36104238913833, 17.438225851839427, 17.56354134146324, 17.402736639082438, 17.546478479755248, 17.649299003695976, 17.72317994851, 17.621461523492567, 17.568319109160253, 17.541109990470673, 17.485383051832994, 17.611406785956646, 17.597863818412662, 17.693952897730426, 17.721091160622755, 17.727843180894283, 17.729606889749288, 17.7866308198333, 17.83474267309769, 17.672579843600303, 17.806632778821637, 17.68293468762078, 17.61813282770313, 17.562911797717216, 17.570604464016927, 17.614922564413625, 17.554820230555052, 17.483852666328207, 17.697736916554426, 17.80095022621633, 17.77090295162192, 17.796679617671572, 17.742152810565127, 17.72240024805708, 17.874061566186803, 17.8791874096322, 17.871576091047388, 17.837169147376358, 17.774950739335466, 17.594014577998745, 17.642718826087048, 17.697798825838028, 17.749051608356485, 17.728757078405486, 17.663560821870664, 17.620809657212426, 17.679959016866817, 17.740729429433955, 17.79275987678266, 17.908203357857055, 17.990018338343074, 17.821493778991798, 17.827665917966872, 17.872073835482137, 17.77752726572074, 17.89184449430714, 17.85521172625411, 17.935248081022934, 17.979994386979644, 17.92982864932408, 17.951905597014647, 17.878724854556918, 17.806854218870985, 17.965259189438406, 18.142072239227144, 18.00275357970121, 17.928223512394727, 17.943113566356953, 17.887754407511427, 18.016829775094077, 18.057625983762392, 18.105835290680393, 18.209713960844244, 18.138695190740464, 18.061757074806952, 18.05109394914306, 17.98855834534777, 17.874900456846518, 17.72946830491612, 17.66648509857067, 17.547770459342306, 17.566753105745693, 17.657213247240115, 17.636272988733715, 17.671719912509943, 17.643153851895498, 17.698412795595413, 17.69871065057688, 17.659684669501356, 17.63106965158698, 17.50704247478219, 17.615568927154573, 17.657354802951396, 17.740377490623512, 17.608480307018848, 17.621685436394074, 17.616740675914727, 17.584336194712968, 17.721938135019695, 17.757199341462997, 17.738843665135843, 17.620978442857265, 17.737612241598047, 17.845382387361408, 17.777222905336114, 17.650598782199015, 17.548425397862598, 17.604346136200153, 17.678014679712415, 17.702243641535105, 17.945026349810977, 17.873852316104323, 17.875958133870775, 17.774676709152235, 17.735441488240443, 17.740142757410535, 17.647334104048685, 17.563030247797805, 17.543841607139765, 17.63375852401433, 17.606348404396496, 17.506706964392382, 17.48158136512529, 17.34077762582397, 17.27035108502322, 17.3086113245343, 17.36661497740045, 17.546857748412627, 17.630394811777464, 17.464440970743894, 17.483353999182757, 17.702650104781238, 17.833075620624854, 17.767795126825217, 17.874618796431864, 17.88545276739607, 17.835103172135547, 17.902544933451672, 17.90867705270571, 17.750676373344504, 17.733058058037983, 17.786799493369838, 17.771134653579253, 17.774672421926972, 17.884232570803693, 18.08170517353633, 18.15224003778997, 18.107195292810573, 17.976141220489797, 17.83535528412599, 17.742777243509035, 17.739367512671933, 17.70671059102521, 17.782308127416016, 17.746176467682744, 17.791784119091314, 17.510366646248087, 17.535572068242406, 17.553419643898565, 17.54139297737052, 17.600514722869548, 17.528430915570258, 17.618789190343186, 17.60899515967762, 17.731552431287795, 17.506430976842598, 17.4567436064489, 17.47611837090383, 17.327504516010535, 17.499756308500732, 17.51736540425341, 17.439531186136538, 17.400491112244424, 17.4259699611349, 17.50484003103222, 17.618302253449144, 17.565613068473315, 17.64930230725854, 17.697674745484893, 17.747725589183474, 17.735618069870934, 17.83943665062854, 17.732004225360193, 17.759325870756978, 17.838983477532455, 18.01740577493604, 17.98498162370088, 17.957880703869613, 17.840742770245328, 17.867232026867658, 17.85514991553225, 17.944904154490434, 17.928898032891333, 17.925758316729997, 17.851028897915626, 17.981174449385847, 18.078539912432944, 18.12049916229961, 18.077794846152614, 17.88714566220407, 17.950565213197752, 17.778462341621584, 17.75149370784048, 17.714741882404173, 17.723646898650532, 17.74677061724058, 17.633872320487228, 17.596513536884036, 17.669396291168393, 17.571805342230448, 17.532410467055442, 17.632838147036164, 17.56274493154241, 17.938441098891687, 17.93644291501923, 17.893878878695872, 17.889191346291447, 18.05761345353704, 18.05934903405784, 18.185833882246726, 18.25081678243849, 18.09792904986176, 18.110183870145203, 18.22516420698966, 18.21925306010932, 18.34949584949836, 18.365468915884023, 18.329094320913683, 18.19532534872745, 18.241611380984867, 18.197639791215067, 18.14001385165111, 18.37526352183321, 18.309071480644565, 18.297282098723155, 18.43201791777167, 18.413954017257886, 18.366118979112656, 18.38175849337296, 18.31409103909816, 18.25219694936365, 18.433790174496693, 18.435102155947398, 18.494049097968762, 18.548548812368892, 18.71135971793584, 18.755000233980898, 18.64595479886369, 18.50549582033643, 18.39080861532549, 18.18278594271131, 18.031748234211218, 18.02166830468336, 18.03591695184581, 18.018742419652874, 17.91407973565484, 17.933809864542564, 18.114377010957146, 18.028925131716388, 18.133212579812227, 18.24023826666224, 18.039745551987, 17.861805750404375, 18.12482626529188, 18.251774180303983, 18.226534434034665, 18.116147839956763, 18.094270576203996, 18.119219198216538, 18.049518728263127, 17.994581787517966, 17.903501308882515, 17.902320073703738, 17.88778226927789, 17.872240822512946, 17.77523443037866, 17.915910617859726, 17.781051763646758, 17.904862795677627, 17.852451493721343, 18.01485454851145, 18.102960571635602, 18.27927566522536, 18.223631750041406, 18.09221012198635, 18.16178735894425, 18.11675202774064, 18.093163821207497, 18.01203231372786, 18.001121646248304, 18.012658650763004, 17.963411447942818, 17.951574671922806, 18.15538323671708, 18.14784412370661, 18.096362415227738, 18.173225902185887, 18.20353289896736, 18.26696052452365, 18.224989594054637, 18.21428273986996, 18.240816796733228, 18.515540594137086, 18.490134304145727, 18.40574360979685, 18.41699844380821, 18.309602738679796, 18.327879485647138, 18.238951457727406, 18.056223988093837, 18.079000899772943, 18.101974494231523, 18.107445008130874, 18.092646256197245, 18.15873543987061, 18.059444950639477, 18.11815725132517, 18.342714862886776, 18.346297144079067, 18.419153298681373, 18.3317885030626, 18.407358835357133, 18.28185218755696, 18.228209782815092, 18.269663138327523, 18.224877620422962, 18.14513942771676, 18.118854917543537, 18.109980951682484, 18.194875024207168, 18.320916445214923, 18.263464690189444, 18.31676129065103, 18.130465920641, 18.04045366813584, 18.064932956886736, 18.000976950914076, 18.13585516472671, 18.146206335399306, 18.1833145185132, 18.18947253651513, 18.19983921375711, 18.235043152699863, 18.142680903817748, 18.142718467402954, 18.173882610022208, 18.3719499318355, 18.45688195393735, 18.269473465035066, 18.347673008609927, 18.30882557116393, 18.389346768858484, 18.490860635715602, 18.48917182460279, 18.467239932007814, 18.71420536464701, 18.688946725758, 18.65256671020917, 18.693802031972748, 18.578511870554646, 18.60731897696272, 18.63526551981308, 18.67992972167996, 18.567787058924416, 18.646279665148466, 18.723624406904968, 18.764369367036107, 19.013354840988946, 19.028811886611958, 18.94275938216988, 18.979604980275127, 19.032924186303227, 19.015057406113726, 19.086768276988682, 19.041287113196876, 19.028896029903347, 19.017598824980077, 18.991159735434987, 18.9966749417032, 18.746689885031678, 18.8176489333107, 18.78407371163813, 18.84268362615962, 18.74595336492009, 18.61440282050302, 18.590327605646905, 18.442635831993197, 18.325450438040782, 18.332380559521784, 18.258220939371284, 18.072464093258155, 18.152763234805406, 18.0199801689668, 17.966155052856397, 18.082163510221843, 18.15697602217553, 18.20702180286421, 18.172530707957748, 18.152616769505293, 18.218660823391915, 18.188289476840552, 18.11811446383567, 17.997703299049682, 18.080122889162364, 18.127107431395935, 18.161590427093056, 18.231794332685872, 18.016683627019802, 17.9897242247755, 18.017475314437988, 17.897533892467283, 17.89362971057275, 17.96479443450797, 18.008360166707632, 17.818386025299628, 17.76310843625512, 17.730990519597302, 17.627951827558718, 17.355094893894336, 17.42907888971445, 17.33698640903478, 17.433786170289633, 17.36997251115043, 17.3393730019932, 17.28778416147187, 17.295728778550018, 17.363733062244243, 17.602258129275068, 17.572056138136908, 17.662615401949527, 17.80136594010839, 17.757738019415115, 17.816817334062236, 17.798361872646325, 17.906285286372693, 18.010406568834533, 17.936585008563515, 17.925566859661647, 17.958894399136856, 17.80913225538999, 17.83967183716896, 18.001699622098325, 17.961771256644298, 17.924541741445978, 17.660100219038952, 17.633303339151233, 17.69481668353225, 17.70554299703575, 17.598747045073438, 17.507293833399608, 17.531627230587098, 17.60714806724873, 17.582370595387644, 17.52622888155099, 17.744283656102247, 17.744755483737592, 17.82640044255728, 17.735546805501162, 17.771737456442512, 17.789315095524408, 17.836658723237807, 17.751971232923857, 17.839758255199165, 17.942107491842712, 17.845041827510215, 17.783324368637203, 17.68208920955983, 17.58810239710575, 17.647388839670263, 17.800397315003714, 17.852865580098356, 17.806012606918358, 17.664225788114525, 17.76852990723488 };
double _solarhouse1_load_dynamic_table1_1d_look_up_table1__value;
double _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse1_load_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr;
double _solarhouse1_load_dynamic_table1_1d_look_up_table1__fraction;

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
double _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 16.29193060718691, 16.15982625495595, 16.076325156680596, 15.965390567859671, 16.043207976260323, 15.945616294133165, 15.932163059112616, 16.004464879917663, 16.216909742675483, 16.240389784412756, 16.017006212717813, 16.27743856437667, 16.256936919788366, 16.40361454631725, 16.31834976602632, 16.340634226748882, 16.49625743424625, 16.413532184185645, 16.36887584786934, 16.490943696228975, 16.453363354598725, 16.34427047311808, 16.435031716837173, 16.51563147755046, 16.592223503462932, 16.69084729105663, 16.773131377267, 16.70191107493286, 16.735746025359074, 16.78322518936367, 16.881554713048228, 16.980855566196652, 17.172687376716468, 17.413717546962435, 17.508504267159047, 17.27977945047001, 17.317446584755867, 17.18744555325371, 17.12576140537513, 17.153861989090277, 17.058087119021266, 17.108645219392983, 17.097965039389948, 16.948023434054925, 16.911269322285758, 16.882358829083607, 16.902771734643455, 16.828735491937273, 16.957051579087224, 17.03774975695325, 17.132489708145915, 17.244106171766493, 17.015928929837425, 17.03865437668517, 17.166948052771282, 17.288270205992905, 17.149317878189418, 16.930963602188598, 17.059963906707885, 16.9611514260359, 17.078973094726884, 16.8278439491566, 16.732821948231486, 16.77518823944416, 16.772856701337346, 16.827553518713607, 16.98280374996388, 17.073470399823115, 17.118289562760243, 17.18669016167625, 17.2970615836776, 17.34822195182257, 17.5033906528428, 17.682987917479675, 17.66319911472255, 17.803609331698365, 17.771414236958847, 17.813547533787837, 17.860691050161083, 17.95481067098207, 17.90772646797085, 17.90520722407178, 17.92774801857247, 17.946301866074975, 17.749014321135064, 17.667137508713825, 17.747474050369025, 17.769070109445874, 17.681585275736357, 17.747738150143977, 17.845734514759492, 17.842920384931798, 18.03443482918543, 18.082151324953237, 17.948921529666734, 17.961769976202614, 18.090435666411842, 18.07491016440008, 18.08451277736755, 18.043242997355648, 18.13159196362479, 18.128166270327068, 17.859075211190238, 17.82162036152745, 17.90661371075964, 17.94647163807084, 17.961288654655345, 17.925839816991825, 17.733350219042645, 17.92683324666524, 17.85546008858396, 17.97898509948583, 18.08383233572985, 17.986994274420386, 17.969358767068396, 17.97685303910543, 17.87258838575584, 17.76969043716311, 17.9211280196708, 17.963625106920894, 17.960832002915303, 18.010952814841495, 17.954451790232508, 17.914661069992142, 17.987093144114066, 17.688954646585728, 17.67711434515427, 17.691881773184804, 17.761791561511, 17.845252124727928, 17.888288116693946, 17.980263758901913, 18.148832036746462, 18.141924562016406, 18.306496606270212, 18.12385422500661, 18.16968096836316, 18.11478293147534, 18.07164043592497, 18.07481735713322, 18.046866325152337, 18.01263882027714, 18.02107373315173, 17.976859289244565, 18.0229294319621, 17.947780173995824, 18.113742199921926, 18.08406578967384, 18.164042322613746, 18.32814633872223, 18.387816749825774, 18.435940003494245, 18.43010900226698, 18.489991067744114, 18.43104706792032, 18.420345156023927, 18.413736275957664, 18.18164726758357, 18.159907347607028, 18.151990093639085, 18.10152009564269, 18.010827170437818, 17.888223918472267, 17.96725074289069, 18.080816779533734, 18.28860436666944, 18.28243850059105, 18.448605132310917, 18.373746566926336, 18.40326033914495, 18.371961857563385, 18.357788412070803, 18.445012141376612, 18.482776360711227, 18.445797703822944, 18.489321233611232, 18.480606265814387, 18.614383603921162, 18.5803094312862, 18.472862833634185, 18.42575566708656, 18.583904459311984, 18.440473520519337, 18.440896306503845, 18.385335322958145, 18.492098436570576, 18.52452264158885, 18.55101604445634, 18.543827472068852, 18.505751971477526, 18.606800447461303, 18.535254923945914, 18.649212300888838, 18.75797752828011, 18.733919359244737, 18.768715316592914, 18.81055538722114, 18.644353771330604, 18.745253877459408, 18.791858109185146, 18.650173888963387, 18.548520096997596, 18.541228103031216, 18.60447556625983, 18.61499710587541, 18.45695530658315, 18.29895335107341, 18.329483586326546, 18.198142608969654, 18.28354680583156, 18.258772756179212, 18.463470192387625, 18.43489529296532, 18.33034796016196, 18.422032532696193, 18.213755843565753, 18.199454810461074, 18.158201832308112, 18.2584444215674, 18.26898840400381, 18.39435582685487, 18.464124526709004, 18.423413066506058, 18.277998191992463, 18.21463544818154, 18.287318678758034, 18.189445085828076, 18.22067596769212, 18.186407811619876, 18.285234013227477, 18.17995520475092, 18.088576799033667, 18.129406396131667, 18.043450132404804, 18.13482544981107, 18.103680984179015, 18.0744152606974, 18.20264091422255, 18.23116514291951, 18.099806548580762, 18.217454858714756, 18.140934861740092, 18.19758242072361, 18.12884847639786, 18.046932147344123, 18.07530014506449, 18.0417076341474, 17.875650263465133, 17.917100774889224, 17.917651454304874, 17.849233554584305, 18.02071738789633, 18.015052587112294, 18.109463832909977, 18.156865364567782, 18.0862824745111, 18.16023181980284, 18.24837400880911, 18.39656373886854, 18.474670513405982, 18.35868093563328, 18.361005792619604, 18.34644919389156, 18.163481513588827, 18.132890377580267, 18.029539320928933, 17.916849441471623, 17.942320002221642, 17.819001882058682, 17.735497816120702, 17.640186824396388, 17.617759795388704, 17.566883731551993, 17.507952237231972, 17.357997794125335, 17.33809979255251, 17.301623249099773, 17.24644265136311, 17.284941399212403, 17.427459934315824, 17.373017905276292, 17.299638782718425, 17.24867053170232, 17.27645282938213, 17.135944247191986, 17.150788469723977, 17.20239262526515, 17.01466153539531, 17.056786362981523, 16.935671210602802, 16.75786232920021, 16.84503365090358, 16.695814611431757, 16.758215211941106, 16.848131918097998, 16.828127575929894, 16.850851056529258, 16.80971564727732, 16.83365697586759, 16.947555617915874, 17.070381973992063, 17.04564480534216, 17.158049432078823, 17.09636150760825, 17.378417487444192, 17.219477424230096, 17.161162079254254, 17.242011327622162, 17.368827179703352, 17.58318796972673, 17.362575219500382, 17.350271753244677, 17.186870609358238, 17.205290687365693, 17.088820489923574, 16.994438184198337, 16.79747712792537, 16.936897414933355, 16.955369024713274, 16.954417489726428, 17.14490717084678, 17.140052906616464, 16.961705234267747, 17.106726583597478, 17.18982820820652, 17.180327069427832, 17.069168327828926, 17.03748783468341, 17.034797611998687, 17.136514056661287, 17.098281475367312, 17.08056072358249, 17.023274957258455, 16.991526943189395, 16.86096199710025, 16.909186563710936, 16.87988538236621, 16.887006272709804, 16.828913828007018, 16.726619299226208, 16.549734728668614, 16.620902081694894, 16.577730229663725, 16.536098800882332, 16.632197042971228, 16.66364490815026, 16.851017287214624, 16.833296214905623, 16.686923743401884, 16.730906069119072, 16.839778330944213, 16.957267362308073, 16.856005307302507, 16.85412063539189, 16.934287827750698, 16.861741058690146, 16.921823524488552, 16.997532220994447, 16.978333641265476, 16.906031805592136, 16.816793513612726, 16.66710059676057, 16.722778632534215, 16.701570351502905, 16.932659754665302, 16.875289014920767, 16.685109710774718, 16.672823047547823, 16.742289148580078, 16.834060431192366, 17.01691862070874, 16.936471591330214, 16.819397481741603, 16.837931549248662, 16.709668727596473, 16.75411072443967, 16.62690195137955, 16.65269807237032, 16.601459972535707, 16.606089612081956, 16.545949323740267, 16.47546096417496, 16.350583815828788, 16.37409644813247, 16.389612325978337, 16.367601127448182, 16.324764228754894, 16.291686611972313, 16.415544885928778, 16.46960742940237, 16.486928254361715, 16.36642652428232, 16.426155515298586, 16.526335123240262, 16.66596379567399, 16.802239428629004, 16.741463616892652, 16.876675525775347, 16.792880018724986, 16.872669541071485, 16.794131675264914, 16.847127647654695, 17.04021907783763, 16.87229080676797, 16.845340639854065, 16.950988066515894, 16.983976186154475, 16.857436602048587, 16.76980704942323, 16.829285139022552, 16.717339357825487, 16.67025762700965, 16.701647765362857, 16.59506873041015, 16.694921213645284, 16.797471372149047, 16.72378286130846, 16.74450629447891, 16.934995954949525, 16.94939465524257, 16.948894904160632, 16.87816682232317, 16.76201977061196, 16.820017412458373, 16.771084821506893, 16.775384707570687, 16.686254456894876, 16.696729879430347, 16.577056861267586, 16.68177905179434, 16.798266420023133, 16.689280028279338, 16.693952226169483, 16.554535969993402, 16.591366376127027, 16.503594316758154, 16.487066549046897, 16.57598522897337, 16.591522635231215, 16.492430327204087, 16.484384815474055, 16.518922776796998, 16.592525600833493, 16.54188086412342, 16.37340682713166, 16.196319001869966, 16.110056944177707, 15.993664731480573, 15.970354789183245, 15.794870194135859, 15.805075343498885, 15.765907037110601, 15.842638030919735, 16.08302727807986, 16.100393437955972, 16.050890129826847, 15.965726515673854, 15.708367478076275, 15.75876524695637, 15.733591745094836, 15.798525750369285, 15.670314270149085, 15.606567428790632, 15.755352918685686, 15.90218672778146, 15.83259272654495, 15.803581569274753, 15.8783217693151, 16.043002712961535, 16.040181621096288, 16.023428962590046, 16.137593156465307, 16.146531033683885, 16.246950419027268, 16.153368748894255, 16.19418695944265, 16.008962380856985, 16.062125541975643, 16.12588066719942, 16.125870442642213, 16.08847047523674, 16.144692410890467, 16.134954396012226, 16.089713469347597, 15.973670192753904, 16.061672079385765, 16.101350736611412, 15.978742665407784, 15.878876170839785, 15.902291374263903, 15.945052725913875, 15.868341712003494, 15.811927585534278, 15.806886168266852, 15.623459920036991, 15.721290852587046, 15.724044597939525, 15.792228260797145, 15.880702558437454, 16.005459894670118, 16.005416655189755, 16.11226668700958, 16.230598801126632, 16.263921944230148, 16.244102520776615, 16.275004009905164, 16.23532372689953, 16.120607990477957, 16.06195568955879, 15.996378559100563, 16.178674981021544, 16.228282822933835, 16.119690859095563, 16.083910991718618, 16.0878396514046, 15.993880365522651, 15.87342294318029, 15.866058772525482, 15.947200336883867, 15.793430588611901, 15.746793864510552, 15.766058987137663, 15.782037280498905, 15.769047967160521, 15.576715661026904, 15.484749973321767, 15.288866985535615, 15.189716834837078, 14.961271558138963, 14.961121076222534, 14.972615633353172, 14.961464784946088, 14.848287116132955, 14.825259512807555, 14.77486679469201, 14.886709901961469, 14.92197629758627, 14.992042561516046, 14.800484366594706, 14.811615662233356, 14.97705945482007, 14.982953722621973, 14.921854390356609, 15.027075557093694, 14.995822884698393, 15.048343155600918, 15.054478385248398, 14.841653535896235, 14.859065559341465, 14.809966141210374, 14.820771476325707, 14.854378527607254, 14.84797293780182, 14.98298863006307, 15.044341742999242, 15.149865871726005, 15.208280582755785, 15.240162841468553, 15.18517349485914, 15.198275367385216, 15.389856048671374, 15.344024561905801, 15.370458123566491, 15.586266317787366, 15.573615083886668, 15.611206099413671, 15.686779985177536, 15.695299516493845, 15.723664827251987, 15.848204415358175, 15.925465481957307, 15.927717183241176, 16.115050617982973, 16.235039826766062, 16.189877810614348, 16.142763826027064, 16.087276922236008, 16.01285239188683, 15.822835886685688, 15.903787478243878, 15.856266890250204, 16.042682974129516, 16.120801626432794, 16.139503531384545, 16.07563156848806, 15.982392737385393, 16.133753069476406, 16.262137846843178, 16.30947450246812, 16.200530294355367, 16.073923166788987, 16.185056821551527, 16.160465546162325, 16.264466334217975, 16.305469141833523, 16.292195405435898, 16.31718950240966, 16.395837883126866, 16.417710032853147, 16.572411216639832, 16.471827616945536, 16.343731567908836, 16.38426623477265, 16.408013712668442, 16.370667828226413, 16.260915175329988, 16.15922339123471, 16.08136965474307, 16.06675599984929, 16.121640447025705, 16.13266638218077, 16.153416769306222, 16.06714134872624, 16.133489296724132, 16.09325436642287, 16.1254802814371, 16.053214092074622, 16.10091607811167, 16.243422141813408, 16.322995262643445, 16.33302801063493, 16.219047400762573, 15.947030293855331, 15.949652776540766, 16.08812522657318, 16.000080163386883, 16.084956225714027, 16.128827108705106, 16.27367024970187, 16.52364691344368, 16.72185693606677, 16.603355319292742, 16.60707267039729, 16.638665335015055, 16.541306842421232, 16.426271069503795, 16.568277528360525, 16.438269999883282, 16.40510740756439, 16.403641623915973, 16.39631742754628, 16.500781790728126, 16.6111677753564, 16.68461646436721, 16.548427485114704, 16.541869187114134, 16.63428431927148, 16.754778138224776, 16.76480750319412, 16.81811489839112, 16.79598737508335, 16.827592607803425, 16.79209783705631, 16.66518050443333, 16.579080789016068, 16.644004251074502, 16.692974512825245, 16.568847089194307, 16.458064842498178, 16.433019185225096, 16.424057068263753, 16.522539833965144, 16.624688833638366, 16.547717485046782, 16.53496461636422, 16.47084089308142, 16.472360892334226, 16.466575934676964, 16.30858802850512, 16.402865878135312, 16.369372697953146, 16.223270208571627, 16.223114229581846, 16.478624083243993, 16.49072032229491, 16.417304893127113, 16.374233456516812, 16.422519635251323, 16.3347588254363, 16.31122492177839, 16.228155973665473, 16.266013191059407, 16.118653376983794, 16.04134835972432, 16.115148691333598, 16.131114135561, 16.154614956629313, 16.097590470725105, 16.06276653289691, 16.152834744944318, 16.19107132697133, 16.28568774744262, 16.32037249053333, 16.203239330494153, 16.197570435792276, 16.406965675569893, 16.414619067290626, 16.461395170718017, 16.493946512809632, 16.469468126794965, 16.535456386397453, 16.716118960250007, 16.572403715714596, 16.563019325764706, 16.60664270477977, 16.600870740693082, 16.69522210369513, 16.62991935071336, 16.655516417744266, 16.75501190325367, 16.774907211335325, 16.837299320022495, 16.95134752571062, 16.904696886939334, 16.94034877291944, 17.040011978664197, 16.963645831878335, 17.01674573892229, 17.049509776119027, 17.080665374237462, 17.05566437682752, 17.23686479767952, 17.263449313666772, 17.057734462334803, 17.083979380919953, 17.209797900269177, 17.22631717644392, 17.12573282722547, 17.048018271576804, 16.916541449241546, 17.053058478092456, 17.12541190665894, 17.089288627321288, 17.218636547185515, 17.085442168203688, 16.9365631309068, 16.923893163541894, 16.80074094882711, 16.794619618888518, 16.686175923999922, 16.63199396248607, 16.67434577098778, 16.710138262305936, 16.76117359535795, 16.812362224923504, 16.999311668041713, 16.94320838950452, 17.107718297144945, 17.215574459855567, 17.341611263628312, 17.210934779962805, 17.207609902428132, 17.24524024613566, 17.02858497093165, 17.103834945707565, 17.192796384866334, 17.393443776130393, 17.58324534828126, 17.431996273485108, 17.451427538074558, 17.53514097550883, 17.581851427830532, 17.64547879927331, 17.60872249089964, 17.652723043631834, 17.72336110058076, 17.64438787004835, 17.588052125135416, 17.579454987661624, 17.59563480234905, 17.51855303910757, 17.581204656432313, 17.434140714293974, 17.383431104689823, 17.379470148286593, 17.425745138537813, 17.464124193246857, 17.389433248958714, 17.348947449847714, 17.39928074612349, 17.377652724753823, 17.48974297492158, 17.483074911333336, 17.433752435981177, 17.515579574270394, 17.420820415616628, 17.35510750870725, 17.368558926470502, 17.514973328832962, 17.500917204341, 17.488753577162207, 17.529653680834087, 17.655293509829548, 17.69161927422802, 17.566211405434867, 17.491323968941256, 17.550512360421568, 17.476712902230947, 17.592786355736823, 17.6271094511754, 17.812865902554144, 17.73962482271122, 17.527811681875633, 17.694140848527947, 17.653795257002994, 17.857258516486805, 17.831430592522345, 17.824453745489105, 17.862147903705246, 17.87517748896639, 17.794154184249226, 17.741912621062685, 17.741174064186925, 17.851867489077236, 18.034719666502106, 18.07087500114184, 17.991849405917236, 18.056243985725967, 17.977144644268037, 17.799769962853784, 17.73772816495852, 17.885630838090922, 18.0251370269747, 17.973380824108638, 18.117889810805767, 18.030489330298586, 17.936173851177024, 18.03180073115398, 18.20772382233604, 18.353790457306378, 18.43455466567648, 18.543334991733452, 18.437689675247995, 18.47985101783625, 18.483629219981236, 18.563809093790507, 18.52987348284889, 18.617477016415577, 18.63089538433725, 18.771439727630554, 18.762065669709862, 18.65142953004353, 18.67849135794972, 18.625511184229733, 18.445580826514696, 18.43255051309244, 18.338269096567114, 18.186651426871183, 18.169033338635266, 18.155322137182928, 17.961051763433908, 18.02646863408283, 18.089313869781147, 18.254173857349862, 18.06158769845511, 17.923772953613092, 17.905431237342867, 18.212950691467952, 18.0577950440121, 17.954495291236785, 17.840553263941022, 18.00949324276345, 18.05842372570827, 18.013907037796713, 18.058591655361692, 18.38184910954028, 18.2938607345179, 18.259861199442614, 18.32546172632656, 18.26203762825764, 18.22708076980872, 18.232562932066642, 18.373974168437886, 18.384653563305008, 18.300123688366085, 18.535325160794674, 18.435226129829164, 18.38293698038737, 18.523007760038407, 18.412749202232106, 18.37603713025698, 18.460785618291585, 18.673470268633828, 18.70525423354259, 18.599969346213893, 18.525579998216763, 18.554764261930668, 18.652220698645245, 18.745165479639773, 18.738118354932453, 18.879419920657693, 18.869249169469853, 18.87860560108929, 18.898294847974807, 18.906828710541607, 18.975935904924672, 18.89800838774435, 18.89421787863364, 19.061157200789527, 19.008892675176877, 18.963636037581736, 19.08439427670225, 19.019122796329306, 19.093412795558844, 19.114957093744238, 19.04187400387073, 18.99180277688395, 18.96369030511155, 18.853894984731134, 18.90930246062715, 18.86307384535311, 19.020180891949565, 19.007870879155266, 18.99965332526, 18.964149953654694, 19.09945444332882, 18.979899457018977, 19.112674079771768, 19.04233927420506, 18.9690278375791, 18.99714080013838, 19.01441138385605, 19.022058692785933, 18.96972873032064, 18.85153562403672, 18.84043247133919, 18.786295247286734, 18.981633302319032, 18.955921289401523, 18.84854969156921, 18.92359096023967, 18.975499910251102, 19.010151082421533, 18.918633325362308, 19.07941973597511, 19.03693602050901, 18.909092324980254, 19.060185033473925, 19.115506046348887, 19.25506372202581, 19.272571826424297, 19.280548959391478, 19.22207477261636, 19.173059111379, 19.330388202878645, 19.27985627198367, 19.38894155510915, 19.43731909421337, 19.58162021162715, 19.510470676493387, 19.4432776084122, 19.425718675756247, 19.313164113978754, 19.43542723738793, 19.303793702200235, 19.243476183676847, 19.23205645917396, 19.2044527178375, 19.087174247669363, 19.046841580075945, 19.09490181329037, 18.997123061209592, 18.93030286623437, 18.983528869675343, 18.9604502218525, 19.13003554484727, 19.329041279313806, 19.202052348921434, 19.253684283024022, 19.265376579670328, 19.0937250018853, 19.10951413549227, 19.103276515988185, 19.147118901136647, 19.356529119149414, 19.32867153502365, 19.188258974729894, 19.294393982311906, 19.234016955200428, 19.13485328162919, 19.097381074862376, 19.043240950669297, 19.254178882591148, 19.27238650230544, 19.288289533155385, 19.490884845008896, 19.592029097145836, 19.649885925254164, 19.786208076525106, 19.665164210256194, 19.576695590153236, 19.652659618489864, 19.609859005319624, 19.749504453441226, 19.78137821860514, 19.88199397026869, 19.86413215912395, 19.790961391845546, 19.920710696848058, 19.888173752421427, 19.983715508640387, 20.122635735481158, 20.23031268009419, 20.247710490316592, 20.193387685048112, 20.415650108308235, 20.510150756713422, 20.25362530659035, 20.13485802493008, 20.063603400994094, 19.937376989233943, 19.944645619502694, 20.063253173528707, 19.965802358832327, 20.041051591612295, 19.99915237683869, 20.00652100158313, 19.98934661147953, 20.026403027401802, 19.956931036191737, 19.87761938165404, 20.039984319679316, 19.993565262716306, 20.104991213842638, 20.150111393151224, 19.989286526699065, 19.972347441603986, 20.027319751245425, 19.884555899623876, 19.829901308933813, 19.897957927449948, 19.952122129545632, 19.946510090945804, 20.042550095532068, 20.11888810896983, 20.04720348676529, 19.931238714824914, 19.985954712690823, 19.91660900040603, 19.95804221953031, 19.839463410725344, 19.792877257008325, 19.931652530120253, 19.969613332947517, 20.057404798607486, 20.18968470040957, 20.21038322590474, 20.280602967247532, 20.11949113392179, 20.06165398725572, 19.967921518956484, 19.860142103446954, 19.768019470279373, 19.824927766064192, 19.90770025837077, 19.903796879442567, 19.987804409851, 20.143029501352817, 20.242726984022493, 20.45433205397841, 20.48913557306661, 20.584222018678354, 20.59386854917469, 20.56312295198155, 20.62056678042675, 20.65466434752879, 20.77132190523031, 20.701821345375, 20.65856597682551, 20.60040041318061, 20.58960778950565, 20.491012712746386, 20.213356941025925, 20.248338307031887, 20.27656858214845, 20.306658213237114, 20.15128399200481, 20.192816899867797, 20.185192224778827, 20.253780226874547, 20.18688953883836, 20.173105950225555, 20.223352706094808, 20.286010457933322, 20.412527187298178, 20.44980512292282, 20.35792792963053, 20.25281087253139, 20.239207710318087, 20.406244230436684, 20.36837453667131, 20.386602018874587, 20.338756317861485, 20.382924756939968, 20.43212082567609, 20.52693075210824, 20.631932023330734, 20.680857824406566, 20.85301951393637, 20.625469684574945, 20.63090848970361, 20.5597596572588, 20.469704181810158, 20.46844837615836, 20.555232009037415, 20.551640347410988, 20.49480161906816, 20.418149466828748, 20.515044622086002, 20.48903255445104, 20.555435514694985, 20.658432593513986, 20.707448580991077, 20.662421300419513, 20.516845494997348, 20.618107914983405, 20.613364003470725, 20.556895604410293, 20.538809361445576, 20.697242238059594, 20.583179583440614, 20.565634723712087, 20.655379154309585, 20.691043118441232, 20.713122521493595, 20.6658824484462, 20.621113479182586, 20.69785174570462, 20.617590874488627, 20.456778659292933, 20.391044769863537, 20.58461486806747, 20.731100615462026, 20.69539040280637, 20.789389576024632, 20.792036008013262, 20.71999643873388, 20.807078917774295, 20.69299955352985, 20.722649852288765, 20.688510253198462, 20.737683041456684, 20.688414206838385, 20.66122716644318, 20.467230571837035, 20.354075359267377, 20.169888555916213, 20.079252322890913, 20.28410688281381, 20.262404054437095, 20.373132366371415, 20.421158825224136, 20.40155587231403, 20.4296733995326, 20.234947992962653, 20.31309538842297, 20.303379775602693, 20.278531157170974, 20.35073132394306, 20.326312522012014, 20.279456097569266, 20.28335253806462, 20.32117908234127, 20.41861359037213, 20.45039116739921, 20.42527190079916, 20.34063307858488, 20.408489859060683, 20.476721392181588, 20.545444074543852, 20.556982822904924, 20.599195107080746, 20.692608119372128, 20.690289346058766, 20.861217243299066, 20.790560043002404, 20.833563819345027, 20.80195691932861, 20.71257723980229, 20.652130097219644, 20.63376466460918, 20.622021362618227, 20.63785998314152, 20.664373200872323, 20.66514293120099, 20.726251499786283, 20.56465346259904, 20.440235648677486, 20.46481695519735, 20.504521280435046, 20.488877167921935, 20.56012281040327, 20.53701654927701, 20.39155535282629, 20.527803561344086, 20.461445503172506, 20.334804403255006, 20.225051616598044, 20.25784756231745, 20.197702646502727, 20.317466989773152, 20.32395394509532, 20.20601801427704, 20.238921891870728, 20.312897141475442, 20.48758475568213, 20.4394691504224, 20.306227027251467, 20.286989774912907, 20.218122428337267, 20.231517072667977 };
double _solarhouse2_load_dynamic_table1_1d_look_up_table1__value;
double _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse2_load_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr;
double _solarhouse2_load_dynamic_table1_1d_look_up_table1__fraction;

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
double _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 14.079115050181846, 13.784855071180985, 13.648716544765925, 13.691841805160527, 13.673274666653693, 13.685975098136312, 13.658298338521535, 13.807159243788488, 13.973963975919686, 14.014887990863564, 14.155244011016155, 14.192014927330995, 14.149775424117431, 14.0866869997217, 14.142617249406578, 14.157137052178225, 14.052547308669254, 13.95839534966031, 14.103928223420098, 14.170203814612956, 14.207396939532194, 14.22217714283585, 14.188905479934304, 14.114336385871882, 13.990900642234385, 13.871221035978193, 14.054816726049529, 14.098587478660926, 14.258271635751939, 14.110131235747955, 13.949539748174994, 14.136900185155568, 14.328956614429917, 14.388590513136993, 14.510515329167125, 14.468857226547776, 14.646294017212186, 14.66716096453954, 14.657164287106681, 14.608059398447162, 14.498238823064153, 14.56585073495225, 14.70040469798304, 14.574060919627664, 14.487754033738725, 14.524801328132053, 14.46467727459503, 14.587433300410028, 14.436173582727266, 14.574775139226933, 14.540430322378302, 14.56714005312916, 14.43477827510585, 14.331459974480287, 14.448771927437265, 14.375263338153026, 14.398238721103786, 14.437419657341984, 14.392815446490298, 14.350582149165714, 14.50957017354963, 14.520080706257785, 14.403059826118634, 14.522463038632687, 14.462892001844981, 14.495692148920494, 14.448391704740455, 14.340607909359715, 14.360735033579841, 14.378175524105842, 14.449573899330176, 14.41583524945734, 14.280234285958855, 14.27892509939338, 14.184845953001895, 14.128895218449786, 14.131206454560225, 13.933377006112867, 14.240750703532493, 14.358845058364027, 14.532375430204615, 14.540739426649324, 14.640085883403929, 14.68405583027076, 14.774255777705346, 14.785410786786086, 14.831799940224931, 14.86919164067299, 14.887409249344602, 14.864231330543475, 15.029163846088087, 14.990052592682854, 15.112759846796491, 15.109478308008713, 15.24328778705176, 15.100250397664487, 14.999115018709483, 14.97293537711933, 14.95580628755283, 14.86955662224711, 15.054759320122301, 15.006309254226744, 15.05438231552737, 15.029186720986138, 15.13106236937673, 14.965609093515448, 15.051944271406082, 15.212843653571158, 15.384926005819723, 15.342240599330148, 15.362645938611596, 15.459155631104206, 15.450039494559677, 15.327162164603894, 15.201430955099065, 15.106301080066926, 15.268432896580427, 15.208453231477167, 15.110679030752516, 15.198047359168589, 15.141220389505131, 15.141444644040586, 15.112150825883921, 15.127275169183855, 15.117045147567392, 15.049615796986435, 15.036184934874672, 15.038184135107743, 14.969893423223374, 14.933670306520193, 15.067749338326205, 15.05184602915309, 15.046391314647234, 15.189418383381096, 15.361880449747135, 15.24175378353698, 15.079051297968974, 14.950149899639447, 14.92784872386018, 14.720018814318545, 14.76653147917082, 14.77691001323634, 14.805061196874295, 14.786618373588365, 14.691261836982536, 14.748920645784304, 14.75940707751472, 14.832355288613627, 14.874608943970154, 14.766509905355177, 14.76357621017919, 14.850273468228414, 14.857223928141336, 14.839946383457699, 14.873027640688507, 14.784496096472962, 14.91048598732447, 14.882404015109662, 15.016778814143832, 15.08655275847243, 15.026229047093642, 15.039844901051849, 14.962633171454264, 14.834537023392535, 14.881844984231016, 14.719890536854873, 14.554452156407194, 14.549228540464414, 14.611539496849609, 14.444487914437955, 14.303209859485984, 14.25708518396691, 14.448439739099214, 14.54251286761316, 14.62533060038925, 14.627610392592466, 14.746609049733348, 14.62153779328686, 14.585161138141244, 14.601601321829914, 14.557677015265243, 14.512854543043499, 14.538346105649216, 14.553678926630695, 14.415058012099774, 14.265854223849706, 14.162616586760686, 14.127505084127565, 14.017100755423211, 13.96256473238911, 13.871686075748975, 13.874329819970985, 13.646620445617339, 13.618173795878024, 13.770180566206585, 13.874080425718924, 13.890864252412387, 13.939589024695964, 13.972859857097335, 13.972500332514358, 14.131985703002591, 13.955249356604176, 13.9379188640081, 14.173594929144693, 14.167019598131684, 14.162890055808749, 14.087017637916114, 14.036776254436074, 13.994386837776004, 13.934437430976374, 13.904800205086794, 13.94804232370774, 13.99237747797811, 14.135711491600835, 14.386582006123245, 14.454655035608024, 14.59891185759765, 14.578241947062127, 14.467103962421815, 14.527973858186385, 14.51106336447909, 14.276330512100456, 14.110630090905564, 14.254792435010163, 14.4142289858145, 14.323458848770116, 14.357503787509208, 14.278818273095624, 14.44607838075727, 14.472189332326453, 14.502858454682816, 14.522705038537008, 14.582652437652532, 14.494537257311338, 14.586447880411324, 14.618194352947087, 14.727823996904812, 14.62554205708872, 14.59923315518057, 14.531300126873246, 14.560543357346669, 14.565025301028314, 14.715669491593829, 14.703189990278526, 14.73069313298659, 14.717605415555697, 14.612695891515735, 14.682809366085785, 14.651366307965699, 14.714080651426704, 14.606928512763455, 14.533450524541907, 14.56348300851992, 14.592762689923784, 14.6043019656428, 14.726372202434845, 14.684530064630694, 14.61917315758925, 14.726438591428275, 14.750533156224163, 14.669211439869887, 14.710176157850738, 14.671924358854561, 14.64542426194892, 14.678631107792118, 14.624278146338186, 14.656016537150498, 14.840865358916776, 14.982636389978756, 14.848819816577329, 14.77260221403244, 14.791373513581641, 14.754399140487118, 14.801472126088653, 14.708514855340981, 14.643530398002268, 14.531614470343866, 14.660137996828224, 14.522878914437447, 14.564055466730965, 14.555716259974446, 14.57807766131736, 14.733765147657143, 14.751935180661595, 14.697823925768304, 14.817581235235245, 14.78585111680385, 14.882850944066535, 14.894855722223673, 14.950615626618864, 14.949017588440425, 15.025235582977535, 14.856426038064175, 14.84978306054989, 14.82389433834273, 14.647429178007446, 14.615862590880615, 14.52713949130293, 14.602873226118266, 14.5252652493491, 14.486467303304469, 14.472951578579188, 14.667623208941347, 14.635422676394224, 14.753431564375784, 14.792309124574981, 14.807410211471367, 14.841471408345607, 14.963010783329166, 14.998572644418271, 15.048759140090263, 15.2172054029026, 15.268098368511493, 15.075955442265053, 15.01550646304312, 15.139706092604673, 15.204551626222644, 15.012608705685835, 15.085156811489675, 15.069767234458435, 15.174544789457274, 15.233212829706336, 15.323968832100663, 15.271882855279864, 15.182671462659375, 15.253721340994165, 15.283979818825276, 15.19044402529085, 15.236205389328456, 15.306741048094942, 15.279159442631846, 15.317544748683439, 15.323663406926224, 15.256695428165019, 15.274710807672276, 15.20818497553156, 15.200982668191381, 15.266428206070962, 15.180846398109974, 15.312184184547537, 15.3079727243628, 15.161249978490849, 15.105640978730454, 15.1338471089322, 14.999519567430198, 14.81911299236899, 14.65197939345333, 14.755125269805125, 14.745920167493047, 14.748666724129114, 14.760959382819626, 14.854071904810539, 14.750238423552188, 14.723845714798, 14.639679364387815, 14.61503414639577, 14.605774814548699, 14.649079174833956, 14.601871852237757, 14.54663615086436, 14.661712893307753, 14.682666917318715, 14.735647989520784, 14.618783535717125, 14.648748096266026, 14.63905658382656, 14.668031525650498, 14.717694885012653, 14.639168022843954, 14.674961163746483, 14.812400988538586, 14.75281622724934, 14.743350382741095, 14.594745750020994, 14.788902387421055, 14.777878695960865, 14.670211129105324, 14.704623614781587, 14.591805281993869, 14.633304614007375, 14.732780328207165, 14.681001603469687, 14.747339306249064, 14.594087185137944, 14.850097709519998, 14.811205970004794, 14.865453728456636, 14.778725584563984, 14.699723150106365, 14.867865327496887, 14.81829775130391, 14.802833251706678, 14.873805737598646, 14.870940213898953, 14.791145113016864, 14.790353580387249, 14.748756069615755, 14.787559699114325, 14.812396062155564, 14.840774314601848, 14.746321737796427, 14.646878964575722, 14.740539346962672, 14.740116690849801, 14.879521822513786, 14.713293375209071, 14.588997011557353, 14.498705436799845, 14.424761091157448, 14.317679657157182, 14.325120522696226, 14.48752749527023, 14.473535201387222, 14.480398108726087, 14.385461053452811, 14.381682327433914, 14.511867838669552, 14.562568500212768, 14.579600857261596, 14.481996535223976, 14.515223197226536, 14.376112114788425, 14.313911937090547, 14.461957545777766, 14.553412461818471, 14.680810522032461, 14.672453366829547, 14.664644557038006, 14.528604319819953, 14.722650266263758, 14.67871826786514, 14.580485177321474, 14.597690197733586, 14.528788286202142, 14.500721181998928, 14.551875248608393, 14.416439005136757, 14.349731810600431, 14.29027244075064, 14.265946435658504, 14.158782678834244, 14.417868698597633, 14.421759972952007, 14.23644037944441, 14.438930644791027, 14.488480961193686, 14.40181506869366, 14.396235137573688, 14.529445481327695, 14.557706387668993, 14.363076265570864, 14.217082106350253, 14.22996757322156, 14.242895202761677, 14.256805199837242, 14.246424373932856, 14.35471896433566, 14.251312456756294, 14.334057221188196, 14.28687651060788, 14.144105989619751, 14.16206110681792, 14.087556167369833, 14.124246278320436, 14.07115473367126, 13.910160861605744, 13.93035796399208, 13.953180395283436, 13.939278837411242, 14.07342935110382, 13.958405688305726, 13.943082990065866, 13.697277109602533, 13.599899697887173, 13.59226805525696, 13.386696298340823, 13.312600334402294, 13.189971836757625, 13.08962537604544, 13.050824566622827, 12.961257868637032, 12.862111112460234, 12.871198304937721, 12.805733642276365, 12.674456843064409, 12.82223816144613, 12.792698666032589, 12.712624123048155, 12.470527852252788, 12.569154837125325, 12.442572971389547, 12.547782951093845, 12.444776597597006, 12.513066353233596, 12.674750561867516, 12.63654388474126, 12.657875527066176, 12.54364209250772, 12.674181485217902, 12.578859144019956, 12.717729129319789, 12.71520220046623, 12.662798521639981, 12.739510576690481, 12.608195205672937, 12.522226250163527, 12.542398104137686, 12.414841641046214, 12.45246498795965, 12.411724513555493, 12.5630542834313, 12.634602462917574, 12.706669420703307, 12.822191892458319, 12.836433487676194, 12.897802281196096, 12.987455673186084, 12.983710079470733, 13.186786042336971, 13.00287588226504, 12.912339467353506, 12.964573609821201, 13.077208284321857, 12.885540228429232, 12.841589376470127, 12.836242556354845, 12.786959844448404, 12.543358074923056, 12.666612312290894, 12.73111971689874, 12.764186118447334, 12.80777353315015, 12.7765374187042, 12.80452310741015, 12.877155014071974, 12.924690502431705, 12.891947697018015, 12.871455352048436, 12.98885918842475, 12.922628884822347, 13.22775045148385, 13.238835928274865, 13.260991306171707, 13.264556952125087, 13.224278847289526, 13.33488261576513, 13.354891466672393, 13.496452356899765, 13.509764821077711, 13.53794806343796, 13.527708404012255, 13.280120646387436, 13.199369942470211, 13.202871942252074, 13.148391551950615, 13.199846139472678, 13.252101916956962, 13.376638182424207, 13.310296100906884, 13.360655439602876, 13.52752237978091, 13.466448773620698, 13.335013918407054, 13.46173298779796, 13.531788577294689, 13.410672184697887, 13.435739910013588, 13.58588982074153, 13.4811637898913, 13.286774793882616, 13.486878799251961, 13.505350422922563, 13.700043885665917, 13.824274845264686, 13.783552278427651, 13.671615111471471, 13.60233657433708, 13.581185716396616, 13.723564024669402, 13.773283688877747, 13.842427673573349, 13.826411895747645, 13.772040427276929, 13.663148727029405, 13.632554880075206, 13.569235599859306, 13.511809658558292, 13.569588771733713, 13.705137466622816, 13.788216715798447, 13.801392397318649, 13.64681596992684, 13.616184528303654, 13.535481465993849, 13.387366785027409, 13.248980742027364, 13.141025922015324, 13.214192900959105, 13.168626346014381, 13.302001859909256, 13.202581379480606, 13.095648403346619, 12.901312014273795, 12.889271751536198, 12.89712551145078, 12.855525500085369, 12.829386977435306, 12.949188926300511, 12.855332840312462, 12.862644963759186, 12.844120369433913, 12.858525884639068, 12.930857092618034, 13.104046631347648, 12.894061832922391, 12.875335469110274, 12.959494418120695, 12.849866362632019, 12.960252265634567, 12.926736588611925, 12.839391245131814, 12.910557436723963, 12.783640068390882, 12.610616900222965, 12.584473844979305, 12.565432864808153, 12.81666115885037, 12.870422636687355, 12.942654477244812, 12.87174314136286, 12.934111157784304, 13.074329037421448, 13.061530987535331, 13.189458761646561, 13.230527390058642, 13.316349761651185, 13.501390318937608, 13.555817797155564, 13.546219765406489, 13.536606151203067, 13.529557991677521, 13.572527789865267, 13.58191584471539, 13.590273206762685, 13.5417375372596, 13.547879553448062, 13.728362435558735, 13.64157468160846, 13.717096716241553, 13.72190531802816, 13.822601561043964, 13.936497315420933, 13.956950553359356, 13.825656261765074, 13.940058154031501, 14.187034466722038, 14.356354198593314, 14.284162866464214, 14.38970239155256, 14.276371112026672, 14.315691338600415, 14.36313218156002, 14.591181526140176, 14.529325726673946, 14.532883675119107, 14.547875410618262, 14.465632650955369, 14.56538664137195, 14.686316236440534, 14.687401725134599, 14.531645694125435, 14.537068634379974, 14.447874794750573, 14.437672270037465, 14.63498715034863, 14.4492388765241, 14.405283248705954, 14.295909501515744, 14.24650131552216, 14.176348704837674, 14.147459706762342, 14.440384946168995, 14.637374668169926, 14.655785566823782, 14.812018869429243, 14.939074735895574, 14.951901589882505, 14.962041403513277, 14.814494846907326, 14.778168243160534, 14.775167689200869, 14.790025389781134, 14.722812697764194, 14.793269134604687, 14.729676858467435, 14.754235197362151, 14.745368067538134, 14.663528934423368, 14.586540221791113, 14.493830963796482, 14.59828695500406, 14.699825137050832, 14.495578293673132, 14.607398656577494, 14.718046730366517, 14.823360810401242, 14.737512648041909, 14.842696189801678, 14.733207354161848, 14.640886265467515, 14.707277908703931, 14.624822174236126, 14.51768547806417, 14.547190711782491, 14.732904620249373, 14.77368462252488, 14.780825715487394, 14.971424657432495, 14.96755024921989, 14.960259694259827, 14.972571187669717, 14.931637719769512, 15.109334246166833, 15.01578438726966, 15.1861929335638, 15.225849358392868, 15.2247693992519, 15.348871356773472, 15.131031531039284, 15.182762656354992, 15.23993913774076, 15.217907181821277, 15.122472316975895, 15.076216008062985, 15.157067074627127, 15.224762232680009, 15.288140215634654, 15.375697610266563, 15.459105242663266, 15.681406812531714, 15.681482024854901, 15.605203063603716, 15.492546331677515, 15.586756654823644, 15.627893514021613, 15.427288585620616, 15.583413512394529, 15.674055941952501, 15.755200048643633, 15.690273639224579, 15.55853385019964, 15.617568042550433, 15.488464831524825, 15.461069267821408, 15.470873709297507, 15.575069749017375, 15.494107565523322, 15.538676526891894, 15.474374002339301, 15.416479108730053, 15.479504327774475, 15.500957477551685, 15.574176822308958, 15.409271038230512, 15.403029535388729, 15.386782567641268, 15.429286745349646, 15.520598232890386, 15.511850273615373, 15.6220390954174, 15.630035459746942, 15.443153914311715, 15.472423162083347, 15.580454505108412, 15.657373423694294, 15.62802750181586, 15.635605036488485, 15.910703262470903, 15.961841189382913, 15.874500142380269, 15.954690993261735, 16.037141417748696, 15.865995415891078, 15.789579098871432, 15.665336088317185, 15.743047832767806, 15.668021618602635, 15.766751031628173, 15.743665626886617, 15.685014743515401, 15.642796361973527, 15.628048865852973, 15.591233419903588, 15.440733390721686, 15.57659379516888, 15.64344756149558, 15.668006947501082, 15.434238563860927, 15.398968120486558, 15.447678136844964, 15.337164138936233, 15.40996810009442, 15.333723507745626, 15.172758328252465, 15.115694475532914, 15.186135116190153, 15.217857185241645, 14.97303596357624, 15.048922908219742, 15.010023328445493, 15.050925770148867, 15.106585222756749, 15.207648883497619, 15.135117630106144, 15.096498533482285, 15.123750674394712, 14.968443961146654, 14.80051093493058, 14.760410540818839, 14.74720595313335, 14.608386203258204, 14.680583140045304, 14.707411214058544, 14.898460039656925, 14.76325153157727, 14.830573845394726, 14.747187801351295, 14.691092025769624, 14.606467828743934, 14.483151870294176, 14.492969258363914, 14.394588741656115, 14.30623188235196, 14.298909889155249, 14.332884656093789, 14.226690727186408, 14.162809420343, 14.081173661635358, 14.008876822446394, 13.99256527093485, 13.992531509721177, 13.874229454030292, 13.927404948026492, 13.928351443596776, 13.930096847534784, 14.060814030149233, 14.135205568519742, 13.961874175551939, 14.105643063330064, 14.090516623732572, 14.06785786047015, 14.317802221969295, 14.455735338186456, 14.446715927429825, 14.32712531413901, 14.352432763067375, 14.363220149287908, 14.238145781387011, 14.309836857204552, 14.225688123602481, 14.422238871147393, 14.411822879426873, 14.51012383861469, 14.575247224357458, 14.694604854342305, 14.562733304741485, 14.490911823419967, 14.62761596861615, 14.44757794881595, 14.609901386794307, 14.472706754263307, 14.374768683292675, 14.575543202323527, 14.479665230414287, 14.454194940189547, 14.45198207158716, 14.531987177914615, 14.68852227819895, 14.499577228431427, 14.46423689532295, 14.484949061397804, 14.35105862904759, 14.475917048928707, 14.401686728914115, 14.259247741427894, 14.342578035130346, 14.426376134046187, 14.310521672922444, 14.273636170178056, 14.490451379527107, 14.584266727776628, 14.603181416764992, 14.709013444830415, 14.658253556668491, 14.80627030978048, 14.764762639231654, 14.555546210140932, 14.598182880084071, 14.726778940586755, 14.657963318442894, 14.601547000786619, 14.590097983128855, 14.711971378167794, 14.847693114206548, 14.724315488756714, 14.923743860151427, 14.969177255601195, 14.939602240314338, 14.923054189358597, 15.010975997793816, 14.986748731294739, 14.972158250283668, 15.042465448716182, 14.998693566973287, 15.128293587527866, 15.063249586801255, 14.939313574859055, 15.030843626456225, 15.027359050457227, 15.023173339593466, 15.224323462304502, 15.243584470421624, 15.271944526430387, 15.287709504408538, 15.33070498514688, 15.195445215426991, 15.148166804672744, 15.251840230881456, 15.242323920453241, 15.343370058080525, 15.317127794901747, 15.295017644678893, 15.356735515620013, 15.352706731643027, 15.502410690019653, 15.475201715952947, 15.500924370756467, 15.533049413311133, 15.608115872614269, 15.726145942690422, 15.691325060217636, 15.791916495966287, 15.96166406497014, 15.87430547211346, 15.916596816108475, 16.039842251333088, 16.150622585975867, 16.241393967991815, 16.18477968441808, 16.253903615522702, 16.42529213353651, 16.450469126960712, 16.533777822190412, 16.40411331148067, 16.36746507543957, 16.519544966963945, 16.483504293254477, 16.45038493942133, 16.562782171487815, 16.656665199062257, 16.618835783126098, 16.57506228989259, 16.59165004466727, 16.36121135154864, 16.257444704671958, 16.336946600953635, 16.249950516168845, 16.49593435137227, 16.586260464624058, 16.60685742538876, 16.502887471437163, 16.428306798431294, 16.372288464304322, 16.25751830905228, 16.282956742954777, 16.29467438591624, 16.343162010754526, 16.23219763698069, 16.147544572661275, 16.146435045676146, 16.206669550528506, 16.131463202664012, 15.993067095199144, 15.955548732647635, 15.841545006497855, 15.742881934214418, 15.657060277111551, 15.448206595967436, 15.466070871187346, 15.47490118829541, 15.411245046649544, 15.436919731875241, 15.497842733659835, 15.520363743429046, 15.491011813934124, 15.5775767581133, 15.73390680733145, 15.7713606561456, 15.801959881753447, 15.82963090015851, 15.765259219422214, 15.779273374245355, 15.833581524431686, 15.904963848933166, 16.033965087170557, 15.985107645552311, 16.103123649387474, 16.129631413204507, 16.117233032995607, 16.228977228624295, 16.156659069958266, 16.121585773345956, 16.234120520183616, 16.22331073533164, 16.266588995180573, 16.392358076088815, 16.357395434193705, 16.432214827259894, 16.21907697330846, 16.312122897852912, 16.408336585078136, 16.304220774189826, 16.220517373817554, 16.28552212050209, 16.252400381483685, 16.302220601155234, 16.233210643184663, 16.257071433810346, 16.218396752079794, 16.30475488805748, 16.124065085862565, 16.144827834132546, 16.12637248288397, 16.03074746249726, 16.15827556748223, 16.136371141110676, 16.143993368045727, 15.915390616027505, 15.92631810190748, 15.932863399183585, 16.02572118484135, 16.15659800329739, 16.186322276742953, 16.380750407973782, 16.5293939905494, 16.300876799238257, 16.38418412906564, 16.415373874016105, 16.428936003287617, 16.417193476434676, 16.370299457012553, 16.210562218681673, 16.29011786903391, 16.425585891436103, 16.335388705502158, 16.36771270272554, 16.323678381662663, 16.230087420924722, 16.242424170536115, 16.448714891632218, 16.583819621941064, 16.643300475704972, 16.78059200420637, 16.797666636926873, 16.858538923366023, 16.830778919969053, 16.915813988055717, 16.823241686014672, 16.96049867283864, 16.997775816627694, 17.043442027650087, 17.156097184256712, 17.221990568410853, 16.94492577977249, 16.785264376395613, 16.828482953802133, 16.770469240256606, 16.790707099702384, 16.60904123043176, 16.601589988405753, 16.677998555354947, 16.507265579938895, 16.432451152056803, 16.46964880439385, 16.4685825387567, 16.581975150082208, 16.516434828510892, 16.58357687077239, 16.70516008537517, 16.54912492724371, 16.666550804778897, 16.72804927061568, 16.82211028140117, 16.819488255176445, 16.727772494310752, 16.818139586962687, 16.828063533240403, 16.717335793256645, 16.70138021231361, 16.681169940743118, 16.594632226722176, 16.512301679793286, 16.320817937822394, 16.337698578835553, 16.305049729434412, 16.43602875665204, 16.45263705780046, 16.431601868377413, 16.366940372380636, 16.485959961238873, 16.501177814221375, 16.551958206281054, 16.37800848372914, 16.44842663635352, 16.416742908742076, 16.57713394705216, 16.690394946050795, 16.855198131121927, 17.03789848238286, 17.08508324584534, 16.93957071070466, 16.884077421347627, 16.806819596931177, 16.968695518184916, 17.015883394614033, 17.171100743225832, 17.243180299618043, 17.275693370499415, 17.39548961875853, 17.326192042679196, 17.329404563307527, 17.275331871986324, 17.227380285763385, 17.292061979219696, 17.373445174428788, 17.412176468192314, 17.49018393700811, 17.27112251270977, 17.447644234077124, 17.419901312966022, 17.402837380111812, 17.50334454365709, 17.573889790683193, 17.498078756581403, 17.217876995541562, 17.122924412069644, 17.130395272494656, 17.117597002333774, 17.13704353218335, 17.108673380593125, 17.213511434074203, 17.155103294288992, 17.126851187930047, 17.12848157375195, 17.199322292872385, 17.214257451459922, 17.284749327380258, 17.395467255398888, 17.374343790954885, 17.460582747264322, 17.539044883287644, 17.744561884002152, 17.722128120287724, 17.644799205264565, 17.610337886064514, 17.726282022648935, 17.724452448155102, 17.807606268220248, 17.72010366088617, 17.502641502185913, 17.502870340378678, 17.583645041212367, 17.58049107393112, 17.618623786864188, 17.563585413218902, 17.509109035969523, 17.52483227628439, 17.420766738551293, 17.320281847542304, 17.477761890690864, 17.54780495165997, 17.70215535145398, 17.76412396248272, 17.808647066608728, 17.755745903109545, 17.92025311060127, 18.029396148083283, 18.093113430280443, 18.105112399199765, 17.968003132926913, 17.94910209330858, 17.965559273188664, 17.93245175715646, 18.1021026378542, 18.1928489952474, 18.192112585121265, 18.167374042805868, 18.09690334075953, 17.978350060354813, 17.8270969234715, 17.870190692731136, 17.950521803652933, 17.96697485309173, 18.12386553518124, 18.05909382842869, 17.890618207310983, 17.968360309573157, 17.87922021629626, 17.885440382006067, 17.82946978150586, 17.85852141501961 };
double _solarhouse3_load_dynamic_table1_1d_look_up_table1__value;
double _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse3_load_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr;
double _solarhouse3_load_dynamic_table1_1d_look_up_table1__fraction;

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
double _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 18.098524609473, 18.225472524485102, 18.20023277821578, 18.08984618413788, 18.06796892038511, 18.092917542397657, 18.023217072444247, 17.968280131699082, 17.877199653063627, 17.876018417884854, 17.861480613459005, 17.845939166694066, 17.748932774559773, 17.88960896204084, 17.754750107827874, 17.87856113985874, 17.82614983790246, 17.98855289269257, 18.07665891581672, 18.252974009406472, 18.19733009422252, 18.065908466167468, 18.13548570312536, 18.090450371921754, 18.066862165388613, 17.98573065790898, 17.974819990429424, 17.98635699494412, 17.93710979212393, 17.925273016103922, 18.129081580898195, 18.121542467887725, 18.070060759408854, 18.146924246367004, 18.17723124314848, 18.240658868704767, 18.19868793823575, 18.187981084051078, 18.21451514091434, 18.4892389383182, 18.46383264832684, 18.37944195397797, 18.390696787989327, 18.283301082860913, 18.301577829828254, 18.21264980190852, 18.029922332274953, 18.05269924395406, 18.07567283841264, 18.081143352311987, 18.066344600378372, 18.132433784051727, 18.03314329482059, 18.09185559550629, 18.31641320706789, 18.319995488260183, 18.392851642862485, 18.30548684724372, 18.38105717953825, 18.255550531738074, 18.20190812699621, 18.24336148250864, 18.198575964604075, 18.118837771897873, 18.092553261724653, 18.083679295863604, 18.168573368388287, 18.29461478939604, 18.237163034370557, 18.290459634832143, 18.104164264822113, 18.014152012316956, 18.038631301067856, 17.974675295095192, 18.109553508907823, 18.119904679580426, 18.157012862694312, 18.16317088069624, 18.17353755793823, 18.20874149688098, 18.11637924799886, 18.11641681158407, 18.147580954203324, 18.345648276016615, 18.43058029811847, 18.24317180921618, 18.321371352791047, 18.282523915345045, 18.3630451130396, 18.46455897989672, 18.462870168783905, 18.440938276188934, 18.68790370882813, 18.662645069939114, 18.62626505439029, 18.66750037615386, 18.552210214735762, 18.581017321143836, 18.6089638639942, 18.653628065861074, 18.54148540310553, 18.61997800932958, 18.697322751086084, 18.73806771121722, 18.987053185170065, 19.002510230793078, 18.916457726351, 18.953303324456247, 19.00662253048434, 18.988755750294843, 19.060466621169795, 19.01498545737799, 19.002594374084467, 18.991297169161196, 18.964858079616107, 18.97037328588432, 18.720388229212798, 18.791347277491816, 18.75777205581924, 18.816381970340732, 18.719651709101207, 18.588101164684137, 18.564025949828018, 18.41633417617432, 18.299148782221888, 18.306078903702897, 18.231919283552397, 18.04616243743927, 18.126461578986518, 17.993678513147913, 17.939853397037517, 18.055861854402963, 18.13067436635665, 18.180720147045328, 18.146229052138867, 18.12631511368641, 18.19235916757303, 18.161987821021672, 18.09181280801679, 17.971401643230802, 18.05382123334348, 18.10080577557705, 18.135288771274176, 18.20549267686699, 17.990381971200918, 17.963422568956613, 17.991173658619108, 17.871232236648396, 17.867328054753862, 17.938492778689085, 17.982058510888752, 17.792084369480747, 17.736806780436236, 17.704688863778415, 17.601650171739834, 17.328793238075455, 17.402777233895563, 17.310684753215895, 17.407484514470745, 17.343670855331546, 17.313071346174315, 17.26148250565298, 17.269427122731138, 17.33743140642536, 17.575956473456188, 17.545754482318028, 17.636313746130647, 17.775064284289503, 17.73143636359623, 17.790515678243352, 17.77206021682744, 17.87998363055381, 17.984104913015646, 17.910283352744628, 17.899265203842766, 17.932592743317972, 17.782830599571106, 17.813370181350074, 17.97539796627944, 17.93546960082541, 17.89824008562709, 17.633798563220076, 17.607001683332353, 17.66851502771336, 17.679241341216862, 17.572445389254554, 17.480992177580724, 17.505325574768218, 17.580846411429846, 17.55606893956876, 17.499927225732105, 17.717982000283364, 17.718453827918704, 17.800098786738396, 17.709245149682275, 17.745435800623625, 17.76301343970552, 17.810357067418927, 17.72566957710497, 17.81345659938028, 17.91580583602383, 17.818740171691328, 17.75702271281832, 17.655787553740947, 17.561800741286863, 17.62108718385138, 17.774095659184827, 17.826563924279473, 17.779710951099478, 17.63792413229564, 17.742228251415998, 17.586266777298622, 17.530990379935588, 17.49063447915488, 17.41531642017635, 17.375442069522645, 17.472895380685014, 17.415839639621492, 17.185818972835662, 17.144334160475914, 17.254966047553193, 17.12928563015266, 17.045705928036167, 16.966286724173052, 17.12324429063271, 17.142701953169976, 17.021665091595946, 17.034951952925336, 16.959093254965858, 16.970160307867133, 17.017678842226914, 17.012809345525994, 16.99780445095514, 17.05761482230001, 17.094632944552973, 17.069652622157804, 16.970613410661617, 16.805852873269046, 16.64628045359498, 16.741061571475946, 16.625002622571465, 16.565963380276433, 16.55547997667032, 16.48802354623529, 16.473196862434342, 16.557232044023667, 16.61125672707236, 16.541706477856064, 16.63108218108532, 16.57913354699759, 16.620013795278606, 16.772619713201703, 16.893493758364233, 16.88485776489128, 16.730517187902592, 16.894445287224475, 16.87565403210572, 16.967472935136765, 17.004450674554548, 16.909187438868617, 16.764768758715064, 16.781289163005624, 16.736378488737152, 16.7794657384354, 16.738961244676272, 16.901558069592095, 16.89786169333144, 16.836146665964574, 16.845548231943862, 16.741641664777433, 16.796887817063052, 16.681876502219406, 16.666090676665018, 16.597004531874692, 16.712065076693786, 16.702715480304835, 16.731133874064017, 16.545903340466722, 16.672287040679, 16.653756249508948, 16.595453879679315, 16.67768091016993, 16.779510493835026, 16.661720180304386, 16.777623378991187, 16.738023130138664, 16.750301597814566, 16.796457418866805, 16.717320500573393, 16.72770691975937, 16.896273560529668, 16.819592732136368, 16.876071099641052, 16.86875863246748, 16.851335456309716, 16.934366010239742, 16.87395819649329, 16.972276546446295, 16.84976268603379, 16.798695675704135, 16.826461642957053, 16.89406800936375, 16.81921354362052, 16.792730440345224, 16.746533835849434, 16.793495089090452, 16.790157160420694, 16.764096082600506, 16.781654700340855, 16.92906854498019, 16.97592075547057, 16.944042381706353, 17.04341571564581, 16.855975281438454, 16.98526103936662, 16.97564574190345, 16.940953931516464, 16.94247713269216, 17.028928023428918, 16.85061953880674, 16.653938345310596, 16.880216310536838, 16.87591712639011, 16.940348240491236, 16.9593842243405, 16.690906977545303, 16.853359853314842, 16.900535833415038, 17.053544648796287, 16.88318813362858, 16.880004368660188, 16.863946385064985, 16.828247288696062, 16.751162922753824, 16.880183499482587, 16.9666840784794, 17.119360553275904, 17.244516406001296, 17.30407113798579, 17.29493047138269, 17.236842159743233, 17.149123098022233, 17.213855940996197, 17.03746991242275, 17.072777238014158, 17.123289023479966, 17.192685252297675, 17.215933693007393, 17.251501406643325, 17.234387087069283, 17.241207503643178, 17.111178937180632, 17.069887820360197, 16.973665415160305, 16.92409428034546, 16.915401189930428, 16.686457768516277, 16.789646833616676, 16.661543330208474, 16.687328560715947, 16.73264652771804, 16.92148153941648, 16.840477486591798, 16.92838620477359, 16.869581411346726, 16.86210451144958, 16.856073898390903, 16.7163647257309, 16.788669549411445, 16.872771237661038, 16.730118932606313, 16.661128184517967, 16.704390055435343, 16.727509450776612, 16.553042570382022, 16.33951418510723, 16.376303352904, 16.514942579990887, 16.60157726651882, 16.572528404777422, 16.719716041283252, 16.73274998107776, 16.691829263802234, 16.421057125182784, 16.33537317304416, 16.360810616379588, 16.479101156102637, 16.484873333554823, 16.50008924218196, 16.453025520226316, 16.445656066050297, 16.419543887707256, 16.470107289564712, 16.523995342267792, 16.575592843566447, 16.609647046060836, 16.799905161816888, 16.822605726969698, 16.690756604899114, 16.604226427282992, 16.40971556706101, 16.48437861427991, 16.4739198953834, 16.44908018923682, 16.64435982703683, 16.750049414189384, 16.798555983146755, 16.731019954450865, 16.73157451991067, 16.75809654397568, 16.6036342995796, 16.57045274564748, 16.828139208015212, 16.934249979614087, 16.97726009413719, 16.926700923710577, 16.856915607983993, 16.862049504521426, 16.67234609730024, 16.804199753723562, 16.794928472141486, 16.772052794805774, 16.867733957732177, 17.006216201821786, 17.02250260511522, 16.780368450623612, 17.067664844179347, 17.03208725100064, 17.066916937371495, 16.900649103116013, 16.92419376173263, 16.901357349155813, 16.873694118247226, 16.86784668202811, 16.985079123226722, 17.066921696521085, 17.184366239821376, 17.11908297345198, 16.973141827904822, 16.798038372097963, 16.727212218807143, 16.693397459414285, 16.637115445196446, 16.750810812045277, 16.758289761635567, 16.70124389037757, 16.85777379001782, 16.988443930633686, 16.993043491393994, 17.074130238935126, 16.97626423320061, 16.985502402411242, 17.07544687127993, 17.194078062691176, 17.149745057887618, 17.284429834251142, 17.24741532397615, 17.203567104842165, 17.21303623669059, 17.20975274382612, 17.317656134710464, 17.342195769653088, 17.319200687479366, 17.432088337261494, 17.313888262355224, 17.369324755126485, 17.533935078479598, 17.622971446758932, 17.641374387869572, 17.696618743957924, 17.769966532269596, 17.862745131950025, 17.792838548240933, 17.786952842170766, 17.783969704019924, 17.706955689800925, 17.612927027296067, 17.652753999969118, 17.828993403316588, 17.873432277020573, 17.885557950044152, 17.920869450677387, 18.13668690908637, 18.152187819166016, 18.210644778895546, 18.22691868668948, 18.241551397253694, 18.311107466750133, 18.49822640860116, 18.4654918874098, 18.69026720836066, 18.84022842121097, 18.87320005096845, 18.826255782941708, 18.869152430853593, 18.83781793919094, 18.945373618312818, 18.92371697471197, 18.83319972195717, 18.68638016743088, 18.827604242788784, 18.72907259364473, 18.753392949215378, 18.615769278410013, 18.76933014685521, 18.619004247635377, 18.490151941002367, 18.58047350771866, 18.54834188488096, 18.567050250502085, 18.56484787019668, 18.50382278737158, 18.494131487860546, 18.410539168492008, 18.36630216698851, 18.391540611546898, 18.26862810383628, 18.35916434398541, 18.438284012529788, 18.27352270010116, 18.22258800879621, 18.307181829795255, 18.234962172539056, 18.199974883575425, 18.114418200984836, 18.067490045565737, 18.027325361278546, 17.857976826906878, 17.967668291451442, 17.858312324953076, 17.645140129727427, 17.561100356310874, 17.642375471156228, 17.742969405061356, 17.685818735061215, 17.6706181040655, 17.646918015182802, 17.66091059167615, 17.575114892368273, 17.44826054441883, 17.517497434666442, 17.467716166568135, 17.5397990864519, 17.532800558100153, 17.619823190801107, 17.666617109996878, 17.79011239339064, 17.75201199904189, 17.80740052581389, 17.825241411399098, 17.835279097367533, 17.930558565255307, 17.93303853171771, 17.903111007114664, 17.814834197678522, 17.82525850044193, 17.83262820161763, 17.920234365978736, 17.946468841705425, 17.88953467702568, 17.87169210323152, 17.877672515824354, 17.96185130199771, 17.91768273478686, 17.984204530064968, 18.056480377101128, 17.825815248145446, 17.81888739402359, 17.87170949370778, 18.045048900079774, 18.13770081181078, 18.26369589774185, 18.17702600545707, 18.11901030137536, 18.179354881289026, 18.410236722915315, 18.258278630730704, 18.432699910678913, 18.52991812284137, 18.509368150211877, 18.574625722326925, 18.647134328320462, 18.55126790428605, 18.58586690199032, 18.50002512930901, 18.45544324847684, 18.414478804779925, 18.354326024026626, 18.470418932344643, 18.48033127433322, 18.45977750386241, 18.48591143201972, 18.65795640315128, 18.684028614621038, 18.805800202569586, 18.61693460390039, 18.549084732281308, 18.651753577953603, 18.408184988278087, 18.357869717274326, 18.40179624990889, 18.532552083889907, 18.682251969920504, 18.684334605319297, 18.81938057569329, 18.65786758800529, 18.707997763191077, 18.627367413212735, 18.597533940913593, 18.47287322280248, 18.46362244303837, 18.375344326819093, 18.40634825911982, 18.583478549919327, 18.65318283691052, 18.55407268484769, 18.75921540279448, 18.635691507661935, 18.71738942060034, 18.643530474306157, 18.67681574646348, 18.649055623291787, 18.650768293810263, 18.788414176048718, 18.66874491522316, 18.47358360297072, 18.592518424743083, 18.51821273782243, 18.475305596955877, 18.525630565433087, 18.34691668388297, 18.182813004927546, 18.256242464302247, 18.016266824744566, 17.905011859058114, 17.730627153694176, 17.7802656941173, 17.69078423926911, 17.64848363409914, 17.847813657043407, 17.863649478630247, 17.947665651313216, 17.869285281127997, 17.850849575293665, 17.951950435055114, 17.97847807838107, 18.00349433277624, 17.99878473560772, 17.899165264211387, 17.75079262610774, 17.814367921203086, 17.827043860189594, 17.829782324466237, 17.784447090549182, 17.633671558625515, 17.78421744664453, 17.775477236922473, 17.853372212724683, 17.786363088986835, 17.649414079290885, 17.65267179781348, 17.713341748034587, 17.83304602892947, 17.680180074094203, 17.80338055223297, 17.85148430072058, 17.889378854934193, 17.867588623657955, 17.938173963090264, 18.00558127966712, 17.930958722550713, 17.875061270192553, 17.762359045819398, 17.599234849870232, 17.584279968726047, 17.67798319579369, 17.704434196347087, 17.828788848484393, 17.726069553516695, 17.569995224207748, 17.53187573573383, 17.42985258783018, 17.349275705047052, 17.528540961740678, 17.418951681953004, 17.38213212099346, 17.517794336154548, 17.68366020961688, 17.762931872330416, 17.772654807507372, 17.724819762299678, 17.75596009904696, 17.83619714340549, 17.704261320473798, 17.640530033791308, 17.596340196805325, 17.611301955590207, 17.7226549483366, 17.77620269921671, 17.84502128440305, 17.79800833968148, 17.784552126990608, 17.705016000774428, 17.717679050180372, 17.76418905517718, 17.71852591739459, 17.693922288443478, 17.694197601664392, 17.743867352681765, 17.607179843166627, 17.666580063301215, 17.722473256013018, 17.694213207790938, 17.662847621986, 17.689800094076773, 17.726920036405325, 17.748418637274696, 17.695587968488272, 17.821422666474163, 17.963602340338767, 18.036894736491014, 18.036674579071892, 18.08389912957737, 18.02620808049358, 18.036951472401558, 18.117282751590515, 18.04627049505384, 17.983549773244363, 17.868791167630746, 17.89784369663037, 17.946359967030837, 18.008310966296122, 18.063054105549483, 18.22633929543956, 18.150759404791984, 18.15870019779028, 18.077895299204762, 17.96724179888369, 17.863951680752095, 17.924463956403194, 17.813682311062, 17.893862217337343, 17.9063832369096, 17.989298367034834, 18.012473141151304, 18.027582745072085, 17.980762058014793, 17.78940776634893, 18.01530783492122, 17.9842775019417, 17.969228247154547, 18.008984692721643, 18.099565008957494, 18.085709575217496, 18.056810225748556, 18.069703229081316, 17.982555921360763, 17.836767752246057, 17.896429540804046, 17.737679740499548, 17.51488640484294, 17.546735097843687, 17.540564188464312, 17.599965857820465, 17.626914429122802, 17.52508332745935, 17.509952428306722, 17.417382637240223, 17.33778993905157, 17.400115092277836, 17.210025164818347, 17.262773301200262, 17.248004771803455, 17.314276789649252, 17.28215281490957, 17.130646977930883, 17.133673236256186, 17.231803364965767, 17.253903616567687, 17.336489351899896, 17.35688170104341, 17.370091985695353, 17.21266344680346, 17.024485607176036, 16.998586656768445, 17.021707753227368, 16.861329458377078, 16.810365729301814, 17.031185831601118, 17.031982447510487, 16.81097670439998, 16.877270904887627, 16.74302019711905, 16.716909840261685, 16.739087603912306, 16.791454861244592, 16.84571498744838, 16.95125552007446, 17.014319079468983, 17.153519599262214, 17.285494672871582, 17.127900445970322, 16.808251760150462, 17.088351806415172, 17.21870460027495, 17.29498294532821, 17.39675757506039, 17.388314813177537, 17.398520998289936, 17.337086506784793, 17.468869667421288, 17.597034384208055, 17.653099505743267, 17.72580042558531, 17.673182961135396, 17.687173220475124, 17.633871841401813, 17.519079757009205, 17.670104103289216, 17.568870230630196, 17.581666190393655, 17.77559679779154, 17.796571735880445, 17.77628589212382, 17.7546999978382, 17.74963679765005, 17.669634284397976, 17.53000417863791, 17.498418026090995, 17.480138098680236, 17.398520732388306, 17.419774284675686, 17.408721577403117, 17.427178509731238, 17.39885474892154, 17.41143740003821, 17.485100101850012, 17.463778443154663, 17.407203282834068, 17.421783441387902, 17.493057069833082, 17.344646464143764, 17.347550093437214, 17.536573833152474, 17.459757952190678, 17.517603425906927, 17.465048115429912, 17.373537176304026, 17.416410122353582, 17.541117447251235, 17.564993050870257, 17.51654852621195, 17.612267579466636, 17.725226561159733, 17.598296760796266, 17.578229337748088, 17.570989196463533, 17.632353475770042, 17.528314625353726, 17.508083559217653, 17.436907102390553, 17.388259520460426, 17.360314705410122, 17.52918710784897, 17.48188742332731, 17.37994749692946, 17.39109897054189, 17.428954857342074, 17.45439106128698, 17.402058417956052, 17.32451687187294, 17.331498312236064, 17.54604752653875, 17.575181842631753, 17.424241085482105, 17.406726512520784, 17.452939138462792, 17.421677808299517, 17.376951587804214, 17.402996338984803, 17.450626015159184, 17.394284427241686, 17.504599727786218, 17.546216315596823, 17.597767902457978, 17.511272161293007, 17.569417501000828, 17.643352518103107, 17.656699572783147, 17.725533146256254, 17.76799650639587, 17.80049286531863, 17.911859233720055, 17.817094426203578, 17.605479395652832, 17.729549262699514, 17.69024623376097, 17.79518817420191, 17.870074381145148, 17.842222099767717, 17.820493542103268, 17.814821406595208, 17.79126217103283, 17.697765009908462, 17.712160744702906, 17.578039648209156, 17.631459063052606, 17.577075569140938, 17.59148683844726, 17.7150939454155, 17.699453597862362, 17.699632718328267, 17.80395749819709, 17.751119238635173, 17.69707706058859, 17.6571164185112, 17.698957486502806, 17.66105902987328, 17.778296398566173, 17.742863717487406, 17.75732176742993, 17.817894749569852, 17.765653031885122, 17.809109155267738, 17.60104331538661, 17.731835208603815, 17.692250469774233, 17.38519779172127, 17.347898642090488, 17.279684926031305, 17.31104533983401, 17.316798518217738, 17.27507968087937, 17.183363300221917, 17.136123297189638, 17.104073178891696, 17.11368870333975, 17.001649821204733, 17.14442644782646, 17.045868963892314, 17.067682911971673, 17.12146104336968, 17.203802864283073, 17.11339532686004, 16.99852213780409, 16.91251122948756, 16.86167420932096, 16.862861142025814, 16.78714993303261, 16.791773305372082, 16.778309280427, 16.65203915119124, 16.799708460670303, 16.799567586490785, 16.73389663516129, 16.640411737927945, 16.492355782909407, 16.530207116569525, 16.353767641681394, 16.374967990496952, 16.298497433568233, 16.30717668772735, 16.16180678905301, 16.117072954610148, 16.298703312276196, 16.318879931081266, 16.21583040874392, 16.097762284449693, 16.143642149648183, 16.1972851938324, 16.296918597102767, 16.33278503755255, 16.300982294537068, 16.365214928451927, 16.305244006456267, 16.356999720177324, 16.339538088939687, 16.367779455705787, 16.20552273066769, 16.317200175368427, 16.500087297866465, 16.495083123693515, 16.596734244000526, 16.443098688758095, 16.438704997599874, 16.427594263382012, 16.21957943416733, 16.285837290480444, 16.4235176700899, 16.568805838148204, 16.631020968494735, 16.624670070384276, 16.688179920141074, 16.532290782115922, 16.515329403944527, 16.59472675488551, 16.432152349593032, 16.454193179011828, 16.520144560854455, 16.224841251723532, 16.147586830119337, 16.139295200710873, 16.217021267269267, 16.016813117015918, 15.992555675933573, 15.936357491338065, 16.039314274045214, 16.13658164900722, 16.1841130072552, 16.156117828428247, 15.96179279899475, 16.25303335763923, 16.13010943413832, 16.118798627851373, 16.08782909560243, 16.034153276624032, 16.192055211872592, 16.348274012477383, 16.501486076656562, 16.632436738258185, 16.784450292275437, 16.947579085106007, 16.97453659474496, 17.02322612494443, 17.0272473484384, 16.895390033234467, 16.920286905445188, 16.839279529168692, 16.73889729406957, 16.826172420221962, 16.97160391846872, 16.951024697172972, 17.248917180482348, 17.224487497465788, 17.313314191548415, 17.368498817834517, 17.295687442234584, 17.106227360671152, 17.056646124366473, 17.160311353992196, 17.271306654647287, 17.37557449181972, 17.298263352191253, 17.435209476430373, 17.345975944755708, 17.419782100543593, 17.369515775700854, 17.363755026945622, 17.422610411199493, 17.336577814546366, 17.222115126834193, 17.337236181061325, 17.21818133180419, 17.173072186841008, 17.278154428797215, 17.388981880218118, 17.467166788685265, 17.464089488662438, 17.484786271294038, 17.49807398044966, 17.367375369974848, 17.481827827287805, 17.45960855119948, 17.559426572511367, 17.644838971166266, 17.33028669688761, 17.268956683843964, 17.31317206503859, 17.375692892386187, 17.333832222431646, 17.526590583360722, 17.404458615749668, 17.467719183100602, 17.42400829304541, 17.551523634139446, 17.645053690413985, 17.62846585051614, 17.659360361617562, 17.741305482779442, 17.566567991115036, 17.626261129779643, 17.664468917110092, 17.740902899302288, 17.70134323411085, 17.627236084018246, 17.55877415409604, 17.53386530078033, 17.632484819813488, 17.575073676952993, 17.683017080245108, 17.711365645613764, 17.780928822952067, 17.68849284100605, 17.543004664457442, 17.64799896339005, 17.714022835065734, 17.791446838888863, 17.811464636312067, 18.0053135208686, 18.063948739639358, 18.205473829858228, 18.1834874526988, 18.33447546008707, 18.335532175806147, 18.366459647070577, 18.39428913117544, 18.633179794219327, 18.6802194689327, 18.739924623700148, 18.74699533729296, 18.682916883286108, 18.712205160203396, 18.819069980317053, 18.78948159513664, 18.7739077523306, 18.84632915387651, 18.80770281098133, 18.864138700906675, 18.833881439275785, 18.91766859186276, 18.88679902645665, 18.940258585792048, 18.970207071801624, 19.043821469309023, 18.985938741505773, 19.14769498071029, 19.216170665897653, 19.166494049089373, 19.342122960000342, 19.452897481888613, 19.478808730748963, 19.430531919668752, 19.556106369109038, 19.483879912025767, 19.578704055588556, 19.525182085011973, 19.696584536856612, 19.67603648404669, 19.69099836258479, 19.606762994465786, 19.622092748943764, 19.61966965867226, 19.495027663700768, 19.46983243233205, 19.40996373529968, 19.488960059797076, 19.59465547781762, 19.595045687829387, 19.64673867114645, 19.711756740701997, 19.6072224788637, 19.541410154220355, 19.705745987167038, 19.73464184231247, 19.55535730380421, 19.42681542006301, 19.569328130725037, 19.41134326190472, 19.396527244127046, 19.41521632979361, 19.13975709982644, 19.166457857253615, 19.19783600921504, 19.076142424711467, 18.995463743055367, 19.079335049897423, 18.911565177219387, 18.99966710563692, 19.000640206110802, 19.008340028320614, 18.76763570371788, 18.723311414190306, 18.903720700205863, 18.94588394380849, 18.711078245913086, 18.701920180610898, 18.691848786802534, 18.63823321858123, 18.745209973071013, 18.770093719148992, 18.759466030179123, 18.7588803749228, 18.718039453980943, 18.68379526265135, 18.53807644186284, 18.53772913451219, 18.668701751199386, 18.654839972187613, 18.684838358176503, 18.759284295093448, 18.709773603730653, 18.636126777039046, 18.645553537045178, 18.468446059220728, 18.36314689046548, 18.266505019360718, 18.0860924046878, 17.886536818120934, 17.86430652636907, 17.777950633516195, 17.788795266305147, 17.960967305097878, 18.078368228956823, 18.196802306271678, 18.179844438679133, 18.203541615790648, 18.190321558294208, 18.083136514456772, 18.058898137975856, 17.823828996194802, 18.04957905504089 };
double _solarhouse4_load_dynamic_table1_1d_look_up_table1__value;
double _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[1211] = { 0.0, 4.0, 8.0, 12.0, 16.0, 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0, 52.0, 56.0, 60.0, 64.0, 68.0, 72.0, 76.0, 80.0, 84.0, 88.0, 92.0, 96.0, 100.0, 104.0, 108.0, 112.0, 116.0, 120.0, 124.0, 128.0, 132.0, 136.0, 140.0, 144.0, 148.0, 152.0, 156.0, 160.0, 164.0, 168.0, 172.0, 176.0, 180.0, 184.0, 188.0, 192.0, 196.0, 200.0, 204.0, 208.0, 212.0, 216.0, 220.0, 224.0, 228.0, 232.0, 236.0, 240.0, 244.0, 248.0, 252.0, 256.0, 260.0, 264.0, 268.0, 272.0, 276.0, 280.0, 284.0, 288.0, 292.0, 296.0, 300.0, 304.0, 308.0, 312.0, 316.0, 320.0, 324.0, 328.0, 332.0, 336.0, 340.0, 344.0, 348.0, 352.0, 356.0, 360.0, 364.0, 368.0, 372.0, 376.0, 380.0, 384.0, 388.0, 392.0, 396.0, 400.0, 404.0, 408.0, 412.0, 416.0, 420.0, 424.0, 428.0, 432.0, 436.0, 440.0, 444.0, 448.0, 452.0, 456.0, 460.0, 464.0, 468.0, 472.0, 476.0, 480.0, 484.0, 488.0, 492.0, 496.0, 500.0, 504.0, 508.0, 512.0, 516.0, 520.0, 524.0, 528.0, 532.0, 536.0, 540.0, 544.0, 548.0, 552.0, 556.0, 560.0, 564.0, 568.0, 572.0, 576.0, 580.0, 584.0, 588.0, 592.0, 596.0, 600.0, 604.0, 608.0, 612.0, 616.0, 620.0, 624.0, 628.0, 632.0, 636.0, 640.0, 644.0, 648.0, 652.0, 656.0, 660.0, 664.0, 668.0, 672.0, 676.0, 680.0, 684.0, 688.0, 692.0, 696.0, 700.0, 704.0, 708.0, 712.0, 716.0, 720.0, 724.0, 728.0, 732.0, 736.0, 740.0, 744.0, 748.0, 752.0, 756.0, 760.0, 764.0, 768.0, 772.0, 776.0, 780.0, 784.0, 788.0, 792.0, 796.0, 800.0, 804.0, 808.0, 812.0, 816.0, 820.0, 824.0, 828.0, 832.0, 836.0, 840.0, 844.0, 848.0, 852.0, 856.0, 860.0, 864.0, 868.0, 872.0, 876.0, 880.0, 884.0, 888.0, 892.0, 896.0, 900.0, 904.0, 908.0, 912.0, 916.0, 920.0, 924.0, 928.0, 932.0, 936.0, 940.0, 944.0, 948.0, 952.0, 956.0, 960.0, 964.0, 968.0, 972.0, 976.0, 980.0, 984.0, 988.0, 992.0, 996.0, 1000.0, 1004.0, 1008.0, 1012.0, 1016.0, 1020.0, 1024.0, 1028.0, 1032.0, 1036.0, 1040.0, 1044.0, 1048.0, 1052.0, 1056.0, 1060.0, 1064.0, 1068.0, 1072.0, 1076.0, 1080.0, 1084.0, 1088.0, 1092.0, 1096.0, 1100.0, 1104.0, 1108.0, 1112.0, 1116.0, 1120.0, 1124.0, 1128.0, 1132.0, 1136.0, 1140.0, 1144.0, 1148.0, 1152.0, 1156.0, 1160.0, 1164.0, 1168.0, 1172.0, 1176.0, 1180.0, 1184.0, 1188.0, 1192.0, 1196.0, 1200.0, 1204.0, 1208.0, 1212.0, 1216.0, 1220.0, 1224.0, 1228.0, 1232.0, 1236.0, 1240.0, 1244.0, 1248.0, 1252.0, 1256.0, 1260.0, 1264.0, 1268.0, 1272.0, 1276.0, 1280.0, 1284.0, 1288.0, 1292.0, 1296.0, 1300.0, 1304.0, 1308.0, 1312.0, 1316.0, 1320.0, 1324.0, 1328.0, 1332.0, 1336.0, 1340.0, 1344.0, 1348.0, 1352.0, 1356.0, 1360.0, 1364.0, 1368.0, 1372.0, 1376.0, 1380.0, 1384.0, 1388.0, 1392.0, 1396.0, 1400.0, 1404.0, 1408.0, 1412.0, 1416.0, 1420.0, 1424.0, 1428.0, 1432.0, 1436.0, 1440.0, 1444.0, 1448.0, 1452.0, 1456.0, 1460.0, 1464.0, 1468.0, 1472.0, 1476.0, 1480.0, 1484.0, 1488.0, 1492.0, 1496.0, 1500.0, 1504.0, 1508.0, 1512.0, 1516.0, 1520.0, 1524.0, 1528.0, 1532.0, 1536.0, 1540.0, 1544.0, 1548.0, 1552.0, 1556.0, 1560.0, 1564.0, 1568.0, 1572.0, 1576.0, 1580.0, 1584.0, 1588.0, 1592.0, 1596.0, 1600.0, 1604.0, 1608.0, 1612.0, 1616.0, 1620.0, 1624.0, 1628.0, 1632.0, 1636.0, 1640.0, 1644.0, 1648.0, 1652.0, 1656.0, 1660.0, 1664.0, 1668.0, 1672.0, 1676.0, 1680.0, 1684.0, 1688.0, 1692.0, 1696.0, 1700.0, 1704.0, 1708.0, 1712.0, 1716.0, 1720.0, 1724.0, 1728.0, 1732.0, 1736.0, 1740.0, 1744.0, 1748.0, 1752.0, 1756.0, 1760.0, 1764.0, 1768.0, 1772.0, 1776.0, 1780.0, 1784.0, 1788.0, 1792.0, 1796.0, 1800.0, 1804.0, 1808.0, 1812.0, 1816.0, 1820.0, 1824.0, 1828.0, 1832.0, 1836.0, 1840.0, 1844.0, 1848.0, 1852.0, 1856.0, 1860.0, 1864.0, 1868.0, 1872.0, 1876.0, 1880.0, 1884.0, 1888.0, 1892.0, 1896.0, 1900.0, 1904.0, 1908.0, 1912.0, 1916.0, 1920.0, 1924.0, 1928.0, 1932.0, 1936.0, 1940.0, 1944.0, 1948.0, 1952.0, 1956.0, 1960.0, 1964.0, 1968.0, 1972.0, 1976.0, 1980.0, 1984.0, 1988.0, 1992.0, 1996.0, 2000.0, 2004.0, 2008.0, 2012.0, 2016.0, 2020.0, 2024.0, 2028.0, 2032.0, 2036.0, 2040.0, 2044.0, 2048.0, 2052.0, 2056.0, 2060.0, 2064.0, 2068.0, 2072.0, 2076.0, 2080.0, 2084.0, 2088.0, 2092.0, 2096.0, 2100.0, 2104.0, 2108.0, 2112.0, 2116.0, 2120.0, 2124.0, 2128.0, 2132.0, 2136.0, 2140.0, 2144.0, 2148.0, 2152.0, 2156.0, 2160.0, 2164.0, 2168.0, 2172.0, 2176.0, 2180.0, 2184.0, 2188.0, 2192.0, 2196.0, 2200.0, 2204.0, 2208.0, 2212.0, 2216.0, 2220.0, 2224.0, 2228.0, 2232.0, 2236.0, 2240.0, 2244.0, 2248.0, 2252.0, 2256.0, 2260.0, 2264.0, 2268.0, 2272.0, 2276.0, 2280.0, 2284.0, 2288.0, 2292.0, 2296.0, 2300.0, 2304.0, 2308.0, 2312.0, 2316.0, 2320.0, 2324.0, 2328.0, 2332.0, 2336.0, 2340.0, 2344.0, 2348.0, 2352.0, 2356.0, 2360.0, 2364.0, 2368.0, 2372.0, 2376.0, 2380.0, 2384.0, 2388.0, 2392.0, 2396.0, 2400.0, 2404.0, 2408.0, 2412.0, 2416.0, 2420.0, 2424.0, 2428.0, 2432.0, 2436.0, 2440.0, 2444.0, 2448.0, 2452.0, 2456.0, 2460.0, 2464.0, 2468.0, 2472.0, 2476.0, 2480.0, 2484.0, 2488.0, 2492.0, 2496.0, 2500.0, 2504.0, 2508.0, 2512.0, 2516.0, 2520.0, 2524.0, 2528.0, 2532.0, 2536.0, 2540.0, 2544.0, 2548.0, 2552.0, 2556.0, 2560.0, 2564.0, 2568.0, 2572.0, 2576.0, 2580.0, 2584.0, 2588.0, 2592.0, 2596.0, 2600.0, 2604.0, 2608.0, 2612.0, 2616.0, 2620.0, 2624.0, 2628.0, 2632.0, 2636.0, 2640.0, 2644.0, 2648.0, 2652.0, 2656.0, 2660.0, 2664.0, 2668.0, 2672.0, 2676.0, 2680.0, 2684.0, 2688.0, 2692.0, 2696.0, 2700.0, 2704.0, 2708.0, 2712.0, 2716.0, 2720.0, 2724.0, 2728.0, 2732.0, 2736.0, 2740.0, 2744.0, 2748.0, 2752.0, 2756.0, 2760.0, 2764.0, 2768.0, 2772.0, 2776.0, 2780.0, 2784.0, 2788.0, 2792.0, 2796.0, 2800.0, 2804.0, 2808.0, 2812.0, 2816.0, 2820.0, 2824.0, 2828.0, 2832.0, 2836.0, 2840.0, 2844.0, 2848.0, 2852.0, 2856.0, 2860.0, 2864.0, 2868.0, 2872.0, 2876.0, 2880.0, 2884.0, 2888.0, 2892.0, 2896.0, 2900.0, 2904.0, 2908.0, 2912.0, 2916.0, 2920.0, 2924.0, 2928.0, 2932.0, 2936.0, 2940.0, 2944.0, 2948.0, 2952.0, 2956.0, 2960.0, 2964.0, 2968.0, 2972.0, 2976.0, 2980.0, 2984.0, 2988.0, 2992.0, 2996.0, 3000.0, 3004.0, 3008.0, 3012.0, 3016.0, 3020.0, 3024.0, 3028.0, 3032.0, 3036.0, 3040.0, 3044.0, 3048.0, 3052.0, 3056.0, 3060.0, 3064.0, 3068.0, 3072.0, 3076.0, 3080.0, 3084.0, 3088.0, 3092.0, 3096.0, 3100.0, 3104.0, 3108.0, 3112.0, 3116.0, 3120.0, 3124.0, 3128.0, 3132.0, 3136.0, 3140.0, 3144.0, 3148.0, 3152.0, 3156.0, 3160.0, 3164.0, 3168.0, 3172.0, 3176.0, 3180.0, 3184.0, 3188.0, 3192.0, 3196.0, 3200.0, 3204.0, 3208.0, 3212.0, 3216.0, 3220.0, 3224.0, 3228.0, 3232.0, 3236.0, 3240.0, 3244.0, 3248.0, 3252.0, 3256.0, 3260.0, 3264.0, 3268.0, 3272.0, 3276.0, 3280.0, 3284.0, 3288.0, 3292.0, 3296.0, 3300.0, 3304.0, 3308.0, 3312.0, 3316.0, 3320.0, 3324.0, 3328.0, 3332.0, 3336.0, 3340.0, 3344.0, 3348.0, 3352.0, 3356.0, 3360.0, 3364.0, 3368.0, 3372.0, 3376.0, 3380.0, 3384.0, 3388.0, 3392.0, 3396.0, 3400.0, 3404.0, 3408.0, 3412.0, 3416.0, 3420.0, 3424.0, 3428.0, 3432.0, 3436.0, 3440.0, 3444.0, 3448.0, 3452.0, 3456.0, 3460.0, 3464.0, 3468.0, 3472.0, 3476.0, 3480.0, 3484.0, 3488.0, 3492.0, 3496.0, 3500.0, 3504.0, 3508.0, 3512.0, 3516.0, 3520.0, 3524.0, 3528.0, 3532.0, 3536.0, 3540.0, 3544.0, 3548.0, 3552.0, 3556.0, 3560.0, 3564.0, 3568.0, 3572.0, 3576.0, 3580.0, 3584.0, 3588.0, 3592.0, 3596.0, 3600.0, 3604.0, 3608.0, 3612.0, 3616.0, 3620.0, 3624.0, 3628.0, 3632.0, 3636.0, 3640.0, 3644.0, 3648.0, 3652.0, 3656.0, 3660.0, 3664.0, 3668.0, 3672.0, 3676.0, 3680.0, 3684.0, 3688.0, 3692.0, 3696.0, 3700.0, 3704.0, 3708.0, 3712.0, 3716.0, 3720.0, 3724.0, 3728.0, 3732.0, 3736.0, 3740.0, 3744.0, 3748.0, 3752.0, 3756.0, 3760.0, 3764.0, 3768.0, 3772.0, 3776.0, 3780.0, 3784.0, 3788.0, 3792.0, 3796.0, 3800.0, 3804.0, 3808.0, 3812.0, 3816.0, 3820.0, 3824.0, 3828.0, 3832.0, 3836.0, 3840.0, 3844.0, 3848.0, 3852.0, 3856.0, 3860.0, 3864.0, 3868.0, 3872.0, 3876.0, 3880.0, 3884.0, 3888.0, 3892.0, 3896.0, 3900.0, 3904.0, 3908.0, 3912.0, 3916.0, 3920.0, 3924.0, 3928.0, 3932.0, 3936.0, 3940.0, 3944.0, 3948.0, 3952.0, 3956.0, 3960.0, 3964.0, 3968.0, 3972.0, 3976.0, 3980.0, 3984.0, 3988.0, 3992.0, 3996.0, 4000.0, 4004.0, 4008.0, 4012.0, 4016.0, 4020.0, 4024.0, 4028.0, 4032.0, 4036.0, 4040.0, 4044.0, 4048.0, 4052.0, 4056.0, 4060.0, 4064.0, 4068.0, 4072.0, 4076.0, 4080.0, 4084.0, 4088.0, 4092.0, 4096.0, 4100.0, 4104.0, 4108.0, 4112.0, 4116.0, 4120.0, 4124.0, 4128.0, 4132.0, 4136.0, 4140.0, 4144.0, 4148.0, 4152.0, 4156.0, 4160.0, 4164.0, 4168.0, 4172.0, 4176.0, 4180.0, 4184.0, 4188.0, 4192.0, 4196.0, 4200.0, 4204.0, 4208.0, 4212.0, 4216.0, 4220.0, 4224.0, 4228.0, 4232.0, 4236.0, 4240.0, 4244.0, 4248.0, 4252.0, 4256.0, 4260.0, 4264.0, 4268.0, 4272.0, 4276.0, 4280.0, 4284.0, 4288.0, 4292.0, 4296.0, 4300.0, 4304.0, 4308.0, 4312.0, 4316.0, 4320.0, 4324.0, 4328.0, 4332.0, 4336.0, 4340.0, 4344.0, 4348.0, 4352.0, 4356.0, 4360.0, 4364.0, 4368.0, 4372.0, 4376.0, 4380.0, 4384.0, 4388.0, 4392.0, 4396.0, 4400.0, 4404.0, 4408.0, 4412.0, 4416.0, 4420.0, 4424.0, 4428.0, 4432.0, 4436.0, 4440.0, 4444.0, 4448.0, 4452.0, 4456.0, 4460.0, 4464.0, 4468.0, 4472.0, 4476.0, 4480.0, 4484.0, 4488.0, 4492.0, 4496.0, 4500.0, 4504.0, 4508.0, 4512.0, 4516.0, 4520.0, 4524.0, 4528.0, 4532.0, 4536.0, 4540.0, 4544.0, 4548.0, 4552.0, 4556.0, 4560.0, 4564.0, 4568.0, 4572.0, 4576.0, 4580.0, 4584.0, 4588.0, 4592.0, 4596.0, 4600.0, 4604.0, 4608.0, 4612.0, 4616.0, 4620.0, 4624.0, 4628.0, 4632.0, 4636.0, 4640.0, 4644.0, 4648.0, 4652.0, 4656.0, 4660.0, 4664.0, 4668.0, 4672.0, 4676.0, 4680.0, 4684.0, 4688.0, 4692.0, 4696.0, 4700.0, 4704.0, 4708.0, 4712.0, 4716.0, 4720.0, 4724.0, 4728.0, 4732.0, 4736.0, 4740.0, 4744.0, 4748.0, 4752.0, 4756.0, 4760.0, 4764.0, 4768.0, 4772.0, 4776.0, 4780.0, 4784.0, 4788.0, 4792.0, 4796.0, 4800.0, 4804.0, 4808.0, 4812.0, 4816.0, 4820.0, 4824.0, 4828.0, 4832.0, 4836.0, 4840.0 };
X_Int32 _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex;
X_Int32 _solarhouse4_load_dynamic_table1_1d_look_up_table1__rightIndex;
X_Int32 _solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr;
double _solarhouse4_load_dynamic_table1_1d_look_up_table1__fraction;

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
double _ess_min_max__out;
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
double _solarhouse1_min_max__out;
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
double _solarhouse2_min_max__out;
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
double _solarhouse3_min_max__out;
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
double _solarhouse4_min_max__out;
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
double _solarhouse1_load_dynamic_table1_clock1__state;
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
double _solarhouse2_load_dynamic_table1_clock1__state;
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
double _solarhouse3_load_dynamic_table1_clock1__state;
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
double _solarhouse4_load_dynamic_table1_clock1__state;
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

//
// Tunable parameters
//
static struct Tunable_params {
} tunable_params;

void *tunable_params_dev0_cpu0_ptr = &tunable_params;





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
    _solarhouse1_load_dynamic_table1_clock1__state = 0.0f;
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
    _solarhouse2_load_dynamic_table1_clock1__state = 0.0f;
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
    _solarhouse3_load_dynamic_table1_clock1__state = 0.0f;
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
    _solarhouse4_load_dynamic_table1_clock1__state = 0.0f;
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
    HIL_OutFloat(145752064, 0.0);
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
    HIL_OutFloat(149946368, 0.0);
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
    HIL_OutFloat(154140672, 0.0);
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
    HIL_OutFloat(158334976, 0.0);
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
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: ESS.Constant1
    // Generated from the component: ESS.Modbus.C_u11
    // Generated from the component: ESS.Modbus.C_u12
    // Generated from the component: ESS.Modbus.C_u13
    // Generated from the component: Grid.Constant1
    // Generated from the component: Grid.Constant2
    // Generated from the component: Grid.Constant3
    // Generated from the component: SolarHouse1.Modbus.C_u11
    // Generated from the component: SolarHouse1.Modbus.C_u12
    // Generated from the component: SolarHouse1.Modbus.C_u13
    // Generated from the component: SolarHouse2.Modbus.C_u11
    // Generated from the component: SolarHouse2.Modbus.C_u12
    // Generated from the component: SolarHouse2.Modbus.C_u13
    // Generated from the component: SolarHouse3.Modbus.C_u11
    // Generated from the component: SolarHouse3.Modbus.C_u12
    // Generated from the component: SolarHouse3.Modbus.C_u13
    // Generated from the component: SolarHouse4.Modbus.C_u11
    // Generated from the component: SolarHouse4.Modbus.C_u12
    // Generated from the component: SolarHouse4.Modbus.C_u13
    //////////////////////////////////////////////////////////////////////////
    // Output block
    //////////////////////////////////////////////////////////////////////////
    //@cmp.out.block.start
    // Generated from the component: ESS.Constant1
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
    // Generated from the component: SolarHouse1.Load.Dynamic Table1.Clock1
    _solarhouse1_load_dynamic_table1_clock1__out = _solarhouse1_load_dynamic_table1_clock1__state;
    // Generated from the component: SolarHouse1.Modbus.Bus Split1
    _solarhouse1_modbus_bus_split1__out = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[0];
    _solarhouse1_modbus_bus_split1__out1 = _solarhouse1_modbus_modbus_device1__config1__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse1.Modbus.C_u11
    // Generated from the component: SolarHouse1.Modbus.C_u12
    // Generated from the component: SolarHouse1.Modbus.C_u13
    // Generated from the component: SolarHouse1.Modbus.Dynamic Table.Clock1
    _solarhouse1_modbus_dynamic_table_clock1__out = _solarhouse1_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse1.Modbus.Termination1
    // Generated from the component: SolarHouse2.Load.Dynamic Table1.Clock1
    _solarhouse2_load_dynamic_table1_clock1__out = _solarhouse2_load_dynamic_table1_clock1__state;
    // Generated from the component: SolarHouse2.Modbus.Bus Split1
    _solarhouse2_modbus_bus_split1__out = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[0];
    _solarhouse2_modbus_bus_split1__out1 = _solarhouse2_modbus_modbus_device2__config2__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse2.Modbus.C_u11
    // Generated from the component: SolarHouse2.Modbus.C_u12
    // Generated from the component: SolarHouse2.Modbus.C_u13
    // Generated from the component: SolarHouse2.Modbus.Dynamic Table.Clock1
    _solarhouse2_modbus_dynamic_table_clock1__out = _solarhouse2_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse2.Modbus.Termination1
    // Generated from the component: SolarHouse3.Load.Dynamic Table1.Clock1
    _solarhouse3_load_dynamic_table1_clock1__out = _solarhouse3_load_dynamic_table1_clock1__state;
    // Generated from the component: SolarHouse3.Modbus.Bus Split1
    _solarhouse3_modbus_bus_split1__out = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[0];
    _solarhouse3_modbus_bus_split1__out1 = _solarhouse3_modbus_modbus_device3__config3__comp_holding_in_out__out[1];
    // Generated from the component: SolarHouse3.Modbus.C_u11
    // Generated from the component: SolarHouse3.Modbus.C_u12
    // Generated from the component: SolarHouse3.Modbus.C_u13
    // Generated from the component: SolarHouse3.Modbus.Dynamic Table.Clock1
    _solarhouse3_modbus_dynamic_table_clock1__out = _solarhouse3_modbus_dynamic_table_clock1__state;
    // Generated from the component: SolarHouse3.Modbus.Termination1
    // Generated from the component: SolarHouse4.Load.Dynamic Table1.Clock1
    _solarhouse4_load_dynamic_table1_clock1__out = _solarhouse4_load_dynamic_table1_clock1__state;
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
    // Generated from the component: SolarHouse1.Load.Dynamic Table1.1D look-up table1
    if(_solarhouse1_load_dynamic_table1_clock1__out <= _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse1_load_dynamic_table1_clock1__out < _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse1_load_dynamic_table1_1d_look_up_table1__rightIndex - _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_solarhouse1_load_dynamic_table1_clock1__out < _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr]) {
                _solarhouse1_load_dynamic_table1_1d_look_up_table1__rightIndex = _solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex = _solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _solarhouse1_load_dynamic_table1_1d_look_up_table1__curAddr = (_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex + _solarhouse1_load_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__fraction = (_solarhouse1_load_dynamic_table1_clock1__out - _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse1_load_dynamic_table1_1d_look_up_table1__value = (_solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex])
            * _solarhouse1_load_dynamic_table1_1d_look_up_table1__fraction + _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse1_load_dynamic_table1_1d_look_up_table1__leftIndex];
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
    // Generated from the component: SolarHouse2.Load.Dynamic Table1.1D look-up table1
    if(_solarhouse2_load_dynamic_table1_clock1__out <= _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse2_load_dynamic_table1_clock1__out < _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse2_load_dynamic_table1_1d_look_up_table1__rightIndex - _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_solarhouse2_load_dynamic_table1_clock1__out < _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr]) {
                _solarhouse2_load_dynamic_table1_1d_look_up_table1__rightIndex = _solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex = _solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _solarhouse2_load_dynamic_table1_1d_look_up_table1__curAddr = (_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex + _solarhouse2_load_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__fraction = (_solarhouse2_load_dynamic_table1_clock1__out - _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse2_load_dynamic_table1_1d_look_up_table1__value = (_solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex])
            * _solarhouse2_load_dynamic_table1_1d_look_up_table1__fraction + _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse2_load_dynamic_table1_1d_look_up_table1__leftIndex];
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
    // Generated from the component: SolarHouse3.Load.Dynamic Table1.1D look-up table1
    if(_solarhouse3_load_dynamic_table1_clock1__out <= _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse3_load_dynamic_table1_clock1__out < _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse3_load_dynamic_table1_1d_look_up_table1__rightIndex - _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_solarhouse3_load_dynamic_table1_clock1__out < _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr]) {
                _solarhouse3_load_dynamic_table1_1d_look_up_table1__rightIndex = _solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex = _solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _solarhouse3_load_dynamic_table1_1d_look_up_table1__curAddr = (_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex + _solarhouse3_load_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__fraction = (_solarhouse3_load_dynamic_table1_clock1__out - _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse3_load_dynamic_table1_1d_look_up_table1__value = (_solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex])
            * _solarhouse3_load_dynamic_table1_1d_look_up_table1__fraction + _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse3_load_dynamic_table1_1d_look_up_table1__leftIndex];
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
    // Generated from the component: SolarHouse4.Load.Dynamic Table1.1D look-up table1
    if(_solarhouse4_load_dynamic_table1_clock1__out <= _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[0]) {
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__fraction = 0.0;
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
    }
    else if(_solarhouse4_load_dynamic_table1_clock1__out < _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[1210]) {
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr = 1210 >> 1;
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex = 0;
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__rightIndex = 1210;
        while (1 < _solarhouse4_load_dynamic_table1_1d_look_up_table1__rightIndex - _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex) {
            if (_solarhouse4_load_dynamic_table1_clock1__out < _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr]) {
                _solarhouse4_load_dynamic_table1_1d_look_up_table1__rightIndex = _solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            else {
                _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex = _solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr;
            }
            _solarhouse4_load_dynamic_table1_1d_look_up_table1__curAddr = (_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex + _solarhouse4_load_dynamic_table1_1d_look_up_table1__rightIndex) >> 1;
        }
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__fraction = (_solarhouse4_load_dynamic_table1_clock1__out - _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex])
                / (_solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_addrs[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex]);
    }
    else {
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__fraction = 1.0;
        _solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex = 1209;
    }
    _solarhouse4_load_dynamic_table1_1d_look_up_table1__value = (_solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex + 1] - _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex])
            * _solarhouse4_load_dynamic_table1_1d_look_up_table1__fraction + _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_table[_solarhouse4_load_dynamic_table1_1d_look_up_table1__leftIndex];
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
    // Generated from the component: ESS.Min Max
    _ess_min_max__out = MIN(_ess_constant1__out, _ess_sum1__out);
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
    // Generated from the component: SolarHouse1.Load.RL1.Vs
    HIL_OutFloat(145752064, (float) _solarhouse1_load_dynamic_table1_1d_look_up_table1__value);
    // Generated from the component: SolarHouse1.Min Max
    _solarhouse1_min_max__out = MIN(_solarhouse1_modbus_dynamic_table_1d_look_up_table1__value, _solarhouse1_sum1__out);
    // Generated from the component: SolarHouse1.Modbus.Bus Join1
    _solarhouse1_modbus_bus_join1__out[0] = _solarhouse1_modbus_rate_transition1_output__out;
    _solarhouse1_modbus_bus_join1__out[1] = _solarhouse1_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse2.Load.RL1.Vs
    HIL_OutFloat(149946368, (float) _solarhouse2_load_dynamic_table1_1d_look_up_table1__value);
    // Generated from the component: SolarHouse2.Min Max
    _solarhouse2_min_max__out = MIN(_solarhouse2_modbus_dynamic_table_1d_look_up_table1__value, _solarhouse2_sum1__out);
    // Generated from the component: SolarHouse2.Modbus.Bus Join1
    _solarhouse2_modbus_bus_join1__out[0] = _solarhouse2_modbus_rate_transition1_output__out;
    _solarhouse2_modbus_bus_join1__out[1] = _solarhouse2_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse3.Load.RL1.Vs
    HIL_OutFloat(154140672, (float) _solarhouse3_load_dynamic_table1_1d_look_up_table1__value);
    // Generated from the component: SolarHouse3.Min Max
    _solarhouse3_min_max__out = MIN(_solarhouse3_modbus_dynamic_table_1d_look_up_table1__value, _solarhouse3_sum1__out);
    // Generated from the component: SolarHouse3.Modbus.Bus Join1
    _solarhouse3_modbus_bus_join1__out[0] = _solarhouse3_modbus_rate_transition1_output__out;
    _solarhouse3_modbus_bus_join1__out[1] = _solarhouse3_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: SolarHouse4.Load.RL1.Vs
    HIL_OutFloat(158334976, (float) _solarhouse4_load_dynamic_table1_1d_look_up_table1__value);
    // Generated from the component: SolarHouse4.Min Max
    _solarhouse4_min_max__out = MIN(_solarhouse4_modbus_dynamic_table_1d_look_up_table1__value, _solarhouse4_sum1__out);
    // Generated from the component: SolarHouse4.Modbus.Bus Join1
    _solarhouse4_modbus_bus_join1__out[0] = _solarhouse4_modbus_rate_transition1_output__out;
    _solarhouse4_modbus_bus_join1__out[1] = _solarhouse4_modbus_dynamic_table_1d_look_up_table1__value;
    // Generated from the component: ESS.Rate Transition1.Input
    _ess_rate_transition1_output__out = _ess_min_max__out;
    // Generated from the component: SolarHouse1.Rate Transition1.Input
    _solarhouse1_rate_transition1_output__out = _solarhouse1_min_max__out;
    // Generated from the component: SolarHouse1.Modbus.ModBus Device1 (config1).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse2.Rate Transition1.Input
    _solarhouse2_rate_transition1_output__out = _solarhouse2_min_max__out;
    // Generated from the component: SolarHouse2.Modbus.ModBus Device2 (config2).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse3.Rate Transition1.Input
    _solarhouse3_rate_transition1_output__out = _solarhouse3_min_max__out;
    // Generated from the component: SolarHouse3.Modbus.ModBus Device3 (config3).comp_reg_in
    // Component not supported for this platform. Outputs are zeroed.
    // Generated from the component: SolarHouse4.Rate Transition1.Input
    _solarhouse4_rate_transition1_output__out = _solarhouse4_min_max__out;
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
    // Generated from the component: SolarHouse1.Load.Dynamic Table1.Clock1
    _solarhouse1_load_dynamic_table1_clock1__state += 0.0001;
    if (_solarhouse1_load_dynamic_table1_clock1__state >= 4840.0)
        _solarhouse1_load_dynamic_table1_clock1__state = 0.0f;
    // Generated from the component: SolarHouse1.Modbus.Dynamic Table.Clock1
    _solarhouse1_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse1_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse1_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse2.Load.Dynamic Table1.Clock1
    _solarhouse2_load_dynamic_table1_clock1__state += 0.0001;
    if (_solarhouse2_load_dynamic_table1_clock1__state >= 4840.0)
        _solarhouse2_load_dynamic_table1_clock1__state = 0.0f;
    // Generated from the component: SolarHouse2.Modbus.Dynamic Table.Clock1
    _solarhouse2_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse2_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse2_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse3.Load.Dynamic Table1.Clock1
    _solarhouse3_load_dynamic_table1_clock1__state += 0.0001;
    if (_solarhouse3_load_dynamic_table1_clock1__state >= 4840.0)
        _solarhouse3_load_dynamic_table1_clock1__state = 0.0f;
    // Generated from the component: SolarHouse3.Modbus.Dynamic Table.Clock1
    _solarhouse3_modbus_dynamic_table_clock1__state += 0.0001;
    if (_solarhouse3_modbus_dynamic_table_clock1__state >= 4840.0)
        _solarhouse3_modbus_dynamic_table_clock1__state = 0.0f;
    // Generated from the component: SolarHouse4.Load.Dynamic Table1.Clock1
    _solarhouse4_load_dynamic_table1_clock1__state += 0.0001;
    if (_solarhouse4_load_dynamic_table1_clock1__state >= 4840.0)
        _solarhouse4_load_dynamic_table1_clock1__state = 0.0f;
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
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
    // Generated from the component: ESS.Inverter.Controller.Constant2
    // Generated from the component: ESS.Inverter.Controller.Constant3
    // Generated from the component: ESS.Inverter.Controller.Constant4
    // Generated from the component: ESS.Inverter.Controller.Constant5
    // Generated from the component: ESS.Inverter.Controller.Constant6
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: ESS.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse1.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse1.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse2.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse2.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse3.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse3.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant2
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant3
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant4
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant5
    // Generated from the component: SolarHouse4.Inverter.Controller.Constant6
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.Limit_zero
    // Generated from the component: SolarHouse4.Inverter.Controller.Outer Voltage Loop + Inner Current Loop.outer power loop1.one
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
    _solarhouse1_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x40a));
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
    _solarhouse2_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x60a));
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
    _solarhouse3_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0x80a));
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
    _solarhouse4_measurement_ia_ia1__out = (HIL_InFloat(0xc80000 + 0xa0a));
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
    // Set tunable parameters
    //////////////////////////////////////////////////////////////////////////
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