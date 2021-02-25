/*
 * CFDLMFAC_data.c
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

#include "CFDLMFAC.h"
#include "CFDLMFAC_private.h"

/* Constant parameters (default storage) */
const ConstP_CFDLMFAC_T CFDLMFAC_ConstP = {
  /* Expression: 1
   * Referenced by: '<S1>/Constant'
   */
  1.0,

  /* Computed Parameter: SFunction_P1_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 10.0 },

  /* Computed Parameter: SFunction_P1
   * Referenced by: '<S2>/S-Function'
   */
  { 84.0, 101.0, 115.0, 116.0, 49.0, 56.0, 46.0, 102.0, 115.0, 116.0 },

  /* Computed Parameter: SFunction_P2_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 100
   * Referenced by: '<S2>/S-Function'
   */
  100.0,

  /* Computed Parameter: SFunction_P3_Size
   * Referenced by: '<S2>/S-Function'
   */
  { 1.0, 1.0 },

  /* Expression: 0
   * Referenced by: '<S2>/S-Function'
   */
  0.0,

  /* Pooled Parameter (Expression: 0)
   * Referenced by:
   *   '<S3>/High-Speed Shaft Braking Fraction'
   *   '<S6>/Yaw Position'
   *   '<S6>/Yaw rate'
   */
  0.0,

  /* Pooled Parameter (Expression: 1000)
   * Referenced by:
   *   '<S5>/Electrical Power'
   *   '<S5>/Generator Torque'
   */
  1000.0
};
