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
static const char *ng0 = "C:/Users/Aluno/Documents/Microeletronica2024/Lab_2/proj3/lab2_proj3.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_1847218488_3212880686_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 24492);
    t3 = (t0 + 15912);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 15976);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 6952U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 6952U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16040);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 1U, 1, 0LL);

LAB2:    t43 = (t0 + 15512);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 6952U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16040);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 1U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7072U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7072U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16104);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 2U, 1, 0LL);

LAB2:    t43 = (t0 + 15528);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7072U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16104);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 2U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7192U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7192U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16168);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 3U, 1, 0LL);

LAB2:    t43 = (t0 + 15544);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7192U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16168);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 3U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7312U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7312U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16232);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 4U, 1, 0LL);

LAB2:    t43 = (t0 + 15560);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7312U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16232);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 4U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7432U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7432U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16296);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 5U, 1, 0LL);

LAB2:    t43 = (t0 + 15576);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7432U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16296);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 5U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7552U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16360);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 6U, 1, 0LL);

LAB2:    t43 = (t0 + 15592);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7552U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16360);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 6U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7672U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7672U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16424);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 7U, 1, 0LL);

LAB2:    t43 = (t0 + 15608);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7672U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16424);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 7U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 7792U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 7);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)3);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB5:    t28 = (t0 + 6056U);
    t29 = *((char **)t28);
    t28 = (t0 + 7792U);
    t30 = *((char **)t28);
    t31 = *((int *)t30);
    t32 = (t31 - 1);
    t33 = (t32 - 0);
    t34 = (t33 * 1);
    t35 = (4U * t34);
    t36 = (0 + t35);
    t28 = (t29 + t36);
    t37 = *((int *)t28);
    t38 = (t0 + 16488);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((int *)t42) = t37;
    xsi_driver_first_trans_delta(t38, 8U, 1, 0LL);

LAB2:    t43 = (t0 + 15624);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 6056U);
    t13 = *((char **)t12);
    t12 = (t0 + 7792U);
    t14 = *((char **)t12);
    t15 = *((int *)t14);
    t16 = (t15 - 1);
    t17 = (t16 - 0);
    t18 = (t17 * 1);
    t19 = (4U * t18);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t21 = *((int *)t12);
    t22 = (t21 + 1);
    t23 = (t0 + 16488);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((int *)t27) = t22;
    xsi_driver_first_trans_delta(t23, 8U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t3 = (8 - 0);
    t4 = (t3 * 1);
    t5 = (4U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((int *)t1);
    t8 = (t0 + 16552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 15640);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_11(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(34, ng0);

LAB3:    t2 = (t0 + 6376U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 4);
    t5 = (t0 + 16616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 15656);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    t1 = (t0 + 16680);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 15672);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned char t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned char t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned char t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned char t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned char t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned char t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 6536U);
    t2 = *((char **)t1);
    t1 = (t0 + 24496);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:    t15 = (t0 + 6536U);
    t16 = *((char **)t15);
    t15 = (t0 + 24507);
    t18 = 1;
    if (4U == 4U)
        goto LAB13;

LAB14:    t18 = 0;

LAB15:    if (t18 != 0)
        goto LAB11;

LAB12:    t29 = (t0 + 6536U);
    t30 = *((char **)t29);
    t29 = (t0 + 24518);
    t32 = 1;
    if (4U == 4U)
        goto LAB21;

LAB22:    t32 = 0;

LAB23:    if (t32 != 0)
        goto LAB19;

LAB20:    t43 = (t0 + 6536U);
    t44 = *((char **)t43);
    t43 = (t0 + 24529);
    t46 = 1;
    if (4U == 4U)
        goto LAB29;

LAB30:    t46 = 0;

LAB31:    if (t46 != 0)
        goto LAB27;

LAB28:    t57 = (t0 + 6536U);
    t58 = *((char **)t57);
    t57 = (t0 + 24540);
    t60 = 1;
    if (4U == 4U)
        goto LAB37;

LAB38:    t60 = 0;

LAB39:    if (t60 != 0)
        goto LAB35;

LAB36:    t71 = (t0 + 6536U);
    t72 = *((char **)t71);
    t71 = (t0 + 24551);
    t74 = 1;
    if (4U == 4U)
        goto LAB45;

LAB46:    t74 = 0;

LAB47:    if (t74 != 0)
        goto LAB43;

LAB44:    t85 = (t0 + 6536U);
    t86 = *((char **)t85);
    t85 = (t0 + 24562);
    t88 = 1;
    if (4U == 4U)
        goto LAB53;

LAB54:    t88 = 0;

LAB55:    if (t88 != 0)
        goto LAB51;

LAB52:    t99 = (t0 + 6536U);
    t100 = *((char **)t99);
    t99 = (t0 + 24573);
    t102 = 1;
    if (4U == 4U)
        goto LAB61;

LAB62:    t102 = 0;

LAB63:    if (t102 != 0)
        goto LAB59;

LAB60:    t113 = (t0 + 6536U);
    t114 = *((char **)t113);
    t113 = (t0 + 24584);
    t116 = 1;
    if (4U == 4U)
        goto LAB69;

LAB70:    t116 = 0;

LAB71:    if (t116 != 0)
        goto LAB67;

LAB68:    t127 = (t0 + 6536U);
    t128 = *((char **)t127);
    t127 = (t0 + 24595);
    t130 = 1;
    if (4U == 4U)
        goto LAB77;

LAB78:    t130 = 0;

LAB79:    if (t130 != 0)
        goto LAB75;

LAB76:
LAB83:    t141 = (t0 + 24606);
    t143 = (t0 + 16744);
    t144 = (t143 + 56U);
    t145 = *((char **)t144);
    t146 = (t145 + 56U);
    t147 = *((char **)t146);
    memcpy(t147, t141, 7U);
    xsi_driver_first_trans_fast_port(t143);

LAB2:    t148 = (t0 + 15688);
    *((int *)t148) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 24500);
    t10 = (t0 + 16744);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 7U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    t22 = (t0 + 24511);
    t24 = (t0 + 16744);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t22, 7U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB2;

