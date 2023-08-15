/******************************************************************************
 *                                                                            *
 * Copyright (C) 2023 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *****************************************************************************
 * Originally developed and contributed by Ittiam Systems Pvt. Ltd, Bangalore
 */

#pragma once
/*****************************************************************************/
/* Constant hashdefines                                                      */
/*****************************************************************************/

/*****************************************************************************/
/* Ittiam enhaacplus_enc ErrorCode Definitions                             */
/*****************************************************************************/

typedef enum {
  /*****************************************************************************/
  /* Class 0: API Errors                                                       */
  /*****************************************************************************/
  /* Non Fatal Errors */

  // AAC Profiles

  // MPS

  // USAC

  // DRC

  /* Fatal Errors */

  // AAC Profiles
  IA_EXHEAACE_API_FATAL_MEM_ALLOC = 0xFFFF8000,
  IA_EXHEAACE_API_FATAL_UNSUPPORTED_AOT,

  // MPS

  // USAC

  // DRC

  /*****************************************************************************/
  /* Class 1: Configuration Errors                                             */
  /*****************************************************************************/
  /* Non Fatal Errors */

  // AAC profiles
  IA_EXHEAACE_CONFIG_NONFATAL_INVALID_CONFIG = 0x00000800,
  IA_EXHEAACE_CONFIG_NONFATAL_BITRES_SIZE_TOO_SMALL,

  // MPS
  IA_EXHEAACE_CONFIG_NONFATAL_MPS_INVALID_CONFIG = 0x00000900,
  IA_EXHEAACE_CONFIG_NONFATAL_MPS_PARAM_ERROR,

  // USAC

  // DRC
  IA_EXHEAACE_CONFIG_NONFATAL_DRC_MISSING_CONFIG = 0x00000B00,
  /* Fatal Errors */

  // AAC profiles
  IA_EXHEAACE_CONFIG_FATAL_SAMP_FREQ = 0xFFFF8800,
  IA_EXHEAACE_CONFIG_FATAL_NUM_CHANNELS,
  IA_EXHEAACE_CONFIG_FATAL_USE_STEREO_PRE_PROC,
  IA_EXHEAACE_CONFIG_FATAL_QUALITY_LEVEL,
  IA_EXHEAACE_CONFIG_FATAL_PCM_WDSZ,
  IA_EXHEAACE_CONFIG_FATAL_AAC_CLASSIC_WITH_PS,
  IA_EXHEAACE_CONFIG_FATAL_USE_TNS,
  IA_EXHEAACE_CONFIG_FATAL_CHANNELS_MASK,
  IA_EXHEAACE_CONFIG_FATAL_WRITE_PCE,
  IA_EXHEAACE_CONFIG_FATAL_USE_FULL_BANDWIDTH,
  // MPS

  // USAC
  IA_EXHEAACE_CONFIG_FATAL_USAC_SAMP_FREQ = 0xFFFF8A00,
  IA_EXHEAACE_CONFIG_FATAL_USAC_RESAMPLER_RATIO,

  // DRC
  IA_EXHEAACE_CONFIG_FATAL_DRC_INVALID_CONFIG = 0xFFFF8B00,
  IA_EXHEAACE_CONFIG_FATAL_DRC_UNSUPPORTED_CONFIG,
  IA_EXHEAACE_CONFIG_FATAL_DRC_PARAM_OUT_OF_RANGE,
  IA_EXHEAACE_CONFIG_FATAL_DRC_COMPAND_FAILED,
  /*****************************************************************************/
  /* Class 2: Initialization Errors                                             */
  /*****************************************************************************/
  /* Non Fatal Errors */

  /* Fatal Errors */

  // AAC Profiles
  IA_EXHEAACE_INIT_FATAL_RESAMPLER_INIT_FAILED = 0xFFFF9000,
  IA_EXHEAACE_INIT_FATAL_AAC_INIT_FAILED,
  IA_EXHEAACE_INIT_FATAL_AACPLUS_NOT_AVAIL,
  IA_EXHEAACE_INIT_FATAL_BITRATE_NOT_SUPPORTED,
  IA_EXHEAACE_INIT_FATAL_INVALID_TNS_PARAM,
  IA_EXHEAACE_INIT_FATAL_SCALE_FACTOR_BAND_NOT_SUPPORTED,
  IA_EXHEAACE_INIT_FATAL_INVALID_CORE_SAMPLE_RATE,
  IA_EXHEAACE_INIT_FATAL_INVALID_ELEMENT_TYPE,
  IA_EXHEAACE_INIT_FATAL_NUM_CHANNELS_NOT_SUPPORTED,
  IA_EXHEAACE_INIT_FATAL_INVALID_NUM_CHANNELS_IN_ELE,
  IA_EXHEAACE_INIT_FATAL_SFB_TABLE_INIT_FAILED,

  // MPS
  IA_EXHEAACE_INIT_FATAL_MPS_INIT_FAILED = 0xFFFF9100,

  // USAC
  IA_EXHEAACE_INIT_FATAL_USAC_RESAMPLER_INIT_FAILED = 0xFFFF9200,
  IA_EXHEAACE_INIT_FATAL_USAC_BITRES_SIZE_TOO_SMALL,

  // DRC
  IA_EXHEAACE_INIT_FATAL_DRC_INVALID_CHANNEL_INDEX = 0xFFFF9300,

  // SBR
  IA_EXHEAACE_INIT_FATAL_SBR_INVALID_NUM_CHANNELS = 0xFFFF9400,
  IA_EXHEAACE_INIT_FATAL_SBR_INVALID_SAMPLERATE_MODE,
  IA_EXHEAACE_INIT_FATAL_SBR_INVALID_FREQ_COEFFS,
  IA_EXHEAACE_INIT_FATAL_SBR_INVALID_NUM_BANDS,
  IA_EXHEAACE_INIT_FATAL_SBR_INVALID_BUFFER_LENGTH,
  IA_EXEHAACE_INIT_FATAL_SBR_NOISE_BAND_NOT_SUPPORTED,

  /*****************************************************************************/
  /* Class 3: Execution Errors                                                 */
  /*****************************************************************************/
  /* Non Fatal Errors */

  // AAC Profiles

  // MPS
  IA_EXHEAACE_EXE_NONFATAL_MPS_ENCODE_ERROR = 0x00001900,
  IA_EXHEAACE_EXE_NONFATAL_MPS_INVALID_DATA_BANDS,

  // USAC

  // DRC

  // ESBR
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_BANDWIDTH_INDEX = 0x00001C00,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_NUM_PATCH,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_VOCOD_BUF,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_PVC_MODE,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_FFT,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_START_BAND,
  IA_EXHEAACE_EXE_NONFATAL_ESBR_INVALID_VALUE,

  /* Fatal Errors */

  // AAC Profiles
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_TIME_SLOTS = 0xFFFF9800,
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_IN_CHANNELS,
  IA_EXHEAACE_EXE_FATAL_PS_INVALID_HYBRID_RES_VAL,
  IA_EXHEAACE_EXE_FATAL_UNSUPPORTED_AOT,
  IA_EXHEAACE_EXE_FATAL_INVALID_BLOCK_TYPE,
  IA_EXHEAACE_EXE_FATAL_INVALID_SBR_FRAME_TYPE,
  IA_EXHEAACE_EXE_FATAL_INVALID_SBR_NUM_ENVELOPES,
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_BS,
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_CODEBOOK,
  IA_EXHEAACE_EXE_FATAL_INVALID_SCALE_FACTOR_GAIN,
  IA_EXHEAACE_EXE_FATAL_INVALID_BIT_RES_LEVEL,
  IA_EXHEAACE_EXE_FATAL_INVALID_BIT_CONSUMPTION,
  IA_EXHEAACE_EXE_FATAL_INVALID_SIDE_INFO_BITS,
  IA_EXHEAACE_EXE_FATAL_INVALID_HUFFMAN_BITS,
  IA_EXHEAACE_EXE_FATAL_INVALID_SCALE_FACTOR_BITS,
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_AMP_RES,
  IA_EXHEAACE_EXE_FATAL_INVALID_OUT_BYTES,
  IA_EXHEAACE_EXE_FATAL_INVALID_TNS_FILT_ORDER,
  IA_EXHEAACE_EXE_FATAL_SBR_INVALID_SAMP_FREQ,

  // MPS
  IA_EXHEAACE_EXE_FATAL_MPS_NULL_DATA_HANDLE = 0xFFFF9900,
  IA_EXHEAACE_EXE_FATAL_MPS_INVALID_HUFF_DATA_TYPE,
  IA_EXHEAACE_EXE_FATAL_MPS_INVALID_NUM_PARAM_SETS,
  IA_EXHEAACE_EXE_FATAL_MPS_UNSUPPORTED_GUIDED_ENV_SHAPE,
  IA_EXHEAACE_EXE_FATAL_MPS_3D_STEREO_MODE_NOT_SUPPORTED,
  IA_EXHEAACE_EXE_FATAL_MPS_UNSUPPORTED_RESIDUAL_CODING,
  IA_EXHEAACE_EXE_FATAL_MPS_UNSUPPORTED_ARBITARY_DOWNMIX_CODING,
  IA_EXHEAACE_EXE_FATAL_MPS_ARBITARY_TREE_NOT_SUPPORTED,
  IA_EXHEAACE_EXE_FATAL_MPS_INVALID_QUANT_COARSE,
  IA_EXHEAACE_EXE_FATAL_MPS_INVALID_RES_STRIDE,
  IA_EXHEAACE_EXE_FATAL_MPS_INVALID_LEVELS,
  IA_EXHEAACE_EXE_FATAL_MPS_CFFT_PROCESS,

  // USAC
  IA_EXHEAACE_EXE_FATAL_USAC_INVALID_FAC_LEN = 0xFFFF9A00,
  IA_EXHEAACE_EXE_FATAL_USAC_INVALID_NUM_SBK,
  IA_EXHEAACE_EXE_FATAL_USAC_INVALID_NUM_CHANNEL,
  IA_EXHEAACE_EXE_FATAL_USAC_INVALID_BIT_RSVR_LVL,
  IA_EXHEAACE_EXE_FATAL_USAC_INVALID_MAPPING,

  // DRC

} ixheaace_error_codes;
