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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ALU/ALU.v";
static int ng1[] = {5, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};
static int ng18[] = {2, 0};



static void Always_25_0(char *t0)
{
    char t10[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3000);
    *((int *)t2) = 1;
    t3 = (t0 + 2712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));

LAB6:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 8, t8, 4, t9, 4);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB9:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB11:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB13:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB15:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB17:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB40;

LAB41:
LAB42:    t39 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB19:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    t39 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t39, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB21:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB49;

LAB46:    if (t20 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t10) = 1;

LAB49:    t21 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t21, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB23:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 15U);
    if (t15 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t3) != 0)
        goto LAB52;

LAB53:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t8);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB54;

LAB55:    memcpy(t41, t10, 8);

LAB56:    t59 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t59, t41, 0, 0, 8, 0LL);
    goto LAB39;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 15U);
    if (t15 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t3) != 0)
        goto LAB66;

LAB67:    t8 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (!(t16));
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB68;

LAB69:    memcpy(t41, t10, 8);

LAB70:    t59 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t59, t41, 0, 0, 8, 0LL);
    goto LAB39;

LAB27:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB29:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 8, t5, 4, t7, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB31:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB78;

LAB79:
LAB80:    t21 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t21, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB33:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    *((unsigned int *)t10) = t12;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB82;

LAB81:    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB35:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1048U);
    t7 = *((char **)t3);
    xsi_vlogtype_concat(t10, 8, 8, 2U, t7, 4, t5, 4);
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB37:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlog_mul_concat(t10, 8, 4, t3, 1U, t7, 4);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t10, 0, 0, 8, 0LL);
    goto LAB39;

LAB40:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB42;

LAB43:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB45;

LAB48:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t10) = 1;
    goto LAB53;

LAB52:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB53;

LAB54:    t9 = (t0 + 1208U);
    t21 = *((char **)t9);
    memset(t40, 0, 8);
    t9 = (t21 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t23 = *((unsigned int *)t21);
    t24 = (t23 & t20);
    t25 = (t24 & 15U);
    if (t25 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t9) != 0)
        goto LAB59;

LAB60:    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t40);
    t28 = (t26 & t27);
    *((unsigned int *)t41) = t28;
    t39 = (t10 + 4);
    t42 = (t40 + 4);
    t43 = (t41 + 4);
    t29 = *((unsigned int *)t39);
    t30 = *((unsigned int *)t42);
    t33 = (t29 | t30);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t43);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB56;

LAB57:    *((unsigned int *)t40) = 1;
    goto LAB60;

LAB59:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB60;

LAB61:    t36 = *((unsigned int *)t41);
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t41) = (t36 | t37);
    t44 = (t10 + 4);
    t45 = (t40 + 4);
    t38 = *((unsigned int *)t10);
    t46 = (~(t38));
    t47 = *((unsigned int *)t44);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t50 = (~(t49));
    t51 = *((unsigned int *)t45);
    t52 = (~(t51));
    t31 = (t46 & t48);
    t32 = (t50 & t52);
    t53 = (~(t31));
    t54 = (~(t32));
    t55 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t55 & t53);
    t56 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t56 & t54);
    t57 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t57 & t53);
    t58 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t58 & t54);
    goto LAB63;

LAB64:    *((unsigned int *)t10) = 1;
    goto LAB67;

LAB66:    t7 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    t9 = (t0 + 1208U);
    t21 = *((char **)t9);
    memset(t40, 0, 8);
    t9 = (t21 + 4);
    t20 = *((unsigned int *)t9);
    t23 = (~(t20));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 15U);
    if (t26 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t9) != 0)
        goto LAB73;

LAB74:    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t40);
    t29 = (t27 | t28);
    *((unsigned int *)t41) = t29;
    t39 = (t10 + 4);
    t42 = (t40 + 4);
    t43 = (t41 + 4);
    t30 = *((unsigned int *)t39);
    t33 = *((unsigned int *)t42);
    t34 = (t30 | t33);
    *((unsigned int *)t43) = t34;
    t35 = *((unsigned int *)t43);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB70;

LAB71:    *((unsigned int *)t40) = 1;
    goto LAB74;

LAB73:    t22 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB74;

LAB75:    t37 = *((unsigned int *)t41);
    t38 = *((unsigned int *)t43);
    *((unsigned int *)t41) = (t37 | t38);
    t44 = (t10 + 4);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t10);
    t31 = (t48 & t47);
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t40);
    t32 = (t51 & t50);
    t52 = (~(t31));
    t53 = (~(t32));
    t54 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t54 & t52);
    t55 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t55 & t53);
    goto LAB77;

LAB78:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB80;

LAB82:    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t13 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB81;

}


extern void work_m_05593538887786872581_0886308060_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_05593538887786872581_0886308060", "isim/ALUtb_isim_beh.exe.sim/work/m_05593538887786872581_0886308060.didat");
	xsi_register_executes(pe);
}