LAB13:    t19 = 0;

LAB16:    if (t19 < 4U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t20 = (t16 + t19);
    t21 = (t15 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB14;

LAB18:    t19 = (t19 + 1);
    goto LAB16;

LAB19:    t36 = (t0 + 24522);
    t38 = (t0 + 16744);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t36, 7U);
    xsi_driver_first_trans_fast_port(t38);
    goto LAB2;

LAB21:    t33 = 0;

LAB24:    if (t33 < 4U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t34 = (t30 + t33);
    t35 = (t29 + t33);
    if (*((unsigned char *)t34) != *((unsigned char *)t35))
        goto LAB22;

LAB26:    t33 = (t33 + 1);
    goto LAB24;

LAB27:    t50 = (t0 + 24533);
    t52 = (t0 + 16744);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t50, 7U);
    xsi_driver_first_trans_fast_port(t52);
    goto LAB2;

LAB29:    t47 = 0;

LAB32:    if (t47 < 4U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t48 = (t44 + t47);
    t49 = (t43 + t47);
    if (*((unsigned char *)t48) != *((unsigned char *)t49))
        goto LAB30;

LAB34:    t47 = (t47 + 1);
    goto LAB32;

LAB35:    t64 = (t0 + 24544);
    t66 = (t0 + 16744);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memcpy(t70, t64, 7U);
    xsi_driver_first_trans_fast_port(t66);
    goto LAB2;

LAB37:    t61 = 0;

LAB40:    if (t61 < 4U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t62 = (t58 + t61);
    t63 = (t57 + t61);
    if (*((unsigned char *)t62) != *((unsigned char *)t63))
        goto LAB38;

LAB42:    t61 = (t61 + 1);
    goto LAB40;

LAB43:    t78 = (t0 + 24555);
    t80 = (t0 + 16744);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = (t82 + 56U);
    t84 = *((char **)t83);
    memcpy(t84, t78, 7U);
    xsi_driver_first_trans_fast_port(t80);
    goto LAB2;

LAB45:    t75 = 0;

LAB48:    if (t75 < 4U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t76 = (t72 + t75);
    t77 = (t71 + t75);
    if (*((unsigned char *)t76) != *((unsigned char *)t77))
        goto LAB46;

LAB50:    t75 = (t75 + 1);
    goto LAB48;

LAB51:    t92 = (t0 + 24566);
    t94 = (t0 + 16744);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memcpy(t98, t92, 7U);
    xsi_driver_first_trans_fast_port(t94);
    goto LAB2;

LAB53:    t89 = 0;

LAB56:    if (t89 < 4U)
        goto LAB57;
    else
        goto LAB55;

LAB57:    t90 = (t86 + t89);
    t91 = (t85 + t89);
    if (*((unsigned char *)t90) != *((unsigned char *)t91))
        goto LAB54;

LAB58:    t89 = (t89 + 1);
    goto LAB56;

LAB59:    t106 = (t0 + 24577);
    t108 = (t0 + 16744);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memcpy(t112, t106, 7U);
    xsi_driver_first_trans_fast_port(t108);
    goto LAB2;

LAB61:    t103 = 0;

LAB64:    if (t103 < 4U)
        goto LAB65;
    else
        goto LAB63;

LAB65:    t104 = (t100 + t103);
    t105 = (t99 + t103);
    if (*((unsigned char *)t104) != *((unsigned char *)t105))
        goto LAB62;

LAB66:    t103 = (t103 + 1);
    goto LAB64;

LAB67:    t120 = (t0 + 24588);
    t122 = (t0 + 16744);
    t123 = (t122 + 56U);
    t124 = *((char **)t123);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    memcpy(t126, t120, 7U);
    xsi_driver_first_trans_fast_port(t122);
    goto LAB2;

LAB69:    t117 = 0;

LAB72:    if (t117 < 4U)
        goto LAB73;
    else
        goto LAB71;

LAB73:    t118 = (t114 + t117);
    t119 = (t113 + t117);
    if (*((unsigned char *)t118) != *((unsigned char *)t119))
        goto LAB70;

LAB74:    t117 = (t117 + 1);
    goto LAB72;

LAB75:    t134 = (t0 + 24599);
    t136 = (t0 + 16744);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    memcpy(t140, t134, 7U);
    xsi_driver_first_trans_fast_port(t136);
    goto LAB2;

LAB77:    t131 = 0;

LAB80:    if (t131 < 4U)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t132 = (t128 + t131);
    t133 = (t127 + t131);
    if (*((unsigned char *)t132) != *((unsigned char *)t133))
        goto LAB78;

LAB82:    t131 = (t131 + 1);
    goto LAB80;

LAB84:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_14(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 16808);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 0U, 1, 0LL);

LAB2:    t21 = (t0 + 15704);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 16808);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 0U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_15(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8032U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 16872);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 1U, 1, 0LL);

LAB2:    t21 = (t0 + 15720);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 16872);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 1U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_16(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8152U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 16936);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 2U, 1, 0LL);

