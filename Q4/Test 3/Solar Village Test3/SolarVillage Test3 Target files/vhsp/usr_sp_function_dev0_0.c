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
double _solarhouse1_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 41.94503464933874, 42.10746918570507, 42.06579340096452, 42.244656248307564, 42.24971241902185, 42.293835167710355, 42.2626568003616, 42.431709370741636, 42.440829842403616, 42.440940697874844, 42.57409934828779, 42.74904482241831, 42.796343405567306, 42.72510433936225, 42.880238250487544, 42.849005402333205, 42.861800274446594, 42.889426863448726, 42.89736970782935, 42.91947003409757, 43.0078593453593, 43.002662920408746, 42.99346792842222, 43.06016673405757, 43.1930879513225, 43.21591526028911, 43.2355145814551, 43.36407512297833, 43.408708360765324, 43.36696014813488, 43.24055488165724, 43.199079160232074, 43.16418971513314, 43.13230436462233, 43.156687874685105, 42.967714203676316, 43.03535553025176, 43.02990916901801, 43.13077973382968, 43.27126369043187, 43.21050892071075, 43.18343768840403, 43.23310910370514, 43.25884909623961, 43.183787624514025, 43.186425101798974, 43.244912685786026, 43.16011173820941, 43.06074860621657, 42.95643269839591, 42.80039748752754, 42.77134717019268, 42.82329475425409, 42.843881240939155, 42.658660166477866, 42.49628705501446, 42.39252273746421, 42.37941752172952, 42.30339890711206, 42.13647055497259, 42.044293455651285, 42.00114390049529, 41.99991135786493, 41.78601349251312, 41.89604578643629, 41.81267930412302, 41.95424074052945, 42.06709295575147, 41.972645319314296, 42.06419602916911, 42.1492957699993, 42.10623545502632, 42.138090004932906, 42.1957713100639, 42.25660585944467, 42.18565564604706, 42.27968577711896, 42.30213026232651, 42.31433487604897, 41.982698993971965, 42.172684287586776, 42.0366942533649, 42.120759293640496, 42.20569058224421, 42.19252936204664, 42.21021443415453, 42.15058586225779, 42.18782341434312, 42.19851184475829, 42.0291388421036, 42.006690175283644, 41.94607807351017, 41.9691079976884, 42.13212780572278, 42.206473127274116, 42.14004423731887, 42.14702901479547, 41.97191023966627, 42.01928194779285, 42.005046063522656, 41.830069516217186, 42.10075450015718, 42.26756132969018, 42.142633494650276, 42.100812171518925, 42.07627960481508, 42.29277309855928, 42.34217229243015, 42.239481841250246, 42.22070834739159, 42.25356805753385, 42.14018422410295, 42.287957305111426, 42.272958325956104, 42.270782120735774, 42.332960774109004, 42.18373084167336, 42.00092067812914, 42.01238545327711, 42.01163433273707, 42.02637930986321, 42.0051759933151, 42.05364400738844, 41.94508094705838, 41.9739288531515, 41.904045158779844, 41.837814618136456, 41.780633669870525, 41.74063376995096, 41.577752632157186, 41.5349965484532, 41.58001886956107, 41.52522871816605, 41.42234811071415, 41.399916565154406, 41.27343096674719, 41.257792421943996, 41.366869970671296, 41.45090436489953, 41.61567699607375, 41.568960213947285, 41.57349585459644, 41.58646981812499, 41.50315438397634, 41.37329727914289, 41.290435001421685, 41.53008285782619, 41.669670902224134, 41.561062357021605, 41.57124330179197, 41.548104977053725, 41.48443121803197, 41.476396034413966, 41.48611820053319, 41.71732566113149, 41.77976072695068, 41.83825251803506, 41.87642454057697, 42.01592584886254, 41.95503374424421, 41.90535580383617, 41.888149562950396, 42.00060856901988, 41.973936340431656, 41.836372300403255, 41.87696713085987, 41.96406027645382, 41.83484642988702, 41.88774182312292, 41.95290702384637, 41.956319670066115, 42.03589084355164, 42.151500636184146, 42.17880129427124, 42.27368049188417, 42.21017180192057, 42.09081938210595, 42.24037830627115, 42.18445571225982, 42.17767518861356, 42.089397273685535, 41.98818924256726, 42.014605523094936, 42.00401481533682, 42.00495380415307, 42.00942498362669, 42.20552608659964, 42.342311897425134, 42.48982634005448, 42.30155176183643, 42.37252090733085, 42.207425045503115, 42.13924691759834, 42.30773949668584, 42.45440318917629, 42.55137167290055, 42.62324519642033, 42.65612064461988, 42.70293216551044, 42.813739313781745, 42.66864448884512, 42.70032283458442, 42.62673546038886, 42.5917296372826, 42.57386010175672, 42.581007567804576, 42.524785173911035, 42.295346950352716, 42.30615089560183, 42.261363627696774, 42.231480962705064, 42.3013991402338, 42.324333831601216, 42.33781837834813, 42.323823234206465, 42.32016924481226, 42.21701778327617, 42.231013897235286, 42.14005966257473, 42.082922701217505, 41.95048754338827, 42.00278228451257, 42.19912478620903, 42.25260224417704, 41.97924715971054, 42.010248182423936, 41.980625496607324, 42.0026518141034, 42.129783285123104, 42.15586110011483, 42.24315668995056, 42.28495103103608, 42.1682654377327, 42.256401810369255, 42.33828097229394, 42.342333776023025, 42.437389957700034, 42.52036428739199, 42.50991642806008, 42.433713635349676, 42.375480901943895, 42.502851425269206, 42.46709948488896, 42.530387111472955, 42.47413192045288, 42.45085517834728, 42.53821034946694, 42.612601650273646, 42.597419636757, 42.74018102491582, 42.670168864412865, 42.591348946756796, 42.59019909776191, 42.67735638486419, 42.90177566464114, 42.750434478441406, 42.760864771271116, 42.89652560765988, 42.92093381037292, 42.857631713416346, 42.843460282688376, 42.83675576333506, 42.98827033226366, 43.14015876760039, 43.068041861712466, 43.26100428114121, 43.21732642759858, 43.25809335839068, 43.30358559451227, 43.24378076213357, 43.33896965814982, 43.19883093774529, 43.24998389135441, 43.33495867604849, 43.40703616359721, 43.56249599083943, 43.56327258718944, 43.35844427597321, 43.529751763418204, 43.508620901144816, 43.4703667339245, 43.38434416850172, 43.252487169815986, 43.085067120645164, 43.108959801515134, 43.22547094698638, 43.184033691917456, 43.22854331968214, 43.403697031937895, 43.42198674904956, 43.328115419512464, 43.35711874260072, 43.288321605689326, 43.34526010421772, 43.25979178226079, 43.10819233500413, 43.216934957801264, 43.24306271400186, 43.31091912665677, 43.24395566891234, 43.09543863263868, 43.19412731360235, 43.303196593803776, 43.219040590026204, 43.33946705020296, 43.358826269518985, 43.346891267068, 43.26713421549634, 43.33545339678252, 43.394998686428735, 43.448533206114206, 43.22883003434089, 43.18872500964192, 43.20725289671913, 43.223861440593176, 43.07653646910646, 43.12908241732356, 43.237516360444715, 43.060723584564506, 43.078543853588926, 42.979852110229466, 42.99710405712349, 42.88992150631551, 42.89609897563346, 42.89837353789275, 43.0814468072834, 43.198921304930316, 43.370483476837855, 43.289882107337675, 43.09858466414719, 42.963229287577974, 42.871365412873566, 42.88286269382535, 43.05458112307327, 43.0514233104421, 43.09802778410757, 43.190917883683795, 43.14624742689438, 43.162513116460886, 43.055070974220506, 42.850828233804776, 42.87942117991482, 42.88823599225328, 42.90948082185278, 43.0165471328279, 43.16347195577928, 43.159036002102106, 43.06778222395049, 42.993267460882166, 42.834427898859744, 43.00416433582522, 42.89629900476981, 42.91356096141482, 42.750655788338385, 42.77449789205723, 42.74719360583162, 42.588930185129655, 42.493298041078994, 42.40569184527527, 42.44236793986404, 42.51289647501722, 42.54604083802603, 42.54487595590068, 42.57632685274573, 42.48760288440555, 42.504394997874364, 42.488351327486725, 42.468658353186036, 42.4880669902832, 42.356061612215136, 42.214005868417026, 42.291996756936854, 42.23712939562184, 42.31020187749901, 42.298032891555536, 42.2929273438436, 42.423682859459056, 42.42936960025088, 42.371933215313966, 42.32601378745904, 42.38619851748992, 42.2440575712126, 42.16579442382716, 42.026402007825325, 41.95671811083386, 41.93585174495056, 41.89517992374859, 41.76159762368771, 41.76686707569214, 41.79910752183647, 41.81382435634843, 41.95043508931431, 42.01514984642953, 41.978413308051245, 42.295064146123096, 42.158601608551, 42.06596873345358, 42.02801865260662, 41.84693843077051, 41.996515480296495, 41.88345842893585, 41.79581889722079, 41.79244679659129, 41.82472924637223, 41.70646015719782, 41.60057737591485, 41.60905843514222, 41.610330272271646, 41.7382121435022, 41.766249875374456, 41.79663877104074, 41.83311348892918, 41.84120640410057, 41.726266565742, 41.73387124806332, 41.69470800164314, 41.55777067944019, 41.565429137419336, 41.459779299165, 41.54576714490617, 41.49722805966993, 41.597836662320454, 41.528874152476924, 41.556883473300225, 41.54216670226772, 41.461329517047695, 41.43777148767415, 41.4397044532444, 41.459644845946954, 41.317973873988635, 41.3653969944226, 41.361545720283324, 41.38023344301682, 41.29810928996089, 41.16228225671475, 41.07376953818429, 41.15197504398626, 40.91927688548778, 40.87999577251871, 40.99393705836782, 40.96191160527767, 40.953777002840745, 40.82747187678597, 40.87114534303431, 40.90688933547611, 40.85018941092258, 40.803429904190274, 40.727728380250376, 40.85631068252202, 41.005373365510934, 41.06434855029933, 41.13336136900893, 41.11511928091118, 41.12075632674925, 41.24125225354976, 41.06312673565136, 40.99631388560356, 40.94153446820201, 40.903127733748214, 40.97926651234828, 41.01440861185048, 41.05293124203386, 41.121231984172866, 41.16475311436289, 41.06870232871058, 41.10929938256472, 40.95013148111513, 40.97611495042384, 40.986705968643705, 40.93197826977277, 40.93704582583932, 40.76227906721932, 40.873383572972436, 40.88118235790765, 40.98548310341748, 40.770339375222186, 40.66187083896719, 40.67725049589584, 40.68479330529964, 40.485659780660036, 40.448184976013216, 40.36470338022122, 40.45244807251329, 40.56870297866941, 40.73812806520543, 40.71147754274502, 40.695328678523595, 40.568181768985866, 40.786500799831636, 40.932128218501184, 40.825932442237026, 40.898681909694474, 41.10480468401952, 40.98710534390979, 40.880879175923226, 40.89335845124621, 40.882770317086454, 40.90124049199104, 41.07568749254077, 41.08906583442814, 41.05132947635501, 41.05777033068551, 41.05871278473286, 41.05570216841042, 41.000564135339324, 40.95447159288693, 40.91134102131329, 40.86568920065941, 40.93845021087849, 40.8575122989196, 40.78660010346292, 40.868140787721394, 40.8489621015789, 40.77699884612449, 40.8337484001858, 41.14943442835453, 41.209119740874954, 41.18350588726813, 41.266321259339904, 41.42047581079433, 41.27938130595083, 41.33805912995923, 41.37683682695407, 41.46732934900098, 41.324104965669854, 41.257573128759, 41.25568547769947, 41.3091248214278, 41.214155596621865, 41.27670222806889, 41.25130015289164, 41.14693089369425, 41.30310116523403, 41.328689371441406, 41.38630859075566, 41.5181271150534, 41.51977410568976, 41.51425775822563, 41.57148868556529, 41.569355292400815, 41.57401930448561, 41.654353723788276, 41.67598525938602, 41.62439111194283, 41.510885701854974, 41.38046523364149, 41.37391136542746, 41.333287883700656, 41.158143147966896, 41.144654215640884, 41.27479568671818, 41.23556956204322, 41.22013070736713, 41.19102036838184, 41.372767422859056, 41.38759014306557, 41.33427374466557, 41.361113117817226, 41.33602246621271, 41.12645166277847, 41.079202576695664, 41.05149318645726, 40.92746576564878, 40.89338214028993, 40.81581049628474, 40.71112444602714, 40.68750950951715, 40.70883612105828, 40.80594034768124, 40.768562499194964, 40.867126974215275, 40.814123151024475, 40.51470144400953, 40.643429272370774, 40.757020018344456, 40.623712365608114, 40.694673441524145, 40.73653269228826, 40.700351719083756, 40.781678721566145, 40.752419525604665, 40.80008075580183, 40.80597069556916, 40.874256947615855, 40.79059067519895, 40.885270309764174, 40.94279458177493, 41.06105739031876, 41.039187224468115, 41.150130188481455, 41.12267021808294, 41.064079202349745, 40.97005384767091, 41.001600176453174, 41.05961688866713, 40.78273480699019, 40.94550035872194, 40.97050544467764, 41.033687168608985, 40.93609954369797, 40.940627399291785, 40.97382298105785, 40.87281625754518, 41.10026740688731, 41.018619779898636, 41.01923913471271, 41.096114493933015, 41.069029671433505, 40.96707234343347, 40.92144887053108, 40.859937093969776, 40.7995405661913, 40.79820285974411, 40.85067392781009, 40.887285578994614, 40.803978543951104, 40.828923371360055, 40.74499492362514, 40.85647635375132, 40.91182581923115, 40.959516080973685, 40.85902447578413, 40.94343953933432, 41.0369962898578, 40.979116554479, 40.904882609626384, 40.908010551715094, 40.85982700861193, 40.873654739472315, 40.82649099856204, 40.82514861646427, 40.68606840903889, 40.66581777877376, 40.60840885492999, 40.57490639130221, 40.614125760406154, 40.540310564437775, 40.760357612356415, 40.92640796415307, 41.07975822980272, 40.93117847716725, 40.952266636691256, 40.777630221877054, 40.63454911770938, 40.48061173123504, 40.536986256521466, 40.44472864619827, 40.3229030157233, 40.25309537690179, 40.29658606477583, 40.260252222320254, 40.37500448492524, 40.43922405051094, 40.478775347532036, 40.64497690228856, 40.707379586750406, 40.58714522462285, 40.563695059434906, 40.67875237445725, 40.84071703439285, 40.73875048116015, 40.74264898758249, 40.9791631828153, 40.75881920444355, 40.642942985511375, 40.44171768535905, 40.5241364936908, 40.38241263773287, 40.363205384294204, 40.53185658150266, 40.492123340924934, 40.425148425786716, 40.47856319920668, 40.482218374279775, 40.58151089049972, 40.82733860402918, 40.80922251209486, 40.73307701739642, 41.00572190188864, 41.12038069545958, 41.28388194371794, 41.3213259257333, 41.141017150701146, 41.07294100005245, 41.018473231088095, 41.17146074576177, 41.149827875167816, 41.16938794486865, 41.057674206954616, 41.153964539588436, 41.28275342615189, 41.28818612802337, 41.29242865937067, 41.33385240876866, 41.34134338694882, 41.42961806542306, 41.46533588941189, 41.48871255110971, 41.469057867736076, 41.488917288926096, 41.461198218658055, 41.49138791189064, 41.44373948433577, 41.39566698396806, 41.42333543456245, 41.498781634021185, 41.26276032064963, 41.21776066422226, 41.173058797799726, 41.20025778724449, 41.24527375477025, 41.44057343385533, 41.36830537227845, 41.54279451303513, 41.331939525018356, 41.16935107753376, 41.03999284564817, 41.168736305597506, 41.20830531235029, 41.330364336625685, 41.491588269444286, 41.47609064912879, 41.481471699556735, 41.47657348617914, 41.510615097744726, 41.61683793799625, 41.600679660535995, 41.68658960022218, 41.71819496104031, 41.86279550746854, 41.75424018744733, 41.814131195871205, 41.61908215675316, 41.527511862668405, 41.46242999787287, 41.45434468955444, 41.5900052407903, 41.56322121582433, 41.43619096746463, 41.58110445840031, 41.463830165726, 41.55875367093211, 41.373844427209015, 41.2895856659737, 41.244153447116695, 41.1560482252174, 41.2380020482571, 41.051081268625495, 41.04645672896589, 41.01642621067069, 41.023712708565405, 40.991362248229926, 40.995426501994636, 40.902012019819935, 40.8719633230459, 40.87536240124364, 40.919040980946015, 41.10336765207949, 41.12250376384061, 41.29661920310309, 41.2585130510496, 41.19665189364626, 41.104889396323436, 41.04012812707615, 40.91891223706466, 40.65742157809576, 40.61162024683186, 40.71147885967354, 40.86315570390546, 40.91281104556982, 40.79606734761279, 40.687054686053415, 40.67309036370697, 40.676779979371, 40.712599897147605, 40.576739547669504, 40.51791069862285, 40.471089819231, 40.49062320843126, 40.54080428591417, 40.61620552976521, 40.701390586181375, 40.69193395552078, 40.634393410759614, 40.7303366135927, 40.744142934139134, 40.66421219700492, 40.8251769681134, 40.86804262468267, 40.75723148442128, 40.861918165150755, 40.83440410549439, 40.827134965457134, 40.75761433948745, 40.879852014135906, 40.85946919133625, 40.86625516447814, 40.93336953160056, 40.843307176966526, 40.7843213598188, 40.764286774075494, 40.57719183445032, 40.83001756046478, 40.77752895752862, 40.70864233563484, 40.71603188764643, 40.76698634415733, 40.743315027920644, 40.756885507868965, 40.76269490811668, 40.77566425900693, 40.82007273070106, 41.068855919690016, 41.24081182720231, 41.29654436481572, 41.33265549323189, 41.255352983076016, 41.084780194265655, 41.13960070105754, 41.208519999289415, 41.21695980590032, 40.93503716407818, 40.870562926819574, 40.883356861407385, 40.729362587053366, 40.8190552041336, 40.818428243444565, 40.705955166746634, 40.551764713588675, 40.548549578184364, 40.59631151675693, 40.44418275825321, 40.40102461913741, 40.44130342637704, 40.315315375136784, 40.403926900368944, 40.397791265552385, 40.375614790508756, 40.4636261572093, 40.57464619734261, 40.451001737854845, 40.55862692386217, 40.70106266177125, 40.621348506962455, 40.67788175650038, 40.64832508718647, 40.636203207795354, 40.65384523156927, 40.46828616481793, 40.27500368974554, 40.09421284190137, 40.21340627366074, 40.241772576524156, 40.1967250500196, 40.333211673512366, 40.385131812710696, 40.467882240371225, 40.614206747429705, 40.32817945735528, 40.29864968747814, 40.40145964763137, 40.486914643640475, 40.385776721790975, 40.334991315333575, 40.343421817786975, 40.375905516209706, 40.415064829970824, 40.399664363086146, 40.34668730216372, 40.310186815124716, 40.53231385564425, 40.43461245423431, 40.38472114053869, 40.482974478345845, 40.46264771731576, 40.419917261142594, 40.35466604830405, 40.44679040508422, 40.48696357562049, 40.598284503228676, 40.5584355859746, 40.74765765126367, 40.69941191669732, 40.67548021113952, 40.84954012273681, 40.856676694306756, 40.84960541885067, 40.68900533937824, 40.67138525200458, 40.803289778966, 40.7080352143112, 40.48306581352373, 40.481946806025356, 40.28403633471598, 40.35300529675724, 40.42624688612154, 40.63711923213401, 40.70475526687906, 40.761936365898606, 40.68385615994176, 40.50490007971629, 40.451824948518706, 40.50224332416123, 40.60917726931203, 40.65806693354782, 40.680516276534384, 40.81797943082485, 40.8013445604511, 40.899105428525296, 40.82229181492579, 40.910770517555015, 40.86826853043321, 40.84687350411348, 40.891341867502476, 40.99682857219079, 41.05813333298221, 41.113271797295454, 41.11099559463807, 41.147510239796894, 41.02172516112787, 41.081857321829226, 41.09148642180641, 40.95353872840618, 40.82180288139384, 41.015639679239136, 41.08849249378186, 41.13514509320958, 41.03858990347892, 41.20488890854296, 41.10605217161532, 41.10906463330922, 41.11992867224061, 40.842127813207995, 40.80718835139713, 40.88187467511815, 40.94214204239711, 40.90126948117414, 40.86220349527399, 40.83986981439673, 40.83989760239468, 40.789941090640134, 40.825014790938994, 40.87563868801303, 40.95994862632352, 41.03102836452289, 41.18178768748044, 41.12263120772364, 41.14115423161281, 41.065563366911775, 41.027924244872345, 41.008780863386825, 40.94943402993957, 41.052596822714754, 41.05930938898736, 41.05891294600317, 41.11810293414891, 41.1715617625176, 41.15819513898735, 41.15327118954678, 41.39055653706907, 41.33763383225891, 41.30637729365007, 41.206569348382594, 41.31096070351143, 41.17601114258497, 41.206162035374646, 41.08502278640336, 41.27014165345996, 41.07005459778463, 40.98221174942904, 40.95563431157722, 41.079633323287354, 40.89318973724947, 40.88172767191711, 40.79131502367107, 40.822179841933455, 40.82241876871321, 40.807721428183775, 40.78235731752613, 40.75159932597264, 40.63034882587825, 40.389124482335546, 40.342429928046286, 40.365323554934825, 40.424959542139504, 40.35499913914811, 40.44597006367764, 40.277377357339994, 40.31405161173584, 40.416819995103396, 40.40003626518949, 40.37770463120365, 40.39079653640897, 40.32309660510456, 40.47880404417139, 40.411221981611924, 40.34995917542714, 40.43720528372347, 40.44901879313781, 40.46173457753678, 40.38128874718429, 40.27264410987016, 40.26137280678077, 40.129268454549816, 40.18870876128424, 40.13301251941751, 40.04951142114216, 40.190096479181825, 40.25633964344829, 40.14540505462737, 40.0278602645672, 39.912439346412526, 39.99025675481317, 39.924833695122224, 40.00077697361596, 39.903185291488796, 39.953319686997226, 40.16303454025304, 40.149581305232495, 40.074208535867314, 40.00919068619544, 40.081492507000476, 39.979990561291814, 40.00253876565487, 40.21498362841268, 40.37736831732775, 40.477254194508035, 40.500734236245314, 40.4387825804202, 40.42881975288832, 40.205436181193384, 40.12297480715512, 40.286545626196705, 40.54697797785556, 40.5267880141669, 40.201468845683024, 40.18096720109472, 40.32972430962917, 40.422460359562066, 40.569137986090944, 40.559887591588286, 40.56487544412271, 40.479610663831785, 40.53668600458765, 40.50914441412708, 40.531428874849645, 40.56843197347005, 40.535436107356475, 40.69105931485385, 40.7557371530796, 40.73331002978824, 40.65058477972764, 40.53996109510399, 40.45753663164751, 40.4128802953312, 40.33519519899683, 40.20155679222883, 40.32362464058846, 40.28865749161407, 40.36444772469533, 40.32686738306507, 40.16495379007614, 39.99254869607702, 39.88345581459637, 39.946649369936225, 39.94686646036091, 40.03762770408, 40.02637458695186, 39.973687696626136, 40.05428745733942, 40.11959536136951, 40.14648662899483, 40.2230786549073, 40.11029569664649, 40.08542697242557, 40.18405076001928, 40.182797764671356, 40.29376721833443, 40.376051304544795, 40.4976667059971, 40.66179180914857, 40.59057150681443, 40.854965057750356, 40.86240111724359, 40.89623606766981, 41.02963109552998, 41.05616309035153, 41.10364225435613, 41.23722185600587, 41.064929790095924, 41.16325931378049, 41.15415210321485, 41.19084929183187, 41.290150144980295, 41.14427862447001, 40.938545528937404, 41.13037733945722, 41.200779144048816, 41.02611151827293, 41.26714168851889, 41.26354965633588, 41.286219305876905, 41.38100602607352, 41.41502159764235, 41.21581604703131, 40.98709123034227, 41.276052860390564, 41.3850712250724, 41.422738359358256, 41.33940813021631, 41.349109843511584, 41.21910881200943, 41.30505573112835, 41.20735683182485, 41.14567268394627, 41.31399682800513, 41.272994363904026, 41.30109494761917, 41.2339424916841, 41.20958146353404, 41.113806593465036, 41.3680134643848, 41.26043864571451, 41.310996746086225, 41.383872528875976, 41.425354920505654, 41.41467474050263, 41.42515259883243, 41.498663686907115, 41.34872208157209, 41.200326819462155, 41.13927983489243, 41.102525723123264, 41.04565143337269, 41.04512591842371, 41.016215425221546, 40.9845787731074, 40.91625837836772, 40.936671283927566, 40.94672852332778, 41.037668662488436, 40.963632419782265, 40.94411745428655, 40.77166438177794, 40.899980468927886, 40.98025276506803, 41.14552797389018, 41.22622615175622, 41.260721947296474, 41.2960704167526, 41.39081036794528, 41.33815609512767, 41.39396107881279, 41.505577542433365, 41.4718432055893, 41.44043884879623, 41.21226160686716, 41.267409164445404, 41.434861762282154, 41.457587209129905, 41.454416164532255, 41.34829075197175, 41.47658442805786, 41.59322333496039, 41.73641059563185, 41.85773274885348, 41.95001993384826, 41.84292003914492, 41.70396771134144, 41.72666157094489, 41.753112296633404, 41.534758020632594, 41.6179488716209, 41.79970884138345, 41.92870914590274, 41.99740402295964, 41.93206266483538, 41.83325018416341, 41.83406431357139, 41.987173011532796, 42.10499468022378, 41.92526563564231, 41.85237387492207, 41.60124472935178, 41.48471694982198, 41.45687900610464, 41.36185700517953, 41.41530109927035, 41.467518214878346, 41.50988450609103, 41.67727775628944, 41.727381735364595, 41.72505019725778, 41.71976699013072, 41.792795643199455, 41.8474924605757, 41.97060895046211, 41.777966265987224, 41.9332164972375, 41.79922018449328, 41.851422347407286, 41.942088997266524, 42.003993349219854, 42.034323933604064, 42.0791430965412, 42.006921476028616, 42.035566701635595, 42.103967300551595, 42.18656093154758, 42.21913226527597, 42.329503687277324 };
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
double _solarhouse2_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 38.19497960838449, 38.08633497107035, 38.07506366798096, 37.942959315749995, 38.00239962248443, 37.946703380617706, 37.86320228234235, 38.003787340382026, 38.07003050464849, 37.95909591582756, 37.841551125767396, 37.72613020761271, 37.80394761601336, 37.738524556322425, 37.81446783481615, 37.716876152689, 37.76701054819742, 37.976725401453244, 37.96327216643269, 37.88789939706751, 37.82288154739563, 37.89518336820068, 37.79368142249201, 37.81622962685506, 38.02867448961288, 38.19105917852794, 38.29094505570823, 38.3144250974455, 38.252473441620396, 38.24251061408851, 38.01912704239357, 37.936665668355324, 38.10023648739689, 38.36066883905575, 38.34047887536709, 38.01515970688322, 37.99465806229491, 38.14341517082936, 38.236151220762245, 38.382828847291144, 38.373578452788465, 38.378566305322906, 38.293301525031964, 38.350376865787844, 38.32283527532727, 38.345119736049845, 38.38212283467024, 38.34912696855668, 38.50475017605404, 38.56942801427979, 38.547000890988436, 38.46427564092783, 38.35365195630418, 38.27122749284771, 38.22657115653139, 38.14888606019702, 38.01524765342902, 38.137315501788656, 38.10234835281426, 38.178138585895525, 38.140558244265264, 37.978644651276326, 37.806239557277216, 37.697146675796574, 37.760340231136425, 37.7605573215611, 37.8513185652802, 37.840065448152046, 37.787378557826315, 37.86797831853961, 37.933286222569706, 37.96017749019502, 38.036769516107505, 37.92398655784668, 37.89911783362577, 37.99774162121947, 37.99648862587155, 38.107458079534624, 38.189742165745, 38.31135756719729, 38.47548267034876, 38.404262368014614, 38.66865591895056, 38.67609197844378, 38.709926928870004, 38.84332195673017, 38.86985395155172, 38.917333115556325, 39.05091271720607, 38.87862065129612, 38.97695017498068, 38.96784296441504, 39.00454015303207, 39.10384100618049, 38.957969485670205, 38.752236390137604, 38.944068200657405, 39.01447000524901, 38.83980237947312, 39.0808325497191, 39.07724051753607, 39.099910167077105, 39.194696887273714, 39.228712458842544, 39.029506908231504, 38.800782091542466, 39.08974372159075, 39.198762086272595, 39.23642922055845, 39.153098991416506, 39.16280070471178, 39.03279967320962, 39.11874659232854, 39.02104769302505, 38.95936354514647, 39.127687689205324, 39.08668522510421, 39.11478580881936, 39.04763335288428, 39.02327232473424, 38.92749745466523, 39.181704325584995, 39.0741295069147, 39.12468760728642, 39.19756339007617, 39.239045781705855, 39.228365601702826, 39.23884346003263, 39.312354548107315, 39.162412942772285, 39.01401768066236, 38.95297069609261, 38.91621658432346, 38.85934229457288, 38.8588167796239, 38.82990628642175, 38.7982696343076, 38.72994923956792, 38.750362145127774, 38.76041938452797, 38.85135952368864, 38.77732328098246, 38.75780831548674, 38.58535524297813, 38.71367133012809, 38.793943626268224, 38.95921883509038, 39.0399170129564, 39.07441280849667, 39.10976127795279, 39.20450122914546, 39.151846956327866, 39.20765194001297, 39.31926840363357, 39.285534066789495, 39.25412970999643, 39.02595246806735, 39.0811000256456, 39.248552623482354, 39.2712780703301, 39.268107025732434, 39.161981613171946, 39.290275289258055, 39.40691419616058, 39.550101456832046, 39.67142361005367, 39.76371079504845, 39.656610900345115, 39.517658572541634, 39.54035243214509, 39.5668031578336, 39.34844888183279, 39.43163973282109, 39.61339970258365, 39.74240000710294, 39.81109488415983, 39.74575352603558, 39.646941045363604, 39.647755174771575, 39.80086387273299, 39.918685541423976, 39.738956496842505, 39.66606473612226, 39.41493559055198, 39.29840781102217, 39.27056986730484, 39.175547866379716, 39.228991960470545, 39.28120907607855, 39.32357536729122, 39.490968617489635, 39.54107259656478, 39.53874105845797, 39.53345785133092, 39.60648650439964, 39.66118332177589, 39.7842998116623, 39.59165712718743, 39.7469073584377, 39.61291104569347, 39.66511320860748, 39.75577985846671, 39.81768421042004, 39.84801479480426, 39.89283395774139, 39.820612337228816, 39.84925756283578, 39.91765816175178, 40.000251792747775, 40.03282312647615, 40.14319454847751, 40.26422376090388, 40.337958968215425, 40.389119336360395, 40.265599340919344, 40.154192964177106, 40.309361665197336, 40.328699600515186, 40.43296649184687, 40.61256375648375, 40.60943010336671, 40.750447894580994, 40.73065909182387, 40.605925884461065, 40.675920781951426, 40.81633099892724, 40.972515542630134, 40.999991975407966, 40.96779688066845, 40.88144330539091, 40.799027578083724, 40.8411608749127, 41.15283538254041, 41.21538732256007, 41.26253083893332, 41.33146907124676, 41.32209322283442, 41.41621284365541, 41.398777128410565, 41.56598803444927, 41.518903831438045, 41.483393832855775, 41.52350284428999, 41.52098360039092, 41.623613629041735, 41.706742794209454, 41.72928358871013, 41.75470062220572, 41.755674339885715, 41.77422818738822, 41.595799266657075, 41.424115869482954, 41.226828324543035, 41.27545742181492, 41.37172802474887, 41.289851212327626, 41.335133213362646, 41.50064878021556, 41.580985321870756, 41.52540299330488, 41.365349771168106, 41.38694583024496, 41.43275877068293, 41.428924908977926, 41.341440075268416, 41.4658664312356, 41.59654955339044, 41.66270242779806, 41.50794241859649, 41.44019911093586, 41.53819547555137, 41.55321944468904, 41.448071676558015, 41.44525754673032, 41.54548298397746, 41.47834130777475, 41.66985575202838, 41.65462412360564, 41.639304102893526, 41.68702059866134, 41.73674827039021, 41.69792179380889, 41.56469199852239, 41.579473164674965, 41.65225980040236, 41.665108246938246, 41.53833902658258, 41.476131399067114, 41.604797089276325, 41.58239734280916, 41.496732569875505, 41.48120706786375, 41.38412637595383, 41.38583884367598, 41.395441456643454, 41.50583439871255, 41.48972816761425, 41.44845838760234, 41.234630336770586, 41.43733774094921, 41.52568670721836, 41.638936025213454, 41.67996470495332, 41.6765390116556, 41.653675608108784, 41.51195902524184, 41.24286796610501, 41.25036159597165, 41.301164898557616, 41.26371004889484, 41.314916722894736, 41.25666480898773, 41.34165815821992, 41.340394423851016, 41.422643539615905, 41.46250146692711, 41.25381525331919, 41.18807228490387, 41.20288930148837, 41.13996255341017, 41.18328378146247, 41.14783494379896, 41.201693263223355, 41.13795151057845, 40.94546191262928, 40.91476528824517, 40.86958957610806, 41.06307260373065, 41.080221765344156, 41.07087632124558, 40.9995031631643, 40.99522602818051, 41.152038046918655, 41.27556305782053, 41.36150746851817, 41.25622110531373, 41.361068341557754, 41.290749610571496, 41.321089182321884, 41.22425112101241, 41.250397570316395, 41.353112501684365, 41.33547699433238, 41.37885491081789, 41.21505992386648, 41.22255419590353, 41.20132674978218, 41.28461279485465, 41.18034814150506, 41.162298912073695, 41.15287065229932, 41.049972703706594, 41.046763340028356, 41.09182218755894, 41.243259770066636, 41.109274674836406, 41.15915285917028, 41.201649946420375, 41.22039737588363, 41.16839653929922, 41.16560343529364, 41.10681220944094, 41.157892822606776, 41.20801363453297, 41.0876271178686, 41.07728698087607, 41.02078595626708, 40.9574185967869, 40.89786656800091, 40.858075847760546, 40.755768203732174, 40.662501125554506, 40.734933199676426, 40.759292057780925, 40.79159664628483, 40.493458148756496, 40.43525258600341, 40.472481641675685, 40.460641340244216, 40.646637158794434, 40.55848662834304, 40.57325405637357, 40.563611103905245, 40.554034580986894, 40.62394436931308, 40.459907263907816, 40.56700319603409, 40.65046375925101, 40.6159277948081, 40.55937777315518, 40.60241376512119, 40.51801360607024, 40.360177596025565, 40.452153238233535, 40.41711613252448, 40.65937950956764, 40.82794778741218, 40.83712122285506, 41.039955430446796, 41.03304795571675, 41.06172169009105, 40.91526140009407, 41.07983344434787, 41.148404256624495, 41.23585572163229, 41.053213340368686, 41.037892071788676, 41.32126122230219, 41.36708796565874, 41.1400901918593, 41.244055505362404, 41.18915746847459, 41.22280936516567, 41.114850333241854, 41.07170783769149, 41.0259837448121, 41.018830278230865, 41.022007199439116, 41.058539057587424, 40.991354488163815, 40.96340345618293, 40.86140243509461, 41.011647830294436, 40.97742032541924, 40.961187153818024, 40.818553545018545, 40.82698845789313, 40.86984082689677, 40.76227829263601, 40.71806384872885, 40.62200783856055, 40.55524017993206, 40.6013103226496, 40.549238674499065, 40.49465823563757, 40.4195089776713, 40.40566252173464, 40.67966750791803, 40.84562953384413, 40.887223118479746, 40.844863539469415, 40.81518712922132, 40.883859602175605, 40.93073361335293, 41.01071014629283, 40.90469306341482, 40.96468909904964, 41.12879311515813, 41.08322909825697, 41.067698237615694, 41.12736864871924, 41.12826616697779, 40.99922480151289, 41.04734805518135, 41.12238538361653, 41.165471629954034, 41.159640628726756, 41.12113885906697, 40.99901302683333, 41.058895092310465, 40.91787631980559, 40.87879242492807, 40.81984842510428, 40.85884092781938, 40.97000347907957, 40.95930156718317, 40.86708141677156, 40.83693871444203, 40.830329834375775, 40.908836413757456, 40.991549717973854, 40.75946070959977, 40.731668930910686, 40.68784427676112, 40.66610435678457, 40.599748673792185, 40.51030929861799, 40.50239204465005, 40.40259774063378, 40.38801567630886, 40.337545678312466, 40.409338471952545, 40.468527377837354, 40.37783445263248, 40.27280616525947, 40.200229738783015, 40.07762648681747, 39.97201739959362, 39.89347101323987, 39.97249783765829, 39.949366347791226, 40.016281979870406, 40.12984801651345, 40.05664864660962, 39.99680695063851, 40.20459453777421, 40.133822796922644, 39.94140368494081, 39.935237818862426, 39.8921683832566, 39.81854234533947, 39.98470897705935, 40.10430621349154, 40.19213063037676, 40.11727206499218, 39.97930348886759, 39.885806998190034, 39.91532077040864, 39.82399873746643, 39.81417477701857, 39.782876295437006, 39.63657236072815, 39.72072181233037, 39.70654836683779, 39.7032680871178, 39.707964124938826, 39.795187854244645, 39.811795100366496, 39.845076901481036, 39.88284112081564, 39.98316138916626, 39.78953416467167, 39.75255550778339, 39.883625205415576, 39.86891573897067, 39.91243926875896, 39.891092310677536, 40.01286651017668, 40.00415154237983, 39.95857696473732, 40.07108813770087, 40.20486547580765, 40.19684445034568, 40.159077613284005, 40.125003440649046, 39.9848642901097, 39.87356937874089, 39.76612278108888, 39.78597710379027, 39.8129811561484, 39.76587398960077, 39.6948255662598, 39.63918797897921, 39.79733677120464, 39.75405262570414, 39.91926258235539, 39.77583164356274, 39.85265507297821, 39.809695867624896, 39.81011865360941, 39.89822000352113, 39.89455423441446, 39.83899325086875, 39.947607983534745, 39.97321221162024, 40.079975325232674, 39.924331255647274, 40.01629797534224, 40.04872218036051, 40.15238193715741, 40.18065886737688, 40.20715227024437, 40.40133496775843, 40.35821827680729, 40.3510297044198, 40.509905221472614, 40.424322085262936, 40.38624658467161, 40.22152509498451, 40.353693807303564, 40.45474228328733, 40.56747192856403, 40.45484633623838, 40.38330081272299, 40.41835237189795, 40.50051359227376, 40.61447096921668, 40.610769524962336, 40.65223630287994, 40.76100153027122, 40.70046538477966, 40.696417683367706, 40.67235951433234, 40.75609424536111, 40.7691572822072, 40.803953239555376, 40.799890736347955, 40.700870952565715, 40.742711023193934, 40.75602452001415, 40.757771824825475, 40.59157020893494, 40.69275310812045, 40.822952868777314, 40.92385297490611, 40.91544667307857, 40.92939195720862, 40.97599618893436, 40.813744389379075, 40.72881479495421, 40.58713057473245, 40.610116095873046, 40.54046048126235, 40.43880668929656, 40.45596670476423, 40.485164742376526, 40.47787274841014, 40.48564974217985, 40.58617592838503, 40.64942339161365, 40.723268499749864, 40.60208948511955, 40.61261102473513, 40.643770448308345, 40.680403742853954, 40.522361943561684, 40.49726636774544, 40.71138304782434, 40.55338109231461, 40.45995074933874, 40.59339694172367, 40.62392717697679, 40.51198160022769, 40.464645268968404, 40.333304291611526, 40.379504623151654, 40.41332634631153, 40.49873054317343, 40.540970622197094, 40.544700601809176, 40.51992655215682, 40.353027633091735, 40.454182638603996, 40.65888007481241, 40.527672347461134, 40.34312358232565, 40.31454868290335, 40.1398274857869, 39.93577308294076, 39.83122575013739, 39.8743700119908, 39.977729856456975, 40.069414428991216, 39.891641880380156, 39.71680168691152, 39.508524997781095, 39.584256132546464, 39.79796537158843, 39.78366433848376, 39.67339054239674, 39.70395982632316, 39.6627068481702, 39.79496719601031, 39.772014432247, 39.87225702150629, 39.7875871509864, 39.74284348635803, 39.75338746879445, 39.859274879647735, 39.88177289146545, 40.00714031431651, 40.03609300419768, 39.93668783641329, 40.00645653626743, 39.99230685055198, 40.04873872043365, 40.00802726023071, 40.178696816966955, 40.08275102834561, 39.937336153832014, 40.17067114092706, 40.15504845115281, 40.09168570734189, 40.225296142774354, 40.245299267527535, 40.31798249810402, 40.15900019651156, 40.14278466437379, 40.04491107144384, 40.06299676593695, 40.068115822472016, 40.09934670433605, 39.958382662974046, 40.090662444495955, 40.05639428842371, 40.19400931968799, 40.051240473031136, 40.150066674638744, 40.141649096717344, 40.08895280923526, 39.98367400075871, 39.995147981117455, 40.056061758087246, 39.96468335236999, 39.97183290449153, 39.9769547848797, 40.0177843819777, 40.0688708370981, 39.988931245150525, 39.90297498142365, 39.85324786153697, 39.60757478437567, 39.698950101781946, 39.85632356377378, 39.84697271533317, 39.815828249701106, 39.89906633782834, 39.91244094177837, 39.88317521829675, 39.842752712306726, 39.714663464290545, 39.8428891178157, 39.85899055536171, 39.737710263980105, 39.76623449267706, 39.83060860887433, 39.854074408248756, 39.72271581391001, 39.690869999379714, 39.83387247612414, 39.951520786258136, 39.99484018174867, 40.074238932350845, 39.99771893537617, 39.94110257033813, 39.73623994650495, 39.792887505488466, 39.757520245124454, 39.693912151802735, 39.625178207476985, 39.771922523915784, 39.612256498245344, 39.530340169191604, 39.42021121444272, 39.45465264528264, 39.483020643003, 39.441402949129895, 39.62632304100285, 39.59273053008576, 39.754614201357185, 39.73228848694415, 39.56623111626189, 39.47306870762857, 39.435283403439634, 39.47673391486372, 39.5566671313875, 39.35001307166121, 39.35056375107686, 39.324442329485976, 39.18653622248362, 39.118118322763046, 38.969159737947614, 38.92224988254205, 39.09373371585408, 39.06977173956772, 39.120753409080535, 39.115088608296496, 39.068846300894116, 39.01680947598844, 39.11122072178612, 39.127486532407076, 39.19687096829336, 39.24427249995115, 39.28530581721196, 39.25651817429247, 39.18593528423579, 39.07870778884529, 39.24154896299682, 39.31549830828857, 39.29720670964151, 39.20253965967893, 39.29068184868521, 39.248292180416186, 39.25854595498093, 39.40673568504035, 39.46207891292085, 39.463275171740534, 39.54138194627799, 39.61459753880288, 39.610865285756546, 39.494875707983844, 39.42174559172075, 39.550711261537984, 39.553036118524304, 39.530203015411374, 39.53000146079055, 39.51544486206252, 39.4877896008472, 39.52503060025072, 39.34206291994799, 39.33561824916581, 39.23964171753195, 39.2090505815234, 39.095130823453175, 39.21119170587564, 39.10784064922429, 39.43356710622428, 39.411946806124114, 39.299256926666786, 39.10070496171619, 39.137062928911796, 39.162533489661826, 39.18648741449555, 39.165376830708325, 39.04205871054536, 39.00747950565768, 38.824499655409, 38.74099558947103, 38.78332618666246, 38.811358319095966, 38.71604732737165, 38.95664829430084, 38.92183367215104, 38.89940664314335, 39.03164604424739, 38.99965008606114, 38.94877402222442, 38.99330095628925, 39.06185884125744, 39.002927346937426, 38.94279540643166, 39.03230435333188, 38.88234991022525, 38.796871968770745, 38.90074145119511, 38.88084344962228, 38.73040202915559, 38.68292570734175, 38.646449163889024, 38.77084592649347, 38.768499973512455, 38.71331937577579, 38.7082714695101, 38.62463827045384, 38.66313701830313, 38.563287955381995, 38.48723379993704, 38.62975233504047, 38.61730574127867, 38.76107143937319, 38.706629410333655, 38.750777787996114, 38.73274285854813, 38.65936373599027, 38.61451836523712, 38.65260713357209, 38.60163888255599, 38.539783076728966, 38.540899094629374, 38.56868139230918, 38.46013095281466, 38.649710651042106, 38.50920206885196, 38.40516437400522, 38.38905865600779, 38.40390287853978, 38.20156946491693, 38.192600664634, 38.24420482017518, 38.19224485972984, 38.150896353161905, 37.96316526329207, 37.99704852105343, 38.052601913527134, 38.094726741113355, 38.08614787827565, 38.003363422236205, 37.88224826985748, 37.909383087856895, 37.84060690918868, 37.662798027786096, 37.648766707289774, 37.483184308313604, 37.57035563001696, 37.56392801962157, 37.49759206044736, 37.34837302097554, 37.271873380360034, 37.238548109305995, 37.300948709815344, 37.06755265144704, 37.22688832953386, 37.316805035690756, 37.28313922592783, 37.337335326057655, 37.31733098388956, 37.33572130639247, 37.358894358723134, 37.3816178393225, 37.561453705851356, 37.57181131790903, 37.530675908657095, 37.390869462641355, 37.38979925388383, 37.413740582474105, 37.4511801401576, 37.61852378024082, 37.73242242228911, 37.84076750069479, 37.796592463517534, 37.91941881959372, 37.77621071005064, 37.77604814456409, 37.75131097591419, 37.8224793364518, 37.713799577323755, 37.82620420406042, 37.9550368876089, 38.06069298529583, 37.999005060825255, 37.94297991631461, 38.04235982383111, 38.324415803667044, 38.09109771238896, 38.075831563882424, 37.91689150066832, 37.874421669429886, 37.833587345884425, 37.77527200090858, 37.830415107101956, 37.687011958821905, 37.767861207189824, 37.718956561821976, 37.53209429051236, 37.65891014259356, 37.74377910177724, 37.67830015547897, 37.89266094550234, 37.825550444958886, 37.698033223615525, 37.477420473389174, 37.68187848838739, 37.571277467563185, 37.55897400130749, 37.48714036920104, 37.30997954883592, 37.14657840494947, 37.14477918440817, 36.86342777430179, 36.88184785230925, 36.79956618906935, 36.80788599518599, 36.69141579774387, 36.920134944624884, 36.8723671919065, 36.77798488618126, 36.94027575065099, 36.88339996989331, 36.68643891362035, 36.52311581889862, 36.46277983726663, 36.60220012427462, 36.57959704387085, 36.60958977123326, 36.628061381013175, 36.597284170966155, 36.601857921463534, 36.60090638647669, 36.76205112355995, 36.92420330280096, 37.114692983921316, 37.15759341533929, 37.262752351632415, 37.2578980874021, 37.2201183561459, 37.248440978546355, 37.070093306197634, 37.12352244705982, 37.311581800221646, 37.45660314955139, 37.4555228720122, 37.513806463827116, 37.59690808843617, 37.41607313635543, 37.365028094840326, 37.35552695606165, 37.320460487549894, 37.29302613659269, 37.18186739499378, 37.0856796981989, 37.01169696225289, 36.980016469107376, 36.89885658255264, 36.87397070829966, 36.87128048561494, 36.780211191876674, 36.702513288367136, 36.804229733029736, 36.67145896474848, 36.6450871588946, 36.606854577600615, 36.51251139898885, 36.4889950705732, 36.471274318788375, 36.456495078016594, 36.33243174241042, 36.27514597608639, 36.319609974751465, 36.47354438284539, 36.44179636877632, 36.615470129970824, 36.497815115696795, 36.36725016960765, 36.0729901906068, 36.202796157744224, 36.25102072435492, 36.114882197939856, 35.982141353685314, 35.95284017234058, 35.99596543273518, 35.985395064514954, 35.99251595485855, 35.97394881635172, 36.00190326772945, 35.94381082302666, 35.95651125450928, 35.98599666362632, 35.88370213484551, 35.85602537523073, 35.8342574788567, 35.6573729082991, 35.806233813566045, 35.80618102365746, 35.87734837668374, 36.04415310881494, 36.034914091080935, 35.991742239049756, 36.032666253993646, 35.918687049572966, 35.87705562079158, 36.01741164094417, 36.169182762354566, 36.26528100444346, 36.302051920758295, 36.29856455120294, 36.33001241638197, 36.287772913168396, 36.346230733559544, 36.53360311262392, 36.47051468822818, 36.48349550200039, 36.46577442969138, 36.521704679376256, 36.49502749523622, 36.34865502373249, 36.363174826504135, 36.38468143588115, 36.428663761598344, 36.32407401808936, 36.32358263702054, 36.432454898845684, 36.33830293983674, 36.407318237546576, 36.524807268910436, 36.67034014267022, 36.592906854944026, 36.491644799938456, 36.55792039113131, 36.5404306705912, 36.538545998680576, 36.57573912359983, 36.657012226604756, 36.73717941896357, 36.751959622267215, 36.872648220646475, 36.800101451585924, 36.766829788684376, 36.8342949400303, 36.894377405828706, 36.81980831176628, 36.93627178547114, 37.01198048197704, 36.888544738339526, 37.18100320616977, 37.1618046264408, 37.042125020184606, 36.982505975735634, 36.91020414006229, 37.09379983013362, 37.11678245552811, 37.027544163548704, 37.07131491616009, 37.216252609600666, 37.066559692748505, 37.22624384983953, 37.233039718606136, 37.288717754379775, 37.140577354375786, 37.2185488190185, 37.19734053798719, 37.036749050414215, 36.95760335525142, 37.18869275841381, 37.37605319539439, 37.32621369330105, 37.26884295355651, 37.46089938283086, 37.59056610093718, 37.40038679679114, 37.460020695498216, 37.43471181768615, 37.422425154459255, 37.54434997048939, 37.46918049157919, 37.538646592611435, 37.49698848999209, 37.63975823357653, 37.731529516188814, 37.908966306853216, 37.974325784636456, 38.15718397415283, 38.178050921480185, 38.38507233612764, 38.30462530674911, 38.29462862931625, 38.433577515900275, 38.316503406311654, 38.26739851765213, 38.376658216007115, 38.39519228351418, 38.28537170813117, 38.38992002162764, 38.26165719997545, 38.329269111863546, 38.32376978855253, 38.36821178539573, 38.502765748426526, 38.39187786225271, 38.264669089192594, 38.13832531083722, 38.194503593892826, 38.2202997148836, 38.13399282899466, 38.14249225829404, 38.09125415845943, 38.12830145285276, 38.106690157529954, 38.11131979707621, 38.05119574353918, 38.011036109604994, 37.950895821263316, 38.07365184707832, 38.00951716305632, 37.93902880349103, 37.78776908580826, 37.804658556040785, 37.67978140769461, 37.818382964194285, 37.85229493387033, 37.875807566174004, 37.84146274932539, 37.829003395654624, 37.84451927350049, 37.871229004251354, 37.87417243389297, 37.852161235362814, 37.719799457339505, 37.728297275123055, 37.68546037642977, 37.58214207580421, 37.354232818933156, 37.321155202150585, 37.43846715510756, 37.42730673577739, 37.55116500973386, 37.47765642044962, 37.55420748552778, 37.608270029001375, 37.631245411952136, 37.67734082905037, 37.69466165400971, 37.733842590247924, 37.62834329751937, 37.507841567439975, 37.46323735658829, 37.392748043363405, 37.452477034379676, 37.410243737055104, 37.512746754722684, 37.61292636266435, 37.77191438704827, 37.843268572686156, 37.982897245119894, 37.99340777782804, 37.96271761194303, 38.09899324489804, 37.98197236475889, 38.05170217264549, 37.990926360909135, 38.11032957342318, 38.04237168145117, 38.17758359033387, 38.11801255354617, 38.11814064346864, 38.034345136418274, 38.067145283493794, 38.04256121432456, 38.12235073667106, 38.07505029249102, 37.881709411725346, 37.80317154591878, 37.69538775053804, 37.610790186781564, 37.663786159171345, 37.68391328339146, 37.533153975333406, 37.726245405516345, 37.743685896042344, 37.94852566731985, 37.78059739625021, 37.851995771474535 };
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
double _solarhouse3_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 34.6589144976219, 34.541259483347865, 34.41069453725872, 34.11643455825786, 34.2462405253953, 34.294465092005986, 34.15832656559093, 34.02558572133638, 33.99628453999165, 34.039409800386245, 34.028839432166016, 34.035960322509624, 34.017393184002785, 34.04534763538052, 33.98725519067773, 33.99995562216036, 34.02944103127738, 33.927146502496576, 33.8994697428818, 33.87770184650777, 33.70081727595017, 33.84967818121712, 33.84962539130853, 33.920792744334804, 34.08759747646601, 34.078358458732005, 34.03518660670083, 34.07611062164472, 33.96213141722404, 33.92049998844265, 34.060856008595245, 34.21262713000563, 34.30872537209453, 34.345496288409365, 34.34200891885401, 34.37345678403304, 34.331217280819466, 34.38967510121062, 34.577047480274985, 34.51395905587925, 34.52693986965145, 34.50921879734245, 34.56514904702733, 34.5384718628873, 34.39209939138356, 34.406619194155205, 34.42812580353222, 34.47210812924941, 34.36751838574044, 34.367027004671606, 34.47589926649676, 34.38174730748781, 34.450762605197646, 34.568251636561506, 34.71378451032129, 34.636351222595096, 34.53508916758953, 34.60136475878239, 34.58387503824228, 34.58199036633166, 34.619183491250894, 34.700456594255826, 34.78062378661464, 34.7954039899183, 34.91609258829755, 34.843545819237, 34.81027415633545, 34.87773930768137, 34.93782177347977, 34.86325267941736, 34.97971615312222, 35.05542484962811, 34.93198910599061, 35.224447573820854, 35.205248994091875, 35.085569387835676, 35.025950343386704, 34.95364850771336, 35.137244197784696, 35.160226823179194, 35.07098853119977, 35.114759283811175, 35.25969697725174, 35.11000406039959, 35.269688217490604, 35.27648408625721, 35.33216212203085, 35.18402172202687, 35.26199318666958, 35.240784905638264, 35.0801934180653, 35.0010477229025, 35.23213712606489, 35.41949756304547, 35.36965806095213, 35.312287321207585, 35.50434375048194, 35.63401046858826, 35.44383116444222, 35.50346506314929, 35.47815618533723, 35.465869522110346, 35.58779433814047, 35.512624859230264, 35.58209096026252, 35.54043285764317, 35.683202601227606, 35.77497388383989, 35.9524106745043, 36.01777015228752, 36.200628341803906, 36.22149528913126, 36.42851670377871, 36.348069674400186, 36.33807299696733, 36.47702188355135, 36.35994777396272, 36.31084288530321, 36.420102583658206, 36.438636651165254, 36.32881607578224, 36.433364389278715, 36.30510156762654, 36.37271347951463, 36.36721415620361, 36.41165615304681, 36.5462101160776, 36.43532222990379, 36.30811345684367, 36.18176967848829, 36.237947961543895, 36.26374408253467, 36.17743719664573, 36.18593662594512, 36.134698526110505, 36.171745820503844, 36.15013452518103, 36.15476416472728, 36.09464011119026, 36.05448047725608, 35.994340188914386, 36.11709621472938, 36.0529615307074, 35.982473171142104, 35.83121345345933, 35.84810292369186, 35.72322577534569, 35.86182733184535, 35.895739301521395, 35.919251933825095, 35.884907116976464, 35.8724477633057, 35.887963641151565, 35.914673371902424, 35.917616801544035, 35.89560560301389, 35.763243824990575, 35.77174164277413, 35.72890474408084, 35.62558644345528, 35.39767718658425, 35.364599569801655, 35.481911522758644, 35.47075110342847, 35.59460937738493, 35.521100788100696, 35.59765185317886, 35.65171439665246, 35.67468977960321, 35.720785196701456, 35.73810602166079, 35.777286957898994, 35.671787665170456, 35.551285935091045, 35.50668172423937, 35.436192411014474, 35.49592140203075, 35.453688104706174, 35.556191122373754, 35.65637073031543, 35.815358754699346, 35.886712940337226, 36.02634161277096, 36.036852145479116, 36.006161979594104, 36.14243761254912, 36.025416732409965, 36.09514654029656, 36.03437072856021, 36.153773941074256, 36.08581604910225, 36.221027957984944, 36.16145692119724, 36.16158501111972, 36.07778950406935, 36.11058965114486, 36.086005581975634, 36.165795104322136, 36.118494660142105, 35.92515377937642, 35.84661591356985, 35.738832118189116, 35.654234554432634, 35.70723052682241, 35.72735765104254, 35.576598342984475, 35.76968977316741, 35.787130263693406, 35.99197003497093, 35.824041763901285, 35.89544013912561, 35.96390224129369, 35.93695207437978, 35.903213424506944, 35.98039688720804, 36.08604431386987, 35.95044335037139, 36.0757588399952, 36.10874695963378, 36.10743777306829, 35.94663307068751, 35.82009348658161, 35.72601434019013, 35.869756180862936, 35.782126628237584, 35.72617589368547, 35.82899641762621, 35.888474507225524, 35.890785743335954, 35.96466668814997, 35.85272090695292, 35.65489145850557, 35.553173033488115, 35.506091302672274, 35.813465000091895, 35.76032258575959, 35.79171272411281, 35.90980707894435, 35.88259796025476, 35.77601892530205, 35.949549297142646, 35.89382235850497, 35.9936748417401, 36.002038838184816, 36.12806257230846, 36.230612730812226, 36.32995918756683, 36.31641622002285, 36.242727709182255, 36.28669765604909, 36.38278673536685, 36.403510168537295, 36.493710115971886, 36.520848378864216, 36.71133803933483, 36.72249304841557, 36.7292450686871, 36.74364376898014, 36.79003292241899, 36.791796631273996, 36.79129688019206, 36.82868858064011, 36.88571251072412, 36.81498442888665, 36.83320203755827, 36.88131389082266, 36.76516683911145, 36.74198892031032, 36.57982609081294, 36.63782373265935, 36.80275624820396, 36.9368091834253, 36.88787659247381, 36.84876533906857, 36.72506724786771, 36.72936713393151, 36.852074388045146, 36.787272528127495, 36.69814227745168, 36.694860738663905, 36.639639708678004, 36.65011513121346, 36.78392461025651, 36.79161727655622, 36.67194425839346, 36.528906869006185, 36.57322496940288, 36.67794715992963, 36.576811780974616, 36.51670944711604, 36.633196815344846, 36.607017173754684, 36.53604960952784, 36.427063217784045, 36.40993412821754, 36.62381837844377, 36.628490576333924, 36.5422409110282, 36.645454220690105, 36.50603796451402, 36.69124066238921, 36.661193387794796, 36.69802379392843, 36.64957372803286, 36.67535039408252, 36.587578334713655, 36.63565139601428, 36.58112458890784, 36.564596821196574, 36.539401226655336, 36.51964866414729, 36.60856734407377, 36.710442992464365, 36.86210431059409, 36.87764171685193, 36.71218844099066, 36.71731428443604, 36.61822197640892, 36.70455715429954, 36.696945835714736, 36.688900323984704, 36.84979970614978, 36.81539276247876, 36.849930723801705, 37.02201307605026, 36.959794668009366, 37.03339749204585, 36.99071208555629, 36.80977592421957, 36.759131187509496, 36.77953652679094, 36.82824077487924, 36.65976673788748, 36.75627643038009, 36.81135643013107, 36.634268604869376, 36.62515246832484, 36.676405250843295, 36.59014319315103, 36.467265863195244, 36.44697133324426, 36.33057912054712, 36.20484791104229, 36.13965165450747, 36.11634171221015, 36.02121183717801, 35.97846067251977, 35.802976077472394, 35.965107893985895, 36.02425725364028, 36.03446240300331, 35.97448273790005, 36.035253150467184, 35.9960848440789, 35.89831064335425, 35.95034109070296, 36.02707208451209, 36.11444041292817, 36.22988389400256, 36.470273141162686, 36.41344617149922, 36.49526115198525, 36.51262731186136, 36.51285156639681, 36.34432700704553, 36.294823698916396, 36.26552988075974, 36.271702019734825, 36.18653840558183, 36.20166274888176, 36.246070666397024, 35.988711628799436, 35.97848160718298, 35.88393503742158, 35.93433280630168, 35.866903455720724, 35.981220684307125, 35.956047182445595, 35.94261632033382, 35.905983552280794, 35.97091755755524, 35.97291675778831, 36.052953112557134, 35.92474163233694, 35.85645092045257, 35.90119722640928, 35.83745038505083, 35.80122726834765, 35.75106153069208, 35.89984702058713, 36.03392605239315, 36.05600300008372, 36.202836809179495, 36.186933500006376, 36.113752757548646, 36.04415875631213, 36.038704041806284, 35.966833406120344, 35.93782224885015, 36.080849317584, 36.23925428815143, 36.313994488191774, 36.48645655455781, 36.663269604346546, 36.82795054799298, 36.70782388178283, 36.568505222256896, 36.56568413039165, 36.402981644823655, 36.32845157751717, 36.31169891901093, 36.1827975206814, 36.197687574643616, 36.31185176851889, 36.289550592739616, 36.2341914338941, 36.24312931111267, 36.03529940157103, 36.16437476915368, 36.26479415449707, 36.31130681934935, 36.35210302801767, 36.25852135788465, 36.26889989195017, 36.31710919886817, 36.35792740941656, 36.38607859305452, 36.489957263218386, 36.30473268463271, 36.28628986134678, 36.215271091243, 36.26843425236166, 36.17307771575583, 36.09613959982232, 36.159894725046094, 36.21755353384786, 36.20689040818397, 36.20688018362677, 36.21736661535718, 36.15483101156189, 36.117431044156426, 36.19037925525533, 36.07672136675409, 36.13294330240781, 36.17519695776434, 36.029764805833935, 36.020026790955704, 35.911927752340716, 35.848944545995266, 35.80370361933065, 35.800769924154665, 35.68205528492629, 35.56601200833261, 35.652709266381834, 35.67169191278522, 35.75969379941708, 35.76664425933, 35.857104400824426, 35.89678305805006, 35.879505513366425, 35.858565254860025, 35.735957183656396, 35.769038440887215, 35.80448536466343, 35.70461887009543, 35.61608732587988, 35.58752126526544, 35.61093646868956, 35.736926359541066, 35.79218530324099, 35.83494665489096, 35.80686468267616, 35.807162537657625, 35.73045152374725, 35.86482632278142, 35.82580034170589, 35.76938621523667, 35.839160159565274, 35.81054514165089, 35.805503724383456, 35.74518001300467, 35.62115283619988, 35.437726587970026, 35.451342441928226, 35.55986889430061, 35.657699826850674, 35.580488097253095, 35.62227397304991, 35.62502771840238, 35.49693157034066, 35.57995425801277, 35.64813792087039, 35.695445881708864, 35.563548698104206, 35.652022995744524, 35.49006854836837, 35.5032736777436, 35.62803101397626, 35.46259263352857, 35.457647873049225, 35.45760463356887, 35.452381017626095, 35.419976536424336, 35.526826568244154, 35.58913752462935, 35.72673946493608, 35.84507157905313, 35.67801999664148, 35.71328120308478, 35.7466043461883, 35.60532629123633, 35.586970614909184, 35.56715119145564, 35.52102651593657, 35.403161293657995, 35.43406278278653, 35.62541733791885, 35.74205113665962, 35.702370853653974, 35.79644398216793, 35.90421412793129, 35.78949839150972, 35.87231612428581, 35.80415664226052, 35.745504341341345, 35.74778413354456, 35.621160010407465, 35.555582879949235, 35.67458153709011, 35.5724081527537, 35.754704574674676, 35.629633318228194, 35.68555405656575, 35.73516189847804, 35.69878524333242, 35.772453786844686, 35.66386182300641, 35.680302006695094, 35.70453096851778, 35.66875110114084, 35.62482679457617, 35.86760950285204, 35.87153816253802, 35.826715690316284, 35.755541656609616, 35.66158237072767, 35.687073933333394, 35.68917975109984, 35.568722328757474, 35.58405514973896, 35.48277372502041, 35.475409554365605, 35.33678863983467, 35.297553418922874, 35.37869498328126, 35.229491195031194, 35.234192464201286, 35.08042271592932, 34.977185078840286, 34.884376425478436, 34.83773970137709, 34.80262819874398, 34.7183243424931, 34.73758946512021, 34.627185136415854, 34.60799649575781, 34.62397478911905, 34.56943876608494, 34.659355682959514, 34.64636636962112, 34.555487712980984, 34.52807759336315, 34.335745287229535, 34.33838903145154, 34.23874759144743, 34.14678190374229, 33.91907252938864, 33.89394693012155, 33.6980639423354, 33.669617292596094, 33.52881355329477, 33.42966340259623, 33.581670172924795, 33.511243632124035, 33.28279835542592, 33.386698214938264, 33.42495845444934, 33.42480797253291, 33.44159179922637, 33.49959545209252, 33.51109000922316, 33.55981478150674, 33.74005755251891, 33.72890670411183, 33.76217753651321, 33.845714599878036, 33.732536931064914, 33.732177406481945, 33.56622356544837, 33.543195962122965, 33.7026813326112, 33.72159436105006, 33.67120164293451, 33.494465296536085, 33.71376140213457, 33.82560450940404, 33.808274016807964, 33.938699532651576, 33.97396592827638, 34.209641993412966, 34.144361499613325, 34.214427763543114, 34.20785243253011, 34.31467610213676, 34.123117907215416, 34.11898836489248, 34.12982233585669, 34.140953631495336, 34.065081213602696, 34.01473161834217, 34.18017541092888, 34.12993402744885, 34.19737578876498, 34.20327005656688, 34.1608806399068, 34.16701275916084, 34.105913426895484, 34.04596402009586, 33.88796334073465, 33.99318450747173, 33.963547281582144, 33.94592896627562, 33.914676293880326, 33.95791841250127, 34.01165984783312, 34.06418011873564, 34.10851527300601, 34.092850433215425, 34.09898566286292, 34.242319676485636, 34.245857444833355, 34.03303259548119, 34.28390311000359, 34.39346325888031, 34.41087528232554, 34.47894831181032, 34.67642091454297, 34.627321496411874, 34.771578318401495, 34.842113182655126, 34.85291851777047, 34.832248607234945, 34.78720386225555, 34.8208109135371, 34.7096729288968, 34.578618856576014, 34.572213266770575, 34.63308316253515, 34.49229722617134, 34.62731291843259, 34.61040242472529, 34.51782438410834, 34.579177497044505, 34.34444464466587, 34.34103491382877, 34.446559042555535, 34.28085862136064, 34.248201699713924, 34.3066164107437, 34.45077875484829, 34.526376291239096, 34.558258549951866, 34.717695100756195, 34.68156344102293, 34.626574094413506, 34.535803957369126, 34.5814116087777, 34.59451348130377, 34.628558420042864, 34.34714094719964, 34.538721628485796, 34.460036114072224, 34.48524153606654, 34.43941004930096, 34.60667015696261, 34.62451773261876, 34.65095129427946, 34.67706224584864, 34.665035579320595, 34.880843773541464, 34.91151289589783, 34.970634641396856, 34.95798340749616, 34.97782999135035, 34.905746184051054, 34.94333719957805, 35.003284598693575, 35.093642873466514, 35.16921675923037, 35.08110157888918, 35.07130754822361, 35.079827079539925, 35.17173770263991, 35.29429497425009, 35.322660285008226, 35.35440675754399, 35.129285303098804, 35.253824891204985, 35.36345453516271, 35.313767164769004, 35.39102823136815, 35.288746291552044, 35.308121056006975, 35.31037275729085, 35.284063855382705, 35.13545000048941, 35.3227834352312, 35.254850406923865, 35.42710219941407, 35.547091408197154, 35.576334638670595, 35.59394373442328, 35.54878171827156, 35.5532636619532, 35.475429443836326, 35.42831545924905, 35.578959649814564, 35.539919575922454, 35.48443267213138, 35.47195317081608, 35.497432019706565, 35.42300748935738, 35.450510632065445, 35.529380701962765, 35.339364196761615, 35.32627647933072, 35.43973870174766, 35.52069029330585, 35.41578076926589, 35.363091584290046, 35.31557099629638, 35.38568447086643, 35.469373709651656, 35.65578979353097, 35.62434673541089, 35.672719173637226, 35.75083782594051, 35.813552169401504, 35.8636030131001, 35.88230491805185, 35.7751527793886, 35.76304526007606, 35.69917329717958, 35.62569530895803, 35.72951388971563, 35.636275058612966, 35.66630754259098, 35.55887511732263, 35.710235449413645, 35.7395151308175, 35.76683677621429, 35.89522155358106, 35.906760829300076, 35.986418436075546, 36.0337550917005, 36.15582532849254, 36.33424762589613, 36.225303417783365, 36.18346127997923, 36.151037128744065, 36.024430001177684, 35.959073094136244, 35.93197217430497, 36.04310582906751, 36.15037126290653, 36.03323332928224, 36.008642053893034, 36.03273661868893, 36.059225875311256, 36.163226663366906, 36.08190494701263, 36.06982283567724, 36.11082564329279, 36.15179036127363, 36.24154460023181, 36.22827086383418, 36.19001906483801, 36.17401294323891, 36.19900704021268, 36.172506943307035, 36.169367227145706, 36.2480156078629, 36.2812224537061, 36.20649303489172, 36.228365184618006, 36.17401222316408, 36.3041577746343, 36.458858958420976, 36.49059734923329, 36.587962812280395, 36.487379212586106, 36.672228034352386, 36.714187284219044, 36.58609123518234, 36.72786226624433, 36.68515795009733, 36.72569261696115, 36.591876043559715, 36.40122685961117, 36.42497433750697, 36.34875673496207, 36.41217628595575, 36.37483040151372, 36.39360170106292, 36.221498829486755, 36.11174617659033, 36.074771803495814, 36.04780316971471, 35.94611138561943, 35.99318437122097, 35.956432545784665, 35.878578809293025, 35.78562153854535, 35.7945265547917, 35.77991289989792, 35.714928442559206, 35.73805216114925, 35.792936608325675, 35.681020680667274, 35.568122383913924, 35.579148319068985, 35.70767184555334, 35.670313061950154, 35.69106344907561, 35.55380436668483, 35.62668712096919, 35.54041170038921, 35.58158825268272, 35.48399730374477, 35.55034525174267, 35.542006044986145, 35.502611169811146, 35.462376239509894, 35.48473764085281, 35.58516532083353, 35.61739123584776, 35.77307872218755, 35.7029855066938, 35.63071931733132, 35.64888935033577, 36.02458551768505, 36.072287503722094, 36.018176248828794, 36.01617806495635, 36.158684128658095, 36.278441438125036, 36.23587740180167, 36.315450522631714, 36.28372040420031, 36.27903287179589, 36.289065619787365, 36.38606544705006, 36.55448755429564, 36.44050694442328, 36.452511722580425, 36.454247303101226, 36.182230196193984, 36.23799010058917, 36.36447494877806, 36.36709743146349, 36.36549939328505, 36.43048229347682, 36.56895474350924, 36.64517273804635, 36.49228500546962, 36.40423994228333, 36.23543039736997, 36.247685217653405, 36.332561279980546, 36.32591830246627, 36.440898639310724, 36.484769522301825, 36.458880800094654, 36.45296965321432, 36.59781279421108, 36.4213476338758, 36.55159042326483, 36.80156708700665, 36.770000499879814, 36.785973566265476, 36.98418358888856, 36.895460489310885, 36.85908589434054, 36.74058427756651, 36.81631801238184, 36.68254904019561, 36.68626639130016, 36.60865841453099, 36.654944446788406, 36.686537111406174, 36.647739165361536, 36.60376757559174, 36.506409082997905, 36.49289335827263, 36.43526741870868, 36.320231645791246, 36.514903276153404, 36.750152946335504, 36.89215940519224, 36.859958872645116, 36.79376683145647, 36.66375930297924, 36.7817681909608, 36.76997880903938, 36.73681621672049, 36.77569377691969, 36.9104295959682, 36.908963812319776, 36.92406489921617, 36.90600099870238, 36.89867680233269, 36.93273799920692, 36.88490296106169, 36.98936732424354, 37.1109066992271, 37.12654621348741, 37.236932198115674, 37.27249405920479, 37.20482660492999, 37.278275293940794, 37.328461789612795, 37.26656769987828, 37.130378720625785, 37.29882498343812, 37.48041820857116, 37.473859910570596, 37.52475287617949, 37.52606485763019, 37.61847998978753, 37.42633706354109, 37.485284005562455, 37.60577782451574, 37.545328845293795, 37.599828559693925, 37.60985792466328, 37.73405755422483, 37.89686845979178, 37.95017585498878, 38.01502138860675, 38.058661904651814, 38.03653438134403, 37.844591460807216, 37.735546025690006, 37.76715125841009, 37.83969936421393, 37.69924038568666, 37.66374561493954, 37.648356037908314, 37.53366883289737, 37.40675150027439, 37.51152905527323, 37.30350638265905, 37.21740666724178, 37.27607470749084, 37.12503699899075, 37.18996046104918, 37.28071646344351, 37.27063653391565, 37.3196067956664, 37.267520818845604, 37.28176946600805, 37.15764204237711, 37.068430649756614, 37.05125611756368, 36.940473870867564, 37.011523749202354, 36.90686106520432, 36.88181540793124, 36.912073885762354, 36.93180401465007, 36.92284189768873, 36.8293061041543, 37.00987325056888, 37.10835601627026, 37.154117380307866, 37.0686655010671, 37.17081450074033, 37.241350159506815, 37.34563760760266, 37.26866625901106, 37.24108465354797, 37.348110340397994, 37.33535747171543, 37.37374277776702, 37.173250063091785, 37.109126339808974, 37.11524499805176, 36.93730519646914, 36.938825195721954, 36.87185721696074, 37.13487773184824, 37.12909277419097, 37.14710815369824, 37.27405606871034, 37.11606816253849, 37.04954233039777, 37.02430258412846, 37.11858043375865, 37.111378126418465, 37.000991532340564, 36.96749835215839, 37.03294389003797, 37.011066626285206, 36.86496413690368, 36.779382328942695, 36.80433095095525, 36.80417497196547, 36.93551275840303, 36.86581228844962, 37.12132214211177, 37.117110681927024, 37.06217374118186, 37.07426998023277, 36.927547234360816, 36.836466755725375, 36.76305132655758, 36.70744232679719, 36.7062610916184, 36.66318965500809, 36.69139578520985, 36.676857980784, 36.72514415951851, 36.59081661801651, 36.57527517125157, 36.487514361436546, 36.307107786375326, 36.21010139424105, 36.18656749058314, 36.019433891667475, 36.160110079148545, 36.077041131035635, 36.18018700738743, 36.04532815317447, 36.0831853705684, 36.07398026825632, 36.19779130028719, 36.05043148621157, 36.05317804284764, 36.000766740891365, 35.923461723631895, 35.9357543823224, 36.098157437112505, 36.17195776872178, 36.265070290712686, 36.35317631383684, 36.36914175806425, 36.2653082768059, 36.44162337039565, 36.465124191463964, 36.43873148270978, 36.38308756752584, 36.326063081621626, 36.24189673121144, 36.11047510315638, 36.07565116532819, 36.05100594733615, 36.12058318429404, 36.210651396341454, 36.20139206449439, 36.15635673329077, 36.19459331531778, 36.23789767560304, 36.2143094690699, 36.308925889541186, 36.26171856694499, 36.18058705946536, 36.215271802556074, 36.16003610118267, 36.149125433703105, 36.03199227366393, 36.14706901610733, 36.15860602062202, 36.15293712592014, 36.173891149931094, 36.1246439471109, 36.33403918688853, 36.3870202590906, 36.37518348307059, 36.38283687479132, 36.26597242098767, 36.46978098578194, 36.51655708920933, 36.546521649758226, 36.53898253674775, 36.571533878839375, 36.56184236639991, 36.51036065792104, 36.485882271906384, 36.51485721373032, 36.59172070068846, 36.657708960290954, 36.7073723196531, 36.73767931643458, 36.91834189028713, 36.83981502811843, 36.90324265367472, 36.75952740913932, 36.79532055004184, 36.75334961957283, 36.74396522962294, 36.88140505441503, 36.87069820023037, 36.91432157924543, 36.85473681795619, 36.88127087481946, 36.87549891073276, 36.866033066224524, 37.14075686362838, 37.23510822663043, 37.08650359391033, 37.06109730391896, 36.995794550937205, 37.18995118833726, 37.10556049398839, 37.131157561019286, 37.12013386955911, 37.13138870357047, 37.230884189079866, 37.123216622224334, 37.01582091709592, 37.035716225177566, 37.07012871085383, 37.088405457821175, 37.150797566508345, 37.037979233720634, 36.94905120580089, 37.06309941148903, 37.10459874350253, 36.92187127386896, 36.87522063509767, 36.97469634929746, 36.99747326097656, 37.03312514695666, 36.98134642221918, 37.00432001667776, 37.10398322242252, 37.1703209252019, 37.175791439101246, 37.099425292315395, 36.94617317120427, 36.93137441927065, 36.984474326314604, 37.24048485069665, 37.30657403437001, 37.33933807156675, 37.30044633205154, 37.201155842820405, 37.23231144093885, 37.28655919939069, 37.345271500076386, 37.32027050266645, 37.233542358773796, 37.4580999703354, 37.6393003911874, 37.56029795672978, 37.56388023792207, 37.59046475390932, 37.758606931299845, 37.83146308590214, 37.625748234570175, 37.57618065837719, 37.48881586275842, 37.51506078134357, 37.49959628174634, 37.57516661404088, 37.700985133390105, 37.77195761928206, 37.64645097148188, 37.662970247656624, 37.66010472395693, 37.60646231921507, 37.50587796999662, 37.42608286911452, 37.46753622462696, 37.38982166897829, 37.38903013634867, 37.34424461844411, 37.21276779610885, 37.17117028533736, 37.09143209263115, 37.22794912148206, 37.266752750980636, 37.2404682408074, 37.31282166937389, 37.337658032415135, 37.32878406655408, 37.29266078721643, 37.32103903966272, 37.4059331121874, 37.535281032051614, 37.440828455246205, 37.566869876253946, 37.43367549727212, 37.334232724051425, 37.276780969025936, 37.127901931729056, 37.22156231411601, 37.27485891457759, 37.262188947212685, 37.26176629109982, 37.07547092108978 };
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
double _solarhouse4_load_dynamic_table1_1d_look_up_table1__lut_table[1211] = { 32.852479671457345, 32.846694713800076, 32.864710093307345, 32.99165800831945, 32.83367010214761, 32.76714427000689, 32.74190452373757, 32.836182373367755, 32.82898006602757, 32.71859347194966, 32.68510029176749, 32.750545829647066, 32.728668565894296, 32.582566076512784, 32.496984268551806, 32.52193289056435, 32.52177691157457, 32.653114698012125, 32.58341422805872, 32.83892408172087, 32.834712621536134, 32.77977568079096, 32.791871919841874, 32.64514917396993, 32.55406869533448, 32.480653266166684, 32.42504426640629, 32.42386303122751, 32.38079159461721, 32.40899772481895, 32.394459920393096, 32.442746099127625, 32.30841855762561, 32.29287711086067, 32.20511630104565, 32.02470972598444, 31.92770333385015, 31.904169430192237, 31.737035831276582, 31.877712018757645, 31.794643070644728, 31.89778894699652, 31.76293009278356, 31.800787310177498, 31.791582207865414, 31.915393239896282, 31.76803342582067, 31.770779982456737, 31.718368680500454, 31.641063663240985, 31.6533563219315, 31.815759376721612, 31.88955970833089, 31.982672230321803, 32.070778253445944, 32.08674369767335, 31.982910216415, 32.159225310004764, 32.182726131073075, 32.156333422318895, 32.100689507134945, 32.04366502123073, 31.959498670820548, 31.82807704276549, 31.793253104937293, 31.768607886945247, 31.838185123903145, 31.928253335950554, 31.918994004103478, 31.87395867289987, 31.91219525492688, 31.95549961521214, 31.931911408679, 32.02652782915029, 31.97932050655409, 31.898188999074453, 31.93287374216517, 31.87763804079177, 31.866727373312212, 31.749594213273035, 31.864670955716427, 31.876207960231127, 31.870539065529247, 31.8914930895402, 31.842245886720015, 32.05164112649764, 32.104622198699715, 32.092785422679704, 32.100438814400434, 31.983574360596773, 32.18738292539105, 32.23415902881844, 32.264123589367344, 32.25658447635687, 32.289135818448486, 32.27944430600902, 32.22796259753015, 32.20348421151549, 32.23245915333943, 32.30932264029757, 32.37531089990006, 32.42497425926221, 32.45528125604369, 32.63594382989624, 32.55741696772754, 32.62084459328383, 32.47712934874842, 32.512922489650954, 32.47095155918194, 32.46156716923205, 32.599006994024144, 32.588300139839475, 32.631923518854535, 32.572338757565305, 32.59887281442856, 32.59310085034188, 32.58363500583363, 32.85835880323749, 32.95271016623954, 32.80410553351944, 32.778699243528074, 32.71339649054631, 32.90755312794637, 32.823162433597496, 32.848759500628404, 32.83773580916821, 32.848990643179576, 32.948486128688984, 32.840818561833444, 32.73342285670502, 32.753318164786684, 32.78773065046294, 32.806007397430285, 32.868399506117456, 32.75558117332974, 32.66665314541, 32.78070135109813, 32.82220068311164, 32.63947321347807, 32.59282257470678, 32.69229828890657, 32.71507520058567, 32.750727086565774, 32.698948361828286, 32.72192195628687, 32.821585162031624, 32.88792286481101, 32.893393378710364, 32.8170272319245, 32.66377511081338, 32.648976358879764, 32.70207626592371, 32.958086790305764, 33.02417597397912, 33.05694001117586, 33.018048271660646, 32.918757782429516, 32.949913380547954, 33.0041611389998, 33.062873439685504, 33.03787244227556, 32.951144298382914, 33.17570190994451, 33.356902330796515, 33.277899896338894, 33.28148217753118, 33.30806669351843, 33.47620887090895, 33.54906502551125, 33.343350174179285, 33.2937825979863, 33.20641780236753, 33.232662720952675, 33.217198221355446, 33.292768553649985, 33.41858707299921, 33.48955955889117, 33.364052911090994, 33.38057218726573, 33.377706663566045, 33.32406425882418, 33.22347990960573, 33.143684808723634, 33.18513816423607, 33.107423608587396, 33.106632075957776, 33.06184655805322, 32.93036973571796, 32.888772224946464, 32.80903403224026, 32.94555106109117, 32.98435469058974, 32.95807018041652, 33.030423608983, 33.05525997202424, 33.04638600616319, 33.01026272682554, 33.038640979271825, 33.123535051796516, 33.25288297166073, 33.15843039485531, 33.284471815863064, 33.15127743688123, 33.05183466366053, 32.994382908635046, 32.845503871338174, 32.939164253725124, 32.992460854186696, 32.979790886821796, 32.97936823070893, 32.79307286069889, 32.669920645984114, 32.80932577764809, 32.719313525142944, 32.713192195204336, 32.546963747899625, 32.57144303665052, 32.46299934176193, 32.33870297811021, 32.27474697213755, 32.220565010623694, 32.130273435866194, 32.26515164967882, 32.307503458180534, 32.233559112538146, 32.24391028321074, 32.27970277452889, 32.17262134052863, 32.209729523642515, 32.26076485669453, 32.268205722233574, 32.27436374023551, 32.325552369801066, 32.48795934237507, 32.49832601961705, 32.68527546273526, 32.671283168852256, 32.70648710779501, 32.650383829257805, 32.65724673659668, 32.564884487714565, 32.72939439535499, 32.63445734008171, 32.63449490366691, 32.74235106637753, 32.73857234035864, 32.76973648297789, 32.89577328675064, 33.025958797986284, 33.22402611979957, 33.09334963613406, 33.144050297677275, 33.22898231977913, 33.22565744224445, 33.24268979929328, 33.055281310390995, 33.09291165409852, 32.995307332060904, 33.07350687563577, 32.856851600431774, 32.89007826243432, 32.85123082498832, 32.926480799764235, 32.78736971732612, 32.86789091502067, 32.956852354179446, 32.89465217648157, 32.99616604333869, 33.19681343460275, 33.344859043289965, 33.343170232177165, 33.532971804328014, 33.62442672036873, 33.602494827773754, 33.45124575297761, 33.5786438131916, 33.82560924583079, 33.84504051042023, 33.836683355217325, 33.81142471632832, 33.89513815376259, 33.887329343971054, 33.850949328422224, 33.89765978074393, 33.761619543525875, 33.80285486528945, 33.86648223673222, 34.06052818317602, 33.94523802175792, 33.908481713384255, 33.864549714985635, 33.89335682139371, 33.93735737412591, 33.839124283582244, 33.86707082643261, 33.93770888338153, 33.95491390379364, 33.99957810566051, 33.920604875128106, 33.851702963596665, 33.73956030084112, 33.683224555928184, 33.65515745172497, 33.73365005794902, 33.72505292047523, 33.7762069870847, 33.853551728841204, 33.86973154352863, 33.734295300056985, 33.77504026018812, 33.69795849694664, 33.63125130241032, 33.880236776363155, 33.942888393687895, 33.88342902383811, 33.89888606946113, 33.75182212732279, 33.72749612223065, 33.641443617788575, 33.59073400818443, 33.48357025136017, 33.52041584946541, 33.51645489306218, 33.77554091282557, 33.82886011885366, 33.87513510910488, 33.87902638345925, 33.861159603269755, 33.8995386579788, 33.71421906447121, 33.78592993534616, 33.71123899105802, 33.913729256404636, 33.86824809261283, 33.827762293501834, 33.87731260990449, 33.86492152661097, 33.91525482288675, 33.82858893038672, 33.817291725463456, 33.79566370409378, 33.79008377297381, 33.763644683428716, 33.87573493359648, 34.008945277350485, 34.0144604836187, 34.00779242003045, 34.03605332637176, 33.78606826970024, 33.736745794348074, 33.54211567224994, 33.613074720528964, 33.694901858818184, 33.54890769959757, 33.51533247792499, 33.42057331927121, 33.43345878614252, 33.49206870066401, 33.42635579375464, 33.439283423294754, 33.342553162055225, 33.35600457981848, 33.36991457689405, 33.238364032476966, 33.38477843483943, 33.37439760893505, 33.35032239407893, 33.33626626958697, 33.44456085998978, 33.296869086336066, 33.28470545915728, 33.181298951577915, 33.0641135576255, 33.10501366129738, 33.18775842572928, 33.19468854721028, 33.32032837620574, 33.27314766562542, 33.19898804547492, 33.2353138098734, 33.09254328888527, 32.90678644277214, 32.781378573978984, 32.79933369117716, 32.879632832724404, 32.8047453962308, 32.73024045678271, 32.5974573909441, 32.65664578242441, 32.69333589337501, 32.63951077726462, 32.56571131907398, 32.51261977442481, 32.62862823179026, 32.74470168529613, 32.58370781323062, 32.658520325184305, 32.69284342062289, 32.71304052300922, 32.763086303697904, 32.94884275507664, 32.971665186368, 32.937174091461536, 32.863933011618606, 32.850031453746425, 32.83011751529396, 32.61830437445837, 32.75245488815094, 32.81849894203757, 32.984828108689875, 32.86980444589178, 32.83943309934042, 32.79908750781547, 32.78376480957561, 32.71358979657072, 32.91705305605453, 32.671247175591205, 32.55083601080522, 32.525008086840764, 32.427630675125386, 32.51005026523808, 32.50307341820484, 32.495441775574626, 32.5424263178082, 32.58012047602434, 32.374548719108205, 32.40903171480532, 32.42206130006648, 32.34796533612795, 32.41816924172076, 32.33714593700359, 32.21451743935892, 31.99940673369285, 31.94716517050631, 31.846818709794125, 31.819859307549823, 31.819120750674067, 31.78031994125145, 31.80807103091394, 31.918764455804247, 31.829197757818452, 31.709256335847744, 31.892108513272614, 31.792961757095817, 31.789057575201287, 31.825212909841017, 31.834300102318505, 31.90546482625373, 31.82643923102912, 31.760974568367768, 31.80454030056743, 31.868934880376173, 31.737658081164213, 31.5476839397562, 31.468584598298268, 31.61636591667999, 31.561088327635485, 31.38371364622123, 31.35417415080769, 31.322056234149862, 31.260014436254608, 31.179939893270173, 31.076901201231593, 31.224803874364, 30.98270760356863, 30.709850669904245, 30.849356858788024, 30.947983843660555, 31.021967839480663, 30.970211636614604, 30.84362977087883, 30.75153729019916, 30.89604627689629, 31.001256256600584, 31.098056017855434, 31.010655537348253, 30.907649183851408, 30.84383552471221, 30.74952004559065, 30.81780980122724, 30.78721029207001, 30.882837172046965, 31.044521380680884, 30.992932540159554, 31.16885563134161, 31.13064895421536, 31.138593571293512, 31.28466020626385, 31.30599184858877, 31.373996132283, 31.454760340653092, 31.34052690609464, 31.579051973125463, 31.687832299182443, 31.818371691892622, 31.788169700754466, 31.682524384269005, 31.58720204307106, 31.677761306883674, 31.719922649471933, 31.858792634771767, 31.997543172930627, 32.001321375075605, 31.998794446222046, 31.95516652552877, 32.03534639933804, 31.98294272051179, 32.04202203515891, 32.00808642421729, 32.08479847926779, 32.06634301785188, 32.15394655141857, 32.02263118040103, 32.130554594127396, 32.14397296204907, 32.05800400653966, 32.16212528900149, 32.3026696322948, 32.322841486268956, 32.24901992599794, 32.23964586807725, 32.11208940498579, 32.101071256083934, 31.990435116417583, 32.028058463331014, 32.06138600280623, 32.088447830712425, 32.04770735630827, 31.89794521256141, 31.844965038841416, 31.996294808717227, 32.0268343904962, 31.84690403278116, 31.918452212267447, 32.08047999719681, 32.067449683774555, 32.139516641560284, 32.099588276106246, 32.005306859580934, 32.12082933133594, 32.08359981613762, 31.931982146441694, 31.94622374165956, 31.681782219252547, 31.664164131016626, 31.725532924536534, 31.69873604464881, 31.685024843196476, 31.774678235186453, 31.836191579567476, 31.641921205818445, 31.63817561210309, 31.648901925606594, 31.714318796255522, 31.917394759121752, 31.810598807159447, 31.873444042857766, 31.68953388278583, 31.598080671111997, 31.76294065868072, 31.672404243769183, 31.696737640956677, 31.50415148206192, 31.556385624529614, 31.63190646119125, 31.494091716349224, 31.606726390849882, 31.5819489189888, 31.563607202718572, 31.371939146825948, 31.31579743298929, 31.623316887114377, 31.57936603515527, 31.79742080970653, 31.64226516225068, 31.636918342135402, 31.637390169770736, 31.534090416995426, 31.484807705088983, 31.56645266390868, 31.452510636612917, 31.20890886708756, 31.11805523003144, 31.28699520885387, 31.410249446221705, 31.44644009716305, 31.49537058010788, 31.55987798471572, 31.577455623797622, 31.532938935886055, 31.56600533743465, 31.613348965148052, 31.658033582713035, 31.70162099741585, 31.616933507101894, 31.94019096128049, 31.90895484683454, 31.99674186910985, 31.908753494087467, 31.93673918279342, 32.039088419436965, 32.00508888436168, 32.07772079102351, 31.980655126691012, 32.046255653574946, 32.09379114193468, 32.03207368306167, 31.96864958499275, 31.935906779579057, 31.834671620501684, 31.79971476205277, 31.779222417083194, 31.68523560462911, 31.69071776688703, 31.808121603263345, 31.867408045827855, 32.008819282199106, 31.942588978596703, 32.09559745393016, 32.106276848797286, 32.411398415458784, 32.46386668055343, 32.37933680561451, 32.390422282405524, 32.34356930922552, 32.57877078165411, 32.60092615955095, 32.459139340747114, 32.359040309781605, 32.362605955734985, 32.46691007485534, 32.41462092541355, 32.374342820577986, 32.218381346460625, 32.35845212611166, 32.469055894587264, 32.41377949722423, 32.30352093941793, 32.323529790325196, 32.283173889544486, 32.24646181756936, 32.38802270779673, 32.312704648818205, 32.397453136852825, 32.41076560103076, 32.37089125037705, 32.58357590071929, 32.61175914307954, 32.709212454241914, 32.74099641915068, 32.730756759724976, 32.673701018661454, 32.568416131332754, 32.320828373707926, 32.0908077069221, 32.01641835892496, 31.93566765500773, 31.894182842647986, 31.923367106361894, 31.92686910614377, 32.037500993221045, 32.134957429935625, 32.08047703963416, 31.954796622233623, 32.04774140322815, 32.09919599075021, 32.015616288633716, 32.008569163926396, 32.06082494141068, 31.981405737547565, 32.12270730327281, 32.24724356874006, 32.40420113519972, 32.39403038401188, 32.32768830249456, 32.34714596503182, 32.356502396651265, 32.40686173534725, 32.285824873773215, 32.30551412065873, 32.47238106083677, 32.485667922166165, 32.494201784732944, 32.433128178572744, 32.35726948061326, 32.42637667499633, 32.29494181978269, 32.306008872683954, 32.22808135550363, 32.354800424894535, 32.40231895925432, 32.39852845014361, 32.46858403964034, 32.46371454293942, 32.63065386509531, 32.509537472498515, 32.49453257792765, 32.442268052315, 32.4673357776307, 32.527146148975575, 32.48188951138043, 32.63203942210837, 32.66905754436134, 32.789815783481856, 32.685089752631626, 32.660109430236446, 32.59483794986351, 32.40044895385483, 32.30140974235864, 32.37569974158818, 32.57580374695753, 32.41104320956495, 32.432587507750355, 32.45105913142095, 32.29148671174689, 32.21840362187338, 32.41309708461673, 32.5078782024977, 32.45780697551092, 32.58203793510969, 32.46597898620521, 32.437866514432805, 32.397143947595765, 32.338104705300736, 32.228309384920315, 32.11637221796413, 32.105888814358025, 32.16129629025404, 32.09201775311964, 32.024561322684605, 31.97833270741057, 31.95718184947011, 31.942355165669163, 32.09946221226562, 32.241840520538396, 32.32587570212773, 32.31356568933342, 32.36328535354177, 32.417310036590465, 32.4090924826952, 32.4782364673908, 32.4086862181745, 32.37318284656919, 32.357167068743486, 32.44654277197274, 32.581847261646864, 32.527475793176144, 32.47552715908841, 32.35597217277857, 32.24708047253105, 32.28796072081206, 32.42073534356486, 32.39014149661066, 32.542747414533764, 32.472412608967055, 32.40909332875115, 32.529967373913685, 32.45665593728773, 32.39922999598671, 32.39059400251375, 32.418706965073035, 32.47648607824845, 32.32214550125976, 32.339416084977444, 32.47496477986654, 32.638892879188425, 32.64654018811831, 32.72961943729394, 32.710828182175185, 32.65849821970989, 32.67167390123009, 32.76349280426113, 32.64529969797721, 32.4907232705854, 32.52770101000318, 32.51659785730565, 32.48596641568246, 32.390703179996535, 32.336565955944074, 32.25586289363427, 32.11144421348072, 32.30678226851301, 32.158667587546574, 32.17518799183713, 32.149475978919625, 32.01108993591958, 31.96617926165111, 31.8588076638188, 31.75085284380676, 31.793940093505007, 31.868981362175465, 31.942148341119246, 31.901643847360116, 31.95355279737154, 31.907986242426816, 32.070583067342646, 32.105234239513095, 32.23860975340796, 32.2349133771473, 32.14339562008807, 32.04397513965942, 31.982260112292558, 32.143046522905365, 32.036113546771375, 32.04551511275067, 32.00303139728457, 31.808695008211735, 31.70478844104531, 31.576944745516553, 31.564904482778953, 31.62015063506457, 31.771243343558243, 31.779097103472825, 31.66408578862918, 31.719406801504146, 31.67780679013873, 31.66202096458434, 31.801578640261265, 31.775440117611193, 31.706353972820875, 31.72386207721936, 31.84366402608457, 31.958724570903662, 31.96670170387084, 31.872845617882792, 31.86349602149384, 31.80502183471872, 31.812333958165446, 31.840752351924625, 31.79173669068727, 31.773212096362, 31.58798156276471, 31.74531065426435, 31.759716169469506, 31.886099869681786, 31.835567938786806, 31.90789914676577, 31.889368355595728, 31.998453638721198, 32.17164317745082, 32.113340807621185, 32.16171834672541, 31.951733548300147, 32.03396057879077, 32.17826169620455, 32.15953533239242, 32.261364916057516, 32.190215380923746, 32.274374329934176, 32.156584016403535, 32.089390948322354, 31.97976289283368, 32.095666091520485, 32.07810715886453, 32.18849306186708, 32.148892813014555, 32.03633825123706, 32.00282257421442, 32.015101041890325, 32.1373641652995, 32.05001882181939, 32.09617464287163, 31.96454110768393, 32.03570729927608, 31.95657038098268, 31.89625286245929, 31.76933549412621, 31.779721913312176, 31.76830218880929, 31.595279020641378, 31.763845661411683, 31.736241920075223, 31.710098864831558, 31.63341803643825, 31.516139566270123, 31.497098586098968, 31.553576953603653, 31.513244286010238, 31.76447258005245, 31.757160112878882, 31.805220346093307, 31.858981823930286, 31.84155864777253, 31.74377989569175, 31.816011736249198, 31.899042290179228, 31.83222209520401, 31.761310759322058, 31.70090294557561, 31.75412894901657, 31.816496965438024, 31.91481531539103, 31.891736667568182, 32.031954547205316, 31.909440686792824, 32.07902600978759, 32.066227959901475, 32.01516094957182, 32.21416668403836, 32.34209445814959, 32.369860425402514, 32.24287149501013, 32.28394012342221, 32.35154648982891, 32.4031784239315, 32.48900079552404, 32.414146329780806, 32.42583862642712, 32.61087918371355, 32.58439608043825, 32.41274450265322, 32.46717198087118, 32.420975376375395, 32.43676450998236, 32.42716647823328, 32.4741277314743, 32.46789011197021, 32.45827649776679, 32.45493856909703, 32.498780954245504, 32.49173279471995, 32.46567171689976, 32.67508193491253, 32.718051733100275, 32.73561035084062, 32.70775276671486, 32.71714082156498, 32.864554666204306, 32.72414210591056, 32.73249946795785, 32.77935167844823, 32.885486686030234, 32.836951016527145, 32.80507264276293, 32.74469561565146, 32.75083763183992, 32.85021096577938, 32.75104729220814, 32.931530174318816, 32.74408974011146, 32.70661753334465, 32.61982977939437, 32.74911553732254, 32.69497541312946, 32.77049744776256, 32.760882150299395, 32.971820082221235, 32.97662868400785, 32.941936873620875, 32.96014449333515, 33.060840736350954, 33.06236393752665, 33.0782669683766, 33.19216272275357, 33.27861361349033, 33.481208925343836, 33.50166216328226, 33.32335367866008, 33.42449793079701, 33.29320363920273, 33.09652244570659, 33.15437927381492, 33.26878116608134, 33.495059131307585, 33.63138128257852, 33.878357595269065, 33.87405841112233, 33.75301454485342, 33.9223342767247, 33.98676539082582, 33.89829677072286, 33.826105438593764, 33.845141422443035, 33.92110545077966, 34.02664497586801, 33.75816772907282, 33.71536711590257, 33.60203583637669, 33.76448871214623, 33.90413416026783, 33.943454386841566, 33.990630366941765, 34.02250413210569, 34.06994497506529, 34.222953790446546, 34.32356954211009, 34.55161888669025, 34.381262371522546, 34.363400560377805, 34.30154476091157, 34.298360995943185, 34.22519022866477, 34.22874817710993, 34.21269019351473, 34.34243949851725, 34.3574312340164, 34.32173213764748, 34.289195193220856, 34.20695243355796, 34.12986806761573, 34.22540982383468, 34.32516381425126, 34.45418439098002, 34.593104617820785, 34.71403421288937, 34.80053479188619, 34.908211736499226, 34.90929722519329, 35.06197369998979, 35.0793715102122, 34.923615479203036, 35.04877133192843, 34.994448526659944, 34.999871466914485, 35.05942619889897, 35.281688622159095, 35.1924947825297, 35.1833541159266, 35.27785476433178, 35.26765223961867, 35.20956392797922, 34.953038477856154, 35.15035335816732, 35.062634296446326, 34.94386701478606, 34.758118740961535, 34.822851583935496, 34.75159695999951, 34.707641332181375, 34.531255303607914, 34.40502889184776, 34.29565514465755, 34.33096247024896, 34.33823110051772, 34.28882291452413, 34.33933469998993, 34.457942254015954, 34.38778964333146, 34.457185872149175, 34.35973505745279, 34.330846059377464, 34.35409450008718, 34.429343732867146, 34.7222689722738, 34.75783668590974, 34.715937471136144, 34.912927193137065, 34.895812873563024, 34.90318149830747, 34.92159239696133, 34.928412813535225, 34.91123842343163, 35.067471726037084, 34.937443159574535, 34.9744995754968, 35.101555441963136, 35.0602643251427, 34.990792333932646, 35.00361918791957, 34.90739678271968, 34.82808512818197, 34.83822494181275, 34.78865380699791, 34.95101874502318, 34.80347218841723, 34.7947790980022, 34.74836004103919, 34.7120334372924, 34.48309001587825, 34.59451596700457, 34.59151541304491, 34.69470447814531, 34.7398246574539, 34.754682358034174, 34.62657885462597, 34.46575398817381, 34.398541296156864, 34.42432652666434, 34.40738744156925, 34.47784387840975, 34.52316184541184, 34.578134155053284, 34.514541878916035, 34.703376890614464, 34.56061303899292, 34.58517137788763, 34.504167325062944, 34.449512734372895, 34.44064560454888, 34.52855432273067, 34.5966109412468, 34.51477180813203, 34.45596701470517, 34.51013121680085, 34.43314250416859, 34.425665604271444, 34.420053565671616, 34.32734430767699, 34.32131369461831, 34.41735369920457, 34.521809690412155, 34.382100517752164, 34.45843853118993, 34.559976713236686, 34.632281536917226, 34.56059691471268, 34.35635007133498, 34.44045175958457, 34.3244869876442, 34.43630735054856, 34.29365504549384, 34.348371043359755, 34.45901911714877, 34.390028369060424, 34.320682656775624, 34.42599673681035, 34.46925860772773, 34.51069182685201, 34.42484366449268, 34.447963059833945, 34.329384251028976, 34.43456779278875, 34.26010091239416, 34.21351475867713, 34.104025923037305, 33.89049753776251, 34.029272810874446, 33.936951722180105, 33.973740889976874, 34.011701692804145, 34.07809333604056, 34.216732563127444, 34.304524028787405, 34.22206829431961, 34.30870298084755, 34.44098288264962, 34.333846186477665, 34.30479732473626, 34.325495850231434, 34.35500108394976, 34.502188720455585, 34.572408461798375, 34.75812237026526, 34.77115631005977, 34.61004447673402, 34.650824479009536, 34.60990376173401, 34.55206661506794, 34.55920770803046, 34.288435569411014, 34.194703101111784, 34.38530204305688, 34.29961809091826, 34.191838675408725, 34.18796426719612, 34.21340171053155, 34.121279077363965, 34.11398852240391, 34.23227906212696, 34.28918735791177, 34.30149885132166, 34.307271028773854, 34.39004352108042, 34.34911005318022, 34.36432596180735, 34.360422582879146, 34.538119109276465, 34.49105538732083, 34.57506291772926, 34.481513058832086, 34.47414360465607, 34.62936869615789, 34.79977724245203, 34.77366506410899, 34.873362546778665, 34.913018971607734, 34.96358237346519, 35.17518744342111, 35.17410748428014, 35.227995536983215, 35.26279905607142, 35.38690101359299, 35.43849851489165, 35.53358496050339, 35.3157451347692, 35.34979933726359, 35.35944586775993, 35.41117699307564, 35.60143510883169, 35.570689511638555, 35.62786599302432, 35.65056655817713, 35.70801038662233, 35.68597843070285, 35.55412930863226, 35.58822687573429, 35.49279201088892, 35.406261833272794, 35.52291939097432, 35.47666308206141, 35.282152221839425, 35.21265166198412, 35.29350272854826, 35.36816577576715, 35.32491040721767, 35.39260556527055, 35.38214684637404, 35.323981282729136, 35.38735926568379, 35.36251955953721, 35.35172693586225 };
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