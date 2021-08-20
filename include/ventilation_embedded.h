//
// File: ventilation_embedded.h
//
// Code generated for Simulink model 'ventilation_embedded'.
//
// Model version                  : 2.8
// Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
// C/C++ source code generated on : Fri Aug 20 04:26:39 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_ventilation_embedded_h_
#define RTW_HEADER_ventilation_embedded_h_
#include "rtwtypes.h"
#include <stddef.h>
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "zero_crossing_types.h"

// Model Code Variants

// Macros for accessing real-time model data structure
#ifndef DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorInputBus_
#define DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorInputBus_

struct ventilationSetpointGeneratorInputBus
{
  // Temperature measured in the House or Section (absolute). Processed value of multiple physical sensors. 
  real32_T TemperatureMeasured;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationInputBus_
#define DEFINED_TYPEDEF_FOR_ventilationInputBus_

struct ventilationInputBus
{
  ventilationSetpointGeneratorInputBus ventilationSetpointGeneratorInput;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorParamBus_
#define DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorParamBus_

struct ventilationSetpointGeneratorParamBus
{
  // Temperature setpoint for the given House or Section (absolute)
  real32_T TemperatureSetpoint;

  // Temperature relative to the temperature setpoint at which the ventilation setpoint start ramping up proportionally. 
  real32_T TemperatureVentilationStartOffset;

  // Temperature relative to the offset defining the bandwidth of the proportional ramp-up 
  real32_T TemperatureVentilationBandwidth;

  // Minimum ventilation to respect at all times.
  real32_T VentilationMinimum;

  // Maximum ventilation to respect at all times.
  real32_T VentilationMaximum;

  // Setting of the bucket Filter: 0= Off, 1 = Slow, 2 = Normal, 3 = Fast.
  int8_T BucketFilterMode;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_BreakpointBus_
#define DEFINED_TYPEDEF_FOR_BreakpointBus_

struct BreakpointBus
{
  // Table breakpoint X-axis value.
  real32_T X;

  // Table breakpoint hysteresis on X-axis.
  real32_T Hysteresis;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_LineBus_
#define DEFINED_TYPEDEF_FOR_LineBus_

struct LineBus
{
  // Lower breakpoint, see Bus definition.
  BreakpointBus BreakpointLow;

  // VariableFans setpoint at lower breakpoint.
  real32_T VariableFansLow[8];

  // Inlets opening percentage at lower breakpoint.
  real32_T InletsLow[3];

  // Pressure at lower breakpoint.
  real32_T PressureLow;

  // Ventilation capacity at lower breakpoint.
  real32_T VentilationCapacityLow;

  // Modulation percentage OnOffFans at lower breakpoint.
  real32_T ModulationPercentageLow;

  // Butterfly valve opening at low breakpoint.
  real32_T ButterflyValveLow[8];

  // High breakpoint, see Bus definition.
  BreakpointBus BreakpointHigh;

  // VariableFans setpoint at higher breakpoint.
  real32_T VariableFansHigh[8];

  // Inlets opening percentage at higher breakpoint.
  real32_T InletsHigh[3];

  // Pressure at higherbreakpoint.
  real32_T PressureHigh;

  // Ventilation capacity at higher breakpoint.
  real32_T VentilationCapacityHigh;

  // Modulation percentage OnOffFans at higher breakpoint.
  real32_T ModulationPercentageHigh;

  // Butterfly valve opening at higher breakpoint.
  real32_T ButterflyValveHigh[8];

  // OnOffFans control value (0=off, 1=on, 2=modulating).
  int32_T OnOffFans[20];

  // On sequencer delay between switching of the fans.
  int32_T OnSequenceDelay;

  // Identifier of the this mapping table line. 1..32 (used for debugging)
  int32_T LineNumber;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ConfBus_
#define DEFINED_TYPEDEF_FOR_ConfBus_

struct ConfBus
{
  // Maximum allowed step in this mappings table.
  int32_T MaxAllowedStep;

  // Tabel line #1.
  LineBus Line1;

  // Tabel line #2.
  LineBus Line2;

  // Tabel line #3.
  LineBus Line3;

  // Tabel line #4.
  LineBus Line4;

  // Tabel line #5.
  LineBus Line5;

  // Tabel line #6.
  LineBus Line6;

  // Tabel line #7.
  LineBus Line7;

  // Tabel line #8.
  LineBus Line8;

  // Tabel line #9.
  LineBus Line9;

  // Tabel line #10
  LineBus Line10;

  // Tabel line #11.
  LineBus Line11;

  // Tabel line #12.
  LineBus Line12;

  // Tabel line #13.
  LineBus Line13;

  // Tabel line #14.
  LineBus Line14;

  // Tabel line #15.
  LineBus Line15;

  // Tabel line #16.
  LineBus Line16;

  // Tabel line #17.
  LineBus Line17;

  // Tabel line #18.
  LineBus Line18;

  // Tabel line #19.
  LineBus Line19;

  // Tabel line #20.
  LineBus Line20;

  // Tabel line #21.
  LineBus Line21;

  // Tabel line #22.
  LineBus Line22;

  // Tabel line #23.
  LineBus Line23;

  // Tabel line #24.
  LineBus Line24;

  // Tabel line #25.
  LineBus Line25;

  // Tabel line #26.
  LineBus Line26;

  // Tabel line #27.
  LineBus Line27;

  // Tabel line #28.
  LineBus Line28;

  // Tabel line #29.
  LineBus Line29;

  // Tabel line #30.
  LineBus Line30;

  // Tabel line #31.
  LineBus Line31;

  // Tabel line #32.
  LineBus Line32;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_setpointToFanMappingParametersBus_
#define DEFINED_TYPEDEF_FOR_setpointToFanMappingParametersBus_

struct setpointToFanMappingParametersBus
{
  // MT phase mappings table.
  ConfBus MTParameters;

  // Delay when switching to TunnelPhase when all conditions are met.
  int32_T TunnelPhaseSwitchDelay;

  // Tunnel phase mappings table.
  ConfBus TunnelParameters;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ModFanBus_
#define DEFINED_TYPEDEF_FOR_ModFanBus_

struct ModFanBus
{
  // Modulationtype that will be used by the fanscheduler (1 = Optimal modulation calculation; 2 = Linear modulation calculation) 
  int32_T ModulationType;

  // Maximum time for modulation period (Sum On time + Off time)
  real32_T MaxPeriod;

