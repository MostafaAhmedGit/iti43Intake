/*
 * CounterUp.c
 *
 * Code generation for model "CounterUp".
 *
 * Model version              : 1.3
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Dec 26 11:53:30 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CounterUp.h"
#include "CounterUp_private.h"

/* Block states (auto storage) */
DW_CounterUp_T CounterUp_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_CounterUp_T CounterUp_Y;

/* Real-time model */
RT_MODEL_CounterUp_T CounterUp_M_;
RT_MODEL_CounterUp_T *const CounterUp_M = &CounterUp_M_;

/* Model step function */
void CounterUp_step(void)
{
  real_T rtb_UnitDelay;

  /* UnitDelay: '<Root>/Unit Delay' */
  rtb_UnitDelay = CounterUp_DW.UnitDelay_DSTATE;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Sum: '<Root>/Add'
   *  UnitDelay: '<Root>/Unit Delay1'
   */
  if (rtb_UnitDelay >= CounterUp_P.Switch_Threshold) {
    rtb_UnitDelay = CounterUp_P.Constant_Value;
  } else {
    rtb_UnitDelay += CounterUp_DW.UnitDelay1_DSTATE;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Outport: '<Root>/Out1' */
  CounterUp_Y.Out1 = rtb_UnitDelay;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  CounterUp_DW.UnitDelay_DSTATE = rtb_UnitDelay;

  /* Update for UnitDelay: '<Root>/Unit Delay1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  CounterUp_DW.UnitDelay1_DSTATE = CounterUp_P.Constant1_Value;

  /* Matfile logging */
  rt_UpdateTXYLogVars(CounterUp_M->rtwLogInfo, (&CounterUp_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(CounterUp_M)!=-1) &&
        !((rtmGetTFinal(CounterUp_M)-CounterUp_M->Timing.taskTime0) >
          CounterUp_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(CounterUp_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++CounterUp_M->Timing.clockTick0)) {
    ++CounterUp_M->Timing.clockTickH0;
  }

  CounterUp_M->Timing.taskTime0 = CounterUp_M->Timing.clockTick0 *
    CounterUp_M->Timing.stepSize0 + CounterUp_M->Timing.clockTickH0 *
    CounterUp_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void CounterUp_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)CounterUp_M, 0,
                sizeof(RT_MODEL_CounterUp_T));
  rtmSetTFinal(CounterUp_M, 10.0);
  CounterUp_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    CounterUp_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(CounterUp_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(CounterUp_M->rtwLogInfo, (NULL));
    rtliSetLogT(CounterUp_M->rtwLogInfo, "tout");
    rtliSetLogX(CounterUp_M->rtwLogInfo, "");
    rtliSetLogXFinal(CounterUp_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(CounterUp_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(CounterUp_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(CounterUp_M->rtwLogInfo, 0);
    rtliSetLogDecimation(CounterUp_M->rtwLogInfo, 1);
    rtliSetLogY(CounterUp_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(CounterUp_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(CounterUp_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&CounterUp_DW, 0,
                sizeof(DW_CounterUp_T));

  /* external outputs */
  CounterUp_Y.Out1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(CounterUp_M->rtwLogInfo, 0.0, rtmGetTFinal
    (CounterUp_M), CounterUp_M->Timing.stepSize0, (&rtmGetErrorStatus
    (CounterUp_M)));

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  CounterUp_DW.UnitDelay_DSTATE = CounterUp_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  CounterUp_DW.UnitDelay1_DSTATE = CounterUp_P.UnitDelay1_InitialCondition;
}

/* Model terminate function */
void CounterUp_terminate(void)
{
  /* (no terminate code required) */
}
