#ifndef __CFDLMFAC_XPCOPTIONS_H___
#define __CFDLMFAC_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "CFDLMFAC.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                1
#define SIZEOF_PARAMS                  0
#define SIMMODE                        0
#define LOGTET                         0
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    5000
#define IRQ_NO                         0
#define IO_IRQ                         0
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void CFDLMFAC_ChangeStepSize(real_T newBaseRateStepSize, RT_MODEL_CFDLMFAC_T *
  const CFDLMFAC_M)
{
  real_T ratio = newBaseRateStepSize / 0.00625;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  CFDLMFAC_M->Timing.stepSize0 = CFDLMFAC_M->Timing.stepSize0 * ratio;
  CFDLMFAC_M->Timing.stepSize1 = CFDLMFAC_M->Timing.stepSize1 * ratio;
  CFDLMFAC_M->Timing.stepSize = CFDLMFAC_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  CFDLMFAC_ChangeStepSize(stepSize, CFDLMFAC_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(CFDLMFAC_M, errMsg);
}

#endif                                 /* __CFDLMFAC_XPCOPTIONS_H___ */
