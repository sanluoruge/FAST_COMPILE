/*
 * CFDLMFAC.c
 *
 * Code generation for model "CFDLMFAC".
 *
 * Model version              : 1.105
 * Simulink Coder version : 9.0 (R2018b) 24-May-2018
 * C source code generated on : Thu Feb 25 07:41:00 2021
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "CFDLMFAC_capi.h"
#include "CFDLMFAC.h"
#include "CFDLMFAC_private.h"

/* Block signals (default storage) */
B_CFDLMFAC_T CFDLMFAC_B;

/* Block states (default storage) */
DW_CFDLMFAC_T CFDLMFAC_DW;

/* Real-time model */
RT_MODEL_CFDLMFAC_T CFDLMFAC_M_;
RT_MODEL_CFDLMFAC_T *const CFDLMFAC_M = &CFDLMFAC_M_;

/* Model output function */
static void CFDLMFAC_output(void)
{
  /* S-Function (FAST_SFunc): '<S2>/S-Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/High-Speed Shaft Braking Fraction'
   *  Constant: '<S5>/Electrical Power'
   *  Constant: '<S5>/Generator Torque'
   *  Constant: '<S6>/Yaw Position'
   *  Constant: '<S6>/Yaw rate'
   */

  /* Level2 S-Function Block: '<S2>/S-Function' (FAST_SFunc) */
  {
    SimStruct *rts = CFDLMFAC_M->childSfunctions[0];
    sfcnOutputs(rts,1);
  }

  /* Fcn: '<Root>/power' */
  CFDLMFAC_B.power = CFDLMFAC_B.SFunction[37];

  /* Fcn: '<Root>/Pitch' */
  CFDLMFAC_B.Pitch = CFDLMFAC_B.SFunction[7];

  /* Fcn: '<Root>/wind speed' */
  CFDLMFAC_B.windspeed = CFDLMFAC_B.SFunction[1];

  /* Fcn: '<Root>/Generator speed' */
  CFDLMFAC_B.Generatorspeed = CFDLMFAC_B.SFunction[10];

  /* S-Function (scblock): '<S4>/S-Function' */
  /* ok to acquire for <S4>/S-Function */
  CFDLMFAC_DW.SFunction_IWORK.AcquireOK = 1;

  /* Clock: '<Root>/Clock' */
  CFDLMFAC_B.Clock = CFDLMFAC_M->Timing.t[0];
}

/* Model update function */
static void CFDLMFAC_update(void)
{
  /* Update for S-Function (FAST_SFunc): '<S2>/S-Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/High-Speed Shaft Braking Fraction'
   *  Constant: '<S5>/Electrical Power'
   *  Constant: '<S5>/Generator Torque'
   *  Constant: '<S6>/Yaw Position'
   *  Constant: '<S6>/Yaw rate'
   */
  /* Level2 S-Function Block: '<S2>/S-Function' (FAST_SFunc) */
  {
    SimStruct *rts = CFDLMFAC_M->childSfunctions[0];
    sfcnUpdate(rts,1);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
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
  if (!(++CFDLMFAC_M->Timing.clockTick0)) {
    ++CFDLMFAC_M->Timing.clockTickH0;
  }

  CFDLMFAC_M->Timing.t[0] = CFDLMFAC_M->Timing.clockTick0 *
    CFDLMFAC_M->Timing.stepSize0 + CFDLMFAC_M->Timing.clockTickH0 *
    CFDLMFAC_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.00625s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++CFDLMFAC_M->Timing.clockTick1)) {
      ++CFDLMFAC_M->Timing.clockTickH1;
    }

    CFDLMFAC_M->Timing.t[1] = CFDLMFAC_M->Timing.clockTick1 *
      CFDLMFAC_M->Timing.stepSize1 + CFDLMFAC_M->Timing.clockTickH1 *
      CFDLMFAC_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void CFDLMFAC_initialize(void)
{
  /* Start for S-Function (FAST_SFunc): '<S2>/S-Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/High-Speed Shaft Braking Fraction'
   *  Constant: '<S5>/Electrical Power'
   *  Constant: '<S5>/Generator Torque'
   *  Constant: '<S6>/Yaw Position'
   *  Constant: '<S6>/Yaw rate'
   */
  /* Level2 S-Function Block: '<S2>/S-Function' (FAST_SFunc) */
  {
    SimStruct *rts = CFDLMFAC_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scblock): '<S4>/S-Function' */

  /* S-Function Block: <S4>/S-Function (scblock) */
  {
    int i;
    if ((i = rl32eScopeExists(1)) == 0) {
      if ((i = rl32eDefScope(1,2)) != 0) {
        printf("Error creating scope 1\n");
      } else {
        rl32eAddSignal(1, rl32eGetSignalNo("power"));
        rl32eSetScope(1, 4, 250);
        rl32eSetScope(1, 5, 0);
        rl32eSetScope(1, 6, 1);
        rl32eSetScope(1, 0, 0);
        rl32eSetScope(1, 3, rl32eGetSignalNo("power"));
        rl32eSetScope(1, 1, 0.0);
        rl32eSetScope(1, 2, 0);
        rl32eSetScope(1, 9, 0);
        rl32eSetTargetScope(1, 11, 0.0);
        rl32eSetTargetScope(1, 10, 0.0);
        xpceScopeAcqOK(1, &CFDLMFAC_DW.SFunction_IWORK.AcquireOK);
      }
    }

    if (i) {
      rl32eRestartAcquisition(1);
    }
  }
}

