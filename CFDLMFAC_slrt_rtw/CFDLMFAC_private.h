/*
 * CFDLMFAC_private.h
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

#ifndef RTW_HEADER_CFDLMFAC_private_h_
#define RTW_HEADER_CFDLMFAC_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

extern const serialfifoptr serialfifoground;
extern const bcmsglist1553 bcmsg1553ground;
extern const bcstatus1553 bcstatground;
extern const bmmsglist1553 bmmsg1553ground;
extern void* slrtRegisterSignalToLoggingService(rtwCAPI_ModelMappingInfo* mdlMMI,
  const char* relBlkPath, int portNumber);
extern const char *getRefMdlPath(const char *refMdl);
extern int getRefMdlSignalNumber(const char *mdlBlock, const char *signalName);
extern void FAST_SFunc(SimStruct *rts);

#endif                                 /* RTW_HEADER_CFDLMFAC_private_h_ */