LAB2:    t21 = (t0 + 15736);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 16936);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 2U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_17(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8272U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17000);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 3U, 1, 0LL);

LAB2:    t21 = (t0 + 15752);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 17000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 3U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_18(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17064);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 4U, 1, 0LL);

LAB2:    t21 = (t0 + 15768);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 17064);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 4U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_19(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8512U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17128);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 5U, 1, 0LL);

LAB2:    t21 = (t0 + 15784);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 17128);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 5U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_20(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8632U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17192);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 6U, 1, 0LL);

LAB2:    t21 = (t0 + 15800);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 17192);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 6U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_21(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 8752U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 6056U);
    t4 = *((char **)t1);
    t5 = (8 - 0);
    t6 = (t5 * 1);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t1 = (t4 + t8);
    t9 = *((int *)t1);
    t10 = (t3 < t9);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t16 = (t0 + 17256);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_delta(t16, 7U, 1, 0LL);

LAB2:    t21 = (t0 + 15816);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t11 = (t0 + 17256);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t11, 7U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1847218488_3212880686_p_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    t1 = (t0 + 17320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 15832);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1847218488_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1847218488_3212880686_p_0,(void *)work_a_1847218488_3212880686_p_1,(void *)work_a_1847218488_3212880686_p_2,(void *)work_a_1847218488_3212880686_p_3,(void *)work_a_1847218488_3212880686_p_4,(void *)work_a_1847218488_3212880686_p_5,(void *)work_a_1847218488_3212880686_p_6,(void *)work_a_1847218488_3212880686_p_7,(void *)work_a_1847218488_3212880686_p_8,(void *)work_a_1847218488_3212880686_p_9,(void *)work_a_1847218488_3212880686_p_10,(void *)work_a_1847218488_3212880686_p_11,(void *)work_a_1847218488_3212880686_p_12,(void *)work_a_1847218488_3212880686_p_13,(void *)work_a_1847218488_3212880686_p_14,(void *)work_a_1847218488_3212880686_p_15,(void *)work_a_1847218488_3212880686_p_16,(void *)work_a_1847218488_3212880686_p_17,(void *)work_a_1847218488_3212880686_p_18,(void *)work_a_1847218488_3212880686_p_19,(void *)work_a_1847218488_3212880686_p_20,(void *)work_a_1847218488_3212880686_p_21,(void *)work_a_1847218488_3212880686_p_22};
	xsi_register_didat("work_a_1847218488_3212880686", "isim/teste_isim_beh.exe.sim/work/a_1847218488_3212880686.didat");
	xsi_register_executes(pe);
}
