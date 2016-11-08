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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003349729749_3572680952_init();
    work_m_00000000002129617870_1865307366_init();
    work_m_00000000003888313001_0882512257_init();
    work_m_00000000000036348317_3286857276_init();
    work_m_00000000003588250860_1032230843_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003588250860_1032230843");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
