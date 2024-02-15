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

#include "ixheaac_type_def.h"
#include "iusace_esbr_pvc.h"

const ixheaace_pvc_tabs_struct ixheaace_pvc_tabs = {
    {7.9120074720078801e-002f, 7.8929352455315405e-002f, 7.8356252741836802e-002f,
     7.7397889626247995e-002f, 7.6049149540866515e-002f, 7.4302186813164264e-002f,
     7.2145604983589517e-002f, 6.9563171210312247e-002f, 6.6531787206720316e-002f,
     6.3018197524834882e-002f, 5.8973400826190611e-002f, 5.4322528277253423e-002f,
     4.8944795582858927e-002f, 4.2628371779453236e-002f, 3.4946569619925177e-002f,
     2.4770667091351901e-002f},
    {1.0440702692045410e-001f, 1.0395945931915132e-001f, 1.0261281883061703e-001f,
     1.0035462721037963e-001f, 9.7161686576578310e-002f, 9.2995740369570576e-002f,
     8.7795494664707929e-002f, 8.1461666975864891e-002f, 7.3826916738979523e-002f,
     6.4587661325082549e-002f, 5.3116303570036522e-002f, 3.7720597498577493e-002f},
    {2.9233807677393114e-001f, 2.8099141963307617e-001f, 2.4582604080136389e-001f,
     1.8084446279162875e-001f},
    {3.7911649807579761e-001f, 3.5280765527510910e-001f, 2.6807584664909323e-001f},
    {17, 68},
    {{0xCB, 0xD1, 0xCC, 0xD2, 0xE2, 0xEB, 0xE7, 0xE8},
     {0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80},
     {0x84, 0x8C, 0x88, 0x83, 0x90, 0x93, 0x86, 0x80},
     {0xD7, 0xD8, 0xC0, 0xC7, 0xCF, 0xE5, 0xF1, 0xF6},
     {0xA5, 0xA6, 0xAA, 0xA8, 0xB0, 0xB1, 0xB8, 0xB8},
     {0xD7, 0xCB, 0xC1, 0xC3, 0xC5, 0xC9, 0xC9, 0xCE},
     {0xCA, 0xB5, 0xB8, 0xB3, 0xAC, 0xB6, 0xBB, 0xB8},
     {0xC1, 0xC4, 0xC3, 0xC5, 0xC6, 0xCA, 0xCA, 0xCB},
     {0xE0, 0xE1, 0xD8, 0xCD, 0xCB, 0xCB, 0xCE, 0xCC},
     {0xDB, 0xE1, 0xDF, 0xDB, 0xDC, 0xD9, 0xD9, 0xD6},
     {0xE0, 0xDE, 0xDD, 0xDD, 0xE0, 0xE3, 0xE5, 0xE6},
     {0xCA, 0xD2, 0xCD, 0xCE, 0xD5, 0xDB, 0xD9, 0xDB},
     {0xD2, 0xE0, 0xDB, 0xD5, 0xDB, 0xDE, 0xE3, 0xE1},
     {0xE5, 0xDB, 0xD0, 0xD2, 0xD8, 0xDD, 0xDB, 0xDD},
     {0xC0, 0xB5, 0xBF, 0xDD, 0xE3, 0xDC, 0xDC, 0xE4},
     {0xDB, 0xCE, 0xC6, 0xCF, 0xCF, 0xD1, 0xD3, 0xD4},
     {0xC9, 0xD7, 0xDA, 0xE2, 0xE9, 0xE7, 0xDF, 0xDC},
     {0x0A, 0x07, 0x0A, 0x08, 0x19, 0x24, 0x1F, 0x22},
     {0x1E, 0x1F, 0x11, 0x0E, 0x22, 0x2D, 0x33, 0x32},
     {0xF0, 0xDA, 0xDC, 0x18, 0x1F, 0x19, 0x0A, 0x1E},
     {0x09, 0xF8, 0xE6, 0x05, 0x19, 0x11, 0x0E, 0x0B},
     {0x09, 0x10, 0x0E, 0xE6, 0xF4, 0x20, 0x22, 0xFA},
     {0xF2, 0xE5, 0xF8, 0x0E, 0x18, 0x15, 0x0D, 0x10},
     {0x15, 0x13, 0x16, 0x0A, 0x0D, 0x1F, 0x1D, 0x1B},
     {0xFA, 0xFF, 0xFE, 0xFF, 0x09, 0x11, 0x03, 0x0B},
     {0xFE, 0xFA, 0xF2, 0xF8, 0x0C, 0x1E, 0x11, 0x12},
     {0xFA, 0xF8, 0x0B, 0x17, 0x1D, 0x17, 0x0E, 0x16},
     {0x00, 0xF3, 0xFD, 0x0A, 0x1C, 0x17, 0xFD, 0x08},
     {0xEA, 0xEA, 0x03, 0x12, 0x1E, 0x14, 0x09, 0x04},
     {0x02, 0xFE, 0x04, 0xFB, 0x0C, 0x0E, 0x07, 0x02},
     {0xF6, 0x02, 0x07, 0x0B, 0x17, 0x17, 0x01, 0xFF},
     {0xF5, 0xFB, 0xFE, 0x04, 0x12, 0x14, 0x0C, 0x0D},
     {0x10, 0x10, 0x0E, 0x04, 0x07, 0x11, 0x0F, 0x13},
     {0x0C, 0x0F, 0xFB, 0xF2, 0x0A, 0x12, 0x09, 0x0D},
     {0x0D, 0x1D, 0xF1, 0xF4, 0x2A, 0x06, 0x3B, 0x32},
     {0xFC, 0x08, 0x06, 0x02, 0x0E, 0x17, 0x08, 0x0E},
     {0x07, 0x02, 0xEE, 0xEE, 0x2B, 0xF6, 0x23, 0x13},
     {0x04, 0x02, 0x05, 0x08, 0x0B, 0x0E, 0xFB, 0xFB},
     {0x00, 0x04, 0x10, 0x18, 0x22, 0x25, 0x1D, 0x1F},
     {0xFB, 0x0D, 0x07, 0x00, 0x0C, 0x0F, 0xFC, 0x02},
     {0x00, 0x00, 0x00, 0x01, 0x05, 0x07, 0x03, 0x05},
     {0x04, 0x05, 0x08, 0x13, 0xFF, 0xEB, 0x0C, 0x06},
     {0x05, 0x13, 0x0E, 0x0B, 0x12, 0x15, 0x09, 0x0A},
     {0x09, 0x03, 0x09, 0x05, 0x12, 0x16, 0x11, 0x12},
     {0x14, 0x1A, 0x06, 0x01, 0x10, 0x11, 0xFE, 0x02},
     {0x01, 0x0B, 0x0B, 0x0C, 0x18, 0x21, 0x10, 0x13},
     {0x12, 0x0D, 0x0A, 0x10, 0x1C, 0x1D, 0x0D, 0x10},
     {0x03, 0x09, 0x14, 0x15, 0x1B, 0x1A, 0x01, 0xFF},
     {0x08, 0x12, 0x13, 0x0E, 0x16, 0x1D, 0x14, 0x1B},
     {0x07, 0x15, 0x1C, 0x1B, 0x20, 0x21, 0x11, 0x0E},
     {0x12, 0x18, 0x19, 0x17, 0x20, 0x25, 0x1A, 0x1E},
     {0x0C, 0x1A, 0x1D, 0x22, 0x2F, 0x33, 0x27, 0x28},
     {0x0E, 0x1A, 0x17, 0x10, 0x0A, 0x0E, 0xFF, 0x06},
     {0x1A, 0x1C, 0x18, 0x14, 0x1A, 0x16, 0x0A, 0x0E},
     {0x1E, 0x27, 0x25, 0x26, 0x27, 0x2A, 0x21, 0x21},
     {0xF1, 0x0A, 0x16, 0x1C, 0x28, 0x25, 0x15, 0x19},
     {0x08, 0x12, 0x09, 0x08, 0x16, 0x17, 0xEF, 0xF6},
     {0x0C, 0x0B, 0x00, 0xFC, 0x04, 0x09, 0xFC, 0x03},
     {0xFB, 0xF1, 0xF8, 0x26, 0x24, 0x18, 0x1D, 0x20},
     {0xF9, 0x01, 0x0C, 0x0F, 0x07, 0x08, 0x06, 0x07},
     {0x07, 0x06, 0x08, 0x04, 0x07, 0x0D, 0x07, 0x09},
     {0xFE, 0x01, 0x06, 0x05, 0x13, 0x1B, 0x14, 0x19},
     {0x09, 0x0C, 0x0E, 0x01, 0x08, 0x05, 0xFB, 0xFD},
     {0x07, 0x06, 0x03, 0x0A, 0x16, 0x12, 0x04, 0x07},
     {0x04, 0x01, 0x00, 0x04, 0x1F, 0x20, 0x0E, 0x0A},
     {0x03, 0xFF, 0xF6, 0xFB, 0x15, 0x1A, 0x00, 0x03},
     {0xFC, 0x18, 0x0B, 0x2D, 0x35, 0x23, 0x12, 0x09},
     {0x02, 0xFE, 0x01, 0xFF, 0x0C, 0x11, 0x0D, 0x0F},
     {0xFA, 0xE9, 0xD9, 0xFF, 0x0D, 0x05, 0x0D, 0x10},
     {0xF1, 0xE0, 0xF0, 0x01, 0x06, 0x06, 0x06, 0x10},
     {0xE9, 0xD4, 0xD7, 0x0F, 0x14, 0x0B, 0x0D, 0x16},
     {0x00, 0xFF, 0xEE, 0xE5, 0xFF, 0x08, 0x02, 0xF9},
     {0xE0, 0xDA, 0xE5, 0xFE, 0x09, 0x02, 0xF9, 0x04},
     {0xE0, 0xE2, 0xF4, 0x09, 0x13, 0x0C, 0x0D, 0x09},
     {0xFC, 0x02, 0x04, 0xFF, 0x00, 0xFF, 0xF8, 0xF7},
     {0xFE, 0xFB, 0xED, 0xF2, 0xFE, 0xFE, 0x08, 0x0C},
     {0xF3, 0xEF, 0xD0, 0xE3, 0x05, 0x11, 0xFD, 0xFF},
     {0xFA, 0xEF, 0xEA, 0xFE, 0x0D, 0x0E, 0xFE, 0x02},
     {0xF7, 0xFB, 0xDB, 0xDF, 0x14, 0xDD, 0x07, 0xFE},
     {0xFE, 0x08, 0x00, 0xDB, 0xE5, 0x1A, 0x13, 0xED},
     {0xF9, 0xFE, 0xFF, 0xF4, 0xF3, 0x00, 0x05, 0x02},
     {0xEF, 0xDE, 0xD8, 0xEB, 0xEA, 0xF5, 0x0E, 0x19},
     {0xFB, 0xFC, 0xFA, 0xEC, 0xEB, 0xED, 0xEE, 0xE8},
     {0xEE, 0xFC, 0xFD, 0x00, 0x04, 0xFC, 0xF0, 0xF5},
     {0x00, 0xFA, 0xF4, 0xF1, 0xF5, 0xFA, 0xFB, 0xF9},
     {0xEB, 0xF0, 0xDF, 0xE3, 0xEF, 0x07, 0x02, 0x05},
     {0xF7, 0xF0, 0xE6, 0xE7, 0x06, 0x15, 0x06, 0x0C},
     {0xF1, 0xE4, 0xD8, 0xEA, 0x06, 0xF2, 0x07, 0x09},
     {0xFF, 0xFE, 0xFE, 0xF9, 0xFF, 0xFF, 0x02, 0xF9},
     {0xDD, 0xF4, 0xF0, 0xF1, 0xFF, 0xFF, 0xEA, 0xF1},
     {0xF0, 0xF1, 0xFD, 0x03, 0x03, 0xFE, 0x00, 0x05},
     {0xF1, 0xF6, 0xE0, 0xDF, 0xF5, 0x01, 0xF4, 0xF8},
     {0x02, 0x03, 0xE5, 0xDC, 0xE7, 0xFD, 0x02, 0x08},
     {0xEC, 0xF1, 0xF5, 0xEC, 0xF2, 0xF8, 0xF6, 0xEE},
     {0xF3, 0xF4, 0xF6, 0xF4, 0xF5, 0xF1, 0xE7, 0xEA},
     {0xF7, 0xF3, 0xEC, 0xEA, 0xEF, 0xF0, 0xEE, 0xF1},
     {0xEB, 0xF6, 0xFB, 0xFA, 0xEF, 0xF3, 0xF3, 0xF7},
     {0x01, 0x03, 0xF1, 0xF6, 0x05, 0xF8, 0xE1, 0xEB},
     {0xF5, 0xF6, 0xF6, 0xF4, 0xFB, 0xFB, 0xFF, 0x00},
     {0xF8, 0x01, 0xFB, 0xFA, 0xFF, 0x03, 0xFE, 0x04},
     {0x04, 0xFB, 0x03, 0xFD, 0xF5, 0xF7, 0xF6, 0xFB},
     {0x06, 0x09, 0xFB, 0xF4, 0xF9, 0xFA, 0xFC, 0xFF},
     {0xF5, 0xF6, 0xF1, 0xEE, 0xF5, 0xF8, 0xF5, 0xF9},
     {0xF5, 0xF9, 0xFA, 0xFC, 0x07, 0x09, 0x01, 0xFB},
     {0xD7, 0xE9, 0xE8, 0xEC, 0x00, 0x0C, 0xFE, 0xF1},
     {0xEC, 0x04, 0xE9, 0xDF, 0x03, 0xE8, 0x00, 0xFA},
     {0xE6, 0xE2, 0xFF, 0x0A, 0x13, 0x01, 0x00, 0xF7},
     {0xF1, 0xFA, 0xF7, 0xF5, 0x01, 0x06, 0x05, 0x0A},
     {0xF6, 0xF6, 0xFC, 0xF6, 0xE8, 0x11, 0xF2, 0xFE},
     {0xFE, 0x08, 0x05, 0x12, 0xFD, 0xD0, 0x0E, 0x07},
     {0xF1, 0xFE, 0xF7, 0xF2, 0xFB, 0x02, 0xFA, 0xF8},
     {0xF4, 0xEA, 0xEC, 0xF3, 0xFE, 0x01, 0xF7, 0xF6},
     {0xFF, 0xFA, 0xFB, 0xF9, 0xFF, 0x01, 0x04, 0x03},
     {0x00, 0xF9, 0xF4, 0xFC, 0x05, 0xFC, 0xF7, 0xFB},
     {0xF8, 0xFF, 0xEF, 0xEC, 0xFB, 0x04, 0xF8, 0x03},
     {0xEB, 0xF1, 0xED, 0xF4, 0x02, 0x0E, 0x0B, 0x04},
     {0xF7, 0x01, 0xF8, 0xF4, 0xF8, 0xEF, 0xF8, 0x04},
     {0xEB, 0xF0, 0xF7, 0xFC, 0x10, 0x0D, 0xF8, 0xF8},
     {0xE8, 0xFE, 0xEE, 0xE8, 0xED, 0xF7, 0xF5, 0xF8},
     {0xED, 0xEB, 0xE9, 0xEA, 0xF2, 0xF5, 0xF4, 0xF9},
     {0xEA, 0xF2, 0xEF, 0xEE, 0xF9, 0xFE, 0xFD, 0x02},
     {0xFA, 0xFD, 0x02, 0x0D, 0xFA, 0xE4, 0x0F, 0x01},
     {0xFF, 0x08, 0x05, 0xF6, 0xF7, 0xFB, 0xF1, 0xF1},
     {0xF4, 0xEC, 0xEE, 0xF6, 0xEE, 0xEE, 0xF8, 0x06},
     {0xE8, 0xFA, 0xF8, 0xE8, 0xF8, 0xE9, 0xEE, 0xF9},
     {0xE5, 0xE9, 0xF0, 0x00, 0x00, 0xEF, 0xF3, 0xF8},
     {0xF7, 0xFB, 0xFB, 0xF7, 0xF9, 0xF9, 0xF5, 0xF0},
     {0xFD, 0xFF, 0xF2, 0xEE, 0xF2, 0xF5, 0xF1, 0xF3}},
    {{{0x4F, 0x5B, 0x57, 0x52, 0x4D, 0x65, 0x45, 0x57},
      {0xF3, 0x0F, 0x18, 0x20, 0x19, 0x4F, 0x3D, 0x23},
      {0x78, 0x57, 0x55, 0x50, 0x50, 0x20, 0x36, 0x37}},
     {{0x4C, 0x5F, 0x53, 0x37, 0x1E, 0xFD, 0x15, 0x0A},
      {0x05, 0x0E, 0x28, 0x41, 0x48, 0x6E, 0x54, 0x5B},
      {0x59, 0x47, 0x40, 0x40, 0x3D, 0x33, 0x3F, 0x39}},
     {{0x47, 0x5F, 0x57, 0x34, 0x3C, 0x2E, 0x2E, 0x31},
      {0xFA, 0x13, 0x23, 0x4E, 0x44, 0x7C, 0x34, 0x38},
      {0x63, 0x43, 0x41, 0x3D, 0x35, 0x19, 0x3D, 0x33}}},
    {1.0 / 256.0, 1.0 / 256.0, 1.0 / 128.0, 1.0 / 2.0},
    {16, 52},
    {{0x26, 0x25, 0x11, 0x0C, 0xFA, 0x15}, {0x1B, 0x18, 0x11, 0x0E, 0x0E, 0x0E},
     {0x12, 0x10, 0x10, 0x10, 0x11, 0x10}, {0x1E, 0x24, 0x19, 0x15, 0x14, 0x12},
     {0x24, 0x16, 0x12, 0x13, 0x15, 0x1C}, {0xEA, 0xED, 0xEB, 0xEA, 0xEC, 0xEB},
     {0xFC, 0xFD, 0xFD, 0xFC, 0xFE, 0xFE}, {0x0F, 0x0C, 0x0B, 0x0A, 0x0B, 0x0B},
     {0x22, 0x0B, 0x16, 0x18, 0x13, 0x19}, {0x1C, 0x14, 0x1D, 0x20, 0x19, 0x1A},
     {0x10, 0x08, 0x00, 0xFF, 0x02, 0x05}, {0x06, 0x07, 0x05, 0x03, 0x05, 0x04},
     {0x2A, 0x1F, 0x12, 0x12, 0x11, 0x18}, {0x19, 0x19, 0x02, 0x04, 0x00, 0x04},
     {0x18, 0x17, 0x17, 0x15, 0x16, 0x15}, {0x21, 0x1E, 0x1B, 0x19, 0x1C, 0x1B},
     {0x3C, 0x35, 0x20, 0x1D, 0x30, 0x34}, {0x3A, 0x1F, 0x37, 0x38, 0x33, 0x31},
     {0x37, 0x34, 0x25, 0x27, 0x35, 0x34}, {0x34, 0x2E, 0x32, 0x31, 0x34, 0x31},
     {0x36, 0x33, 0x2F, 0x2F, 0x32, 0x2F}, {0x35, 0x20, 0x2F, 0x32, 0x2F, 0x2C},
     {0x2E, 0x2B, 0x2F, 0x34, 0x36, 0x30}, {0x3F, 0x39, 0x30, 0x28, 0x29, 0x29},
     {0x3C, 0x30, 0x32, 0x37, 0x39, 0x36}, {0x37, 0x36, 0x30, 0x2B, 0x26, 0x24},
     {0x44, 0x38, 0x2F, 0x2D, 0x2D, 0x2D}, {0x38, 0x2B, 0x2C, 0x2C, 0x30, 0x2D},
     {0x37, 0x36, 0x2F, 0x23, 0x2D, 0x32}, {0x3C, 0x39, 0x29, 0x2E, 0x38, 0x37},
     {0x3B, 0x3A, 0x35, 0x32, 0x31, 0x2D}, {0x32, 0x31, 0x2F, 0x2C, 0x2D, 0x28},
     {0x2C, 0x31, 0x32, 0x30, 0x32, 0x2D}, {0x35, 0x34, 0x34, 0x34, 0x35, 0x33},
     {0x34, 0x38, 0x3B, 0x3C, 0x3E, 0x3A}, {0x3E, 0x3C, 0x3B, 0x3A, 0x3C, 0x39},
     {0x3D, 0x41, 0x46, 0x41, 0x3D, 0x38}, {0x44, 0x41, 0x40, 0x3E, 0x3F, 0x3A},
     {0x47, 0x47, 0x47, 0x42, 0x44, 0x40}, {0x4C, 0x4A, 0x4A, 0x46, 0x49, 0x45},
     {0x53, 0x52, 0x52, 0x4C, 0x4E, 0x49}, {0x41, 0x3D, 0x39, 0x2C, 0x2E, 0x2E},
     {0x2D, 0x37, 0x36, 0x30, 0x28, 0x36}, {0x3B, 0x32, 0x2E, 0x2D, 0x2D, 0x29},
     {0x40, 0x39, 0x36, 0x35, 0x36, 0x32}, {0x30, 0x2D, 0x2D, 0x2E, 0x31, 0x30},
     {0x38, 0x3D, 0x3B, 0x37, 0x35, 0x34}, {0x44, 0x3D, 0x3C, 0x38, 0x37, 0x33},
     {0x3A, 0x36, 0x37, 0x37, 0x39, 0x36}, {0x32, 0x36, 0x37, 0x30, 0x2E, 0x2A},
     {0x3C, 0x33, 0x33, 0x31, 0x33, 0x30}, {0x30, 0x31, 0x36, 0x37, 0x38, 0x34},
     {0x26, 0x27, 0x2E, 0x29, 0x1C, 0x16}, {0x14, 0x15, 0x1F, 0x17, 0x15, 0x1C},
     {0x38, 0x2D, 0x18, 0x13, 0x1E, 0x2B}, {0x30, 0x22, 0x17, 0x1A, 0x26, 0x2B},
     {0x24, 0x20, 0x1F, 0x10, 0x0C, 0x11}, {0x27, 0x1F, 0x13, 0x17, 0x24, 0x2A},
     {0x2F, 0x13, 0x18, 0x13, 0x2A, 0x32}, {0x31, 0x1E, 0x1E, 0x1E, 0x21, 0x28},
     {0x2A, 0x12, 0x19, 0x17, 0x16, 0x24}, {0x27, 0x0F, 0x16, 0x1D, 0x17, 0x1C},
     {0x2F, 0x26, 0x25, 0x22, 0x20, 0x22}, {0x1E, 0x1B, 0x1E, 0x18, 0x1E, 0x24},
     {0x31, 0x26, 0x0E, 0x15, 0x15, 0x25}, {0x2D, 0x22, 0x1E, 0x14, 0x10, 0x22},
     {0x25, 0x1B, 0x18, 0x11, 0x13, 0x1F}, {0x2F, 0x1B, 0x13, 0x1B, 0x18, 0x22},
     {0x21, 0x24, 0x1D, 0x1C, 0x1D, 0x1B}, {0x23, 0x1E, 0x28, 0x29, 0x27, 0x25},
     {0x2E, 0x2A, 0x1D, 0x17, 0x26, 0x2D}, {0x31, 0x2C, 0x1A, 0x0E, 0x1A, 0x24},
     {0x26, 0x16, 0x20, 0x1D, 0x14, 0x1E}, {0x29, 0x20, 0x1B, 0x1B, 0x17, 0x17},
     {0x1D, 0x06, 0x1A, 0x1E, 0x1B, 0x1D}, {0x2B, 0x23, 0x1F, 0x1F, 0x1D, 0x1C},
     {0x27, 0x1A, 0x0C, 0x0E, 0x0F, 0x1A}, {0x29, 0x1D, 0x1E, 0x22, 0x22, 0x24},
     {0x20, 0x21, 0x1B, 0x18, 0x13, 0x21}, {0x27, 0x0E, 0x10, 0x14, 0x10, 0x1A},
     {0x26, 0x24, 0x25, 0x25, 0x26, 0x28}, {0x1A, 0x24, 0x25, 0x29, 0x26, 0x24},
     {0x1D, 0x1D, 0x15, 0x12, 0x0F, 0x18}, {0x1E, 0x14, 0x13, 0x12, 0x14, 0x18},
     {0x16, 0x13, 0x13, 0x1A, 0x1B, 0x1D}, {0x20, 0x27, 0x22, 0x24, 0x1A, 0x19},
     {0x1F, 0x17, 0x19, 0x18, 0x17, 0x18}, {0x20, 0x1B, 0x1C, 0x1C, 0x1B, 0x1A},
     {0x23, 0x19, 0x1D, 0x1F, 0x1E, 0x21}, {0x26, 0x1F, 0x1D, 0x1B, 0x19, 0x1A},
     {0x23, 0x1E, 0x1F, 0x20, 0x1F, 0x1E}, {0x29, 0x20, 0x22, 0x20, 0x20, 0x1F},
     {0x26, 0x23, 0x21, 0x22, 0x23, 0x23}, {0x29, 0x1F, 0x24, 0x25, 0x26, 0x29},
     {0x2B, 0x22, 0x25, 0x27, 0x23, 0x21}, {0x29, 0x21, 0x19, 0x0E, 0x22, 0x2D},
     {0x32, 0x29, 0x1F, 0x1C, 0x1B, 0x21}, {0x1E, 0x1A, 0x1E, 0x24, 0x25, 0x25},
     {0x24, 0x1D, 0x21, 0x22, 0x22, 0x25}, {0x2C, 0x25, 0x21, 0x22, 0x23, 0x25},
     {0x24, 0x1E, 0x21, 0x26, 0x2B, 0x2C}, {0x28, 0x24, 0x1B, 0x1F, 0x28, 0x2D},
     {0x23, 0x13, 0x16, 0x22, 0x22, 0x29}, {0x1B, 0x23, 0x1C, 0x20, 0x14, 0x0D},
     {0x1E, 0x16, 0x1A, 0x1E, 0x1C, 0x1D}, {0x2B, 0x1C, 0x1D, 0x20, 0x1B, 0x1C},
     {0x1C, 0x1B, 0x23, 0x1F, 0x19, 0x1E}, {0x21, 0x23, 0x26, 0x20, 0x20, 0x22},
     {0x1D, 0x0B, 0x19, 0x1E, 0x11, 0x19}, {0x18, 0x17, 0x16, 0x17, 0x14, 0x16},
     {0x16, 0x19, 0x1C, 0x20, 0x21, 0x22}, {0x30, 0x1E, 0x22, 0x24, 0x25, 0x26},
     {0x1B, 0x1F, 0x17, 0x1D, 0x1E, 0x21}, {0x32, 0x2B, 0x27, 0x1F, 0x1B, 0x1A},
     {0x28, 0x20, 0x1A, 0x1B, 0x1F, 0x23}, {0x32, 0x21, 0x20, 0x21, 0x1D, 0x1F},
     {0x22, 0x18, 0x12, 0x15, 0x1B, 0x20}, {0x27, 0x27, 0x2A, 0x24, 0x21, 0x21},
     {0x1E, 0x0F, 0x0D, 0x1A, 0x1D, 0x23}, {0x28, 0x25, 0x27, 0x21, 0x17, 0x25},
     {0x2B, 0x27, 0x23, 0x19, 0x13, 0x14}, {0x25, 0x2B, 0x22, 0x22, 0x20, 0x21},
     {0x27, 0x1B, 0x16, 0x17, 0x0F, 0x15}, {0x29, 0x26, 0x23, 0x15, 0x1E, 0x28},
     {0x24, 0x1C, 0x19, 0x1A, 0x18, 0x19}, {0x2D, 0x15, 0x27, 0x2B, 0x24, 0x23},
     {0x2C, 0x12, 0x1F, 0x23, 0x1F, 0x20}, {0x25, 0x0F, 0x22, 0x27, 0x1F, 0x21}},
    {{{0x11, 0x27, 0x0F, 0xFD, 0x04, 0xFC},
      {0x00, 0xBE, 0xE3, 0xF4, 0xDB, 0xF0},
      {0x09, 0x1E, 0x18, 0x1A, 0x21, 0x1B}},
     {{0x16, 0x28, 0x2B, 0x29, 0x25, 0x32},
      {0xF2, 0xE9, 0xE4, 0xE5, 0xE2, 0xD4},
      {0x0E, 0x0B, 0x0C, 0x0D, 0x0D, 0x0E}},
     {{0x2E, 0x3C, 0x20, 0x16, 0x1B, 0x1A},
      {0xE4, 0xC6, 0xE5, 0xF4, 0xDC, 0xDC},
      {0x0F, 0x1B, 0x18, 0x14, 0x1E, 0x1A}}},
    {1.0 / 128.0, 1.0 / 128.0, 1.0 / 64.0, 1.0 / 1.0}};