/* Model terminate function */
static void CFDLMFAC_terminate(void)
{
  /* Terminate for S-Function (FAST_SFunc): '<S2>/S-Function' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S3>/High-Speed Shaft Braking Fraction'
   *  Constant: '<S5>/Electrical Power'
   *  Constant: '<S5>/Generator Torque'
   *  Constant: '<S6>/Yaw Position'
   *  Constant: '<S6>/Yaw rate'
   */
  /* Level2 S-Function Block: '<S2>/S-Function' (FAST_SFunc) */
  {
    SimStruct *rts = CFDLMFAC_M->childSfunctions[0];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  CFDLMFAC_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  CFDLMFAC_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  CFDLMFAC_initialize();
}

void MdlTerminate(void)
{
  CFDLMFAC_terminate();
}

/* Registration function */
RT_MODEL_CFDLMFAC_T *CFDLMFAC(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)CFDLMFAC_M, 0,
                sizeof(RT_MODEL_CFDLMFAC_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&CFDLMFAC_M->solverInfo,
                          &CFDLMFAC_M->Timing.simTimeStep);
    rtsiSetTPtr(&CFDLMFAC_M->solverInfo, &rtmGetTPtr(CFDLMFAC_M));
    rtsiSetStepSizePtr(&CFDLMFAC_M->solverInfo, &CFDLMFAC_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&CFDLMFAC_M->solverInfo, (&rtmGetErrorStatus
      (CFDLMFAC_M)));
    rtsiSetRTModelPtr(&CFDLMFAC_M->solverInfo, CFDLMFAC_M);
  }

  rtsiSetSimTimeStep(&CFDLMFAC_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&CFDLMFAC_M->solverInfo,"FixedStepDiscrete");
  CFDLMFAC_M->solverInfoPtr = (&CFDLMFAC_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = CFDLMFAC_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    CFDLMFAC_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    CFDLMFAC_M->Timing.sampleTimes = (&CFDLMFAC_M->Timing.sampleTimesArray[0]);
    CFDLMFAC_M->Timing.offsetTimes = (&CFDLMFAC_M->Timing.offsetTimesArray[0]);

    /* task periods */
    CFDLMFAC_M->Timing.sampleTimes[0] = (0.0);
    CFDLMFAC_M->Timing.sampleTimes[1] = (0.00625);

    /* task offsets */
    CFDLMFAC_M->Timing.offsetTimes[0] = (0.0);
    CFDLMFAC_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(CFDLMFAC_M, &CFDLMFAC_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = CFDLMFAC_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    CFDLMFAC_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(CFDLMFAC_M, 30.0);
  CFDLMFAC_M->Timing.stepSize0 = 0.00625;
  CFDLMFAC_M->Timing.stepSize1 = 0.00625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    CFDLMFAC_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(CFDLMFAC_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(CFDLMFAC_M->rtwLogInfo, (NULL));
    rtliSetLogT(CFDLMFAC_M->rtwLogInfo, "tout");
    rtliSetLogX(CFDLMFAC_M->rtwLogInfo, "");
    rtliSetLogXFinal(CFDLMFAC_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(CFDLMFAC_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(CFDLMFAC_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(CFDLMFAC_M->rtwLogInfo, 0);
    rtliSetLogDecimation(CFDLMFAC_M->rtwLogInfo, 1);
    rtliSetLogY(CFDLMFAC_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(CFDLMFAC_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(CFDLMFAC_M->rtwLogInfo, (NULL));
  }

  CFDLMFAC_M->solverInfoPtr = (&CFDLMFAC_M->solverInfo);
  CFDLMFAC_M->Timing.stepSize = (0.00625);
  rtsiSetFixedStepSize(&CFDLMFAC_M->solverInfo, 0.00625);
  rtsiSetSolverMode(&CFDLMFAC_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  CFDLMFAC_M->blockIO = ((void *) &CFDLMFAC_B);
  (void) memset(((void *) &CFDLMFAC_B), 0,
                sizeof(B_CFDLMFAC_T));

  /* states (dwork) */
  CFDLMFAC_M->dwork = ((void *) &CFDLMFAC_DW);
  (void) memset((void *)&CFDLMFAC_DW, 0,
                sizeof(DW_CFDLMFAC_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  CFDLMFAC_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &CFDLMFAC_M->NonInlinedSFcns.sfcnInfo;
    CFDLMFAC_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(CFDLMFAC_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &CFDLMFAC_M->Sizes.numSampTimes);
    CFDLMFAC_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr(CFDLMFAC_M)[0]);
    CFDLMFAC_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr(CFDLMFAC_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,CFDLMFAC_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(CFDLMFAC_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(CFDLMFAC_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput(CFDLMFAC_M));
    rtssSetStepSizePtr(sfcnInfo, &CFDLMFAC_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(CFDLMFAC_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo, &CFDLMFAC_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &CFDLMFAC_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &CFDLMFAC_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &CFDLMFAC_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo, &CFDLMFAC_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &CFDLMFAC_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &CFDLMFAC_M->solverInfoPtr);
  }

  CFDLMFAC_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) memset((void *)&CFDLMFAC_M->NonInlinedSFcns.childSFunctions[0], 0,
                  1*sizeof(SimStruct));
    CFDLMFAC_M->childSfunctions =
      (&CFDLMFAC_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    CFDLMFAC_M->childSfunctions[0] =
      (&CFDLMFAC_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: CFDLMFAC/<S2>/S-Function (FAST_SFunc) */
    {
      SimStruct *rts = CFDLMFAC_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = CFDLMFAC_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = CFDLMFAC_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = CFDLMFAC_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &CFDLMFAC_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &CFDLMFAC_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, CFDLMFAC_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &CFDLMFAC_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &CFDLMFAC_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &CFDLMFAC_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &CFDLMFAC_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &CFDLMFAC_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          real_T const **sfcnUPtrs = (real_T const **)
            &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.UPtrs0;
          sfcnUPtrs[0] = &CFDLMFAC_ConstP.pooled2;
          sfcnUPtrs[1] = &CFDLMFAC_ConstP.pooled2;
          sfcnUPtrs[2] = &CFDLMFAC_ConstP.pooled1;
          sfcnUPtrs[3] = &CFDLMFAC_ConstP.pooled1;
          sfcnUPtrs[4] = &CFDLMFAC_ConstP.Constant_Value;
          sfcnUPtrs[5] = &CFDLMFAC_ConstP.Constant_Value;
          sfcnUPtrs[6] = &CFDLMFAC_ConstP.Constant_Value;
          sfcnUPtrs[7] = &CFDLMFAC_ConstP.pooled1;
          ssSetInputPortSignalPtrs(rts, 0, (InputPtrsType)&sfcnUPtrs[0]);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 39);
          ssSetOutputPortSignal(rts, 0, ((real_T *) CFDLMFAC_B.SFunction));
        }
      }

      /* path info */
      ssSetModelName(rts, "S-Function");
      ssSetPath(rts, "CFDLMFAC/FAST Nonlinear Wind Turbine/S-Function");
      ssSetRTModel(rts,CFDLMFAC_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 3);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)CFDLMFAC_ConstP.SFunction_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)CFDLMFAC_ConstP.SFunction_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)CFDLMFAC_ConstP.SFunction_P3_Size);
      }

      /* work vectors */
      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &CFDLMFAC_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* DWORK1 */
        ssSetDWorkWidth(rts, 0, 39);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &CFDLMFAC_DW.SFunction_DWORK1[0]);

        /* DWORK2 */
        ssSetDWorkWidth(rts, 1, 8);
        ssSetDWorkDataType(rts, 1,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &CFDLMFAC_DW.SFunction_DWORK2[0]);
      }

      /* registration */
      FAST_SFunc(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.00625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  CFDLMFAC_M->Sizes.numContStates = (0);/* Number of continuous states */
  CFDLMFAC_M->Sizes.numY = (0);        /* Number of model outputs */
  CFDLMFAC_M->Sizes.numU = (0);        /* Number of model inputs */
  CFDLMFAC_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  CFDLMFAC_M->Sizes.numSampTimes = (2);/* Number of sample times */
  CFDLMFAC_M->Sizes.numBlocks = (20);  /* Number of blocks */
  CFDLMFAC_M->Sizes.numBlockIO = (6);  /* Number of block outputs */
  return CFDLMFAC_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
