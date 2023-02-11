/*
 * COUNTERdown.c
 *
 * Code generation for model "COUNTERdown".
 *
 * Model version              : 1.5
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Dec 26 11:51:34 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "COUNTERdown.h"
#include "COUNTERdown_private.h"

/* Block states (auto storage) */
DW_COUNTERdown_T COUNTERdown_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_COUNTERdown_T COUNTERdown_Y;

/* Real-time model */
RT_MODEL_COUNTERdown_T COUNTERdown_M_;
RT_MODEL_COUNTERdown_T *const COUNTERdown_M = &COUNTERdown_M_;

/* Model step function */
void COUNTERdown_step(void)
{
  real_T rtb_UnitDelay1;

  /* UnitDelay: '<Root>/Unit Delay1' */
  rtb_UnitDelay1 = COUNTERdown_DW.UnitDelay1_DSTATE;

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<Root>/Constant4'
   *  Sum: '<Root>/Sub 1'
   *  UnitDelay: '<Root>/Unit Delay2'
   */
  if (rtb_UnitDelay1 >= COUNTERdown_P.Switch1_Threshold) {
    rtb_UnitDelay1 = COUNTERdown_P.Constant4_Value;
  } else {
    rtb_UnitDelay1 += COUNTERdown_DW.UnitDelay2_DSTATE;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* Outport: '<Root>/Out2' */
  COUNTERdown_Y.Out2 = rtb_UnitDelay1;

  /* Update for UnitDelay: '<Root>/Unit Delay1' */
  COUNTERdown_DW.UnitDelay1_DSTATE = rtb_UnitDelay1;

  /* Update for UnitDelay: '<Root>/Unit Delay2' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  COUNTERdown_DW.UnitDelay2_DSTATE = COUNTERdown_P.Constant3_Value;

  /* Matfile logging */
  rt_UpdateTXYLogVars(COUNTERdown_M->rtwLogInfo,
                      (&COUNTERdown_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(COUNTERdown_M)!=-1) &&
        !((rtmGetTFinal(COUNTERdown_M)-COUNTERdown_M->Timing.taskTime0) >
          COUNTERdown_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(COUNTERdown_M, "Simulation finished");
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
  if (!(++COUNTERdown_M->Timing.clockTick0)) {
    ++COUNTERdown_M->Timing.clockTickH0;
  }

  COUNTERdown_M->Timing.taskTime0 = COUNTERdown_M->Timing.clockTick0 *
    COUNTERdown_M->Timing.stepSize0 + COUNTERdown_M->Timing.clockTickH0 *
    COUNTERdown_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void COUNTERdown_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)COUNTERdown_M, 0,
                sizeof(RT_MODEL_COUNTERdown_T));
  rtmSetTFinal(COUNTERdown_M, 10.0);
  COUNTERdown_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    COUNTERdown_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(COUNTERdown_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(COUNTERdown_M->rtwLogInfo, (NULL));
    rtliSetLogT(COUNTERdown_M->rtwLogInfo, "tout");
    rtliSetLogX(COUNTERdown_M->rtwLogInfo, "");
    rtliSetLogXFinal(COUNTERdown_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(COUNTERdown_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(COUNTERdown_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(COUNTERdown_M->rtwLogInfo, 0);
    rtliSetLogDecimation(COUNTERdown_M->rtwLogInfo, 1);
    rtliSetLogY(COUNTERdown_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(COUNTERdown_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(COUNTERdown_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&COUNTERdown_DW, 0,
                sizeof(DW_COUNTERdown_T));

  /* external outputs */
  COUNTERdown_Y.Out2 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(COUNTERdown_M->rtwLogInfo, 0.0, rtmGetTFinal
    (COUNTERdown_M), COUNTERdown_M->Timing.stepSize0, (&rtmGetErrorStatus
    (COUNTERdown_M)));

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay1' */
  COUNTERdown_DW.UnitDelay1_DSTATE = COUNTERdown_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay2' */
  COUNTERdown_DW.UnitDelay2_DSTATE = COUNTERdown_P.UnitDelay2_InitialCondition;
}

/* Model terminate function */
void COUNTERdown_terminate(void)
{
  /* (no terminate code required) */
}
