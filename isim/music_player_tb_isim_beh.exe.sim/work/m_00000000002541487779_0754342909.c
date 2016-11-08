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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab5/mcu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {4U, 4U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {5U, 4U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {6U, 4U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {7U, 4U};
static unsigned int ng9[] = {7U, 3U};
static unsigned int ng10[] = {3U, 3U};



static void Always_15_0(char *t0)
{
    char t14[8];
    char t16[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 2716);
    *((int *)t2) = 1;
    t3 = (t0 + 2116);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t0 + 1564);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB39:
LAB27:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

LAB9:    xsi_set_current_line(18, ng0);

LAB12:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);

LAB13:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_xcompare(t5, 3, t4, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_xcompare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_xcompare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_xcompare(t5, 3, t2, 3);
    if (t13 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB24:    goto LAB11;

LAB14:    xsi_set_current_line(20, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 1564);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB24;

LAB16:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB18:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB20:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB24;

LAB25:    xsi_set_current_line(28, ng0);

LAB28:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1336U);
    t11 = *((char **)t4);

LAB29:    t4 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_xcompare(t11, 3, t4, 3);
    if (t13 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_xcompare(t11, 3, t2, 3);
    if (t13 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB36:    goto LAB27;

LAB30:    xsi_set_current_line(30, ng0);
    t12 = (t0 + 1336U);
    t15 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t12) = t23;
    t24 = (t0 + 1336U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t26 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t26) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t24) = t33;
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 3, 3, 3U, t34, 1, t26, 1, t16, 1);
    t35 = (t0 + 1564);
    xsi_vlogvar_assign_value(t35, t14, 0, 0, 3);
    goto LAB36;

LAB32:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1336U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t16) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    t18 = (t10 & 1);
    *((unsigned int *)t3) = t18;
    t15 = (t0 + 1336U);
    t17 = *((char **)t15);
    memset(t26, 0, 8);
    t15 = (t26 + 4);
    t24 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t24);
    t23 = (t22 >> 1);
    t28 = (t23 & 1);
    *((unsigned int *)t15) = t28;
    t25 = ((char*)((ng3)));
    xsi_vlogtype_concat(t14, 3, 3, 3U, t25, 1, t26, 1, t16, 1);
    t27 = (t0 + 1564);
    xsi_vlogvar_assign_value(t27, t14, 0, 0, 3);
    goto LAB36;

LAB37:    xsi_set_current_line(36, ng0);

LAB40:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1336U);
    t12 = *((char **)t4);

LAB41:    t4 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_xcompare(t12, 3, t4, 3);
    if (t13 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_xcompare(t12, 3, t2, 3);
    if (t13 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_xcompare(t12, 3, t2, 3);
    if (t13 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_xcompare(t12, 3, t2, 3);
    if (t13 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB52:    goto LAB39;

LAB42:    xsi_set_current_line(38, ng0);
    t15 = ((char*)((ng3)));
    t17 = (t0 + 1564);
    xsi_vlogvar_assign_value(t17, t15, 0, 0, 3);
    goto LAB52;

LAB44:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB52;

LAB46:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB52;

LAB48:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1564);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB52;

}

static void Cont_48_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;

LAB0:    t1 = (t0 + 2232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = (t0 + 876U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t34 = (t0 + 968U);
    t35 = *((char **)t34);
    t37 = *((unsigned int *)t7);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t34 = (t7 + 4);
    t40 = (t35 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB7;

LAB8:
LAB9:    memset(t4, 0, 8);
    t63 = (t36 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t63) != 0)
        goto LAB12;

LAB13:    t70 = (t4 + 4);
    t71 = *((unsigned int *)t4);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB14;

LAB15:    t75 = *((unsigned int *)t4);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t70) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t79, 8);

LAB22:    t80 = (t0 + 2784);
    t81 = (t80 + 32U);
    t82 = *((char **)t81);
    t83 = (t82 + 40U);
    t84 = *((char **)t83);
    memset(t84, 0, 8);
    t85 = 1U;
    t86 = t85;
    t87 = (t3 + 4);
    t88 = *((unsigned int *)t3);
    t85 = (t85 & t88);
    t89 = *((unsigned int *)t87);
    t86 = (t86 & t89);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 | t85);
    t92 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t92 | t86);
    xsi_driver_vfirst_trans(t80, 0, 0);
    t93 = (t0 + 2724);
    *((int *)t93) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t36) = (t47 | t48);
    t49 = (t7 + 4);
    t50 = (t35 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t7);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB9;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t69 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB13;

LAB14:    t74 = ((char*)((ng3)));
    goto LAB15;

LAB16:    t79 = ((char*)((ng1)));
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t74, 1, t79, 1);
    goto LAB22;

LAB20:    memcpy(t3, t74, 8);
    goto LAB22;

}

static void Cont_49_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t36[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;

LAB0:    t1 = (t0 + 2376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    t2 = (t0 + 968U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t34 = (t0 + 876U);
    t35 = *((char **)t34);
    t37 = *((unsigned int *)t7);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t34 = (t7 + 4);
    t40 = (t35 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB7;

LAB8:
LAB9:    memset(t4, 0, 8);
    t63 = (t36 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t63) != 0)
        goto LAB12;

LAB13:    t70 = (t4 + 4);
    t71 = *((unsigned int *)t4);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB14;

LAB15:    t75 = *((unsigned int *)t4);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t70) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t81, 8);

LAB22:    t89 = (t0 + 2820);
    t90 = (t89 + 32U);
    t91 = *((char **)t90);
    t92 = (t91 + 40U);
    t93 = *((char **)t92);
    memset(t93, 0, 8);
    t94 = 1U;
    t95 = t94;
    t96 = (t3 + 4);
    t97 = *((unsigned int *)t3);
    t94 = (t94 & t97);
    t98 = *((unsigned int *)t96);
    t95 = (t95 & t98);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 | t94);
    t101 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t101 | t95);
    xsi_driver_vfirst_trans(t89, 0, 0);
    t102 = (t0 + 2732);
    *((int *)t102) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

LAB7:    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t36) = (t47 | t48);
    t49 = (t7 + 4);
    t50 = (t35 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t7);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB9;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t69 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB13;

LAB14:    t74 = ((char*)((ng1)));
    goto LAB15;

LAB16:    t79 = (t0 + 1336U);
    t80 = *((char **)t79);
    memset(t81, 0, 8);
    t79 = (t81 + 4);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 2);
    t85 = (t84 & 1);
    *((unsigned int *)t81) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 >> 2);
    t88 = (t87 & 1);
    *((unsigned int *)t79) = t88;
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 1, t74, 1, t81, 1);
    goto LAB22;

LAB20:    memcpy(t3, t74, 8);
    goto LAB22;

}

static void Cont_50_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 692U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t31 = (t0 + 2856);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 3U;
    t37 = t36;
    t38 = (t3 + 4);
    t39 = *((unsigned int *)t3);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 1);
    t44 = (t0 + 2740);
    *((int *)t44) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t22 = (t0 + 1336U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t21 + 4);
    t24 = (t23 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t22) = t28;
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 3U);
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 3U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 2, t16, 2, t21, 2);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}


extern void work_m_00000000002541487779_0754342909_init()
{
	static char *pe[] = {(void *)Always_15_0,(void *)Cont_48_1,(void *)Cont_49_2,(void *)Cont_50_3};
	xsi_register_didat("work_m_00000000002541487779_0754342909", "isim/music_player_tb_isim_beh.exe.sim/work/m_00000000002541487779_0754342909.didat");
	xsi_register_executes(pe);
}
