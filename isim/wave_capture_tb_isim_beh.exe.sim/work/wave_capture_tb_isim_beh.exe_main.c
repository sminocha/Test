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
    work_m_00000000003349729749_0923144499_init();
    work_m_00000000003349729749_1311271543_init();
    work_m_00000000003349729749_3454663097_init();
    work_m_00000000003349729749_4207975584_init();
    work_m_00000000000947963287_3015034311_init();
    work_m_00000000002308808019_0118774540_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002308808019_0118774540");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
