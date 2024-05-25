/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/VitoriaG/Microeletronica_1/lab4_proj1/contador.vhd";



static void work_a_2096723847_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    int t16;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t6 = xsi_signal_has_event(t1);
    if (t6 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 4832);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 4896);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 4960);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 5024);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 5088);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 5152);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    *((int *)t15) = t13;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 4752);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2728U);
    t12 = *((char **)t2);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t2 = (t0 + 2728U);
    t15 = *((char **)t2);
    t2 = (t15 + 0);
    *((int *)t2) = t14;
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 50);
    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB9;

LAB10:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t8 = (t7 == (unsigned char)3);
    t4 = t8;
    goto LAB12;

LAB13:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t16 = (t14 + 1);
    t1 = (t0 + 2848U);
    t9 = *((char **)t1);
    t1 = (t9 + 0);
    *((int *)t1) = t16;
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB14;

LAB16:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2848U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t14;
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2968U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 6);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2968U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 3088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t14;
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 3088U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t14;
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 6);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t14;
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB26;

LAB28:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 3448U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t14;
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t4 = (t13 == 2);
    if (t4 == 1)
        goto LAB34;

LAB35:    t3 = (unsigned char)0;

LAB36:    if (t3 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB29;

LAB31:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3448U);
    t9 = *((char **)t1);
    t1 = (t9 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB32;

LAB34:    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t6 = (t14 == 3);
    t3 = t6;
    goto LAB36;

}


extern void work_a_2096723847_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2096723847_3212880686_p_0};
	xsi_register_didat("work_a_2096723847_3212880686", "isim/testebench_relogio_isim_beh.exe.sim/work/a_2096723847_3212880686.didat");
	xsi_register_executes(pe);
}