  // Optimal On time that the fanscheduler will try to use for the modulation calculation 
  real32_T OptOnTime;

  // Minimal On time that will be honored by the modulation calculation
  real32_T MinOnTime;

  // Minimal Off time that will be honored by the modulation calculation
  real32_T MinOffTime;

  // Enables modulation of the OnOff fans (0 = OnOffFans do not modulate; 1 = OnOffFans modulation enabled.) 
  int32_T OnOffModulation;

  // Enables low speed modulation of the Variable fans (0 = Variable fan interpolation only; 1 = Variable fan interpolation + low speed modulation) 
  int32_T VarFanModulation;

  // Defines to which fans the modulation of the inlets is linked (0 = Inlets linked to OnOffFans; 1 = Inlets linked to VariableFans) 
  int32_T LinkedInletsType;

  // VariableFan number to which the Inlets are linked, the selected variable fan will control the opening / closing of the inlets (if inlets are linked to variables fans (LinkedInletsType = 1)) 
  int32_T VarLinkedFan;

  // Time needed by the inlets to adapt to a new position before the fans are switched on. 
  real32_T InletsPreRunTimer;

  // Lower limit value of the inlets control signal. Default 0%<"\%.">
  real32_T InletsMinOutput[3];

  // Upper limit value of the linets control signal. Default 100%<"\%.">
  real32_T InletsMaxOutput[3];

  // Offset value of the inlets control signal. Default 0%<"\%">
  real32_T InletOffset[3];

  // Threshold value below which modulation of variable fans is used, if VarFanModulation = 1. 
  real32_T MinVariablePerc;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_FanRotBus_
#define DEFINED_TYPEDEF_FOR_FanRotBus_

struct FanRotBus
{
  // Spare configuration parameter for the fan rotation module.
  int32_T Spare1;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SeqDelBus_
#define DEFINED_TYPEDEF_FOR_SeqDelBus_

struct SeqDelBus
{
  // Timeout for the fan on sequencer to prevent multiple fans switching at once. 
  real32_T SequenceTimeOut;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_fanSchedulerParametersBus_
#define DEFINED_TYPEDEF_FOR_fanSchedulerParametersBus_

struct fanSchedulerParametersBus
{
  // Configuration bus for the modulating fans
  ModFanBus ModulatingFans;

  // Configuration bus for the fan scheduler
  FanRotBus FanRotation;

  // Configuration bus for the onsequence delay
  SeqDelBus OnSequenceDelay;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationParamBus_
#define DEFINED_TYPEDEF_FOR_ventilationParamBus_

struct ventilationParamBus
{
  ventilationSetpointGeneratorParamBus ventilationSetpointGeneratorParam;
  setpointToFanMappingParametersBus setpointToFanMappingParameters;
  fanSchedulerParametersBus fanSchedulerParameters;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorCommandBus_
#define DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorCommandBus_

struct ventilationSetpointGeneratorCommandBus
{
  // Trigger signal, set to either 1 or 0. If set to 1, it will reset the VentilationSetpointGenerator (duration: value should only be applied to one timestep). If set to 0 it will resume normal operations (duration: value should be applied continuously). 
  int8_T ResetVentilationSetpointGenerator;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_setpointToFanMappingCommandBus_
#define DEFINED_TYPEDEF_FOR_setpointToFanMappingCommandBus_

struct setpointToFanMappingCommandBus
{
  // Placeholder for setpoint to fan mapping command (not used yet).
  int8_T CommandSetpointToFanMapping;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_fanSchedulerCommandBus_
#define DEFINED_TYPEDEF_FOR_fanSchedulerCommandBus_

struct fanSchedulerCommandBus
{
  // Placeholder for setpoint to fan mapping command
  int8_T CommandFanScheduler;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationCommandBus_
#define DEFINED_TYPEDEF_FOR_ventilationCommandBus_

struct ventilationCommandBus
{
  ventilationSetpointGeneratorCommandBus ventilationSetpointGeneratorCommand;
  setpointToFanMappingCommandBus setpointToFanMappingCommand;
  fanSchedulerCommandBus fanSchedulerCommand;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_fanSchedulerOutputBus_
#define DEFINED_TYPEDEF_FOR_fanSchedulerOutputBus_

struct fanSchedulerOutputBus
{
  // Output signal for the variable fans.
  real32_T VariableFans[8];

  // Output signal for the inlets.
  real32_T Inlets[3];

  // Output signal for the pressure.
  real32_T Pressure;

  // Output signal for the ventilation capacity.
  real32_T VentilationCapacity;

  // Output signal for the OnOff fans
  int32_T OnOffFans[20];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationOutputBus_
#define DEFINED_TYPEDEF_FOR_ventilationOutputBus_

struct ventilationOutputBus
{
  fanSchedulerOutputBus fanSchedulerOutput;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_InletsBus_
#define DEFINED_TYPEDEF_FOR_InletsBus_

struct InletsBus
{
  // Internal module communication signal to request the inlets to open.
  int32_T yTriggerInletsOpen;

  // Internal module communication signal with the inlets closed state.
  int32_T yTriggerInletsClose;

  // Internal module communication signal with the inlets status.
  int32_T CurrentInletState;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_OnOffFansStateflowBus_
#define DEFINED_TYPEDEF_FOR_OnOffFansStateflowBus_

struct OnOffFansStateflowBus
{
  // Internal module communication signal
  int32_T ControlMode;

  // Internal module communication signal
  int32_T StateChangeEvent;

  // Internal module communication signal
  int32_T FansRemainOn[20];

  // Internal module communication signal
  int32_T InletsStatus;

  // Internal module communication signal
  real32_T ModOnTime;

  // Internal module communication signal
  real32_T ModOffTime;

  // Internal module communication signal
  real32_T TotalPeriod;

  // Internal module communication signal
  int32_T OnOffFans[20];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_VarFansStateFlowBus_
#define DEFINED_TYPEDEF_FOR_VarFansStateFlowBus_

struct VarFansStateFlowBus
{
  // Internal module communication signal
  int32_T ControlMode;

  // Internal module communication signal
  int32_T StateChangeEvent;

  // Internal module communication signal
  int32_T FansRemainOn[8];

  // Internal module communication signal
  int32_T InletsStatus;

  // Internal module communication signal
  real32_T ModOnTime[8];

  // Internal module communication signal
  real32_T ModOffTime[8];

