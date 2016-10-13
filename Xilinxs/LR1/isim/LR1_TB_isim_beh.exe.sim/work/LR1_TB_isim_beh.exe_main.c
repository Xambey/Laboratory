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
    unisims_ver_m_00000000002321652869_2814283601_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000003960923341_1435897813_init();
    unisims_ver_m_00000000001740809392_3445437528_init();
    unisims_ver_m_00000000002375989755_0561088488_init();
    unisims_ver_m_00000000000603860430_3432996463_init();
    unisims_ver_m_00000000002549801008_4245414866_init();
    unisims_ver_m_00000000001461499759_1414817250_init();
    unisims_ver_m_00000000001762375489_3501834183_init();
    unisims_ver_m_00000000003344785779_3356631773_init();
    work_m_00000000000725042126_3400776048_init();
    work_m_00000000000740158898_2394137999_init();
    work_m_00000000000530879313_2247090866_init();
    work_m_00000000002209629687_2389847537_init();
    work_m_00000000004236047757_2136638191_init();
    work_m_00000000000559770654_2237856516_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000559770654_2237856516");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}