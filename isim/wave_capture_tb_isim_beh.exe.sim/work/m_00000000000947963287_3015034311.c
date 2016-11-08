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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab5/wave_capture.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {15, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {255U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {127U, 0U};



static void Always_54_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char t18[8];
    char t29[8];
    char t43[8];
    char t48[8];
    char t64[8];
    char t72[8];
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
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    t3 = (t0 + 2760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
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

LAB7:    xsi_set_current_line(61, ng0);

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1932);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB12:    xsi_set_current_line(63, ng0);

LAB19:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2116);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = (t0 + 852U);
    t5 = (t2 + 44U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t16, 32, t4, t11, 2, t12, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t19 = (t16 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t16);
    t7 = *((unsigned int *)t17);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t19);
    t10 = *((unsigned int *)t20);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t19);
    t24 = *((unsigned int *)t20);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB23;

LAB20:    if (t25 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t18) = 1;

LAB23:    memset(t29, 0, 8);
    t30 = (t18 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t18);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t30) != 0)
        goto LAB26;

LAB27:    t37 = (t29 + 4);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB28;

LAB29:    memcpy(t72, t29, 8);

LAB30:    memset(t15, 0, 8);
    t103 = (t72 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t72);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t103) != 0)
        goto LAB44;

LAB45:    t110 = (t15 + 4);
    t111 = *((unsigned int *)t15);
    t112 = *((unsigned int *)t110);
    t113 = (t111 || t112);
    if (t113 > 0)
        goto LAB46;

LAB47:    t115 = *((unsigned int *)t15);
    t116 = (~(t115));
    t117 = *((unsigned int *)t110);
    t118 = (t116 || t117);
    if (t118 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t110) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t15) > 0)
        goto LAB52;

LAB53:    memcpy(t14, t119, 8);

LAB54:    t120 = (t0 + 1932);
    xsi_vlogvar_assign_value(t120, t14, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 16);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1704U);
    t4 = *((char **)t2);
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB18;

LAB14:    xsi_set_current_line(69, ng0);

LAB55:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 65535U);
    if (t10 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t4) != 0)
        goto LAB58;

LAB59:    t12 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB60;

LAB61:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t12) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t15) > 0)
        goto LAB66;

LAB67:    memcpy(t14, t18, 8);

LAB68:    t20 = (t0 + 2116);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 8);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1612U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t16, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t11);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB72;

LAB69:    if (t25 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t16) = 1;

LAB72:    memset(t15, 0, 8);
    t17 = (t16 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    t33 = *((unsigned int *)t16);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t17) != 0)
        goto LAB75;

LAB76:    t20 = (t15 + 4);
    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t20);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB77;

LAB78:    t51 = *((unsigned int *)t15);
    t52 = (~(t51));
    t53 = *((unsigned int *)t20);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t20) > 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t15) > 0)
        goto LAB83;

LAB84:    memcpy(t14, t30, 8);

LAB85:    t36 = (t0 + 1932);
    xsi_vlogvar_assign_value(t36, t14, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 16);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1704U);
    t4 = *((char **)t2);
    t2 = (t0 + 2208);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 1);
    goto LAB18;

LAB16:    xsi_set_current_line(75, ng0);

LAB86:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t4) != 0)
        goto LAB89;

LAB90:    t12 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB91;

LAB92:    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t12) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t15) > 0)
        goto LAB97;

LAB98:    memcpy(t14, t19, 8);

LAB99:    t20 = (t0 + 1932);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 968U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t2) != 0)
        goto LAB102;

LAB103:    t11 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t11);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB104;

LAB105:    t52 = *((unsigned int *)t15);
    t53 = (~(t52));
    t54 = *((unsigned int *)t11);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t11) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t15) > 0)
        goto LAB110;

LAB111:    memcpy(t14, t36, 8);

LAB112:    t30 = (t0 + 2208);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 16);
    goto LAB18;

LAB22:    t28 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t29) = 1;
    goto LAB27;

LAB26:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB27;

LAB28:    t41 = (t0 + 1520U);
    t42 = *((char **)t41);
    t41 = (t0 + 1496U);
    t44 = (t41 + 44U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t43, 32, t42, t45, 2, t46, 32, 1);
    t47 = ((char*)((ng4)));
    memset(t48, 0, 8);
    t49 = (t43 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB34;

LAB31:    if (t60 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t48) = 1;

LAB34:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t65) != 0)
        goto LAB37;

LAB38:    t73 = *((unsigned int *)t29);
    t74 = *((unsigned int *)t64);
    t75 = (t73 & t74);
    *((unsigned int *)t72) = t75;
    t76 = (t29 + 4);
    t77 = (t64 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB30;

LAB33:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t64) = 1;
    goto LAB38;

LAB37:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB38;

LAB39:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    t86 = (t29 + 4);
    t87 = (t64 + 4);
    t88 = *((unsigned int *)t29);
    t89 = (~(t88));
    t90 = *((unsigned int *)t86);
    t91 = (~(t90));
    t92 = *((unsigned int *)t64);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (~(t94));
    t13 = (t89 & t91);
    t96 = (t93 & t95);
    t97 = (~(t13));
    t98 = (~(t96));
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t97);
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t100 & t98);
    t101 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t101 & t97);
    t102 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t102 & t98);
    goto LAB41;

LAB42:    *((unsigned int *)t15) = 1;
    goto LAB45;

LAB44:    t109 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB45;

LAB46:    t114 = ((char*)((ng5)));
    goto LAB47;

LAB48:    t119 = ((char*)((ng1)));
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t14, 2, t114, 2, t119, 2);
    goto LAB54;

