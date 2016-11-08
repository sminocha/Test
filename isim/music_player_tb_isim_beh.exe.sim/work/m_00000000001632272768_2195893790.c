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
static const char *ng0 = "//afs/ir/class/ee108/groups/02/lab5/song_reader.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void NetDecl_29_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1428U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 7, 7, 2U, t5, 2, t4, 5);
    t2 = (t0 + 3640);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 6U);
    t18 = (t0 + 3556);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_52_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t28[8];
    char t34[8];
    char t35[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3564);
    *((int *)t2) = 1;
    t3 = (t0 + 2812);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1796U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);
    t9 = (t0 + 784U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t9) != 0)
        goto LAB22;

LAB23:    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB24;

LAB25:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t17) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t8) > 0)
        goto LAB30;

LAB31:    memcpy(t7, t26, 8);

LAB32:    t27 = (t0 + 2116);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t3) != 0)
        goto LAB35;

LAB36:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB37;

LAB38:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t10);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t10) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t8) > 0)
        goto LAB43;

LAB44:    memcpy(t7, t17, 8);

LAB45:    t21 = (t0 + 2116);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 3);
    goto LAB19;

LAB11:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t3) != 0)
        goto LAB48;

LAB49:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB50;

LAB51:    t22 = *((unsigned int *)t8);
    t23 = (~(t22));
    t24 = *((unsigned int *)t10);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t10) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t8) > 0)
        goto LAB56;

LAB57:    memcpy(t7, t17, 8);

LAB58:    t21 = (t0 + 2116);
    xsi_vlogvar_assign_value(t21, t7, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB62;

LAB60:    if (*((unsigned int *)t3) == 0)
        goto LAB59;

LAB61:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;

LAB62:    memset(t8, 0, 8);
    t10 = (t28 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (~(t18));
    t20 = *((unsigned int *)t28);
    t22 = (t20 & t19);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t10) != 0)
        goto LAB65;

LAB66:    t17 = (t8 + 4);
    t24 = *((unsigned int *)t8);
    t25 = *((unsigned int *)t17);
    t29 = (t24 || t25);
    if (t29 > 0)
        goto LAB67;

LAB68:    t30 = *((unsigned int *)t8);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t17) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t8) > 0)
        goto LAB73;

LAB74:    memcpy(t7, t34, 8);

LAB75:    t52 = (t0 + 2116);
    xsi_vlogvar_assign_value(t52, t7, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 784U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t3) != 0)
        goto LAB91;

LAB92:    t10 = (t28 + 4);
    t18 = *((unsigned int *)t28);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB93;

LAB94:    memcpy(t53, t28, 8);

LAB95:    memset(t8, 0, 8);
    t79 = (t53 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t53);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t79) != 0)
        goto LAB111;

LAB112:    t86 = (t8 + 4);
    t87 = *((unsigned int *)t8);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB113;

LAB114:    t91 = *((unsigned int *)t8);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t86) > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t8) > 0)
        goto LAB119;

LAB120:    memcpy(t7, t95, 8);

LAB121:    t96 = (t0 + 2116);
    xsi_vlogvar_assign_value(t96, t7, 0, 0, 3);
    goto LAB19;

LAB20:    *((unsigned int *)t8) = 1;
    goto LAB23;

LAB22:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB24:    t21 = ((char*)((ng2)));
    goto LAB25;

LAB26:    t26 = ((char*)((ng1)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t7, 3, t21, 3, t26, 3);
    goto LAB32;

LAB30:    memcpy(t7, t21, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB37:    t16 = ((char*)((ng3)));
    goto LAB38;

LAB39:    t17 = ((char*)((ng1)));
    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t7, 3, t16, 3, t17, 3);
    goto LAB45;

LAB43:    memcpy(t7, t16, 8);
    goto LAB45;

LAB46:    *((unsigned int *)t8) = 1;
    goto LAB49;

LAB48:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB49;

LAB50:    t16 = ((char*)((ng4)));
    goto LAB51;

LAB52:    t17 = ((char*)((ng1)));
    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t7, 3, t16, 3, t17, 3);
    goto LAB58;

LAB56:    memcpy(t7, t16, 8);
    goto LAB58;

LAB59:    *((unsigned int *)t28) = 1;
    goto LAB62;

LAB63:    *((unsigned int *)t8) = 1;
    goto LAB66;

LAB65:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB66;

LAB67:    t21 = ((char*)((ng1)));
    goto LAB68;

LAB69:    t26 = (t0 + 968U);
    t27 = *((char **)t26);
    memset(t35, 0, 8);
    t26 = (t27 + 4);
    t36 = *((unsigned int *)t26);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t26) != 0)
        goto LAB78;

LAB79:    t42 = (t35 + 4);
    t43 = *((unsigned int *)t35);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB80;

LAB81:    t47 = *((unsigned int *)t35);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t42) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t35) > 0)
        goto LAB86;

LAB87:    memcpy(t34, t51, 8);

LAB88:    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t7, 3, t21, 3, t34, 3);
    goto LAB75;

LAB73:    memcpy(t7, t21, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t35) = 1;
    goto LAB79;

LAB78:    t41 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB79;

LAB80:    t46 = ((char*)((ng5)));
    goto LAB81;

