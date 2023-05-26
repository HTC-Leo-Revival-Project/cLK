/*
 * Copyright (c) 2008, Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of Google, Inc. nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PLATFORM_MSM7K_IOMAP_H_
#define _PLATFORM_MSM7K_IOMAP_H_


#define MSM_AXI_BASE	0xA8200000
#define MSM_AXIGS_BASE	0xA8250000
#define MSM_IMEM_BASE	0xA8500000

#define MSM_GPIOCFG1_BASE	0xA9000000
#define MSM_GPIOCFG2_BASE	0xA9100000
#define MSM_GPIO1_BASE	0xA9200000
#define MSM_GPIO2_BASE	0xA9300000

#define MSM_I2C_BASE	0xA9900000

#define MSM_UART1_BASE	0xA9A00000
#define MSM_UART2_BASE	0xA9B00000
#define MSM_UART3_BASE	0xA9C00000

#define MSM_VIC_BASE	0xC0000000
#define MSM_GPT_BASE	0xC0100000

#define GPT_REG(off)    (MSM_GPT_BASE + (off))

#define GPT_MATCH_VAL      GPT_REG(0x0000)
#define GPT_COUNT_VAL      GPT_REG(0x0004)
#define GPT_ENABLE         GPT_REG(0x0008)
#define GPT_CLEAR          GPT_REG(0x000C)
#define DGT_MATCH_VAL      GPT_REG(0x0010)
#define DGT_COUNT_VAL      GPT_REG(0x0014)
#define DGT_ENABLE         GPT_REG(0x0018)
#define DGT_CLEAR          GPT_REG(0x001C)
#define SPSS_TIMER_STATUS  GPT_REG(0x0034)


#define MSM_CSR_BASE	0xC0100000
#define MSM_CLK_CTL_BASE	0xA8600000

#define MSM_SHARED_BASE 0x0FF00000

#define MSM_SDC1_BASE   0xA0400000
#define MSM_SDC2_BASE   0xA0500000
#define MSM_SDC3_BASE   0xA0600000
#define MSM_SDC4_BASE   0xA0700000

#endif