  // Internal module communication signal
  real32_T TotalPeriod[8];

  // Internal module communication signal
  real32_T VariableFans[8];

  // Internal module communication signal
  real32_T MinVariablePerc;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_MTTBus_
#define DEFINED_TYPEDEF_FOR_MTTBus_

struct MTTBus
{
  // Identifier for the active MT table line (1..32)
  int32_T MTState;

  // Identifier for the active Tunnel table line (1..32)
  int32_T TunnelState;

  // Identifier for activated tunnel state (0 = MT phase, 1 = tunnelphase)
  int32_T TunnelActivated;

  // Identifier to signal a table line change. Used by fan scheduler. Only 1 model calculation cycle high 
  int32_T StateChangeEvent;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_setpointToFanMappingOutputBus_
#define DEFINED_TYPEDEF_FOR_setpointToFanMappingOutputBus_

struct setpointToFanMappingOutputBus
{
  // See Bus definition
  MTTBus MTTState;

  // Off (0) /On (1) /Modulation (2) configuration values for all OnOff fans
  int32_T OnOffFans[20];

  // Interpolated values for all variable fans
  real32_T VariableFans[8];

  // Interpolated values for all butterfly valve positions
  real32_T ButterflyValves[8];

  // Interpolated values for all inlet positions
  real32_T Inlets[3];

  // Interpolated value for the estimated pressure
  real32_T Pressure;

  // Interpolated value for estimated ventilation capacity
  real32_T VentilationCapacity;

  // Interpolated modulation value for OnOff fans
  real32_T ModulatingPercentage;

  // Low break point values for all inlets
  real32_T InletsLow[3];

  // High break point values for all inlets
  real32_T InletsHigh[3];

  // Low break point values for all variable fans
  real32_T VariableFansLow[8];

