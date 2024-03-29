/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x00028823,  // sb  zero,16(t0)
  0x0102c503,  // lbu a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};
/*
0x00000297：这是一条 RISC-V 指令 auipc t0,0。auipc 是 "Add Upper Immediate to PC" 的缩写，它把一个20位的无符号立即数左移12位后加到 PC 寄存器的值上，结果保存到 t0 寄存器。在这里，立即数为0，所以其行为等同于 t0 = PC。
0x00028823：这是一条 RISC-V 指令 sb zero, 16(t0)。sb 是 "Store Byte" 的缩写，它把 zero 寄存器(其值总是0)中的一个字节存到地址 t0+16 处。
0x0102c503：这是一条 RISC-V 指令 lbu a0, 16(t0)。“lbu” 是 "Load Byte Unsigned" 的缩写，它从地址 t0+16 处取出一个字节，作为无符号数加载到 a0 寄存器。
0x00100073：这是一条 RISC-V 指令 ebreak。ebreak 是 "Environment Break" 的缩写，它会造成一种被称为 "environment call" 的中断。在这里，它被注释为 nemu_trap，可能被用作一个调试或者陷阱(trap)的标记。
0xdeadbeef：这是一段数据，0xdeadbeef 是在编程中常用的一个神奇数，主要用于调试。因为它的二进制表示形式 11011110101011011011111011101111很容易被标识和识别，程序员通常用它来填充未初始化的或已释放的内存，帮助检测那些不应该访问的内存区域。
*/
static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;//RESET_VECTOR 0x8000 0000

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  //guest_to_host在 paddr.c ，return pmem + paddr - CONFIG_MBASE;

  /* Initialize this virtual computer system. */
  restart();
}