LAB82:    t51 = ((char*)((ng4)));
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t34, 3, t46, 3, t51, 3);
    goto LAB88;

LAB86:    memcpy(t34, t46, 8);
    goto LAB88;

LAB89:    *((unsigned int *)t28) = 1;
    goto LAB92;

LAB91:    t9 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    t16 = (t0 + 1888U);
    t17 = *((char **)t16);
    memset(t34, 0, 8);
    t16 = (t17 + 4);
    t22 = *((unsigned int *)t16);
    t23 = (~(t22));
    t24 = *((unsigned int *)t17);
    t25 = (t24 & t23);
    t29 = (t25 & 1U);
    if (t29 != 0)
        goto LAB99;

LAB97:    if (*((unsigned int *)t16) == 0)
        goto LAB96;

LAB98:    t21 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t21) = 1;

LAB99:    t26 = (t34 + 4);
    t27 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t31 = (~(t30));
    *((unsigned int *)t34) = t31;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB101;

LAB100:    t38 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t38 & 1U);
    t39 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t39 & 1U);
    memset(t35, 0, 8);
    t41 = (t34 + 4);
    t40 = *((unsigned int *)t41);
    t43 = (~(t40));
    t44 = *((unsigned int *)t34);
    t45 = (t44 & t43);
    t47 = (t45 & 1U);
    if (t47 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t41) != 0)
        goto LAB104;

LAB105:    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t35);
    t50 = (t48 & t49);
    *((unsigned int *)t53) = t50;
    t46 = (t28 + 4);
    t51 = (t35 + 4);
    t52 = (t53 + 4);
    t54 = *((unsigned int *)t46);
    t55 = *((unsigned int *)t51);
    t56 = (t54 | t55);
    *((unsigned int *)t52) = t56;
    t57 = *((unsigned int *)t52);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB95;

LAB96:    *((unsigned int *)t34) = 1;
    goto LAB99;

LAB101:    t32 = *((unsigned int *)t34);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t34) = (t32 | t33);
    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t36 | t37);
    goto LAB100;

LAB102:    *((unsigned int *)t35) = 1;
    goto LAB105;

LAB104:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB105;

LAB106:    t59 = *((unsigned int *)t53);
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t53) = (t59 | t60);
    t61 = (t28 + 4);
    t62 = (t35 + 4);
    t63 = *((unsigned int *)t28);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t35);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t76 & t74);
    t77 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t77 & t73);
    t78 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t78 & t74);
    goto LAB108;

LAB109:    *((unsigned int *)t8) = 1;
    goto LAB112;

LAB111:    t85 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB112;

LAB113:    t90 = ((char*)((ng2)));
    goto LAB114;

LAB115:    t95 = ((char*)((ng1)));
    goto LAB116;

LAB117:    xsi_vlog_unsigned_bit_combine(t7, 3, t90, 3, t95, 3);
    goto LAB121;

LAB119:    memcpy(t7, t90, 8);
    goto LAB121;

}

static void Cont_66_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t37[8];
    char t42[8];
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1796U);
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

LAB13:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t45 = (t0 + 3712);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    t48 = (t47 + 40U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 31U;
    t51 = t50;
    t52 = (t3 + 4);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 4);
    t58 = (t0 + 3676);
    t59 = (t58 + 32U);
    t60 = *((char **)t59);
    t61 = (t60 + 40U);
    t62 = *((char **)t61);
    memset(t62, 0, 8);
    t63 = 32U;
    t64 = t63;
    t65 = (t3 + 4);
    t66 = *((unsigned int *)t3);
    t63 = (t63 & t66);
    t67 = *((unsigned int *)t65);
    t64 = (t64 & t67);
    t63 = (t63 >> 5);
    t64 = (t64 >> 5);
    t68 = (t62 + 4);
    t69 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t69 | t63);
    t70 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t70 | t64);
    xsi_driver_vfirst_trans(t58, 0, 0);
    t71 = (t0 + 3572);
    *((int *)t71) = 1;

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

LAB12:    t34 = (t0 + 1428U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng1)));
    xsi_vlogtype_concat(t33, 6, 6, 2U, t34, 1, t35, 5);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 6, t33, 6, t36, 6);
    goto LAB13;

LAB14:    t43 = (t0 + 1428U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng1)));
    xsi_vlogtype_concat(t42, 6, 6, 2U, t43, 1, t44, 5);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 6, t37, 6, t42, 6);
    goto LAB20;

LAB18:    memcpy(t3, t37, 8);
    goto LAB20;

}

static void Cont_69_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1796U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 3748);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 3580);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Cont_70_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = (t0 + 3820);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 63U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 5);
    t16 = (t0 + 3784);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 4032U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t21 = (t21 >> 6);
    t22 = (t22 >> 6);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 5);
    t29 = (t0 + 3588);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_71_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t0 + 3856);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 3596);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_00000000001632272768_2195893790_init()
{
	static char *pe[] = {(void *)NetDecl_29_0,(void *)Always_52_1,(void *)Cont_66_2,(void *)Cont_69_3,(void *)Cont_70_4,(void *)Cont_71_5};
	xsi_register_didat("work_m_00000000001632272768_2195893790", "isim/music_player_tb_isim_beh.exe.sim/work/m_00000000001632272768_2195893790.didat");
	xsi_register_executes(pe);
}