LAB52:    memcpy(t14, t114, 8);
    goto LAB54;

LAB56:    *((unsigned int *)t15) = 1;
    goto LAB59;

LAB58:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB59;

LAB60:    t17 = (t0 + 1612U);
    t19 = *((char **)t17);
    t17 = ((char*)((ng4)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t19, 8, t17, 32);
    goto LAB61;

LAB62:    t20 = (t0 + 1612U);
    t28 = *((char **)t20);
    memcpy(t18, t28, 8);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t14, 32, t16, 32, t18, 32);
    goto LAB68;

LAB66:    memcpy(t14, t16, 8);
    goto LAB68;

LAB71:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t15) = 1;
    goto LAB76;

LAB75:    t19 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB76;

LAB77:    t28 = ((char*)((ng7)));
    goto LAB78;

LAB79:    t30 = ((char*)((ng5)));
    goto LAB80;

LAB81:    xsi_vlog_unsigned_bit_combine(t14, 2, t28, 2, t30, 2);
    goto LAB85;

LAB83:    memcpy(t14, t28, 8);
    goto LAB85;

LAB87:    *((unsigned int *)t15) = 1;
    goto LAB90;

LAB89:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB90;

LAB91:    t17 = ((char*)((ng1)));
    goto LAB92;

LAB93:    t19 = ((char*)((ng7)));
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t14, 2, t17, 2, t19, 2);
    goto LAB99;

LAB97:    memcpy(t14, t17, 8);
    goto LAB99;

LAB100:    *((unsigned int *)t15) = 1;
    goto LAB103;

LAB102:    t5 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB103;

LAB104:    t12 = (t0 + 1704U);
    t17 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t17 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t26 & t25);
    t31 = (t27 & 1U);
    if (t31 != 0)
        goto LAB116;

LAB114:    if (*((unsigned int *)t12) == 0)
        goto LAB113;

LAB115:    t19 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t19) = 1;

LAB116:    t20 = (t16 + 4);
    t28 = (t17 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    *((unsigned int *)t16) = t33;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB118;

LAB117:    t40 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t40 & 1U);
    t51 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t51 & 1U);
    goto LAB105;

LAB106:    t30 = (t0 + 1704U);
    t36 = *((char **)t30);
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t14, 1, t16, 1, t36, 1);
    goto LAB112;

LAB110:    memcpy(t14, t16, 8);
    goto LAB112;

LAB113:    *((unsigned int *)t16) = 1;
    goto LAB116;

LAB118:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t34 | t35);
    t38 = *((unsigned int *)t20);
    t39 = *((unsigned int *)t28);
    *((unsigned int *)t20) = (t38 | t39);
    goto LAB117;

}

static void Cont_84_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1428U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t50 = (t0 + 3580);
    t51 = (t50 + 32U);
    t52 = *((char **)t51);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    memset(t54, 0, 8);
    t55 = 255U;
    t56 = t55;
    t57 = (t3 + 4);
    t58 = *((unsigned int *)t3);
    t55 = (t55 & t58);
    t59 = *((unsigned int *)t57);
    t56 = (t56 & t59);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t61 | t55);
    t62 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t62 | t56);
    xsi_driver_vfirst_trans(t50, 0, 7);
    t63 = (t0 + 3512);
    *((int *)t63) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1520U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t33 + 4);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (t37 >> 8);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 8);
    *((unsigned int *)t34) = t40;
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 255U);
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 255U);
    t43 = ((char*)((ng8)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t33, 32, t43, 32);
    goto LAB13;

LAB14:    t49 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t44, 32, t49, 32);
    goto LAB20;

LAB18:    memcpy(t3, t44, 8);
    goto LAB20;

}

static void Cont_85_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
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
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1428U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t54 = *((unsigned int *)t4);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t58, 8);

LAB20:    t59 = (t0 + 3616);
    t60 = (t59 + 32U);
    t61 = *((char **)t60);
    t62 = (t61 + 40U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 511U;
    t65 = t64;
    t66 = (t3 + 4);
    t67 = *((unsigned int *)t3);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans(t59, 0, 8);
    t72 = (t0 + 3520);
    *((int *)t72) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1612U);
    t35 = *((char **)t34);
    t34 = (t0 + 1336U);
    t37 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t37 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t37);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t34) == 0)
        goto LAB21;

LAB23:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;

LAB24:    t44 = (t36 + 4);
    t45 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    *((unsigned int *)t36) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB26;

LAB25:    t52 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    xsi_vlogtype_concat(t33, 32, 9, 2U, t36, 1, t35, 8);
    goto LAB13;

LAB14:    t58 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t58, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB21:    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB26:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB25;

}

static void Cont_86_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 3164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1428U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t38, 8);

LAB20:    t39 = (t0 + 3652);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 0);
    t52 = (t0 + 3528);
    *((int *)t52) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t38 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t38, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

}

static void Cont_87_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
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
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3308U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
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

LAB15:    memcpy(t3, t23, 8);

LAB16:    t21 = (t0 + 3688);
    t24 = (t21 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t36 = (t0 + 3536);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t21 = (t0 + 1704U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t23, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}


extern void work_m_00000000000947963287_3015034311_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)Cont_84_1,(void *)Cont_85_2,(void *)Cont_86_3,(void *)Cont_87_4};
	xsi_register_didat("work_m_00000000000947963287_3015034311", "isim/wave_capture_tb_isim_beh.exe.sim/work/m_00000000000947963287_3015034311.didat");
	xsi_register_executes(pe);
}
