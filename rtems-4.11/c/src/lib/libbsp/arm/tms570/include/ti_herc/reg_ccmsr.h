/* The header file is generated by make_header.py from CCMSR.json */
/* Current script's version can be found at: */
/* https://github.com/AoLaD/rtems-tms570-utils/tree/headers/headers/python */

/*
 * Copyright (c) 2014-2015, Premysl Houdek <kom541000@gmail.com>
 *
 * Czech Technical University in Prague
 * Zikova 1903/4
 * 166 36 Praha 6
 * Czech Republic
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
*/
#ifndef LIBBSP_ARM_TMS570_CCMSR
#define LIBBSP_ARM_TMS570_CCMSR

#include <bsp/utility.h>

typedef struct{
  uint32_t CCMSR;             /*CCM-R4F Status Register*/
  uint32_t CCMKEYR;           /*CCM-R4F Key Register*/
} tms570_ccmsr_t;


/*---------------------TMS570_CCMSR_CCMSR---------------------*/
/* field: CMPE - Compare Error */
#define TMS570_CCMSR_CCMSR_CMPE BSP_BIT32(16)

/* field: STC - Self-test Complete */
#define TMS570_CCMSR_CCMSR_STC BSP_BIT32(8)

/* field: STET - Self-test Error Type */
#define TMS570_CCMSR_CCMSR_STET BSP_BIT32(1)

/* field: STE - Self-test Error */
#define TMS570_CCMSR_CCMSR_STE BSP_BIT32(0)


/*--------------------TMS570_CCMSR_CCMKEYR--------------------*/
/* field: MKEY - Mode Key */
#define TMS570_CCMSR_CCMKEYR_MKEY(val) BSP_FLD32(val,0, 3)
#define TMS570_CCMSR_CCMKEYR_MKEY_GET(reg) BSP_FLD32GET(reg,0, 3)
#define TMS570_CCMSR_CCMKEYR_MKEY_SET(reg,val) BSP_FLD32SET(reg, val,0, 3)



#endif /* LIBBSP_ARM_TMS570_CCMSR */
