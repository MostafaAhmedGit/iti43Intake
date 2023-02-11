/*
 * Traffic_Light_Final.h
 *
 * Code generation for model "Traffic_Light_Final".
 *
 * Model version              : 1.4
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Mon Jan 02 11:38:31 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Traffic_Light_Final_h_
#define RTW_HEADER_Traffic_Light_Final_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef Traffic_Light_Final_COMMON_INCLUDES_
# define Traffic_Light_Final_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Traffic_Light_Final_COMMON_INCLUDES_ */

#include "Traffic_Light_Final_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T red;                          /* '<Root>/Chart' */
  real_T green;                        /* '<Root>/Chart' */
  real_T yellow;                       /* '<Root>/Chart' */
} B_Traffic_Light_Final_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFor_;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_d;   /* synthesized block */

  struct {
    void *AQHandles;
  } HiddenToAsyncQueue_InsertedFo_l;   /* synthesized block */

  uint8_T is_active_c3_Traffic_Light_Fina;/* '<Root>/Chart' */
  uint8_T is_c3_Traffic_Light_Final;   /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_Traffic_Light_Final_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
} ExtY_Traffic_Light_Final_T;

/* Real-time Model Data Structure */
struct tag_RTM_Traffic_Light_Final_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (auto storage) */
extern B_Traffic_Light_Final_T Traffic_Light_Final_B;

/* Block states (auto storage) */
extern DW_Traffic_Light_Final_T Traffic_Light_Final_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Traffic_Light_Final_T Traffic_Light_Final_Y;

/* Model entry point functions */
extern void Traffic_Light_Final_initialize(void);
extern void Traffic_Light_Final_step(void);
extern void Traffic_Light_Final_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Traffic_Light_Final_T *const Traffic_Light_Final_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Traffic_Light_Final'
 * '<S1>'   : 'Traffic_Light_Final/Chart'
 */
#endif                                 /* RTW_HEADER_Traffic_Light_Final_h_ */