  // High break point values for all variable fans
  real32_T VariableFansHigh[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorOutputBus_
#define DEFINED_TYPEDEF_FOR_ventilationSetpointGeneratorOutputBus_

struct ventilationSetpointGeneratorOutputBus
{
  // Ventilation setpoint towards the ventilation subsystem
  real32_T VentilationSetpoint;

  // Temperature relative to the temperature setpoint at which the ventilation setpoint is at Vmax. 
  real32_T TemperatureVentilationTunnelStartOffset;

  // Maximum ventilation to respect at all times.
  real32_T VentilationMaximum;
};

#endif

extern "C" {
  static real_T rtGetNaN(void);
  static real32_T rtGetNaNF(void);
}                                      // extern "C"
  extern "C"
{
  extern real_T rtInf;
  extern real_T rtMinusInf;
  extern real_T rtNaN;
  extern real32_T rtInfF;
  extern real32_T rtMinusInfF;
  extern real32_T rtNaNF;
  static void rt_InitInfAndNaN(size_t realSize);
  static boolean_T rtIsInf(real_T value);
  static boolean_T rtIsInfF(real32_T value);
  static boolean_T rtIsNaN(real_T value);
  static boolean_T rtIsNaNF(real32_T value);
  struct BigEndianIEEEDouble {
    struct {
      uint32_T wordH;
      uint32_T wordL;
    } words;
  };

  struct LittleEndianIEEEDouble {
    struct {
      uint32_T wordL;
      uint32_T wordH;
    } words;
  };

  struct IEEESingle {
    union {
      real32_T wordLreal;
      uint32_T wordLuint;
    } wordL;
  };
}                                      // extern "C"

extern "C" {
  static real_T rtGetInf(void);
  static real32_T rtGetInfF(void);
  static real_T rtGetMinusInf(void);
  static real32_T rtGetMinusInfF(void);
}                                      // extern "C"
  // Class declaration for model ventilation_embedded
  namespace NS_FANCOM
{
  class FancomVentilationController {
    // public data and function members
   public:
    // Block signals and states (default storage) for system '<S46>/TunnelLine1' 
    struct DW_TunnelLine1 {
      struct {
        uint_T is_c11_setpointtofanmapping_single_state_lib:2;// '<S46>/TunnelLine1' 
        uint_T is_ModulatingPercentage:2;// '<S46>/TunnelLine1'
        uint_T is_InletControl:2;      // '<S46>/TunnelLine1'
        uint_T is_VariableFanControl:2;// '<S46>/TunnelLine1'
        uint_T is_PressureControl:2;   // '<S46>/TunnelLine1'
        uint_T is_CapacityControl:2;   // '<S46>/TunnelLine1'
        uint_T HighReady:1;            // '<S46>/TunnelLine1'
        uint_T LowReady:1;             // '<S46>/TunnelLine1'
      } bitsForTID0;
    };

    // Block signals and states (default storage) for system '<S2>/MTSetpointToFanMapping' 
    struct DW_MTSetpointToFanMapping {
      DW_TunnelLine1 sf_TunnelLine9;   // '<S46>/TunnelLine9'
      DW_TunnelLine1 sf_TunnelLine8;   // '<S46>/TunnelLine8'
      DW_TunnelLine1 sf_TunnelLine7;   // '<S46>/TunnelLine7'
      DW_TunnelLine1 sf_TunnelLine6;   // '<S46>/TunnelLine6'
      DW_TunnelLine1 sf_TunnelLine5;   // '<S46>/TunnelLine5'
      DW_TunnelLine1 sf_TunnelLine4;   // '<S46>/TunnelLine4'
      DW_TunnelLine1 sf_TunnelLine32;  // '<S46>/TunnelLine32'
      DW_TunnelLine1 sf_TunnelLine31;  // '<S46>/TunnelLine31'
      DW_TunnelLine1 sf_TunnelLine30;  // '<S46>/TunnelLine30'
      DW_TunnelLine1 sf_TunnelLine3;   // '<S46>/TunnelLine3'
      DW_TunnelLine1 sf_TunnelLine29;  // '<S46>/TunnelLine29'
      DW_TunnelLine1 sf_TunnelLine28;  // '<S46>/TunnelLine28'
      DW_TunnelLine1 sf_TunnelLine27;  // '<S46>/TunnelLine27'
      DW_TunnelLine1 sf_TunnelLine26;  // '<S46>/TunnelLine26'
      DW_TunnelLine1 sf_TunnelLine25;  // '<S46>/TunnelLine25'
      DW_TunnelLine1 sf_TunnelLine24;  // '<S46>/TunnelLine24'
      DW_TunnelLine1 sf_TunnelLine23;  // '<S46>/TunnelLine23'
      DW_TunnelLine1 sf_TunnelLine22;  // '<S46>/TunnelLine22'
      DW_TunnelLine1 sf_TunnelLine21;  // '<S46>/TunnelLine21'
      DW_TunnelLine1 sf_TunnelLine20;  // '<S46>/TunnelLine20'
      DW_TunnelLine1 sf_TunnelLine2;   // '<S46>/TunnelLine2'
      DW_TunnelLine1 sf_TunnelLine19;  // '<S46>/TunnelLine19'
      DW_TunnelLine1 sf_TunnelLine18;  // '<S46>/TunnelLine18'
      DW_TunnelLine1 sf_TunnelLine17;  // '<S46>/TunnelLine17'
      DW_TunnelLine1 sf_TunnelLine16;  // '<S46>/TunnelLine16'
      DW_TunnelLine1 sf_TunnelLine15;  // '<S46>/TunnelLine15'
      DW_TunnelLine1 sf_TunnelLine14;  // '<S46>/TunnelLine14'
      DW_TunnelLine1 sf_TunnelLine13;  // '<S46>/TunnelLine13'
      DW_TunnelLine1 sf_TunnelLine12;  // '<S46>/TunnelLine12'
      DW_TunnelLine1 sf_TunnelLine11;  // '<S46>/TunnelLine11'
      DW_TunnelLine1 sf_TunnelLine10;  // '<S46>/TunnelLine10'
      DW_TunnelLine1 sf_TunnelLine1;   // '<S46>/TunnelLine1'
      LineBus LineData;                // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_p;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_o;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_g;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_j;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_gb;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_pt;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_c;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_h;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_m;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_a;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_d;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_d1;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_b;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_aa;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_l;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_e;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_n;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_jl;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_ps;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_pl;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_i;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_at;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_at5;            // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_f;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_ms;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_pk;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_k;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_df;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_f0;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_ol;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData_md;             // '<S2>/MTSetpointToFanMapping'
      LineBus LineData1;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData10;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData19;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData2;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData20;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData21;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData22;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData23;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData24;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData25;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData26;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData27;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData11;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData28;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData29;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData3;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData30;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData31;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData32;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData4;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData5;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData6;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData7;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData12;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData8;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData9;               // '<S2>/MTSetpointToFanMapping'
      LineBus LineData13;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData14;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData15;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData16;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData17;              // '<S2>/MTSetpointToFanMapping'
      LineBus LineData18;              // '<S2>/MTSetpointToFanMapping'
      struct {
        uint_T is_c5_setpointtofanmapping_stateflow_lib:6;// '<S2>/MTSetpointToFanMapping' 
        uint_T is_active_c5_setpointtofanmapping_stateflow_lib:1;// '<S2>/MTSetpointToFanMapping' 
      } bitsForTID0;

      boolean_T LineHighReady1;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady10;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady11;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady12;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady13;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady14;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady15;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady16;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady17;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady18;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady19;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady2;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady20;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady21;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady22;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady23;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady24;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady25;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady26;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady27;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady28;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady29;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady3;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady30;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady31;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady32;       // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady4;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady5;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady6;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady7;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady8;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineHighReady9;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady1;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady10;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady11;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady12;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady13;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady14;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady15;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady16;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady17;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady18;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady19;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady2;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady20;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady21;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady22;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady23;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady24;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady25;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady26;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady27;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady28;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady29;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady3;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady30;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady31;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady32;        // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady4;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady5;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady6;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady7;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady8;         // '<S2>/MTSetpointToFanMapping'
      boolean_T LineLowReady9;         // '<S2>/MTSetpointToFanMapping'
    };

    // Block signals and states (default storage) for system '<Root>'
    struct DW {
      DW_MTSetpointToFanMapping sf_TunnelSetpointToFanMapping;// '<S2>/TunnelSetpointToFanMapping' 
      DW_MTSetpointToFanMapping sf_MTSetpointToFanMapping;// '<S2>/MTSetpointToFanMapping' 
      real_T CurrentState[8];      // '<S13>/VarFansModulatingWithoutInletLink'
      real_T OffTime[8];           // '<S13>/VarFansModulatingWithoutInletLink'
      real_T OnTime[8];            // '<S13>/VarFansModulatingWithoutInletLink'
      real_T Delay_DSTATE;             // '<S118>/Delay'
      real_T Delay3_DSTATE;            // '<S123>/Delay3'
      real_T BucketMemory_DSTATE;      // '<S125>/BucketMemory'
      real_T Delay1_DSTATE;            // '<S126>/Delay1'
      real_T Delay_DSTATE_g;           // '<S128>/Delay'
      real_T Ts;                       // '<S45>/SwitchDelay'
      real_T Timer;                    // '<S7>/StepDelayTimer_Stateflow'
      real_T Ts_m;                     // '<S7>/StepDelayTimer_Stateflow'
      real_T Ts_k;                     // '<S6>/InletsModulation'
      real_T Ts_j;                     // '<S13>/VarFansWithModulation'
      real_T CurrentOnOffState;        // '<S13>/VarFansNoModulation'
      real_T Ts_f;                 // '<S13>/VarFansModulatingWithoutInletLink'
      real_T Ts_b;                     // '<S10>/OnOffFansWithModulation'
      real32_T VariableFansHigh[8];    // '<S2>/TunnelSetpointToFanMapping'
      real32_T ButterflyValves[8];     // '<S2>/TunnelSetpointToFanMapping'
      real32_T VariableFans[8];        // '<S2>/TunnelSetpointToFanMapping'
      real32_T Inlets[3];              // '<S2>/TunnelSetpointToFanMapping'
      real32_T InletsLow[3];           // '<S2>/TunnelSetpointToFanMapping'
      real32_T InletsHigh[3];          // '<S2>/TunnelSetpointToFanMapping'
      real32_T VariableFansLow[8];     // '<S2>/TunnelSetpointToFanMapping'
      real32_T VariableFansHigh_m[8];  // '<S2>/MTSetpointToFanMapping'
      real32_T ButterflyValves_o[8];   // '<S2>/MTSetpointToFanMapping'
      real32_T VariableFans_b[8];      // '<S2>/MTSetpointToFanMapping'
      real32_T Inlets_h[3];            // '<S2>/MTSetpointToFanMapping'
      real32_T InletsLow_a[3];         // '<S2>/MTSetpointToFanMapping'
      real32_T InletsHigh_d[3];        // '<S2>/MTSetpointToFanMapping'
      real32_T VariableFansLow_o[8];   // '<S2>/MTSetpointToFanMapping'
      real32_T yVariableFans[8];       // '<S13>/VarFansWithModulation'
      real32_T yVariableFans_l[8];     // '<S13>/VarFansNoModulation'
      real32_T yVariableFans_j[8]; // '<S13>/VarFansModulatingWithoutInletLink'
      real32_T UnitDelay7_DSTATE[8];   // '<S9>/Unit Delay7'
      real32_T TemperatureVentilationTunnelStartOffset;// '<S3>/Minus'
      real32_T Switch2;                // '<S120>/Switch2'
      real32_T Pressure;               // '<S2>/TunnelSetpointToFanMapping'
      real32_T VentilationCapacity;    // '<S2>/TunnelSetpointToFanMapping'
      real32_T ModulatingPercentage;   // '<S2>/TunnelSetpointToFanMapping'
      real32_T Pressure_m;             // '<S2>/MTSetpointToFanMapping'
      real32_T VentilationCapacity_g;  // '<S2>/MTSetpointToFanMapping'
      real32_T ModulatingPercentage_h; // '<S2>/MTSetpointToFanMapping'
      real32_T CurrentTime;            // '<S45>/SwitchDelay'
      real32_T CloseTimer;             // '<S6>/InletsModulation'
      real32_T OpenTimer;              // '<S6>/InletsModulation'
      real32_T ModulationTime;         // '<S13>/VarFansWithModulation'
      real32_T CycleTime;              // '<S13>/VarFansWithModulation'
      real32_T ModulationOnTime;       // '<S10>/OnOffFansWithModulation'
      real32_T TotalCycleOnTime;       // '<S10>/OnOffFansWithModulation'
      real32_T TotalCycleOffTime;      // '<S10>/OnOffFansWithModulation'
      real32_T ModulationOffTime;      // '<S10>/OnOffFansWithModulation'
      int32_T OnOffFans[20];           // '<S2>/TunnelSetpointToFanMapping'
      int32_T OnOffFans_n[20];         // '<S2>/MTSetpointToFanMapping'
      int32_T yOnOffFanCtrl[20];       // '<S7>/StepDelayTimer_Stateflow'
      int32_T yOnOffFanCtrlPrev[20];   // '<S7>/StepDelayTimer_Stateflow'
      int32_T yOnOffFans[20];          // '<S10>/OnOffFansWithModulation'
      int32_T yOnOffFans_o[20];        // '<S10>/OnOffFansNoModulation'
      int32_T UnitDelay8_DSTATE[8];    // '<S9>/Unit Delay8'
      int32_T UnitDelay4_DSTATE[20];   // '<S9>/Unit Delay4'
      int32_T UnitDelay5_DSTATE[20];   // '<S9>/Unit Delay5'
      int32_T MainState;               // '<S2>/TunnelSetpointToFanMapping'
      int32_T MainState_k;             // '<S2>/MTSetpointToFanMapping'
      int32_T yInletsOutputCmd;        // '<S6>/InletsModulation'
      int32_T yInletsOutputStatus;     // '<S6>/InletsModulation'
      int32_T yTriggerInletsOpen;      // '<S13>/VarFansWithModulation'
      int32_T yTriggerInletsClose;     // '<S13>/VarFansWithModulation'
      int32_T yTriggerInletsOpen_n;    // '<S13>/VarFansNoModulation'
      int32_T yTriggerInletsClose_p;   // '<S13>/VarFansNoModulation'
      int32_T yTriggerInletsOpen_j;    // '<S10>/OnOffFansWithModulation'
      int32_T yTriggerInletsClose_k;   // '<S10>/OnOffFansWithModulation'
      int32_T yTriggerInletsOpen_a;    // '<S10>/OnOffFansNoModulation'
      int32_T yTriggerInletsClose_d;   // '<S10>/OnOffFansNoModulation'
      int32_T UnitDelay2_DSTATE;       // '<S45>/Unit Delay2'
      int32_T UnitDelay1_DSTATE;       // '<S45>/Unit Delay1'
      int32_T UnitDelay4_DSTATE_i;     // '<S11>/Unit Delay4'
      int32_T clockTickCounter;        // '<S118>/Pulse Generator'
      int32_T CurrentModulationState;  // '<S13>/VarFansWithModulation'
      int32_T CurrentEnabledState;     // '<S13>/VarFansWithModulation'
      int32_T CurrentModulationState_o;// '<S10>/OnOffFansWithModulation'
      int32_T CurrentOnOffState_h;     // '<S10>/OnOffFansWithModulation'
      int32_T CurrentOnOffState_l;     // '<S10>/OnOffFansNoModulation'
      int32_T CurrentModulationState_g;// '<S10>/OnOffFansNoModulation'
      struct {
        uint_T is_DetectMappingLineChange:3;// '<S6>/InletsModulation'
        uint_T is_FansAreFollowingInletState:3;// '<S13>/VarFansWithModulation'
        uint_T is_FansAreFollowingInletState_f:3;// '<S10>/OnOffFansWithModulation' 
        uint_T is_c1_setpointtofanmapping_lib:2;// '<S45>/SwitchDelay'
        uint_T is_ToMTStateMonitor:2;  // '<S45>/SwitchDelay'
        uint_T is_c8_fanscheduler_lib:2;// '<S7>/StepDelayTimer_Stateflow'
        uint_T is_OnSequencer:2;       // '<S7>/StepDelayTimer_Stateflow'
        uint_T is_InletsMainStateMachine:2;// '<S6>/InletsModulation'
        uint_T is_MainModulationCycleTimer:2;// '<S13>/VarFansWithModulation'
        uint_T is_ModulationTimerWithWaitForInlets:2;// '<S13>/VarFansWithModulation' 
        uint_T is_MainOnMappingChange:2;// '<S13>/VarFansNoModulation'
        uint_T is_WaitForInlets:2;     // '<S13>/VarFansNoModulation'
        uint_T is_SinglePreRunCycleVariableFansWithoutModulation:2;// '<S13>/VarFansNoModulation' 
        uint_T is_MainModulationCycleTimer_f:2;// '<S10>/OnOffFansWithModulation' 
        uint_T is_MainTimerWithTriggerInlets:2;// '<S10>/OnOffFansWithModulation' 
        uint_T is_ModulationTimerWithWaitForInlets_b:2;// '<S10>/OnOffFansWithModulation' 
        uint_T is_MainOnMappingChange_j:2;// '<S10>/OnOffFansNoModulation'
        uint_T is_WaitForInlets_j:2;   // '<S10>/OnOffFansNoModulation'
        uint_T is_SinglePreRunCycleOnOffFansWithoutModulation:2;// '<S10>/OnOffFansNoModulation' 
        uint_T is_active_c1_setpointtofanmapping_lib:1;// '<S45>/SwitchDelay'
        uint_T is_active_c8_fanscheduler_lib:1;// '<S7>/StepDelayTimer_Stateflow' 
        uint_T is_active_c4_fanscheduler_lib:1;// '<S6>/InletsModulation'
        uint_T is_active_c15_fanscheduler_lib:1;// '<S13>/VarFansWithModulation' 
        uint_T is_active_c22_fanscheduler_lib:1;// '<S13>/VarFansNoModulation'
        uint_T is_active_c5_fanscheduler_lib:1;
                                   // '<S13>/VarFansModulatingWithoutInletLink'
        uint_T is_active_c12_fanscheduler_lib:1;// '<S10>/OnOffFansWithModulation' 
        uint_T is_active_c11_fanscheduler_lib:1;// '<S10>/OnOffFansNoModulation' 
        uint_T is_active_c16_fanscheduler_lib:1;// '<S8>/SF_LinkedVarFanModulates' 
        uint_T is_active_c17_fanscheduler_lib:1;// '<S8>/SF_CtrlMode'
        uint_T is_active_c18_fanscheduler_lib:1;// '<S8>/SF_AtLeastOneOnOffFanModulates' 
      } bitsForTID0;

      int16_T Delay2_DSTATE;           // '<S123>/Delay2'
      int8_T TunnelPhaseCommand;       // '<S45>/SwitchDelay'
      int8_T UnitDelay3_DSTATE;        // '<S45>/Unit Delay3'
      int8_T Delay_DSTATE_c;           // '<S122>/Delay'
    };

    // Zero-crossing (trigger) state
    struct PrevZCX {
      ZCSigState BucketDampingDiscrete_Trig_ZCE;// '<S118>/BucketDampingDiscrete' 
    };

    // Invariant block signals (default storage)
    struct ConstB {
      real_T MaxSamples;               // '<S130>/Divide3'
      real_T MaxSamples_o;             // '<S131>/Divide3'
      real_T MaxSamples_m;             // '<S132>/Divide3'
      real_T MaxSamples_i;             // '<S133>/Divide3'
      real_T MaxSamples_f;             // '<S134>/Divide3'
    };

    // Constant parameters (default storage)
    struct ConstP {
      // Pooled Parameter (Expression: )
      //  Referenced by:
      //    '<S37>/1-D Lookup Table'
      //    '<S38>/1-D Lookup Table'
      //    '<S39>/1-D Lookup Table'

      int32_T pooled13[2];
    };

    // External inputs (root inport signals with default storage)
    struct ExtU {
      ventilationInputBus ventilationInput;// '<Root>/ventilationInput'
      ventilationParamBus ventilationParam;// '<Root>/ventilationParam'
      ventilationCommandBus ventilationCommand;// '<Root>/ventilationCommand'
    };

    // External outputs (root outports fed by signals with default storage)
    struct ExtY {
      ventilationOutputBus ventilationOutput;// '<Root>/ventilationOutput'
    };

    // External inputs
    ExtU rtU;

    // External outputs
    ExtY rtY;

    // model initialize function
    void initialize();

    // model step function
    void step();

    // Constructor
    FancomVentilationController();

    // Destructor
    ~FancomVentilationController();

    // private data and function members
   private:
    // Block signals and states
    DW rtDW;
    PrevZCX rtPrevZCX;                 // Triggered events

    // private member function(s) for subsystem '<S46>/TunnelLine1'
    real32_T interp1(const real32_T varargin_1[2], const real32_T varargin_2[2],
                     real32_T varargin_3);
    void exit_internal_ActiveState(DW_TunnelLine1 *localDW);
    void TableLine_during(const LineBus *LineData, boolean_T *HighReady,
                          real32_T Setpoint, int32_T OnOffFans[20], real32_T
                          VariableFans[8], real32_T Inlets[3], real32_T
                          *Pressure, real32_T *VentilationCapacity, real32_T
                          *ModulatingPercentage, boolean_T *LowReady, int32_T
                          MaxLineAllowed, real32_T InletsLow[3], real32_T
                          InletsHigh[3], real32_T VariableFansLow[8], real32_T
                          VariableFansHigh[8], DW_TunnelLine1 *localDW);
    void TableLine_enter(const LineBus *LineData, boolean_T *HighReady, int32_T *
                         ActiveState, real32_T Setpoint, int32_T OnOffFans[20],
                         real32_T VariableFans[8], real32_T Inlets[3], real32_T *
                         Pressure, real32_T *VentilationCapacity, real32_T
                         *ModulatingPercentage, boolean_T *LowReady, real32_T
                         InletsLow[3], real32_T InletsHigh[3], real32_T
                         VariableFansLow[8], real32_T VariableFansHigh[8],
                         real32_T ButterflyValves[8], DW_TunnelLine1 *localDW);
    void TableLine_exit(DW_TunnelLine1 *localDW);
    void TableLine_init(DW_TunnelLine1 *localDW);

    // private member function(s) for subsystem '<S2>/MTSetpointToFanMapping'
    void MTSetpointToFanMapping_Init(real32_T rtu_Setpoint, int32_T
      rtu_MaxLineAllowed, int32_T *rty_MainState, int32_T rty_OnOffFans[20],
      real32_T rty_VariableFans[8], real32_T rty_ButterflyValves[8], real32_T
      rty_Inlets[3], real32_T *rty_Pressure, real32_T *rty_VentilationCapacity,
      real32_T *rty_ModulatingPercentage, real32_T rty_InletsLow[3], real32_T
      rty_InletsHigh[3], real32_T rty_VariableFansLow[8], real32_T
      rty_VariableFansHigh[8], DW_MTSetpointToFanMapping *localDW);
    void MTSetpointToFanMapping(real32_T rtu_Setpoint, int32_T
      rtu_MaxLineAllowed, const ConfBus *rtu_Conf, int32_T *rty_MainState,
      int32_T rty_OnOffFans[20], real32_T rty_VariableFans[8], real32_T
      rty_ButterflyValves[8], real32_T rty_Inlets[3], real32_T *rty_Pressure,
      real32_T *rty_VentilationCapacity, real32_T *rty_ModulatingPercentage,
      real32_T rty_InletsLow[3], real32_T rty_InletsHigh[3], real32_T
      rty_VariableFansLow[8], real32_T rty_VariableFansHigh[8],
      DW_MTSetpointToFanMapping *localDW);
    void ErrorHigh(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                   *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                   rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                   real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                   *rty_VentilationCapacity, real32_T *rty_ModulatingPercentage,
                   real32_T rty_InletsLow[3], real32_T rty_InletsHigh[3],
                   real32_T rty_VariableFansLow[8], real32_T
                   rty_VariableFansHigh[8], DW_MTSetpointToFanMapping *localDW);
    void ErrorLow(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                  *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                  rty_VariableFans[8], real32_T rty_ButterflyValves[8], real32_T
                  rty_Inlets[3], real32_T *rty_Pressure, real32_T
                  *rty_VentilationCapacity, real32_T *rty_ModulatingPercentage,
                  real32_T rty_InletsLow[3], real32_T rty_InletsHigh[3],
                  real32_T rty_VariableFansLow[8], real32_T
                  rty_VariableFansHigh[8], DW_MTSetpointToFanMapping *localDW);
    void TunnelLine1_m(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed,
                       int32_T *rty_MainState, int32_T rty_OnOffFans[20],
                       real32_T rty_VariableFans[8], real32_T
                       rty_ButterflyValves[8], real32_T rty_Inlets[3], real32_T *
                       rty_Pressure, real32_T *rty_VentilationCapacity, real32_T
                       *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                       real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow
                       [8], real32_T rty_VariableFansHigh[8],
                       DW_MTSetpointToFanMapping *localDW);
    void TunnelLine10(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine11(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine12(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine13(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine14(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine15(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine16(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine17(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine18(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine19(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine2(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine20(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine21(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine22(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine23(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine24(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine25(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine26(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine27(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine28(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine29(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine3(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine30(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine31(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine32(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T
                      *rty_MainState, int32_T rty_OnOffFans[20], real32_T
                      rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                      real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                      *rty_VentilationCapacity, real32_T
                      *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                      real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                      real32_T rty_VariableFansHigh[8],
                      DW_MTSetpointToFanMapping *localDW);
    void TunnelLine4(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine5(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine6(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine7(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void TunnelLine8(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
    void enter_internal_c5_setpointtofanmapping_stateflow_lib(real32_T
      rtu_Setpoint, int32_T rtu_MaxLineAllowed, const ConfBus *rtu_Conf, int32_T
      *rty_MainState, int32_T rty_OnOffFans[20], real32_T rty_VariableFans[8],
      real32_T rty_ButterflyValves[8], real32_T rty_Inlets[3], real32_T
      *rty_Pressure, real32_T *rty_VentilationCapacity, real32_T
      *rty_ModulatingPercentage, real32_T rty_InletsLow[3], real32_T
      rty_InletsHigh[3], real32_T rty_VariableFansLow[8], real32_T
      rty_VariableFansHigh[8], DW_MTSetpointToFanMapping *localDW);
    void TunnelLine9(real32_T rtu_Setpoint, int32_T rtu_MaxLineAllowed, int32_T *
                     rty_MainState, int32_T rty_OnOffFans[20], real32_T
                     rty_VariableFans[8], real32_T rty_ButterflyValves[8],
                     real32_T rty_Inlets[3], real32_T *rty_Pressure, real32_T
                     *rty_VentilationCapacity, real32_T
                     *rty_ModulatingPercentage, real32_T rty_InletsLow[3],
                     real32_T rty_InletsHigh[3], real32_T rty_VariableFansLow[8],
                     real32_T rty_VariableFansHigh[8], DW_MTSetpointToFanMapping
                     *localDW);
  };
}

extern const NS_FANCOM::FancomVentilationController::ConstB rtConstB;// constant block i/o 

// Constant parameters (default storage)
extern const NS_FANCOM::FancomVentilationController::ConstP rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S41>/Data Type Duplicate' : Unused code path elimination
//  Block '<S41>/Data Type Propagation' : Unused code path elimination
//  Block '<S42>/Data Type Duplicate' : Unused code path elimination
//  Block '<S42>/Data Type Propagation' : Unused code path elimination
//  Block '<S43>/Data Type Duplicate' : Unused code path elimination
//  Block '<S43>/Data Type Propagation' : Unused code path elimination
//  Block '<S2>/Constant' : Unused code path elimination
//  Block '<S2>/Constant1' : Unused code path elimination
//  Block '<S2>/Constant2' : Unused code path elimination
//  Block '<S2>/Constant3' : Unused code path elimination
//  Block '<S123>/Scope' : Unused code path elimination
//  Block '<S123>/Scope6' : Unused code path elimination
//  Block '<S123>/Scope7' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'ventilation_embedded'
//  '<S1>'   : 'ventilation_embedded/FanScheduler'
//  '<S2>'   : 'ventilation_embedded/SetpointToFanMapping'
//  '<S3>'   : 'ventilation_embedded/VentilationSetpointGenerator'
//  '<S4>'   : 'ventilation_embedded/FanScheduler/FanRotation'
//  '<S5>'   : 'ventilation_embedded/FanScheduler/ModulatingFans'
//  '<S6>'   : 'ventilation_embedded/FanScheduler/ModulatingInlets'
//  '<S7>'   : 'ventilation_embedded/FanScheduler/OnSequenceDelay'
//  '<S8>'   : 'ventilation_embedded/FanScheduler/ModulatingFans/ControlModeCalculation'
//  '<S9>'   : 'ventilation_embedded/FanScheduler/ModulatingFans/DetectOnRemainingFans'
//  '<S10>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansAndInletScheduler'
//  '<S11>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansParameterCalculation'
//  '<S12>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OutputToInlets'
//  '<S13>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansAndInletScheduler'
//  '<S14>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation'
//  '<S15>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/ControlModeCalculation/SF_AtLeastOneOnOffFanModulates'
//  '<S16>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/ControlModeCalculation/SF_CtrlMode'
//  '<S17>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/ControlModeCalculation/SF_LinkedVarFanModulates'
//  '<S18>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/DetectOnRemainingFans/Compare To Constant3'
//  '<S19>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/DetectOnRemainingFans/Compare To Constant4'
//  '<S20>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/DetectOnRemainingFans/Compare To Constant5'
//  '<S21>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/DetectOnRemainingFans/Compare To Constant6'
//  '<S22>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansAndInletScheduler/OnOffFansNoModulation'
//  '<S23>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansAndInletScheduler/OnOffFansWithModulation'
//  '<S24>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansParameterCalculation/DigitalModulation'
//  '<S25>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansParameterCalculation/DigitalModulation/ModulationToTimes'
//  '<S26>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansParameterCalculation/DigitalModulation/ModulationToTimes/MATLAB Function'
//  '<S27>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/OnOffFansParameterCalculation/DigitalModulation/ModulationToTimes/MATLAB Function1'
//  '<S28>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansAndInletScheduler/MATLAB Function'
//  '<S29>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansAndInletScheduler/VarFansModulatingWithoutInletLink'
//  '<S30>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansAndInletScheduler/VarFansNoModulation'
//  '<S31>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansAndInletScheduler/VarFansWithModulation'
//  '<S32>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation/AnalogModulation'
//  '<S33>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation/AnalogModulation/For Each Subsystem'
//  '<S34>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation/AnalogModulation/For Each Subsystem/ModulationToTimes'
//  '<S35>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation/AnalogModulation/For Each Subsystem/ModulationToTimes/MATLAB Function'
//  '<S36>'  : 'ventilation_embedded/FanScheduler/ModulatingFans/VarFansParameterCalculation/AnalogModulation/For Each Subsystem/ModulationToTimes/MATLAB Function1'
//  '<S37>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand1'
//  '<S38>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand2'
//  '<S39>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand3'
//  '<S40>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/InletsModulation'
//  '<S41>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand1/Saturation Dynamic'
//  '<S42>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand2/Saturation Dynamic'
//  '<S43>'  : 'ventilation_embedded/FanScheduler/ModulatingInlets/DetermineInletCommand3/Saturation Dynamic'
//  '<S44>'  : 'ventilation_embedded/FanScheduler/OnSequenceDelay/StepDelayTimer_Stateflow'
//  '<S45>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch'
//  '<S46>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping'
//  '<S47>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping'
//  '<S48>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/Compare To Constant2'
//  '<S49>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/Compare To Constant3'
//  '<S50>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/Compare To Constant4'
//  '<S51>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/Compare To Constant5'
//  '<S52>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/Compare To Constant6'
//  '<S53>'  : 'ventilation_embedded/SetpointToFanMapping/MTOrTunnelSwitch/SwitchDelay'
//  '<S54>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine1'
//  '<S55>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine10'
//  '<S56>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine11'
//  '<S57>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine12'
//  '<S58>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine13'
//  '<S59>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine14'
//  '<S60>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine15'
//  '<S61>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine16'
//  '<S62>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine17'
//  '<S63>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine18'
//  '<S64>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine19'
//  '<S65>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine2'
//  '<S66>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine20'
//  '<S67>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine21'
//  '<S68>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine22'
//  '<S69>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine23'
//  '<S70>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine24'
//  '<S71>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine25'
//  '<S72>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine26'
//  '<S73>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine27'
//  '<S74>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine28'
//  '<S75>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine29'
//  '<S76>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine3'
//  '<S77>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine30'
//  '<S78>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine31'
//  '<S79>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine32'
//  '<S80>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine4'
//  '<S81>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine5'
//  '<S82>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine6'
//  '<S83>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine7'
//  '<S84>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine8'
//  '<S85>'  : 'ventilation_embedded/SetpointToFanMapping/MTSetpointToFanMapping/TunnelLine9'
//  '<S86>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine1'
//  '<S87>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine10'
//  '<S88>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine11'
//  '<S89>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine12'
//  '<S90>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine13'
//  '<S91>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine14'
//  '<S92>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine15'
//  '<S93>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine16'
//  '<S94>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine17'
//  '<S95>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine18'
//  '<S96>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine19'
//  '<S97>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine2'
//  '<S98>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine20'
//  '<S99>'  : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine21'
//  '<S100>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine22'
//  '<S101>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine23'
//  '<S102>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine24'
//  '<S103>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine25'
//  '<S104>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine26'
//  '<S105>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine27'
//  '<S106>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine28'
//  '<S107>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine29'
//  '<S108>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine3'
//  '<S109>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine30'
//  '<S110>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine31'
//  '<S111>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine32'
//  '<S112>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine4'
//  '<S113>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine5'
//  '<S114>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine6'
//  '<S115>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine7'
//  '<S116>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine8'
//  '<S117>' : 'ventilation_embedded/SetpointToFanMapping/TunnelSetpointToFanMapping/TunnelLine9'
//  '<S118>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete'
//  '<S119>' : 'ventilation_embedded/VentilationSetpointGenerator/Compare To Constant'
//  '<S120>' : 'ventilation_embedded/VentilationSetpointGenerator/Saturation3'
//  '<S121>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete'
//  '<S122>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/Memory'
//  '<S123>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete'
//  '<S124>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem'
//  '<S125>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete/Bucket'
//  '<S126>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete/Counter'
//  '<S127>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete/Filter'
//  '<S128>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete/Memory'
//  '<S129>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/BucketDampingDiscrete/Bucket/Compare To Constant'
//  '<S130>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem/Subsystem1'
//  '<S131>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem/Subsystem2'
//  '<S132>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem/Subsystem3'
//  '<S133>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem/Subsystem4'
//  '<S134>' : 'ventilation_embedded/VentilationSetpointGenerator/BucketDampingDiscrete/BucketDampingDiscrete/Subsystem/Subsystem5'

#endif                                 // RTW_HEADER_ventilation_embedded_h_

//
// File trailer for generated code.
//
// [EOF]
//
